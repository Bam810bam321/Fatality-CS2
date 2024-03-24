#pragma once
#include <game/game.h>
#include <sdk/color.h>

namespace sdk
{
	template <typename... Args>
	__forceinline void con_msg(const char *text, Args... args)
	{
		reinterpret_cast<void (*)(const char *, ...)>(game->tier0.at(offsets::functions::con_msg))(text, args...);
	}

	template <typename... Args>
	__forceinline void con_color_msg(const color &c, const char *text, Args... args)
	{
		reinterpret_cast<void (*)(const color &, const char *, ...)>(game->tier0.at(offsets::functions::con_color_msg))(c, text, args...);
	}

} // namespace sdk
