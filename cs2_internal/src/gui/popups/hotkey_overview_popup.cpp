#include <gui/popups/hotkey_overview_popup.h>
#include <gui/gui.h>
#include <gui/controls/button.h>
#include <gui/controls/layout.h>
#include "menu/macros.h"


namespace gui::popups
{
	using namespace evo::gui;
	using namespace evo::ren;

	void hotkey_overview_popup::on_first_render_call()
	{
		pos = draw.display * 0.5f - size * 0.5f;

		popup::on_first_render_call();

		const auto close_btn = MAKE("hotkey_overview>close", button, XOR(""), draw.textures[GUI_HASH("icon_close")]);
		close_btn->pos = {size.x - 22.f, 2.f};
		close_btn->size = {16.f, 16.f};
		close_btn->callback = [&]()
		{
			close();
		};

		const auto list = MAKE("hotkey_overview>list", layout, vec2{ 0.f, 24.f }, vec2{ size.x - 5.f, size.y - 28.f });

		for (const auto &[_, c] : ctx->hotkey_list)
		{
			if (c.expired())
				continue;


		}

		add(close_btn);
		add(list);
	}

	void hotkey_overview_popup::render()
	{
		if (!is_visible)
			return;

		begin_render();

		const auto area = area_abs();
		const auto header = area_abs().height(24.f);
		const auto fnt = draw.fonts[GUI_HASH("gui_main")];
		const auto fnt_bold = draw.fonts[GUI_HASH("gui_bold")];

		auto &d = draw.layers[ctx->content_layer];
		d->add_shadow_rect(area, 12.f, true);
		d->g.anti_alias = true;
		d->add_rect_filled_rounded(area, colors.bg_block, 4.f);
		d->add_rect_filled_rounded(header, colors.bg_block_light, 4.f, rnd_t);
		d->add_rect_rounded(area, colors.outline, 4.f);
		d->g.anti_alias = false;

		d->add_line(header.bl(), header.br(), colors.outline);

		d->font = fnt_bold;
		d->add_text(header.tl() + vec2{8.f, 7.f}, XOR("Hotkey overview"), colors.accent);

		popup::render();
	}
}
