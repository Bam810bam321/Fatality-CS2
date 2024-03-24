#ifndef GUI_TESTER_LAYOUT_H
#define GUI_TESTER_LAYOUT_H

#include <ren/renderer.h>
#include <gui/controls/control_container.h>
#include <algorithm>

namespace evo::gui
{
	enum stack_direction : char
	{
		s_none,
		s_vertical,
		s_horizontal,
		s_inline,
		s_grid,
		s_justify,
		s_inline_inv,
	};

	class layout : public control_container
	{
	public:
		layout(control_id id, const ren::vec2 &p, const ren::vec2 &s, char d = s_none) :
			control_container(id, p, s), direction(d)
		{
			margin = ren::rect();
			create();
			type = ctrl_layout;
		}

		void render() override;
		void refresh() override;

		void reset() override
		{
			control_container::reset();
			reset_stack();
			reset_scroll();
		}

		virtual void soft_reset()
		{
			control_container::reset();
			const auto prev_scroll = scroll;
			reset_stack();
			set_scroll(prev_scroll);
		}

		void on_mouse_wheel(float factor) override;
		void on_mouse_down(char key) override;
		void on_mouse_up(char key) override;
		void on_mouse_move(const ren::vec2 &p, const ren::vec2 &d) override;

		void on_control_added(const std::shared_ptr<control> &c) override { reset_stack(); }

		void on_control_removed() override { reset_stack(); }

		void on_control_draw_param_changed(std::shared_ptr<control> c, char w) override { reset_stack(); }

		void on_first_render_call() override { reset_stack(); }

		void reset_scroll()
		{
			scroll = 0.f;
			an->direct(0.f, 0.f);
		}

		float get_scroll() const { return scroll; }

		void set_scroll(float v)
		{
			update_outage();
			an->direct(std::clamp(v, -fabs(outage), 0.f));
		}

		std::shared_ptr<layout> make_not_clip()
		{
			should_clip = false;
			return shared_from_this()->as<layout>();
		}

		std::shared_ptr<layout> make_centerized()
		{
			should_centerize = true;
			return shared_from_this()->as<layout>();
		}

		char direction{s_none}; // stack option
		bool should_clip{true}; // should enable rect clipping
		bool should_centerize{}; // should centerize content
		bool should_fit_height{}; // should auto-fit height
		bool disable_scroll{};
		bool stack_invisible{};
		ren::vec2 stack_offset{0.f, 2.f}; // offset for stacking

		std::weak_ptr<control> nav_tab;

	protected:
		virtual void reset_stack();

	private:
		void create();
		void update_outage();

		ren::rect grip{};
		float scroll{};
		float outage{};
		float outage_factor{};
		std::shared_ptr<ren::anim_float> an;
	};
}

#endif //GUI_TESTER_LAYOUT_H
