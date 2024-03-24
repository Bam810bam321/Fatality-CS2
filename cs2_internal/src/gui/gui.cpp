#include <gui/gui.h>
#include <gui/anim.h>

#include <resources/josefin_sans.h>
#include <resources/josefin_sans_bold.h>
#include "tinyformat.h"

GUI_NAMESPACE;

namespace evo::ren
{
	void add_with_blur(std::shared_ptr<layer> &d, const rect &area, const std::function<void(std::shared_ptr<layer> &)> &fn)
	{
		if (gui::ctx->blur_quality->test(gui::blur_none))
			return;

		const auto ds_display = draw.display / draw.scale * .25f;
		d->g.frag_shader = draw.shaders[GUI_HASH("blur_f")]->obj;
		d->g.texture = draw.adapter->get_back_buffer_downsampled();
		d->g.uv_rect = {area.tl() * .25f / ds_display, area.br() * .25f / ds_display};
		d->g.only_downsampled = true;
		fn(d);

		d->g.chained_call = true;
		if (gui::ctx->blur_quality->test(gui::blur_full))
			fn(d);

		d->g.only_downsampled = d->g.chained_call = {};
		d->g.frag_shader = d->g.texture = {};
		d->g.uv_rect = {};
	}
} // namespace evo::ren

context::context(float text_size)
{
	// cache layers
	for (int i{l_back}; i <= l_last; ++i)
		draw.create_layer(i);

	draw.create_layer(50);
	draw.layers[50]->skip_dpi = true;

	// create fonts
	char win_dir_arr[256]{};
	GetSystemWindowsDirectoryA(win_dir_arr, 256);

	std::string win_dir{win_dir_arr};
	draw.fonts[GUI_HASH("gui_debug")] = std::make_shared<font>((win_dir + ("/fonts/seguisb.ttf")).c_str(), 18.f, font_flag_outline | font_flag_anti_alias, 0, 0x45F);
	draw.fonts[GUI_HASH("gui_title")] = std::make_shared<font>((win_dir + ("/fonts/seguisb.ttf")).c_str(), 22.f);
	draw.fonts[GUI_HASH("gui_main")] = std::make_shared<font>((win_dir + ("/fonts/seguisb.ttf")).c_str(), text_size + 4.f, font_flag_outline | font_flag_anti_alias, 0, 0x45F);
	draw.fonts[GUI_HASH("gui_bold")] = std::make_shared<font>((win_dir + ("/fonts/seguisb.ttf")).c_str(), text_size + 4.f, font_flag_outline | font_flag_anti_alias, 0, 0x45F);

	draw.shaders[GUI_HASH("blur_f")] = std::make_shared<shader>(
		XOR(
			"sampler s0;const float2 resolution:register(c0);const float time:register(c1);const float alpha:register(c2);float4 main(float2 "
			"uv:TEXCOORD0):COLOR0{float radius=2.0;float2 invSize=1.0/resolution.xy;float weight=0.0;float4 color=0.0;for(float "
			"x=-radius;x<=radius;x+=1.0){for(float y=-radius;y<=radius;y+=1.0){float2 coord=uv+float2(x,y)*invSize;color+=tex2D(s0,coord)*exp(-((x*x+y*y)/"
			"(2.0*radius*radius)));weight+=exp(-((x*x+y*y)/(2.0*radius*radius)));}}color.a*=alpha;return color/weight;}"), shader_frag);

	accent_prev = colors.accent;
}

