#ifndef REN_LINKER_LAYER_H
#define REN_LINKER_LAYER_H

#include <memory>
#include <optional>

#include <ren/macros.h>
#include <ren/types/color.h>
#include <ren/types/command.h>
#include <ren/types/font.h>
#include <ren/types/pos.h>
#include <ren/types/vertex.h>

#include <ren/buffer.h>
#include <ren/buffers/cmd_buffer.h>

namespace evo::ren
{
	enum outline_mode
	{
		outline_inset,
		outline_outset,
		outline_center,
	};

	enum rounding
	{
		rnd_tl = 1 << 0,
		rnd_tr = 1 << 1,
		rnd_bl = 1 << 2,
		rnd_br = 1 << 3,
		rnd_t = rnd_tl | rnd_tr,
		rnd_b = rnd_bl | rnd_br,
		rnd_l = rnd_tl | rnd_bl,
		rnd_r = rnd_tr | rnd_br,
		rnd_all = rnd_tl | rnd_tr | rnd_br | rnd_bl,
	};

	enum glow_parts
	{
		gp_tl = 1 << 0,
		gp_tr = 1 << 1,
		gp_br = 1 << 2,
		gp_bl = 1 << 3,
		gp_t = 1 << 4,
		gp_r = 1 << 5,
		gp_b = 1 << 6,
		gp_l = 1 << 7,
		gp_all_left = gp_tl | gp_bl | gp_l,
		gp_all_right = gp_tr | gp_br | gp_r,
		gp_all_top = gp_tl | gp_tr | gp_t,
		gp_all_bottom = gp_bl | gp_br | gp_b,
		gp_all = 0xFFFFFFFF,
		gp_no_bottom = gp_all & ~gp_b,
		gp_no_top = gp_all & ~gp_t,
	};

	enum text_alignment
	{
		align_left,
		align_center,
		align_right,
		align_top = align_left,
		align_bottom = align_right,
	};

	enum shadow_dir
	{
		shadow_up,
		shadow_down,
		shadow_left,
		shadow_right,
	};

	struct text_params
	{
		text_alignment v, h;
		text_alignment line;

		static text_params with_v(text_alignment v) { return {v, align_left, align_left}; }

		static text_params with_h(text_alignment h) { return {align_top, h, align_left}; }

		static text_params with_line(text_alignment line) { return {align_top, align_left, line}; }

		static text_params with_vh(text_alignment v, text_alignment h) { return {v, h, align_left}; }

		static text_params with_vline(text_alignment v, text_alignment line) { return {v, align_left, line}; }

		static text_params with_hline(text_alignment h, text_alignment line) { return {align_top, h, line}; }

		static text_params with_vhline(text_alignment v, text_alignment h, text_alignment line) { return {v, h, line}; }
	};

	class layer
	{
	public:
		layer(const std::shared_ptr<buffer_base> &v, const std::shared_ptr<buffer_base> &i)
		{
			REN_DBG("layer allocated");

			vb = v;
			ib = i;
			cb = std::make_shared<cmd_buffer>();
			cb_deferred = std::make_shared<cmd_buffer>();
		}

		~layer()
		{
			destroy();
			REN_DBG("layer freed");
		}

		void create() const
		{
			REN_DBG("layer is creating buffers");
			vb->create(vb->size ? vb->size : 65535);
			ib->create(ib->size ? ib->size : 65535);
			cb->create(cb->size ? cb->size : 65535);

			if (is_deferred)
				cb_deferred->create(cb_deferred->size ? cb_deferred->size : 65535);
		}

		void destroy() const
		{
			REN_DBG("layer is destroying buffers");
			vb->destroy();
			ib->destroy();
			cb->destroy();

			if (is_deferred)
				cb_deferred->destroy();
		}

		void lock() const
		{
			if (skip_map)
				return;

			cb->is_deferred = vb->is_deferred = ib->is_deferred = is_deferred;
			cb->lock();
			vb->lock();
			ib->lock();
		}

