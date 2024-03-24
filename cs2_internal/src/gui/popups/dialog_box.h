#ifndef DIALOG_BOX_6DCA8780BB5448B18D1939D02E2C19BC_H
#define DIALOG_BOX_6DCA8780BB5448B18D1939D02E2C19BC_H

#include <gui/controls/popup.h>
#include <gui/controls/button.h>

namespace evo::gui
{
	enum dialog_result
	{
		dr_affirmative,
		// ok/yes
		dr_negative,
		// cancel/no
	};

	enum dialog_buttons
	{
		db_ok_cancel,
		db_yes_no,
		db_yes_no_cancel
	};

	class dialog_box : public popup
	{
	public:
		dialog_box(control_id id, const std::string &title, const std::string &msg, dialog_buttons btns, bool act = false) :
			popup(id, {}, {}, act), title(title), message(msg), buttons(btns)
		{
			allow_move = true;
		}

		void on_first_render_call() override;
		void render() override;

		std::function<void(dialog_result)> callback{};

		std::string title{};
		std::string message{};

	private:
		dialog_buttons buttons{};

		std::string get_button_name(int pos);
	};
}

#endif //DIALOG_BOX_6DCA8780BB5448B18D1939D02E2C19BC_H
