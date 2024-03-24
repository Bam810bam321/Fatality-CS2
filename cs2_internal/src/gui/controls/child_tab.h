#ifndef CHILD_TAB_99D389BCE8FA48AB83690534B479BCC6_H
#define CHILD_TAB_99D389BCE8FA48AB83690534B479BCC6_H

#include <gui/controls/tab.h>

namespace evo::gui
{
	class child_tab : public tab
	{
	public:
		child_tab(control_id id, const std::string &t, uint64_t l, const std::shared_ptr<ren::texture> &i = {}) :
			tab(id, t, l, i)
		{
			using namespace ren;

			size.y = 28.f;
			margin = {0.f, 2.f, 0.f, 2.f};

			an = std::make_shared<anim_color>(colors.text_dark, 0.15f);
			of = std::make_shared<anim_float>(0.f, 0.15f, ease_out);

			type = ctrl_child_tab;

			is_breadcrumb = true;
			breadcrumb_name = t;
		}

		void on_first_render_call() override;

		void on_mouse_enter() override;
		void on_mouse_leave() override;

		void select() override;
		void unselect() override;

		void render() override;

		std::shared_ptr<child_tab> make_vertical()
		{
			is_horizontal = false;
			size_to_parent_w = true;
			return as<child_tab>();
		}

		bool is_horizontal{true};

	private:
		std::shared_ptr<ren::anim_color> an;
		std::shared_ptr<ren::anim_float> of;
	};
}

#endif //CHILD_TAB_99D389BCE8FA48AB83690534B479BCC6_H
