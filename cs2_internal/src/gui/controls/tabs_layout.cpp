#include <gui/controls/tabs_layout.h>
#include <gui/controls/tab.h>

GUI_NAMESPACE;

void tabs_layout::update_selected(std::shared_ptr<control> c)
{
	const auto s = c->as<tab>();
	if (!s)
		return;

	/*for_each_control([&s, this](std::shared_ptr<control>& m) {
		const auto m_s = m->as<tab>();
		if (!m_s || m_s->id == s->id)
			return;

		if (m_s->is_selected)
			last_deselected_pos = m_s->pos_abs();
		m_s->unselect();
	});

	s->select();*/

	for_each_control(
		[&s](std::shared_ptr<control> &m)
		{
			// skip spacers.
			if (m->type == ctrl_spacer)
				return;

			const auto m_s = m->as<tab>();
			if (!m_s)
				return;

			(m_s->id != s->id) ? m_s->unselect() : s->select();
		});
}

void tabs_layout::reset_stack()
{
	if (auto_stretch)
	{
		const auto c_w = size.x / (direction == td_horizontal ? static_cast<float>(count()) : 1.f);
		for_each_control(
			[c_w](std::shared_ptr<control> &c)
			{
				c->margin = {};
				c->size.x = c_w;
			});
	}

	layout::reset_stack();
}

void tabs_layout::render()
{
	layout::render();
}
