#include <gui/controls/group.h>
#include <gui/gui.h>
#include <ren/renderer.h>

GUI_NAMESPACE;

void group::render()
{
	control::render();
	if (!is_visible)
		return;

	const auto r = area_abs();

	auto &d = draw.layers[ctx->content_layer];
	d->add_rect_filled_rounded(r, colors.bg_block, 4.f);

	for_each_control(
		[](std::shared_ptr<control> &c)
		{
			c->render();
		});

	d->g.anti_alias = true;
	d->add_rect_rounded(r, colors.outline, 4.f);

	const auto fnt = draw.fonts[GUI_HASH("gui_main")];
	const auto txt = fnt->get_text_size(text);
	const auto text_area = rect(8.f, -(txt.y * 0.5f)).size(txt + vec2{10.f, 0.f}).translate(r.tl());

	d->add_rect_filled(text_area.margin_top(txt.y * 0.5f - 1.f).height(2.f), colors.bg_bottom);
	d->font = fnt;
	d->add_text(text_area.center() + vec2{0.f, 2.f}, text, colors.text, text_params::with_vh(align_center, align_center));
	d->g.anti_alias = false;
}

void group::add(const std::shared_ptr<control> &c)
{
	if (controls.empty())
		control_container::add(c);
	else
	{
		auto f = controls.front();
		if (f->is_container)
			f->as<control_container>()->add(c);
	}
}

void group::remove(uint64_t id)
{
	if (!controls.empty())
	{
		auto f = controls.front();
		if (f->is_container)
			f->as<control_container>()->remove(id);
	}
}

void group::remove(const std::shared_ptr<control> &c)
{
	if (!controls.empty())
	{
		auto f = controls.front();
		if (f->is_container)
			f->as<control_container>()->remove(c);
	}
}
