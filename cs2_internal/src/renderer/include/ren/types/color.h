#ifndef REN_LINKER_COLOR_H
#define REN_LINKER_COLOR_H

#include <cmath>
#include <cstdint>

namespace evo::ren
{
	class color
	{
	public:
		color() = default;

		color(float r, float g, float b, float a = 1.f) : value{r, g, b, a} {}

		color(int r, int g, int b, int a = 255) : value{(float)r / 255.f, (float)g / 255.f, (float)b / 255.f, (float)a / 255.f} {}

		explicit color(uint32_t argb) :
			value{float(argb >> 16 & 0xFF) / 255.f, float(argb >> 8 & 0xFF) / 255.f, float(argb & 0xFF) / 255.f, float(argb >> 24 & 0xFF) / 255.f}
		{}

		color(const color &rgb, float a) : value{rgb.value.r, rgb.value.g, rgb.value.b, a} {}

		static color white() { return {1.f, 1.f, 1.f}; }
		static color black() { return {0.f, 0.f, 0.f}; }
		static color white_transparent() { return {1.f, 1.f, 1.f, 0.f}; }
		static color black_transparent() { return {0.f, 0.f, 0.f, 0.f}; }
		static color gray(float b, float a = 1.f) { return {b, b, b, a}; }

		static color percent(float p, float a = 1.f)
		{
			return {p < .5f ? .78f : std::floorf(.78f - (p * 2.f - 1.f) * .78f), p > .5f ? .78f : std::floorf(p * 1.56f), .05f, a};
		}

		static color interpolate(const color &a, const color &b, float t)
		{
			return {
				a.value.r + (b.value.r - a.value.r) * t, a.value.g + (b.value.g - a.value.g) * t, a.value.b + (b.value.b - a.value.b) * t,
				a.value.a + (b.value.a - a.value.a) * t};
		}

		bool operator==(const color &other) const { return value.r == other.value.r && value.g == other.value.g && value.b == other.value.b && value.a == other.value.a; }

		bool operator!=(const color &other) const { return !(*this == other); }

		[[nodiscard]] uint32_t rgba() const
		{
			return (static_cast<uint32_t>(value.r * 255.f) << 16) | (static_cast<uint32_t>(value.g * 255.f) << 8) | (static_cast<uint32_t>(value.b * 255.f)) |
				(static_cast<uint32_t>(value.a * 255.f) << 24);
		}

		[[nodiscard]] uint32_t argb() const
		{
			return (static_cast<uint32_t>(value.a * 255.f) << 24) | (static_cast<uint32_t>(value.r * 255.f) << 16) | (static_cast<uint32_t>(value.g * 255.f) << 8) |
				(static_cast<uint32_t>(value.b * 255.f));
		}

		[[nodiscard]] uint32_t bgra() const
		{
			return (static_cast<uint32_t>(value.b * 255.f)) | (static_cast<uint32_t>(value.g * 255.f) << 8) | (static_cast<uint32_t>(value.r * 255.f) << 16) |
				(static_cast<uint32_t>(value.a * 255.f) << 24);
		}

		[[nodiscard]] uint32_t abgr() const
		{
			return (static_cast<uint32_t>(value.a * 255.f) << 24) | (static_cast<uint32_t>(value.b * 255.f)) | (static_cast<uint32_t>(value.g * 255.f) << 8) |
				(static_cast<uint32_t>(value.r * 255.f) << 16);
		}

		/**
		 * Darkens the color
		 * @param v Modulation
		 * @return Modulated color
		 */
		color darken(float v) const { return {value.r * (1.f - v), value.g * (1.f - v), value.b * (1.f - v), value.a}; }

		/**
		 * Modulates alpha channel
		 * @param v Alpha value
		 * @return Modulated color
		 */
		[[nodiscard]] color mod_a(float v) const { return {value.r, value.g, value.b, value.a * v}; }

		/**
		 * Modulates alpha channel
		 * @param v Alpha value
		 * @return Modulated color
		 */
		[[nodiscard]] color mod_a(int v) const { return {value.r, value.g, value.b, value.a * (float)v / 255.f}; }

		[[nodiscard]] color r(float v) const { return {v, value.g, value.b, value.a}; }
		[[nodiscard]] color g(float v) const { return {value.r, v, value.b, value.a}; }
		[[nodiscard]] color b(float v) const { return {value.r, value.g, v, value.a}; }
		[[nodiscard]] color a(float v) const { return {value.r, value.g, value.b, v}; }

		[[nodiscard]] int get_r() const { return value.r * 255.f; }
		[[nodiscard]] int get_g() const { return value.g * 255.f; }
		[[nodiscard]] int get_b() const { return value.b * 255.f; }
		[[nodiscard]] int get_a() const { return value.a * 255.f; }

		[[nodiscard]] uint16_t h() const
		{
			const auto _max = fmax(value.r, fmax(value.g, value.b));
			const auto _min = fmin(value.r, fmin(value.g, value.b));
			const auto d = _max - _min;

			auto _h = 0U;
			if (_max == _min)
				_h = 0U;
			if (_max == value.r)
				_h = (uint16_t)(60 * ((value.g - value.b) / d) + 360) % 360;
			if (_max == value.g)
				_h = (uint16_t)(60 * ((value.b - value.r) / d) + 120) % 360;
			if (_max == value.b)
				_h = (uint16_t)(60 * ((value.r - value.g) / d) + 240) % 360;

			return _h;
		}

		[[nodiscard]] float s() const
		{
			const auto _max = fmax(value.r, fmax(value.g, value.b));
			const auto _min = fmin(value.r, fmin(value.g, value.b));
			const auto d = _max - _min;

			return _max != 0.f ? d / _max : 0.f;
		}

		[[nodiscard]] float v() const { return fmax(value.r, fmax(value.g, value.b)); }

		[[nodiscard]] color hsv(uint16_t _h, float _s, float _v, float a = -1.f) const
		{
			color col{*this};
			const auto hi = ((uint32_t)floorf((float)_h / 60.f)) % 6;
			const auto f = (float)_h / 60.f - floorf((float)_h / 60.f);

			const auto _a = _v * 255.f;
			const auto _p = _a * (1.f - _s);
			const auto _q = _a * (1.f - f * _s);
			const auto _t = _a * (1.f - (1.f - f) * _s);

			if (hi == 0)
				col.value = {_a / 255.f, _t / 255.f, _p / 255.f, value.a};
			if (hi == 1)
				col.value = {_q / 255.f, _a / 255.f, _p / 255.f, value.a};
			if (hi == 2)
				col.value = {_p / 255.f, _a / 255.f, _t / 255.f, value.a};
			if (hi == 3)
				col.value = {_p / 255.f, _q / 255.f, _a / 255.f, value.a};
			if (hi == 4)
				col.value = {_t / 255.f, _p / 255.f, _a / 255.f, value.a};
			if (hi == 5)
				col.value = {_a / 255.f, _p / 255.f, _q / 255.f, value.a};

			if (a > -1.f)
				col.value.a = a;

			return col;
		}

		struct
		{
			float r, g, b, a;
		} value{};
	};
} // namespace evo::ren

#endif // REN_LINKER_COLOR_H
