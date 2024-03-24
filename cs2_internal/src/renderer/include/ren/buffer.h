#ifndef REN_LINKER_BUFFER_H
#define REN_LINKER_BUFFER_H

#include <memory>

namespace evo::ren
{
	/**
	 * Base class for buffers.
	 * @note Write technique: reset before touching at all, continue to write
	 * @note Read technique: reset before reading, read while has_more_data() is true
	 */
	class buffer_base
	{
	public:
		virtual ~buffer_base() = default;

		virtual void create(size_t sz) = 0;
		virtual void destroy() = 0;
		virtual void lock() = 0;
		virtual void unlock() = 0;

		void reset(bool full_cycle = false)
		{
			pos = 0;
			if (full_cycle)
				real_size = 0;
		}

		void swap(const std::shared_ptr<buffer_base> &other)
		{
			std::swap(object, other->object);
			std::swap(size, other->size);
			std::swap(real_size, other->real_size);
			std::swap(data, other->data);
			std::swap(pos, other->pos);
		}

		template <typename T>
		void write(const T &obj)
		{
			constexpr auto sz = sizeof(T);
			if (pos + sz >= size)
				grow();

			memcpy(data + pos, &obj, sz);
			pos += sz;
			real_size += sz;
		}

		[[nodiscard]] bool has_more_data() const { return pos < real_size; }

		template <typename T>
		T &read()
		{
			constexpr auto sz = sizeof(T);
			if (pos >= real_size)
				throw;

			auto &d = *(T *)(data + pos);
			pos += sz;

			return d;
		}

		void grow()
		{
			const auto old_size = size;
			auto old_data = new char[size];
			memcpy(old_data, data, size);

			unlock();
			destroy();

			size *= 2;
			create(size);
			lock();

			memcpy(data, old_data, old_size);
			delete[] old_data;
		}

		void *object{};
		size_t size{}, real_size{};
		char *data{};
		bool should_discard{true}, is_deferred{};

	protected:
		size_t pos{};
	};
} // namespace evo::ren

#endif // REN_LINKER_BUFFER_H