bool context::refresh(uint32_t msg, uint32_t w, uint32_t l)
{
	// take input
	const auto r = input.on_input(msg, w, l);

	// update whichever have hotkey
	const auto is_active_hotkey = active && active->type == ctrl_hotkey;
	if (input.did_process_key() && ctx->should_process_hotkeys && !is_active_hotkey)
	{
		process_hotkeys();
		process_chords();
	}

	// no point to process everything if nothing we want was captured
	if (!input.did_process_key() && !input.did_cursor_move() && !input.did_wheel_move())
	{
		input.on_input_end();
		return r;
	}

	if (!container_mutex.try_lock())
		return r;

	if (!active_popups.empty())
	{
		auto &last = active_popups.back();
		if (!last->area_abs().contains(input.cursor()) && input.is_mouse_clicked(m_left))
		{
			last->close();
			input.on_input_end();
			container_mutex.unlock();
			return r;
		}
	}

	// process controls
	for_each_control_ordered(
		[&](std::shared_ptr<control> &c)
		{
			if ((c->is_taking_input || c->is_container) && c->is_visible)
			{
				c->refresh();

				// process only topmost window
				if (c->is_window && c->is_mouse_on_me)
				{
					// reset tooltips
					for (const auto &[id, cw] : tooltip_list)
					{
						const auto cr = cw.lock();
						if (!cr)
							continue;

						if (const auto wnd = cr->find_associated_window(); wnd && wnd->id != c->id)
						{
							cr->refresh();
							tooltip_list[id] = {};
						}
					}

					return true;
				}
			}

			return false;
		});

	// call refresh if active element went invisible
	if (active && !active->is_visible)
		active->refresh();

	input.on_input_end();
	container_mutex.unlock();
	return r;
}

void context::render()
{
	// debug rendering
	debug.render();

	// notifications
	notify.process_removal_queue();
	notify.render();
	notify.erase_dead();

	// adjust accent values
	if (accents_mutex.try_lock())
	{
		if (colors.accent != accent_prev)
		{
			for (auto &i : accents)
			{
				const auto c = i.lock();
				if (c && c->end == accent_prev)
					c->direct(colors.accent);
			}

			for (auto &i : accents_float)
			{
				const auto c = i.lock();
				if (c && c->end.c == accent_prev)
					c->direct(u_fc(4.f, colors.accent));
			}

			accent_prev = colors.accent;
		}

		// purge expired accents
		for (auto i = accents.begin(); i != accents.end();)
			i->expired() ? (i = accents.erase(i)) : ++i;
		for (auto i = accents_float.begin(); i != accents_float.end();)
			i->expired() ? (i = accents_float.erase(i)) : ++i;

		accents_mutex.unlock();
	}

	const std::lock_guard lock(container_mutex);

	// queue processor
	process_add_schedule();

	for (auto &c : controls)
	{
		if (c->is_container)
			c->as<control_container>()->process_queues();
	}

	process_remove_schedule();

	// first render call
	for (auto &c : controls)
	{
		// process containers first
		if (c->is_container)
			c->as<control_container>()->raise_first_render_call();

		// then control
		c->do_first_render_call();
	}

	// render controls
	for_each_control_ordered_reverse(
		[](std::shared_ptr<control> &c)
		{
			if (c->is_visible)
				c->render();

			return false;
		});

	// render cursor, if one is available
	if (res.general.cursor && should_render_cursor)
	{
		const auto &d = draw.layers[l_last];
		d->g.texture = res.general.cursor->obj;
		d->add_rect_filled(rect(input.cursor()).size(vec2{32.f, 32.f}).translate({-12.f, -11.f}), colors.accent);
		d->g.texture = {};
	}
}

void context::reset()
{
	// reset all controls
	for_each_control(
		[](std::shared_ptr<control> &c)
		{
			c->reset();
		});
}

void context::preserve_hotkey_state()
{
	for (auto &[_, cu] : hotkey_list)
	{
		const auto c = cu.lock();
		if (!c)
			continue;

		c->preserve_hotkey_state();
	}
}

void context::restore_hotkey_state()
{
	for (auto &[_, cu] : hotkey_list)
	{
		const auto c = cu.lock();
		if (!c)
			continue;

		c->restore_hotkey_state();
	}
}

void context::track_accent_anim(const std::weak_ptr<ren::anim_color> &a)
{
	std::lock_guard abc(accents_mutex);
	accents.emplace_back(a);
}

void context::track_accent_anim(const std::weak_ptr<anim_float_color> &a)
{
	std::lock_guard abc(accents_mutex);
	accents_float.emplace_back(a);
}

void context::remove(const std::shared_ptr<control> &c)
{
	if (c->is_container)
		c->as<control_container>()->remove_all();

	container::remove(c);
}

void context::remove(uint64_t id)
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

