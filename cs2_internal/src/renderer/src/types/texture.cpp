#include <ren/renderer.h>
#include <ren/types/texture.h>

#define STB_IMAGE_IMPLEMENTATION
#include <lib/image.h>

namespace evo::ren
{
	void texture::create()
	{
		if (!adapter && !draw.adapter)
			throw;
		if (!adapter)
			adapter = draw.adapter;

		if (obj)
			return;

		uint8_t *d{};
		int w{}, h{}, c{};
		uint32_t s{};
		switch (src)
		{
			case file:
				d = stbi_load(path.c_str(), &w, &h, &c, 4);
				s = w * 4;
				break;
			case mem:
				d = stbi_load_from_memory((uint8_t *)data, (int)size, &w, &h, &c, 4);
				s = w * 4;
				break;
			case rgba:
				d = (uint8_t *)data;
				w = (int)width;
				h = (int)height;
				s = pitch;
				c = 4;
				break;
		}

		if (!d || !c)
		{
			if (d && d != data)
				stbi_image_free(d);
			return;
		}

		// if loaded with stbi, flip R and B channels to match ABGR
		if (d != data)
			for (int i{}; i < w * h * 4; i += 4)
				std::swap(d[i], d[i + 2]);

		obj = adapter->create_texture((char *)d, w, h, s);
		if (d != data)
		{
			stbi_image_free(d);
			width = w;
			height = h;
		}

		REN_DBG("texture created");
	}

	void texture::destroy()
	{
		if (!adapter || !obj)
			return;

		adapter->destroy_texture(obj);
		obj = nullptr;
		REN_DBG("texture destroyed");
	}

	void svg_texture::create()
	{
		// reset data and raw
		data = nullptr;
		raw = std::vector<uint8_t>(0xFFFFFF);

		// try rasterizing
		width = height ? (uint32_t)(w2h * height) : 0;
		if (svg_rasterize(svg, raw, width, height))
			data = raw.data();

		pitch = width * 4;
		REN_DBG("svg texture created");
		texture::create();
	}

	void svg_texture::destroy()
	{
		texture::destroy();
		REN_DBG("svg texture destroyed");
	}
} // namespace evo::ren
