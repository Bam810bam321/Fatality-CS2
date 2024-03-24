#include <gui/controls/text_input.h>
#include <gui/gui.h>

GUI_NAMESPACE;

void text_input::render()
{
	control::render();
	if (!is_visible)
		return;

	const auto r = area_abs();
	an->animate();

	auto &d = draw.layers[ctx->content_layer];
	d->add_rect_filled_rounded(r, colors.bg_bottom, 2.f);

	const auto base_offset = vec2{5.f - scroll_offset, size.y * 0.5f - 5.f};

	const auto old_clip = d->g.clip_rect;
	d->override_clip_rect(r.shrink(5.f));

	if (is_locked_by_me() && has_selection)
	{
		d->add_rect_filled(rect(r.tl() + vec2{base_offset.x + vs_start, 4.f}, r.tl() + vec2{base_offset.x + vs_end, r.height() - 4.f}), colors.accent.mod_a(.5f));
	}

	d->font = cur_font;
	if (value.empty() && !placeholder.empty())
		d->add_text(r.tl() + base_offset, placeholder, colors.text_dark);

	d->add_text(r.tl() + base_offset, value, colors.text);
	d->g.clip_rect = old_clip;

	if (is_locked_by_me())
	{
		const auto caret_offset = (r.tl() + vec2{base_offset.x, 4.f}) * draw.scale + vec2{cursor_offset + 2.f, 0.f};
		const auto caret_size = vec2{0.f, r.height() - 8.f} * draw.scale;

		d->skip_dpi = true;
		d->add_line(caret_offset, caret_offset + caret_size, colors.accent.mod_a(an->value));
		d->skip_dpi = false;
	}
}

void text_input::create()
{
	an = std::make_shared<anim_float>(0.f, 0.5f, ease_in_out);
	an->on_finished = [this](const std::shared_ptr<anim<float>> &a)
	{
		if (is_locked_by_me())
		{
			a->direct(1.f - a->end);
		}
	};
}

void text_input::on_mouse_down(char key)
{
	if (key == m_left)
	{
		if (is_mouse_on_me)
		{
			if (!is_locked_by_me())
			{
				lock_input();
				an->direct(1.f);
			}
			else
				position_cursor_by_mouse();
		}
		else
		{
			reset_selection(true);
			unlock_input();
			an->direct(0.f);
		}
	}
}

void text_input::on_mouse_move(const ren::vec2 &p, const ren::vec2 &d)
{
	if (!is_mouse_on_me || !is_locked_by_me())
		return;

	// TODO: this would take a while. do as one of the last things
}

void text_input::move_caret_to_end()
{
	cursor_pos = (int)raw_value.size();
	cursor_offset = calc_text_width(value);
}

void text_input::on_text_input(const std::vector<uint32_t> &text)
{
	// we don't want to do to anything if input was backspace or not locked by us
	if (!is_locked_by_me() || text[0] == '\b' || input.is_key_down(VK_CONTROL) || input.is_key_down(VK_MENU))
		return;

	// account for max length
	if ((raw_value.size() + 1) > max_length.value_or(INT_MAX))
		return;

	erase_selection();
	const auto old_value = raw_value;
	auto ri = cursor_pos;

	std::string new_data{};
	for (const auto &v : text)
	{
		if (v < 0x20 || !test_char_regex((wchar_t)v))
			continue;

		// insert to the correct pos
		raw_value.insert(raw_value.begin() + ri++, v);
		new_data += utf8_encode(v);
	}

	if (new_data.empty())
		return;

	if (!test_regex(make_str_value()))
	{
		raw_value = old_value;
		return;
	}

	auto new_data_width = calc_text_width(new_data);
	if (!old_value.empty() && cursor_pos != 0)
		new_data_width += calc_char_advance(raw_value[cursor_pos], raw_value[cursor_pos - 1], true);

	// adjust cursor offset
	cursor_offset += new_data_width;
	cursor_pos += (int)text.size();

	update();

	// perform scrolling if text is out of bounds
	if (does_text_exceed_width())
		scroll_offset += new_data_width;
}

