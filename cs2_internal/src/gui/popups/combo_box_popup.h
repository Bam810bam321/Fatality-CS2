#ifndef COMBO_BOX_POPUP_48512B0ABE7D47C39820E527E9FF330B_H
#define COMBO_BOX_POPUP_48512B0ABE7D47C39820E527E9FF330B_H

#include <gui/controls/popup.h>
#include <gui/controls/combo_box.h>

namespace evo::gui
{
	class combo_box_popup : public popup
	{
	public:
		combo_box_popup(control_id id, const std::shared_ptr<combo_box> &p, const std::optional<ren::vec2> &custom_size = std::nullopt) :
			popup(id, p->area_abs().bl() + ren::vec2{0.f, 4.f}, {}, true), combo(p), custom_size(custom_size) { }

		void on_first_render_call() override;
		void render() override;

	private:
		std::shared_ptr<combo_box> combo{};
		std::optional<ren::vec2> custom_size{};
	};
}

#endif //COMBO_BOX_POPUP_48512B0ABE7D47C39820E527E9FF330B_H
