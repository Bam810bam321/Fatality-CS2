#ifndef COMBO_BOX_AGENT_H
#define COMBO_BOX_AGENT_H

#include <gui/controls/combo_box.h>

namespace evo::gui
{
	class combo_box_agent : public combo_box
	{
	public:
		combo_box_agent(const control_id &id, value_param<bits> &v, const ren::vec2 &cs = {160.f, 100.f}, const ren::vec2 &p = {}, const ren::vec2 &s = {100.f, 20.f}) :
			combo_box(id, v, p, s), custom_size(cs) { }

		void on_mouse_down(char key) override;

	private:
		ren::vec2 custom_size;
	};
}

#endif //COMBO_BOX_AGENT_H
