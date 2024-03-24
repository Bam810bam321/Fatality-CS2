#pragma once

#define STRINGIFY(x) #x
#define CONCAT_IMPL(x, y) x##y
#define CONCAT(x, y) CONCAT_IMPL(x, y)

template <typename t, t v>
struct constant_holder
{
	enum class val_holder : t
	{
		val = v
	};
};

#define CONSTANT(value) ((decltype(value))constant_holder<decltype(value), value>::val_holder::val)

#include <utils/fnv1a.h>
#include <utils/random.h>

#ifndef _DEBUG
#define XOR(s)  (s)
#else
#define XOR(s) (s)
#endif
#define XOR_S(s) std::string(s)

#define DEC(n, s)                                                                                                      \
	volatile auto CONCAT(n, _char) = reinterpret_cast<char *>(_alloca(((s).length()) * sizeof(char)));                 \
	for (auto i = 0; i < (int)(s).length() - 1; i++)                                                                   \
		CONCAT(n, _char)[i] = (s)[i + 1] ^ (s)[0];                                                                     \
	auto(n) = std::string(CONCAT(n, _char), std::max((int)(s).length() - 1, 0))

#define DEC_INLINE(s)                                                                                                  \
	[&]() noexcept -> std::string                                                                                       \
	{                                                                                                                  \
	volatile auto str = reinterpret_cast<char *>(_alloca(((s).length()) * sizeof(char)));                              \
	for (auto i = 0; i < (int)(s).length() - 1; i++)                                                                   \
		str[i] = (s)[i + 1] ^ (s)[0];                                                                                  \
	return std::string(str, std::max((int)(s).length() - 1, 0));                                                       \
	}()

template <size_t n, unsigned k>
struct  simple
{
private:
	constexpr char enc(const char c) const
	{
		return c ^ key; // NOLINT
	}

public:
	template <size_t... s>
	constexpr __forceinline  simple(const char *str, std::index_sequence<s...>) :
		key(utils::random::_char<k>::value), encrypted{enc(str[s])...} {}

	const size_t size = n;
	const char key;
	std::array<char, n + 1> encrypted;
};

#define ENC_KEY(s)  simple<sizeof(s) - 1, __COUNTER__>(s, std::make_index_sequence<sizeof(s) - 1>())

#define ENC(s)                                                                                                         \
	[]() noexcept -> std::string                                                                                       \
	{                                                                                                                  \
		constexpr auto e = ENC_KEY(s);                                                                                 \
		std::string res;                                                                                               \
		res += e.key;                                                                                                  \
		for (size_t i = 0; i < e.size; i++)                                                                            \
			res += e.encrypted[i];                                                                                     \
		return res;                                                                                                    \
	}()

#define ENC2(s)                                                                                                        \
	[&]() noexcept -> std::string                                                                                      \
	{                                                                                                                  \
		auto key = rand() % 0x7F;                                                                                      \
		std::string res;                                                                                               \
		res += key;                                                                                                    \
		for (size_t i = 0; i < (s).length(); i++)                                                                      \
			res += (s)[i] ^ key;                                                                                       \
		return res;                                                                                                    \
	}()
