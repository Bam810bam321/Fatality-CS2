#include <ren/layer.h>
#include <ren/misc.h>
#include <ren/renderer.h>

namespace evo::ren
{
	void layer::add_triangle_filled(vec2 a, vec2 b, vec2 c, color col)
	{
		if (g.alpha == 0.f || col.value.a == 0.f)
			return;

		const auto uv = g.uv_rect.value_or(rect{0.f, 0.f, 1.f, 1.f});
		if (g.alpha != 1.f)
			col = col.mod_a(g.alpha);
		if (g.rotation != 0.f)
		{
			const auto center = (a + b + c) / 3.f;
			const auto rot = deg2rad(g.rotation);
			a = rotate_point(rot, a, center);
			b = rotate_point(rot, b, center);
			c = rotate_point(rot, c, center);
		}

		vb->write(vertex{a.x, a.y, 0.f, col.abgr(), uv.mins.x + uv.center().x, uv.mins.y, skip_dpi});
		vb->write(vertex{b.x, b.y, 0.f, col.abgr(), uv.maxs.x, uv.maxs.y, skip_dpi});
		vb->write(vertex{c.x, c.y, 0.f, col.abgr(), uv.mins.x, uv.maxs.y, skip_dpi});

		ib->write<uint16_t>(0);
		ib->write<uint16_t>(1);
		ib->write<uint16_t>(2);

		g.ignore_scaling = skip_dpi;
		g.ic = 3;
		g.vc = 3;
		cb->write(g);
	}

	void layer::add_rect_filled(const rect &r, color c)
	{
		if (g.alpha == 0.f || c.value.a == 0.f)
			return;
		vec2 tl{r.tl()}, tr{r.tr()}, bl{r.bl()}, br{r.br()};

		const auto uv = g.uv_rect.value_or(rect{0.f, 0.f, 1.f, 1.f});
		if (g.alpha != 1.f)
			c = c.mod_a(g.alpha);
		if (g.rotation != 0.f)
		{
			const auto rot = deg2rad(g.rotation);
			const auto center = r.center();
			tl = rotate_point(rot, tl, center);
			tr = rotate_point(rot, tr, center);
			br = rotate_point(rot, br, center);
			bl = rotate_point(rot, bl, center);
		}

		if (!skip_rounding)
		{
			vb->write(vertex{tl.x, tl.y, 0.f, c.abgr(), uv.mins.x, uv.mins.y, skip_dpi});
			vb->write(vertex{tr.x, tr.y, 0.f, c.abgr(), uv.maxs.x, uv.mins.y, skip_dpi});
			vb->write(vertex{br.x, br.y, 0.f, c.abgr(), uv.maxs.x, uv.maxs.y, skip_dpi});
			vb->write(vertex{bl.x, bl.y, 0.f, c.abgr(), uv.mins.x, uv.maxs.y, skip_dpi});
		}
		else
		{
			vb->write(vertex_unfloored{tl.x, tl.y, 0.f, c.abgr(), uv.mins.x, uv.mins.y, skip_dpi});
			vb->write(vertex_unfloored{tr.x, tr.y, 0.f, c.abgr(), uv.maxs.x, uv.mins.y, skip_dpi});
			vb->write(vertex_unfloored{br.x, br.y, 0.f, c.abgr(), uv.maxs.x, uv.maxs.y, skip_dpi});
			vb->write(vertex_unfloored{bl.x, bl.y, 0.f, c.abgr(), uv.mins.x, uv.maxs.y, skip_dpi});
		}

		ib->write<uint16_t>(0);
		ib->write<uint16_t>(1);
		ib->write<uint16_t>(2);
		ib->write<uint16_t>(0);
		ib->write<uint16_t>(2);
		ib->write<uint16_t>(3);

		g.ignore_scaling = skip_dpi;
		g.ic = 6;
		g.vc = 4;
		cb->write(g);
	}

	void layer::add_circle_filled(vec2 center, float radius, color c, int segments, float fill)
	{
		if (!ignore_checks)
			if (g.alpha == 0.f || c.value.a == 0.f || radius == 0.f || !segments || fill == 0.f)
				return;

		center = center.floor();

		const auto uv = g.uv_rect.value_or(rect{0.f, 0.f, 1.f, 1.f});
		if (!ignore_checks && g.alpha != 1.f)
			c = c.mod_a(g.alpha);

		g.vc = 1;
		g.ic = 0;

		const auto seg_scaled{(float)segments * draw.scale};
		const auto delta = (pi * fill) * 2.f / seg_scaled;
		vb->write(vertex{center.x, center.y, 0.f, c.abgr(), uv.center().x, uv.center().y, skip_dpi});

		float offset{delta * .5f + deg2rad(g.rotation)};
		int i{1};
		for (int k{}; k < seg_scaled; ++k)
		{
			const auto off_l = offset - delta * .5f;
			const auto off_r = offset + delta * .5f;
			const auto a = center + vec2{radius * cosf(off_l), radius * sinf(off_l)};
			const auto b = center + vec2{radius * cosf(off_r), radius * sinf(off_r)};

			const auto uv_a = uv.circle(off_l);
			const auto uv_b = uv.circle(off_r);
			vb->write(vertex_unfloored{a.x, a.y, 0.f, c.abgr(), uv_a.x, uv_a.y, skip_dpi});
			vb->write(vertex_unfloored{b.x, b.y, 0.f, c.abgr(), uv_b.x, uv_b.y, skip_dpi});
			ib->write<uint16_t>(0);
			ib->write<uint16_t>(i++);
			ib->write<uint16_t>(i++);

			offset += delta;
			g.vc += 2;
			g.ic += 3;
		}

		g.ignore_scaling = skip_dpi;
		cb->write(g);
	}

	void layer::add_q_circle_filled_inverse(const rect &r, color c, int segments)
	{
		if (g.alpha == 0.f || c.value.a == 0.f || !segments)
			return;

		// no uv support for this one. Yet.

		vec2 tl{r.tl()}, tr{r.tr()}, bl{r.bl()}, br{r.br()};
		if (g.alpha != 1.f)
			c = c.mod_a(g.alpha);
		if (g.rotation != 0.f)
		{
			const auto rot = deg2rad(g.rotation);
			const auto center = r.center();
			tl = rotate_point(rot, tl, center);
			tr = rotate_point(rot, tr, center);
			br = rotate_point(rot, br, center);
			bl = rotate_point(rot, bl, center);
		}

		g.vc = 1;
		g.ic = 0;

		// must always have an anchor. let it be top left
		vb->write(vertex{tl.x, tl.y, 0.f, c.abgr(), .0f, .0f, skip_dpi});

		// begin rendering quarter of the circle. going from bl to tr. br will be circle anchor.
		const auto seg_scaled{(float)segments * draw.scale};
		const auto delta = h_pi / seg_scaled;
		const auto radius = (r.width() + r.height()) * .5f;

		float offset{delta * .5f + deg2rad(g.rotation) - pi};
		int i{1};
		for (int k{}; k < seg_scaled; ++k)
		{
			const auto off_l = offset - delta * .5f;
			const auto off_r = offset + delta * .5f;
			const auto a = br + vec2{radius * cosf(off_l), radius * sinf(off_l)};
			const auto b = br + vec2{radius * cosf(off_r), radius * sinf(off_r)};

			vb->write(vertex_unfloored{a.x, a.y, 0.f, c.abgr(), 0.f, 0.f, skip_dpi});
			vb->write(vertex_unfloored{b.x, b.y, 0.f, c.abgr(), 0.f, 0.f, skip_dpi});
			ib->write<uint16_t>(0);
			ib->write<uint16_t>((short)i++);
			ib->write<uint16_t>((short)i++);

			offset += delta;
			g.vc += 2;
			g.ic += 3;
		}

		g.ignore_scaling = skip_dpi;
		cb->write(g);
	}

