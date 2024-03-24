#pragma once

#include <gui/gui.h>

namespace evo::gui
{
	class action_item : public control
	{
	public:
		action_item(control_id _id, uint32_t val, const std::string &str) :
			control(_id, {}, {0.f, 20.f}), v(val), s(str)
		{
			an = std::make_shared<ren::anim_color>(colors.text_mid, .15f);

			margin.maxs.y = 2.f;
			size_to_parent_w = true;
		}

		void render() override;

		void on_mouse_enter() override;
		void on_mouse_leave() override;
		void on_mouse_down(char key) override;
		void on_mouse_up(char key) override;

		void select();
		void unselect();

		bool is_selected{};
		std::shared_ptr<ren::anim_color> an;

	private:
		uint32_t v;
		std::string s;

		void update_parent_value();
	};
}
