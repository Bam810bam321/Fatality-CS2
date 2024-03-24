#include <gui/control.h>
#include <gui/gui.h>
#include <gui/popups/hotkey_popup.h>

#include <gui/controls/layout.h>
#include <gui/controls/checkbox.h>
#include <gui/controls/tab.h>
#include <gui/controls/tabs_layout.h>
#include <gui/controls/settings.h>
#include <gui/controls/label.h>

GUI_NAMESPACE;

void control::refresh()
{
	// don't lock input if invisible
	if (!is_visible)
		unlock_input();

	if (!is_taking_input || !is_visible || is_locked_by_someone_else())
		return;

	// take key input
	if (is_taking_keys)
	{
		for (auto i = 0; i < 255; i++)
		{
			if (input.is_key_clicked(i))
				on_key_down(i);
			if (input.is_key_released(i))
				on_key_up(i);
		}
	}

	// take text input
	if (is_taking_text)
	{
		if (const auto text = input.text(); text)
			on_text_input(*text);
	}

	// if mouse is not on parent we should stop taking input
	if (const auto p = get_parent(); p && !p->is_mouse_on_me && is_caring_about_parent)
	{
		if (is_mouse_on_me)
		{
			if (can_show_debug_info() && !ctx->hover_stack.empty())
				ctx->hover_stack.pop();

			on_mouse_leave();
			is_mouse_on_me = false;
		}

		return;
	}

	// check if mouse is on top of this control
	if (area_abs().contains(input.cursor()))
	{
		if (!is_mouse_on_me)
		{
			if (can_show_debug_info())
				ctx->hover_stack.push(id);

			on_mouse_enter();
			is_mouse_on_me = true;
		}
	}
	else
	{
		if (is_mouse_on_me)
		{
			if (can_show_debug_info() && !ctx->hover_stack.empty())
				ctx->hover_stack.pop();

			on_mouse_leave();
			is_mouse_on_me = false;
		}
	}

	// if the mouse is on this control, process mouse move, clicks and wheel
	if (is_mouse_on_me && is_caring_about_hover || !is_caring_about_hover)
	{
		if (input.did_cursor_move())
			on_mouse_move(input.cursor(), input.cursor_delta());

		for (auto i = 0; i < m_max; i++)
		{
			if (input.is_mouse_clicked(i))
				on_mouse_down(i);
			if (input.is_mouse_released(i))
				on_mouse_up(i);
		}

		if (const auto wheel = input.wheel_delta(); wheel != 0.f)
			on_mouse_wheel(wheel);

		// spawn hotkey popup if we need to
		if (hotkey_type != hkt_none && input.is_mouse_clicked(m_right))
		{
			if (!ctx->active_popups.empty())
			{
				auto &last = ctx->active_popups.back();
				if (last->p_type == pt_hotkey_popup)
					return;
			}

			const auto hk_popup = std::make_shared<hotkey_popup>(control_id{id + 1}, shared_from_this());
			hk_popup->open();
		}

		if (can_show_debug_info() && ctx->get_last_hovered() == id && input.is_mouse_clicked(m_middle))
		{
			clipboard::set(id_string);
			highlight();
		}
	}
}

bool control::can_show_debug_info() const
{
	return ctx->show_ids.get() && !id_string.empty() && type != ctrl_layout && type != ctrl_window && type != ctrl_popup && type != ctrl_widget && type != ctrl_tab &&
		type != ctrl_tabs_layout && type != ctrl_tabs_layout && type != ctrl_settings && type != ctrl_toggle_button && type != ctrl_selectable && type != ctrl_child_tab
		&& type != ctrl_spacer && type != ctrl_button && !disable_id_display;
}

void control::notify_nearby_label() const
{
	const auto par = get_parent();
	if (!par)
		return;

	// get label
	const auto lb = par->as<control_container>()->at(0);
	if (!lb || lb->type != ctrl_label)
		return;

	auto has_hotkey = false;

	// iterate all elements to check for hotkey
	par->as<control_container>()->for_each_control(
		[&has_hotkey](const std::shared_ptr<control> &m)
		{
			if (has_hotkey || m->type == ctrl_label)
				return;

			has_hotkey = !m->hotkeys.empty();
		});

	// update!
	lb->as<label>()->is_new = has_hotkey;
}

