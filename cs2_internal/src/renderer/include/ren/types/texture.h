#ifndef REN_LINKER_TEXTURE_H
#define REN_LINKER_TEXTURE_H

#include <ren/adapter.h>
#include <ren/managed.h>
#include <ren/types/pos.h>
#include <string>

namespace evo::ren
{
	class texture : public managed, public std::enable_shared_from_this<texture>
	{
	public:
		enum source
		{
			file,
			mem,
			rgba
		};

		explicit texture(const char *path) : src(file), path(path) { }
		texture(void *data, uint32_t sz) : src(mem), data(data), size(sz) {  }
		texture(void *data, uint32_t w, uint32_t h, uint32_t p) : src(rgba), data(data), width(w), height(h), pitch(p)
		{
			
		}

		~texture() { }

		void create() override;
		void destroy() override;
		void on_begin_frame() override {}
		void on_end_frame() override {}

		template <typename T>
		std::shared_ptr<T> as()
		{
			return std::static_pointer_cast<T>(shared_from_this());
		}

		[[nodiscard]] vec2 get_size() const { return {(float)width, (float)height}; }

		std::shared_ptr<adapter> adapter;
		void *obj{};

		bool is_animated{};

	protected:
		source src;
		std::string path;
		void *data{};
		uint32_t width{}, height{}, pitch{}, size{};
	};

	// svg, out, w, h
	using svg_rasterize_fn_t = bool (*)(const std::string &, std::vector<uint8_t> &, uint32_t &, uint32_t &);

	// svg, w, h
	using svg_query_size_fn_t = bool (*)(const std::string &, uint32_t &, uint32_t &);

	inline svg_rasterize_fn_t svg_rasterize{};
	inline svg_query_size_fn_t svg_query_size{};

	class svg_texture : public texture
	{
	public:
		explicit svg_texture(const std::string &sv, float h = 0.f) : svg(sv), texture(nullptr, 0)
		{
			if (!svg_query_size || !svg_rasterize)
				throw;

			if (!svg.starts_with("<?xml"))
				svg = "<?xml version=\"1.0\" encoding=\"utf-8\"?>" + svg;

			src = texture::rgba;
			height = (uint32_t)h;
			if (!svg_query_size(svg, real_w, real_h))
				throw;

			w2h = (float)real_w / (float)real_h;
		}

		~svg_texture() {  }

		void create() override;
		void destroy() override;

		// will require recreation
		void set_target_height(float h) { height = (uint32_t)h; }

	private:
		std::string svg;
		std::vector<uint8_t> raw;
		uint32_t real_w{}, real_h{};
		float w2h{};
	};
} // namespace evo::ren

#endif // REN_LINKER_TEXTURE_H