void context::process_hotkeys()
{
	std::vector<uint64_t> removal_queue{};
	removal_queue.reserve(hotkey_list.size());

	// refresh hotkeys
	for (const auto &[id, weak_c] : hotkey_list)
	{
		if (const auto c = weak_c.lock(); c)
			c->refresh_hotkeys();
		else
			removal_queue.emplace_back(id);
	}

	// process removal queue if some controls are gone
	if (!removal_queue.empty())
	{
		for (const auto &i : removal_queue)
			hotkey_list.erase(i);
	}
}

void context::add_chord(const chord &ch)
{
	if (ch.keys.empty())
		return;

	// test if a chord already exists.
	if (const auto i = std::ranges::find_if(
		chords, [&](const chord_info &c)
		{
			return c.ch.mods == ch.mods && std::ranges::count_if(
				c.ch.keys, [&](char k)
				{
					return std::ranges::find(ch.keys, k) != ch.keys.end();
				});
		}); i != chords.end())
		throw; // nope

	// put a new record.
	chords.emplace_back(chord_info{ch, std::vector<char>{}});
}

void context::process_chords()
{
	for (auto &[ch, lg] : chords)
	{
		if (std::ranges::count_if(ch.mods, [&](char k) { return input.is_key_down(k); }) < ch.mods.size())
		{
			// depress others.
			lg.clear();
			continue;
		}

		if (ch.keys.size() == 1)
		{
			if (input.is_key_clicked(ch.keys[0]))
				ch.on_exec();

			continue;
		}

		// this originates from a meme in ev0 loader.
		// press required ones.
		for (const auto &k : ch.keys)
		{
			if (std::ranges::find(lg, k) == lg.end())
			{
				if (input.is_key_clicked(k))
					lg.emplace_back(k);
			}
		}

		// check if all processed and depress if so.
		if (lg.size() == ch.keys.size())
		{
			ch.on_exec();
			lg.clear();
		}
	}
}

void context_debug::render()
{
	if (!enabled)
		return;

	const auto &fnt = draw.fonts[GUI_HASH("gui_debug")];
	const auto &fps_raw = draw.frame_time;
	const auto fps = fps_raw == 0.f ? 999.f : (1.f / fps_raw);

	const auto cur = input.cursor();

	char buffer[128]{};
	sprintf_s(buffer, 128, XOR("%i / gui [%.0f : %.0f]"), (int)fps, cur.x, cur.y);

	const auto r = rect({}, fnt->get_text_size(buffer) + 4.f);

	const auto &d = draw.layers[l_last];
	d->add_rect(r.translate({1.f, 1.f}), color::black());
	d->add_rect_filled(r, fill);
	d->font = fnt;
	d->add_text(r.tl() + 2.f, buffer, color::white());
}

void context_debug::render(const std::shared_ptr<control> &c)
{
	if (!enabled)
		return;

	const auto is_active = ctx->active && (ctx->active->id == c->id);
	const auto col = is_active ? fill_active : fill;

	const auto &d = draw.layers[l_last];
	if (c->is_mouse_on_me)
	{
		const auto &fnt = draw.fonts[GUI_HASH("gui_debug")];

		const auto buffer = tfm::format(
			XOR("%.0f:%.0f <%.0f:%.0f> : <%.0f:%.0f> / %s / %i"), c->pos_abs().x, c->pos_abs().y, c->pos.x, c->pos.y, c->size.x, c->size.y,
			c->id_string.empty() ? XOR("<INT ID>") : c->id_string, c->sort);

		const auto size = fnt->get_text_size(buffer);
		const auto area = rect(c->pos_abs() - vec2{0.f, size.y + 4.f}).size(size + 4.f);

		d->add_rect(c->area_abs().translate({1.f, 1.f}), color::black());
		d->add_rect(area.translate({1.f, 1.f}), color::black());
		d->add_rect_filled(area, col);
		d->font = fnt;
		d->add_text(area.tl() + 2.f, buffer, color::white());
	}

	d->add_rect(c->area_abs(), col.mod_a((is_active || c->is_mouse_on_me) ? 255 : 25));
}
