#ifndef NOTIFICATIONS_POPUP_74C21F397887454A8FA3983901CBAF05_H
#define NOTIFICATIONS_POPUP_74C21F397887454A8FA3983901CBAF05_H

#include <gui/controls/popup.h>

namespace evo::gui
{
	class notifications_popup : public popup
	{
	public:
		notifications_popup(control_id id, const ren::vec2 &pos) :
			popup(id, pos, {260.f, 200.f}, true) { }

		void on_first_render_call() override;
		void render() override;
	};
}

#endif //NOTIFICATIONS_POPUP_74C21F397887454A8FA3983901CBAF05_H
