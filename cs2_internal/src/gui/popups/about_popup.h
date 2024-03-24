#pragma once

#include <gui/controls/popup.h>

namespace gui::popups
{
	class about_popup : public evo::gui::popup
	{
	public:
		explicit about_popup(evo::gui::control_id id) :
			evo::gui::popup(id, {}, {})
		{
			allow_move = true;

			glitch = std::make_shared<evo::ren::anim_float>(0.f, 0.64f);
			glitch->direct(6.28f);
			glitch->on_finished = [&](const std::shared_ptr<evo::ren::anim<float>> &f)
			{
				f->direct(0.f, 6.28f);
			};
		}

		void on_first_render_call() override;
		void render() override;
		void on_mouse_down(char key) override;

	private:
		std::shared_ptr<evo::ren::anim_float> glitch;
		int clicks_count{};
	};
}
