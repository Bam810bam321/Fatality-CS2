#ifndef BUTTON_39B327AF50964C379A9ACB08A427D1EF_H
#define BUTTON_39B327AF50964C379A9ACB08A427D1EF_H

#include <gui/gui.h>
#include <gui/control.h>

namespace evo::gui
{
	class button : public control
	{
	public:
		button(control_id id, const std::string &t, const std::shared_ptr<ren::texture> &x = {}, const ren::vec2 &p = {}, const ren::vec2 &s = {100.f, 24.f}) :
			control(id, p, s), tex(x), text(t)
		{
			using namespace ren;
			an = std::make_shared<anim_color>(x ? colors.text_dark : colors.text, 0.15f);
			margin = {2.f, 2.f, 2.f, 2.f};

			if (x)
				size.x += size.y + 4.f;

			type = ctrl_button;
		}

		void on_first_render_call() override;
		void on_mouse_enter() override;
		void on_mouse_leave() override;
		void on_mouse_down(char key) override;
		void on_mouse_up(char key) override;

		void render() override;

		std::shared_ptr<ren::texture> tex{};
		std::string text{};
		bool render_bg{}, center_text{true};
		ren::color color{};
		ren::vec2 icon_size{};
		std::function<void()> callback{};

	private:
		std::shared_ptr<ren::anim_color> an;
	};
}

#endif //BUTTON_39B327AF50964C379A9ACB08A427D1EF_H
