#pragma once

#include <cstdint>
#include <string.h>

#define STRINGTOKEN_MURMURHASH_SEED 0x31415926

class hash
{
	static constexpr uint32_t __init__(uint32_t len) { return STRINGTOKEN_MURMURHASH_SEED ^ len; }

	template <typename __T>
	static constexpr uint32_t __load__(__T &data, uint32_t offset)
	{
		return data[offset + 0] | (data[offset + 1] << 8) | (data[offset + 2] << 16) | (data[offset + 3] << 24);
	}

	static constexpr uint32_t __mul__(uint32_t val1, uint32_t val2) { return val1 * val2; }

	static constexpr uint32_t __sl__(uint32_t value, uint32_t count) { return (value << count); }

	static constexpr uint32_t __sr__(uint32_t value, uint32_t count) { return (value >> count); }

	static constexpr uint32_t __xor__(uint32_t h, uint32_t k) { return h ^ k; }

	static constexpr uint32_t __xor_with_sr__(uint32_t k, uint32_t r) { return __xor__(k, __sr__(k, r)); }

	template <typename __Type>
	static constexpr uint32_t __proc__(__Type &data, uint32_t len, uint32_t offset, uint32_t h, uint32_t m, uint32_t r)
	{
		return len >= 4
			? __proc__(data, len - 4, offset + 4, __xor__(__mul__(h, m), __mul__(__xor_with_sr__(__mul__(__load__(data, offset), m), r), m)), m, r)
			: len == 3
			? __proc__(data, len - 1, offset, __xor__(h, __sl__(data[offset + 2], 16)), m, r)
			: len == 2
			? __proc__(data, len - 1, offset, __xor__(h, __sl__(data[offset + 1], 8)), m, r)
			: len == 1
			? __proc__(data, len - 1, offset, __xor__(h, data[offset]) * m, m, r)
			: __xor__(__mul__(__xor_with_sr__(h, 13), m), __sr__(__mul__(__xor_with_sr__(h, 13), m), 15));
	}

public:
	template <typename __Type>
	static constexpr uint32_t murmur2(__Type &data, uint32_t len)
	{
		return __proc__(data, len, 0, __init__(len), 0x5bd1e995, 24);
	}
};

#define MURMUR2(x) hash::murmur2(x, (sizeof(x) / sizeof(x[0])) - 1)


inline uint32_t murmur2_rt(const char *key)
{
	constexpr uint32_t m = 0x5bd1e995;
	constexpr uint32_t r = 24u;
	uint32_t len = strlen(key);
	constexpr uint32_t seed = STRINGTOKEN_MURMURHASH_SEED;
	auto h = seed ^ len;

	auto data = reinterpret_cast<const uint8_t *>(key);

	while (len >= 4)
	{
		auto k = data[0];
		k |= data[1] << 8;
		k |= data[2] << 16;
		k |= data[3] << 24;

		k *= m;
		k ^= k >> r;
		k *= m;

		h *= m;
		h ^= k;

		data += 4;
		len -= 4;
	}

	switch (len)
	{
		case 3:
			h ^= data[2] << 16;
		case 2:
			h ^= data[1] << 8;
		case 1:
			h ^= data[0];
			h *= m;
	}

	h ^= h >> 13;
	h *= m;
	h ^= h >> 15;

	return h;
}
