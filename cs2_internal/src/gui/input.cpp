#include <gui/gui.h>
#include <gui/input.h>


GUI_NAMESPACE;

bool context_input::on_input(uint32_t msg, uint32_t w, uint32_t l)
{
	static const auto update_state = [](key_state &s, bool d) -> void
	{
		if (d)
		{
			s.hold_state = key_state::down;
			s.click_state = key_state::clicked;
		}
		else
		{
			s.hold_state = key_state::up;
			s.click_state = key_state::released;
		}
	};

	static const auto mouse_from_msg = [](uint32_t m, uint32_t w) -> char
	{
		if (m == WM_LBUTTONDOWN || m == WM_LBUTTONUP || m == WM_LBUTTONDBLCLK)
			return m_left;
		else if (m == WM_RBUTTONDOWN || m == WM_RBUTTONUP || m == WM_RBUTTONDBLCLK)
			return m_right;
		else if (m == WM_MBUTTONDOWN || m == WM_MBUTTONUP || m == WM_MBUTTONDBLCLK)
			return m_middle;
		else if (m == WM_XBUTTONDOWN || m == WM_XBUTTONUP || m == WM_XBUTTONDBLCLK)
		{
			const auto x = HIWORD(w);
			switch (x)
			{
			case XBUTTON1:
				return m_back;
			case XBUTTON2:
				return m_forward;
			}
		}

		return m_max;
	};

	POINT cur{};
	GetCursorPos(&cur);
	ScreenToClient(draw.adapter->window, &cur);

	cur_prev = cur_current;
	cur_current = vec2{static_cast<float>(cur.x), static_cast<float>(cur.y)};
	cur_moved = cur_current != cur_prev;

	switch (msg)
	{
	case WM_LBUTTONDOWN:
	case WM_RBUTTONDOWN:
	case WM_MBUTTONDOWN:
	case WM_XBUTTONDOWN:
	case WM_LBUTTONDBLCLK:
	case WM_RBUTTONDBLCLK:
	case WM_MBUTTONDBLCLK:
	case WM_XBUTTONDBLCLK:
		update_state(mouse_states[mouse_from_msg(msg, w)], true);
		did_process_mouse = true;
		return true;
	case WM_LBUTTONUP:
	case WM_RBUTTONUP:
	case WM_MBUTTONUP:
	case WM_XBUTTONUP:
		update_state(mouse_states[mouse_from_msg(msg, w)], false);
		did_process_mouse = true;
		return true;
	case WM_MOUSEWHEEL:
		wheel = (short)HIWORD(w) / 120.f;
		did_process_wheel = true;
		return true;
	case WM_CHAR:
		chars.emplace_back(w);
		did_process_text_input = true;
		return true;
	case WM_KEYDOWN:
	case WM_SYSKEYDOWN:
		update_state(key_states[w], true);
		did_process_keyboard = true;
		return true;
	case WM_KEYUP:
	case WM_SYSKEYUP:
		update_state(key_states[w], false);
		did_process_keyboard = true;
		return true;
	case WM_MOUSEMOVE:
		return true;
	case WM_KILLFOCUS:
		key_states.fill({key_state::released, key_state::released});
		mouse_states.fill({key_state::released, key_state::released});
		did_process_keyboard = did_process_mouse = true;
		return true;
	case WM_SETFOCUS:
		key_states[VK_MENU] = {key_state::released, key_state::released};
		did_process_keyboard = true;
		return true;
	}

	return false;
}

void context_input::debounce()
{
	key_states.fill({key_state::released, key_state::released});
	mouse_states.fill({key_state::released, key_state::released});
	did_process_keyboard = did_process_mouse = true;
}

std::optional<mouse_button> context_input::vk_to_mouse_button(int vk)
{
	switch (vk)
	{
	case VK_LBUTTON:
		return m_left;
	case VK_RBUTTON:
		return m_right;
	case VK_MBUTTON:
		return m_middle;
	case VK_XBUTTON2:
		return m_forward;
	case VK_XBUTTON1:
		return m_back;
	default:
		return std::nullopt;
	}
}

void context_input::on_input_end()
{
	cur_moved = false;

	for (auto &s : mouse_states)
	{
		if (s.click_state == key_state::clicked || s.click_state == key_state::released)
			s.click_state = key_state::none;
	}

	for (auto &s : key_states)
	{
		if (s.click_state == key_state::clicked || s.click_state == key_state::released)
			s.click_state = key_state::none;
	}

	did_process_keyboard = false;
	did_process_mouse = false;
	did_process_wheel = false;
	did_process_text_input = false;

	wheel = 0.f;
	chars.clear();
}
