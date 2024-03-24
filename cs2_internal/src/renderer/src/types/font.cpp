#include <ren/types/font.h>

#define STB_TRUETYPE_IMPLEMENTATION
#include <lib/truetype.h>

#define STB_RECT_PACK_IMPLEMENTATION
#include <lib/rectpack.h>

#include <ren/misc.h>
#include <ren/renderer.h>

#include <algorithm>
#include <fstream>

#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include <algorithm>
#include <ranges>

#pragma push_macro("min")
#pragma push_macro("max")
#undef min
#undef max

namespace evo::ren
{
	struct pixel
	{
		explicit pixel(uint8_t *data) : pd(data) {}

		[[nodiscard]] bool is_full_white() const { return red() == 0xFF && green() == 0xFF && blue() == 0xFF && alpha() == 0xFF; }

		void write(uint8_t r, uint8_t g, uint8_t b, uint8_t a) const
		{
			red() = r;
			green() = g;
			blue() = b;
			alpha() = a;
		}

		void blend(pixel &px, pixel &o) const
		{
			const auto a = std::max(std::min(1.f - (1.f - px.p_a()) * (1.f - p_a()), 1.f), 0.f);
			if (a < 1.0e-6f)
			{
				o.alpha() = 0;
				return;
			}

			const auto r = px.p_r() * px.p_a() / a + p_r() * p_a() * (1.f - px.p_a()) / a;
			const auto g = px.p_g() * px.p_a() / a + p_g() * p_a() * (1.f - px.p_a()) / a;
			const auto b = px.p_b() * px.p_a() / a + p_b() * p_a() * (1.f - px.p_a()) / a;

			o.write(uint8_t(r * 255.f), uint8_t(g * 255.f), uint8_t(b * 255.f), uint8_t(a * 255.f));
		}

		[[nodiscard]] float p_r() const { return (float)red() / 255.f; }
		[[nodiscard]] float p_g() const { return (float)green() / 255.f; }
		[[nodiscard]] float p_b() const { return (float)blue() / 255.f; }
		[[nodiscard]] float p_a() const { return (float)alpha() / 255.f; }

		[[nodiscard]] uint8_t &red() const { return pd[0]; }
		[[nodiscard]] uint8_t &green() const { return pd[1]; }
		[[nodiscard]] uint8_t &blue() const { return pd[2]; }
		[[nodiscard]] uint8_t &alpha() const { return pd[3]; }

		uint8_t *pd;
	};

	void font_base::setup_textures(int off)
	{
		// pre-allocate packer
		auto nodes = new stbrp_node[max_atlas_width];

		stbrp_context ctx;
		stbrp_init_target(&ctx, max_atlas_width, max_atlas_height, nodes, max_atlas_width);

		// load glyphs
		int cur_atlas{};
		for (uint32_t i{mins}; i <= maxs; ++i)
		{
			// get glyph metrics and bmp
			int gw{}, gh{}, xo{}, yo{}, idx{};
			void *buf{};
			bool enable_off{};

			if (!setup_glyph((int)i, idx, gw, gh, xo, yo, &buf, enable_off))
				continue;

			// add this shit here as well to account for "effects"
			gw += off;
			gh += off;

			// fixup for positions
			const auto fix = std::clamp(off, 0, real_height > 10 ? 2 : 1);

			glyph_t g;
			g.id = idx;
			g.atlas = cur_atlas;
			g.codepoint = i;
			g.size = {(float)gw, (float)gh};
			g.offset = {(float)xo - fix, (float)yo + (enable_off ? (height * .75f) : 0.f) - fix};
			g.uv = {};
			g.temp_data = buf;
			g.rt.w = gw + 1; // add 1 pixel to size to avoid errors
			g.rt.h = gh + 1;

			// try packing
			stbrp_pack_rects(&ctx, &g.rt, 1);
			if (!g.rt.was_packed)
			{
				// re-init packer
				delete[] nodes;
				nodes = new stbrp_node[max_atlas_width];
				stbrp_init_target(&ctx, max_atlas_width, max_atlas_height, nodes, max_atlas_width);

				// inc atlas
				++cur_atlas;

				// pack once again, if failed - then we're fucked
				stbrp_pack_rects(&ctx, &g.rt, 1);
				if (!g.rt.was_packed)
					throw;
			}

			g.rt.w -= 1; // account for actual size
			g.rt.h -= 1;

			glyphs[i] = g;
		}

		// free nodes
		delete[] nodes;

		// set max used atlas and write atlases
		max_atlas = cur_atlas;
		for (int i{}; i < (int)max_atlas + 1; ++i)
			texture[i] = atlas_t{true, {}, nullptr, 0};

		// calc atlas sizes
		// not the best one but fuck it
		for (const auto &[_, g] : glyphs)
		{
			auto &tex = texture[g.atlas];
			tex.size.x = std::max(tex.size.x, float(g.rt.x + g.rt.w));
			tex.size.y = std::max(tex.size.y, float(g.rt.y + g.rt.h));
			tex.buf_size = (uint32_t)tex.size.x * (uint32_t)tex.size.y * 4;
		}
	}

