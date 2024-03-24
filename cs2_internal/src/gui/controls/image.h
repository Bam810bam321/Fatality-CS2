#pragma once

#include <gui/gui.h>
#include <gui/control.h>

namespace evo::gui
{
	class image : public control
	{
	public:
		image(control_id _id, void *ri, ren::vec2 sz) :
			control(_id, {}, sz), raw_img(ri)
		{
			disable_id_display = true;
		}

		image(control_id _id, const std::shared_ptr<ren::texture> &i) :
			control(_id, {}, i->get_size()), raw_img(nullptr), img(i)
		{
			disable_id_display = true;
		}

		void render() override
		{
			control::render();
			if (!is_visible)
				return;

			auto &d = ren::draw.layers[ctx->content_layer];
			d->g.texture = raw_img ? raw_img : img->obj;
			d->add_rect_filled(area_abs(), ren::color::white());
			d->g.texture = {};

			if (rnd)
				rnd(shared_from_this());
		}

		void *raw_img;
		std::function<void(const std::shared_ptr<control> &)> rnd;
		std::shared_ptr<ren::texture> img;
	};
}