	void layer::add_triangle_filled_multicolor(vec2 a, vec2 b, vec2 c, std::array<color, 3> cols)
	{
		if (g.alpha == 0.f || is_full_transparent(cols))
			return;

		const auto uv = g.uv_rect.value_or(rect{0.f, 0.f, 1.f, 1.f});
		if (g.alpha != 1.f)
			for (auto &col : cols)
				col = col.mod_a(g.alpha);
		if (g.rotation != 0.f)
		{
			const auto rot = deg2rad(g.rotation);
			const auto center = (a + b + c) / 3.f;
			a = rotate_point(rot, a, center);
			b = rotate_point(rot, b, center);
			c = rotate_point(rot, c, center);
		}

		vb->write(vertex{a.x, a.y, 0.f, cols[0].abgr(), uv.mins.x + uv.center().x, uv.mins.y, skip_dpi});
		vb->write(vertex{b.x, b.y, 0.f, cols[1].abgr(), uv.maxs.x, uv.maxs.y, skip_dpi});
		vb->write(vertex{c.x, c.y, 0.f, cols[2].abgr(), uv.mins.x, uv.maxs.y, skip_dpi});

		ib->write<uint16_t>(0);
		ib->write<uint16_t>(1);
		ib->write<uint16_t>(2);

		g.ignore_scaling = skip_dpi;
		g.ic = 3;
		g.vc = 3;
		cb->write(g);
	}

	void layer::add_rect_filled_multicolor(const rect &r, std::array<color, 4> cols)
	{
		if (g.alpha == 0.f || is_full_transparent(cols))
			return;
		vec2 tl{r.tl()}, tr{r.tr()}, bl{r.bl()}, br{r.br()};

		const auto uv = g.uv_rect.value_or(rect{0.f, 0.f, 1.f, 1.f});
		if (g.alpha != 1.f)
			for (auto &col : cols)
				col = col.mod_a(g.alpha);
		if (g.rotation != 0.f)
		{
			const auto rot = deg2rad(g.rotation);
			const auto center = r.center();
			tl = rotate_point(rot, tl, center);
			tr = rotate_point(rot, tr, center);
			br = rotate_point(rot, br, center);
			bl = rotate_point(rot, bl, center);
		}

		vb->write(vertex{tl.x, tl.y, 0.f, cols[0].abgr(), uv.mins.x, uv.mins.y, skip_dpi});
		vb->write(vertex{tr.x, tr.y, 0.f, cols[1].abgr(), uv.maxs.x, uv.mins.y, skip_dpi});
		vb->write(vertex{br.x, br.y, 0.f, cols[2].abgr(), uv.maxs.x, uv.maxs.y, skip_dpi});
		vb->write(vertex{bl.x, bl.y, 0.f, cols[3].abgr(), uv.mins.x, uv.maxs.y, skip_dpi});

		ib->write<uint16_t>(0);
		ib->write<uint16_t>(1);
		ib->write<uint16_t>(2);
		ib->write<uint16_t>(0);
		ib->write<uint16_t>(2);
		ib->write<uint16_t>(3);

		g.ignore_scaling = skip_dpi;
		g.ic = 6;
		g.vc = 4;
		cb->write(g);
	}

	void layer::add_circle_filled_multicolor(vec2 center, float radius, std::array<color, 2> cols, int segments, float fill)
	{
		if (g.alpha == 0.f || is_full_transparent(cols) || radius == 0.f || !segments || fill == 0.f)
			return;

		center = center.floor();

		const auto uv = g.uv_rect.value_or(rect{0.f, 0.f, 1.f, 1.f});
		if (g.alpha != 1.f)
			for (auto &c : cols)
				c = c.mod_a(g.alpha);

		g.vc = 1;
		g.ic = 0;

		const auto seg_scaled{(float)segments * draw.scale};
		const auto delta = (pi * fill) * 2.f / seg_scaled;
		vb->write(vertex{center.x, center.y, 0.f, cols[0].abgr(), uv.center().x, uv.center().y, skip_dpi});

		float offset{delta * .5f + deg2rad(g.rotation)};
		int i{1};
		for (int k{}; k < seg_scaled; ++k)
		{
			const auto off_l = offset - delta * .5f;
			const auto off_r = offset + delta * .5f;
			const auto a = center + vec2{radius * cosf(off_l), radius * sinf(off_l)};
			const auto b = center + vec2{radius * cosf(off_r), radius * sinf(off_r)};

			const auto uv_a = uv.circle(off_l);
			const auto uv_b = uv.circle(off_r);
			vb->write(vertex_unfloored{a.x, a.y, 0.f, cols[1].abgr(), uv_a.x, uv_a.y, skip_dpi});
			vb->write(vertex_unfloored{b.x, b.y, 0.f, cols[1].abgr(), uv_b.x, uv_b.y, skip_dpi});
			ib->write<uint16_t>(0);
			ib->write<uint16_t>(i++);
			ib->write<uint16_t>(i++);

			offset += delta;
			g.vc += 2;
			g.ic += 3;
		}

		g.ignore_scaling = skip_dpi;
		cb->write(g);
	}

	void layer::add_shadow_line(const rect &r, shadow_dir dir, float a)
	{
		switch (dir)
		{
			case shadow_up:
				add_rect_filled_multicolor(
					r,
					{
						color{},
						color{},
						color::black().mod_a(a),
						color::black().mod_a(a),
					});
				break;
			case shadow_down:
				add_rect_filled_multicolor(
					r,
					{
						color::black().mod_a(a),
						color::black().mod_a(a),
						color{},
						color{},
					});
				break;
			case shadow_left:
				add_rect_filled_multicolor(
					r,
					{
						color::black().mod_a(a),
						color{},
						color{},
						color::black().mod_a(a),
					});
				break;
			case shadow_right:
				add_rect_filled_multicolor(
					r,
					{
						color{},
						color::black().mod_a(a),
						color::black().mod_a(a),
						color{},
					});
				break;
		}
	}