	void font_base::blit_glyphs(int off)
	{
		// init textures
		std::vector<uint8_t *> texs;
		for (int i{}; i < (int)max_atlas + 1; ++i)
		{
			const auto buf = new uint8_t[texture[i].buf_size];
			memset(buf, 0, texture[i].buf_size);
			texs.emplace_back(buf);
		}

		// write glyphs
		for (auto &g : glyphs | std::views::values)
		{
			const auto &tex = texs[g.atlas];
			const auto &ca = texture[g.atlas];

			g.uv = {
				{(float)g.rt.x / ca.size.x, (float)g.rt.y / ca.size.y},
				{(float)(g.rt.x + g.rt.w + (int)!!off) / ca.size.x, (float)(g.rt.y + g.rt.h + (int)!!off) / ca.size.y}};

			// blit texture
			int x{g.rt.x + (int)!!off}, y{g.rt.y + (int)!!off};
			for (int k{}; k < g.rt.h - off; ++k)
			{
				for (int i{}; i < g.rt.w - off; ++i)
				{
					// write pixel (G -> BGRA)
					pixel px(&tex[((y + k) * (uint32_t)ca.size.x + x + i) * 4]);
					px.write(255, 255, 255, ((uint8_t *)g.temp_data)[k * (g.rt.w - off) + i]);
				}
			}

			g.size.x += !!off;
			g.size.y += !!off;

			// free texture
			free_glyph(g.temp_data);
		}

		// init adapter textures
		for (int i{}; i < (int)max_atlas + 1; ++i)
		{
			auto &ca = texture[i];
			auto &tex = texs[i];

			const auto w = (uint32_t)ca.size.x;
			const auto h = (uint32_t)ca.size.y;

			// apply effects
			if (flags & font_flag_outline)
				apply_effect_outline(tex, w, h);
			if (flags & font_flag_shadow)
				apply_effect_shadow(tex, w, h);

			ca.obj = adapter->create_texture((char *)tex, w, h, w * 4);
			delete[] tex;
		}
	}

	bool font::setup_glyph(int g, int &idx, int &gw, int &gh, int &xo, int &yo, void **buf, bool &off)
	{
		idx = stbtt_FindGlyphIndex(&f, g);
		if (!idx)
			return false;

		// get glyph metrics and bmp
		off = true;
		*buf = stbtt_GetGlyphBitmap(&f, scale, scale, idx, &gw, &gh, &xo, &yo);
		return !!(*buf);
	}

	void font::free_glyph(void *buf) { stbtt_FreeBitmap((uint8_t *)buf, nullptr); }

	void font::create()
	{
		if (!adapter && !draw.adapter)
			throw;
		if (!adapter)
			adapter = draw.adapter;
		if (has_textures())
			return;

		if (!(flags & font_flag_no_dpi))
			height = real_height * draw.scale;
		else
			height = real_height;

		if (is_from_file)
		{
			std::ifstream file(path, std::ios::binary);
			if (!file.is_open())
				return;

			file.seekg(0, std::ios::end);
			data_size = (size_t)file.tellg();
			file.seekg(0, std::ios::beg);

			data = malloc(data_size);
			file.read((char *)data, data_size);
			file.close();
		}

		if (!stbtt_InitFont(&f, (uint8_t *)data, 0))
		{
			if (is_from_file)
				free(data);
			return;
		}

		scale = stbtt_ScaleForPixelHeight(&f, height);
		line_gap = height * .25f;

		// extend size if effects are enabled
		const auto off = std::min(!!(flags & font_flag_outline) * 2 + !!(flags & font_flag_shadow), 2);

		// init font
		setup_textures(off);
		blit_glyphs(off);

		REN_DBG("font created");
	}

	void font::destroy()
	{
		if (!adapter || !has_textures())
			return;

		for (auto &tx : texture)
		{
			if (tx.obj)
				adapter->destroy_texture(tx.obj);
		}

		texture.fill({});
		glyphs = {};

		if (is_from_file)
			free(data);

		REN_DBG("font destroyed");
	}

