#pragma once

#include <macros.h>

namespace utils
{
	uintptr_t find_pattern(uint32_t hash, const char *pattern);
	uintptr_t find_export(uint32_t hash, uint32_t exp);

	struct module_t
	{
		uintptr_t base;
		uint32_t size;
	};

	std::optional<module_t> find_module(uint32_t hash);

	inline uintptr_t follow_rel32(ptrdiff_t addr, ptrdiff_t offset, ptrdiff_t offset_after = 0)
	{
		const auto rel = *reinterpret_cast<int32_t *>(addr + offset);
		return addr + rel + static_cast<ptrdiff_t>(sizeof(int32_t)) + offset + offset_after;
	}

	struct library
	{
		library() = default;

		explicit library(const char *name) :
			handle(GetModuleHandleA(name)) {}

		uintptr_t at(const ptrdiff_t off) const { return reinterpret_cast<uintptr_t>(handle) + off; }

		uintptr_t deref(const ptrdiff_t off) const
		{
			return *reinterpret_cast<uintptr_t *>(reinterpret_cast<uintptr_t>(handle) + off);
		}

		HANDLE handle;
	};
}

#define PATTERN(m, x) ::utils::find_pattern(FNV1A(m),  (x))
