#pragma once
#include "gui/gui.h"

namespace util
{
	inline std::string base64_encode(const std::string &data)
	{
		static constexpr char cl[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
									  'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
									  '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '+', '/'};

		const auto inp_sz = data.size();
		const auto out_sz = 4 * ((inp_sz + 2) / 3);

		std::string result(out_sz, '\0');

		auto p = result.data();
		size_t i{};
		for (i = 0; i < inp_sz - 2; i += 3)
		{
			*p++ = cl[data[i] >> 2 & 0x3F];
			*p++ = cl[(data[i] & 0x3) << 4 | static_cast<int>(data[i + 1] & 0xF0) >> 4];
			*p++ = cl[(data[i + 1] & 0xF) << 2 | static_cast<int>(data[i + 2] & 0xC0) >> 6];
			*p++ = cl[data[i + 2] & 0x3F];
		}

		if (i < inp_sz)
		{
			*p++ = cl[data[i] >> 2 & 0x3F];

			if (i == inp_sz - 1)
			{
				*p++ = cl[((data[i] & 0x3) << 4)];
				*p++ = '=';
			}
			else
			{
				*p++ = cl[(data[i] & 0x3) << 4 | static_cast<int>(data[i + 1] & 0xF0) >> 4];
				*p++ = cl[((data[i + 1] & 0xF) << 2)];
			}

			*p = '=';
		}

		return result;
	}

	inline std::string base64_decode(const std::string &data)
	{
		static constexpr uint8_t cl[] = {64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
										 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 62, 64, 64, 64, 63, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 64, 64, 64, 64, 64, 64,
										 64, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 64, 64, 64, 64, 64, 64, 26, 27,
										 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 64, 64, 64, 64, 64, 64, 64, 64,
										 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
										 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
										 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
										 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64};

		const auto inp_sz = data.size();
		if (inp_sz % 4 != 0)
			throw std::invalid_argument(XOR("The data is not a Base64-encoded string"));

		auto out_sz = inp_sz / 4 * 3;
		if (data[inp_sz - 1] == '=')
			out_sz--;
		if (data[inp_sz - 2] == '=')
			out_sz--;

		std::string result(out_sz, '\0');
		for (auto i = 0, j = 0; i < inp_sz;)
		{
			const auto a = data[i] == '=' ? 0U & i++ : cl[static_cast<uint32_t>(data[i++])];
			const auto b = data[i] == '=' ? 0U & i++ : cl[static_cast<uint32_t>(data[i++])];
			const auto c = data[i] == '=' ? 0U & i++ : cl[static_cast<uint32_t>(data[i++])];
			const auto d = data[i] == '=' ? 0U & i++ : cl[static_cast<uint32_t>(data[i++])];

			const auto t = (a << 3 * 6) + (b << 2 * 6) + (c << 1 * 6) + (d << 0 * 6);

			if (j < out_sz)
				result[j++] = (t >> 2 * 8) & 0xFF;
			if (j < out_sz)
				result[j++] = (t >> 1 * 8) & 0xFF;
			if (j < out_sz)
				result[j++] = (t >> 0 * 8) & 0xFF;
		}

		return result;
	}

	inline std::tm get_time(const std::optional<size_t> &t = {})
	{
		const auto cur = t.has_value() ? std::time_t(t.value()) : std::time(nullptr);

		std::tm data{};

		localtime_s(&data, &cur);

		return data;
	}

	inline long long get_unix_time()
	{
		auto tm = get_time();
		return mktime(&tm);
	}

	template <typename T>
	bool in_array(T val, const std::vector<T> &arr)
	{
		return std::find(arr.begin(), arr.end(), val) != arr.end();
	}

	inline std::vector<std::string> split(const std::string &str, const std::string &delim)
	{
		std::vector<std::string> tokens;
		size_t prev = 0, pos = 0;
		do
		{
			pos = str.find(delim, prev);
			if (pos == std::string::npos)
				pos = str.length();
			std::string token = str.substr(prev, pos - prev);
			if (!token.empty())
				tokens.push_back(token);
			prev = pos + delim.length();
		}
		while (pos < str.length() && prev < str.length());
		return tokens;
	}

	inline std::string get_game_dir()
	{
		char path[MAX_PATH];
		GetCurrentDirectoryA(MAX_PATH, path);
		const auto main_dir = std::string(path);
		return main_dir.substr(0, main_dir.size() - 9) + XOR("csgo\\");
	}

} // namespace util
