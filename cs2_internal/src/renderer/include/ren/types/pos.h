#ifndef REN_LINKER_POS_H
#define REN_LINKER_POS_H

#include <cmath>
#undef min
#undef max

namespace evo::ren
{
	/**
	 * 2D vector.
	 */
	class vec2
	{
	public:
		vec2() = default;

		explicit vec2(float a) :
			x(a), y(a) {}

		vec2(float _x, float _y) :
			x(_x), y(_y) {}

		explicit operator float *() { return &x; }

		bool operator==(const vec2 &other) const { return x == other.x && y == other.y; }
		bool operator!=(const vec2 &other) const { return !(*this == other); }
		vec2 operator+(const vec2 &other) const { return {x + other.x, y + other.y}; }
		vec2 operator-(const vec2 &other) const { return {x - other.x, y - other.y}; }
		vec2 operator*(const vec2 &other) const { return {x * other.x, y * other.y}; }
		vec2 operator/(const vec2 &other) const { return {x / other.x, y / other.y}; }
		vec2 operator+(float a) const { return {x + a, y + a}; }
		vec2 operator-(float a) const { return {x - a, y - a}; }
		vec2 operator*(float a) const { return {x * a, y * a}; }
		vec2 operator/(float a) const { return {x / a, y / a}; }

		vec2 &operator+=(const vec2 &other)
		{
			x += other.x;
			y += other.y;
			return *this;
		}

		vec2 &operator-=(const vec2 &other)
		{
			x -= other.x;
			y -= other.y;
			return *this;
		}

		vec2 &operator*=(const vec2 &other)
		{
			x *= other.x;
			y *= other.y;
			return *this;
		}

		vec2 &operator/=(const vec2 &other)
		{
			x /= other.x;
			y /= other.y;
			return *this;
		}

		vec2 &operator+=(float a)
		{
			x += a;
			y += a;
			return *this;
		}

		vec2 &operator-=(float a)
		{
			x -= a;
			y -= a;
			return *this;
		}

		vec2 &operator*=(float a)
		{
			x *= a;
			y *= a;
			return *this;
		}

		vec2 &operator/=(float a)
		{
			x /= a;
			y /= a;
			return *this;
		}

		[[nodiscard]] vec2 floor() const { return {std::floor(x), std::floor(y)}; }
		[[nodiscard]] vec2 ceil() const { return {std::ceil(x), std::ceil(y)}; }
		[[nodiscard]] vec2 round() const { return {std::round(x), std::round(y)}; }

		[[nodiscard]] float len() const { return std::sqrt(x * x + y * y); }
		[[nodiscard]] float len_sqr() const { return x * x + y * y; }

		float x{}, y{};
	};

	/**
	 * Rectangle.
	 *
	 * @note Margin and padding is not something like seen in the web.
	 * @note When applying margin, the rectangle is shifted around in space - no size change.
	 * @note When applying padding, it works inversely to margin. No size change as well.
	 */
	class rect
	{
	public:
		rect() = default;

		explicit rect(float a) :
			mins(a), maxs(a) {}

		explicit rect(const vec2 &a) :
			mins(a), maxs(a) {}

		rect(float x, float y) :
			mins(x, y), maxs(x, y) {}

		rect(const vec2 &_mins, const vec2 &_maxs) :
			mins(_mins), maxs(_maxs) {}

		rect(float x1, float y1, float x2, float y2) :
			mins(x1, y1), maxs(x2, y2) {}

		[[nodiscard]] float width() const { return maxs.x - mins.x; }
		[[nodiscard]] float height() const { return maxs.y - mins.y; }
		[[nodiscard]] rect width(float w) const { return {mins.x, mins.y, mins.x + w, maxs.y}; }
		[[nodiscard]] rect height(float h) const { return {mins.x, mins.y, maxs.x, mins.y + h}; }
		[[nodiscard]] vec2 size() const { return maxs - mins; }
		[[nodiscard]] rect size(const vec2 &s) const { return {mins, mins + s}; }

		/**
		 * Moves the rectangle by the given vector.
		 * @param v Vector to move by.
		 * @return Moved rectangle.
		 */
		[[nodiscard]] rect translate(const vec2 &v) const { return {mins + v, maxs + v}; }

		/**
		 * Shifts rectangle by amount to the right.
		 * @param m Amount to shift.
		 * @return Shifted rectangle.
		 */
		[[nodiscard]] rect margin_left(float m) const { return {mins.x + m, mins.y, maxs.x + m, maxs.y}; }

