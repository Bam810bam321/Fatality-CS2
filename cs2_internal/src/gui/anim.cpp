#include <gui/anim.h>
#include <gui/gui.h>

GUI_NAMESPACE;

void anim_float_color::animate()
{
	anim::animate();
	value.f = i(start.f, end.f);

	if (type == ren::act_rgba)
	{
		value.c.value.r = i(start.c.value.r, end.c.value.r);
		value.c.value.g = i(start.c.value.g, end.c.value.g);
		value.c.value.b = i(start.c.value.b, end.c.value.b);
		value.c.value.a = i(start.c.value.a, end.c.value.a);
	}
	else
		value.c = value.c.hsv((uint16_t)i(start.c.h(), end.c.h()), i(start.c.s(), end.c.s()), i(start.c.v(), end.c.v())).a(i(start.c.value.a, end.c.value.a));
}
