#pragma once

#include <D3D11.h>
#include <sdk/client.h>
#include "../minhook/minhook.h"
#include "../src/memory/detour_hook.h"

namespace hooks
{
	namespace input_system
	{
		LRESULT wnd_proc(HWND wnd, UINT msg, WPARAM wparam, LPARAM lparam);
		bool mouse_input_enabled(void *rcx);
		inline CBaseHookObject<decltype(&mouse_input_enabled)> hkMouseInputEnabled = {};
	}

	namespace steam
	{
		HRESULT present(IDXGISwapChain *chain, UINT sync, UINT flags);
		inline CBaseHookObject<decltype(&present)> hkPresent = {};
	}

	namespace client
	{
		void prediction_update(void* pred, int a, int b);
		void create_move(sdk::ccsgo_input *input, int command, bool something, bool something2);
		void frame_stage_notify(void *rcx, sdk::client_frame_stage stage);
		void override_view(void *rcx, sdk::cview_setup *view_setup);
		void on_render_start(sdk::cview_render *view_render);
		float get_fov(void *rcx);
		inline CBaseHookObject<decltype(&get_fov)> hkGetFov = {};
		inline CBaseHookObject<decltype(&on_render_start)> hkOnRenderStart = {};
	}
} // namespace hooks
