#pragma once

#include <gui/controls/popup.h>
#include <gui/controls/layout.h>
#include <gui/controls/settings.h>

namespace evo::gui
{
	class settings_popup : public popup
	{
	public:
		settings_popup(control_id id, uint64_t dep, const std::shared_ptr<settings> &ctr) :
			popup(id, ctr->area_abs().bl() + ren::vec2{4.f, 4.f}, {200.f, 400.f}, true), dep_id(dep), ctr(ctr) { }

		void on_first_render_call() override;
		void render() override;

		uint64_t dep_id{};
		std::shared_ptr<settings> ctr{};
	};
}
