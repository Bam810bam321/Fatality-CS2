#include <gui/notify_system.h>
#include <gui/gui.h>
#include <gui/controls/layout.h>
#include <gui/controls/notification_control.h>

GUI_NAMESPACE;

void notification_system::clear()
{
	std::lock_guard _lock(data_mutex);
	for (const auto &d : data)
	{
		d->expiry.direct(5.f, 5.f);
		remove(d->id);
	}
}

void notification_system::add(const std::shared_ptr<notification> &item)
{
	std::lock_guard _lock(data_mutex);
	for (const auto &d : data)
		d->pos.direct(d->pos.end + popup_rect.height() + 8.f);

	// auto-set id
	item->id = data.size() + 1;

	if (data.empty())
		data.emplace_back(item);
	else
		data.emplace(data.begin(), item);

	auto odd = false;
	if (const auto nc_list = ctx->find(GUI_HASH("gui_nc_list")))
	{
		const auto arr = nc_list->as<layout>();

		arr->clear();
		for (const auto &n : data)
			arr->add(std::make_shared<notification_control>(control_id{GUI_HASH("gui_nc_n") + n->id}, odd = !odd, n));
	}
}

void notification_system::remove(uint64_t id)
{
	remove_queue.emplace_back(id);
}

void notification_system::process_removal_queue()
{
	for (auto i = remove_queue.begin(); i != remove_queue.end();)
	{
		const auto &d = *i;

		std::lock_guard _lock(data_mutex);
		const auto p = std::find_if(
			data.begin(), data.end(), [d](const std::shared_ptr<notification> &n)
			{
				return n->id == d;
			});

		if (p != data.end())
		{
			const auto &exp = (*p)->expiry;
			const auto &alpha = (*p)->alpha;
			if (exp.value == exp.end && alpha.value == 0.f)
			{
				data.erase(p);
				i = remove_queue.erase(i);
				continue;
			}
		}

		i++;
	}
}

void notification_system::erase_dead()
{
	std::lock_guard _lock(data_mutex);
	for (auto i = data.begin(); i != data.end();)
	{
		if ((*i)->expiry.value <= 0.01f && (*i)->has_toggled_expiry)
			i = data.erase(i);
		else
			++i;
	}
}

std::optional<std::shared_ptr<notification>> notification_system::find(uint64_t id)
{
	std::lock_guard _lock(data_mutex);
	const auto p = std::find_if(
		data.begin(), data.end(), [id](const std::shared_ptr<notification> &n)
		{
			return n->id == id;
		});

	return p == data.end() ? std::nullopt : std::make_optional(*p);
}

void notification_system::for_each(const std::function<void(const std::shared_ptr<notification> &)> &fn)
{
	std::lock_guard _lock(data_mutex);
	for (const auto &n : data)
		fn(n);
}

void notification_system::render()
{
	auto &d = draw.layers[l_last];
	const vec2 cur{draw.display.x / draw.scale - popup_rect.width(), 40.f};

	const auto &f_main = draw.fonts[GUI_HASH("gui_main")];

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-lambda-capture"
	for_each(
		[cur, f_main, &d](const std::shared_ptr<notification> &n)
		{
			n->pos.animate();
			n->alpha.animate();
			n->expiry.animate();

			if (n->expiry.value == n->expiry.end && !n->has_toggled_expiry)
			{
				n->has_toggled_expiry = true;
				n->pos.direct(n->pos.value + 20.f);
				n->alpha.direct(0.f);
			}

			const auto r = popup_rect.translate(cur).translate({0.f, n->pos.value});

			const auto old_alpha = d->g.alpha;
			d->g.alpha = n->alpha.value;
			d->g.anti_alias = true;

			add_with_blur(
				d, r, [&](std::shared_ptr<layer> &l)
				{
					l->add_rect_filled_rounded(r, color::white(), 4.f);
				});

			d->add_rect_filled_rounded(r, colors.bg_bottom.mod_a(.74f), 4.f);
			d->add_rect_rounded(r, colors.outline.mod_a(.75f), 4.f);

			d->g.anti_alias = false;

			vec2 off{};
			if (n->icon)
			{
				off.x += 20.f;
				d->g.texture = n->icon->obj;
				d->add_rect_filled(rect(r.tl() + vec2{8.f, 5.f}).size({16.f, 16.f}), colors.accent);
				d->g.texture = {};
			}

			d->font = f_main;
			d->add_text(r.tl() + vec2{8.f + off.x, 8.f}, n->header, colors.accent);
			d->add_text(r.tl() + vec2{8.f, 24.f}, n->text, colors.text);
			d->g.alpha = old_alpha;
		});
#pragma clang diagnostic pop
}

int notification_system::get_count() const
{
	return data.size();
}

void notification_system::for_each_reverse(const std::function<void(const std::shared_ptr<notification> &)> &fn)
{
	std::lock_guard _lock(data_mutex);
	for (auto n = data.rbegin(); n != data.rend(); n++)
		fn(*n);
}
