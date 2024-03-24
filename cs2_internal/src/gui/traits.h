#ifndef TRAITS_D0F4C1D124414BE8BD4D021008E9CD7D_H
#define TRAITS_D0F4C1D124414BE8BD4D021008E9CD7D_H

#define CALLBACK_FORWARD(...) (__VA_ARGS__); }
#define CALLBACK_TRAIT(c, n, a, ...) void n a override { c::n CALLBACK_FORWARD

#define CALLBACK_TRAIT_RESET(c) CALLBACK_TRAIT(c, reset, ())()
#define CALLBACK_TRAIT_FRC(c) CALLBACK_TRAIT(c, on_first_render_call, ())()
#define CALLBACK_TRAIT_MM(c) CALLBACK_TRAIT(c, on_mouse_move, (const ren::vec2& p, const ren::vec2& d))(p, d)
#define CALLBACK_TRAIT_ME(c) CALLBACK_TRAIT(c, on_mouse_enter, ())()
#define CALLBACK_TRAIT_ML(c) CALLBACK_TRAIT(c, on_mouse_leave, ())()
#define CALLBACK_TRAIT_MD(c) CALLBACK_TRAIT(c, on_mouse_down, (char key))(key)
#define CALLBACK_TRAIT_MU(c) CALLBACK_TRAIT(c, on_mouse_up, (char key))(key)
#define CALLBACK_TRAIT_MW(c) CALLBACK_TRAIT(c, on_mouse_wheel, (float factor))(factor)
#define CALLBACK_TRAIT_KD(c) CALLBACK_TRAIT(c, on_key_down, (uint16_t key))(key)
#define CALLBACK_TRAIT_KU(c) CALLBACK_TRAIT(c, on_key_up, (uint16_t key))(key)
#define CALLBACK_TRAIT_TI(c) CALLBACK_TRAIT(c, on_text_input, (const std::vector<uint32_t>& text))(text)
#define CALLBACK_TRAIT_DPC(c) CALLBACK_TRAIT(c, on_draw_param_changed, (char w))(w)

namespace evo::gui {}

#endif //TRAITS_D0F4C1D124414BE8BD4D021008E9CD7D_H
