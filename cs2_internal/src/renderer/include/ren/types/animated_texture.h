#ifndef REN_LINKER_ANIMATED_TEXTURE_H
#define REN_LINKER_ANIMATED_TEXTURE_H

#include <ren/types/texture.h>
#include <vector>

namespace evo::ren
{
	class animated_texture : public texture
	{
		struct frame_t
		{
			char *data;
			float delay;
		};

		char *file_data{};

	public:
		explicit animated_texture(const char *path) :
			texture(path) { is_animated = true; }

		animated_texture(void *data, uint32_t sz) :
			texture(data, sz) { is_animated = true; }

		void create() override;
		void destroy() override;
		void on_begin_frame() override;

		void reset_loop() { frame = 0; }
		bool should_loop{true};
		void set_frame(uint32_t f) { frame = f % frames.size(); }
		uint32_t get_frame_count() const { return frames.size(); }

	protected:
		uint32_t frame{};
		std::vector<frame_t> frames{};
		float time{};
	};
} // namespace evo::ren

#endif // REN_LINKER_ANIMATED_TEXTURE_H
