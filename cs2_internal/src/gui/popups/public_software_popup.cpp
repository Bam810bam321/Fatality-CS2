#include <gui/popups/public_software_popup.h>
#include <gui/gui.h>
#include <gui/controls.h>
#include <gui/controls/public_software_item.h>

#include "menu/macros.h"

#undef max
#undef min

using namespace evo::gui;
using namespace evo::ren;
using namespace gui::popups;

void public_software_popup::on_first_render_call()
{
	size = {216.f, 36.f + links.size() * 40.f};
	pos = draw.display * 0.5f - size * 0.5f;

	popup::on_first_render_call();

	auto offset = 30.f;
	for (const auto &[name, license, url] : links)
	{
		DEC(name_str, name);

		const auto ctrl = MAKE_RUNTIME("fatality.ps." + name_str, gui::public_software_item, name, license, url);
		ctrl->pos = vec2{0.f, offset};
		add(ctrl);

		offset += 40.f;
	}

	const auto close_btn = MAKE("ps>close", button, XOR(""), draw.textures[GUI_HASH("icon_close")]);
	close_btn->pos = {size.x - 22.f, 2.f};
	close_btn->size = {16.f, 16.f};
	close_btn->callback = [&]()
	{
		close();
	};

	add(close_btn);
}

void public_software_popup::render()
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
	d->g.anti_alias = {};

	d->add_line(header.bl(), header.br(), colors.outline);

	d->font = fnt_bold;
	d->add_text(header.tl() + vec2{8.f, 7.f}, XOR("Public Software"), colors.accent);

	popup::render();
}
