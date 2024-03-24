#ifndef GUI_TESTER_LABEL_H
#define GUI_TESTER_LABEL_H

#include <gui/gui.h>
#include <gui/control.h>
#include <gui/controls/control_container.h>
#include <gui/misc.h>

#include <ren/renderer.h>
#include <ren/misc.h>

namespace evo::gui
{
	class label : public control
	{
	public:
		label(control_id id, const std::string &s, const ren::color &c = colors.text, bool b = false, const ren::vec2 &p = {}) :
			control(id, p, {}), text(s), col(c), bold(b)
		{
			using namespace ren;

			margin = {0.f, 0.f, 2.f, 0.f};
			type = ctrl_label;
		}

		void on_first_render_call() override;
		void on_draw_param_changed(char w) override;
		void on_mouse_down(char key) override;
		void on_mouse_up(char key) override;
		void on_mouse_enter() override;
		void on_mouse_leave() override;
		void render() override;

		void set_text(const std::string &t)
		{
			text = t;
			process_draw_param_changes(dp_text);
		}

		std::string text{};
		ren::color col{};
		bool bold{};
		bool is_new{};

	private:
		std::shared_ptr<ren::font_base> fnt{};
	};
}

#endif //GUI_TESTER_LABEL_H
