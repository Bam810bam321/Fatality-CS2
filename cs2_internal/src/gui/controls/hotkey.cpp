#include <gui/controls/hotkey.h>
#include <gui/gui.h>

GUI_NAMESPACE;

void hotkey::render()
{
	control::render();
	if (!is_visible)
		return;

	an->animate();

	const auto r = area_abs();
	const auto txt = r.shrink(4.f).margin_bottom(3.f);

	auto &d = draw.layers[ctx->content_layer];
	d->g.anti_alias = true;
	d->add_rect_filled_rounded(r, colors.bg_bottom, 4.f);
	d->add_rect_filled_rounded(txt, colors.bg_block_light, 2.f);
	d->add_rect_filled_multicolor(
		txt.margin_left(2.f).width(txt.width() * .5f - 2.f), {colors.bg_block_light, colors.bg_block.mod_a(.5f), colors.bg_block.mod_a(.5f), colors.bg_block_light,});
	d->add_rect_filled_multicolor(
		txt.margin_left(txt.width() * .5f).width(txt.width() * .5f - 2.f),
		{colors.bg_block.mod_a(.5f), colors.bg_block_light, colors.bg_block_light, colors.bg_block.mod_a(.5f),});

	d->add_rect_rounded(r, colors.accent.mod_a(an->value), 4.f);
	d->g.anti_alias = false;

	if (ctx->res.icons.keys.contains(*value))
	{
		d->g.texture = ctx->res.icons.keys[*value]->obj;
		d->add_rect_filled(txt.shrink(4.f), colors.text);
		d->g.texture = {};
	}
	else
	{
		auto hk_text = key_to_string_opt(*value).value_or(XOR(""));
		//if (*value >= VK_F10 && *value <= VK_F12)
		//	hk_text = hk_text.substr(1);

		d->font = draw.fonts[GUI_HASH("gui_main")];
		d->add_text(txt.center() + vec2{0.f, 2.f}, hk_text, colors.text, text_params::with_vh(align_center, align_center));
	}
}

void hotkey::on_mouse_down(char key)
{
	if (key == m_left && !is_input_locked())
	{
		an->direct(1.f);
		lock_input();
	}
	else if (is_locked_by_me())
	{
		switch (key)
		{
		case m_left:
			*value = VK_LBUTTON;
			break;
		case m_right:
			*value = VK_RBUTTON;
			break;
		case m_middle:
			*value = VK_MBUTTON;
			break;
		case m_back:
			*value = VK_XBUTTON1;
			break;
		case m_forward:
			*value = VK_XBUTTON2;
			break;
		}

		if (callback)
			callback(*value);

		an->direct(0.f);
		tooltip = key_to_string(*value);
		unlock_input();
	}
}

void hotkey::on_key_down(uint16_t key)
{
	if (!is_locked_by_me())
		return;

	*value = key == VK_ESCAPE ? 0 : key;
	if (callback)
		callback(*value);

	an->direct(0.f);
	tooltip = key_to_string(*value);
	unlock_input();
}
