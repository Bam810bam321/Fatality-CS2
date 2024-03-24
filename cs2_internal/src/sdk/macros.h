#pragma once

#include <macros.h>
#include <utils/value_obfuscation.h>

#define FORWARD_ARGS(...)                                                                                              \
	(__VA_ARGS__);                                                                                                     \
	}

#define FORWARD_ARGS_M(...)                                                                                            \
	(this, __VA_ARGS__);                                                                                               \
	}

#define VIRTUAL(index, func, sig)                                                                                      \
	__forceinline auto func                                                                                            \
	{                                                                                                                  \
		return reinterpret_cast<sig>((*reinterpret_cast<uintptr_t **>(this))[(index)]) FORWARD_ARGS_M

#define MFUNC(func, sig, mod, offset)                                                                                  \
	__forceinline auto func                                                                                            \
	{                                                                                                                  \
		return reinterpret_cast<sig>(game->mod.at(sdk::offsets::functions::offset)) FORWARD_ARGS_M

#define FUNC(func, sig, mod, offset)                                                                                   \
	__forceinline static auto func                                                                                     \
	{                                                                                                                  \
		return reinterpret_cast<sig>(game->mod.at(sdk::offsets::functions::offset)) FORWARD_ARGS

#define PAD(sz) private: char CONCAT(pad_, __LINE__)[sz]; public:
#define PAD_VTABLE PAD(sizeof(void*))
