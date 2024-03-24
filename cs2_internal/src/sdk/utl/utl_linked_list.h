#pragma once
#include "utl_memory.h"


template <class T, class I>
struct utl_linked_list_element_t
{
	utl_linked_list_element_t(const utl_linked_list_element_t &) = delete;

	T elem;
	I previous;
	I next;
};

template <class T, class S = unsigned short, bool ML = false, class I = S, class M = cutl_memory<utl_linked_list_element_t<T, S>, I>>
class cutl_linked_list
{
	using elem_type_t = T;
	using index_type_t = S;
	using index_local_type_t = I;
	using memory_allocator_t = M;

	template <typename list_t>
	class const_iterator_t
	{
	public:
		using elem_type_t = typename list_t::elem_type_t;
		using index_type_t = typename list_t::index_type_t;

		const_iterator_t() :
			list(nullptr), index(list_t::invalid_index()) {}

		const_iterator_t(const list_t &list, index_type_t nIndex) :
			list(&list), index(nIndex) {}

		const_iterator_t &operator++()
		{
			index = list->next(index);
			return *this;
		}

		const_iterator_t operator++(int)
		{
			const_iterator_t copy = *this;
			++(*this);
			return copy;
		}

		const_iterator_t &operator--()
		{
			index = (index == list->invalid_index() ? list->Tail() : list->Previous(index));
			return *this;
		}

		const_iterator_t operator--(int)
		{
			const_iterator_t copy = *this;
			--(*this);
			return copy;
		}

		bool operator==(const const_iterator_t &other) const { return index == other.index; }
		bool operator!=(const const_iterator_t &other) const { return index != other.index; }

		const elem_type_t &operator*() const { return list->Element(index); }
		const elem_type_t *operator->() const { return (&**this); }

	protected:
		const list_t *list;
		index_type_t index;
	};

public:
	cutl_linked_list(int nGrowSize = 0, int nSize = 0) :
		_memory(nGrowSize, nSize), _head(invalid_index()), _tail(invalid_index()), _first_free(invalid_index()), _elem_count(0), _num_allocated(0),
		_last_alloc(_memory.invalid_iterator()), _elements(_memory.base()) {}

	cutl_linked_list(const cutl_linked_list &) = delete;
	cutl_linked_list &operator=(const cutl_linked_list &) = delete;

	T &operator[](const I idx) { return _memory[idx].elem; }
	const T &operator[](const I idx) const { return _memory[idx].elem; }

	T &element(const I idx) { return _memory[idx].elem; }
	const T &element(const I idx) const { return _memory[idx].elem; }

	I head() const { return _head; }
	I tail() const { return _tail; }

	I prev(const I idx) const { return internal_element(idx).prev; }
	I next(const I idx) const { return internal_element(idx).next; }

	static S invalid_index() { return static_cast<S>(M::invalid_index()); }

	auto begin() const { return const_iterator_t<cutl_linked_list<T, S, ML, I, M>>(*this, head()); }
	auto begin() { return iterator_t<cutl_linked_list<T, S, ML, I, M>>(*this, head()); }
	auto end() const { return const_iterator_t<cutl_linked_list<T, S, ML, I, M>>(*this, invalid_index()); }
	auto end() { return iterator_t<cutl_linked_list<T, S, ML, I, M>>(*this, invalid_index()); }

protected:
	using list_element_t = utl_linked_list_element_t<T, S>;

	list_element_t &internal_element(const I idx) { return _memory[idx]; }
	const list_element_t &internal_element(const I idx) const { return _memory[idx]; }

	M _memory;
	I _head;
	I _tail;
	I _first_free;
	I _elem_count;
	I _num_allocated;
	typename M::iterator_t _last_alloc;
	list_element_t *_elements;
};
