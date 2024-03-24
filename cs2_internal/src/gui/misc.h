#ifndef GUI_TESTER_MISC_H
#define GUI_TESTER_MISC_H

#include <string>

#define WIN32_LEAN_AND_MEAN
#include <Windows.h>

#define GUI_HASH(s) uint64_t(evo::gui::msvc_constexpr<unsigned long long, evo::gui::hash(s)>::_)
#define GUI_HASH_32(s) uint32_t(evo::gui::msvc_constexpr<unsigned int, evo::gui::hash_32(s)>::_)

#include <ren/types/color.h>

namespace evo::gui
{
	template <typename T, T V>
	struct msvc_constexpr
	{
		enum
		{
			_ = V
		};
	};

	inline constexpr unsigned int hash_32(const char *str)
	{
		constexpr auto prime = 0x01000193;
		constexpr auto basis = 0x811c9dc5;

		unsigned int h{basis};
		for (auto c = str; *c; ++c)
			h = (h ^ *c) * prime;

		return h;
	}

	inline unsigned int hash_32(const std::string &str)
	{
		return hash_32(str.c_str());
	}

	inline constexpr unsigned long long hash(const char *str)
	{
		constexpr auto prime = 0x100000001b3;
		constexpr auto basis = 0xcbf29ce484222325;

		unsigned long long h{basis};
		for (auto c = str; *c; ++c)
			h = (h ^ *c) * prime;

		return h;
	}

	inline unsigned long long hash(const std::string &str)
	{
		return hash(str.c_str());
	}

	inline std::string color_to_string(const ren::color &c)
	{
		static const auto make_color_part = [](uint8_t col) -> std::string
		{
			char temp_col[3]{};

			sprintf_s(temp_col, "%02x", col);
			return temp_col;
		};

		std::string str{};
		str += "#";
		str += make_color_part(c.get_r() & 0xFF);
		str += make_color_part(c.get_g() & 0xFF);
		str += make_color_part(c.get_b() & 0xFF);
		str += make_color_part(c.get_a() & 0xFF);

		return str;
	}

	inline std::optional<ren::color> color_from_string(const std::string &str)
	{
		uint32_t r{}, g{}, b{}, a{};
		const auto ret = sscanf_s(str.c_str(), "#%02x%02x%02x%02x", &r, &g, &b, &a);
		if (ret < 3)
			return {};

		ren::color c;
		c.value.r = (float)r / 255.f;
		c.value.g = (float)g / 255.f;
		c.value.b = (float)b / 255.f;
		c.value.a = ret == 4 ? ((float)a / 255.f) : 1.f;

		return c;
	}

	namespace native
	{
		class global
		{
		public:
			global(HANDLE h)
			{
				object = h;
			}

			global(int flags, size_t size) :
				size(size)
			{
				object = GlobalAlloc(flags, size);
			}

			HGLOBAL get()
			{
				return object;
			}

			void write(const void *mem, size_t sz)
			{
				memcpy_s(lock(), size, mem, sz);
				unlock();
			}

			void *lock()
			{
				return GlobalLock(object);
			}

			void unlock()
			{
				GlobalUnlock(object);
			}

		private:
			HGLOBAL object{};
			size_t size{};
		};
	}

	namespace clipboard
	{
		inline void set(const std::string &text)
		{
			using namespace ren;
			if (!OpenClipboard(nullptr))
				return;

			EmptyClipboard();

			native::global mem(GMEM_MOVEABLE, text.size() + 1);
			mem.write(reinterpret_cast<const void *>(text.data()), text.size());

			SetClipboardData(CF_TEXT, mem.get());
			CloseClipboard();
		}

		inline std::string get()
		{
			using namespace ren;
			if (!OpenClipboard(nullptr))
				return "";

			std::string ret{};
			native::global mem(GetClipboardData(CF_TEXT));

			if (!mem.get())
				return "";

			const auto data = reinterpret_cast<char *>(mem.lock());
			ret = data;

			mem.unlock();

			CloseClipboard();
			return ret;
		}
	}
}

#endif //GUI_TESTER_MISC_H
