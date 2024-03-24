#include <game/game.h>
#include <game/hook_manager.h>
#include <menu/menu.h>
#include <sdk/engine.h>
#include <sdk/inputsystem.h>

namespace hooks::input_system
{
	LRESULT wnd_proc(HWND wnd, UINT msg, WPARAM wparam, LPARAM lparam)
	{
		if (!evo::gui::ctx)
			return ::CallWindowProcW(sdk::pOldWndProc, wnd, msg, wparam, lparam);

		// handle debounce on focus loss
		if (wnd != GetActiveWindow())
			evo::gui::input.debounce();

		const auto handle_gui_input = [&]()
		{
			if (!evo::gui::ctx->active && msg ==  (WM_KEYDOWN))
			{
				if (wparam ==  (VK_DELETE) || wparam ==  (VK_INSERT) || wparam ==  (VK_PAUSE))
				{
					menu::men.toggle();
					return true;
				}

				if (wparam ==  (VK_ESCAPE) && menu::men.is_open())
				{
					if (!evo::gui::ctx->active_popups.empty())
						evo::gui::ctx->active_popups.back()->close();
					else
						menu::men.toggle();

					return true;
				}
			}

			const auto is_menu_open = menu::men.is_open();
			//const auto chat = (csgo_hud_chat_t *)interfaces::hud()->FindElement(XOR_STR("CCSGO_HudChat"));

			evo::gui::ctx->should_process_hotkeys = true; //!((interfaces::game_console()->IsConsoleVisible() || chat && chat->is_open) && !is_menu_open);
			return evo::gui::ctx->refresh(msg, wparam, lparam) && is_menu_open;
		};

		sdk::InputSystem->set_input(!menu::men.is_open());

		// handle menu movement
		auto input_enable = !handle_gui_input();
		if ((msg ==  (WM_KEYDOWN) || msg ==  (WM_KEYUP) || msg ==  (WM_SYSKEYDOWN) || msg ==  (WM_SYSKEYUP)) && menu::men.is_open())
		{
			if (evo::gui::ctx->active && evo::gui::ctx->active->is_taking_text)
				return ::CallWindowProcW(sdk::pOldWndProc, wnd, msg, wparam, lparam);

			//const auto button_code = sdk::InputSystem->vk_to_button_code(wparam);
			//if (const auto binding = game->game_ui_funcs->get_binding_for_button_code(button_code); binding)
			//{
			//	switch (utils::fnv1a(binding))
			//	{
			//		case FNV1A("+forward"):
			//		case FNV1A("+back"):
			//		case FNV1A("+left"):
			//		case FNV1A("+right"):
			//		case FNV1A("+jump"):
			//		case FNV1A("+duck"):
			//		case FNV1A("+sprint"):
			//		case FNV1A("+lookatweapon"):
			//		case FNV1A("lastinv"):
			//		/*case FNV1A("invprev"):
			//		case FNV1A("invnext"):*/
			//			input_enable = true;
			//			break;
			//	}

			//	if (std::string(binding).starts_with(XOR("slot")))
			//		input_enable = true;
			//}
		}

		return !input_enable || ::CallWindowProcW(sdk::pOldWndProc, wnd, msg, wparam, lparam);
	}

	bool mouse_input_enabled(void *rcx)
	{
		const auto oMouseInputEnabled = hkMouseInputEnabled.GetOriginal();
		return menu::men.is_open() ? false : oMouseInputEnabled(rcx);
	}
}
