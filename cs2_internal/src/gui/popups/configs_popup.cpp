#include <gui/popups/configs_popup.h>
#include <gui/gui.h>
#include <gui/controls/list.h>
#include <gui/controls/text_input.h>
#include <gui/controls/selectable.h>
#include <gui/controls/button.h>
#include <gui/popups/dialog_box.h>
#include <game/cfg.h>
#include <menu/menu.h>
#include <utils/util.h>

#include <fstream>
#include <sstream>

#pragma push_macro("concat")
#undef concat
#include <filesystem>

#include "game/game.h"
#pragma pop_macro("concat")

using namespace evo::gui;
using namespace evo::ren;

namespace fs = std::filesystem;

namespace gui::popups
{
	//using namespace networking;

	void refresh_configs(bits v)
	{
#ifdef CS2_CLOUD
		if (cfg.is_requesting)
			return;

		cfg.is_requesting = true;
		cfg.has_data = false;

		conn->send_config_refresh();

		std::thread([]()
		{
			const auto items = ctx->find<list>(GUI_HASH("configs>list"));
			if (!items)
				return;

			items->show_spinner = true;


			while (!cfg.has_data)
			{
				std::this_thread::sleep_for(std::chrono::milliseconds(5));
				std::this_thread::yield();
			}

			std::lock_guard lock(menu::men.render_mtx);
			items->clear();
			items->process_queues();

			int cnt{};
			for (auto &i : cfg.cfg_list)
			{
				const auto c = std::make_shared<selectable>(control_id{hash(i.key)}, i.name, (char)cnt++);
				c->is_loaded = cfg.currently_loaded == i.key;
				items->add(c);
			}

			items->process_queues();
			items->reset();
			items->callback(items->value.get());
			items->show_spinner = false;
		}).detach();
#else
		const auto items = ctx->find<list>(GUI_HASH("configs>list"));
		if (!items)
			return;

		cfg.cfg_list.clear();

		items->clear();
		items->process_queues();

		for (const auto &f : fs::directory_iterator(DEC_INLINE(game->game_dir) + XOR("fatality")))
		{
			if (f.path().extension() != XOR(".cfg"))
				continue;

			cfg.cfg_list.push_back(
				cfg_t::config_data{f.path().filename().replace_extension(XOR("")).string(), f.path().filename().replace_extension(XOR("")).string(), false});

			const auto c = std::make_shared<selectable>(control_id{hash(fs::absolute(f.path()).string())}, f.path().filename().replace_extension(XOR("")).string());
			c->is_loaded = fs::path(cfg.last_changed_config).filename() == f.path().filename();

			items->add(c);
		}

		items->process_queues();
		items->reset();
		items->callback(items->value.get());
#endif
	}

	void create_config(bits v, const std::string &name)
	{
#ifdef CS2_CLOUD
		if (cfg.is_requesting)
			return;

		cfg.is_requesting = true;
		cfg.has_data = false;

		conn->send_config_create(name);

		std::thread([](bits v)
		{
			while (!cfg.has_data)
			{
				std::this_thread::sleep_for(std::chrono::milliseconds(5));
				std::this_thread::yield();
			}

			if (!cfg.config_created)
			{
				notify.add(std::make_shared<notification>(XOR("Config"), XOR("Unable to create config"),
														  ctx->res.icons.settings));
				return;
			}

			refresh_configs(v);
		}, v).detach();
#else
		if (cfg.is_loading)
			return;

		if (name.empty())
			return;

		std::ofstream _file(DEC_INLINE(game->game_dir) + XOR("fatality/") + name + XOR(".cfg"));
		_file.close();

		refresh_configs(v);
#endif
	}

	void delete_config(bits v)
	{
#ifdef CS2_CLOUD
		if (cfg.is_requesting || cfg.cfg_list.empty())
			return;

		cfg.is_requesting = true;
		cfg.has_data = false;

		conn->send_config_delete(cfg.cfg_list[(size_t)v % cfg.cfg_list.size()].key);

		std::thread([](bits v)
		{
			while (!cfg.has_data)
			{
				std::this_thread::sleep_for(std::chrono::milliseconds(5));
				std::this_thread::yield();
			}

			refresh_configs(v);
		}, v).detach();
#else
		if (cfg.is_loading)
			return;

		const auto file = DEC_INLINE(game->game_dir) + XOR("fatality/") + cfg.cfg_list[(size_t)v % cfg.cfg_list.size()].name + XOR(".cfg");
		fs::remove(file);
		refresh_configs(v);
#endif

	}

