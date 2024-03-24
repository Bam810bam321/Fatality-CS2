#include <menu/menu.h>
#include <gui/controls/selectable_script.h>
#include <shellapi.h>
#include "game/cfg.h"
#include "game/game.h"
#include "menu/macros.h"

using namespace evo::gui;
using namespace evo::gui::helpers;
using namespace evo::ren;

//namespace menu::group
//{
//	void lua_general(std::shared_ptr<layout> &e)
//	{
//		//VIRTUALIZER_TIGER_WHITE_START;
//
//		static value_param<bits> script_select{};
//		static value_param<bool> autoload{};
//		static value_param<bool> is_loaded{};
//		static std::mutex refresh_mtx{};
//
//		const auto refresh = MAKE("scripts>general>refresh", button, XOR(""),
//								  evo::ren::draw.textures[GUI_HASH("icon_refresh")]);
//		refresh->render_bg = true;
//		refresh->adjust_margin({0.f, 0.f, 0.f, 8.f});
//		refresh->size = {30.f, 30.f};
//		refresh->icon_size = {16.f, 16.f};
//		refresh->tooltip = XOR("Refresh");
//		refresh->disable_id_display = true;
//		refresh->callback = []()
//		{
//			if (cfg.is_loading)
//				return;
//
//			std::thread(
//					[]()
//					{
//						if (!refresh_mtx.try_lock())
//							return;
//
//						lua::api.is_updating = true;
//
//						const auto toggle = ctx->find(GUI_HASH("scripts>general>toggle"));
//						const auto autoload = ctx->find(GUI_HASH("scripts>general>autoload"));
//						const auto spacer1 = ctx->find(GUI_HASH("scripts>general>spacer1"));
//
//						if (!toggle || !autoload || !spacer1)
//							return;
//
//						toggle->set_visible(false);
//						autoload->set_visible(false);
//						spacer1->set_visible(false);
//
//						const auto scripts = ctx->find<list>(GUI_HASH("scripts>general>list"));
//						if (!scripts)
//							return;
//
//						scripts->show_spinner = true;
//
//						bool is_first{true};
//
//						lua::api.refresh_scripts();
//
//						// hi my name is pf i can't program
//						std::lock_guard lock(menu::men.render_mtx);
//						std::lock_guard lock2(menu::men.scripts_mtx);
//						scripts->clear();
//						lua::api.for_each_script_name(
//							[scripts, &is_first](lua::script_file &f)
//							{
//								const auto s = std::make_shared<selectable_script>(
//									evo::gui::control_id{f.make_id(), ""}, f);
//								if (is_first)
//								{
//									s->select();
//									is_first = false;
//								}
//
//								scripts->add(s);
//							});
//
//						scripts->process_queues();
//						scripts->show_spinner = false;
//
//						const auto is_empty = scripts->empty();
//						toggle->set_visible(!is_empty);
//						autoload->set_visible(!is_empty);
//						spacer1->set_visible(!is_empty);
//
//						if (!is_empty)
//							scripts->callback(script_select.get());
//
//						scripts->for_each_control(
//							[&](std::shared_ptr<evo::gui::control> &c)
//							{
//								const auto sel = c->as<selectable>();
//								if (lua::api.exists(sel->id))
//									sel->is_loaded = true;
//								else
//									sel->is_loaded = false;
//
//								sel->reset();
//							});
//
//						lua::api.is_updating = false;
//						refresh_mtx.unlock();
//					})
//				.detach();
//		};
//
//		const auto toggle = MAKE("scripts>general>toggle", toggle_button, is_loaded,
//								 draw.textures[GUI_HASH("icon_load")],
//								 vec2{}, vec2{ 30.f, 30.f });
//		toggle->icon_size = {16.f, 16.f};
//		toggle->tooltip = XOR("Toggle script");
//		toggle->disable_id_display = true;
//		toggle->callback = [toggle](bool v)
//		{
//			if (cfg.is_loading)
//				return;
//
//			const auto scripts = ctx->find<list>(GUI_HASH("scripts>general>list"));
//			if (!scripts)
//				return;
//
//			const auto sel = scripts->at(script_select.get())->as<selectable_script>();
//			if (!sel)
//				return;
//
//			if (lua::api.exists(sel->id))
//				sel->file.should_unload = true;
//			else
//				sel->file.should_load = true;
//
//			sel->reset();
//		};
//
//		const auto autoload_toggle = MAKE("scripts>general>autoload", toggle_button, autoload,
//										  draw.textures[GUI_HASH("icon_autoload")], vec2{}, vec2{ 30.f, 30.f });
//		autoload_toggle->icon_size = {16.f, 16.f};
//		autoload_toggle->tooltip = XOR("Autoload");
//		autoload_toggle->disable_id_display = true;
//		autoload_toggle->callback = [](bool v)
//		{
//			// don't want to react to cfg load calls
//			if (cfg.is_loading)
//				return;
//
//			const auto scripts = ctx->find<list>(GUI_HASH("scripts>general>list"));
//			if (!scripts)
//				return;
//
//			const auto sel = scripts->at(script_select.get())->as<selectable_script>();
//			if (!sel)
//				return;
//
//			v ? lua::api.enable_autoload(sel->file) : lua::api.disable_autoload(sel->file);
//		};
//
//		const auto allow_insecure = MAKE("scripts>general>allow_insecure.nope", toggle_button, cfg.lua.allow_insecure,
//										 draw.textures[GUI_HASH("icon_allow_insecure")], vec2{}, vec2{ 30.f, 30.f });
//		allow_insecure->icon_size = {16.f, 16.f};
//		allow_insecure->disable_id_display = true;
//		allow_insecure->tooltip = XOR("Allow insecure");
//
//		const auto debug_mode =
//			MAKE("scripts>general>debug_mode", toggle_button, ctx->show_ids, ctx->res.icons.bug, vec2{}, vec2{ 30.f,
//				 30.f });
//		debug_mode->icon_size = {16.f, 16.f};
//		debug_mode->tooltip = XOR("Debug mode");
//
//		const auto scripts = MAKE("scripts>general>list", list, script_select, vec2{}, vec2{ 186.f, 446.f });
//		scripts->legacy_mode = true;
//		scripts->size_to_parent_h = true;
//		scripts->disable_id_display = true;
//		scripts->callback = [scripts, toggle, autoload_toggle](bits &v)
//		{
//			if (cfg.is_loading)
//				return;
//
//			if (scripts->empty())
//			{
//				toggle->set_visible(false);
//				autoload_toggle->set_visible(false);
//			}
//			else
//			{
//				toggle->set_visible(true);
//				autoload_toggle->set_visible(true);
//			}
//
//			const auto sel = scripts->at(v)->as<selectable_script>();
//			toggle->value = lua::api.exists(sel->id);
//			toggle->reset();
//			autoload.set(lua::api.is_autoload_enabled(sel->file));
//			autoload_toggle->reset_internal();
//		};
//
//		const auto open_folder =
//			MAKE("scripts>general>open_folder", button, XOR(""), draw.textures[GUI_HASH("icon_configs")]);
//		open_folder->render_bg = true;
//		open_folder->adjust_margin({});
//		open_folder->size = {30.f, 30.f};
//		open_folder->icon_size = {16.f, 16.f};
//		open_folder->tooltip = XOR("Open Folder");
//		open_folder->callback = []()
//		{
//			std::thread(
//					[&]
//					{
//						// top tier hack
//						std::this_thread::sleep_for(std::chrono::milliseconds(150));
//
//						ShellExecuteA(nullptr, nullptr, (DEC_INLINE(game->game_dir) + XOR("/fatality/scripts")).c_str(),
//							nullptr,
//							nullptr,
//							SW_SHOWNORMAL);
//					})
//				.detach();
//		};
//
//		const auto scr_control_area = MAKE("scripts>general>control_area", layout, vec2(), vec2(30.f, 120.f));
//		scr_control_area->size_to_parent_h = true;
//		scr_control_area->direction = s_vertical;
//		scr_control_area->add(refresh);
//		scr_control_area->add(open_folder);
//		scr_control_area->add(MAKE("scripts>general>spacer1", spacer, vec2(), vec2(30.f, 20.f)));
//		scr_control_area->add(toggle);
//		scr_control_area->add(autoload_toggle);
//		scr_control_area->add(MAKE("scripts>general>spacer2", spacer, vec2(), vec2(30.f, 20.f)));
//		scr_control_area->add(allow_insecure);
//		scr_control_area->add(debug_mode);
//
//		const auto scr_list_area = MAKE("scripts>general>list_area", layout, vec2(), vec2(225.f, 446.f));
//		scr_list_area->direction = s_inline;
//		scr_list_area->adjust_margin({2.f, 2.f, 2.f, 2.f});
//		scr_list_area->add(scripts);
//		scr_list_area->add(scr_control_area);
//
//		e->add(scr_list_area);
//
//		//VIRTUALIZER_TIGER_WHITE_END;
//	}
//
//	void lua_stub(std::shared_ptr<layout> &e) {}
//}
