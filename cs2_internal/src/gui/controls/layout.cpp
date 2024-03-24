#include <gui/controls/layout.h>
#include <gui/gui.h>

#undef min
#undef max

GUI_NAMESPACE;

void layout::update_outage()
{
	const auto max_y = calc_max_y();
	const auto a = area_abs();

	if (direction == s_horizontal || direction == s_inline || direction == s_justify || disable_scroll)
		return;

	const auto real_grip_height = a.height() * (a.height() / max_y);
	const auto grip_height = std::clamp(real_grip_height, 20.f, a.height());

	grip = rect(a.tr() - vec2(6.f, 0.f), a.br()).height(grip_height);
	outage = max_y - a.height();
	outage_factor = (a.height() - (grip_height - real_grip_height)) / max_y;
}

void layout::render()
{
	should_process_children = false;
	control_container::render();
	should_process_children = true;

	if (!is_visible)
		return;

	an->animate();

	auto &d = draw.layers[ctx->content_layer];
	auto &ds = draw.layers[ctx->scrollbar_layer];

	const auto old_clip = d->g.clip_rect;
	const auto old_clip_s = ds->g.clip_rect;

	if (should_clip)
	{
		d->override_clip_rect(area_abs());
		ds->override_clip_rect(area_abs());
	}

	// we don't have a scroll option for horizontal and inline layouts
	// TODO: add scroll to horizontal?
	if (direction != s_horizontal && direction != s_inline && direction != s_justify && !disable_scroll)
	{
		// calculate maximal possible Y and take scroll position
		const auto max_y = calc_max_y();
		const auto anim_scroll = an;
		const auto animated_scroll = anim_scroll->value;

		// if content is out of bounds, draw scroll bar track and grip
		if (max_y > area().height())
		{
			update_outage();

			const auto highlight = grip.margin_top(-an->value * outage_factor).contains(input.cursor()) || is_locked_by_me();

			const auto a = area_abs();
			ds->add_rect_filled(rect(a.tr() - vec2(5.f, 0.f), a.br() - vec2(2.f, 0.f)), colors.bg_bottom);
			ds->add_rect_filled(grip.padding_left(1.f).width(3.f).margin_top(-animated_scroll * outage_factor), highlight ? colors.accent : colors.bg_block_light);
		}
		else
		{
			// otherwise reset
			if (grip.is_zero())
				grip = rect();
			if (scroll != 0.f)
				scroll = 0.f;
			if (outage != 0.f)
				outage = 0.f;
			if (outage_factor != 0.f)
				outage_factor = 0.f;

			anim_scroll->direct(0.f, 0.f);
		}

		// render controls with account of scroll
		for_each_control(
			[ & ](std::shared_ptr<control> &c)
			{
				if (!c->is_visible || c->is_out_of_rect(area_abs().translate({0.f, -animated_scroll})))
					return;

				c->pos.y += animated_scroll;
				c->render();
				c->pos.y -= animated_scroll;
			});
	}
	else
	{
		// otherwise render them normally
		for_each_control(
			[ & ](std::shared_ptr<control> &c)
			{
				if (c->is_visible && (direction == s_justify || !c->is_out_of_rect(area_abs())))
					c->render();
			});
	}

	if (should_clip)
	{
		d->g.clip_rect = old_clip;
		ds->g.clip_rect = old_clip_s;
	}
}

void layout::on_mouse_wheel(float factor)
{
	control_container::on_mouse_wheel(factor);
	if (grip.is_zero() || input.is_key_down(VK_CONTROL))
		return;

	// animate scroll
	an->direct(std::clamp(scroll + factor * 60.f, -outage, 0.f));
}

void layout::on_mouse_down(char key)
{
	control_container::on_mouse_down(key);

	// check if cursor is on grip
	if (key == m_left && grip.margin_top(-an->value * outage_factor).contains(input.cursor()))
		lock_input();
}

void gui::layout::on_mouse_up(char key)
{
	control_container::on_mouse_up(key);

	if (key == m_left && ctx->active && ctx->active->id == id)
		unlock_input();
}

