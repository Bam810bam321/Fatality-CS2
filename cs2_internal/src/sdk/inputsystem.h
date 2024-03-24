#pragma once

#include <game/game.h>

namespace sdk
{
	struct cinput_system
	{
		bool get_relative_mouse_mode()
		{
			return *reinterpret_cast<bool*>(reinterpret_cast<std::uintptr_t>(this) + 0x4F);
		}

		void* get_sdl_window()
		{
			return *reinterpret_cast<void**>(reinterpret_cast<std::uintptr_t>(this) + 0x2678);
		}

		//MFUNC(vk_to_button_code(int vk), int(*)(void *, int), inputsystem, inputsystem::vk_to_button_code)(vk);
		//MFUNC(set_cursor_pos(int x, int y), void (*)(void *, int, int, void *), inputsystem, inputsystem::set_cursor_pos)(x, y, nullptr);

		void set_input(const bool enabled)
		{
			if (!get_relative_mouse_mode())
				return;

		/*	game->fn.sdl_set_relative_mouse_mode(enabled);
			game->fn.sdl_set_window_grab(get_sdl_window(), enabled);*/
		}
	};
}
