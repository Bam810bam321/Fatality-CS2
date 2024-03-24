#pragma once

namespace sdk
{
	class vec3
	{
	public:
		vec3() = default;

		vec3(const float x, const float y, const float z) :
			x(x), y(y), z(z) { }

		float x, y, z;
	};
}
