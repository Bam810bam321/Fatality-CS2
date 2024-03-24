#pragma once

#include <gui/control.h>
#include <gui/controls/hotkey.h>

namespace evo::gui
{
	class hotkey_view : public control
	{
	public:
		hotkey_view(control_id _id, const std::string &name, hotkey_behavior beh, uint8_t k) :
			control(_id, {}, {0.f, 24.f}), name(name), beh(beh)
		{
			size_to_parent_w = true;
			key = key_to_string((uint16_t)k);
		}

		void render() override;
		void on_mouse_move(const ren::vec2 &p, const ren::vec2 &d) override;

	private:
		std::string name, key;
		hotkey_behavior beh{};
		bool is_cut{};
	};
}
