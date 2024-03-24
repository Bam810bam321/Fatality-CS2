#pragma once

#include <list>
#include <hooks/hooks.h>
#include <utils/hook.h>

struct hook_manager_t
{
	hook_manager_t() = default;

	void init();
	void attach() const;
	void detach() const;

	std::shared_ptr<utils::hook<decltype(hooks::input_system::wnd_proc)>> wnd_proc;
	std::shared_ptr<utils::hook<decltype(hooks::steam::present)>> present;
	std::shared_ptr<utils::hook<decltype(hooks::client::create_move)>> create_move;
	std::shared_ptr<utils::hook<decltype(hooks::client::frame_stage_notify)>> frame_stage_notify;
	std::shared_ptr<utils::hook<decltype(hooks::client::override_view)>> override_view;
	std::shared_ptr<utils::hook<decltype(hooks::client::on_render_start)>> on_render_start;
	std::shared_ptr<utils::hook<decltype(hooks::input_system::mouse_input_enabled)>> mouse_input_enabled;
	std::shared_ptr<utils::hook<decltype(hooks::client::get_fov)>> get_fov;
	std::shared_ptr<utils::hook<decltype(hooks::client::prediction_update)>> prediction_update;

private:
	std::list<std::shared_ptr<utils::hook_interface>> hooks;
};

extern hook_manager_t hook_manager;
