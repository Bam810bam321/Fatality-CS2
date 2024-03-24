#ifndef GUI_TESTER_WINDOW_H
#define GUI_TESTER_WINDOW_H

#include <gui/controls/control_container.h>
#include <gui/input.h>
#include <gui/gui.h>

namespace evo::gui
{
	class window : public control_container
	{
	public:
		window(control_id id, const ren::vec2 &p, const ren::vec2 &s) :
			control_container(id, p, s)
		{
			using namespace ren;

			is_window = true;
			priority = ip_window;
			sort = ++ctx->top_sort;
			type = ctrl_window;

			glitch = std::make_shared<anim_float>(0.f, 0.64f);
			glitch->direct(6.28f);
			glitch->on_finished = [&](const std::shared_ptr<anim<float>> &f)
			{
				f->direct(0.f, 6.28f);
			};
		}

		void add(const std::shared_ptr<control> &c) override;

		void render() override;

		void on_mouse_down(char key) override;
		void on_mouse_up(char key) override;
		void on_mouse_move(const ren::vec2 &p, const ren::vec2 &d) override;

		bool allow_move{true};

	private:
		std::shared_ptr<ren::anim_float> glitch;
	};
}

#endif //GUI_TESTER_WINDOW_H
