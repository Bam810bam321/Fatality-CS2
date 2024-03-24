#ifndef VALUES_E2A14AB316F946FC9D04D93BE95D0975_H
#define VALUES_E2A14AB316F946FC9D04D93BE95D0975_H

#include <cstdint>
#include <stdexcept>
#include <optional>
#include <ostream>
#include <istream>
#include <vector>
#include <unordered_map>

#include <ren/types/color.h>

#include <gui/hotkeys.h>

namespace evo::gui
{
	class bits
	{
	public:
		bits(uint64_t val = {}) :
			v(val) {}

		operator uint64_t() const
		{
			return v;
		}

		void reset()
		{
			v = 0;
		}

		std::optional<char> first_set_bit() const
		{
			for (char i = 0; i < sizeof(uint64_t) * 8; i++)
			{
				if (get(i))
					return i;
			}

			return std::nullopt;
		}

		bool none() const
		{
			return !first_set_bit();
		}

		void set(char n)
		{
			assert_n(n);
			v |= (uint64_t)1 << (uint64_t)n;
		}

		void unset(char n)
		{
			assert_n(n);
			v &= ~((uint64_t)1 << (uint64_t)n);
		}

		bool get(char n) const
		{
			assert_n(n);
			return v & ((uint64_t)1 << (uint64_t)n);
		}

		// std::bitset compatibility
		bool test(char n) const
		{
			return get(n);
		}

		void toggle(char n)
		{
			get(n) ? unset(n) : set(n);
		}

	private:
		void assert_n(char n) const
		{
			if (n > sizeof(v) * 8 - 1 || n < 0)
				throw;
		}

		uint64_t v{};
	};

	class value_entry
	{
	public:
		virtual void reset() = 0;
		virtual size_t get_size() = 0;
		virtual void serialize(std::ostream &stream) = 0;
		virtual bool deserialize(std::istream &stream) = 0;
	};

	enum value_type
	{
		vt_variable,
		vt_bool,
		vt_int,
		vt_float,
		vt_color,
		vt_bits,
		vt_array,
		vt_max
	};

	template <typename T>
	class value_param : public value_entry
	{
	public:
		value_param()
		{
			deduct_type();
		}

		value_param(const T &v) :
			value(v), def(v) // NOLINT(google-explicit-constructor)
		{
			deduct_type();
		}

		value_param(const value_param<T> &other) :
			value(other.value), hotkeys(other.hotkeys), def(other.def)
		{
			deduct_type();
		}

		void operator=(const T &v)
		{
			value = v;
		}

		void operator=(const value_param<T> &other)
		{
			value = other.value;
			def = other.def;
			hotkeys = other.hotkeys;
		}

		operator T() const
		{
			return value;
		}

		T *operator ->()
		{
			return &value;
		}

		T &operator *()
		{
			return value;
		}

		void reset() override
		{
			value = def;
			hotkeys.clear();
		}

		void copy(value_param<T> &to)
		{
			to.value = value;
			to.hotkeys = hotkeys;
		}

		size_t get_size() override
		{
			size_t tot{};
			tot += sizeof(type); // type
			tot += sizeof(tot); // size
			tot += sizeof(T); // data
			tot += sizeof(decltype(hotkeys)::size_type); // hotkey amount
			tot += (sizeof(uint8_t) + sizeof(hotkey_info)) * hotkeys.size(); // hotkey data

			return tot;
		}

		void serialize(std::ostream &stream) override
		{
			const auto size = sizeof(T);

			// type
			stream.write(reinterpret_cast<const char *>(&type), sizeof(type));

			// size & value
			stream.write(reinterpret_cast<const char *>(&size), sizeof(size));
			stream.write(reinterpret_cast<const char *>(&value), size);

			const auto hk_count = hotkeys.size();
			stream.write(reinterpret_cast<const char *>(&hk_count), sizeof(hk_count));

			for (auto &hk : hotkeys)
			{
				stream.write(reinterpret_cast<const char *>(&hk.first), sizeof(hk.first));
				stream.write(reinterpret_cast<const char *>(&hk.second), sizeof(hk.second));
			}
		}