	float font::get_kerning(uint32_t left, uint32_t right)
	{
		if (!adapter || !has_textures())
			return 0.f;

		// check if found in cache
		const auto key = (uint64_t)left << 32 | right;
		if (auto it = kerning.find(key); it != kerning.end())
			return it->second;

		// calculate kerning
		const auto k = (float)stbtt_GetGlyphKernAdvance(&f, (int)left, (int)right) * scale;
		kerning[key] = k < 0.f ? 0.f : k;
		return kerning[key] + kerning_gap;
	}

	void font_gdi::create()
	{
		if (!adapter && !draw.adapter)
			throw;
		if (!adapter)
			adapter = draw.adapter;
		if (has_textures())
			return;

		if (!(flags & font_flag_no_dpi))
			height = real_height * draw.scale;
		else
			height = real_height;

		device = CreateCompatibleDC(nullptr);
		if (!device)
			throw;

		SetMapMode(device, MM_TEXT);
		f = CreateFontA(
			(int)height, 0, 0, 0, 400, false, false, false, ANSI_CHARSET, OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS,
			!!(flags & font_flag_anti_alias) ? CLEARTYPE_QUALITY : NONANTIALIASED_QUALITY, DEFAULT_PITCH | FF_DONTCARE, name.c_str());

		if (!f)
		{
			DeleteDC(device);
			return;
		}

		SelectObject(device, f);
		SetTextAlign(device, TA_LEFT | TA_TOP | TA_UPDATECP);
		if (!GetTextMetricsA(device, &metric))
		{
			DeleteObject(f);
			DeleteDC(device);
			return;
		}

		const auto shadow_offset = flags & font_flag_shadow ? 1.f : 0.f;
		const auto outline_size = flags & font_flag_outline ? 1.f : 0.f;

		height = (float)metric.tmHeight + shadow_offset + outline_size * 2;

		bmp.biSize = sizeof(bmp);
		bmp.biWidth = long((float)metric.tmMaxCharWidth + outline_size * 2.f);
		bmp.biHeight = -long(height);
		bmp.biPlanes = 1;
		bmp.biBitCount = 32;
		bmp.biCompression = BI_RGB;

		dib = CreateDIBSection(device, (BITMAPINFO *)&bmp, DIB_RGB_COLORS, (void **)&rnd_buf, nullptr, 0);
		SelectObject(device, dib);
		SelectObject(device, f);

		const auto off = std::min(!!(flags & font_flag_outline) * 2 + !!(flags & font_flag_shadow), 2);

		// init font
		setup_textures(off);
		blit_glyphs(off);

		REN_DBG("gdi font created");
	}

	bool font_gdi::setup_glyph(int g, int &idx, int &gw, int &gh, int &xo, int &yo, void **buf, bool &off)
	{
		ABC abc;
		if (!codepoint_exists(g) || !GetCharABCWidthsW(device, g, g, &abc))
			return false;

		off = false;
		gw = abc.abcB;
		gh = (int)height;

		// alloc buffer
		const auto tmp_buf = new uint8_t[gw * gh];
		memset(tmp_buf, 0, gw * gh);

		SelectObject(device, f);
		SetBkColor(device, RGB(0, 0, 0));
		SetTextColor(device, RGB(255, 255, 255));
		SetBkMode(device, OPAQUE);
		MoveToEx(device, -abc.abcA, 0, nullptr);

		RECT tmp{0, 0, gw, gh};
		const auto wch = (wchar_t)g;
		ExtTextOutW(device, 0, 0, ETO_OPAQUE, &tmp, nullptr, 0, nullptr);
		ExtTextOutW(device, 0, 0, 0, nullptr, &wch, 1, nullptr);
		SetBkMode(device, TRANSPARENT);

		// blit
		for (uint32_t y{}; y < (uint32_t)gh; ++y)
		{
			for (uint32_t x{}; x < (uint32_t)gw; ++x)
			{
				const auto src = rnd_buf + (y * (uint32_t)bmp.biWidth + x) * 4;
				const auto dst = tmp_buf + (y * (uint32_t)gw + x);

				*dst = uint8_t((float)src[0] * 0.34f + (float)src[1] * 0.55f + (float)src[2] * 0.11f);
			}
		}

		idx = g;
		*buf = tmp_buf;
		return true;
	}

	void font_gdi::free_glyph(void *buf)
	{
		const auto tmp_buf = (uint8_t *)buf;
		delete[] tmp_buf;
	}

	void font_gdi::destroy()
	{
		if (!adapter || !has_textures())
			return;

		glyphs.clear();

		for (auto &tx : texture)
		{
			if (tx.obj)
				adapter->destroy_texture(tx.obj);
		}

		texture.fill({});

		DeleteDC(device);
		DeleteObject(f);
		DeleteObject(dib);

		REN_DBG("gdi font destroyed");
	}

	float font_gdi::get_kerning(uint32_t left, uint32_t right) { return kerning_gap; }

