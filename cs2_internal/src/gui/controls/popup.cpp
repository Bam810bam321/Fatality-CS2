#include <gui/controls/popup.h>
#include <gui/gui.h>

GUI_NAMESPACE;

void popup::render()
{
	a->animate();
	if (!is_visible)
		return;

	begin_render();
	control_container::render();
	end_render();
}

void popup::begin_render()
{
	// set layers to popup mode
	if (ctx->content_layer != l_popup_back || ctx->scrollbar_layer != l_popup_back)
	{
		ctx->content_layer = l_popup_back;
		ctx->scrollbar_layer = l_popup_back; // mom get the camera

		// force alpha
		draw.layers[ctx->content_layer]->g.alpha = a->value;
		draw.layers[ctx->scrollbar_layer]->g.alpha = a->value;
	}
}

void popup::end_render()
{
	// set layers to normal mode
	if (ctx->content_layer != l_back || ctx->scrollbar_layer != l_mid)
	{
		// remove alpha
		draw.layers[ctx->content_layer]->g.alpha = 0.f;
		draw.layers[ctx->scrollbar_layer]->g.alpha = 0.f;

		ctx->content_layer = l_back;
		ctx->scrollbar_layer = l_mid;
	}
}

void popup::on_mouse_move(const vec2 &p, const vec2 &d)
{
	control_container::on_mouse_move(p, d);
	if (!allow_move)
		return;

	if (is_locked_by_me())
	{
		const auto temp_pos = pos + d;
		if (is_out_of_clip(temp_pos))
			return;

		pos = temp_pos;
	}
}

void popup::on_mouse_down(char key)
{
	control_container::on_mouse_down(key);
	if (!allow_move)
		return;

	if (key == m_left)
	{
		is_caring_about_hover = false;
		if (ctx->top_sort != sort)
			sort = ++ctx->top_sort;

		lock_input();
	}
}

void popup::on_mouse_up(char key)
{
	control_container::on_mouse_up(key);
	if (!allow_move || is_locked_by_someone_else())
		return;

	if (key == m_left)
	{
		is_caring_about_hover = true;
		unlock_input();
	}
}

void popup::create()
{
	sort = ++ctx->top_sort;

	const auto temp_id = id;
	const auto temp_is_action_popup = is_action_popup;

	a = std::make_shared<ren::anim_float>(0.f, 0.15f);
	a->on_finished = [temp_id, temp_is_action_popup](std::shared_ptr<anim<float>> a)
	{
		if (a->end == 0.f)
		{
			if (temp_is_action_popup)
				ctx->active_popups.erase(std::find_if(ctx->active_popups.begin(), ctx->active_popups.end(), [temp_id](const auto &p) { return p->id == temp_id; }));

			ctx->remove(temp_id);
			ctx->active = nullptr;
		}
	};

	a->direct(1.f);
}

void popup::close()
{
	a->direct(0.f);
}

void popup::add(const std::shared_ptr<control> &c)
{
	control_container::add(c);
}

void popup::open()
{
	if (is_action_popup && !ctx->active_popups.empty() && ctx->active_popups.back()->id == id)
		return;

	ctx->add(shared_from_this());
	ctx->active = nullptr;
}
