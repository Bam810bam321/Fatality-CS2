#include <gui/popups/settings_popup.h>
#include <gui/gui.h>

GUI_NAMESPACE;

void settings_popup::on_first_render_call()
{
	popup::on_first_render_call();

	const auto l = std::make_shared<layout>(GUI_HASH("settings>area"), vec2{0.f, 4.f}, vec2{size.x, 0.f}, s_vertical);
	l->make_not_clip()->margin = {};
	l->disable_scroll = true;

	if (!ctr->updated_custom_margin)
	{
		l->custom_margin = {8.f, 0.f, 8.f, 0.f};
		ctr->updated_custom_margin = true;
	}

	ctr->copy(l->as<control_container>());
	l->process_queues();

	// gaslight parent
	l->for_each_control(
		[this](auto e)
		{
			e->alt_parent = ctr;
			e->use_alt_parent = true;
		});

	l->do_first_render_call();

	size.y = l->calc_max_y() + 8.f;
	l->size = size;

	add(l);
	l->reset();

	const auto dep = ctx->find(dep_id);
	if (!dep)
	{
		close();
		return;
	}

	pos = calc_perfect_position(pos);
	ctx->active_popups.emplace_back(as<popup>());
	ctx->top_sort = sort;
}

void settings_popup::render()
{
	if (!is_visible)
		return;

	begin_render();

	auto &d = draw.layers[ctx->content_layer];
	d->g.anti_alias = true;
	d->add_shadow_rect(area_abs(), 8.f, true);
	d->add_rect_filled_rounded(area_abs(), colors.bg_block, 3.f);
	d->add_rect_rounded(area_abs(), colors.outline, 3.f);
	d->g.anti_alias = {};

	popup::render();
}
