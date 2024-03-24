#include <gui/controls/search_result.h>
#include <gui/gui.h>

using namespace evo;

namespace evo::gui
{
	using namespace ren;

	void search_result::on_mouse_down(char key)
	{
		if (key != m_left)
			return;

		if (const auto c = ctrl.lock(); c)
			c->highlight();
		if (const auto w = wnd.lock(); w)
			w->as<popup>()->close();
	}

	void search_result::render()
	{
		if (!is_visible)
			return;

		control::render();

		const auto r = area_abs();
		auto &d = draw.layers[ctx->content_layer];
		d->font = draw.fonts[GUI_HASH("gui_main")];

		if (is_mouse_on_me)
			d->add_rect_filled(r.shrink(1.f), colors.bg_block_light);

		const auto c = ctrl.lock();
		if (!c)
		{
			d->add_text(r.tl() + vec2{4.f, r.center().y + 3.f}, XOR("Invalid control"), colors.text, text_params::with_v(align_center));
			return;
		}

		std::string breadcrumbs;
		for (const auto &b : c->get_breadcrumbs())
			breadcrumbs += XOR(" > ") + b;

		if (!breadcrumbs.empty())
			breadcrumbs = breadcrumbs.substr(3);

		if (breadcrumbs.empty())
		{
			// hax))
			if (c->parent.lock()->id == GUI_HASH("wnd_main_toolbar"))
				breadcrumbs = XOR("TOOLBAR");
		}

		const auto clip = d->g.clip_rect;
		d->override_clip_rect(r.padding_right(10.f));
		d->add_text(r.tl() + vec2{8.f, 7.f}, text, colors.text);
		d->add_text(r.tl() + vec2{8.f, 23.f}, breadcrumbs, colors.text_mid);
		d->g.clip_rect = clip;

		// anti-shitface
		const auto col = is_mouse_on_me ? colors.bg_block_light : colors.bg_block;
		d->add_rect_filled_multicolor(rect(r.tr()).height(r.height()).width(20.f).margin_right(30.f), {col.mod_a(0.f), col, col, col.mod_a(0.f)});
	}
}