	void layer::add_shadow_rect(const rect &r, float radius, bool bg, float a)
	{
		if (bg)
			add_rect_filled(r, color(0.f, 0.f, 0.f, a));

		add_rect_filled_multicolor(
			rect(r.mins - vec2(radius, 0.f), r.mins + vec2(0.f, r.height())),
			{color(0.f, 0.f, 0.f, 0.f), color(0.f, 0.f, 0.f, a), color(0.f, 0.f, 0.f, a), color(0.f, 0.f, 0.f, 0.f)});
		add_rect_filled_multicolor(
			rect(r.mins + vec2(r.width(), 0.f), r.mins + vec2(r.width() + radius, r.height())),
			{color(0.f, 0.f, 0.f, a), color(0.f, 0.f, 0.f, 0.f), color(0.f, 0.f, 0.f, 0.f), color(0.f, 0.f, 0.f, a)});
		add_rect_filled_multicolor(
			rect(r.mins - vec2(0.f, radius), r.mins + vec2(r.width(), 0.f)),
			{color(0.f, 0.f, 0.f, 0.f), color(0.f, 0.f, 0.f, 0.f), color(0.f, 0.f, 0.f, a), color(0.f, 0.f, 0.f, a)});
		add_rect_filled_multicolor(
			rect(r.maxs - vec2(r.width(), 0.f), r.maxs + vec2(0.f, radius)),
			{color(0.f, 0.f, 0.f, a), color(0.f, 0.f, 0.f, a), color(0.f, 0.f, 0.f, 0.f), color(0.f, 0.f, 0.f, 0.f)});

		const auto old_rot = g.rotation;
		g.rotation = 180.f;
		add_circle_filled_multicolor(r.tl(), radius, {color(0.f, 0.f, 0.f, a), color::black_transparent()}, 4, 0.25f);

		g.rotation = 270.f;
		add_circle_filled_multicolor(r.tr(), radius, {color(0.f, 0.f, 0.f, a), color::black_transparent()}, 4, 0.25f);

		g.rotation = 0.f;
		add_circle_filled_multicolor(r.br(), radius, {color(0.f, 0.f, 0.f, a), color::black_transparent()}, 4, 0.25f);

		g.rotation = 90.f;
		add_circle_filled_multicolor(r.bl(), radius, {color(0.f, 0.f, 0.f, a), color::black_transparent()}, 4, 0.25f);

		g.rotation = old_rot;
	}

