#include <gui/controls/checkbox.h>

GUI_NAMESPACE;

void gui::checkbox::render()
{
	control::render();
	if (!is_visible)
		return;

	const auto area_actual = area_abs().floor();
	an->animate();

	auto &d = draw.layers[ctx->content_layer];
	d->add_rect_filled_rounded(area_actual, colors.bg_bottom, 2.f);

	if (an->value.value.a)
	{
		d->g.anti_alias = true;

		if (!is_radio)
		{
			d->add_line(area_actual.tl() + vec2{2.f, 6.f}, area_actual.tl() + vec2{5.f, 9.f}, an->value, 2.f);
			d->add_line(area_actual.tl() + vec2{4.f, 9.f}, area_actual.tl() + vec2{10.f, 3.f}, an->value, 2.f);
		}
		else
			d->add_rect_filled(area_actual.shrink(4.f), an->value);

		d->g.anti_alias = {};
	}
}

void checkbox::reset()
{
	reset_internal();
	if (callback)
		callback(value);

	run_universal_callbacks();
	hotkeys = value.get_hotkey_table();

	// clean up bad hotkeys
	clean_up_hotkeys();

	// force refresh global elements
	control::update_hotkey_table();
	notify_nearby_label();

	if (ctx->should_update_old_value)
		old_value = *value;
}

void checkbox::on_mouse_enter()
{
	using namespace ren;
	if (value)
		return;

	an->direct(colors.outline_light);
}

void checkbox::on_mouse_leave()
{
	using namespace ren;
	if (value)
		return;

	an->direct(colors.outline_light.mod_a(0));
}

void checkbox::on_mouse_down(char key)
{
	if (key == m_left && !is_input_locked())
	{
		ctx->do_tick_sound();

		value = !value;
		in_hotkey = false;
		if (callback)
			callback(value);

		run_universal_callbacks();
		reset_internal();
		lock_input();
	}
}

void checkbox::on_mouse_up(char key)
{
	if (key == m_left)
		unlock_input();
}

void checkbox::update_hotkey_table()
{
	clean_up_hotkeys();
	control::update_hotkey_table();
	value.update_hotkeys(hotkeys);
	notify_nearby_label();
}

void checkbox::reset_internal()
{
	an->direct(value ? colors.accent : colors.outline_light.mod_a(is_mouse_on_me ? 255 : 0));
}

void checkbox::set_value(bool v)
{
	value.set(v);
	reset_internal();
}

void checkbox::preserve_hotkey_state()
{
	pres_state.is_engaged = in_hotkey;
	pres_state.hk_value = in_hotkey ? *value : 0;
	pres_state.real_value = in_hotkey ? old_value : *value;

	*value = old_value;
}

void checkbox::restore_hotkey_state()
{
	in_hotkey = pres_state.is_engaged;
	*value = in_hotkey ? pres_state.hk_value : pres_state.real_value;
}

void checkbox::update_hotkey_value(hotkey_update upd, hotkey_info v)
{
	if (upd == hku_click)
	{
		if (v.beh == hkb_toggle)
		{
			// fix bugs
			if (*value && !in_hotkey)
				in_hotkey = true;

			if (in_hotkey)
			{
				old_value = false;
				*value = old_value;
			}
			else
			{
				old_value = true;
				*value = old_value;
			}

			in_hotkey = !in_hotkey;
		}
		else
		{
			if (!in_hotkey)
			{
				old_value = !(bool)v.value;
				*value = (bool)v.value;
			}

			in_hotkey = true;
		}
	}
	else
	{
		if (v.beh == hkb_hold && in_hotkey)
		{
			*value = !(bool)v.value;
			in_hotkey = false;
		}
	}

	reset_internal();
	if (callback)
		callback(value);

	run_universal_callbacks();
}
