#include <gui/controls/spacer.h>
#include <gui/gui.h>

namespace evo::gui
{
	using namespace evo::ren;

	void spacer::render()
	{
		control::render();
		if (!is_visible || !draw_decal)
			return;

		auto r = area_abs();
		if (!no_spacing)
			r = r.width(r.width() - 10.f).margin_left(5.f);

		r = r.margin_top(r.height() * 0.5f).height(0.f).floor();

		auto &l = draw.layers[ctx->content_layer];
		l->add_line(r.tl(), r.br(), colors.outline);
	}
}