void text_input::on_key_down(uint16_t key)
{
	if (!is_locked_by_me())
		return;

	// handle cut/copy/paste/select all
	if (input.is_key_down(VK_CONTROL) && (key == 'C' || key == 'V' || key == 'X' || key == 'A'))
	{
		if ((key == 'C' || key == 'X') && has_selection)
		{
			// get a part of the thing we want
			std::string tmp_val{};
			for (int i{selection_start}; i < selection_end; ++i)
				tmp_val += utf8_encode(raw_value[i]);

			clipboard::set(tmp_val);

			if (key == 'X')
			{
				erase_selection();
				update();
			}
		}
		else
		{
			if (key == 'A')
			{
				has_selection = true;
				selection_start = 0;
				selection_end = raw_value.size();
				update_visual_selection();
				return;
			}

			const auto v = clipboard::get();
			if (v.empty() || !test_regex(v))
				return;

			erase_selection();
			auto ri = cursor_pos;

			const auto old_empty = raw_value.empty();
			for (int i{}; i < v.size();)
			{
				uint32_t cp;
				i += utf8_decode(v.data() + i, cp);
				raw_value.insert(raw_value.begin() + ri++, cp);
			}

			auto new_data_width = calc_text_width(v);
			if (!old_empty && cursor_pos != 0)
				new_data_width += calc_char_advance(raw_value[cursor_pos], raw_value[cursor_pos - 1], true);

			cursor_offset += new_data_width;
			cursor_pos += (int)v.size();

			update();

			if (does_text_exceed_width())
				scroll_offset += new_data_width;
		}

		return;
	}

	// escape / return
	if (key == VK_ESCAPE || key == VK_RETURN)
	{
		unlock_input();
		an->direct(0.f);
		return;
	}

	// backspace
	if (key == VK_BACK && !raw_value.empty() && cursor_pos)
	{
		// adjust cursor offset by width of last char and decrement cursor position
		auto last_char_width = calc_char_width_at_cursor(1, 2);

		if (!has_selection)
		{
			raw_value.erase(raw_value.begin() + cursor_pos - 1);

			cursor_offset -= last_char_width;
			cursor_pos--;
		}
		else
		{
			last_char_width = vs_end - vs_start;
			erase_selection();
		}

		update();

		// also handle scroll
		if (scroll_offset > 0.f)
			scroll_offset -= last_char_width;

		return;
	}

	// delete
	if (key == VK_DELETE && cursor_pos != raw_value.size() && !raw_value.empty())
	{
		auto last_char_width = calc_char_width_at_cursor(0, -1);

		if (!has_selection)
			raw_value.erase(raw_value.begin() + cursor_pos);
		else
		{
			last_char_width = vs_end - vs_start;
			erase_selection();
		}

		update();

		if (scroll_offset > 0.f)
			scroll_offset -= last_char_width;

		return;
	}

	// move
	if (key == VK_LEFT || key == VK_RIGHT)
	{
		const auto adjust = key == VK_LEFT ? -1 : 1;
		if (input.is_key_down(VK_SHIFT))
		{
			reset_selection();

			const auto cur_s = selection_start == cursor_pos;
			const auto cur_e = selection_end == cursor_pos;

			if (adjust < 0)
			{
				if (cur_s || !has_selection)
					selection_start += adjust;
				else
					selection_end += adjust;
			}

			if (adjust > 0)
			{
				if (cur_e || !has_selection)
					selection_end += adjust;
				else
					selection_start += adjust;
			}

			// clamp selection
			if (selection_start < 0)
				selection_start = 0;
			if (selection_end > raw_value.size())
				selection_end = raw_value.size();

			if (selection_end != selection_start)
				has_selection = true;

			reset_selection();
			update_visual_selection();
		}
		else
			reset_selection(true);

		const auto new_pos = cursor_pos + adjust;

		// check if we can move
		if (new_pos < 0 || new_pos > raw_value.size())
			return;

		// make temp text that is limited to new cursor pos
		std::string temp_value{};
		for (auto i = 0; i < new_pos; i++)
			temp_value += utf8_encode(raw_value[i]);

		const auto old_pos = cursor_pos;

		// update offset and position
		cursor_pos = new_pos;

		if (cursor_pos == 0)
		{
			cursor_offset = 0.f;
			scroll_offset = 0.f;

			return;
		}

		cursor_offset = calc_text_width(temp_value);

		if (cursor_pos == raw_value.size() && does_text_exceed_width())
		{
			scroll_offset = total_width - (size.x - 10.f) + 4.f;
			return;
		}

		// update scrolling, if necessary
		if (does_text_exceed_width() && is_cursor_out_of_bounds())
		{
			const auto new_char = raw_value[new_pos];
			const auto old_char = raw_value[old_pos];

			scroll_offset += calc_char_width(new_char, old_char, adjust == -1) * (float)adjust;
		}

		return;
	}
}

void text_input::calc_total_width() { total_width = calc_text_width(value); }