void control::render()
{
	// nope
	if (!is_visible)
		return;

	if (is_mouse_on_me && !is_locked_by_someone_else())
	{
		// show debug meme
		if (can_show_debug_info() && ctx->get_last_hovered() == id)
		{
			const auto &m = draw.fonts[GUI_HASH("gui_bold")];
			const auto &m_normal = draw.fonts[GUI_HASH("gui_main")];
			const auto ts = m->get_text_size(id_string);
			const auto r = rect(input.cursor() + 16.f).size(vec2{std::max(ts.x, 108.f) + 36.f, 40.f});

			auto &d = draw.layers[l_top];
			d->g.anti_alias = true;
			d->add_shadow_rect(r, 4.f, false, 0.15f);
			d->add_rect_filled_rounded(r, colors.bg_bottom, 4.f);
			d->add_rect_rounded(r, colors.outline, 4.f);
			d->g.anti_alias = false;
			d->g.texture = ctx->res.icons.bug->obj;

			d->add_rect_filled(r.width(20.f).height(20.f).translate({4.f, 4.f}), color::white());
			d->g.texture = {};

			d->font = m;
			d->add_text(vec2(r.tl().x + 28.f, r.tl().y + 8.f), id_string, colors.text);
			d->font = m_normal;
			d->add_text(vec2(r.tl().x + 28.f, r.tl().y + 22.f), XOR("Middle click to copy"), colors.text_dark);
		}

		// show tooltip
		if (!tooltip.empty() && !ctx->show_ids)
		{
			if (!ctx->tooltip_list.contains(id) || ctx->tooltip_list[id].expired())
				ctx->tooltip_list[id] = weak_from_this();

			const auto &m = draw.fonts[GUI_HASH("gui_main")];
			const auto r = rect(input.cursor() + 16.f).size(m->get_text_size(tooltip) + vec2{16.f, 8.f});

			auto &d = draw.layers[l_top];
			d->g.anti_alias = true;
			d->add_shadow_rect(r, 4.f, false, 0.15f);
			d->add_rect_filled_rounded(r, colors.bg_bottom, 4.f);
			d->add_rect_rounded(r, colors.outline, 4.f);
			d->g.anti_alias = false;
			d->font = m;
			d->add_text(vec2(r.tl().x + 8.f, r.center().y + 1.f), tooltip, colors.text, text_params::with_v(align_center));
		}
	}

	if (highlight_alpha->value > 0.f)
	{
		rect r;
		if (type == ctrl_label && !parent.expired())
			r = get_parent()->area_abs();
		else
			r = area_abs();

		const auto &d = draw.layers[l_top];
		d->g.anti_alias = true;
		d->add_rect_rounded(r.expand(2.f), colors.accent.mod_a(highlight_alpha->value), 4.f, rnd_all, 2.f);
		d->g.anti_alias = {};
	}

	debug.render(shared_from_this());
	highlight_alpha->animate();
}

void control::lock_input()
{
	if (!is_input_locked())
	{
		stop_caring();
		ctx->active = shared_from_this();
	}
}

void control::unlock_input()
{
	if (is_locked_by_me())
	{
		start_caring();
		ctx->active = nullptr;
	}
}

bool control::is_locked_by_me()
{
	return is_input_locked() && ctx->active->id == id;
}

bool control::is_locked_by_someone_else()
{
	return is_input_locked() && ctx->active->id != id;
}

bool control::is_input_locked()
{
	const auto wnd = window.lock();
	if (!ctx->active)
		return false;

	return !(wnd && wnd->id == ctx->active->id);
}

void control::clean_up_hotkeys()
{
	for (auto i = hotkeys.begin(); i != hotkeys.end();)
	{
		if (!i->first)
			i = hotkeys.erase(i);
		else
			++i;
	}
}

bool control::is_out_of_clip(const vec2 &p, float max_offset) const
{
	return p.x < -(size.x - max_offset) || p.y < -(size.y - max_offset) || p.x > (draw.display.x / draw.scale) - max_offset || p.y > (draw.display.y / draw.scale) -
		max_offset;
}

vec2 control::calc_perfect_position(const vec2 &base) const
{
	// global area contains the pos, abort
	if (!is_out_of_clip(base, 0.f) && !is_out_of_clip(base + size, 0.f))
		return base;

	vec2 new_base{base.x, base.y};

	const auto &g = draw.display / draw.scale;

	// calculate offset from right & bottom
	if (base.x + size.x > g.x)
		new_base.x -= size.x;
	else if (base.x < 0.f)
		new_base.x += size.x;

	// calculate offset from left & top
	if (base.y + size.y > g.y)
		new_base.y -= size.y;
	else if (base.y < 0.f)
		new_base.y += size.y;

	return new_base;
}

void control::do_first_render_call()
{
	if (!first_render_call)
	{
		// attach the window
		window = find_associated_window();

		on_first_render_call();
		first_render_call = true;
	}
}

std::shared_ptr<control> control::make_width_automatic()
{
	size_to_parent_w = true;
	return shared_from_this();
}

