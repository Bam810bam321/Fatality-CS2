#pragma once

#include <ren/renderer.h>
#include <ren/types/animator.h>
#include <ren/types/texture.h>
#include <memory>

namespace menu
{
	// invoke finish() to stop shenanigans
	class init_anim_t
	{
	public:
		void on_adapter_ready();
		void render();
		void finish();

		bool init_done{}, init_ready{};

	private:
		bool adapter_ready{}, swap_breathe{}, ending_now{}, breathe_started{}, breathe_ending{}, init_pre_ready{};
		std::shared_ptr<evo::ren::anim_float> toggle, letter, breathe, fly1, fly2;

		std::shared_ptr<evo::ren::texture> f, f2, rest;
	};

	extern init_anim_t init_anim;
}
