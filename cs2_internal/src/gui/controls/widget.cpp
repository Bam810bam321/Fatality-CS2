#include <gui/controls/widget.h>
#include <gui/gui.h>

namespace evo::gui
{
	using namespace ren;

	void widget::reset()
	{
		pos = position.get();
	}

	void widget::render()
	{
		if (!is_visible)
			return;

		// animate these
		size_anim.animate();
		alpha_anim.animate();

		// update size
		size = size_anim.value;

		// render bg
		auto &d = draw.layers[ctx->content_layer];
		d->g.alpha = alpha_anim.value;
		d->g.anti_alias = true;
		d->add_shadow_rect(area_abs(), 12.f);
		d->g.alpha = (std::min(alpha_anim.value, max_alpha));
		d->add_rect_filled_rounded(area_abs(), colors.bg_bottom, 4.f);
		d->g.alpha = {};

		// render header
		const auto header_area = area_abs().size({size.x, 24.f});

		d->add_rect_filled_rounded(header_area, colors.bg_block, 4.f, rnd_t);
		d->add_line(header_area.bl(), header_area.br(), colors.accent);
		d->g.anti_alias = {};
		d->font = draw.fonts[GUI_HASH("gui_bold")];
		d->add_text(header_area.center(), title, colors.text, text_params::with_vh(align_center, align_center));
		d->g.alpha = {};
	}

	void widget::on_mouse_down(char key)
	{
		if (key != m_left || is_locked_by_someone_else() || alpha_anim.value == 0.f)
			return;

		lock_input();
	}

	void widget::on_mouse_move(const ren::vec2 &p, const ren::vec2 &d)
	{
		if (!is_locked_by_me())
			return;

		const auto temp_pos = pos + d;
		if (is_out_of_clip(temp_pos))
			return;

		pos = temp_pos;
		position.set(pos);
	}

	void widget::on_mouse_up(char key)
	{
		if (key != m_left || !is_locked_by_me())
			return;

		unlock_input();
	}

	void widget::toggle_visibility(bool vis)
	{
		alpha_anim.direct(vis ? 1.f : 0.f);
	}
}
