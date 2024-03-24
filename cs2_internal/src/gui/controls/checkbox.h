#ifndef GUI_TESTER_CHECKBOX_H
#define GUI_TESTER_CHECKBOX_H

#include <functional>
#include <ren/renderer.h>

#include <gui/gui.h>
#include <gui/input.h>
#include <gui/control.h>

#include <gui/values.h>

namespace evo::gui
{
	class checkbox : public control
	{
	public:
		checkbox(control_id id, value_param<bool> &v, const ren::vec2 &p = {}) :
			control(id, p, {12.f, 12.f}), value(v)
		{
			using namespace ren;

			margin = {2.f, 6.f, 2.f, 6.f};
			hotkey_type = hkt_checkbox;
			an = std::make_shared<anim_color>(colors.outline_light.mod_a(0), 0.1f);
			ctx->track_accent_anim(an);

			type = ctrl_checkbox;
		}

		void reset() override;
		void reset_internal();
		void update_hotkey_table() override;
		void update_hotkey_value(hotkey_update upd, hotkey_info v) override;
		void set_value(bool v);

		void preserve_hotkey_state() override;
		void restore_hotkey_state() override;

		void on_mouse_enter() override;
		void on_mouse_leave() override;
		void on_mouse_down(char key) override;
		void on_mouse_up(char key) override;

		void render() override;

		bool is_radio{};
		value_param<bool> &value;
		std::function<void(bool)> callback{};

	private:
		std::shared_ptr<ren::anim_color> an;
		bool old_value{};
	};
}

#endif //GUI_TESTER_CHECKBOX_H
