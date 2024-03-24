#pragma once
#include "ren/types/color.h"

namespace sdk
{
	struct color
	{
		color(const int r, const int g, const int b, const int a = 255) :
			r(static_cast<char>(r)), g(static_cast<char>(g)), b(static_cast<char>(b)), a(static_cast<char>(a)) { }

		color(const evo::ren::color col) :
			r(static_cast<char>(col.get_r())), g(static_cast<char>(col.get_g())), b(static_cast<char>(col.get_b())), a(static_cast<char>(col.get_a())) {}

		char r, g, b, a;
	};
}
