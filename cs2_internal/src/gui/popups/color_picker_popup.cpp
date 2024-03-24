#include <gui/popups/color_picker_popup.h>
#include <gui/controls/hsv_slider.h>
#include <gui/gui.h>
#include <gui/controls/button.h>
#include <gui/controls/text_input.h>

GUI_NAMESPACE;

void color_picker_popup::on_first_render_call()
{
	popup::on_first_render_call();

	pos = calc_perfect_position(pos + vec2{picker->prefer_left ? -size.x : 0.f, picker->size.y + 4.f});

	// create hsv picker
	const auto p = std::make_shared<hsv_slider>(control_id{GUI_HASH("cpp_hsv")}, picker->value, picker->allow_alpha);
	p->pos = {8.f, 8.f};
	p->callback = picker->callback;
	p->universal_callbacks = picker->universal_callbacks;
	p->universal_callbacks[UINT32_MAX].push_back(
		[this]()
		{
			const auto shit = find<text_input>(GUI_HASH("cpp_txt"));
			const auto old_cbk = shit->callback;
			shit->callback = {};
			shit->set_value(color_to_string(picker->value.get()));
			shit->move_caret_to_end();
			shit->callback = old_cbk;
		});

	add(p);

	// copy/paste buttons
	const auto copy = std::make_shared<button>(GUI_HASH("cpp_copy"), XOR(""), ctx->res.icons.copy, vec2{8.f, picker->allow_alpha ? 210.f : 170.f}, vec2{0.f, 16.f});
	copy->tooltip = XOR("Copy");
	copy->callback = [this]()
	{
		clipboard::set(color_to_string(picker->value.get()));
	};

	const auto paste = std::make_shared<button>(GUI_HASH("cpp_paste"), XOR(""), ctx->res.icons.paste, vec2{30.f, picker->allow_alpha ? 210.f : 170.f}, vec2{0.f, 16.f});
	paste->tooltip = XOR("Paste");
	paste->callback = [this]()
	{
		const auto c = color_from_string(clipboard::get());
		if (!c)
			return;

		auto &picker_v = picker->value.get();
		picker_v.value = c->value;
		if (!picker->allow_alpha)
			picker_v.value.a = 1.f;

		find<hsv_slider>(GUI_HASH("cpp_hsv"))->reset();
		find<text_input>(GUI_HASH("cpp_txt"))->set_value(color_to_string(picker->value.get()));
	};

	const auto txt = std::make_shared<text_input>(
		GUI_HASH("cpp_txt"), vec2{50.f, picker->allow_alpha ? 208.f : 168.f}, vec2{152.f, 20.f}, std::regex(XOR("[#0-9a-f]+")), std::wregex(XOR(L"[#0-9a-f]")), 9);
	txt->set_value(color_to_string(picker->value.get()));
	txt->move_caret_to_end();
	txt->callback = [this](std::string &str)
	{
		if (const auto c = color_from_string(str); c)
		{
			picker->value->value = c->value;
			if (!picker->allow_alpha)
				picker->value->value.a = 1.f;
			find<hsv_slider>(GUI_HASH("cpp_hsv"))->reset();
		}
	};

	add(copy);
	add(paste);
	add(txt);

	ctx->top_sort = sort;
	ctx->active_popups.emplace_back(as<popup>());
}

void color_picker_popup::render()
{
	if (!is_visible)
		return;

	begin_render();

	const auto area = area_abs();

	auto &d = draw.layers[ctx->content_layer];
	d->add_shadow_rect(area, 12.f, true);
	d->g.anti_alias = true;
	d->add_rect_filled_rounded(area, colors.bg_block, 4.f);
	d->add_rect_rounded(area, colors.outline, 4.f);
	d->g.anti_alias = false;

	popup::render();
}
