#include "menu.h"

#include "resources/cursor.h"
#include "resources/icon_add.h"
#include "resources/icon_clear.h"
#include "resources/icon_cloud.h"
#include "resources/icon_copy.h"
#include "resources/icon_down.h"
#include "resources/icon_legit.h"
#include "resources/icon_misc.h"
#include "resources/icon_paste.h"
#include "resources/icon_rage.h"
#include "resources/icon_refresh.h"
#include "resources/icon_search.h"
#include "resources/icon_skins.h"
#include "resources/icon_scripts.h"
#include "resources/icon_up.h"
#include "resources/icon_visuals.h"
#include "resources/icon_save.h"
#include "resources/icon_configs.h"
#include "resources/icon_keys.h"
#include "resources/icon_info.h"
#include "resources/icon_close.h"
#include "resources/icon_settings.h"
#include "resources/icon_load.h"
#include "resources/icon_import.h"
#include "resources/icon_export.h"
#include "resources/icon_delete.h"
#include "resources/icon_bug.h"
#include "resources/icon_file.h"
#include "resources/icon_autoload.h"
#include "resources/logo_head.h"
#include "resources/logo_stripes.h"
#include "resources/icon_allow_insecure.h"
#include "resources/icon_cloud_upd.h"
#include "resources/loading.h"
#include "resources/hotkey_icons.h"

#include <gui/helpers.h>
#include <gui/values.h>
#include <game/cfg.h>
#include <menu/macros.h>

#include "game/game.h"
#include "gui/popups/about_popup.h"
#include "gui/popups/search_popup.h"
#include "gui/popups/configs_popup.h"
#include "gui/popups/hotkey_overview_popup.h"
#include "gui/controls/selectable_script.h"
#include "sdk/inputsystem.h"

using namespace evo::ren;

void on_quicksave()
{
#ifdef CS2_CLOUD
	VIRTUALIZER_TIGER_WHITE_START;
	if (cfg.last_changed_config.empty() || !menu::men.is_open())
		return;

	const auto time = std::chrono::system_clock::now();
	if (std::chrono::duration_cast<std::chrono::seconds>(time - cfg.last_cfg_action).count() < 1)
		return;

	cfg.last_cfg_action = time;

	std::stringstream buf;
	cfg.save(buf);

	networking::conn->send_config_upload(cfg.last_changed_config, util::base64_encode(buf.str()));
	evo::gui::notify.add(std::make_shared<evo::gui::notification>(XOR("Quicksave"),
																  XOR("Config has been saved"),
																  evo::gui::ctx->res.icons.settings));
	VIRTUALIZER_TIGER_WHITE_END;
#else
	if (cfg.last_changed_config.empty() || !menu::men.is_open())
		return;

	const auto time = std::chrono::system_clock::now();
	if (std::chrono::duration_cast<std::chrono::seconds>(time - cfg.last_cfg_action).count() < 1)
		return;

	cfg.last_cfg_action = time;

	cfg.save(cfg.last_changed_config);

	evo::gui::notify.add(std::make_shared<evo::gui::notification>(XOR("Quicksave"), XOR("Config has been saved"), evo::gui::ctx->res.icons.settings));
#endif
}

void on_search()
{
	if (!menu::men.is_open())
		return;

	static const auto s = evo::gui::ctx->find(GUI_HASH("tools>search"));
	const auto p = std::make_shared<evo::gui::search_popup>(evo::gui::control_id{GUI_HASH("search")}, s->pos_abs() - vec2{0.f, 200.f});
	p->open();
}

namespace menu::tools
{
	std::shared_ptr<evo::gui::control> make_stacked_groupboxes(uint64_t id, const vec2 &size, const std::vector<std::shared_ptr<evo::gui::control>> &groups)
	{
		const auto l = std::make_shared<evo::gui::layout>(evo::gui::control_id{id, ""}, vec2(), size, evo::gui::s_vertical);
		l->make_not_clip()->margin = rect();

		std::shared_ptr<evo::gui::control> last{};
		for (const auto &c : groups)
		{
			c->margin = rect(0.f, 0.f, 0.f, 10.f);
			l->add(c);
			last = c;
		}

		last->size.y -= 2.f;
		last->margin = rect();
		return l;
	}
} // namespace menu::tools

namespace menu
{
	using namespace evo::gui;
	using namespace evo::gui::helpers;
	using namespace gui::popups;

	menu_t men;

