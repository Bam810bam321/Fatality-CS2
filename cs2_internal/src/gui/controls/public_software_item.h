#pragma once

#include <gui/control.h>

namespace gui
{
	class public_software_item : public evo::gui::control
	{
	public:
		public_software_item(evo::gui::control_id id, const std::string &name, const std::string &license, const std::string &url) :
			evo::gui::control(id, {}, {0.f, 40.f}), name(name), license(license), url(url)
		{
			size_to_parent_w = true;
			init();
		}

		void on_mouse_down(char key) override;
		void on_mouse_enter() override;
		void on_mouse_leave() override;

		void render() override;

	private:
		std::shared_ptr<evo::ren::anim_color> an;
		void init();

		std::string name{};
		std::string license{};
		std::string url{};
	};
}
