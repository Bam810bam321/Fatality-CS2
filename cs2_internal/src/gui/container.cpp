#include <gui/gui.h>

GUI_NAMESPACE;

std::shared_ptr<control> container::find(uint64_t id, bool root_only, bool ignore_global)
{
	if (!root_only && !ignore_global)
	{
		if (!ctx->global_list[id].expired())
			return ctx->global_list[id].lock();
	}

	std::shared_ptr<control> result{};
	for_each_control(
		[&result, id, root_only](std::shared_ptr<control> &c)
		{
			if (result || !c)
				return;

			if (c->id == id)
				result = c;
			else
			{
				if (c->is_container && !root_only)
					result = c->as<control_container>()->find(id);
			}
		});

	return result;
}

std::vector<std::shared_ptr<control>> container::find_all(uint64_t id)
{
	std::vector<std::shared_ptr<control>> result{};
	find_all(id, result);

	return result;
}

void container::find_all(uint64_t id, std::vector<std::shared_ptr<control>> &r)
{
	for_each_control(
		[&r, id](std::shared_ptr<control> &c)
		{
			if (c->id == id)
				r.emplace_back(c);
			else
			{
				if (c->is_container)
					c->as<control_container>()->find_all(id, r);
			}
		});
}

void container::process_add_schedule()
{
	for (auto &c : add_schedule)
	{
		controls.emplace_back(c);
		ctx->global_list[c->id] = c;
		on_control_added(c);
	}

	add_schedule.clear();
}

void container::process_remove_schedule()
{
	for (auto &c : remove_schedule)
	{
		if (auto p = std::find_if(controls.begin(), controls.end(), [c](const std::shared_ptr<control> &ctrl) { return ctrl->id == c; }); p != controls.end())
		{
			// remove this one from active if we're getting rid of it
			if (*p == ctx->active)
				ctx->active = nullptr;

			ctx->global_list[(*p)->id] = {};
			controls.erase(p);
			on_control_removed();
		}
	}

	remove_schedule.clear();
}

void container::add(const std::shared_ptr<control> &c)
{
	// abort if element already exists
	if (find(c->id, false, true))
		return;

	const std::lock_guard lock(modify_mutex);
	add_schedule.emplace_back(c);
}

void container::remove(uint64_t id)
{
	const std::lock_guard lock(modify_mutex);
	remove_schedule.emplace_back(id);
}

void container::remove(const std::shared_ptr<control> &c)
{
	const std::lock_guard lock(modify_mutex);
	remove_schedule.emplace_back(c->id);
}

void container::remove_all()
{
	const std::lock_guard lock(modify_mutex);
	for (const auto &c : controls)
		remove_schedule.emplace_back(c->id);
}

void container::for_each_control(const std::function<void(std::shared_ptr<control> &)> &fn)
{
	for (auto &c : controls)
	{
		if (!c || std::find(remove_schedule.begin(), remove_schedule.end(), c->id) != remove_schedule.end())
			continue;

		fn(c);
	}
}

void container::for_each_control_logical(const std::function<bool(std::shared_ptr<control> &)> &fn)
{
	for (auto &c : controls)
	{
		if (fn(c))
			return;
	}
}

void container::for_each_control_ordered(const std::function<bool(std::shared_ptr<control> &)> &fn)
{
	std::vector<std::shared_ptr<control>> controls_ordered{};
	controls_ordered = controls;

	sort_controls(controls_ordered);

	for (auto &c : controls_ordered)
	{
		if (fn(c))
			break;
	}
}

void container::for_each_control_ordered_reverse(const std::function<void(std::shared_ptr<control> &)> &fn)
{
	std::vector<std::shared_ptr<control>> controls_ordered{};
	controls_ordered = controls;

	sort_controls(controls_ordered);

	for (auto i = controls_ordered.rbegin(); i != controls_ordered.rend(); i++)
		fn(*i);
}

void container::sort_controls(std::vector<std::shared_ptr<control>> &controls_ordered)
{
	std::sort(
		controls_ordered.begin(), controls_ordered.end(), [](const std::shared_ptr<control> &a, const std::shared_ptr<control> &b)
		{
			if (a->priority < b->priority)
				return false;
			if (a->priority > b->priority)
				return true;

			return a->sort > b->sort;
		});
}
