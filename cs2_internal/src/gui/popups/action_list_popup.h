#pragma once

#include <gui/gui.h>
#include <gui/controls/layout.h>

namespace evo::gui
{
	class action_list_popup : public popup
	{
	public:
		using params_t = std::vector<std::unordered_map<uint32_t, std::string>>;

		action_list_popup(control_id _id, params_t pr, value_param_array<bool> &v, const ren::vec2 &pos) :
			popup(_id, pos, {160.f, 200.f}, true), params(pr), value(v) { }

		void on_first_render_call() override;
		void render() override;

		void update_value(uint32_t v, bool s);

		params_t params;
		value_param_array<bool> &value;

		std::function<void(uint32_t, bool)> callback{};

	private:
		void repopulate_list(const std::shared_ptr<layout> &lst, const std::string &filter);
	};
}
