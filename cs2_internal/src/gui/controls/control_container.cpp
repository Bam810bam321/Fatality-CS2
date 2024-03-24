#include <gui/controls/control_container.h>
#include <gui/gui.h>

GUI_NAMESPACE;

void control_container::add(const std::shared_ptr<control> &c)
{
	// bind parent and adjust margin
	c->parent = shared_from_this();
	c->margin.mins += custom_margin.mins;
	c->margin.maxs += custom_margin.maxs;

	// adjust size in case we want to
	if (c->size_to_parent_w)
		c->size.x = size.x - (c->margin.mins.x + c->margin.maxs.x);
	if (c->size_to_parent_h)
		c->size.y = size.y - (c->margin.mins.y + c->margin.maxs.y);

	container::add(c);
}

void control_container::remove(const std::shared_ptr<control> &c)
{
	if (c->is_container)
		c->as<control_container>()->remove_all();

	container::remove(c);
}

void control_container::remove(uint64_t id)
{
	if (auto p = std::find_if(
		controls.begin(), controls.end(), [id](const std::shared_ptr<control> &c) -> bool
		{
			return c->id == id;
		}); p != controls.end())
	{
		const auto &c = *p;
		if (c->is_container)
			c->as<control_container>()->remove_all();
	}

	container::remove(id);
}

void control_container::refresh()
{
	if (should_process_children)
	{
		for_each_control(
			[](std::shared_ptr<control> &c)
			{
				if ((c->is_taking_input || c->is_container) && c->is_visible)
					c->refresh();
			});
	}

	control::refresh();
}

void control_container::render()
{
	control::render();

	if (should_process_children)
	{
		for_each_control(
			[](std::shared_ptr<control> &c)
			{
				if (c->is_visible)
					c->render();
			});
	}
}

void control_container::reset()
{
	control::reset();

	for_each_control(
		[](std::shared_ptr<control> &c)
		{
			c->reset();
		});
}

void control_container::raise_first_render_call()
{
	const std::lock_guard lock(container_mutex);

	for (auto &c : controls)
	{
		if (c->is_container)
			c->as<control_container>()->raise_first_render_call();

		c->do_first_render_call();
	}
}

void control_container::process_queues()
{
	const std::lock_guard lock(container_mutex);

	process_add_schedule();

	for (auto &c : controls)
	{
		if (c->is_container)
			c->as<control_container>()->process_queues();
	}

	process_remove_schedule();
}

void control_container::copy(const std::shared_ptr<control_container> &c)
{
	// clear first
	c->clear();

	// copy then
	for_each_control(
		[c](std::shared_ptr<control> &e)
		{
			c->add(e);
		});

	// and force process add schedule to update
	c->process_add_schedule();
}

float control_container::calc_max_y()
{
	auto max_y = 0.f;
	for_each_control(
		[&](std::shared_ptr<control> &c)
		{
			if (const auto y = c->area(true).maxs.y; y > max_y && c->is_visible)
				max_y = y;
		});

	return max_y;
}
