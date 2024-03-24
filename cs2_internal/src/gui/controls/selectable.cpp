#include <gui/controls/selectable.h>

GUI_NAMESPACE;

void selectable::on_mouse_enter()
{
	if (is_selected)
		return;

	using namespace ren;
	a->direct(u_fc(0.f, custom_color.value_or(colors.text_light)));
}

void selectable::on_mouse_leave()
{
	if (is_selected)
		return;

	using namespace ren;
	a->direct(u_fc(0.f, custom_color.value_or(colors.text_mid)));
}

void selectable::on_mouse_down(char key)
{
	const auto p = get_parent()->as<list>();
	if (!p || (is_selected && !p->allow_multiple) || key != m_left)
		return;

	ctx->do_tick_sound();
	p->update_selected(shared_from_this());
	lock_input();
}

void selectable::on_mouse_up(char key)
{
	unlock_input();
}

void selectable::render()
{
	control::render();
	if (!is_visible)
		return;

	a->animate();

	const auto r = area_abs();

	auto &l = draw.layers[ctx->content_layer];

	vec2 off{};
	if (is_loaded)
	{
		l->g.anti_alias = true;
		l->add_circle_filled(r.tl() + vec2{7.f, r.height() * .5f + 1.f}, 2.f, colors.accent);
		l->g.anti_alias = false;

		off.x += 10.f;
	}

	if (is_selected && custom_color)
		off.x += 5.f;

	l->font = is_highlighted || (is_selected && custom_color) ? draw.fonts[GUI_HASH("gui_bold")] : draw.fonts[GUI_HASH("gui_main")];
	l->add_text(r.tl() + vec2(4.f, 4.f) + off, text, a->value.c);
}

void selectable::select()
{
	is_selected = true;
	a->direct(u_fc(4.f, custom_color.value_or(colors.accent)));
}

void selectable::unselect()
{
	is_selected = false;
	a->direct(u_fc(0.f, custom_color.value_or(is_mouse_on_me ? colors.text_light : colors.text_mid)));
}
