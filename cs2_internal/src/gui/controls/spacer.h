#ifndef SPACER_268726B411CC48CEB915C1B5D5239B64_H
#define SPACER_268726B411CC48CEB915C1B5D5239B64_H

#include <gui/control.h>

namespace evo::gui
{
	class spacer : public control
	{
	public:
		spacer(control_id id, const ren::vec2 &p = {}, const ren::vec2 &s = {}, bool draw_decal = true, bool no_spacing = false) :
			control(id, p, s), draw_decal(draw_decal), no_spacing(no_spacing)
		{
			margin = {};
			type = ctrl_spacer;
		}

		void render() override;

		bool draw_decal{true};
		bool no_spacing{};
	};
}

#endif //SPACER_268726B411CC48CEB915C1B5D5239B64_H
