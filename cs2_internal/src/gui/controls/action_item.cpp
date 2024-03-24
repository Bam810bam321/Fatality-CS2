#include <gui/controls/action_item.h>
#include <gui/popups/action_list_popup.h>

namespace evo::gui
{
	using namespace ren;

	void action_item::render()
	{
		control::render();
		if (!is_visible)
			return;

		an->animate();

		const auto r = area_abs();

		auto &d = draw.layers[ctx->content_layer];
		d->font = draw.fonts[GUI_HASH("gui_main")];
		d->add_text(r.tl() + vec2{4.f, 4.f}, s, an->value);
	}

	void action_item::on_mouse_down(char key)
	{
		if (key != m_left || is_locked_by_me())
			return;

		is_selected ? unselect() : select();

		update_parent_value();
		lock_input();
	}

	void action_item::on_mouse_up(char key)
	{
		unlock_input();
	}

	void action_item::on_mouse_enter()
	{
		if (is_selected)
			return;

		an->direct(colors.text_light);
	}

	void action_item::on_mouse_leave()
	{
		if (is_selected)
			return;

		an->direct(colors.text_mid);
	}

	void action_item::select()
	{
		is_selected = true;
		an->direct(colors.accent);
	}

	void action_item::unselect()
	{
		is_selected = false;
		an->direct(colors.text_mid);
	}

	void action_item::update_parent_value()
	{
		const auto p = ctx->find<action_list_popup>(GUI_HASH("action_list_popup"));
		if (!p)
			return;

		p->update_value(v, is_selected);
	}
}
