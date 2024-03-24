#pragma once
#include <game/game.h>
#include "cvar.h"
#include "framework.h"

namespace sdk
{
	struct cmem_alloc
	{
		void* alloc(std::size_t nSize)
		{
			return MEM::CallVFunc<void*, 1>(this, nSize);
		}

		void* realloc(const void* pMemory, std::size_t nSize)
		{
			return MEM::CallVFunc<void*, 2>(this, pMemory, nSize);
		}

		void free(const void* pMemory)
		{
			return MEM::CallVFunc<void, 3>(this, pMemory);
		}

		std::size_t getsize(const void* pMemory)
		{
			return MEM::CallVFunc<std::size_t, 21>(this, pMemory);
		}
	};

	__forceinline char *mem_dup_str(const char *in)
	{
		return reinterpret_cast<char *(*)(const char *)>(game->tier0.at(offsets::functions::mem_alloc::str_dup_func))(in);
	}
} // namespace sdk
