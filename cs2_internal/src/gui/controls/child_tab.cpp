#include <gui/controls/child_tab.h>

GUI_NAMESPACE;

void child_tab::render()
{
	control::render();
	if (!is_visible)
		return;

	auto &d = draw.layers[ctx->content_layer];

	const auto r = area_abs();

	an->animate();
	of->animate();

	const auto c = an->value;
	const auto o = of->value;
	d->font = draw.fonts[is_selected ? GUI_HASH("gui_bold") : GUI_HASH("gui_main")];

	if (is_horizontal)
	{
		d->add_text(r.center() - vec2{4.f, 0.f}, text, c, text_params::with_vh(align_center, align_center));
		if (o > 0.f)
			d->add_rect_filled(r.height(2.f).width((r.width() - 8.f) * o).margin_top(size.y - 2.f), colors.accent);
	}
	else
	{
		d->add_text(r.tl() + vec2(6.f, size.y * 0.5f + 1.f), text, c, text_params::with_v(align_center));
		if (o > 0.f)
			d->add_rect_filled(r.height(r.height() * o).width(2.f), colors.accent);
	}
}

void child_tab::on_mouse_enter()
{
	tab::on_mouse_enter();
	an->direct(colors.text);
}

void child_tab::on_mouse_leave()
{
	tab::on_mouse_leave();
	an->direct(is_selected ? colors.text : colors.text_dark);
}

void child_tab::on_first_render_call()
{
	tab::on_first_render_call();

	if (!size_to_parent_w)
	{
		size = draw.fonts[GUI_HASH("gui_bold")]->get_text_size(text);
		size.y += 8.f;
		size.x += 8.f;
	}
	else
		size.y = draw.fonts[GUI_HASH("gui_bold")]->get_text_size(text).y + 8.f;

	if (is_selected)
	{
		an->direct(colors.text);
		of->direct(1.f, 1.f);
	}
}

void child_tab::select()
{
	tab::select();
	an->direct(colors.text);
	of->direct(1.f);
}

void child_tab::unselect()
{
	tab::unselect();
	an->direct(colors.text_dark);
	of->direct(0.f);
}