		bool deserialize(std::istream &stream) override
		{
			// type
			stream.read(reinterpret_cast<char *>(&type), sizeof(type));
			if (type < vt_variable || type >= vt_max)
				return false;

			// size and value
			size_t size{};
			stream.read(reinterpret_cast<char *>(&size), sizeof(size));

			if (size != sizeof(value))
				return false;

			stream.read(reinterpret_cast<char *>(&value), size);

			size_t hk_count{};
			stream.read(reinterpret_cast<char *>(&hk_count), sizeof(hk_count));

			for (auto i = 0; i < hk_count; i++)
			{
				uint8_t hk_key{};
				hotkey_info hk_value{};

				stream.read(reinterpret_cast<char *>(&hk_key), sizeof(hk_key));
				stream.read(reinterpret_cast<char *>(&hk_value), sizeof(hk_value));

				hotkeys[hk_key] = hk_value;
			}

			return true;
		}

		void update_hotkeys(const hotkeys_t &hk)
		{
			hotkeys = hk;
		}

		const hotkeys_t &get_hotkey_table()
		{
			return hotkeys;
		}

		void set(const T &v)
		{
			value = v;
		}

		T &get()
		{
			return value;
		}

		bool was_changed()
		{
			return value != def;
		}

		value_type type{};

	protected:
		void deduct_type()
		{
			if constexpr (std::is_same<T, bool>::value)
			{
				type = vt_bool;
			}
			else if constexpr (std::is_same<T, int>::value)
			{
				type = vt_int;
			}
			else if constexpr (std::is_same<T, float>::value)
			{
				type = vt_float;
			}
			else if constexpr (std::is_same<T, ren::color>::value)
			{
				type = vt_color;
			}
			else if constexpr (std::is_same<T, bits>::value)
			{
				type = vt_bits;
			}
		}

		T value{};
		hotkeys_t hotkeys{};

	private:
		T def{};
	};

	template <typename T>
	class value_param_array : public value_entry
	{
		using v_type = std::unordered_map<size_t, value_param<T>>;

	public:
		value_param_array() :
			def(T()) {}

		value_param_array(const T &v) :
			def(v) // NOLINT(google-explicit-constructor)
		{ }

		typename v_type::iterator begin()
		{
			return value.begin();
		}

		typename v_type::iterator end()
		{
			return value.end();
		}

		typename v_type::const_iterator begin() const
		{
			return value.begin();
		}

		typename v_type::const_iterator end() const
		{
			return value.end();
		}

		value_param<T> &operator[](size_t idx)
		{
			if (!value.contains(idx))
				value[idx] = value_param<T>{def};

			return value[idx];
		}

		void reset() override
		{
			for (auto &[_, v] : value)
				v.reset();
		}

		size_t get_size() override
		{
			size_t tot{};
			tot += sizeof(value_type); // type
			tot += sizeof(size_t); // elements amount

			// data
			for (auto &[_, p] : value)
				tot += p.get_size() + sizeof(size_t) * 2;

			return tot;
		}

		void serialize(std::ostream &stream) override
		{
			// type goes first, as always
			value_type type{vt_array};
			stream.write((const char *)&type, sizeof(type));

			// then element amount
			const auto sz = (size_t)value.size();
			stream.write((const char *)&sz, sizeof(sz));

			// now write datas themselves
			for (auto &[i, v] : value)
			{
				const auto ic = (size_t *)&i;
				stream.write((const char *)ic, sizeof(size_t));

				const auto v_sz = v.get_size();
				stream.write((const char *)&v_sz, sizeof(v_sz));
				v.serialize(stream);
			}
		}

		bool deserialize(std::istream &stream) override
		{
			// clear off
			reset();
			value_type type{};

			// type
			stream.read(reinterpret_cast<char *>(&type), sizeof(type));
			if (type != vt_array)
				return false;

			// element amt
			size_t amt{};
			stream.read((char *)&amt, sizeof(amt));

			while (amt--)
			{
				value_param<T> prm;

				size_t id, sz;
				stream.read((char *)&id, sizeof(id));
				stream.read((char *)&sz, sizeof(sz));

				if (value.contains(id))
				{
					if (value[id].deserialize(stream))
						continue;
				}

				// deserialize this one
				const auto cur = (size_t)stream.tellg();
				if (!prm.deserialize(stream))
				{
					stream.seekg(cur + sz);
					continue;
				}

				value[id] = prm;
			}

			return true;
		}

	protected:
		std::unordered_map<size_t, value_param<T>> value{};

	private:
		T def{};
	};
}

#endif //VALUES_E2A14AB316F946FC9D04D93BE95D0975_H
