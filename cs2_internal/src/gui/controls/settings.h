#pragma once

#include <gui/gui.h>

namespace evo::gui
{
	class layout;

	/**
	 * \brief WARNING!!! DOES NOT SUPPORT CAPTURING LAMBDAS
	 */
	class settings : public control_container
	{
	public:
		using cbk_fn = std::function<void(const std::shared_ptr<control_container> &)>;

		settings(control_id id, const cbk_fn &fn) :
			control_container(id, {}, {24.f, 24.f}), fn(fn)
		{
			anim = std::make_shared<ren::anim_color>(colors.text_dark, 0.1f);
			margin = {3.f, 0.f, 0.f, 0.f};
			type = ctrl_settings;

			breadcrumb_name = XOR("Settings");
			is_breadcrumb = true;
			should_process_children = false;
		}

		void on_first_render_call() override;

		void render() override;
		void on_mouse_enter() override;
		void on_mouse_leave() override;
		void on_mouse_down(char key) override;

		bool updated_custom_margin{};
		std::shared_ptr<ren::anim_color> anim{};

	private:
		cbk_fn fn;
		bool is_my_open{};
	};
}
