#include <gui/controls/combo_box_agent.h>
#include <gui/gui.h>
#include <gui/popups/combo_box_popup.h>

GUI_NAMESPACE;

void combo_box_agent::on_mouse_down(char key)
{
	if (key == m_left)
	{
		const auto combo_popup = std::make_shared<combo_box_popup>(id + 1, shared_from_this()->as<combo_box_agent>(), custom_size);
		combo_popup->open();
	}
}
