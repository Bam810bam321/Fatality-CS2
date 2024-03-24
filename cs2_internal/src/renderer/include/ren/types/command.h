#ifndef REN_LINKER_COMMAND_H
#define REN_LINKER_COMMAND_H

#include <ren/types/pos.h>

namespace evo::ren
{
	enum render_mode
	{
		normal,
		wireframe,
	};

	struct command
	{
		size_t ic{}, vc{};
		void *texture{}, *frag_shader{}, *vert_shader{};
		std::optional<rect> clip_rect, uv_rect;
		float alpha{1.f}, rotation{0.f};
		bool anti_alias{}, ignore_scaling{}, chained_call{}, only_downsampled{};
		render_mode mode{render_mode::normal};
	};
} // namespace evo::ren

#endif // REN_LINKER_COMMAND_H
