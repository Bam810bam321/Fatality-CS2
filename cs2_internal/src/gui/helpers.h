#ifndef GUI_TESTER_HELPERS_H
#define GUI_TESTER_HELPERS_H

#include <functional>

#include <gui/controls/layout.h>
#include <gui/controls/window.h>
#include <gui/controls/group.h>

#define LAYOUT_CBK_FN const std::function<void(std::shared_ptr<gui::layout>&)>&

namespace evo::gui::helpers
{
	// makes default window with layouts for tabs and content
	std::shared_ptr<window> make_window(const std::string &id, const ren::vec2 &p, const ren::vec2 &s, LAYOUT_CBK_FN t, LAYOUT_CBK_FN e, LAYOUT_CBK_FN b);

	// makes a layout which will be toggled by tab
	std::shared_ptr<layout> make_tab_area(uint64_t id, bool is_active, char a, LAYOUT_CBK_FN e);

	// makes a special variant of tab area
	std::shared_ptr<layout> make_child_tab_area(uint64_t id, const std::shared_ptr<layout> &p, bool is_active, LAYOUT_CBK_FN e);

	// makes a group box
	std::shared_ptr<group> make_groupbox(const std::string &id, const std::string &t, const ren::vec2 &p, const ren::vec2 &s, LAYOUT_CBK_FN e);

	// makes inlined layout with controls
	std::shared_ptr<layout> make_inlined(uint64_t id, LAYOUT_CBK_FN e);

	// makes a layout that fills the rest of space
	std::shared_ptr<layout> make_flex(uint64_t id, const std::shared_ptr<layout> &p, float r, LAYOUT_CBK_FN e);

	// makes a row with label and control
	std::shared_ptr<layout> make_control(const std::string &text, const std::shared_ptr<control> &c, const std::vector<std::string> &aliases = {}, bool is_new = false);

	// makes a row with label and control
	std::shared_ptr<layout> make_control(const std::string &id, const std::string &text, const std::shared_ptr<control> &c, const std::vector<std::string> &aliases = {});

	inline std::shared_ptr<layout> make_tab_area(uint64_t id, bool is_active, LAYOUT_CBK_FN e)
	{
		return make_tab_area(id, is_active, gui::s_justify, e);
	}

	inline std::shared_ptr<group> make_groupbox(const std::string &id, const std::string &t, const ren::vec2 &s, LAYOUT_CBK_FN e)
	{
		return make_groupbox(id, t, {}, s, e);
	}

	// auto-calculates perfect groupbox size (meant to be 3 groupboxes in a row)
	inline ren::vec2 window_size_to_groupbox_size(float w, float h, float amt = 3.f)
	{
		return ren::vec2((w - 80.f) / amt, h - 110.f);
	}
}

#undef LAYOUT_CBK_FN

#endif //GUI_TESTER_HELPERS_H