	void layer::add_rect_filled_rounded(const rect &r, color c, float amount, rounding rnd)
	{
		if (g.alpha == 0.f || c.value.a == 0.f)
			return;
		if (amount == 0.f || (int)rnd == 0)
			return add_rect_filled(r, c);

		amount = min(amount, min(r.width(), r.height()) * .5f);
		if (r.width() == r.height() && amount == r.width() * .5f && rnd == rnd_all)
			return add_circle_filled(r.center(), amount, c);

		vec2 tl{r.tl()}, tr{r.tr()}, bl{r.bl()}, br{r.br()};

		const auto uv = g.uv_rect.value_or(rect{0.f, 0.f, 1.f, 1.f});
		if (g.alpha != 1.f)
			c = c.mod_a(g.alpha);

		// center point
		vb->write(vertex{r.center().x, r.center().y, 0.f, c.abgr(), uv.center().x, uv.center().y, skip_dpi});

		int i{}, v{};
		const auto rtl = rnd & rnd_tl;
		const auto rtr = rnd & rnd_tr;
		const auto rbl = rnd & rnd_bl;
		const auto rbr = rnd & rnd_br;

		// corners
		if (rtl)
		{
			vb->write(vertex{tl.x + amount, tl.y, 0.f, c.abgr(), uv.mins.x + amount / r.width() * uv.width(), uv.mins.y, skip_dpi});
			vb->write(vertex{tl.x, tl.y + amount, 0.f, c.abgr(), uv.mins.x, uv.mins.y + amount / r.height() * uv.height(), skip_dpi});
			vb->write(vertex{
				tl.x + amount, tl.y + amount, 0.f, c.abgr(), uv.mins.x + amount / r.width() * uv.width(), uv.mins.y + amount / r.height() * uv.height(), skip_dpi});

			ib->write<uint16_t>(0);
			ib->write<uint16_t>(1);
			ib->write<uint16_t>(3);
			ib->write<uint16_t>(0);
			ib->write<uint16_t>(2);
			ib->write<uint16_t>(3);
			i += 6;
			v += 3;
		}

		if (rtr)
		{
			vb->write(vertex{tr.x - amount, tr.y, 0.f, c.abgr(), uv.mins.x + (r.width() - amount) / r.width() * uv.width(), uv.mins.y, skip_dpi});
			vb->write(vertex{tr.x, tr.y + amount, 0.f, c.abgr(), uv.maxs.x, uv.mins.y + amount / r.height() * uv.height(), skip_dpi});
			vb->write(vertex{
				tr.x - amount, tr.y + amount, 0.f, c.abgr(), uv.mins.x + (r.width() - amount) / r.width() * uv.width(), uv.mins.y + amount / r.height() * uv.height(),
				skip_dpi});

			ib->write<uint16_t>(0);
			ib->write<uint16_t>(v + 1);
			ib->write<uint16_t>(v + 3);
			ib->write<uint16_t>(0);
			ib->write<uint16_t>(v + 2);
			ib->write<uint16_t>(v + 3);
			i += 6;
			v += 3;
		}

		if (rbr)
		{
			vb->write(vertex{br.x, br.y - amount, 0.f, c.abgr(), uv.maxs.x, uv.mins.y + (r.height() - amount) / r.height() * uv.height(), skip_dpi});
			vb->write(vertex{br.x - amount, br.y, 0.f, c.abgr(), uv.mins.x + (r.width() - amount) / r.width() * uv.width(), uv.maxs.y, skip_dpi});
			vb->write(vertex{
				br.x - amount, br.y - amount, 0.f, c.abgr(), uv.mins.x + (r.width() - amount) / r.width() * uv.width(),
				uv.mins.y + (r.height() - amount) / r.height() * uv.height(), skip_dpi});

			ib->write<uint16_t>(0);
			ib->write<uint16_t>(v + 1);
			ib->write<uint16_t>(v + 3);
			ib->write<uint16_t>(0);
			ib->write<uint16_t>(v + 2);
			ib->write<uint16_t>(v + 3);
			i += 6;
			v += 3;
		}

		if (rbl)
		{
			vb->write(vertex{bl.x, bl.y - amount, 0.f, c.abgr(), uv.mins.x, uv.mins.y + (r.height() - amount) / r.height() * uv.height(), skip_dpi});
			vb->write(vertex{bl.x + amount, bl.y, 0.f, c.abgr(), uv.mins.x + amount / r.width() * uv.width(), uv.maxs.y, skip_dpi});
			vb->write(vertex{
				bl.x + amount, bl.y - amount, 0.f, c.abgr(), uv.mins.x + amount / r.width() * uv.width(), uv.mins.y + (r.height() - amount) / r.height() * uv.height(),
				skip_dpi});

			ib->write<uint16_t>(0);
			ib->write<uint16_t>(v + 1);
			ib->write<uint16_t>(v + 3);
			ib->write<uint16_t>(0);
			ib->write<uint16_t>(v + 2);
			ib->write<uint16_t>(v + 3);
			i += 6;
			v += 3;
		}

		// sides
		vb->write(vertex{tl.x + (rtl ? amount : 0.f), tl.y, 0.f, c.abgr(), uv.mins.x + (rtl ? amount : 0.f) / r.width() * uv.width(), uv.mins.y, skip_dpi});
		vb->write(vertex{tr.x - (rtr ? amount : 0.f), tr.y, 0.f, c.abgr(), uv.mins.x + (r.width() - (rtr ? amount : 0.f)) / r.width() * uv.width(), uv.mins.y, skip_dpi});
		vb->write(vertex{bl.x + (rbl ? amount : 0.f), bl.y, 0.f, c.abgr(), uv.mins.x + (rbl ? amount : 0.f) / r.width() * uv.width(), uv.maxs.y, skip_dpi});
		vb->write(vertex{br.x - (rbr ? amount : 0.f), br.y, 0.f, c.abgr(), uv.mins.x + (r.width() - (rbr ? amount : 0.f)) / r.width() * uv.width(), uv.maxs.y, skip_dpi});
		vb->write(vertex{tl.x, tl.y + (rtl ? amount : 0.f), 0.f, c.abgr(), uv.mins.x, uv.mins.y + (rtl ? amount : 0.f) / r.height() * uv.height(), skip_dpi});
		vb->write(vertex{tr.x, tr.y + (rtr ? amount : 0.f), 0.f, c.abgr(), uv.maxs.x, uv.mins.y + (rtr ? amount : 0.f) / r.height() * uv.height(), skip_dpi});
		vb->write(
			vertex{bl.x, bl.y - (rbl ? amount : 0.f), 0.f, c.abgr(), uv.mins.x, uv.mins.y + (r.height() - (rbl ? amount : 0.f)) / r.height() * uv.height(), skip_dpi});
		vb->write(
			vertex{br.x, br.y - (rbr ? amount : 0.f), 0.f, c.abgr(), uv.maxs.x, uv.mins.y + (r.height() - (rbr ? amount : 0.f)) / r.height() * uv.height(), skip_dpi});

		ib->write<uint16_t>(0);
		ib->write<uint16_t>(v + 1);
		ib->write<uint16_t>(v + 2);
		ib->write<uint16_t>(0);
		ib->write<uint16_t>(v + 3);
		ib->write<uint16_t>(v + 4);
		ib->write<uint16_t>(0);
		ib->write<uint16_t>(v + 5);
		ib->write<uint16_t>(v + 7);
		ib->write<uint16_t>(0);
		ib->write<uint16_t>(v + 6);
		ib->write<uint16_t>(v + 8);

		g.ignore_scaling = skip_dpi;
		g.ic = i + 12;
		g.vc = v + 9;
		cb->write(g);

		const auto old_rot = g.rotation;
		const auto old_uv = g.uv_rect;
		ignore_checks = true;

		// actual circles
		if (rbr)
		{
			g.rotation = 0.f;
			g.uv_rect = {
				uv.mins.x + (r.width() - amount * 2.f) / r.width() * uv.width(), uv.mins.y + (r.height() - amount * 2.f) / r.height() * uv.height(), uv.maxs.x,
				uv.maxs.y};
			add_circle_filled(br - vec2{amount, amount}, amount, c, int(amount), .25f);
		}

		if (rbl)
		{
			g.rotation = 90.f;
			g.uv_rect = {uv.mins.x, uv.mins.y + (r.height() - amount * 2.f) / r.height() * uv.height(), uv.mins.x + amount * 2.f / r.width() * uv.width(), uv.maxs.y};
			add_circle_filled(bl - vec2{-amount, amount}, amount, c, int(amount), .25f);
		}

		if (rtl)
		{
			g.rotation = 180.f;
			g.uv_rect = {uv.mins.x, uv.mins.y, uv.mins.x + amount * 2.f / r.width() * uv.width(), uv.mins.y + amount * 2.f / r.height() * uv.height()};
			add_circle_filled(tl + vec2{amount, amount}, amount, c, int(amount), .25f);
		}

		if (rtr)
		{
			g.rotation = 270.f;
			g.uv_rect = {uv.mins.x + (r.width() - amount * 2.f) / r.width() * uv.width(), uv.mins.y, uv.maxs.x, uv.mins.y + amount * 2.f / r.height() * uv.height()};
			add_circle_filled(tr + vec2{-amount, amount}, amount, c, int(amount), .25f);
		}

		ignore_checks = false;
		g.rotation = old_rot;
		g.uv_rect = old_uv;
	}

	void layer::add_triangle(const vec2 &a, const vec2 &b, const vec2 &c, color col, float thickness, outline_mode mode)
	{
		if (g.alpha == 0.f || col.value.a == 0.f)
			return;

		const auto center = (a + b + c) / 3.f;

		// offset each point by half the thickness in either direction
		std::array<vec2, 3> op, ip;
		switch (mode)
		{
			// extrude into the screen
			case outline_inset:
				thickness = 1.f + -thickness / 8.f;

				op = {a, b, c};
				ip = {
					center + vec2{thickness, thickness} * (a - center),
					center + vec2{thickness, thickness} * (b - center),
					center + vec2{thickness, thickness} * (c - center),
				};
				break;
			// extrude out of the screen
			case outline_outset:
				thickness = 1.f + thickness / 8.f;

				ip = {a, b, c};
				op = {
					center + vec2{thickness, thickness} * (a - center),
					center + vec2{thickness, thickness} * (b - center),
					center + vec2{thickness, thickness} * (c - center),
				};
				break;
			case outline_center:
				thickness = 1.f + (thickness * .5f) / 8.f;
				ip = {
					center + vec2{thickness, thickness} * (a - center),
					center + vec2{thickness, thickness} * (b - center),
					center + vec2{thickness, thickness} * (c - center),
				};

				thickness = 1.f + (-thickness * .5f) / 8.f;
				op = {
					center + vec2{thickness, thickness} * (a - center),
					center + vec2{thickness, thickness} * (b - center),
					center + vec2{thickness, thickness} * (c - center),
				};
				break;
		}

		if (g.alpha != 1.f)
			col = col.mod_a(g.alpha);
		if (g.rotation != 0.f)
		{
			const auto out_center = (op[0] + op[1] + op[2]) / 3.f;
			const auto in_center = (ip[0] + ip[1] + ip[2]) / 3.f;
			const auto rot = deg2rad(g.rotation);

			for (auto &p : op)
				p = rotate_point(rot, p, out_center);
			for (auto &p : ip)
				p = rotate_point(rot, p, in_center);
		}

		vb->write(vertex{op[0].x, op[0].y, 0.f, col.abgr(), 0.f, 0.f, skip_dpi});
		vb->write(vertex{op[1].x, op[1].y, 0.f, col.abgr(), 0.f, 0.f, skip_dpi});
		vb->write(vertex{op[2].x, op[2].y, 0.f, col.abgr(), 0.f, 0.f, skip_dpi});
		vb->write(vertex{ip[0].x, ip[0].y, 0.f, col.abgr(), 0.f, 0.f, skip_dpi});
		vb->write(vertex{ip[1].x, ip[1].y, 0.f, col.abgr(), 0.f, 0.f, skip_dpi});
		vb->write(vertex{ip[2].x, ip[2].y, 0.f, col.abgr(), 0.f, 0.f, skip_dpi});

		// right
		ib->write<uint16_t>(0);
		ib->write<uint16_t>(1);
		ib->write<uint16_t>(3);
		ib->write<uint16_t>(1);
		ib->write<uint16_t>(3);
		ib->write<uint16_t>(4);

		// bottom
		ib->write<uint16_t>(1);
		ib->write<uint16_t>(2);
		ib->write<uint16_t>(4);
		ib->write<uint16_t>(2);
		ib->write<uint16_t>(4);
		ib->write<uint16_t>(5);

		// left
		ib->write<uint16_t>(0);
		ib->write<uint16_t>(2);
		ib->write<uint16_t>(5);
		ib->write<uint16_t>(0);
		ib->write<uint16_t>(3);
		ib->write<uint16_t>(5);

		g.ignore_scaling = skip_dpi;
		g.vc = 6;
		g.ic = 18;
		cb->write(g);
	}

