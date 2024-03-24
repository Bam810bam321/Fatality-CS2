#include <gui/popups/dialog_box.h>

#undef min
#undef max

GUI_NAMESPACE;

void dialog_box::on_first_render_call()
{
	const auto fnt = draw.fonts[GUI_HASH("gui_main")];
	const auto msg_sz = fnt->get_text_size(message);
	const auto title_sz = fnt->get_text_size(title);

	const auto button_count = buttons == db_yes_no_cancel ? 3.f : 2.f;

	size = {40.f + std::max(std::max(title_sz.x, msg_sz.x), 100.f * button_count), 94.f + msg_sz.y};
	pos = draw.display * 0.5f - size * 0.5f;

	popup::on_first_render_call();

	const auto base_x = size.x * 0.5f - (104.f * button_count) * 0.5f;

	const auto affirmative = std::make_shared<button>(id + 1, get_button_name(0));
	affirmative->do_first_render_call();
	affirmative->pos = {base_x, size.y - 30.f};
	affirmative->callback = [&]()
	{
		if (callback)
			callback(dr_affirmative);

		close();
	};

	const auto negative = std::make_shared<button>(id + 2, get_button_name(1));
	negative->do_first_render_call();
	negative->pos = {base_x + 104.f, size.y - 30.f};
	negative->callback = [&]()
	{
		if (callback)
			callback(dr_negative);

		close();
	};

	add(affirmative);
	add(negative);

	if (buttons == db_yes_no_cancel)
	{
		const auto least = std::make_shared<button>(id + 3, get_button_name(2));
		least->do_first_render_call();
		least->pos = {base_x + 208.f, size.y - 30.f};
		least->callback = [&]()
		{
			if (callback)
				callback(dr_negative);

			close();
		};

		add(least);
	}

	if (is_action_popup)
	{
		ctx->top_sort = sort;
		ctx->active_popups.emplace_back(as<popup>());
	}
}

void dialog_box::render()
{
	if (!is_visible)
		return;

	begin_render();

	const auto area = area_abs();
	const auto header = area_abs().height(24.f);

	auto &d = draw.layers[ctx->content_layer];
	d->add_shadow_rect(area, 12.f);
	d->add_rect_filled_rounded(area, colors.bg_bottom, 4.f);

	d->add_rect_filled_rounded(header, colors.bg_block, 4.f, rnd_t);
	d->font = draw.fonts[GUI_HASH("gui_bold")];
	d->add_text(header.center(), title, colors.text, text_params::with_vh(align_center, align_center));
	d->add_line(header.bl(), header.br(), colors.accent);

	d->font = draw.fonts[GUI_HASH("gui_main")];
	d->add_text(area.center(), message, colors.text, text_params::with_vh(align_center, align_center));

	popup::render();
}

std::string dialog_box::get_button_name(int pos)
{
	switch (buttons)
	{
	case db_ok_cancel:
		switch (pos)
		{
		case 0:
			return XOR("Ok");
		case 1:
			return XOR("Cancel");
		}

		break;
	case db_yes_no:
		switch (pos)
		{
		case 0:
			return XOR("Yes");
		case 1:
			return XOR("No");
		}

		break;
	case db_yes_no_cancel:
		switch (pos)
		{
		case 0:
			return XOR("Yes");
		case 1:
			return XOR("No");
		case 2:
			return XOR("Cancel");
		}

		break;
	}

	throw std::exception(XOR("Unknown button type or invalid position"));
}
