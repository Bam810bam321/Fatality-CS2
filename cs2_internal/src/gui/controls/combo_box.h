#ifndef COMBO_BOX_56F5835CBD604AAB9749A2702E6893AF_H
#define COMBO_BOX_56F5835CBD604AAB9749A2702E6893AF_H

#include <gui/controls/control_container.h>
#include <gui/values.h>

namespace evo::gui
{
	class combo_box : public control_container
	{
	public:
		combo_box(control_id id, value_param<bits> &v, const ren::vec2 &p = {}, const ren::vec2 &s = {100.f, 20.f}) :
			control_container(id, p, s), value(v)
		{
			should_process_children = false;
			margin = {2.f, 2.f, 2.f, 2.f};
			type = ctrl_combo_box;
			hotkey_type = hkt_combo;
		}

		void add(const std::shared_ptr<control> &c) override
		{
			control_container::add(c);
			if (!allow_multiple && !legacy_mode && !value.get().first_set_bit())
				value.get().set(0);
		}

		void add(const std::vector<std::shared_ptr<control>> &els)
		{
			for (const auto &e : els)
				add(e);
		}

		void preserve_hotkey_state() override;
		void restore_hotkey_state() override;

		void on_mouse_down(char key) override;

		void reset() override;
		void render() override;

		void update_hotkey_table() override;
		void update_hotkey_value(hotkey_update upd, hotkey_info v) override;

		value_param<bits> &value;
		bool allow_multiple{};
		std::function<void(bits &)> callback{};
		bool legacy_mode{};

	private:
		bits old_value{};
		bool handling_hotkey{};
	};
}

#endif //COMBO_BOX_56F5835CBD604AAB9749A2702E6893AF_H
