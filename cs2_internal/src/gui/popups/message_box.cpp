#include <gui/popups/message_box.h>

GUI_NAMESPACE;

void message_box::render()
{
	if (!is_visible)
		return;

	begin_render();

	const auto area = area_abs();
	const auto header = area_abs().height(24.f);
	const auto fnt = draw.fonts[GUI_HASH("gui_main")];

	auto &d = draw.layers[ctx->content_layer];
	d->add_shadow_rect(area, 12.f);
	d->add_rect_filled_rounded(area, colors.bg_bottom, 4.f);

	d->add_rect_filled_rounded(header, colors.bg_block, 4.f, rnd_t);
	d->font = draw.fonts[GUI_HASH("gui_bold")];
	d->add_text(header.center(), title, colors.text, text_params::with_vh(align_center, align_center));
	d->add_line(header.bl(), header.br(), colors.accent);

	d->font = fnt;
	d->add_text(area.center(), message, colors.text, text_params::with_vh(align_center, align_center));

	popup::render();
}

void message_box::on_first_render_call()
{
	const auto fnt = draw.fonts[GUI_HASH("gui_main")];
	const auto msg_sz = fnt->get_text_size(message);
	const auto title_sz = fnt->get_text_size(title);

	size = {40.f + std::max(std::max(title_sz.x, msg_sz.x), 100.f), 94.f + msg_sz.y};
	pos = draw.display * 0.5f - size * 0.5f;

	popup::on_first_render_call();

	const auto btn = std::make_shared<button>(id + 1, XOR("Close"));
	btn->do_first_render_call();
	btn->pos = {size.x * 0.5f - btn->size.x * 0.5f, size.y - 30.f};
	btn->callback = [&]()
	{
		close();
	};

	add(btn);
}
