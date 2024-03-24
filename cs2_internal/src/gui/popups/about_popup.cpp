#include <gui/popups/about_popup.h>
#include <gui/gui.h>
#include <gui/controls.h>
#include <menu/macros.h>
#include <gui/popups/public_software_popup.h>

using namespace evo::gui;
using namespace evo::ren;
using namespace gui::popups;

void about_popup::on_first_render_call()
{
	size = {216.f, 250.f};
	pos = draw.display * 0.5f - size * 0.5f;

	popup::on_first_render_call();

	const auto close_btn = MAKE("about>close", button, XOR(""), draw.textures[GUI_HASH("icon_close")]);
	close_btn->pos = {size.x - 22.f, 2.f};
	close_btn->size = {16.f, 16.f};
	close_btn->callback = [&]()
	{
		close();
	};

	const auto pu_btn = MAKE("about>public_software", button, XOR("Public Software"));
	pu_btn->pos = {4.f, size.y - 32.f};
	pu_btn->size.x = size.x - 12.f;
	pu_btn->callback = [&]()
	{
		const auto ps_popup = MAKE("fatality.ps", gui::popups::public_software_popup);
		ps_popup->open();
	};

	add(pu_btn);
	add(close_btn);
}

void about_popup::on_mouse_down(char key)
{
	popup::on_mouse_down(key);
	if (key == m_left)
	{
		++clicks_count;
	}
}


void about_popup::render()
{
	if (!is_visible)
		return;

	glitch->animate();
	begin_render();

	const auto area = area_abs();
	const auto i_area = area.margin_top(32.f).height(area.height() - 32.f).width(area.width() - 32.f).margin_left(16.f);
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
	d->add_text(header.tl() + vec2{8.f, 7.f}, XOR("About"), colors.accent);

	// xaxaxaxa
	const auto fnt_t = draw.fonts[GUI_HASH("gui_title")];
	vec2 text_pos{i_area.width() * 0.5f, 8.f};

	const auto off_x = cosf(glitch->value);
	const auto off_y = sinf(glitch->value);

	if (clicks_count < 10)
	{
		/*d->font = fnt_t;
		d->add_text(i_area.tl() + text_pos + vec2{off_x, off_y}, XOR("FATALITY"), color(255, 0, 0), text_params::with_h(align_center));
		d->add_text(i_area.tl() + text_pos + (vec2{off_x, off_y} * -1.f), XOR("FATALITY"), color(0, 0, 255), text_params::with_h(align_center));
		d->add_text(i_area.tl() + text_pos, XOR("FATALITY"), colors.text, text_params::with_h(align_center));*/
	}
	else
	{
		// we do a little bit of trolling
		const auto i_rect = rect(i_area.height(32.f).center()).expand(28.f);

		d->g.texture = ctx->res.general.logo_head->obj;
		d->add_rect_filled(i_rect, color::white());

		d->g.texture = ctx->res.general.logo_stripes->obj;
		d->add_rect_filled(i_rect, color(0, 172, 245));

		d->g.texture = {};
	}

	d->font = fnt;
	d->add_text(i_area.tl() + vec2{0.f, 40.f}, XOR("//"), colors.accent);
	d->add_text(i_area.tl() + vec2{12.f, 40.f}, XOR("developed by"), colors.text_dark);

	d->font = fnt_bold;
	d->add_text(i_area.tl() + vec2{0.f, 54.f}, XOR("philip015"), colors.text);

	d->font = fnt;
	d->add_text(i_area.tl() + vec2{0.f, 74.f}, XOR("//"), colors.accent);
	d->add_text(i_area.tl() + vec2{12.f, 74.f}, XOR("designed by"), colors.text_dark);

	d->font = fnt_bold;
	d->add_text(i_area.tl() + vec2{0.f, 88.f}, XOR("panzerfaust & ay0"), colors.text);

	d->font = fnt;
	d->add_text(i_area.tl() + vec2{0.f, 108.f}, XOR("//"), colors.accent);
	d->add_text(i_area.tl() + vec2{12.f, 108.f}, XOR("special thanks"), colors.text_dark);

	d->font = fnt_bold;
	d->add_text(i_area.tl() + vec2{0.f, 122.f}, XOR("hL, jompey and alpha team"), colors.text);

	const auto time = std::time(nullptr);
	std::tm tm{};
	localtime_s(&tm, &time);

	d->font = fnt;
	d->add_text(i_area.tl() + vec2{0.f, 156.f}, XOR("//"), colors.accent);
	d->add_text(i_area.tl() + vec2{12.f, 156.f}, std::string(XOR("copyright ©️ ")) + std::to_string(tm.tm_year + 1900), colors.text_dark);

//	d->font = fnt_bold;
//	d->add_text(i_area.tl() + vec2{114.f, 156.f}, XOR("FATALITY"), colors.accent);

	popup::render();
}
