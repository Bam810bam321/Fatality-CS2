#include <gui/popups/search_popup.h>
#include <gui/gui.h>
#include <gui/controls.h>
#include <gui/controls/search_result.h>

using namespace evo;

namespace evo::gui
{
	using namespace ren;

	void search_popup::on_first_render_call()
	{
		popup::on_first_render_call();

		loading_anim = std::make_shared<anim_float>(0.f, 0.7f);
		loading_anim->direct(0.f, deg2rad(360.f));
		loading_anim->on_finished = [](std::shared_ptr<anim<float>> f)
		{
			f->direct(0.f, deg2rad(360.f));
		};

		const auto search_bar = std::make_shared<text_input>(GUI_HASH("gui_sp_search"), vec2{8.f, 8.f}, vec2{size.x - 22.f, 24.f});
		search_bar->is_mouse_on_me = true;
		search_bar->on_mouse_down(m_left); // force focus
		search_bar->is_mouse_on_me = false;
		search_bar->placeholder = XOR("Start typing...");
		search_bar->callback = [&](std::string str)
		{
			if (str.empty() || is_making_cache)
			{
				search_list->clear();
				return;
			}

			search_list->clear();

			std::transform(str.begin(), str.end(), str.begin(), ::tolower);
			for (const auto &c : cache)
			{
				std::string tmp_text{c.text};
				std::transform(tmp_text.begin(), tmp_text.end(), tmp_text.begin(), ::tolower);

				auto found = tmp_text.find(str) != std::string::npos;
				if (!found)
				{
					for (const auto &n : c.names)
						if (n.find(str) != std::string::npos)
						{
							found = true;
							break;
						}
				}

				const auto ctrl = c.control.lock();
				if (!found || !ctrl)
					continue;

				const auto r = std::make_shared<search_result>(ctrl->id + 1, c.text, c.control);
				r->wnd = shared_from_this();
				search_list->add(r);
			}
		};

		add(search_bar);

		search_list = std::make_shared<layout>(GUI_HASH("gui_sp_list"), vec2{0.f, 40.f}, vec2{size.x, size.y - 40.f}, s_vertical);
		search_list->is_visible = false;

		add(search_list);

		pos = calc_perfect_position(pos);

		make_cache();

		ctx->top_sort = sort;
		ctx->active_popups.emplace_back(as<popup>());
	}

	void search_popup::render()
	{
		if (!is_visible)
			return;

		const auto r = area_abs();

		begin_render();

		auto &d = draw.layers[ctx->content_layer];
		d->g.anti_alias = true;
		d->add_shadow_rect(area_abs(), 8.f, true);
		d->add_rect_filled_rounded(r, colors.bg_block, 3.f);
		d->add_rect_rounded(r, colors.outline, 3.f);
		d->g.anti_alias = {};

		if (is_making_cache)
		{
			d->g.rotation = loading_anim->value;
			d->g.texture = ctx->res.general.loader->obj;
			d->g.anti_alias = true;
			d->add_rect_filled(rect(r.center()).translate({-8.f, 8.f}).size({16.f, 16.f}), colors.accent);
			d->g.texture = {};
			d->g.anti_alias = {};
			d->g.rotation = {};
		}

		loading_anim->animate();
		popup::render();
	}

	void search_popup::make_cache()
	{
		is_making_cache = true;

		std::thread(
			[&]()
			{
				cache.clear();

				std::function<void(std::shared_ptr<control> &)> cache_looper;
				cache_looper = [&](std::shared_ptr<control> &c)
				{
					// if it is a container, loop inside
					if (c->is_container)
					{
						c->as<control_container>()->for_each_control(cache_looper);
						return;
					}

					// test if it is a button or a label
					if (c->type == ctrl_button || c->type == ctrl_label || c->type == ctrl_toggle_button)
					{
						search_cache_entry entry;
						entry.control = c;

						std::string text;
						if (c->type == ctrl_button)
						{
							const auto btn = c->as<button>();
							text = btn->text;
							if (text.empty() && !btn->tooltip.empty())
								text = btn->tooltip;
						}
						else if (c->type == ctrl_toggle_button)
							text = c->as<toggle_button>()->tooltip;
						else if (c->type == ctrl_label)
							text = c->as<label>()->text;

						entry.text = text;

						std::transform(text.begin(), text.end(), text.begin(), ::tolower);
						entry.names.push_back(text);

						if (!c->tooltip.empty())
						{
							std::string tmp_text{c->tooltip};
							std::transform(tmp_text.begin(), tmp_text.end(), tmp_text.begin(), ::tolower);
							entry.names.push_back(tmp_text);
						}

						for (const auto &a : c->aliases)
							entry.names.push_back(a);

						for (const auto &bc : c->get_breadcrumbs())
						{
							std::string tmp_text{bc};
							std::transform(tmp_text.begin(), tmp_text.end(), tmp_text.begin(), ::tolower);
							entry.names.push_back(tmp_text);
						}

						cache.push_back(entry);
					}
				};

				ctx->for_each_control(cache_looper);
				search_list->is_visible = true;
				is_making_cache = false;
			}).detach();
	}
}
