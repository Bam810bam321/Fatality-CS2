#ifndef REN_LINKER_RENDERER_H
#define REN_LINKER_RENDERER_H

#include <array>
#include <memory>
#include <unordered_map>

#include <ren/adapter.h>
#include <ren/layer.h>
#include <ren/macros.h>
#include <ren/types/font.h>
#include <ren/types/pos.h>
#include <ren/types/shader.h>
#include <ren/types/texture.h>

namespace evo::ren
{
	class renderer
	{
	public:
		renderer() { REN_DBG("allocated"); }
		~renderer();

		void create_objects() const;
		void destroy_objects() const;
		void refresh();
		void begin_frame() const;
		void end_frame() const;
		void render() const;
		void flush();

		void create_layer(int slot);

		/**
		 * Recommended to use this one instead of display directly.
		 * @return Scaled display size.
		 */
		[[nodiscard]] vec2 get_scaled_display() const { return display * scale; }

		std::shared_ptr<adapter> adapter{};

		std::unordered_map<uint64_t, std::shared_ptr<texture>> textures{};
		std::unordered_map<uint64_t, std::shared_ptr<font_base>> fonts{};
		std::unordered_map<uint64_t, std::shared_ptr<shader>> shaders{};

		std::array<std::shared_ptr<layer>, 64> layers{};
		float frame_time{};
		float time{};
		float scale{1.f};
		vec2 display{};
	};

	extern renderer draw;
} // namespace evo::ren

#endif // REN_LINKER_RENDERER_H
