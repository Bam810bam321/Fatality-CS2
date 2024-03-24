#pragma once

#define FIND_SAFE(v, n) const auto v = evo::gui::ctx->find(GUI_HASH(n)); if (!v) return;
#define FIND_SAFE_T(v, n, t) const auto v = evo::gui::ctx->find<t>(GUI_HASH(n)); if (!v) return;

#define MAKE_TAB(i, n) std::make_shared<tab>(evo::gui::control_id{GUI_HASH(i), ""}, XOR(n), GUI_HASH(i "_container"), draw.textures[GUI_HASH("icon_" i)])
#define MAKE(h, t, ...) std::make_shared<t>(evo::gui::control_id{GUI_HASH(h),XOR(h)}, __VA_ARGS__)
#define MAKE_RUNTIME(h, t, ...) std::make_shared<t>(evo::gui::control_id{hash((h).c_str()), h}, __VA_ARGS__)

#define ADD(n, h, t, ...) e->add(make_control(XOR(n), MAKE(h, t, __VA_ARGS__)))
#define ADD_RUNTIME(n, h, t, ...) e->add(make_control(XOR(n), MAKE_RUNTIME(h, t, __VA_ARGS__)))
#define ADD_INV(n, h, t, ...) e->add(make_control(XOR(n), MAKE(h, t, __VA_ARGS__))->make_invisible())
#define ADD_DEP(n, h, ht, t, ...) { const auto _ = MAKE(h, t, __VA_ARGS__); _->callback = [](bool v) { static const auto _ = ctx->find(GUI_HASH(ht))->parent.lock(); _->set_visible(v); }; e->add(make_control(XOR(n), _)); }
#define ADD_INLINE(l, ...) e->add(make_inlined(GUI_HASH(l "_content"), [&](std::shared_ptr<layout>& e) { \
	const std::vector<std::shared_ptr<evo::gui::control>> _ { __VA_ARGS__ };                                                           \
	e->add(std::make_shared<label>(control_id{hash(XOR(l)) + _.size()}, XOR(l)));                                                                                 \
	for (const auto& c : _)                                                                                                  \
		e->add(c);																										     \
}))

#define ADD_LINE(l, f, ...)                                                                                            \
	e->add(make_inlined(GUI_HASH(l "_content"),                                                                        \
						[&](std::shared_ptr<layout> &e)                                                                \
						{                                                                                              \
							const std::vector<std::shared_ptr<evo::gui::control>> _{__VA_ARGS__};                                \
							e->add(f);                                                                                 \
							for (const auto &c : _)                                                                    \
								e->add(c);                                                                             \
						}))
