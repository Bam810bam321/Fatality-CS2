#include <ren/renderer.h>
#include <ren/types/animated_texture.h>

#include <fstream>
#include <lib/image.h>

namespace evo::ren
{
	void animated_texture::create()
	{
		if (!adapter && !draw.adapter)
			throw;
		if (!adapter)
			adapter = draw.adapter;

		if (obj)
			return;

		if (src == file)
		{
			std::ifstream file(path, std::ios::binary);
			if (!file)
				return;

			file.seekg(0, std::ios::end);
			size = (uint32_t)file.tellg();
			file.seekg(0, std::ios::beg);

			file_data = new char[size];
			file.read((char *)file_data, size);
			file.close();
		}
		else if (src == mem)
		{
			file_data = (char *)data;
		}

		stbi__context s;
		stbi__start_mem(&s, (uint8_t *)file_data, (int)size);

		if (!stbi__gif_test(&s))
		{
			if (src == file)
				delete[] (char *)file_data;

			texture::create();
			return;
		}

		char *frame_data{};
		stbi__gif g{};
		int c{};
		while ((frame_data = (char *)stbi__gif_load_next(&s, &g, &c, 4, nullptr)))
		{
			if (frame_data == (char *)&s)
				break;

			frame_t f{};
			f.data = new char[g.w * g.h * 4];
			f.delay = (float)g.delay * 0.001f;

			memcpy(f.data, frame_data, g.w * g.h * 4);
			for (int i{}; i < g.w * g.h * c; i += c)
				std::swap(f.data[i], f.data[i + 2]);

			frames.emplace_back(f);

			if (!width || !height)
			{
				width = g.w;
				height = g.h;
			}
		}

		// alloc initial frame
		if (!frames.empty())
			obj = adapter->create_texture(frames[0].data, width, height, width * 4);

		if (src == file)
			delete[] (char *)file_data;

		time = draw.time;
	}

	void animated_texture::destroy()
	{
		texture::destroy();

		for (auto &f : frames)
			delete[] f.data;
		frames.clear();
	}

	void animated_texture::on_begin_frame()
	{
		if (!obj || frames.empty() || frame == frames.size() - 1 && !should_loop)
			return;

		if (draw.time - time >= frames[frame].delay)
		{
			time = draw.time;
			frame = (frame + 1) % frames.size();
			adapter->update_texture(obj, frames[frame].data, width, height, width * 4);
		}
	}
} // namespace evo::ren
