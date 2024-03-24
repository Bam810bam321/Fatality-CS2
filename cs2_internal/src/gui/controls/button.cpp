#include <gui/controls/button.h>

GUI_NAMESPACE;

void button::on_mouse_enter()
{
	if (is_input_locked())
		return;

	using namespace ren;
	if (color.value.a == 0.f)
		an->direct(tex ? colors.text : colors.text_dark);
	else
		an->direct(color.mod_a(.6f));
}

void button::on_mouse_leave()
{
	if (is_input_locked())
		return;

	using namespace ren;
	if (color.value.a == 0.f)
		an->direct(tex ? colors.text_dark : colors.text);
	else
		an->direct(color);
}

void button::on_mouse_down(char key)
{
	if (key != m_left || is_input_locked())
		return;

	using namespace ren;
	if (color.value.a == 0.f)
		an->direct(tex ? colors.text : colors.accent);

	if (callback)
		callback();

	run_universal_callbacks();
	ctx->do_tick_sound();
	lock_input();
}

void button::on_mouse_up(char key)
{
	if (key != m_left)
		return;

	unlock_input();
	using namespace ren;
	if (color.value.a == 0.f)
		an->direct(is_mouse_on_me ? (tex ? colors.text : colors.text_dark) : (tex ? colors.text_dark : colors.text));
}

void button::on_first_render_call()
{
	control::on_first_render_call();
	if (color.value.a == 0.f)
		return;

	an->start = an->end = an->value = color;
}

void button::render()
{
	control::render();
	if (!is_visible)
		return;

	const auto r = area_abs();
	an->animate();

	auto &l = draw.layers[ctx->content_layer];

	if (render_bg || !tex)
		l->add_rect_filled_rounded(r, colors.bg_bottom, 2.f);

	l->font = draw.fonts[GUI_HASH("gui_main")];
	if (!tex || !tex->obj)
	{
		if (center_text)
			l->add_text(r.center() + vec2{0.f, 1.f}, text, an->value, text_params::with_vh(align_center, align_center));
		else
			l->add_text(r.tl() + vec2{4.f, r.height() * .5f}, text, an->value, text_params::with_v(align_center));
	}
	else
	{
		l->g.texture = tex->obj;
		l->add_rect_filled(icon_size.len_sqr() == 0.f ? r.width(r.height()) : rect{r.center() - icon_size * 0.5f, r.center() + icon_size * 0.5f}, an->value);
		l->g.texture = {};
		l->add_text(r.tl() + vec2{r.height() + 4.f, r.height() * 0.5f + 1.f}, text, an->value, text_params::with_vh(align_center, align_center));
	}
}
