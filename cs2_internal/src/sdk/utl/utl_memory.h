#ifndef SDK_UTL_UTL_MEMORY_H
#define SDK_UTL_UTL_MEMORY_H

template <class T, class I = int>
class cutl_memory
{
public:
	class iterator_t
	{
	public:
		iterator_t(const I idx) :
			idx(idx) {}

		bool operator==(const iterator_t it) const { return idx == it.idx; }
		bool operator!=(const iterator_t it) const { return idx != it.idx; }

		I idx;
	};

	T *base() { return memory; }
	const T *base() const { return memory; }

	T &operator[](const I idx) { return memory[idx]; }
	const T &operator[](const I idx) const { return memory[idx]; }

	T &elem(const I idx) { return memory[idx]; }
	const T &elem(const I idx) const { return memory[idx]; }

	static I invalid_index() { return static_cast<I>(-1); }
	bool is_valid_index(I idx) const { return idx >= 0 && idx < alloc_count; }

	iterator_t first() const { return iterator_t(is_valid_index(0) ? 0 : invalid_index()); }
	iterator_t next(const iterator_t &it) const { return iterator_t(is_valid_index(it.idx + 1) ? it.idx + 1 : invalid_index()); }


	T *memory;
	int alloc_count;
	int grow_size;
};

#endif // SDK_UTL_UTL_MEMORY_H
