#ifndef SDK_MATH_MAT_H
#define SDK_MATH_MAT_H

namespace sdk
{
	struct matrix3x4_t
	{
		float mat[3][4];

		__forceinline float *operator[](const int i) { return mat[i]; }

		__forceinline const float *operator[](const int i) const { return mat[i]; }
	};

	struct matrix3x4a_t : public matrix3x4_t {};

	struct matrix4x4_t
	{
		float mat[4][4];

		__forceinline float *operator[](const int i) { return mat[i]; }

		__forceinline const float *operator[](const int i) const { return mat[i]; }
	};
} // namespace sdk

#endif // SDK_MATH_MAT_H
