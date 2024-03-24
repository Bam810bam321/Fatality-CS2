#pragma once

#ifndef SDK_INTRINSICS_H
#define SDK_INTRINSICS_H

#include <pmmintrin.h>
#include <xmmintrin.h>

static const float invtwopi = 0.1591549f;
static const float twopi = 6.283185f;
static const float threehalfpi = 4.7123889f;
static const float pi = 3.141593f;
static const float halfpi = 1.570796f;
static const __m128 signmask = _mm_castsi128_ps(_mm_set1_epi32(0x80000000));

static const __declspec(align(16)) float null[4] = {0.f, 0.f, 0.f, 0.f};
static const __declspec(align(16)) float _pi2[4] = {1.5707963267948966192f, 1.5707963267948966192f, 1.5707963267948966192f, 1.5707963267948966192f};
static const __declspec(align(16)) float _pi[4] = {3.141592653589793238f, 3.141592653589793238f, 3.141592653589793238f, 3.141592653589793238f};
static const __declspec(align(16)) int32_t component_mask[4][4]{
	{(int32_t)0xFFFFFFFF, 0, 0, 0}, {0, (int32_t)0xFFFFFFFF, 0, 0}, {0, 0, (int32_t)0xFFFFFFFF, 0}, {0, 0, 0, (int32_t)0xFFFFFFFF}};

typedef __declspec(align(16)) union
{
	float f[4];
	uint32_t u[4];
	__m128 v;
} m128;

#define BINOP(op)                                                                                                                                                        \
	m128 ret;                                                                                                                                                            \
	sub_float(ret, 0) = (sub_float(a, 0) op sub_float(b, 0));                                                                                                            \
	sub_float(ret, 1) = (sub_float(a, 1) op sub_float(b, 1));                                                                                                            \
	sub_float(ret, 2) = (sub_float(a, 2) op sub_float(b, 2));                                                                                                            \
	sub_float(ret, 3) = (sub_float(a, 3) op sub_float(b, 3));                                                                                                            \
	return ret;

__forceinline float &sub_float(m128 &a, int idx) { return a.f[idx]; }

__forceinline uint32_t &sub_uint(m128 &a, int idx) { return a.u[idx]; }

__forceinline m128 v_and(m128 &a, m128 &b)
{
	m128 ret;
	sub_uint(ret, 0) = (sub_uint(a, 0) & sub_uint(b, 0));
	sub_uint(ret, 1) = (sub_uint(a, 1) & sub_uint(b, 1));
	sub_uint(ret, 2) = (sub_uint(a, 2) & sub_uint(b, 2));
	sub_uint(ret, 3) = (sub_uint(a, 3) & sub_uint(b, 3));
	return ret;
}

__forceinline m128 splat_x(m128 &a)
{
	m128 ret;
	sub_float(ret, 0) = sub_float(a, 0);
	sub_float(ret, 1) = sub_float(a, 0);
	sub_float(ret, 2) = sub_float(a, 0);
	sub_float(ret, 3) = sub_float(a, 0);
	return ret;
}

__forceinline m128 splat_y(m128 a)
{
	m128 ret;
	sub_float(ret, 0) = sub_float(a, 1);
	sub_float(ret, 1) = sub_float(a, 1);
	sub_float(ret, 2) = sub_float(a, 1);
	sub_float(ret, 3) = sub_float(a, 1);
	return ret;
}

__forceinline m128 splat_z(m128 a)
{
	m128 ret;
	sub_float(ret, 0) = sub_float(a, 2);
	sub_float(ret, 1) = sub_float(a, 2);
	sub_float(ret, 2) = sub_float(a, 2);
	sub_float(ret, 3) = sub_float(a, 2);
	return ret;
}

__forceinline m128 add_simd(m128 &a, m128 &b) { BINOP(+); }

__forceinline m128 sub_simd(m128 &a, m128 &b) { BINOP(-); };

__forceinline m128 mul_simd(m128 &a, m128 &b) { BINOP(*); }

__forceinline m128 div_simd(m128 &a, m128 &b) { BINOP(/); }

__forceinline m128 load_simd(const void *pSIMD) { return *(reinterpret_cast<const m128 *>(pSIMD)); }

__forceinline void store_simd(float *pSIMD, const m128 &a) { *(reinterpret_cast<m128 *>(pSIMD)) = a; }

// Prevent the compiler from calling into the CRT everytime we want to compute stuff.
__forceinline float sqrt_ps(const float squared)
{
	m128 tmp;
	tmp.f[0] = squared;
	tmp.v = _mm_sqrt_ps(tmp.v);
	return tmp.f[0];
}

#endif // SDK_INTRINSICS_H