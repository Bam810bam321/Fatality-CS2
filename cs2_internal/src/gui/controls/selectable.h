#ifndef SELECTABLE_C1197FF3B70541469983142C442F8E53_H
#define SELECTABLE_C1197FF3B70541469983142C442F8E53_H

#include <string>
#include <gui/control.h>
#include <gui/gui.h>
#include <gui/anim.h>
#include <gui/controls/list.h>

namespace evo::gui
{
	class selectable : public control
	{
	public:
		selectable(control_id _id, const std::string &t, char v = -1, const ren::vec2 &s = {0.f, 0.f}) :
			control(_id, {}, s), text(t), value(v)
		{
			init(t, std::nullopt, v, s);
		}

		selectable(control_id _id, const std::string &t, ren::color c, char v = -1, const ren::vec2 &s = {0.f, 0.f}) :
			control(_id, {}, s), text(t), value(v)
		{
			init(t, c, v, s);
		}

		void init(const std::string &t, std::optional<ren::color> c, char v = -1, const ren::vec2 &s = {0.f, 0.f})
		{
			using namespace ren;

			if (size.y == 0.f)
			{
				size.y = 16.f;
			}

			margin.maxs.y = 2.f;
			size_to_parent_w = true;

			if (c == std::nullopt)
				a = std::make_shared<anim_float_color>(0.f, colors.text_mid, 0.15f);
			else
			{
				a = std::make_shared<anim_float_color>(0.f, c.value(), 0.15f);
				custom_color = c;
			}

			ctx->track_accent_anim(a);
			type = ctrl_selectable;
		}

		void on_mouse_enter() override;
		void on_mouse_leave() override;
		void on_mouse_down(char key) override;
		void on_mouse_up(char key) override;

		void render() override;

		void select();
		void unselect();

		std::string text{};
		bool is_odd{};
		bool is_highlighted{};
		bool is_loaded{};
		bool is_selected{};
		int value{};
		int order{};
		std::optional<ren::color> custom_color{};

	protected:
		std::shared_ptr<anim_float_color> a;
	};
}

#endif //SELECTABLE_C1197FF3B70541469983142C442F8E53_H
