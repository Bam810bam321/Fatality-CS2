#include <gui/controls/window.h>
#include <gui/popups/notifications_popup.h>
#include <gui/popups/search_popup.h>

GUI_NAMESPACE;

void window::render()
{
	const auto r = area_abs();
	const auto r_header = r.height(50.f);
	const auto r_toolbar = r.height(28.f).margin_top(r.height() - 28.f);

	auto &d = draw.layers[ctx->content_layer];
	d->g.anti_alias = true;

	// shadow, background
	d->add_shadow_rect(r, 24.f, true, .1f);
	d->add_rect_filled_rounded(r, colors.bg_bottom, 3.f);

	// header background
	d->add_rect_filled_rounded(r_header, colors.bg_block, 3.f, rnd_t);
	d->add_shadow_line(r_header.margin_top(50.f).height(12.f), shadow_down, 0.5f);

	// toolbar background
	d->add_rect_filled_rounded(r_toolbar, colors.bg_block, 3.f, rnd_b);
	d->add_shadow_line(r_toolbar.margin_bottom(12.f).height(12.f), shadow_up, 0.5f);
	d->g.anti_alias = {};

	// FATALITY text
	const auto fnt = draw.fonts[GUI_HASH("gui_title")];
	vec2 text_pos{25.f, 19.f};

	const auto off_x = cosf(glitch->value);
	const auto off_y = sinf(glitch->value);

	d->font = fnt;
	d->add_text(r.tl() + text_pos + vec2{off_x, off_y}, XOR("FATALITY"), color(255, 0, 0));
	d->add_text(r.tl() + text_pos + (vec2{off_x, off_y} * -1.f), XOR("FATALITY"), color(0, 0, 255));
	d->add_text(r.tl() + text_pos, XOR("FATALITY"), colors.text);

	// user information
	const auto avatar_pos = r.tr() + vec2{-38.f, 25.f};
	if (ctx->user.avatar)
	{
		d->g.texture = ctx->user.avatar->obj;
		d->add_circle_filled(avatar_pos, 14.f, color::white());
		d->g.texture = {};
	}
	else
	{
		d->add_circle_filled(avatar_pos, 14.f, colors.bg_bottom);
		d->add_circle_filled_multicolor(avatar_pos, 14.f, {color::black().a(.25f), color::black_transparent()});
	}

	const auto mf = draw.fonts[GUI_HASH("gui_main")];
	const auto expiry_sz = mf->get_text_size(ctx->user.active_until);

	d->font = mf;
	d->add_text(r.tr() + vec2{-57.f, 14.f}, ctx->user.username, colors.text, text_params::with_h(align_right));
	d->add_text(r.tr() + vec2{-57.f, 26.f}, ctx->user.active_until, colors.accent, text_params::with_h(align_right));
	d->add_text(
		r.tr() + vec2{-57.f, 26.f} - vec2{expiry_sz.x + 3.f, 0.f}, std::string(ctx->user.is_alpha ? XOR("alpha - ") : XOR("")) + XOR("expires:"), colors.text_dark,
		text_params::with_h(align_right));

	glitch->animate();
	control_container::render();
}

void window::on_mouse_down(char key)
{
	control_container::on_mouse_down(key);
	if (!allow_move)
		return;

	if (key == m_left)
	{
		is_caring_about_hover = false;
		if (ctx->top_sort != sort)
			sort = ++ctx->top_sort;

		lock_input();
	}
}

void window::on_mouse_up(char key)
{
	control_container::on_mouse_up(key);
	if (!allow_move)
		return;

	if (key == m_left)
	{
		is_caring_about_hover = true;
		unlock_input();
	}
}

void window::on_mouse_move(const vec2 &p, const vec2 &d)
{
	control_container::on_mouse_move(p, d);
	if (!allow_move || !ctx->active_popups.empty())
		return;

	if (is_locked_by_me())
	{
		const auto temp_pos = pos + d;
		if (is_out_of_clip(temp_pos))
			return;

		pos = temp_pos;
	}
}

void window::add(const std::shared_ptr<control> &c)
{
	control_container::add(c);
}
