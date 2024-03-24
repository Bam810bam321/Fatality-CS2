#include <gui/controls/hsv_slider.h>
#include <gui/gui.h>

#undef min
#undef max

GUI_NAMESPACE;

void hsv_slider::render()
{
	control::render();

	const auto saturation = get_sb_rect();
	const auto hue = get_hue_rect();
	const auto alpha = get_alpha_rect();

	auto &d = draw.layers[ctx->content_layer];

	// --- saturation/brightness ---
	auto fake_color = *value;
	fake_color = fake_color.hsv(fake_hue, 1.f, 1.f, 1.f);

	// brightness
	d->add_rect_filled_multicolor(saturation, {color::white(), fake_color, fake_color, color::white()});

	// saturation
	d->add_rect_filled_multicolor(saturation, {color::black_transparent(), color::black_transparent(), color::black(), color::black()});

	const auto sb_grip_pos = saturation.tl() + vec2{fake_saturation * saturation.width(), (1.f - fake_brightness) * saturation.height()};
	const auto sb_grip_color = std::clamp(std::max((1.f - fake_brightness), fake_saturation), 0.f, 1.f);

	const auto old_clip = d->g.clip_rect;
	d->override_clip_rect(saturation);
	d->g.anti_alias = true;
	d->add_circle(sb_grip_pos, 3.f, color(sb_grip_color, sb_grip_color, sb_grip_color), 36, 1.f, 2.f);
	d->g.clip_rect = old_clip;

	// apply fake rounding
	d->add_fake_rounding(saturation, colors.bg_block, 4.f);
	d->add_rect_rounded(saturation.expand(1.f), colors.outline, 4.f);
	d->g.anti_alias = false;

	// --- hue ---
	const std::vector<color> hue_parts = {color(255, 0, 0), color(255, 255, 0), color(0, 255, 0), color(0, 255, 255), color(0, 0, 255), color(255, 0, 255),
										  color(255, 0, 0)};

	d->add_shadow_rect(hue, 4.f);

	const auto part_height = hue.height() / (hue_parts.size() - 1);
	for (auto i = 0; i < hue_parts.size() - 1; i++)
	{
		const auto &p = hue_parts[i];
		const auto &n = hue_parts[i + 1];

		d->add_rect_filled_multicolor(hue.translate({0.f, i * part_height}).height(part_height), {p, p, n, n});
	}

	d->g.anti_alias = true;
	d->add_fake_rounding(hue, colors.bg_block, 4.f);
	d->add_rect_rounded(hue.expand(1.f), colors.outline, 4.f);
	d->g.anti_alias = false;

	const auto hue_grip_pos = hue.tl() + vec2{-2.f, std::clamp((fake_hue / 360.f) * hue.height(), 0.f, hue.height() - 1)};
	const auto hue_grip_rect = rect(hue_grip_pos).size({hue.width() + 4.f, 2.f});

	d->add_shadow_rect(hue_grip_rect, 4.f);
	d->add_rect_filled(hue_grip_rect, colors.text_light);

	// --- alpha ---
	if (allow_alpha)
	{
		d->add_shadow_rect(alpha, 4.f);
		d->add_rect_filled_multicolor(alpha, {value->mod_a(0.f), value, value, value->mod_a(0.f)});

		d->g.anti_alias = true;
		d->add_fake_rounding(alpha, colors.bg_block, 4.f);
		d->add_rect_rounded(alpha.expand(1.f), colors.outline, 4.f);
		d->g.anti_alias = false;

		const auto alpha_grip_pos = alpha.tl() + vec2{std::clamp(value->value.a * alpha.width(), 0.f, alpha.width() - 1), -2.f};
		const auto alpha_grip_rect = rect(alpha_grip_pos).size({2.f, alpha.height() + 4.f});

		d->add_shadow_rect(alpha_grip_rect, 4.f);
		d->add_rect_filled(alpha_grip_rect, colors.text_light);
	}
}

void hsv_slider::on_mouse_down(char key)
{
	if (key == m_left)
	{
		lock_input();

		const auto cur = input.cursor();
		if (get_sb_rect().contains(cur))
			current_edit = e_sb;
		else if (get_hue_rect().contains(cur))
			current_edit = e_hue;
		else if (get_alpha_rect().contains(cur))
			current_edit = e_alpha;
		else
			current_edit = e_none;

		on_mouse_move(input.cursor(), input.cursor_delta());
	}
}

void hsv_slider::on_mouse_move(const vec2 &p, const vec2 &d)
{
	if (!is_locked_by_me() || current_edit == e_none || (current_edit == e_alpha && !allow_alpha))
		return;

	const auto sb = get_sb_rect();
	const auto hue = get_hue_rect();
	const auto alpha = get_alpha_rect();

	switch (current_edit)
	{
	case e_sb:
		fake_saturation = std::clamp((p.x - sb.tl().x) / sb.width(), 0.f, 1.f);
		fake_brightness = std::clamp(1.f - (p.y - sb.tl().y) / sb.height(), 0.f, 1.f);
		break;
	case e_hue:
		fake_hue = std::clamp((p.y - hue.tl().y) / hue.height() * 360.f, 0.f, 360.f);
		break;
	case e_alpha:
		*value = value->a(std::clamp((p.x - alpha.tl().x) / alpha.width(), 0.f, 1.f));
		break;
	}

	// update color
	*value = value->hsv(fake_hue, fake_saturation, fake_brightness);

	if (callback)
		callback(*value);

	run_universal_callbacks();
}

void hsv_slider::on_mouse_up(char key)
{
	if (key == m_left)
		unlock_input();
}

ren::rect hsv_slider::get_sb_rect()
{
	const auto r = area_abs();
	return r.translate({4.f, 4.f}).size(size - vec2{40.f, allow_alpha ? 40.f : 8.f});
}

ren::rect hsv_slider::get_hue_rect()
{
	const auto r = area_abs();
	return r.translate({r.width() - 28.f, 4.f}).size({20.f, r.height() - (allow_alpha ? 40.f : 8.f)});
}

ren::rect hsv_slider::get_alpha_rect()
{
	const auto r = area_abs();
	return r.translate({4.f, r.height() - 24.f}).size({r.width() - 12.f, 12.f});
}

void hsv_slider::reset()
{
	fake_hue = value->h();
	fake_saturation = value->s();
	fake_brightness = value->v();

	if (callback)
		callback(*value);
}