	void layer::add_rect(const rect &r, color c, float thickness, outline_mode mode)
	{
		if (g.alpha == 0.f || c.value.a == 0.f)
			return;

		const auto offset = vec2{thickness, thickness};
		const auto offset_h = offset * .5f;

		std::array<vec2, 4> op, ip;
		switch (mode)
		{
			case outline_inset:
				op = {r.tl(), r.tr(), r.br(), r.bl()};
				ip = {r.tl() + offset, r.tr() + vec2{-offset.x, offset.y}, r.br() - offset, r.bl() + vec2{offset.x, -offset.y}};
				break;
			case outline_outset:
				op = {r.tl() - offset, r.tr() + vec2{offset.x, -offset.y}, r.br() + offset, r.bl() + vec2{-offset.x, offset.y}};
				ip = {r.tl(), r.tr(), r.br(), r.bl()};
				break;
			case outline_center:
				op = {r.tl() - offset_h, r.tr() + vec2{offset_h.x, -offset_h.y}, r.br() + offset_h, r.bl() + vec2{-offset_h.x, offset_h.y}};
				ip = {r.tl() + offset_h, r.tr() - vec2{offset_h.x, -offset_h.y}, r.br() - offset_h, r.bl() + vec2{offset_h.x, -offset_h.y}};
				break;
		}

		if (g.alpha != 1.f)
			c = c.mod_a(g.alpha);
		if (g.rotation != 0.f)
		{
			const auto out_center = (op[0] + op[1] + op[2] + op[3]) * .25f;
			const auto in_center = (ip[0] + ip[1] + ip[2] + ip[3]) * .25f;
			const auto rot = deg2rad(g.rotation);

			for (auto &p : op)
				p = rotate_point(rot, p, out_center);
			for (auto &p : ip)
				p = rotate_point(rot, p, in_center);
		}

		vb->write(vertex{op[0].x, op[0].y, 0.f, c.abgr(), 0.f, 0.f, skip_dpi});
		vb->write(vertex{op[1].x, op[1].y, 0.f, c.abgr(), 0.f, 0.f, skip_dpi});
		vb->write(vertex{op[2].x, op[2].y, 0.f, c.abgr(), 0.f, 0.f, skip_dpi});
		vb->write(vertex{op[3].x, op[3].y, 0.f, c.abgr(), 0.f, 0.f, skip_dpi});
		vb->write(vertex{ip[0].x, ip[0].y, 0.f, c.abgr(), 0.f, 0.f, skip_dpi});
		vb->write(vertex{ip[1].x, ip[1].y, 0.f, c.abgr(), 0.f, 0.f, skip_dpi});
		vb->write(vertex{ip[2].x, ip[2].y, 0.f, c.abgr(), 0.f, 0.f, skip_dpi});
		vb->write(vertex{ip[3].x, ip[3].y, 0.f, c.abgr(), 0.f, 0.f, skip_dpi});

		// top
		ib->write<uint16_t>(0);
		ib->write<uint16_t>(1);
		ib->write<uint16_t>(5);
		ib->write<uint16_t>(0);
		ib->write<uint16_t>(4);
		ib->write<uint16_t>(5);

		// right
		ib->write<uint16_t>(1);
		ib->write<uint16_t>(2);
		ib->write<uint16_t>(5);
		ib->write<uint16_t>(2);
		ib->write<uint16_t>(5);
		ib->write<uint16_t>(6);

		// bottom
		ib->write<uint16_t>(2);
		ib->write<uint16_t>(3);
		ib->write<uint16_t>(6);
		ib->write<uint16_t>(3);
		ib->write<uint16_t>(6);
		ib->write<uint16_t>(7);

		// left
		ib->write<uint16_t>(0);
		ib->write<uint16_t>(3);
		ib->write<uint16_t>(7);
		ib->write<uint16_t>(0);
		ib->write<uint16_t>(4);
		ib->write<uint16_t>(7);

		g.ignore_scaling = skip_dpi;
		g.vc = 8;
		g.ic = 24;
		cb->write(g);
	}

