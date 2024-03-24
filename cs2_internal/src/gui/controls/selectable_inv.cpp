#include <gui/controls/selectable_inv.h>

namespace evo::gui
{
	using namespace evo::ren;

	inline const color col_ct = color(69, 143, 255);
	inline const color col_t = color(255, 187, 69);

	void selectable_inv::render()
	{
		control::render();
		if (!is_visible)
			return;

		a->animate();

		const auto r = area_abs();

		auto &d = draw.layers[ctx->content_layer];
		d->g.anti_alias = true;
		d->add_circle_filled(r.tl() + vec2{7.f, r.height() * .5f}, 2.f, is_ct ? col_ct : colors.outline);
		d->add_circle_filled(r.tl() + vec2{17.f, r.height() * .5f}, 2.f, is_t ? col_t : colors.outline);
		d->g.anti_alias = false;

		d->font = draw.fonts[is_selected ? GUI_HASH("gui_bold") : GUI_HASH("gui_main")];
		auto offset = vec2(27.f, 4.f);
		if (is_selected)
			offset.x += 5;
		d->add_text(r.tl() + offset, text, a->value.c);
	}
}
