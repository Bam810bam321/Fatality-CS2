#ifndef SDK_MATH_VECTOR_H
#define SDK_MATH_VECTOR_H

#include "intrinsic.h"

namespace sdk
{
	class vector
	{
	public:
		float x{}, y{}, z{};

		__forceinline vector() :
		vector(0.f, 0.f, 0.f) {}

		__forceinline vector(const float x, const float y, const float z) :
		x(x), y(y), z(z) {}

		__forceinline vector operator+(const vector &v) const { return vector(x + v.x, y + v.y, z + v.z); }

		__forceinline vector operator-(const vector &v) const { return vector(x - v.x, y - v.y, z - v.z); }

		__forceinline vector operator*(const vector &v) const { return vector(x * v.x, y * v.y, z * v.z); }

		__forceinline vector operator/(const vector &v) const { return vector(x / v.x, y / v.y, z / v.z); }

		__forceinline vector operator*(const float v) const { return vector(x * v, y * v, z * v); }

		__forceinline vector operator/(const float v) const { return vector(x / v, y / v, z / v); }

		__forceinline vector operator+=(const vector &other)
		{
			x += other.x;
			y += other.y;
			z += other.z;
			return *this;
		}

		__forceinline vector operator-=(const vector &other)
		{
			x -= other.x;
			y -= other.y;
			z -= other.z;
			return *this;
		}

		__forceinline vector operator*=(const vector &other)
		{
			x *= other.x;
			y *= other.y;
			z *= other.z;
			return *this;
		}

		__forceinline vector operator/=(const vector &other)
		{
			x /= other.x;
			y /= other.y;
			z /= other.z;
			return *this;
		}

		__forceinline vector operator*=(const float other)
		{
			x *= other;
			y *= other;
			z *= other;
			return *this;
		}

		__forceinline vector operator/=(const float other)
		{
			x /= other;
			y /= other;
			z /= other;
			return *this;
		}

		__forceinline bool operator==(const vector &other) const { return x == other.x && y == other.y && z == other.z; }

		__forceinline bool operator!=(const vector &other) const { return x != other.x || y != other.y || z != other.z; }

		__forceinline float operator[](int i) const { return ((float *)this)[i]; }

		__forceinline float &operator[](int i) { return ((float *)this)[i]; }

		__forceinline bool is_zero(float tolerance = 0.01f) const
		{
			return (x > -tolerance && x < tolerance && y > -tolerance && y < tolerance && z > -tolerance && z < tolerance);
		}

		__forceinline float dot(const vector &other) const { return x * other.x + y * other.y + z * other.z; }

		__forceinline float dot(const float *other) const { return x * other[0] + y * other[1] + z * other[2]; }

		__forceinline float dist(const vector &other) const { return (other - *this).length(); }

		__forceinline float dist_sqr(const vector &other) const { return (other - *this).length_sqr(); }

		__forceinline vector cross(const vector &other) const { return {y * other.z - z * other.y, z * other.x - x * other.z, x * other.y - y * other.x}; }

		//__forceinline bool is_valid() const { return std::isfinite(this->x) && std::isfinite(this->y) && std::isfinite(this->z); }

		__forceinline float length() const { return sqrt_ps(x * x + y * y + z * z); }
		__forceinline float length_sqr() const { return this->x * this->x + this->y * this->y + this->z * this->z; }
		__forceinline float length_2d() const { return sqrt_ps(x * x + y * y); }
		__forceinline float length_2d_sqr() const { return this->x * this->x + this->y * this->y; }

		__forceinline static float vector_normalize(vector &vec)
		{
			const auto sqrlen = vec.length_sqr() + 1.0e-10f;
			float invlen;
			const auto xx = _mm_load_ss(&sqrlen);
			auto xr = _mm_rsqrt_ss(xx);
			auto xt = _mm_mul_ss(xr, xr);
			xt = _mm_mul_ss(xt, xx);
			xt = _mm_sub_ss(_mm_set_ss(3.f), xt);
			xt = _mm_mul_ss(xt, _mm_set_ss(0.5f));
			xr = _mm_mul_ss(xr, xt);
			_mm_store_ss(&invlen, xr);
			vec.x *= invlen;
			vec.y *= invlen;
			vec.z *= invlen;
			return sqrlen * invlen;
		}

		__forceinline float normalize_in_place() { return vector_normalize(*this); }

		__forceinline vector normalized() const
		{
			auto norm = *this;
			vector_normalize(norm);
			return norm;
		}
	};

	class vector_aligned : public vector
	{
	public:
		float w{};
	};

	class vector2d
	{
	public:
		float x{}, y{};
	};

	class vector4d
	{
	public:
		float x{}, y{}, z{}, w{};
	};


	using four_vectors = vector[4];
	using qangle = vector;
	using degree_euler = vector;
	using radian_euler = vector;
	using rotation_vector = vector;
	using quaternion_storage = vector4d; // not sure about this one
	using quaternion = vector4d;
	using fltx4 = vector4d;
} // namespace sdk

#endif // SDK_MATH_VECTOR_H
