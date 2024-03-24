#include <gui/controls/selectable_script.h>

//namespace evo::gui
//{
//	using namespace ren;
//
//	void selectable_script::render()
//	{
//		control::render();
//		if (!is_visible)
//			return;
//
//		a->animate();
//
//		const auto r = area_abs();
//
//		auto &l = draw.layers[ctx->content_layer];
//
//		std::shared_ptr<texture> tex{};
//		switch (file.type)
//		{
//		case lua::st_script:
//			tex = draw.textures[GUI_HASH("icon_file")];
//			break;
//		case lua::st_remote:
//			tex = draw.textures[GUI_HASH("icon_cloud")];
//			break;
//		default:
//			break;
//		}
//
//		vec2 off{};
//		if (is_loaded)
//		{
//			l->g.anti_alias = true;
//			l->add_circle_filled(r.tl() + vec2{7.f, r.height() * .5f + 3.f}, 2.f, colors.accent);
//			l->g.anti_alias = false;
//
//			off.x += 10.f;
//		}
//
//		if (tex)
//		{
//			l->g.texture = tex->obj;
//			l->add_rect_filled(rect(r.tl(), r.tl() + vec2{12.f, 12.f}).translate({off.x + 4.f, 5.f}), a->value.c);
//			l->g.texture = {};
//
//			off.x += 16.f;
//		}
//
//		l->font = is_highlighted ? draw.fonts[GUI_HASH("gui_bold")] : draw.fonts[GUI_HASH("gui_main")];
//		l->add_text(r.tl() + vec2(4.f, 6.f) + off, text, a->value.c);
//	}
//
//}
