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
					{
						menu::men.toggle();
					}

					return true;
				}
			}

			const auto is_menu_open = menu::men.is_open();
			evo::gui::ctx->should_process_hotkeys = true;
			//if (is_menu_open)
				//evo::gui::ctx->should_render_cursor = true;

			return evo::gui::ctx->refresh(msg, wparam, lparam) && is_menu_open;
		};

		sdk::InputSystem->set_input(!menu::men.is_open());

		// handle menu movement
		auto input_enable = !handle_gui_input();
		if ((msg ==  (WM_KEYDOWN) || msg ==  (WM_KEYUP) || msg ==  (WM_SYSKEYDOWN) || msg ==  (WM_SYSKEYUP)) && menu::men.is_open())
		{
			if (evo::gui::ctx->active && evo::gui::ctx->active->is_taking_text)
				return ::CallWindowProcW(sdk::pOldWndProc, wnd, msg, wparam, lparam);
		}

		return !input_enable | ::CallWindowProcW(sdk::pOldWndProc, wnd, msg, wparam, lparam);
	}

	bool mouse_input_enabled(void *rcx)
	{
		const auto oMouseInputEnabled = hkMouseInputEnabled.GetOriginal();
		return menu::men.is_open() ? false : oMouseInputEnabled(rcx);
	}
}
