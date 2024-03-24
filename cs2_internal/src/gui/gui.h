#ifndef GUI_GUI_H
#define GUI_GUI_H

#include <memory>
#include <stack>

#include <ren/renderer.h>
#include <ren/adapter.h>
#include <ren/types/texture.h>
#include <ren/misc.h>
#include <ren/types/animator.h>

#include <gui/misc.h>
#include <gui/input.h>
#include <gui/notify_system.h>
#include <gui/container.h>
#include <gui/controls/control_container.h>
#include <gui/controls/popup.h>
#include <gui/values.h>

#undef min
#undef max

#define GUI_NAMESPACE using namespace evo; using namespace gui; using namespace ren
#define MAKE_COLOR(n, r, g, b) ren::color n = ren::color(r, g, b)

#include <macros.h>

namespace evo::ren
{
	void add_with_blur(std::shared_ptr<layer> &d, const rect &area,
					   const std::function<void(std::shared_ptr<layer> &)> &fn);
}

namespace evo::gui
{
	enum gui_layers : char
	{
		l_back = 32,
		l_mid,
		l_hover,
		l_popup_back,
		l_popup_mid,
		l_popup_top,
		l_top,
		l_last
	};

	enum blur_quality
	{
		blur_full,
		blur_half,
		blur_none,
		blur_max,
	};

	struct color_list
	{
		MAKE_COLOR(accent, 255, 137, 137);
		MAKE_COLOR(text, 200, 200, 200);
		MAKE_COLOR(text_light, 245, 245, 245);
		MAKE_COLOR(text_mid, 100, 100, 100);
		MAKE_COLOR(text_dark, 100, 100, 100);
		MAKE_COLOR(bg_bottom, 20, 20, 20);
		MAKE_COLOR(bg_block, 30, 30, 30);
		MAKE_COLOR(bg_block_overlay, 33, 27, 33);
		MAKE_COLOR(bg_block_light, 33, 27, 33);
		MAKE_COLOR(bg_odd, 10, 10, 10);
		MAKE_COLOR(bg_even, 15, 15, 15);
		MAKE_COLOR(outline, 76, 76, 76);
		MAKE_COLOR(outline_light, 76, 76, 76);
		MAKE_COLOR(warning, 245, 236, 66);
		MAKE_COLOR(danger, 245, 66, 66);
		MAKE_COLOR(success, 143, 255, 102);
	};

	class context : public container
	{
	public:
		context(float text_size = 12.f);

		// refreshes the input
		bool refresh(uint32_t msg, uint32_t w, uint32_t l);

		// renders controls
		void render();

		// resets control's state
		void reset();

		// tracks animation to auto-update when accent color is changed
		void track_accent_anim(const std::weak_ptr<ren::anim_color> &a);
		void track_accent_anim(const std::weak_ptr<anim_float_color> &a);

		void preserve_hotkey_state();
		void restore_hotkey_state();

		void remove(const std::shared_ptr<control> &c) override;
		void remove(uint64_t id) override;

		void do_tick_sound()
		{
			if (tick_sound_callback)
				tick_sound_callback();
		}

		void add_chord(const chord &ch);

		char content_layer{l_back}; // current layer for controls
		char scrollbar_layer{l_mid}; // current layer for scroll bars

		std::shared_ptr<control> active{}; // current active element
		std::vector<std::shared_ptr<popup>> active_popups{}; // current active popups
		int top_sort{}; // current top most sort

		std::function<void()> tick_sound_callback{};
		std::unordered_map<uint64_t, std::weak_ptr<control>> hotkey_list{}; // used to process hotkeys separately
		std::unordered_map<uint64_t, std::weak_ptr<control>> tooltip_list{};
		std::unordered_map<uint64_t, std::weak_ptr<control>> global_list{}; // for quick ass search! 

		[[nodiscard]] uint64_t get_last_hovered() const { return hover_stack.empty() ? 0ull : hover_stack.top(); }

		std::stack<uint64_t> hover_stack{};
		value_param<bool> show_ids{};
		value_param<bits> blur_quality{1 << blur_full};

		struct resources_t
		{
			struct
			{
				std::shared_ptr<ren::texture> pattern{};
				std::shared_ptr<ren::texture> logo_head{};
				std::shared_ptr<ren::texture> logo_stripes{};
				std::shared_ptr<ren::texture> pattern_group{};
				std::shared_ptr<ren::texture> loader{};
				std::shared_ptr<ren::texture> cursor{};
			} general;

			struct
			{
				std::shared_ptr<ren::texture> notify_clear{};
				std::shared_ptr<ren::texture> remove{};
				std::shared_ptr<ren::texture> add{};
				std::shared_ptr<ren::texture> up{};
				std::shared_ptr<ren::texture> down{};
				std::shared_ptr<ren::texture> copy{};
				std::shared_ptr<ren::texture> paste{};
				std::shared_ptr<ren::texture> alert{};
				std::shared_ptr<ren::texture> search{};
				std::shared_ptr<ren::texture> settings{};
				std::shared_ptr<ren::texture> bug{};

				std::unordered_map<uint8_t, std::shared_ptr<ren::texture>> keys{};
			} icons;
		} res;

		struct user_t
		{
			std::shared_ptr<ren::texture> avatar{};
			std::string username{};
			std::string active_until{};
			bool is_alpha{};
		} user;

		bool should_update_old_value{};
		bool should_render_cursor{false};
		bool should_process_hotkeys{true};

	private:
		std::mutex accents_mutex{};

		std::vector<std::weak_ptr<ren::anim_color>> accents{};
		std::vector<std::weak_ptr<anim_float_color>> accents_float{};
		ren::color accent_prev{};

		std::vector<chord_info> chords;

		void process_hotkeys();
		void process_chords();
	};

	class context_debug
	{
	public:
		// renders basic debug info
		void render();

		// renders control's info
		void render(const std::shared_ptr<control> &c);

		ren::color fill = ren::color(255, 74, 122);
		ren::color fill_active = ren::color(255, 207, 74);
		bool enabled = false;
	};

	inline context_input input{}; // input processor
	inline context_debug debug{}; // debug overlay
	inline color_list colors{}; // color list
	inline notification_system notify{}; // notifications

	inline std::unique_ptr<context> ctx{}; // main context
}

#endif //GUI_GUI_H
