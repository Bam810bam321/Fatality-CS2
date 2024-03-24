#include <game/game.h>
#include <game/hook_manager.h>
#include <utils/mem.h>
#include <memory/memory.h>

hook_manager_t hook_manager;

void hook_manager_t::init()
{
	if (MH_Initialize() != MH_OK)
		return;

	hooks::steam::hkPresent.Create(MEM::GetVFunc(sdk::SwapChain->pDXGISwapChain, 8U), reinterpret_cast<void*>(&hooks::steam::present));
	hooks::input_system::hkMouseInputEnabled.Create(MEM::GetVFunc(sdk::Input, 13U), reinterpret_cast<void*>(&hooks::input_system::mouse_input_enabled));
	//hooks::client::hkGetFov.Create(MEM::GetVFunc(sdk::Client, 13U), reinterpret_cast<void*>(&hooks::client::get_fov));
	hooks::client::hkOnRenderStart.Create(MEM::GetVFunc(sdk::Client, 4U), reinterpret_cast<void*>(&hooks::client::on_render_start));


	///create_hook(frame_stage_notify, game->client.at(sdk::offsets::functions::client::frame_stage_notify), &hooks::client::frame_stage_notify);

	///create_hook(override_view, game->client.at(sdk::offsets::functions::client::override_view), &hooks::client::override_view);

	//create_hook(on_render_start, game->client.at(sdk::offsets::functions::client::on_render_start), &hooks::client::on_render_start);

	///create_hook(get_fov, game->client.at(sdk::offsets::functions::cameramanager::set_fov), &hooks::client::get_fov);

	///create_hook(create_move, game->client.at(sdk::offsets::functions::input::csgoinput_create_move), &hooks::client::create_move);

	/////////////////////////////////create_hook(prediction_update, game->client.at(0x7A5860), &hooks::client::prediction_update);
}

void hook_manager_t::attach() const
{
	for (auto &hook : hooks)
		hook->attach();
}

void hook_manager_t::detach() const
{
	for (auto &hook : hooks)
		hook->detach();
}