		void unlock() const
		{
			if (skip_map)
				return;

			cb->is_deferred = vb->is_deferred = ib->is_deferred = is_deferred;
			vb->unlock();
			ib->unlock();
			cb->unlock();
		}

		void reset(bool full_cycle = false)
		{
			if (ignore_flush || skip_map)
				return;

			g = {};
			vb->reset(full_cycle);
			ib->reset(full_cycle);
			cb->reset(full_cycle);
		}

		void swap(const std::shared_ptr<layer> &other)
		{
			std::swap(ignore_flush, other->ignore_flush);
			std::swap(g, other->g);
			std::swap(font, other->font);
			vb->swap(other->vb);
			ib->swap(other->ib);
			cb->swap(other->cb);
		}

		// filled shapes
		void add_triangle_filled(vec2 a, vec2 b, vec2 c, color col);
		void add_rect_filled(const rect &r, color c);
		void add_circle_filled(vec2 center, float radius, color c, int segments = 36, float fill = 1.f);

		// filled inverse shapes
		void add_q_circle_filled_inverse(const rect &r, color c, int segments = 36);

		// filled multicolor shapes
		void add_triangle_filled_multicolor(vec2 a, vec2 b, vec2 c, std::array<color, 3> cols);
		void add_rect_filled_multicolor(const rect &r, std::array<color, 4> cols);
		void add_circle_filled_multicolor(vec2 center, float radius, std::array<color, 2> cols, int segments = 36, float fill = 1.f);
		void add_shadow_line(const rect &r, shadow_dir dir, float a = .25f);
		void add_shadow_rect(const rect &r, float radius, bool bg = true, float a = .25f);
		void add_glow(const rect &r, float radius, color c, glow_parts parts = gp_all);

		// filled rounded shapes
		void add_rect_filled_rounded(const rect &r, color c, float amount, rounding rnd = rnd_all);

		// stroked shapes
		void add_triangle(const vec2 &a, const vec2 &b, const vec2 &c, color col, float thickness = 1.f, outline_mode mode = outline_inset);
		void add_rect(const rect &r, color c, float thickness = 1.f, outline_mode mode = outline_inset);
		void add_circle(vec2 center, float radius, color c, int segments = 36, float fill = 1.f, float thickness = 1.f, outline_mode mode = outline_inset);
		void add_line(const vec2 &a, const vec2 &b, color c, float thickness = 1.f);
		void add_line_multicolor(const vec2 &a, const vec2 &b, color c, color c2, float thickness = 1.f);

		// stroked rounded shapes
		void add_rect_rounded(const rect &r, color c, float amount = 0.f, rounding rnd = rnd_all, float thickness = 1.f, outline_mode mode = outline_inset);

		// other
		void add_text(vec2 p, const std::string &text, color c, std::optional<text_params> params = {});
		void add_fake_rounding(const rect &r, const color &c, float amount, rounding rnd = rnd_all);

		void override_clip_rect(const std::optional<rect> &r, bool intersect = true)
		{
			if (r)
			{
				if (g.clip_rect.has_value())
					g.clip_rect = g.clip_rect->intersect(*r);
				else
					g.clip_rect = r;
			}
			else
				g.clip_rect = r;
		}

		command g; // global parameters
		std::shared_ptr<font_base> font; // font

		std::shared_ptr<buffer_base> vb; // vertex buffer
		std::shared_ptr<buffer_base> ib; // index buffer
		std::shared_ptr<buffer_base> cb; // command buffer
		std::shared_ptr<buffer_base> cb_deferred; // deferred command buffer

		bool ignore_flush = false;
		bool skip_dpi = false;
		bool skip_rounding = false;
		bool skip_map = false;
		bool is_deferred = false;

		std::atomic_bool is_deferred_ready;
		std::atomic_bool deferred_dirty;

	protected:
		int font_cur{};
		bool ignore_checks : 1 = false;
	};
} // namespace evo::ren

#endif // REN_LINKER_LAYER_H
