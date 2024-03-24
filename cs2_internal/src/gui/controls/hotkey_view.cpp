#include <gui/controls/hotkey_view.h>
#include <gui/gui.h>

namespace evo::gui
{
	using namespace evo::ren;

	void hotkey_view::render()
	{
		auto &d = draw.layers[ctx->content_layer];
		d->font = draw.fonts[GUI_HASH("gui_main")];

		const auto r = area_abs();
		const auto text_area = r.width(r.width() * .5f - 5.f).translate(vec2{5.f, 0.f});
		const auto text_size = d->font->get_text_size(name);

		const auto old_clip = d->g.clip_rect;
		if (text_area.width() > text_size.x)
		{
			is_cut = true;
			d->override_clip_rect(text_area);
		}
		else
			is_cut = false;

		d->add_text(text_area.tl() + vec2{0.f, 2.f}, name, colors.text);

		if (is_cut)
		{
			d->add_rect_filled_multicolor(
				text_area.translate(vec2{text_area.width() - 20.f, 0.f}).width(20.f),
				{colors.bg_block.mod_a(0.f), colors.bg_block, colors.bg_block, colors.bg_block.mod_a(0.f)});

			d->g.clip_rect = old_clip;
		}

		d->add_text(text_area.tr() + vec2{0.f, 2.f}, beh == hkb_hold ? XOR("Hold") : XOR("Toggle"), colors.text_dark);

		const auto key_size = d->font->get_text_size(key);
		const auto key_rect = rect(r.tr()).size(key_size + vec2{8.f, 4.f}).translate(vec2{key_size.x + 4.f, 2.f} * -1.f);

		d->g.anti_alias = true;
		d->add_rect_filled_rounded(key_rect, colors.bg_bottom, 3.f);
		d->g.anti_alias = false;

		d->add_text(key_rect.tr() + vec2{4.f, 2.f}, key, colors.text);
	}

	void hotkey_view::on_mouse_move(const ren::vec2 &p, const ren::vec2 &d)
	{
		if (!is_cut)
			return;

		const auto text_area = area_abs().width(area_abs().width() * .5f - 5.f).translate(vec2{5.f, 0.f});
		tooltip = text_area.contains(p) ? name : std::string{};
	}
}