	void layer::add_circle(vec2 center, float radius, color c, int segments, float fill, float thickness, outline_mode mode)
	{
		if (g.alpha == 0.f || c.value.a == 0.f || radius == 0.f || !segments || fill == 0.f)
			return;

		center = center.floor();

		const auto seg_scaled{(float)segments * draw.scale};
		const auto delta = (pi * fill) * 2.f / seg_scaled;
		if (g.alpha != 1.f)
			c = c.mod_a(g.alpha);

		g.vc = 0;
		g.ic = 0;

		float offset{delta * .5f + deg2rad(g.rotation)};
		int i{0};
		for (int k{}; k < seg_scaled; ++k)
		{
			const auto off_l = offset - delta * .5f;
			const auto off_r = offset + delta * .5f;
			vec2 a0, a1, b0, b1;

			switch (mode)
			{
				case outline_inset:
					a0 = center + vec2{radius * cosf(off_l), radius * sinf(off_l)};
					b0 = center + vec2{radius * cosf(off_r), radius * sinf(off_r)};
					a1 = center + vec2{(radius + thickness) * cosf(off_l), (radius + thickness) * sinf(off_l)};
					b1 = center + vec2{(radius + thickness) * cosf(off_r), (radius + thickness) * sinf(off_r)};
					break;
				case outline_outset:
					a0 = center + vec2{(radius - thickness) * cosf(off_l), (radius - thickness) * sinf(off_l)};
					b0 = center + vec2{(radius - thickness) * cosf(off_r), (radius - thickness) * sinf(off_r)};
					a1 = center + vec2{radius * cosf(off_l), radius * sinf(off_l)};
					b1 = center + vec2{radius * cosf(off_r), radius * sinf(off_r)};
					break;
				case outline_center:
					a0 = center + vec2{(radius - thickness * .5f) * cosf(off_l), (radius - thickness * .5f) * sinf(off_l)};
					b0 = center + vec2{(radius - thickness * .5f) * cosf(off_r), (radius - thickness * .5f) * sinf(off_r)};
					a1 = center + vec2{(radius + thickness * .5f) * cosf(off_l), (radius + thickness * .5f) * sinf(off_l)};
					b1 = center + vec2{(radius + thickness * .5f) * cosf(off_r), (radius + thickness * .5f) * sinf(off_r)};
					break;
			}

			vb->write(vertex_unfloored{a0.x, a0.y, 0.f, c.abgr(), 0.f, 0.f, skip_dpi});
			vb->write(vertex_unfloored{b0.x, b0.y, 0.f, c.abgr(), 0.f, 0.f, skip_dpi});
			vb->write(vertex_unfloored{a1.x, a1.y, 0.f, c.abgr(), 0.f, 0.f, skip_dpi});
			vb->write(vertex_unfloored{b1.x, b1.y, 0.f, c.abgr(), 0.f, 0.f, skip_dpi});

			ib->write<uint16_t>(i);
			ib->write<uint16_t>(i + 1);
			ib->write<uint16_t>(i + 2);
			ib->write<uint16_t>(i + 1);
			ib->write<uint16_t>(i + 2);
			ib->write<uint16_t>(i + 3);

			i += 4;
			offset += delta;
			g.vc += 4;
			g.ic += 6;
		}

		g.ignore_scaling = skip_dpi;
		cb->write(g);
	}

	void layer::add_line(const vec2 &a, const vec2 &b, color c, float thickness)
	{
		if (g.alpha == 0.f || c.value.a == 0.f || thickness == 0.f)
			return;
		if (g.alpha != 1.f)
			c = c.mod_a(g.alpha);

		auto dx = b.x - a.x;
		auto dy = b.y - a.y;

		const auto inv = 1.f / sqrtf(dx * dx + dy * dy);
		dx *= inv * (thickness * 0.5f);
		dy *= inv * (thickness * 0.5f);

		vb->write(vertex_unfloored{a.x + dy, a.y - dx, 0.f, c.abgr(), 0.f, 0.f, skip_dpi});
		vb->write(vertex_unfloored{b.x + dy, b.y - dx, 0.f, c.abgr(), 0.f, 0.f, skip_dpi});
		vb->write(vertex_unfloored{b.x - dy, b.y + dx, 0.f, c.abgr(), 0.f, 0.f, skip_dpi});
		vb->write(vertex_unfloored{a.x - dy, a.y + dx, 0.f, c.abgr(), 0.f, 0.f, skip_dpi});

		ib->write<uint16_t>(0);
		ib->write<uint16_t>(1);
		ib->write<uint16_t>(2);
		ib->write<uint16_t>(0);
		ib->write<uint16_t>(2);
		ib->write<uint16_t>(3);

		g.ignore_scaling = skip_dpi;
		g.vc = 4;
		g.ic = 6;
		cb->write(g);
	}

	void layer::add_line_multicolor(const vec2 &a, const vec2 &b, color c, color c2, float thickness)
	{
		if (g.alpha == 0.f || c.value.a == 0.f || thickness == 0.f)
			return;
		if (g.alpha != 1.f)
		{
			c = c.mod_a(g.alpha);
			c2 = c2.mod_a(g.alpha);
		}

		auto dx = b.x - a.x;
		auto dy = b.y - a.y;

		const auto inv = 1.f / sqrtf(dx * dx + dy * dy);
		dx *= inv * (thickness * 0.5f);
		dy *= inv * (thickness * 0.5f);

		vb->write(vertex_unfloored{a.x + dy, a.y - dx, 0.f, c.abgr(), 0.f, 0.f, skip_dpi});
		vb->write(vertex_unfloored{b.x + dy, b.y - dx, 0.f, c2.abgr(), 0.f, 0.f, skip_dpi});
		vb->write(vertex_unfloored{b.x - dy, b.y + dx, 0.f, c2.abgr(), 0.f, 0.f, skip_dpi});
		vb->write(vertex_unfloored{a.x - dy, a.y + dx, 0.f, c.abgr(), 0.f, 0.f, skip_dpi});

		ib->write<uint16_t>(0);
		ib->write<uint16_t>(1);
		ib->write<uint16_t>(2);
		ib->write<uint16_t>(0);
		ib->write<uint16_t>(2);
		ib->write<uint16_t>(3);

		g.ignore_scaling = skip_dpi;
		g.vc = 4;
		g.ic = 6;
		cb->write(g);
	}

