#ifndef CONTRIB_GUI_DEPS_RENDERER_INCLUDE_REN_MACROS_H
#define CONTRIB_GUI_DEPS_RENDERER_INCLUDE_REN_MACROS_H

#ifdef REN_DEBUG
#define REN_DBG_FMT(x, ...) printf("[ren] " x "\n", __VA_ARGS__);
#define REN_DBG(x) printf("[ren] %s\n", x);
#else
#define REN_DBG_FMT(x, ...) ((void)0);
#define REN_DBG(x) ((void)0);
#endif

namespace evo::ren
{};

#endif // CONTRIB_GUI_DEPS_RENDERER_INCLUDE_REN_MACROS_H
