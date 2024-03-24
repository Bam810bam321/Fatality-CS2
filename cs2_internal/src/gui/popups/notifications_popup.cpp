#include <gui/popups/notifications_popup.h>
#include <gui/gui.h>
#include <gui/controls/layout.h>
#include <gui/controls/notification_control.h>
#include <gui/controls/button.h>

GUI_NAMESPACE;

void notifications_popup::on_first_render_call()
{
	popup::on_first_render_call();

	// add notification items
	const auto arr = std::make_shared<layout>(GUI_HASH("gui_nc_list"), vec2{1.f, 60.f}, vec2{size.x - 2.f, size.y - 61.f}, s_vertical);

	auto odd = false;
	notify.for_each(
		[&arr, &odd](const std::shared_ptr<notification> &n)
		{
			arr->add(std::make_shared<notification_control>(GUI_HASH("gui_nc_n") + n->id, odd = !odd, n));
		});

	arr->stack_offset = {};
	add(arr);

	const auto clear = std::make_shared<button>(GUI_HASH("gui_nc_clear"), XOR("Clear"), ctx->res.icons.notify_clear, vec2{size.x - 80.f, 16.f}, vec2{40.f, 20.f});

	clear->callback = [arr]()
	{
		arr->clear();
		notify.clear();
	};

	add(clear);

	pos = calc_perfect_position(pos);

	ctx->top_sort = sort;
	ctx->active_popups.emplace_back(as<popup>());
}

void notifications_popup::render()
{
	if (!is_visible)
		return;

	const auto r = area_abs();

	begin_render();

	auto &d = draw.layers[ctx->content_layer];
	d->add_shadow_rect(r, 4.f);
	d->add_rect_filled(r, colors.bg_bottom);
	d->add_rect(r, colors.outline);

	const auto fnt = draw.fonts[GUI_HASH("gui_main")];

	d->font = draw.fonts[GUI_HASH("gui_bold")];
	d->add_text(r.tl() + vec2{10.f, 10.f}, ctx->user.username, colors.accent);
	d->font = fnt;
	d->add_text(r.tl() + vec2{10.f, 30.f}, XOR("Expires: ") + ctx->user.active_until, colors.text);

	if (!notify.get_count())
		d->add_text(r.center() + vec2{0.f, 20.f}, XOR("No new notifications"), colors.text_dark, text_params::with_vh(align_center, align_center));

	popup::render();
}
