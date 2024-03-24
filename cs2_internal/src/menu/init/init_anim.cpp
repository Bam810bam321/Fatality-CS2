#include "init_anim.h"

#include "resources/f200.h"
#include "resources/f400.h"
#include "resources/atality.h"

#include <ren/renderer.h>
#include <ren/types/animated_texture.h>
#include <gui/gui.h>
#include <macros.h>

namespace menu
{
	using namespace evo::ren;
	using namespace evo::gui;

	init_anim_t init_anim;

	void init_anim_t::on_adapter_ready()
	{
		// todo: rm
#ifdef _DEBUG
		init_ready = true;
		return;
#endif

		draw.textures[FNV1A("f_200")] = std::make_shared<texture>(tex_f200, sizeof(tex_f200));
		draw.textures[FNV1A("f_400")] = std::make_shared<texture>(tex_f400, sizeof(tex_f400));
		draw.textures[FNV1A("atality")] = std::make_shared<texture>(tex_atality, sizeof(tex_atality));

		// copied from gui
		draw.shaders[GUI_HASH("init_blur_f")] = std::make_shared<shader>(
			XOR(
				"sampler s0;const float2 resolution:register(c0);const float time:register(c1);const float " "alpha:register(c2);float4 " "main(float2 "
				"uv:TEXCOORD0):COLOR0{float radius=2.0;float2 " "invSize=1.0/resolution.xy;float weight=0.0;float4 color=0.0;for(float "
				"x=-radius;x<=radius;x+=1.0){for(float y=-radius;y<=radius;y+=1.0){float2 " "coord=uv+float2(x,y)*invSize;color+=tex2D(s0,coord)*exp(-((x*x+y*y)/"
				"(2.0*radius*radius)));weight+=exp(-((x*x+y*y)/(2.0*radius*radius)));}}color.a*=alpha;return " "color/weight;}"), shader_frag);

		toggle = std::make_shared<anim_float>(0.f, .25f);
		letter = std::make_shared<anim_float>(2.f, .5f, ease_out);
		breathe = std::make_shared<anim_float>(1.f, 2.f);
		fly1 = std::make_shared<anim_float>(1.f, .5f, ease_out);
		fly2 = std::make_shared<anim_float>(1.f, .75f, ease_out);

		toggle->direct(1.f);
		toggle->on_finished = [&](const std::shared_ptr<anim<float>> &f)
		{
			if (ending_now)
			{
				init_ready = true;
				return;
			}

			letter->direct(1.f);
			letter->on_finished = [&](const std::shared_ptr<anim<float>> &f)
			{
				breathe_started = true;
				breathe->direct(.6f);
				breathe->on_finished = [&](const std::shared_ptr<anim<float>> &c)
				{
					if (breathe_ending)
					{
						fly1->direct(0.f);
						ending_now = true;
						return;
					}

					if (init_pre_ready)
					{
						c->direct(1.f);
						breathe_ending = true;
						return;
					}

					c->direct(swap_breathe ? .6f : 1.f);
					swap_breathe = !swap_breathe;
				};
			};
		};

		fly1->on_finished = [&](const std::shared_ptr<anim<float>> &f)
		{
			if (!ending_now)
				return;

			fly2->direct(0.f);
			fly2->on_finished = [&](const std::shared_ptr<anim<float>> &f)
			{
				toggle->duration = 1.f;
				toggle->direct(0.f);
			};
		};

		adapter_ready = true;
	}

	void init_anim_t::render()
	{
		if (!adapter_ready)
			return;

		toggle->animate();
		letter->animate();
		breathe->animate();
		fly1->animate();
		fly2->animate();

		auto &d = draw.layers[63];

		d->g.alpha = toggle->value;
		d->g.frag_shader = draw.shaders[GUI_HASH("init_blur_f")]->obj;
		d->g.texture = draw.adapter->get_back_buffer_downsampled();
		d->g.uv_rect = {vec2{0.f, 0.f}, vec2{1.f, 1.f}};
		d->g.only_downsampled = true;
		d->add_rect_filled(rect().size(draw.display), color::white());

		d->g.chained_call = true;
		d->add_rect_filled(rect().size(draw.display), color::white());

		d->g.only_downsampled = d->g.chained_call = {};
		d->g.frag_shader = d->g.texture = {};
		d->g.uv_rect = {};
		d->g.alpha = 1.f;

		d->add_rect_filled(rect().size(draw.display), color::black().mod_a(.75f).mod_a(toggle->value));

		// draw letter
		if (!ending_now)
		{
			if (!breathe_started)
			{
				auto &f = draw.textures[FNV1A("f_400")];
				d->g.texture = f->obj;

				rect f_rect(draw.display * .5f);
				f_rect = f_rect.size(f->get_size() * letter->value * .5f).translate((f->get_size() * letter->value * .5f * .5f) * -1.f);

				d->skip_rounding = true;
				d->add_rect_filled(f_rect, colors.accent.mod_a(2.f - letter->value));
				d->skip_rounding = false;
				d->g.texture = {};
			}
			else
			{
				auto &f = draw.textures[FNV1A("f_200")];
				d->g.texture = f->obj;
				d->add_rect_filled(rect(draw.display * .5f).size(f->get_size()).translate(f->get_size() * .5f * -1.f), colors.accent.mod_a(breathe->value));
				d->g.texture = {};
			}
		}
		else
		{
			auto &f = draw.textures[FNV1A("f_200")];
			auto &a = draw.textures[FNV1A("atality")];

			const auto fa_w = f->get_size().x * .5f + a->get_size().x * .5f;

			d->g.texture = f->obj;
			d->add_rect_filled(
				rect(draw.display * .5f - vec2{f->get_size().x * .5f, 0.f} - vec2((fa_w - f->get_size().x * .5f) * (1.f - fly1->value), 0.f)).size(f->get_size()).
				translate(vec2(0.f, f->get_size().y * -.5f)), colors.accent.mod_a(toggle->value));

			d->g.texture = a->obj;
			d->add_rect_filled(
				rect(draw.display * .5f - vec2(fa_w - f->get_size().x, -(f->get_size().y * .5f))).size(a->get_size()).translate(vec2(0.f, a->get_size().y * fly2->value)).
																								  translate(vec2(0.f, -a->get_size().y)),
				colors.accent.mod_a(1.f - fly2->value).mod_a(toggle->value));
			d->g.texture = {};
		}
	}

	void init_anim_t::finish()
	{
		init_pre_ready = true;
	}
}
