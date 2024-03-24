#ifndef REN_LINKER_FONT_H
#define REN_LINKER_FONT_H

#include <array>
#include <memory>
#include <ren/adapter.h>
#include <ren/managed.h>
#include <ren/types/pos.h>
#include <string>
#include <unordered_map>

#include <lib/rectpack.h>
#include <lib/truetype.h>
#include <ren/macros.h>

namespace evo::ren
{
	inline constexpr auto max_atlas_count = 64;
	inline constexpr auto max_atlas_width = 4096;
	inline constexpr auto max_atlas_height = 4096;

	struct glyph_t
	{
		uint32_t codepoint;
		int id, atlas;
		vec2 size, offset;
		rect uv;

		stbrp_rect rt{};
		void *temp_data{};
	};

	struct atlas_t
	{
		bool exists{};
		vec2 size{};
		void *obj{};
		uint32_t buf_size{};
	};

	enum font_flags
	{
		font_flag_shadow = 1 << 0,
		font_flag_outline = 1 << 1,
		font_flag_anti_alias = 1 << 2,
		font_flag_no_dpi = 1 << 3,
	};

	class font_base : public std::enable_shared_from_this<font_base>, public managed
	{
	public:
		void create() override {}
		void destroy() override {}
		void on_begin_frame() override {}
		void on_end_frame() override {}

		virtual float get_kerning(uint32_t left, uint32_t right) = 0;

		vec2 get_text_size(const std::string &text, bool skip_scaling = false);
		std::string wrap_text(const std::string &text, float width);

		const glyph_t &get_glyph(uint32_t codepoint) const
		{
			if (auto it = glyphs.find(codepoint); it != glyphs.end())
				return it->second;
			return fallback;
		}

		template <typename T>
		std::shared_ptr<T> as()
		{
			return std::static_pointer_cast<T>(shared_from_this());
		}

		std::shared_ptr<adapter> adapter;

		float height{}, line_gap{}, kerning_gap{};
		uint32_t flags{}, mins{}, maxs{}, max_atlas{};
		std::array<atlas_t, max_atlas_count> texture{};
		std::unordered_map<uint32_t, glyph_t> glyphs{};
		glyph_t fallback{};

	protected:
		float real_height{};
		std::unordered_map<uint64_t, float> kerning{};

		bool has_textures() const
		{
			return std::ranges::find_if(texture, [](const atlas_t &t) { return t.obj != nullptr; }) != texture.end();
		}

		virtual bool setup_glyph(int g, int &idx, int &gw, int &gh, int &xo, int &yo, void **buf, bool &off) = 0;
		virtual void free_glyph(void *buf) = 0;

		void setup_textures(int off = 0);
		void blit_glyphs(int off = 0);

		static void apply_effect_shadow(uint8_t *buf, uint32_t w, uint32_t h);
		static void apply_effect_outline(uint8_t *buf, uint32_t w, uint32_t h);
	};

	class font : public font_base
	{
	public:
		font(const char *path, float size, uint32_t fl = 0, uint32_t mi = 0, uint32_t ma = 255) : is_from_file(true), path(path)
		{
			REN_DBG_FMT("font allocated (path %s, size %.0f, flags %d, min %d, max %d)", path, size, fl, mi, ma);
			height = real_height = size;
			flags = fl;
			mins = mi;
			maxs = ma;
		}

		font(void *mem, size_t sz, float size, uint32_t fl = 0, uint32_t mi = 0, uint32_t ma = 255) : data(mem), data_size(sz)
		{
			REN_DBG_FMT("font allocated (mem %p : %zull, size %.0f, flags %d, min %d, max %d)", mem, sz, size, fl, mi, ma);
			height = real_height = size;
			flags = fl;
			mins = mi;
			maxs = ma;
		}

		~font() { REN_DBG("font freed"); }

		void create() override;
		void destroy() override;

		float get_kerning(uint32_t left, uint32_t right) override;

	protected:
		bool setup_glyph(int g, int &idx, int &gw, int &gh, int &xo, int &yo, void **buf, bool &off) override;
		void free_glyph(void *buf) override;

		bool is_from_file{};
		std::string path;
		void *data{};
		size_t data_size{};

		float scale{};
		stbtt_fontinfo f{};
	};

	class font_gdi : public font_base
	{
	public:
		font_gdi(const char *name, float size, uint32_t fl = 0, uint32_t mi = 0, uint32_t ma = 255) : name(name)
		{
			REN_DBG_FMT("gdi font allocated (name %s, size %.0f, flags %d, min %d, max %d)", name, size, fl, mi, ma);
			height = real_height = size;
			flags = fl;
			mins = mi;
			maxs = ma;
		}

		~font_gdi() { REN_DBG("gdi font freed"); }

		void create() override;
		void destroy() override;

		float get_kerning(uint32_t left, uint32_t right) override;

	protected:
		bool setup_glyph(int g, int &idx, int &gw, int &gh, int &xo, int &yo, void **buf, bool &off) override;
		void free_glyph(void *buf) override;
		bool codepoint_exists(uint32_t codepoint);

		std::string name;
		HDC device{};
		HFONT f{};
		TEXTMETRICA metric{};
		HBITMAP dib{};
		uint8_t *rnd_buf{};
		BITMAPINFOHEADER bmp{};
	};
} // namespace evo::ren

#endif // REN_LINKER_FONT_H
