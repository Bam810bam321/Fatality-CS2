#ifndef WIDGET_9C9DD58949174F4092E57523FFDBA2AA_H
#define WIDGET_9C9DD58949174F4092E57523FFDBA2AA_H

#include <gui/traits.h>
#include <gui/controls/control_container.h>
#include <gui/values.h>

#include <utility>

namespace evo::gui
{
	class widget : public control
	{
	public:
		widget(control_id id, value_param<ren::vec2> &position, std::string title) :
			control(id), position(position), title(std::move(title))
		{
			is_window = true;
			type = ctrl_widget;
			priority = ip_least;

			size = {160.f, 60.f};
		}

		void on_first_render_call() override
		{
			pos = position.get();
		}

		void render() override;
		void reset() override;

		void on_mouse_move(const ren::vec2 &p, const ren::vec2 &d) override;
		void on_mouse_down(char key) override;
		void on_mouse_up(char key) override;

		void toggle_visibility(bool vis);

		value_param<ren::vec2> &position;
		bool is_forced_visibility{};
		std::string title{};

	protected:
		bool has_content{};
		float max_alpha{1.f};

		ren::anim_float alpha_anim{0.f, 0.1f};
		ren::anim_vec2 size_anim{{160.f, 60.f}, 0.2f, ren::ease_out};
	};
}

#endif //WIDGET_9C9DD58949174F4092E57523FFDBA2AA_H