	void save_config(bits v)
	{
#ifdef CS2_CLOUD
		const auto time = std::chrono::system_clock::now();

		VIRTUALIZER_TIGER_WHITE_START;
		if (cfg.is_requesting || std::chrono::duration_cast<std::chrono::seconds>(time - cfg.last_cfg_action).count() <
			1 || cfg.cfg_list.empty())
			return;

		cfg.last_cfg_action = time;
		auto &c = cfg.cfg_list[(size_t)v % cfg.cfg_list.size()];

		cfg.currently_loaded = c.key;
		cfg.is_requesting = true;
		cfg.has_data = false;
		cfg.last_changed_config = c.key;
		cfg.is_dangerous = false;

		// write config to stream
		std::stringstream buf;
		ctx->preserve_hotkey_state();
		cfg.save(buf);
		ctx->restore_hotkey_state();

		conn->send_config_upload(c.key, util::base64_encode(buf.str()));

		VIRTUALIZER_TIGER_WHITE_END;

		std::thread([](bits v)
		{
			while (!cfg.has_data)
			{
				std::this_thread::sleep_for(std::chrono::milliseconds(5));
				std::this_thread::yield();
			}

			notify.add(std::make_shared<notification>(XOR("Config"), XOR("Successfully saved"),
													  ctx->res.icons.settings));
		}, v).detach();
#else
		if (cfg.is_loading)
			return;

		auto &c = cfg.cfg_list[(size_t)v % cfg.cfg_list.size()];

		const auto file = DEC_INLINE(game->game_dir) + XOR("fatality/") + c.name + XOR(".cfg");
		cfg.save(file);

		refresh_configs(v);
#endif
	}

	void load_config(const std::string &key)
	{
#ifdef CS2_CLOUD
		const auto time = std::chrono::system_clock::now();

		VIRTUALIZER_TIGER_WHITE_START;
		if (cfg.is_requesting || std::chrono::duration_cast<std::chrono::seconds>(time - cfg.last_cfg_action).count() <
			1)
			return;

		cfg.last_cfg_action = time;
		cfg.currently_loaded = key;
		cfg.is_requesting = true;
		cfg.has_data = false;
		cfg.last_changed_config = key;
		cfg.is_dangerous = false;

		conn->send_config_download(key);
		VIRTUALIZER_TIGER_WHITE_END;
#else
		if (cfg.is_loading)
			return;

		for (auto &i : cfg.cfg_list)
		{
			if (key == i.key)
			{
				cfg.load(DEC_INLINE(game->game_dir) + XOR("fatality/") + i.name + XOR(".cfg"));
				cfg.current_data = {};


				ctx->should_update_old_value = true;
				menu::men.full_cycle_reset = true;
				break;
			}
		}
#endif
	}

	void load_config_finish()
	{
		try
		{
			if (cfg.current_data.empty())
			{
				notify.add(std::make_shared<notification>(XOR("Config"), XOR("Failed to load"), ctx->res.icons.settings));
				return;
			}

			const auto data = util::base64_decode(cfg.current_data);
			std::stringstream buf(data);
			cfg.load(buf, false);
			cfg.current_data = {};

			ctx->should_update_old_value = true;
			menu::men.full_cycle_reset = true;
			notify.add(std::make_shared<notification>(XOR("Config"), XOR("Successfully loaded"), ctx->res.icons.settings));
		}
		catch (...)
		{
			notify.add(std::make_shared<notification>(XOR("Config"), XOR("Failed to load"), ctx->res.icons.settings));
		}
	}

