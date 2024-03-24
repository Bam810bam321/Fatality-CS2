#pragma once

#include <gui/controls/popup.h>

namespace gui::popups
{
	class hotkey_overview_popup : public evo::gui::popup
	{
	public:
		explicit hotkey_overview_popup(evo::gui::control_id id) :
			popup(id, {}, {208.f, 240.f})
		{
			allow_move = true;
		}

		void on_first_render_call() override;
		void render() override;
	};
}