	void menu_t::init()
	{
		//ctx->res.general.logo_head = std::make_shared<texture>(data::logo_head, sizeof(data::logo_head));
		//ctx->res.general.logo_stripes = std::make_shared<texture>(data::logo_stripes, sizeof(data::logo_stripes));
		ctx->res.general.cursor = std::make_shared<texture>(data::cursor, sizeof(data::cursor));
		ctx->res.general.loader = std::make_shared<texture>(data::loading, sizeof(data::loading));

		//draw.textures[GUI_HASH("gui_logo_head")] = ctx->res.general.logo_head;
		//draw.textures[GUI_HASH("gui_logo_stripes")] = ctx->res.general.logo_stripes;
		draw.textures[GUI_HASH("gui_cursor")] = ctx->res.general.cursor;
		draw.textures[GUI_HASH("gui_loading")] = ctx->res.general.loader;

		ctx->res.icons.up = std::make_shared<texture>(data::icon_up, sizeof(data::icon_up));
		ctx->res.icons.down = std::make_shared<texture>(data::icon_down, sizeof(data::icon_down));
		ctx->res.icons.notify_clear = std::make_shared<texture>(data::icon_clear, sizeof(data::icon_clear));
		ctx->res.icons.copy = std::make_shared<texture>(data::icon_copy, sizeof(data::icon_copy));
		ctx->res.icons.paste = std::make_shared<texture>(data::icon_paste, sizeof(data::icon_paste));
		ctx->res.icons.add = std::make_shared<texture>(data::icon_add, sizeof(data::icon_add));
		ctx->res.icons.search = std::make_shared<texture>(data::icon_search, sizeof(data::icon_search));
		ctx->res.icons.settings = std::make_shared<texture>(data::icon_settings, sizeof(data::icon_settings));
		ctx->res.icons.bug = std::make_shared<texture>(data::icon_bug, sizeof(data::icon_bug));

		draw.textures[GUI_HASH("gui_icon_up")] = ctx->res.icons.up;
		draw.textures[GUI_HASH("gui_icon_down")] = ctx->res.icons.down;
		draw.textures[GUI_HASH("gui_icon_clear")] = ctx->res.icons.notify_clear;
		draw.textures[GUI_HASH("gui_icon_copy")] = ctx->res.icons.copy;
		draw.textures[GUI_HASH("gui_icon_paste")] = ctx->res.icons.paste;
		draw.textures[GUI_HASH("gui_icon_add")] = ctx->res.icons.add;
		draw.textures[GUI_HASH("gui_icon_search")] = ctx->res.icons.search;
		draw.textures[GUI_HASH("gui_icon_settings")] = ctx->res.icons.settings;
		draw.textures[GUI_HASH("gui_icon_bug")] = ctx->res.icons.bug;

		ctx->res.icons.keys[VK_MENU] = std::make_shared<texture>(data::key_alt, sizeof(data::key_alt));
		ctx->res.icons.keys[VK_DOWN] = std::make_shared<texture>(data::key_down, sizeof(data::key_down));
		ctx->res.icons.keys[VK_LEFT] = std::make_shared<texture>(data::key_left, sizeof(data::key_left));
		ctx->res.icons.keys[VK_RIGHT] = std::make_shared<texture>(data::key_right, sizeof(data::key_right));
		ctx->res.icons.keys[VK_UP] = std::make_shared<texture>(data::key_up, sizeof(data::key_up));
		ctx->res.icons.keys[VK_BACK] = std::make_shared<texture>(data::key_back, sizeof(data::key_back));
		ctx->res.icons.keys[VK_CAPITAL] = std::make_shared<texture>(data::key_caps, sizeof(data::key_caps));
		ctx->res.icons.keys[VK_CONTROL] = std::make_shared<texture>(data::key_ctrl, sizeof(data::key_ctrl));
		ctx->res.icons.keys[VK_DELETE] = std::make_shared<texture>(data::key_delete, sizeof(data::key_delete));
		ctx->res.icons.keys[VK_END] = std::make_shared<texture>(data::key_end, sizeof(data::key_end));
		ctx->res.icons.keys[VK_HOME] = std::make_shared<texture>(data::key_home, sizeof(data::key_home));
		ctx->res.icons.keys[VK_INSERT] = std::make_shared<texture>(data::key_ins, sizeof(data::key_ins));
		ctx->res.icons.keys[VK_PRIOR] = std::make_shared<texture>(data::key_pgup, sizeof(data::key_pgup));
		ctx->res.icons.keys[VK_NEXT] = std::make_shared<texture>(data::key_pgdn, sizeof(data::key_pgdn));
		ctx->res.icons.keys[VK_RETURN] = std::make_shared<texture>(data::key_ret, sizeof(data::key_ret));
		ctx->res.icons.keys[VK_SHIFT] = std::make_shared<texture>(data::key_shift, sizeof(data::key_shift));
		ctx->res.icons.keys[VK_SPACE] = std::make_shared<texture>(data::key_space, sizeof(data::key_space));
		ctx->res.icons.keys[VK_TAB] = std::make_shared<texture>(data::key_tab, sizeof(data::key_tab));
		ctx->res.icons.keys[VK_LBUTTON] = std::make_shared<texture>(data::key_m1, sizeof(data::key_m1));
		ctx->res.icons.keys[VK_RBUTTON] = std::make_shared<texture>(data::key_m2, sizeof(data::key_m2));
		ctx->res.icons.keys[VK_MBUTTON] = std::make_shared<texture>(data::key_m3, sizeof(data::key_m3));
		ctx->res.icons.keys[VK_XBUTTON1] = std::make_shared<texture>(data::key_m4, sizeof(data::key_m4));
		ctx->res.icons.keys[VK_XBUTTON2] = std::make_shared<texture>(data::key_m5, sizeof(data::key_m5));
		ctx->res.icons.keys[VK_MULTIPLY] = std::make_shared<texture>(data::key_num_mul, sizeof(data::key_num_mul));
		ctx->res.icons.keys[VK_ADD] = std::make_shared<texture>(data::key_num_add, sizeof(data::key_num_add));
		ctx->res.icons.keys[VK_SEPARATOR] = std::make_shared<texture>(data::key_num_dec, sizeof(data::key_num_dec));
		ctx->res.icons.keys[VK_SUBTRACT] = std::make_shared<texture>(data::key_num_sub, sizeof(data::key_num_sub));
		ctx->res.icons.keys[VK_DECIMAL] = std::make_shared<texture>(data::key_num_dec, sizeof(data::key_num_dec));
		ctx->res.icons.keys[VK_DIVIDE] = std::make_shared<texture>(data::key_num_div, sizeof(data::key_num_div));
		ctx->res.icons.keys[VK_NUMPAD0] = std::make_shared<texture>(data::key_num0, sizeof(data::key_num0));
		ctx->res.icons.keys[VK_NUMPAD1] = std::make_shared<texture>(data::key_num1, sizeof(data::key_num1));
		ctx->res.icons.keys[VK_NUMPAD2] = std::make_shared<texture>(data::key_num2, sizeof(data::key_num2));
		ctx->res.icons.keys[VK_NUMPAD3] = std::make_shared<texture>(data::key_num3, sizeof(data::key_num3));
		ctx->res.icons.keys[VK_NUMPAD4] = std::make_shared<texture>(data::key_num4, sizeof(data::key_num4));
		ctx->res.icons.keys[VK_NUMPAD5] = std::make_shared<texture>(data::key_num5, sizeof(data::key_num5));
		ctx->res.icons.keys[VK_NUMPAD6] = std::make_shared<texture>(data::key_num6, sizeof(data::key_num6));
		ctx->res.icons.keys[VK_NUMPAD7] = std::make_shared<texture>(data::key_num7, sizeof(data::key_num7));
		ctx->res.icons.keys[VK_NUMPAD8] = std::make_shared<texture>(data::key_num8, sizeof(data::key_num8));
		ctx->res.icons.keys[VK_NUMPAD9] = std::make_shared<texture>(data::key_num9, sizeof(data::key_num9));

		for (const auto &[k, t] : ctx->res.icons.keys)
			draw.textures[GUI_HASH("gui_icon_key") + k] = t;

		// menu resources
		draw.textures[GUI_HASH("icon_rage")] = std::make_shared<texture>(data::icon_rage, sizeof(data::icon_rage));
		draw.textures[GUI_HASH("icon_legit")] = std::make_shared<texture>(data::icon_legit, sizeof(data::icon_legit));
		draw.textures[GUI_HASH("icon_visuals")] = std::make_shared<texture>(data::icon_visuals, sizeof(data::icon_visuals));
		draw.textures[GUI_HASH("icon_misc")] = std::make_shared<texture>(data::icon_misc, sizeof(data::icon_misc));
		draw.textures[GUI_HASH("icon_scripts")] = std::make_shared<texture>(data::icon_scripts, sizeof(data::icon_scripts));
		draw.textures[GUI_HASH("icon_skins")] = std::make_shared<texture>(data::icon_skins, sizeof(data::icon_skins));

		// hack resources
		draw.textures[GUI_HASH("icon_cloud")] = std::make_shared<texture>(data::icon_cloud, sizeof(data::icon_cloud));
		draw.textures[GUI_HASH("icon_file")] = std::make_shared<texture>(data::icon_file, sizeof(data::icon_file));
		draw.textures[GUI_HASH("icon_refresh")] = std::make_shared<texture>(data::icon_refresh, sizeof(data::icon_refresh));
		draw.textures[GUI_HASH("icon_save")] = std::make_shared<texture>(data::icon_save, sizeof(data::icon_save));
		draw.textures[GUI_HASH("icon_configs")] = std::make_shared<texture>(data::icon_configs, sizeof(data::icon_configs));
		draw.textures[GUI_HASH("icon_keys")] = std::make_shared<texture>(data::icon_keys, sizeof(data::icon_keys));
		draw.textures[GUI_HASH("icon_info")] = std::make_shared<texture>(data::icon_info, sizeof(data::icon_info));
		draw.textures[GUI_HASH("icon_close")] = std::make_shared<texture>(data::icon_close, sizeof(data::icon_close));
		draw.textures[GUI_HASH("icon_load")] = std::make_shared<texture>(data::icon_load, sizeof(data::icon_load));
		draw.textures[GUI_HASH("icon_import")] = std::make_shared<texture>(data::icon_import, sizeof(data::icon_import));
		draw.textures[GUI_HASH("icon_export")] = std::make_shared<texture>(data::icon_export, sizeof(data::icon_export));
		draw.textures[GUI_HASH("icon_delete")] = std::make_shared<texture>(data::icon_delete, sizeof(data::icon_delete));
		draw.textures[GUI_HASH("icon_autoload")] = std::make_shared<texture>(data::icon_autoload, sizeof(data::icon_autoload));
		draw.textures[GUI_HASH("icon_allow_insecure")] = std::make_shared<texture>(data::icon_allow_insecure, sizeof(data::icon_allow_insecure));
		draw.textures[GUI_HASH("icon_cloud_upd")] = std::make_shared<texture>(data::icon_cloud_upd, sizeof(data::icon_cloud_upd));

		ctx->add_chord(chord{std::vector<char>{VK_CONTROL}, std::vector<char>{'S'}, on_quicksave});

		ctx->add_chord(chord{std::vector<char>{VK_CONTROL}, std::vector<char>{'F'}, on_search});

#if defined(_DEBUG)
		ctx->add_chord(
			chord{std::vector<char>{VK_CONTROL, VK_SHIFT}, std::vector<char>{'I'}, []()
			{
				debug.enabled = !debug.enabled;
				notify.add(std::make_shared<notification>(XOR("Debug"), XOR("Debug mode toggled")));
			}});

		ctx->add_chord(
			chord{std::vector<char>{VK_CONTROL, VK_SHIFT}, std::vector<char>{'R'}, []()
			{
				ctx->active = nullptr;
				for (const auto &c : ctx->active_popups)
					c->close();

				notify.add(std::make_shared<notification>(XOR("Debug"), XOR("Active reset")));
			}});
#endif

		const auto group_sz = window_size_to_groupbox_size(848.f, 588.f);
		const auto group_half_sz = group_sz * vec2{1.f, .5f} - vec2{0.f, 5.f};
		const auto group_quarter_sz = group_half_sz * vec2{1.f, .5f};

		const auto wnd = make_window(
			XOR("wnd_main"), {50.f, 50.f}, {848.f, 588.f}, [](std::shared_ptr<layout> &e)
			{
				e->add(MAKE_TAB("rage", "RAGE")->make_selected());
				e->add(MAKE_TAB("legit", "LEGIT"));
				e->add(MAKE_TAB("visuals", "VISUALS"));
				e->add(MAKE_TAB("misc", "MISC"));
				//e->add(MAKE_TAB("scripts", "LUA"));
				e->add(MAKE_TAB("skins", "SKINS"));
			}, [&](std::shared_ptr<layout> &e)
			{
				e->add(make_tab_area(GUI_HASH("rage_container"), true, s_none, group::rage_tab));
				e->add(make_tab_area(GUI_HASH("legit_container"), false, s_none, group::legit_tab));

				e->add(make_tab_area(GUI_HASH("visuals_container"), false, s_none, group::visuals_tab));
				e->add(
					make_tab_area(
						GUI_HASH("misc_container"), false, [&](const std::shared_ptr<layout> &e)
						{
							e->add(make_groupbox(XOR("misc>various"), XOR("VARIOUS"), group_sz, group::misc_various));
							e->add(make_groupbox(XOR("misc>movement"), XOR("MOVEMENT"), group_sz, group::misc_movement));
							e->add(make_groupbox(XOR("misc>buy bot"), XOR("BUY BOT"), group_sz, group::misc_buybot));
						}));

				e->add(
					make_tab_area(
						GUI_HASH("scripts_container"), false, [&](const std::shared_ptr<layout> &e)
						{
							/*e->add(make_groupbox(XOR("lua>general"), XOR("GENERAL"), group_sz, group::lua_general));
							e->add(make_groupbox(XOR("lua>elements a"), XOR("ELEMENTS A"), group_sz, group::lua_stub));
							e->add(make_groupbox(XOR("lua>elements b"), XOR("ELEMENTS B"), group_sz, group::lua_stub));*/
						}));

				e->add(
					make_tab_area(
						GUI_HASH("skins_container"), false, [&](const std::shared_ptr<layout> &e)
						{
							e->add(
								tools::make_stacked_groupboxes(
									GUI_HASH("skins_weapons_options"), group_sz, {
										make_groupbox(XOR("skins>weapons"), XOR("WEAPONS"), group_half_sz + vec2{0.f, 40.f}, group::skins_weapons),
										make_groupbox(XOR("skins>options"), XOR("OPTIONS"), group_half_sz - vec2{0.f, 40.f}, group::skins_options),}));
							e->add(make_groupbox(XOR("skins>paint kit"), XOR("PAINT KIT"), group_sz, group::skins_paintkit));
							e->add(
								tools::make_stacked_groupboxes(
									GUI_HASH("skins_inventory_options"), group_sz, {
										make_groupbox(
											XOR("skins>inventory"), XOR("INVENTORY"), group_half_sz + vec2{0.f, group_quarter_sz.y} - vec2{0.f, 20.f},
											group::skins_inventory),
										make_groupbox(XOR("skins>agents"), XOR("AGENTS"), group_quarter_sz + vec2{0.f, 20.f}, group::skins_agents),}));

						}));
			}, [&](std::shared_ptr<layout> &e)
			{
				{
					const auto s = MAKE("tools>search", button, "", ctx->res.icons.search)->adjust_margin({0.f, 0.f, 8.f, 0.f})->adjust_size({20.f, 20.f})->as<button>();
					s->callback = []()
					{
						static const auto s = ctx->find(GUI_HASH("tools>search"));
						const auto p = std::make_shared<search_popup>(control_id{GUI_HASH("search")}, s->pos_abs() - vec2{0.f, 200.f});
						p->open();
					};
					s->tooltip = XOR("Search");
					s->disable_id_display = true;
					e->add(s);
				}
				{
					const auto s = MAKE("tools>save", button, "", draw.textures[GUI_HASH("icon_save")])->adjust_margin({0.f, 0.f, 8.f, 0.f})->adjust_size({20.f, 20.f})->
																										 as<button>();
					s->tooltip = XOR("Quicksave");
					s->callback = on_quicksave;
					s->disable_id_display = true;
					e->add(s);
				}
				{
					const auto s = MAKE("tools>configs", button, "", draw.textures[GUI_HASH("icon_configs")])->adjust_margin({0.f, 0.f, 8.f, 0.f})->adjust_size(
						{20.f, 20.f})->as<button>();
					s->callback = []()
					{
						static const auto s = ctx->find(GUI_HASH("tools>configs"));
						const auto p = std::make_shared<configs_popup>(control_id{GUI_HASH("configs_popup")}, s->pos_abs() - vec2{0.f, 240.f});
						p->open();
					};
					s->tooltip = XOR("Configs");
					s->disable_id_display = true;
					e->add(s);
				}
				/* TODO: {
					const auto s = MAKE("tools>keys", button, "", draw.textures[GUI_HASH("icon_keys")])->adjust_margin({ 0.f, 0.f, 8.f, 0.f })->adjust_size({ 20.f, 20.f })->as<button>();
					s->callback = []()
					{
						static const auto s = ctx->find(GUI_HASH("tools>hotkeys"));
						const auto p = std::make_shared<hotkey_overview_popup>(control_id{ GUI_HASH("hotkey_overview_popup") });
						p->open();
					};
					s->tooltip = XOR("Hotkeys");
					e->add(s);
				}*/
				{
					const auto s = MAKE("tools>info", button, "", draw.textures[GUI_HASH("icon_info")])->adjust_margin({0.f, 0.f, 8.f, 0.f})->adjust_size({20.f, 20.f})->
																										 as<button>();
					s->callback = []()
					{
						const auto p = std::make_shared<gui::popups::about_popup>(control_id{GUI_HASH("about")});
						p->open();
					};
					s->disable_id_display = true;
					s->tooltip = XOR("About");
					e->add(s);
				}
			});

#ifndef RELEASE
		const auto unl = std::make_shared<button>(control_id{GUI_HASH("unload")}, XOR("Unload"));
		unl->callback = []()
		{
			//interfaces::engine()->ClientCmd_Unrestricted(XOR("play hostage/hpain/hpain1"));
			//std::thread([] { game->unload(); }).detach();
		};
#endif

		ctx->add(wnd);

#ifndef RELEASE
		ctx->add(unl);
#endif

		main_wnd = wnd;
	}