	void layer::add_rect_rounded(const rect &r, color c, float amount, rounding rnd, float thickness, outline_mode mode)
	{
		if (g.alpha == 0.f || c.value.a == 0.f || thickness == 0.f)
			return;
		if (amount == 0.f || (int)rnd == 0)
			return add_rect(r, c, thickness, mode);

		amount = min(amount, min(r.width(), r.height()) * .5f);
		if (r.width() == r.height() && amount == r.width() * .5f && rnd == rnd_all)
			return add_circle(r.center(), amount, c, int(amount * 2.f), 1.f, thickness, mode);

		if (g.alpha != 1.f)
			c = c.mod_a(g.alpha);

		const auto offset = vec2{thickness, thickness};
		const auto offset_h = offset * .5f;

		std::array<vec2, 4> cp{r.tl() + vec2{amount, amount}, r.tr() + vec2{-amount, amount}, r.br() - vec2{amount, amount}, r.bl() + vec2{amount, -amount}};

		std::array<vec2, 8> op, ip, x;
		switch (mode)
		{
			case outline_inset:
				op = {r.tl(), r.tr(), r.tr(), r.br(), r.br(), r.bl(), r.bl(), r.tl()};
				ip = {r.tl() + offset, r.tr() - vec2{offset.x, -offset.y}, r.tr() - vec2{offset.x, -offset.y}, r.br() - offset,
					  r.br() - offset, r.bl() + vec2{offset.x, -offset.y}, r.bl() + vec2{offset.x, -offset.y}, r.tl() + offset};
				break;
			case outline_outset:
				op = {r.tl() - offset, r.tr() + vec2{offset.x, -offset.y}, r.tr() + vec2{offset.x, -offset.y}, r.br() + offset,
					  r.br() + offset, r.bl() - vec2{offset.x, -offset.y}, r.bl() - vec2{offset.x, -offset.y}, r.tl() - offset};
				ip = {r.tl(), r.tr(), r.tr(), r.br(), r.br(), r.bl(), r.bl(), r.tl()};
				break;
			case outline_center:
				op = {r.tl() - offset_h, r.tr() + vec2{offset_h.x, -offset_h.y}, r.tr() + vec2{offset_h.x, -offset_h.y}, r.br() + offset_h,
					  r.br() + offset_h, r.bl() - vec2{offset_h.x, -offset_h.y}, r.bl() - vec2{offset_h.x, -offset_h.y}, r.tl() - offset_h};
				ip = {r.tl() + offset_h, r.tr() - vec2{offset_h.x, -offset_h.y}, r.tr() - vec2{offset_h.x, -offset_h.y}, r.br() - offset_h,
					  r.br() - offset_h, r.bl() + vec2{offset_h.x, -offset_h.y}, r.bl() + vec2{offset_h.x, -offset_h.y}, r.tl() + offset_h};
				break;
		}

		const auto rtl = rnd & rnd_tl;
		const auto rtr = rnd & rnd_tr;
		const auto rbl = rnd & rnd_bl;
		const auto rbr = rnd & rnd_br;

		// adjust positions
		if (rtl)
		{
			op[0].x += amount;
			op[7].y += amount;
			ip[0].x += amount;
			ip[7].y += amount;
		}

		if (rtr)
		{
			op[1].x -= amount;
			op[2].y += amount;
			ip[1].x -= amount;
			ip[2].y += amount;
		}

		if (rbr)
		{
			op[3].y -= amount;
			op[4].x -= amount;
			ip[3].x -= amount;
			ip[4].y -= amount;
		}

		if (rbl)
		{
			op[5].x += amount;
			op[6].y -= amount;
			ip[5].x += amount;
			ip[6].y -= amount;
		}

		x = {
			vec2{op[0].x, ip[0].y}, vec2{op[1].x, ip[1].y}, vec2{ip[2].x, op[2].y}, vec2{ip[4].x, op[3].y},
			vec2{op[4].x, ip[3].y}, vec2{op[5].x, ip[5].y}, vec2{ip[6].x, op[6].y}, vec2{ip[7].x, op[7].y},
		};

		// write vertices
		for (auto &p : op)
			vb->write(vertex{p.x, p.y, 0.f, c.abgr(), 0.f, 0.f, skip_dpi});
		for (auto &p : ip)
			vb->write(vertex{p.x, p.y, 0.f, c.abgr(), 0.f, 0.f, skip_dpi});

		// sides
		ib->write<uint16_t>(0);
		ib->write<uint16_t>(1);
		ib->write<uint16_t>(8);
		ib->write<uint16_t>(1);
		ib->write<uint16_t>(8);
		ib->write<uint16_t>(9);
		ib->write<uint16_t>(2);
		ib->write<uint16_t>(3);
		ib->write<uint16_t>(10);
		ib->write<uint16_t>(3);
		ib->write<uint16_t>(10);
		ib->write<uint16_t>(12);
		ib->write<uint16_t>(4);
		ib->write<uint16_t>(5);
		ib->write<uint16_t>(11);
		ib->write<uint16_t>(5);
		ib->write<uint16_t>(11);
		ib->write<uint16_t>(13);
		ib->write<uint16_t>(6);
		ib->write<uint16_t>(7);
		ib->write<uint16_t>(14);
		ib->write<uint16_t>(7);
		ib->write<uint16_t>(14);
		ib->write<uint16_t>(15);

		// introduce 2 extra tris per corner to compensate smoothing
		int v{}, i{};
		if (rtl)
		{
			vb->write(vertex{x[0].x, x[0].y, 0.f, c.abgr(), 0.f, 0.f, skip_dpi});
			vb->write(vertex{x[7].x, x[7].y, 0.f, c.abgr(), 0.f, 0.f, skip_dpi});

			ib->write<uint16_t>(0);
			ib->write<uint16_t>(8);
			ib->write<uint16_t>(16 + v);
			ib->write<uint16_t>(7);
			ib->write<uint16_t>(15);
			ib->write<uint16_t>(17 + v);

			v += 2;
			i += 6;
		}

		if (rtr)
		{
			vb->write(vertex{x[1].x, x[1].y, 0.f, c.abgr(), 0.f, 0.f, skip_dpi});
			vb->write(vertex{x[2].x, x[2].y, 0.f, c.abgr(), 0.f, 0.f, skip_dpi});

			ib->write<uint16_t>(1);
			ib->write<uint16_t>(9);
			ib->write<uint16_t>(16 + v);
			ib->write<uint16_t>(2);
			ib->write<uint16_t>(10);
			ib->write<uint16_t>(17 + v);

			v += 2;
			i += 6;
		}

		if (rbr)
		{
			vb->write(vertex{x[3].x, x[3].y, 0.f, c.abgr(), 0.f, 0.f, skip_dpi});
			vb->write(vertex{x[4].x, x[4].y, 0.f, c.abgr(), 0.f, 0.f, skip_dpi});

			ib->write<uint16_t>(3);
			ib->write<uint16_t>(12);
			ib->write<uint16_t>(16 + v);
			ib->write<uint16_t>(4);
			ib->write<uint16_t>(11);
			ib->write<uint16_t>(17 + v);

			v += 2;
			i += 6;
		}

		if (rbl)
		{
			vb->write(vertex{x[5].x, x[5].y, 0.f, c.abgr(), 0.f, 0.f, skip_dpi});
			vb->write(vertex{x[6].x, x[6].y, 0.f, c.abgr(), 0.f, 0.f, skip_dpi});

			ib->write<uint16_t>(5);
			ib->write<uint16_t>(13);
			ib->write<uint16_t>(16 + v);
			ib->write<uint16_t>(6);
			ib->write<uint16_t>(14);
			ib->write<uint16_t>(17 + v);

			v += 2;
			i += 6;
		}

		g.ignore_scaling = skip_dpi;
		g.vc = 16 + v;
		g.ic = 24 + i;
		cb->write(g);

		// circles
		const auto old_rotation = g.rotation;
		ignore_checks = true;

		const auto cr = mode == outline_inset ? (amount - thickness) : (mode == outline_outset ? (amount + thickness) : amount);
		if (rbr)
		{
			g.rotation = 0.f;
			add_circle(cp[2], cr, c, int((cr)*.5f), .25f, thickness, mode);
		}

		if (rbl)
		{
			g.rotation = 90.f;
			add_circle(cp[3], cr, c, int((cr)*.5f), .25f, thickness, mode);
		}

		if (rtl)
		{
			g.rotation = 180.f;
			add_circle(cp[0], cr, c, int((cr)*.5f), .25f, thickness, mode);
		}

		if (rtr)
		{
			g.rotation = 270.f;
			add_circle(cp[1], cr, c, int((cr)*.5f), .25f, thickness, mode);
		}

		g.rotation = old_rotation;
		ignore_checks = false;
	}

