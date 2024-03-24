#pragma once

#include <gui/controls/popup.h>
#include <gui/values.h>

namespace gui::popups
{
	class configs_popup : public evo::gui::popup
	{
	public:
		configs_popup(evo::gui::control_id id, const evo::ren::vec2 &pos) :
			popup(id, pos, {208.f, 240.f}, true) { }

		void on_first_render_call() override;
		void render() override;

	private:
		evo::gui::value_param<evo::gui::bits> sel{0};
	};
}
