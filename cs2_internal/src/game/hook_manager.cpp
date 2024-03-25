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
	hooks::input_system::hkMouseInputEnabled.Create(MEM::GetVFunc(sdk::Input, 14U), reinterpret_cast<void*>(&hooks::input_system::mouse_input_enabled));
	hooks::client::hkOverrideView.Create(MEM::GetVFunc(sdk::Input, 9U), reinterpret_cast<void*>(&hooks::client::override_view));
	hooks::client::hkGetFov.Create(MEM::GetVFunc(sdk::Client, 13U), reinterpret_cast<void*>(&hooks::client::get_fov));
	hooks::client::hkOnRenderStart.Create(MEM::GetVFunc(sdk::Client, 4U), reinterpret_cast<void*>(&hooks::client::on_render_start));
	hooks::client::hkCreateMove.Create(MEM::GetVFunc(sdk::Client, 5U), reinterpret_cast<void*>(&hooks::client::create_move));
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