	void layer::add_text(vec2 p, const std::string &text, color c, std::optional<text_params> params)
	{
		if (!font || text.empty() || g.alpha == 0.f || c.value.a == 0.f)
			return;
		const auto text_sz = font->get_text_size(text, skip_dpi);

		if (g.alpha != 1.f)
			c = c.mod_a(g.alpha);

		if (params)
		{
			if (params->h == align_right)
				p.x -= text_sz.x;
			else if (params->h == align_center)
				p.x -= text_sz.x * .5f;

			if (params->v == align_bottom)
				p.y -= text_sz.y;
			else if (params->v == align_center)
				p.y -= text_sz.y * .5f;
		}

		// fix pos to account for scaling
		if (!skip_dpi)
			p *= draw.scale;

		const auto old_tex = g.texture;
		g.texture = font->texture[0].obj;

		vec2 off{p}, line_size{};
		uint32_t last_c{};

		const auto line_adjust = [&](int i)
		{
			if (params && params->line != align_left)
			{
				line_size = font->get_text_size(get_line(text, i), skip_dpi);
				if (params->line == align_right)
					off.x += text_sz.x - line_size.x;
				else if (params->line == align_center)
					off.x += text_sz.x * .5f - line_size.x * .5f;
			}
		};

		line_adjust(0);
		for (int i{}; i < (int)text.size();)
		{
			if (text[i] == ' ' || text[i] == '\t')
			{
				off.x += font->height * (text[i] == ' ' ? .25f : 1.f);
				i++;
				last_c = 0;
				continue;
			}

			if (text[i] == '\n')
			{
				off.x = p.x;
				off.y += font->height + font->line_gap;
				line_adjust(i + 1);

				i++;
				last_c = 0;
				continue;
			}

			uint32_t cp;
			i += utf8_decode(text.data() + i, cp);

			const auto &gl = font->get_glyph(cp);
			if (gl.atlas != font_cur)
			{
				g.texture = font->texture[gl.atlas].obj;
				font_cur = gl.atlas;
			}

			const auto k = font->get_kerning(last_c, cp);

			vec2 tl{off.x + gl.offset.x, off.y + gl.offset.y}, tr{off.x + gl.offset.x + gl.size.x, off.y + gl.offset.y},
				br{off.x + gl.offset.x + gl.size.x, off.y + gl.offset.y + gl.size.y}, bl{off.x + gl.offset.x, off.y + gl.offset.y + gl.size.y};

			if (g.rotation != 0.f)
			{
				const auto rot = deg2rad(g.rotation);
				const auto center = p + vec2{text_sz.x * .5f, -(text_sz.y * .25f)};

				tl = rotate_point(rot, tl, center);
				tr = rotate_point(rot, tr, center);
				br = rotate_point(rot, br, center);
				bl = rotate_point(rot, bl, center);
			}

			// always skip dpi on these
			vb->write(vertex{tl.x, tl.y, 0.f, c.abgr(), gl.uv.mins.x, gl.uv.mins.y, true});
			vb->write(vertex{bl.x, bl.y, 0.f, c.abgr(), gl.uv.mins.x, gl.uv.maxs.y, true});
			vb->write(vertex{br.x, br.y, 0.f, c.abgr(), gl.uv.maxs.x, gl.uv.maxs.y, true});
			vb->write(vertex{tr.x, tr.y, 0.f, c.abgr(), gl.uv.maxs.x, gl.uv.mins.y, true});

			ib->write<uint16_t>(0);
			ib->write<uint16_t>(1);
			ib->write<uint16_t>(2);
			ib->write<uint16_t>(0);
			ib->write<uint16_t>(2);
			ib->write<uint16_t>(3);

			g.ignore_scaling = skip_dpi;
			g.vc = 4;
			g.ic = 6;
			cb->write(g);

			off.x += gl.size.x + k + gl.offset.x;
			last_c = cp;
		}

		g.texture = old_tex;
	}

	void layer::add_fake_rounding(const rect &r, const color &c, float amount, rounding rnd)
	{
		if (g.alpha == 0.f || c.value.a == 0.f || amount == 0.f || !(int)rnd)
			return;

		const auto rot = g.rotation;
		if (rnd & rnd_tl)
		{
			g.rotation = 0.f;
			add_q_circle_filled_inverse(rect(r.tl()).size({amount, amount}), c);
		}

		if (rnd & rnd_tr)
		{
			g.rotation = 90.f;
			add_q_circle_filled_inverse(rect(r.tr() - vec2{amount, 0.f}).size({amount, amount}), c);
		}

		if (rnd & rnd_br)
		{
			g.rotation = 180.f;
			add_q_circle_filled_inverse(rect(r.br() - vec2{amount, amount}).size({amount, amount}), c);
		}

		if (rnd & rnd_bl)
		{
			g.rotation = 270.f;
			add_q_circle_filled_inverse(rect(r.bl() - vec2{0.f, amount}).size({amount, amount}), c);
		}

		g.rotation = rot;
	}

	void layer::add_glow(const rect &r, float radius, color c, glow_parts parts)
	{
		if (c.value.a == 0.f || g.alpha == 0.f || parts == 0 || radius < 1.f)
			return;
		if (parts == (gp_tl | gp_tr | gp_br | gp_bl))
			return add_circle_filled_multicolor(r.center(), radius, {c.mod_a(.0f), c});

		const auto ct = c.mod_a(.0f);
		if ((parts & gp_t) && r.width() > 0.f)
			add_rect_filled_multicolor(rect(r.mins - vec2{0.f, radius}, r.maxs), {ct, ct, c, c});
		if ((parts & gp_r) && r.height() > 0.f)
			add_rect_filled_multicolor(rect(vec2{r.maxs.x, r.mins.y}, vec2{r.maxs.x + radius, r.maxs.y}), {c, ct, ct, c});
		if ((parts & gp_b) && r.width() > 0.f)
			add_rect_filled_multicolor(rect(vec2{r.mins.x, r.maxs.y}, vec2{r.maxs.x, r.maxs.y + radius}), {c, c, ct, ct});
		if ((parts & gp_l) && r.height() > 0.f)
			add_rect_filled_multicolor(rect(vec2{r.mins.x - radius, r.mins.y}, vec2{r.mins.x, r.maxs.y}), {ct, c, c, ct});

		const std::array<color, 2> cc{c.mod_a(.8f), ct};
		const auto old_rot = g.rotation;
		if (parts & gp_tl)
		{
			g.rotation = 180.f;
			add_circle_filled_multicolor(r.tl(), radius, cc, 12, .25f);
		}

		if (parts & gp_tr)
		{
			g.rotation = 270.f;
			add_circle_filled_multicolor(r.tr(), radius, cc, 12, .25f);
		}

		if (parts & gp_br)
		{
			g.rotation = 0.f;
			add_circle_filled_multicolor(r.br(), radius, cc, 12, .25f);
		}

		if (parts & gp_bl)
		{
			g.rotation = 90.f;
			add_circle_filled_multicolor(r.bl(), radius, cc, 12, .25f);
		}

		g.rotation = old_rot;
	}

} // namespace evo::ren