		/**
		 * Shifts rectangle by amount to the left.
		 * @param m Amount to shift.
		 * @return Shifted rectangle.
		 */
		[[nodiscard]] rect margin_right(float m) const { return {mins.x - m, mins.y, maxs.x - m, maxs.y}; }

		/**
		 * Shifts rectangle by amount to the bottom.
		 * @param m Amount to shift.
		 * @return Shifted rectangle.
		 */
		[[nodiscard]] rect margin_top(float m) const { return {mins.x, mins.y + m, maxs.x, maxs.y + m}; }

		/**
		 * Shifts rectangle by amount to the top.
		 * @param m Amount to shift.
		 * @return Shifted rectangle.
		 */
		[[nodiscard]] rect margin_bottom(float m) const { return {mins.x, mins.y - m, maxs.x, maxs.y - m}; }

		/**
		 * @see margin_left
		 * @see rect
		 */
		[[nodiscard]] rect padding_left(float m) const { return {mins.x + m, mins.y, maxs.x, maxs.y}; }

		/**
		 * @see margin_right
		 * @see rect
		 */
		[[nodiscard]] rect padding_right(float m) const { return {mins.x, mins.y, maxs.x - m, maxs.y}; }

		/**
		 * @see margin_top
		 * @see rect
		 */
		[[nodiscard]] rect padding_top(float m) const { return {mins.x, mins.y + m, maxs.x, maxs.y}; }

		/**
		 * @see margin_bottom
		 * @see rect
		 */
		[[nodiscard]] rect padding_bottom(float m) const { return {mins.x, mins.y, maxs.x, maxs.y - m}; }

		/**
		 * Shrinks the rectangle by the given amount.
		 * @param m Amount to shrink by.
		 * @return Shrunk rectangle.
		 */
		[[nodiscard]] rect shrink(float m) const { return {mins.x + m, mins.y + m, maxs.x - m, maxs.y - m}; }

		/**
		 * Expands the rectangle by the given amount.
		 * @param m Amount to expand by.
		 * @return Expanded rectangle.
		 */
		[[nodiscard]] rect expand(float m) const { return {mins.x - m, mins.y - m, maxs.x + m, maxs.y + m}; }

		/**
		 * Checks if the rectangle contains the given point.
		 * @param p Point to check.
		 * @return True if the point is inside the rectangle.
		 */
		[[nodiscard]] bool contains(const vec2 &p) const
		{
			return p.x >= mins.x && p.x <= maxs.x && p.y >= mins.y && p.y <= maxs.y;
		}

		/**
		 * Checks if the rectangle contains the given rectangle.
		 * @param r Rectangle to check.
		 * @return True if the rectangle is inside the rectangle.
		 */
		[[nodiscard]] bool contains(const rect &r) const
		{
			return r.mins.x >= mins.x && r.maxs.x <= maxs.x && r.mins.y >= mins.y && r.maxs.y <= maxs.y;
		}

		/**
		 * Intersects the rectangle with another rectangle.
		 * @param r Other rectangle.
		 * @return Intersection of the two rectangles.
		 */
		[[nodiscard]] rect intersect(const rect &other) const
		{
			return {std::max(mins.x, other.mins.x), std::max(mins.y, other.mins.y), std::min(maxs.x, other.maxs.x), std::min(maxs.y, other.maxs.y)};
		}

		[[nodiscard]] vec2 tl() const { return {mins.x, mins.y}; }
		[[nodiscard]] vec2 tr() const { return {maxs.x, mins.y}; }
		[[nodiscard]] vec2 bl() const { return {mins.x, maxs.y}; }
		[[nodiscard]] vec2 br() const { return {maxs.x, maxs.y}; }

		/**
		 * @return Center of the rectangle.
		 */
		[[nodiscard]] vec2 center() const { return (mins + maxs) * 0.5f; }

		/**
		 * Considers the rectangle as an ellipse and returns a point on it.
		 * @return The point on an ellipse.
		 */
		[[nodiscard]] vec2 circle(float r) const
		{
			return center() + vec2(width() * .5f * std::cosf(r), height() * .5f * std::sinf(r));
		}

		[[nodiscard]] rect floor() const { return {mins.floor(), maxs.floor()}; }
		[[nodiscard]] rect ceil() const { return {mins.ceil(), maxs.ceil()}; }
		[[nodiscard]] rect round() const { return {mins.round(), maxs.round()}; }

		bool is_zero() const { return mins.len_sqr() == 0.f && maxs.len_sqr() == 0.f; }

		vec2 mins{}, maxs{};
	};
} // namespace evo::ren

#define min(a, b) ((a) < (b) ? (a) : (b))
#define max(a, b) ((a) > (b) ? (a) : (b))

#endif // REN_LINKER_POS_H