	bool font_gdi::codepoint_exists(uint32_t codepoint)
	{
		wchar_t str[] = {wchar_t(codepoint), 0};
		WORD tmp;
		return GetGlyphIndicesW(device, str, 1, &tmp, GGI_MARK_NONEXISTING_GLYPHS) != GDI_ERROR && tmp < 0xFFFF;
	}

	void font_base::apply_effect_outline(uint8_t *buf, uint32_t w, uint32_t h)
	{
		const auto scale_pixel = [](uint8_t *buf, uint32_t x, uint32_t y, uint32_t w, uint8_t a)
		{
			if (a < 2)
				return;

			uint8_t black[] = {0, 0, 0, 0};
			black[3] = a / 2;

			pixel b(black);
			for (auto j = y - 1; j < y + 2; j++)
			{
				for (auto i = x - 1; i < x + 2; i++)
				{
					pixel px(&buf[(j * w + i) * 4]);
					b.blend(px, px);
				}
			}
		};

		const auto temp_buf = new uint8_t[w * h * 4]{};
		for (uint32_t y{1}; y < h - 1; y++)
		{
			for (uint32_t x{1}; x < w - 1; x++)
			{
				pixel px(&buf[(y * w + x) * 4]);
				scale_pixel(temp_buf, x, y, w, px.alpha());
			}
		}

		for (uint32_t y{}; y < h; y++)
		{
			for (uint32_t x{}; x < w; x++)
			{
				pixel r_px(&buf[(y * w + x) * 4]);
				pixel s_px(&temp_buf[(y * w + x) * 4]);

				s_px.blend(r_px, r_px);
			}
		}

		delete[] temp_buf;
	}

	void font_base::apply_effect_shadow(uint8_t *buf, uint32_t w, uint32_t h)
	{
		auto temp_buf = new uint8_t[w * h * 4]{};
		for (uint32_t y{}; y < h - 1; y++)
		{
			for (uint32_t x{}; x < w - 1; x++)
			{
				pixel o_px(&buf[(y * w + x) * 4]);
				pixel n_px(&temp_buf[((y + 1) * w + (x + 1)) * 4]);

				n_px.write(0, 0, 0, o_px.alpha());
			}
		}

		for (uint32_t y{}; y < h; y++)
		{
			for (uint32_t x{}; x < w; x++)
			{
				pixel r_px(&buf[(y * w + x) * 4]);
				pixel s_px(&temp_buf[(y * w + x) * 4]);

				s_px.blend(r_px, r_px);
			}
		}

		delete[] temp_buf;
	}

	vec2 font_base::get_text_size(const std::string &text, bool skip_scaling)
	{
		vec2 off{}, sz{0.f, height};
		uint32_t last_c{};
		for (int i{}; i < (int)text.size();)
		{
			if (text[i] == ' ' || text[i] == '\t')
			{
				off.x += height * (text[i] == ' ' ? .25f : 1.f);
				sz.x = std::max(sz.x, off.x);
				i++;
				last_c = 0;
				continue;
			}

			if (text[i] == '\n')
			{
				sz.y += height + line_gap;
				off.x = 0.f;
				i++;
				last_c = 0;
				continue;
			}

			uint32_t cp;
			i += utf8_decode(text.data() + i, cp);

			const auto &gl = get_glyph(cp);
			const auto k = get_kerning(last_c, cp);

			off.x += gl.size.x + k + gl.offset.x;
			sz.x = std::max(sz.x, off.x);
			last_c = cp;
		}

		if (flags & font_flag_no_dpi)
			skip_scaling = true;

		return skip_scaling ? sz : (sz / draw.scale);
	}

	std::string font_base::wrap_text(const std::string &text, float width)
	{
		if (text.empty())
			return text;

		// split text into words
		std::vector<std::string> words;
		std::string word;

		for (int i{}; i < (int)text.size();)
		{
			if (text[i] == ' ' || text[i] == '\t' || text[i] == '\n')
			{
				if (text[i] == '\n')
					word += '\n';

				words.push_back(word);
				word.clear();
				i++;
				continue;
			}

			uint32_t cp;
			i += utf8_decode(text.data() + i, cp);
			word += utf8_encode(cp);
		}

		if (!word.empty())
			words.push_back(word);

		// wrap words
		float w{};
		std::string wrapped;

		for (const auto &wr : words)
		{
			const auto sz = get_text_size(wr);
			if (w + sz.x > width)
			{
				wrapped += '\n';
				w = 0.f;
			}
			else
				w += sz.x;

			wrapped += ' ' + wr;
		}

		return wrapped.substr(1);
	}
} // namespace evo::ren

#pragma pop_macro("min")
#pragma pop_macro("max")