void text_input::make_value()
{
	value = make_str_value();
	if (callback)
		callback(value);
}

std::string text_input::make_str_value()
{
	std::string ret;
	for (const auto &v : raw_value)
		ret += utf8_encode(v);
	return ret;
}


void text_input::update()
{
	make_value();
	calc_total_width();
}

float text_input::calc_text_width(const std::string &v) { return cur_font->get_text_size(v, true).x; }

bool text_input::does_text_exceed_width() { return total_width > size.x - 10.f; }

bool text_input::is_cursor_out_of_bounds()
{
	const auto max_width = size.x - 10.f;
	const auto virtual_pos = cursor_offset - scroll_offset;

	if (virtual_pos < 0.f || virtual_pos > max_width)
		return true;

	return false;
}

void text_input::position_cursor_by_mouse()
{
	if (is_mouse_in_bounds(0.f))
	{
		cursor_offset = 0.f;
		cursor_pos = 0;

		return;
	}

	std::string temp_value{};
	int i = 0;
	for (const auto &v : raw_value)
	{
		temp_value += utf8_encode(v);

		const auto text_w = calc_text_width(temp_value);
		if (is_mouse_in_bounds(text_w))
		{
			const auto old_offset = cursor_offset;
			const auto old_pos = cursor_pos;

			cursor_offset = text_w;
			cursor_pos = i + 1;

			if (is_cursor_out_of_bounds())
			{
				cursor_offset = old_offset;
				cursor_pos = old_pos;
			}

			return;
		}

		i++;
	}

	cursor_offset = total_width;
	cursor_pos = (int)raw_value.size();
}

bool text_input::is_mouse_in_bounds(float w)
{
	const auto mouse_pos = ((input.cursor() - pos_abs()).x + scroll_offset) - w;
	return mouse_pos <= 8.f && mouse_pos >= -8.f;
}

float text_input::calc_char_width(uint32_t a, uint32_t b, bool invert)
{
	return calc_char_width(a) + calc_char_advance(a, b, invert);
}

float text_input::calc_char_advance(uint32_t a, uint32_t b, bool invert)
{
	if (a == ' ' || b == ' ' || a == '\t' || b == '\t')
		return 0.f;

	return cur_font->get_kerning(invert ? b : a, invert ? a : b);
}

float text_input::calc_char_width(uint32_t c)
{
	if (c == ' ' || c == '\t')
		return cur_font->height * 0.25f * (c == ' ' ? 1.f : 4.f);

	const auto &g = cur_font->get_glyph(c);
	return g.offset.x + g.size.x;
}

float text_input::calc_char_width_at_cursor(int offset, int next)
{
	auto last_char_width = calc_char_width(raw_value[cursor_pos - offset]);
	if (raw_value.size() > 1 && cursor_pos > raw_value.size() - next)
		last_char_width += calc_char_advance(raw_value[cursor_pos - offset], raw_value[cursor_pos - next], false);

	return last_char_width;
}

bool text_input::test_regex(const std::string &new_data)
{
	// test regex if we have one
	return !regex.has_value() || std::regex_search(new_data, *regex);
}

bool text_input::test_char_regex(wchar_t ch)
{
	return !char_regex.has_value() || std::regex_search(std::wstring{ch}, *char_regex);
}


void text_input::set_value(const std::string &val)
{
	cursor_offset = scroll_offset = 0.f;
	cursor_pos = 0;

	raw_value.clear();
	for (auto c : val)
		raw_value.emplace_back(c);

	update();
}

void text_input::reset_selection(bool force)
{
	// ignore this.
	if (selection_end != selection_start && !force)
		return;

	selection_end = selection_start = cursor_pos;
	vs_start = vs_end = 0.f;
	has_selection = false;
}

void text_input::update_visual_selection()
{
	std::string temp_value{};
	for (auto i = 0; i < selection_end; i++)
	{
		if (i == selection_start)
			vs_start = calc_text_width(temp_value);
		if (i < raw_value.size())
			temp_value += utf8_encode(raw_value[i]);
	}

	vs_end = calc_text_width(temp_value);
}

void text_input::erase_selection()
{
	if (!has_selection)
		return;

	const auto s = raw_value.begin() + selection_start;
	const auto e = raw_value.begin() + selection_end;

	std::string to_remove;
	for (auto i = s; i != e; ++i)
		to_remove += utf8_encode(*i);

	// adjust cursor
	cursor_pos = selection_start;
	cursor_offset = vs_start;

	// remove old shit.
	raw_value.erase(s, e);
	reset_selection(true);
}
