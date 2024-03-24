#ifndef LIST_A5E28B10D3264122ACDBE50BFAADD3F5_H
#define LIST_A5E28B10D3264122ACDBE50BFAADD3F5_H

#include <gui/controls/layout.h>
#include <gui/values.h>
#include <gui/gui.h>

namespace evo::gui
{
	class list : public layout
	{
	public:
		list(control_id id, value_param<bits> &v, const ren::vec2 &p, const ren::vec2 &s) :
			layout(id, p, s, s_vertical), value(v)
		{
			stack_offset = {};

			using namespace ren;

			spinner_anim = std::make_shared<anim_float>(0.f, 0.7f);
			spinner_anim->on_finished = [](std::shared_ptr<anim<float>> f)
			{
				f->direct(0.f, 360.f);
			};

			spinner_anim->direct(0.f, 360.f);

			type = ctrl_list;
		}

		void on_control_added(const std::shared_ptr<control> &c) override;

		void reset() override;
		void soft_reset() override;
		void render() override;

		void filter_items(const std::string &str);
		void update_selected(std::shared_ptr<control> c);

		value_param<bits> &value;
		bool allow_multiple{};
		bool legacy_mode{}; // set value instead of bit if allow_multiple is false
		bool show_spinner{};
		std::function<void(bits &)> callback{};

	private:
		std::shared_ptr<ren::anim_float> spinner_anim{};
	};
}

#endif //LIST_A5E28B10D3264122ACDBE50BFAADD3F5_H
