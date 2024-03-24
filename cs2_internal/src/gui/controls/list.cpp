#include <gui/controls/list.h>
#include <gui/controls/selectable.h>

GUI_NAMESPACE;

void list::on_control_added(const std::shared_ptr<control> &c)
{
	const auto s = c->as<selectable>();
	if (s)
		s->is_odd = count() % 2 != 0;

	layout::on_control_added(c);
}

void list::update_selected(std::shared_ptr<control> c)
{
	const auto s = c->as<selectable>();
	if (!s)
		return;

	if (!allow_multiple)
		value.get().reset();

	auto n = 0;
	for_each_control(
		[&](std::shared_ptr<control> &m)
		{
			const auto m_s = m->as<selectable>();
			if (!m_s)
			{
				++n;
				return;
			}

			m_s->is_caring_about_hover = m_s->is_caring_about_parent = true;

			const auto v = m_s->value != -1 ? m_s->value : n;
			if (m_s->id != s->id)
			{
				if (!allow_multiple)
				{
					m_s->unselect();
					if (!legacy_mode)
						value->unset(v);
				}
			}
			else
			{
				if (allow_multiple)
				{
					s->is_selected ? s->unselect() : s->select();
					s->is_selected ? value->set(v) : value->unset(v);
				}
				else
				{
					s->select();

					if (!legacy_mode)
						value->set(v);
					else
						value = static_cast<bits>(v);
				}
			}

			n++;
		});

	if (callback)
		callback(value.get());

	run_universal_callbacks();
}

void list::reset()
{
	auto n = 0;
	for_each_control(
		[&](std::shared_ptr<control> &c)
		{
			const auto s = c->as<selectable>();
			if (!s)
				return;

			const auto v = s->value != -1 ? s->value : n;

			if (!legacy_mode)
				value->get(v) ? s->select() : s->unselect();
			else
				(static_cast<int>(value.get()) == v) ? s->select() : s->unselect();

			n++;
		});

	layout::reset();
}

void list::soft_reset()
{
	auto n = 0;
	for_each_control(
		[ & ](std::shared_ptr<control> &c)
		{
			const auto s = c->as<selectable>();
			if (!s)
				return;

			const auto v = s->value != -1 ? s->value : n;

			if (!legacy_mode)
				value->get(v) ? s->select() : s->unselect();
			else
				(static_cast<int>(value.get()) == v) ? s->select() : s->unselect();

			n++;
		});

	layout::soft_reset();
}

void list::render()
{
	if (!is_visible)
		return;

	const auto r = area_abs();

	auto &l = draw.layers[ctx->content_layer];
	l->add_rect_filled_rounded(r, colors.bg_bottom, 2.f);

	const auto old_clip = l->g.clip_rect;
	l->override_clip_rect(r);

	layout::render();

	l->g.clip_rect = old_clip;

	if (!is_taking_input || show_spinner)
		l->add_rect_filled_rounded(r, colors.bg_bottom.mod_a(.75f), 2.f);

	if (show_spinner)
	{
		spinner_anim->animate();

		l->g.rotation = spinner_anim->value;
		l->g.texture = ctx->res.general.loader->obj;
		l->g.anti_alias = true;
		l->add_rect_filled({r.center() - vec2{8.f, 8.f}, r.center() + vec2{8.f, 8.f}}, colors.accent);
		l->g.texture = {};
		l->g.anti_alias = {};
		l->g.rotation = {};
	}
}

void list::filter_items(const std::string &str)
{
	if (str.empty())
	{
		for_each_control(
			[](auto e)
			{
				e->is_visible = true;
			});
	}
	else
	{
		std::string lc{str};
		std::ranges::transform(lc, lc.begin(), ::tolower);

		for_each_control(
			[&](auto e)
			{
				const auto c = e->template as<selectable>();

				std::string lcn{c->text};
				std::ranges::transform(lcn, lcn.begin(), ::tolower);

				c->is_visible = lcn.find(lc) != std::string::npos;
			});
	}

	reset_stack();
	reset_scroll();
}
