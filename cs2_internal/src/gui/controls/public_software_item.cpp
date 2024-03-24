#include <gui/controls/public_software_item.h>
#include <gui/gui.h>
#include <shellapi.h>
#include <macros.h>

using namespace evo::gui;
using namespace evo::ren;
using namespace gui;

void public_software_item::init()
{
	an = std::make_shared<anim_color>(colors.text, 0.15f);
}

void public_software_item::render()
{
	const auto r = area_abs();

	DEC(name_str, name);
	DEC(license_str, license);

	auto &d = draw.layers[ctx->content_layer];
	d->font = draw.fonts[GUI_HASH("gui_bold")];
	d->add_text(r.tl() + vec2{16.f, 8.f}, name_str, an->value);
	d->font = draw.fonts[GUI_HASH("gui_main")];
	d->add_text(r.tl() + vec2{16.f, 23.f}, license_str, colors.text_mid);
}

void public_software_item::on_mouse_enter()
{
	an->direct(colors.accent);
}

void public_software_item::on_mouse_leave()
{
	an->direct(colors.text);
}

void public_software_item::on_mouse_down(char key)
{
	ctx->do_tick_sound();
	if (key == m_left)
		std::thread(
			[&]
			{
				DEC(url_str, url);
				ShellExecuteA(nullptr, nullptr, url_str.c_str(), nullptr, nullptr, SW_SHOWNORMAL);
			}).detach();
}
