#pragma once

#include <cstdint>
#include <unordered_map>

namespace evo::gui
{
	enum hotkey_behavior : char
	{
		hkb_toggle,
		hkb_hold,
	};

	struct hotkey_info
	{
		hotkey_behavior beh{hkb_toggle};
		uint64_t value{};
	};

	using hotkeys_t = std::unordered_map<uint8_t, hotkey_info>;
}
