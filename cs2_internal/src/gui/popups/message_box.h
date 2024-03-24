#ifndef MESSAGE_BOX_1B3311CE50234E10A87A4FC86E0CEBFA_H
#define MESSAGE_BOX_1B3311CE50234E10A87A4FC86E0CEBFA_H

#include <gui/controls/popup.h>
#include <gui/controls/button.h>
#include <ren/adapter.h>

namespace evo::gui
{
	class message_box : public popup
	{
	public:
		message_box(control_id id, const std::string &title, const std::string &msg) :
			popup(id, {}, {}), title(title), message(msg)
		{
			allow_move = true;
		}

		void on_first_render_call() override;
		void render() override;

		std::string title{};
		std::string message{};
	};
}

#endif //MESSAGE_BOX_1B3311CE50234E10A87A4FC86E0CEBFA_H