	void menu_t::toggle()
	{
		const auto wnd = main_wnd.lock();
		if (!wnd)
			return;

		wnd->is_visible = !wnd->is_visible;
		wnd->is_taking_input = !wnd->is_taking_input;

		if (!wnd->is_visible)
		{
			ctx->active = nullptr;
			for (const auto &p : ctx->active_popups)
				p->close();
		}

		sdk::InputSystem->set_input(!wnd->is_visible);

		if (wnd->is_visible)
		{
			const auto window_center = wnd->pos + wnd->size * draw.scale * 0.5f;
			POINT pt{static_cast<LONG>(window_center.x), static_cast<LONG>(window_center.y)};
			ClientToScreen(draw.adapter->window, &pt);
			//sdk::InputSystem->set_cursor_pos(pt.x, pt.y);
		}
	}

	bool menu_t::is_open()
	{
		const auto wnd = main_wnd.lock();
		return wnd && wnd->is_visible;
	}

	void menu_t::finalize()
	{
		if (finalized)
		{
			/*if (men.skins_ready)
				inventorychanger::update_selected(inventorychanger::force_update);*/
			return;
		}

		/*std::thread([]()
		{
			while (!men.skins_loaded)
			{
				std::this_thread::sleep_for(std::chrono::milliseconds(10));
				std::this_thread::yield();
			}

			std::lock_guard lock(menu::men.render_mtx);
			inventorychanger::fill_weapon_list();
			erase_fn(inventorychanger::fill_weapon_list);

			std::string s{};
			inventorychanger::fill_skin_list(s);
			inventorychanger::load();

			men.full_cycle_reset = true;
			men.skins_ready = true;
		}).detach();*/

#ifndef CS2_CLOUD
		ctx->user.username = XOR("DaddyKermit");
		ctx->user.active_until = XOR("Lifetime");
		ctx->user.is_alpha = true;
#else
		ctx->user.username = globals::user_info.name;
		ctx->user.active_until = globals::user_info.expiry;
		ctx->user.is_alpha = globals::user_info.alpha;

		auto &img = globals::user_info.img;
		if (!img.empty())
		{
			ctx->user.avatar = std::make_shared<texture>(img.data(), img.size());
			ctx->user.avatar->create();
			draw.textures[GUI_HASH("gui_user_avatar")] = ctx->user.avatar;
		}
#endif

		finalized = true;

		const auto toggle = ctx->find(GUI_HASH("scripts>general>toggle"));
		const auto autoload = ctx->find(GUI_HASH("scripts>general>autoload"));
		const auto spacer1 = ctx->find(GUI_HASH("scripts>general>spacer1"));

		if (!toggle || !autoload || !spacer1)
			return;

		toggle->set_visible(false);
		autoload->set_visible(false);
		spacer1->set_visible(false);

	

		const auto scripts = ctx->find<list>(GUI_HASH("scripts>general>list"));
		if (!scripts)
			return;

		bool is_first{true};
		

		toggle->set_visible(true);
		autoload->set_visible(true);
		spacer1->set_visible(true);

		scripts->process_queues();
		scripts->for_each_control(
			[&](std::shared_ptr<evo::gui::control> &c)
			{
				const auto sel = c->as<selectable>();
				//if (lua::api.exists(sel->id))
				//	sel->is_loaded = true;
				//else
					sel->is_loaded = false;

				sel->reset();
			});

		bits b{};
		scripts->callback(b);
	}

}
