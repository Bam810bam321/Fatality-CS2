#ifndef HSV_SLIDER_039C5B4FBA7B4A4BB0525D5398DD0BD4_H
#define HSV_SLIDER_039C5B4FBA7B4A4BB0525D5398DD0BD4_H

#include <gui/control.h>
#include <gui/values.h>

#include <functional>

namespace evo::gui
{
	class hsv_slider : public control
	{
		enum : char
		{
			e_none,
			e_sb,
			e_hue,
			e_alpha
		};

	public:
		hsv_slider(control_id id, value_param<ren::color> &c, bool alpha = true) :
			control(id, {}, {200.f, alpha ? 200.f : 160.f}), value(c), allow_alpha(alpha)
		{
			fake_hue = c->h();
			fake_saturation = c->s();
			fake_brightness = c->v();
			type = ctrl_hsv_slider;
		}

		void on_mouse_down(char key) override;
		void on_mouse_move(const ren::vec2 &p, const ren::vec2 &d) override;
		void on_mouse_up(char key) override;
		void reset() override;
		void render() override;

		value_param<ren::color> &value;
		bool allow_alpha{true};
		std::function<void(ren::color)> callback{};

	private:
		ren::rect get_sb_rect();
		ren::rect get_hue_rect();
		ren::rect get_alpha_rect();

		char current_edit{};

		uint16_t fake_hue{};
		float fake_saturation{};
		float fake_brightness{};
	};
}

#endif //HSV_SLIDER_039C5B4FBA7B4A4BB0525D5398DD0BD4_H
