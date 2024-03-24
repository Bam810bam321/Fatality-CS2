#ifndef REN_LINKER_MISC_H
#define REN_LINKER_MISC_H

#include <array>
#include <list>
#include <string>

#include <ren/types/pos.h>

namespace evo::ren
{
	inline static constexpr auto pi = 3.14159265358979323846f;
	inline static constexpr auto h_pi = 3.14159265358979323846f * .5f;
	inline static constexpr auto q_pi = 3.14159265358979323846f * .25f;

	__forceinline static float rad2deg(const float r) { return r * 180.f / pi; }

	__forceinline static float deg2rad(const float d) { return d * pi / 180.f; }

	__forceinline static vec2 rotate_point(const float f, const vec2 &p, const vec2 &c)
	{
		return c + vec2(cosf(f) * (p.x - c.x) - sinf(f) * (p.y - c.y), sinf(f) * (p.x - c.x) + cosf(f) * (p.y - c.y));
	}

	__forceinline static bool get_bit(uint32_t N, uint32_t V) { return (V >> N) & 1; }

	__forceinline static void set_bit(uint32_t N, uint32_t &V) { V |= 1 << N; }

	__forceinline static void unset_bit(uint32_t N, uint32_t &V) { V &= ~(1 << N); }

	__forceinline static std::string utf8_encode(uint32_t codepoint)
	{
		static const auto set_octet = [](const uint32_t w, int offset, int x, uint32_t &o)
		{
			for (auto i = 0; i < (6 - x); i++)
			{
				if (get_bit(i + offset, w))
					set_bit(i, o);
			}

			for (auto i = 0; i < x; i++)
				set_bit(6 - i, o);

			set_bit(7, o);
		};

		std::string str{};
		if (codepoint < 0x80)
			str += static_cast<char>(codepoint);
		else if (codepoint < 0x800)
		{
			uint32_t octet_1{};
			uint32_t octet_2{};

			set_octet(codepoint, 0, 0, octet_2);
			set_octet(codepoint, 6, 1, octet_1);

			str += static_cast<char>(octet_1);
			str += static_cast<char>(octet_2);
		}
		else if (codepoint < 0x10000)
		{
			uint32_t octet_1{};
			uint32_t octet_2{};
			uint32_t octet_3{};

			set_octet(codepoint, 0, 0, octet_3);
			set_octet(codepoint, 6, 0, octet_2);
			set_octet(codepoint, 12, 2, octet_1);

			str += static_cast<char>(octet_1);
			str += static_cast<char>(octet_2);
			str += static_cast<char>(octet_3);
		}
		else if (codepoint < 0x110000)
		{
			uint32_t octet_1{};
			uint32_t octet_2{};
			uint32_t octet_3{};
			uint32_t octet_4{};

			set_octet(codepoint, 0, 0, octet_4);
			set_octet(codepoint, 6, 0, octet_3);
			set_octet(codepoint, 12, 0, octet_2);
			set_octet(codepoint, 24, 3, octet_1);

			str += static_cast<char>(octet_1);
			str += static_cast<char>(octet_2);
			str += static_cast<char>(octet_3);
			str += static_cast<char>(octet_4);
		}

		return str;
	}

	__forceinline static uint8_t utf8_decode(const char *str, uint32_t &codepoint)
	{
		static auto set_octet = [](char _, uint32_t &c, uint32_t o, uint32_t m)
		{
			for (uint32_t i{}; i < m; i++)
			{
				if (get_bit(i, _))
					set_bit(i + o, c);
			}
		};

		codepoint = 0;
		if (!get_bit(7, str[0]))
		{
			codepoint = (uint8_t)str[0];
			return 1;
		}

		if (!get_bit(6, str[0]))
			return 1;

		if (!get_bit(5, str[0]))
		{
			set_octet(str[1], codepoint, 0, 6);
			set_octet(str[0], codepoint, 6, 5);

			return 2;
		}

		if (!get_bit(4, str[0]))
		{
			set_octet(str[2], codepoint, 0, 6);
			set_octet(str[1], codepoint, 6, 6);
			set_octet(str[0], codepoint, 12, 4);

			return 3;
		}

		if (!get_bit(3, str[0]))
		{
			set_octet(str[3], codepoint, 0, 6);
			set_octet(str[2], codepoint, 6, 6);
			set_octet(str[1], codepoint, 12, 6);
			set_octet(str[0], codepoint, 18, 3);

			return 4;
		}

		return 1;
	}

	__forceinline static std::string get_line(const std::string &str, uint32_t pos)
	{
		const auto end = str.find('\n', pos);
		return {str.begin() + (int)pos, end == std::string::npos ? str.end() : str.begin() + (int)end};
	}

	template <typename T>
	inline static bool is_full_transparent(const T &arr)
	{
		for (const auto &i : arr)
			if (i.value.a != 0)
				return false;
		return true;
	}
} // namespace evo::ren

#endif // REN_LINKER_MISC_H
