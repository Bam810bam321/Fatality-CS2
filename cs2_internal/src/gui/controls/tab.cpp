#include <gui/controls/tab.h>
#include <gui/controls/tabs_layout.h>

GUI_NAMESPACE;

void tab::render()
{
	line_anim->animate();
	col_anim->animate();

	control::render();
	if (!is_visible)
		return;

	auto &d = draw.layers[ctx->content_layer];
	if (icon && icon->obj)
	{
		d->g.texture = icon->obj;
		d->add_rect_filled(rect(pos_abs() + vec2(5.f, 16.f)).size({16.f, 16.f}), col_anim->value);
		d->g.texture = {};

		if (is_highlighted)
		{
			d->g.anti_alias = true;
			d->add_circle_filled(pos_abs() + vec2(18.f, 19.f), 4.f, colors.bg_block);
			d->add_circle_filled(pos_abs() + vec2(18.f, 19.f), 2.5f, colors.accent);
			d->g.anti_alias = {};
		}
	}

	d->font = draw.fonts[is_selected ? GUI_HASH("gui_bold") : GUI_HASH("gui_main")];
	d->add_text(pos_abs() + vec2(icon ? 23.f : 5.f, size.y * 0.5f + 3.f), text, col_anim->value, text_params::with_v(align_center));

	//if (!invert_movement)
	//d->add_rect_filled(rect(pos_abs() + vec2{6.f, size.y * 0.5f + 12.f}).height(2.f).width((size.x - 10.f) * line_anim->value), colors.accent);
	//else
	d->add_rect_filled(rect(pos_abs() + vec2{6.f + (size.x - 10.f) * (1.f - line_anim->value), size.y * 0.5f + 12.f})
	.height(2.f).width((size.x - 10.f) * line_anim->value), colors.accent);
}

void tab::on_mouse_down(char key)
{
	if (key == m_left)
	{
		const auto p = get_parent()->as<tabs_layout>();
		if (!p || is_selected)
			return;

		ctx->do_tick_sound();
		p->update_selected(shared_from_this());
		is_highlighted = false;

		lock_input();
	}
}

void tab::on_mouse_up(char key)
{
	if (key == m_left)
		unlock_input();
}

void tab::on_mouse_enter()
{
	if (!is_selected)
		col_anim->direct(colors.text);
}

void tab::on_mouse_leave()
{
	if (!is_selected)
		col_anim->direct(colors.text_mid);
}

void tab::unselect()
{
	is_selected = false;
	col_anim->direct(colors.text_mid);
	line_anim->direct(0.f);

	if (container)
		container->set_visible(false);

	//decide_movement();
}

void tab::select()
{
	is_selected = true;
	col_anim->direct(colors.text);
	line_anim->direct(1.f);

	if (container)
		container->set_visible(true);

	//decide_movement();
}

void tab::on_first_render_call()
{
	container = ctx->find(container_id);
	if (container)
	{
		container->set_breadcrumb(text);
		container->as<layout>()->nav_tab = shared_from_this();
	}

	if (!size_to_parent_w)
	{
		size.x += draw.fonts[GUI_HASH("gui_main")]->get_text_size(text).x;
		if (icon)
			size.x += 18.f;
	}
}

void tab::decide_movement()
{
	invert_movement = !is_selected ? (input.cursor().x > pos_abs().x) : (input.cursor().x < get_parent()->as<tabs_layout>()->last_deselected_pos.x);
}
