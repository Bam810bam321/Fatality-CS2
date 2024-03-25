#include <macros.h>
#include <game/cfg.h>
#include <game/draw_manager.h>
#include <game/hook_manager.h>
#include <game/movement.h>
#include <game/visuals.h>
#include <gui/controls/selectable_script.h>
#include <menu/menu.h>
#include <menu/init/init_anim.h>
#include <sdk/client.h>
#include <sdk/cvar.h>
#include <sdk/engine.h>
#include <sdk/input.h>
#include <sdk/sdk.h>

namespace hooks::client
{
	void prediction_update(void *pred, int a, int b)
	{
		//hook_manager.prediction_update->call(pred, a, b);
	}

	void create_move(sdk::ccsgo_input *input, int slot, bool something, bool sub_tick)
	{
		const auto oCreateMove = hkCreateMove.GetOriginal();
		if (sub_tick)
			return;

		movement_t::bhop();
		movement_t::strafe();

		oCreateMove(input, slot, something, sub_tick);
	}

	void frame_stage_notify(void *rcx, sdk::client_frame_stage stage)
	{
		const auto oFrameStageNotify = hkFrameStageNotify.GetOriginal();

		oFrameStageNotify(rcx, stage);
	}

	void override_view(void *rcx, sdk::cview_setup *view_setup)
	{
		const auto oOverrideView = hkOverrideView.GetOriginal();
		const auto run_thirdperon = cfg.misc.thirdperson.get(); //TODO: check for cfg.misc.thirdperson_grenade.get();

		var(cam_idealdist);
		var(cam_collision);
		var(cam_snapto);
		var(c_thirdpersonshoulder);
		var(c_thirdpersonshoulderaimdist);
		var(c_thirdpersonshoulderdist);
		var(c_thirdpersonshoulderheight);
		var(c_thirdpersonshoulderoffset);

		static auto progress = 0.f;
		if (run_thirdperon)
		{
			auto bezier = [](const float t) { return t * t * (3.0f - 2.0f * t); };

			progress = clamp(progress + sdk::GlobalVars->frame_time * 6.f, 40.f / cfg.misc.thirdperson_dist.get(), 1.f);

			cam_idealdist->value.fl = cfg.misc.thirdperson_dist.get() * (cfg.misc.thirdperson_no_interp.get() ? 1.f : bezier(progress));
			cam_collision->value.i1 = true;
			cam_snapto->value.i1 = true;
			c_thirdpersonshoulder->value.i1 = true;
			c_thirdpersonshoulderaimdist->value.fl = 0.f;
			c_thirdpersonshoulderdist->value.fl = 0.f;
			c_thirdpersonshoulderheight->value.fl = 0.f;
			c_thirdpersonshoulderoffset->value.fl = 0.f;

			sdk::Input->in_third_person = true;
		}
		else
		{
			progress = cfg.misc.thirdperson.get() ? 1.f : 0.f;
			sdk::Input->in_third_person = false;
		}

		oOverrideView(rcx, view_setup);
	}

	float get_fov(void *rcx)
	{
		const auto oGetFov = hkGetFov.GetOriginal();
		if (cfg.misc.fov_enabled.get())
			return cfg.misc.fov.get();

		return oGetFov(rcx);
	}

	void on_render_start(sdk::cview_render *view_render)
	{
		const auto oOnRenderStart = hkOnRenderStart.GetOriginal();

		oOnRenderStart(view_render);

		if (menu::init_anim.init_done && evo::ren::draw.adapter && draw_mgr.buf->vb->object && !draw_mgr.buf->is_deferred_ready)
		{
			const bool was_dirty = draw_mgr.buf->deferred_dirty;
			if (!was_dirty && !draw_mgr.dirty_ackn)
			{
				draw_mgr.buf->reset(true);
				draw_mgr.buf->lock();

				visuals.draw_debug_info();

				visuals.run();

				if (menu::men.finalized)
				{
					const auto ctx = static_cast<ID3D11DeviceContext*>(evo::ren::draw.adapter->get_deferred_context());
					ctx->ClearState();

					const auto cmd_list = reinterpret_cast<ID3D11CommandList**>(evo::ren::draw.adapter->get_deferred_list());
					if (*cmd_list)
						(*cmd_list)->Release();

					draw_mgr.buf->unlock();

					ctx->FinishCommandList(false, cmd_list);
					draw_mgr.buf->is_deferred_ready = true;
				}

			}
			else
			{
				if (was_dirty)
					draw_mgr.dirty_ackn = true;
				draw_mgr.buf->is_deferred_ready = true;
			}
		}
	}

}




/*


pandora
onetap
gamesense
neverlose
fatality



dominance
satanophobia
*/