#ifndef REN_LINKER_VERTEX_H
#define REN_LINKER_VERTEX_H

namespace evo::ren
{
	extern float vtx_texel;
	extern float vtx_scale;

	struct vertex_constant_buffer
	{
		float mvp[4][4];
	};

	struct vertex
	{
		vertex(float _x, float _y, float _z, uint32_t _col, float _u, float _v, bool skip = false) :
			x(_x), y(_y), z(_z), col(_col), u(_u), v(_v)
		{
			x = floorf(x);
			y = floorf(y);

			x -= vtx_texel;
			y -= vtx_texel;

			if (!skip && vtx_scale != 1.f)
			{
				x *= vtx_scale;
				y *= vtx_scale;
			}
		}

		float x, y, z;
		uint32_t col;
		float u, v;
	};

	struct vertex_unfloored
	{
		vertex_unfloored(float _x, float _y, float _z, uint32_t _col, float _u, float _v, bool skip = false) :
			x(_x), y(_y), z(_z), col(_col), u(_u), v(_v)
		{
			x -= vtx_texel;
			y -= vtx_texel;

			if (!skip && vtx_scale != 1.f)
			{
				x *= vtx_scale;
				y *= vtx_scale;
			}
		}

		float x, y, z;
		uint32_t col;
		float u, v;
	};
} // namespace evo::ren

#endif // REN_LINKER_VERTEX_H