std::shared_ptr<control> control::make_height_automatic()
{
	size_to_parent_h = true;
	return shared_from_this();
}

std::shared_ptr<control> control::make_invisible()
{
	is_visible = false;
	return shared_from_this();
}

std::shared_ptr<control> control::adjust_margin(const rect &m)
{
	margin = m;
	return shared_from_this();
}

std::shared_ptr<control> control::adjust_size(const vec2 &s)
{
	size = s;
	return shared_from_this();
}

std::shared_ptr<control> control::make_tooltip(const std::string &s)
{
	tooltip = s;
	return shared_from_this();
}

vec2 control::pos_abs() const
{
	const auto ptr = get_parent();
	return ptr ? (ptr->pos_abs() + pos + margin.mins) : (pos + margin.mins);
}

rect control::area(bool m) const
{
	return rect(pos + (m ? vec2() : margin.mins)).size(size + (m ? margin.maxs + margin.mins : vec2()));
}

rect control::area_abs(bool m) const
{
	return rect(pos_abs()).size(size + (m ? margin.maxs : vec2()));
}

bool control::is_out_of_rect(const rect &r) const
{
	auto m = area_abs();
	return !r.contains(m.tl()) && !r.contains(m.br()) && !r.contains(m.tr()) && !r.contains(m.bl());
}

std::shared_ptr<control> control::find_associated_window()
{
	const auto ptr = get_parent();
	return ptr ? (ptr->is_window ? ptr : ptr->find_associated_window()) : nullptr;
}

void control::refresh_hotkeys()
{
	if (hotkey_type == hkt_none || hotkeys.empty())
		return;

	for (const auto &[key, state] : hotkeys)
	{
		// check if the key is down
		const auto mouse_btn = input.vk_to_mouse_button(key);
		if ((mouse_btn && input.is_mouse_clicked(*mouse_btn)) || input.is_key_clicked(key))
			update_hotkey_value(hku_click, state);
		else if ((mouse_btn && input.is_mouse_released(*mouse_btn)) || input.is_key_released(key))
			update_hotkey_value(hku_release, state);
	}
}

void control::update_hotkey_table()
{
	// update accordingly
	if (!hotkeys.empty())
		ctx->hotkey_list[id] = weak_from_this();
	else
		ctx->hotkey_list.erase(id);
}

void control::process_draw_param_changes(char w)
{
	on_draw_param_changed(w);
	if (const auto p = get_parent(); p && p->is_container)
	{
		const auto parent_c = p->as<control_container>();
		parent_c->on_control_draw_param_changed(shared_from_this(), w);
	}
}

void control::run_universal_callbacks()
{
	for (const auto &[_, cbk_list] : universal_callbacks)
	{
		for (const auto &cbk : cbk_list)
			cbk();
	}
}

std::weak_ptr<control> control::get_top_breadcrumb() const
{
	std::weak_ptr<control> breadcrumb;

	auto par = get_parent();
	while (par)
	{
		if (par->is_breadcrumb && par->type == ctrl_layout)
		{
			if (const auto l = par->as<layout>(); !l->nav_tab.expired())
				breadcrumb = l->nav_tab;
		}

		par = par->get_parent();
	}

	return breadcrumb;
}

std::vector<std::string> control::get_breadcrumbs() const
{
	std::vector<std::string> out;

	auto par = get_parent(true);
	while (par)
	{
		if (par->is_breadcrumb)
			out.push_back(par->breadcrumb_name);
		par = par->get_parent();
	}

	std::reverse(out.begin(), out.end());
	return out;
}

void control::highlight()
{
	// navigate
	auto par = get_parent();
	auto last_par = shared_from_this();

	while (par)
	{
		if (par->type != ctrl_layout && par->type != ctrl_settings)
		{
			last_par = par;
			par = par->get_parent();
			continue;
		}

		if (par->type == ctrl_settings)
		{
			const auto s = par->as<settings>();
			s->on_mouse_down(m_left);

			last_par = par;
			par = s->get_parent();
			continue;
		}

		const auto l = par->as<layout>();
		if (!l->nav_tab.expired())
		{
			const auto t = l->nav_tab.lock()->as<tab>();
			t->get_parent()->as<tabs_layout>()->update_selected(t);

			last_par = par;
			par = l->get_parent();
			continue;
		}

		l->set_scroll(0.f);

		const auto target_y = last_par->area(true).mins.y + last_par->area(true).height();
		const auto l_height = l->area().height();
		if (target_y > l_height)
			l->set_scroll(l_height - target_y);

		last_par = par;
		par = l->get_parent();
	}

	highlight_alpha->direct(1.f, 0.f);
}