void layout::on_mouse_move(const ren::vec2 &p, const ren::vec2 &d)
{
	control_container::on_mouse_move(p, d);

	// if we're scrolling, scroll! (c)
	if (ctx->active && ctx->active->id == id)
	{
		const auto real_track_size = area().height();

		// a bit of math to calculate accurate scroll factor
		scroll = std::clamp(scroll - d.y * (real_track_size / (real_track_size * outage_factor)), -outage, 0.f);
		an->value = an->end = an->start = scroll;
	}
}

void layout::refresh()
{
	if (grip.mins.len_sqr() != 0.f)
	{
		control::refresh();

		// custom refresh with account of scrolling
		const auto animated_scroll = an->value;
		for_each_control(
			[ & ](std::shared_ptr<control> &c)
			{
				if (!c->is_taking_input || !c->is_visible)
					return;

				c->pos.y += animated_scroll;
				c->refresh();
				c->pos.y -= animated_scroll;
			});
	}
	else
		control_container::refresh();
}

void layout::reset_stack()
{
	// THE WORLD'S FAMOUS AUTO ALIGN AND STACK ALGORITHM
	// (c) ruppet 2020-2069

	// autosize height if we want to
	if (should_fit_height)
		size.y = calc_max_y();

	const auto anim_scroll = an;
	anim_scroll->direct(0.f, 0.f);

	// no need to stack if option is disabled
	if (direction == s_none)
		return;

	vec2 offset{};

	const auto last_control = controls.empty() ? nullptr : controls.back();
	const auto my_w = area().width();
	for_each_control(
		[ & ](std::shared_ptr<control> &c)
		{
			if (!c->is_visible && !stack_invisible)
				return;

			c->pos = offset;

			const auto w = c->area().width();
			switch (direction)
			{
			case s_vertical:
				// vertical stacking
				// stacks by children height + bottom margin
				// if centerize is wanted, also sets their X accordingly

				offset.y += c->area().height() + c->margin.maxs.y + stack_offset.y;
				if (should_centerize)
					c->pos.x = (size.x - c->area(true).width()) * 0.5f;

				break;
			case s_horizontal:
				// horizontal stacking
				// same as vertical, but affects X

				offset.x += c->area().width() + c->margin.maxs.x + stack_offset.x;
				if (should_centerize)
					c->pos.y = (size.y - c->area(true).height()) * 0.5f;


				break;
			case s_inline:
				// inline stacking
				// places first element at 0,0; later go from right to left
				// also can centerize by Y

				if (offset.len_sqr() == 0.f)
					offset = vec2(my_w, 0.f);
				else
				{
					c->pos.x -= w + c->margin.maxs.x + c->margin.mins.x;
					offset.x -= w + c->margin.maxs.x + c->margin.mins.x + stack_offset.x;
				}
				if (should_centerize)
					c->pos.y = (size.y - c->area(true).height()) * 0.5f;


				break;
			case s_inline_inv:
				// inversed inline stacking
				// places all elements at 0,0; last one goes to the most right
				if (c != last_control)
					offset.x += c->area().width() + c->margin.maxs.x + stack_offset.x;
				else
					c->pos.x = my_w - c->area().width();

				if (should_centerize)
					c->pos.y = (size.y - c->area(true).height()) * 0.5f;

				break;

			case s_grid:
				// grid aligning
				// places controls one by one, if this layout's width is being exceeded, moves to the next row
				// works best with controls which have same height

				if (offset.x + w > my_w - (margin.mins.x + margin.maxs.x))
				{
					offset.x = 0.f;
					offset.y += c->area().height() + c->margin.maxs.y;

					c->pos = offset;
					offset.x += w;
				}
				else
					offset.x += w;

				break;
			case s_justify:
				// flex aligning
				// justifies controls to the full width of layout (works best with same-width controls)

				offset.x += (my_w - (w + c->margin.mins.x)) / (controls.size() - 1);
				if (should_centerize)
					c->pos.y = (size.y - c->size.y) * 0.5f;

				break;
			}

			c->pos = c->pos.floor();
		});
}

void layout::create()
{
	an = std::make_shared<anim_float>(0.f, 0.25f, ease_out);
	an->on_started = [ & ](std::shared_ptr<anim<float>> a)
	{
		scroll = a->end;
	};
}
