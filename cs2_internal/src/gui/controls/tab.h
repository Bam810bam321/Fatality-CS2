#ifndef GUI_TESTER_TAB_H
#define GUI_TESTER_TAB_H

#include <ren/types/texture.h>
#include <gui/control.h>
#include <gui/controls/layout.h>
#include <gui/gui.h>

namespace evo::gui
{
	class tab : public control
	{
	protected:
		std::shared_ptr<ren::anim_color> col_anim{};
		std::shared_ptr<ren::anim_float> line_anim{};

	public:
		tab(control_id id, const std::string &t, uint64_t l, const std::shared_ptr<ren::texture> &i = {}) :
			control(id, {0.f, 0.f}, {10.f, 46.f}), text(t), icon(i), container_id(l)
		{
			using namespace ren;

			margin = {2.f, 2.f, 4.f, 2.f};

			col_anim = std::make_shared<anim_color>(colors.text_mid, 0.15f);
			line_anim = std::make_shared<anim_float>(0.f, 0.15f, ease_out);

			type = ctrl_tab;
		}

		void render() override;

		void on_mouse_down(char key) override;
		void on_mouse_up(char key) override;
		void on_mouse_enter() override;
		void on_mouse_leave() override;

		virtual void select();
		virtual void unselect();

		void on_first_render_call() override;

		std::shared_ptr<control> make_selected()
		{
			is_selected = true;
			col_anim->direct(colors.text);
			line_anim->direct(1.f);

			return shared_from_this();
		}

		bool is_selected{};
		bool is_highlighted{};

		std::string text{};
		std::shared_ptr<ren::texture> icon{};
		std::shared_ptr<control> container{};

	protected:
		virtual void decide_movement();
		bool invert_movement{};

	private:
		uint64_t container_id{};
	};
}

#endif //GUI_TESTER_TAB_H
