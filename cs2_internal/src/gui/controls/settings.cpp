#include <gui/controls/settings.h>

#include "gui/popups/settings_popup.h"
#include <gui/controls/label.h>

GUI_NAMESPACE;

void settings::on_first_render_call()
{
	// context will be 100% initialized by this time, no issues will pop
	// however, this "breaks" it slightly as you need to pick the right time
	// to load the config, otherwise it will never process anything

	if (fn)
		fn(as<control_container>());

	process_queues();

	const auto par = get_parent();
	if (!par || par->as<control_container>()->empty())
		return;

	const auto pos_label = par->as<control_container>()->at(0);
	if (pos_label->type != ctrl_label)
		return;

	breadcrumb_name = pos_label->as<label>()->text;
}

void settings::render()
{
	anim->animate();
	control::render();
	if (!is_visible)
		return;

	auto &d = draw.layers[ctx->content_layer];
	d->g.texture = ctx->res.icons.settings->obj;
	d->add_rect_filled(area_abs().shrink(4.f), anim->value);
	d->g.texture = {};

	if (is_my_open)
	{
		if (ctx->find(id + 1, true))
			return;

		for_each_control(
			[this](auto e)
			{
				e->parent = weak_from_this();
			});

		is_my_open = false;
	}
}

void settings::on_mouse_enter()
{
	anim->direct(colors.text);
}

void settings::on_mouse_leave()
{
	anim->direct(colors.text_dark);
}

void settings::on_mouse_down(char key)
{
	if (key != m_left)
		return;

	const auto p = std::make_shared<settings_popup>(id + 1, id, as<settings>());
	p->open();

	is_my_open = true;
}
