#ifndef HOTKEY_POPUP_76156DEAB04744B18FE7773968C8A6A8_H
#define HOTKEY_POPUP_76156DEAB04744B18FE7773968C8A6A8_H

#include <gui/controls/popup.h>
#include <gui/values.h>

namespace evo::gui
{
	struct hotkey_temp_t
	{
		uint8_t key{};
		value_param<bits> beh{1 << hkb_toggle};
		uint64_t val{};
	};

	class hotkey_popup : public popup
	{
		static constexpr auto max_height = 132.f;

	public:
		hotkey_popup(control_id id, const std::shared_ptr<control> &c) :
			popup(id, c->pos_abs(), {160.f, 48.f}, true), remote(c)
		{
			p_type = pt_hotkey_popup;
		}

		void on_first_render_call() override;
		void render() override;

	private:
		void insert_hotkey(const std::optional<hotkey_temp_t> &hk);
		void update_key_table();

		std::shared_ptr<control> remote;
		std::unordered_map<size_t, hotkey_temp_t> temp;

		// 'bit sad but w/e
		std::unordered_map<size_t, value_param<bool>> bv;
		std::unordered_map<size_t, value_param<float>> fv;
		std::unordered_map<size_t, value_param<bits>> sv;
	};
}

#endif //HOTKEY_POPUP_76156DEAB04744B18FE7773968C8A6A8_H
