#pragma once
#include "framework.h"
namespace utils
{
	constexpr uint32_t fnv1a_seed = 2166136261u;
	constexpr uint32_t fnv1a_prime = 16777619u;
	__declspec(dllexport) extern uint32_t runtime_basis;

	inline uint32_t fnv1a(const char* key)
	{
		if (!key)
			return 0u;

		const char* data = const_cast<char*>(key);
		auto hash = runtime_basis;

		for (size_t i = 0; i < strlen(key); ++i)
		{
			const uint8_t value = data[i];
			hash = hash ^ value;
			hash *= fnv1a_prime;
		}

		return hash;
	}

	constexpr uint32_t fnv1a_ct(const char* str, const uint32_t value = fnv1a_seed) noexcept
	{
		return !*str ? value : fnv1a_ct(str + 1, static_cast<unsigned>(1ull * (value ^ static_cast<uint8_t>(*str)) * fnv1a_prime));
	}
}

#define FNV1A(s) (CONSTANT(::utils::fnv1a_ct(s)))
#define FNV1A_CMP(a, b) (CONSTANT(::utils::fnv1a_ct(b)) == ::utils::fnv1a(a))
#define FNV1A_CMP_IM(a, b) (b == ::utils::fnv1a(a))
