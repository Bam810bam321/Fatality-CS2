#pragma once
#include <game/game.h>
#include "sdk/vec.h"
#include "sdk/math/vector.h"

namespace math
{
	__forceinline float normalize_yaw(float angle)
	{
		auto revolutions = angle / 360.f;
		if (angle > 180.f || angle < -180.f)
		{
			revolutions = round(abs(revolutions));
			if (angle < 0.f)
				angle = (angle + 360.f * revolutions);
			else
				angle = (angle - 360.f * revolutions);
			return angle;
		}
		return angle;
	}

	__forceinline void vector_angles(const sdk::vector &forward, sdk::qangle &angles, sdk::vector *up = nullptr)
	{
		float pitch, yaw, roll;

		const auto len = forward.length_2d();
		if (up && len > 0.001f)
		{
			pitch = RAD2DEG(std::atan2(-forward.z, len));
			yaw = RAD2DEG(std::atan2(forward.y, forward.x));

			const auto left = (*up).cross(forward).normalized();

			const float up_z = (left.y * forward.x) - (left.x * forward.y);

			roll = RAD2DEG(std::atan2(left.z, up_z));
		}

		else
		{
			if (len > 0.f)
			{
				pitch = RAD2DEG(std::atan2(-forward.z, len));
				yaw = RAD2DEG(std::atan2(forward.y, forward.x));
				roll = 0.f;
			}

			else
			{
				pitch = forward.z > 0.f ? -90.f : 90.f;
				yaw = 0.f;
				roll = 0.f;
			}
		}

		angles = {pitch, yaw, roll};
	}

	__forceinline sdk::qangle calc_angle(const sdk::vector &src, const sdk::vector &dst)
	{
		sdk::qangle ret;
		vector_angles((dst - src).normalized(), ret);
		return ret;
	}

	inline const sdk::matrix4x4_t &world_to_screen_matrix() { return *reinterpret_cast<sdk::matrix4x4_t *>(game->client.at(sdk::offsets::globals::screen_transform)); }

	inline bool screen_transform(const sdk::vector &in, sdk::vector &out)
	{
		const auto &w2_s_matrix = world_to_screen_matrix();
		out.x = w2_s_matrix[0][0] * in[0] + w2_s_matrix[0][1] * in[1] + w2_s_matrix[0][2] * in[2] + w2_s_matrix[0][3];
		out.y = w2_s_matrix[1][0] * in[0] + w2_s_matrix[1][1] * in[1] + w2_s_matrix[1][2] * in[2] + w2_s_matrix[1][3];
		out.z = 0.0f;

		const auto w = w2_s_matrix[3][0] * in.x + w2_s_matrix[3][1] * in.y + w2_s_matrix[3][2] * in.z + w2_s_matrix[3][3];

		if (w < 0.001f)
		{
			out.x *= 100000;
			out.y *= 100000;
			return false;
		}

		const auto invw = 1.0f / w;
		out.x *= invw;
		out.y *= invw;

		return true;
	}

	inline bool world_to_screen(const sdk::vector &in, evo::ren::vec2 &out)
	{
		sdk::vector temp;
		const auto result = screen_transform(in, temp);
		out.x = temp.x, out.y = temp.y;
		out = out.round();
		return result;
	}

	inline float approach(const float target, float value, const float speed)
	{
		const auto delta = target - value;
		if (delta > speed)
			value += speed;
		else if (delta < -speed)
			value -= speed;
		else
			value = target;

		return value;
	}
}