	void update_config(bits v)
	{
#ifdef CS2_CLOUD
		const auto upd = ctx->find<button>(GUI_HASH("configs>update"));
		if (!upd || cfg.cfg_list.empty())
			return;

		upd->tooltip = XOR("Latest version");
		upd->color = color{};
		upd->on_mouse_leave();

		auto &c = cfg.cfg_list[(size_t)v % cfg.cfg_list.size()];
		c.has_new_version = false;

		cfg.is_requesting = true;
		cfg.has_data = false;

		conn->send_config_update(c.key);

		std::thread([](const std::string &k)
		{
			while (!cfg.has_data)
			{
				std::this_thread::sleep_for(std::chrono::milliseconds(5));
				std::this_thread::yield();
			}

			if (!cfg.config_created)
			{
				notify.add(std::make_shared<notification>(XOR("Config"), XOR("Failed to update"),
														  draw.textures[GUI_HASH("icon_cloud_upd")]));
				return;
			}

			notify.add(std::make_shared<notification>(XOR("Config"), XOR("Successfully updated"),
													  draw.textures[GUI_HASH("icon_cloud_upd")]));
			if (cfg.currently_loaded == k)
				load_config(k);
		}, c.key).detach();
#endif
	}

	void configs_popup::on_first_render_call()
	{
		popup::on_first_render_call();

		const auto items = std::make_shared<list>(control_id{GUI_HASH("configs>list")}, sel, vec2{10.f, 10.f}, vec2{160.f, 186.f});
		items->legacy_mode = true;
		items->callback = [](bits v)
		{
			const auto upd = ctx->find<button>(GUI_HASH("configs>update"));
			if (!upd || cfg.cfg_list.empty())
				return;

			const auto hn = cfg.cfg_list[(size_t)v % cfg.cfg_list.size()].has_new_version;
			upd->tooltip = hn ? XOR("New version available") : XOR("Latest version");
			upd->color = hn ? colors.success : color{};
			upd->on_mouse_leave();
		};

		const auto name = std::make_shared<text_input>(control_id{GUI_HASH("configs>name")}, vec2{8.f, 202.f}, vec2{160.f, 24.f});
		name->max_length = 128;

		const auto btn_save = std::make_shared<button>(
			control_id{GUI_HASH("configs>save")}, "", draw.textures[GUI_HASH("icon_save")], vec2{176.f, 32.f}, vec2{20.f, 20.f})->make_tooltip(XOR("Save"))->as<button>();
		btn_save->callback = [ this ]()
		{
			if (cfg.is_loading || cfg.cfg_list.empty())
				return;

			const auto items = ctx->find<list>(GUI_HASH("configs>list"));
			if (!items || items->empty())
				return;

			auto &key = cfg.cfg_list[(size_t)*sel % cfg.cfg_list.size()].key;
			if (cfg.is_dangerous || cfg.last_changed_config != key)
			{
				const auto dlg = std::make_shared<dialog_box>(
					control_id{GUI_HASH("configs>save>question")}, XOR("Warning"), XOR("Are you sure you want to overwrite this config?"), db_yes_no, true);
				dlg->callback = [ & ](dialog_result r)
				{
					if (r == dr_affirmative)
						save_config(*sel);
				};

				dlg->open();
			}
			else
				save_config(*sel);

			items->for_each_control(
				[ & ](std::shared_ptr<control> &c)
				{
					const auto sel = c->as<selectable>();
					sel->is_loaded = false;
					sel->reset();
				});

			const auto s = items->at_safe<selectable>(sel.get());
			if (!s)
				return;

			s->is_loaded = true;
			s->reset();
		};

		const auto btn_load = std::make_shared<button>(
			control_id{GUI_HASH("configs>load")}, "", draw.textures[GUI_HASH("icon_load")], vec2{176.f, 8.f}, vec2{20.f, 20.f})->make_tooltip(XOR("Load"))->as<button>();
		btn_load->callback = [ this ]()
		{
			if (cfg.is_loading || cfg.cfg_list.empty())
				return;

			const auto items = ctx->find<list>(GUI_HASH("configs>list"));
			if (!items || items->empty())
				return;

			const auto s = items->at_safe<selectable>(sel.get());
			if (!s)
				return;

			load_config(cfg.cfg_list[(size_t)*sel % cfg.cfg_list.size()].key);

			items->for_each_control(
				[ & ](std::shared_ptr<control> &c)
				{
					const auto sel = c->as<selectable>();
					sel->is_loaded = false;
					sel->reset();
				});

			s->is_loaded = true;
			s->reset();
		};

		const auto btn_import = std::make_shared<button>(
			control_id{GUI_HASH("configs>import")}, "", draw.textures[GUI_HASH("icon_import")], vec2{176.f, 64.f}, vec2{20.f, 20.f})->make_tooltip(
			XOR("Import from clipboard"))->as<button>();
		btn_import->callback = []()
		{
			load_config(clipboard::get());
		};

		const auto btn_export = std::make_shared<button>(
			control_id{GUI_HASH("configs>export")}, "", draw.textures[GUI_HASH("icon_export")], vec2{176.f, 88.f}, vec2{20.f, 20.f})->make_tooltip(
			XOR("Export to clipboard"))->as<button>();
		btn_export->callback = [ this ]()
		{
			if (cfg.cfg_list.empty())
				return;

			clipboard::set(cfg.cfg_list[(size_t)sel.get() % cfg.cfg_list.size()].key);
			notify.add(std::make_shared<notification>(XOR("Config"), XOR("Exported to clipboard"), ctx->res.icons.settings));
		};

		const auto btn_upd = std::make_shared<button>(
			control_id{GUI_HASH("configs>update")}, "", draw.textures[GUI_HASH("icon_cloud_upd")], vec2{176.f, 120.f}, vec2{20.f, 20.f})->make_tooltip(
			XOR("Latest version"))->as<button>();
		btn_upd->callback = [ this ]()
		{
			if (cfg.cfg_list.empty())
				return;

			auto &hn = cfg.cfg_list[(size_t)sel.get() % cfg.cfg_list.size()];
			if (!hn.has_new_version)
				return;

			const auto dlg = std::make_shared<dialog_box>(
				control_id{GUI_HASH("configs>update>question")}, XOR("Warning"), XOR(
					"Updating config to a new version will erase your changes. Are you sure you want to continue?"), db_yes_no, true);
			dlg->callback = [ & ](dialog_result r)
			{
				if (r == dr_affirmative)
					update_config(sel.get());
			};

			dlg->open();
		};

		const auto btn_delete = std::make_shared<button>(
			control_id{GUI_HASH("configs>delete")}, "", draw.textures[GUI_HASH("icon_delete")], vec2{176.f, 144.f},
			vec2{20.f, 20.f})->make_tooltip(XOR("Delete"))->as<button>();
		btn_delete->color = colors.danger;
		btn_delete->callback = [ this ]()
		{
			if (cfg.is_loading || cfg.cfg_list.empty())
				return;

			const auto items = ctx->find<list>(GUI_HASH("configs>list"));
			if (!items || items->empty())
				return;

			const auto dlg = std::make_shared<dialog_box>(
				control_id{GUI_HASH("configs>delete>question")}, XOR("Warning"), XOR("Are you sure you want to delete this config?"), db_yes_no, true);
			dlg->callback = [ & ](dialog_result r)
			{
				if (r == dr_affirmative)
					delete_config(sel.get());
			};

			dlg->open();
		};

		const auto btn_create = std::make_shared<button>(
			control_id{GUI_HASH("configs>create")}, "", draw.textures[GUI_HASH("gui_icon_add")], vec2{176.f, 204.f},
			vec2{20.f, 20.f})->make_tooltip(XOR("Create"))->as<button>();
		btn_create->callback = [ this ]()
		{
			if (cfg.is_loading)
				return;

			const auto inp = ctx->find<text_input>(GUI_HASH("configs>name"));
			if (!inp)
				return;

			// trim the text
			auto name = inp->value;
			name.erase(std::remove_if(name.begin(), name.end(), [](const auto &c) { return c == ' '; }), name.end());

			if (name.empty())
				return;

			create_config(*sel, name);
		};

		add(items);
		add(name);
		add(btn_save);
		add(btn_load);
		add(btn_import);
		add(btn_export);
		add(btn_delete);
		add(btn_create);
		add(btn_upd);

		process_queues();
		refresh_configs(sel.get());

		pos = calc_perfect_position(pos);

		ctx->top_sort = sort;
		ctx->active_popups.emplace_back(as<popup>());
	}

	void configs_popup::render()
	{
		if (!is_visible)
			return;

		begin_render();

		const auto r = area_abs();

		auto &d = draw.layers[ctx->content_layer];
		d->g.anti_alias = true;
		d->add_shadow_rect(area_abs(), 8.f, true);
		d->add_rect_filled_rounded(r, colors.bg_block, 3.f);
		d->add_rect_rounded(r, colors.outline, 3.f);
		d->g.anti_alias = {};

		popup::render();
	}
}
