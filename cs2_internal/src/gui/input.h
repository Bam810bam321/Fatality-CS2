#ifndef GUI_TESTER_INPUT_H
#define GUI_TESTER_INPUT_H

#include <array>
#include <optional>
#include <vector>
#include <string>

#include <ren/types/pos.h>
#include <ren/renderer.h>

namespace evo::gui
{
	enum mouse_button : char
	{
		m_left,
		m_right,
		m_middle,
		m_back,
		m_forward,
		m_max
	};

	class key_state
	{
	public:
		enum
		{
			up,
			down
		};

		enum
		{
			none,
			clicked,
			released
		};

		char hold_state{};
		char click_state{};
	};

	struct chord
	{
		std::vector<char> mods;
		std::vector<char> keys;
		std::function<void()> on_exec;
	};

	struct chord_info
	{
		chord ch;
		std::vector<char> log;
	};

	class context_input
	{
	public:
		bool on_input(uint32_t msg, uint32_t w, uint32_t l);
		void on_input_end();
		void debounce();

		std::optional<mouse_button> vk_to_mouse_button(int vk);

		ren::vec2 cursor()
		{
			return cur_current / ren::draw.scale;
		}

		ren::vec2 cursor_prev()
		{
			return cur_prev / ren::draw.scale;
		}

		ren::vec2 cursor_delta()
		{
			return (cur_current - cur_prev) / ren::draw.scale;
		}

		bool did_cursor_move()
		{
			return cur_moved;
		}

		bool did_wheel_move()
		{
			return did_process_wheel;
		}

		float wheel_delta()
		{
			return wheel;
		}

		bool is_mouse_up(char m)
		{
			return mouse_states[m].hold_state == key_state::up;
		}

		bool is_mouse_down(char m)
		{
			return mouse_states[m].hold_state == key_state::down;
		}

		bool is_mouse_clicked(char m)
		{
			return mouse_states[m].click_state == key_state::clicked;
		}

		bool is_mouse_released(char m)
		{
			return mouse_states[m].click_state == key_state::released;
		}

		std::optional<std::vector<uint32_t>> text()
		{
			if (chars.empty())
				return std::nullopt;

			return chars;
		}

		bool did_process_key()
		{
			return did_process_keyboard || did_process_mouse || did_process_text_input;
		}

		bool is_key_up(uint8_t m)
		{
			return key_states[m].hold_state == key_state::up;
		}

		bool is_key_down(uint8_t m)
		{
			return key_states[m].hold_state == key_state::down;
		}

		bool is_key_clicked(uint8_t m)
		{
			return key_states[m].click_state == key_state::clicked;
		}

		bool is_key_released(uint8_t m)
		{
			return key_states[m].click_state == key_state::released;
		}

	private:
		std::array<key_state, m_max> mouse_states{};
		std::array<key_state, 256> key_states{};

		float wheel{};

		ren::vec2 cur_prev{};
		ren::vec2 cur_current{};
		bool cur_moved{};

		bool did_process_keyboard{};
		bool did_process_mouse{};
		bool did_process_wheel{};
		bool did_process_text_input{};

		std::vector<uint32_t> chars{};
	};
}

#endif //GUI_TESTER_INPUT_H
