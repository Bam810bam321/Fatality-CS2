#ifndef SDK_UTL_UTL_TS_HASH_H
#define SDK_UTL_UTL_TS_HASH_H

#include <cstdint>
#include <sdk/macros.h>

using utl_ts_hash_handle = uint64_t;

class utl_memory_pool
{
public:
	// returns number of allocated blocks
	int block_size() const { return blocks_per_blob; }
	int count() const { return block_allocated_size; }
	int peak_count() const { return peak_alloc; }

private:
	int block_sz;
	int blocks_per_blob;
	int grow_mode;
	int blocks_allocated;
	int block_allocated_size;
	int peak_alloc;
};

template <class T, class Key = uint64_t>
class utl_ts_hash
{
public:
	static utl_ts_hash_handle invalid_handle(void) { return utl_ts_hash_handle{}; }

	int block_size() const { return entry_memory.block_size(); }
	int count() const { return entry_memory.count(); }

	std::vector<T> get_elements(void)
	{
		std::vector<T> list;

		const int n_count = count();
		auto n_index = 0;
		auto &unallocated_data = buckets.unallocated_data;
		for (auto element = unallocated_data; element; element = element->next)
		{
			for (auto i = 0; i < block_size() && i != n_count; i++)
			{
				list.emplace_back(element->current_block_list.at(i).data);
				n_index++;

				if (n_index >= n_count)
					break;
			}
		}

		return list;
	}

public:
	template <typename Data>
	struct hash_fixed_data_internal_t
	{
		Key ui_key;
		hash_fixed_data_internal_t<Data> *next;
		Data data;
	};

	using hash_fixed_data_t = hash_fixed_data_internal_t<T>;

	template <typename Data>
	struct hash_fixed_struct_data_internal_t
	{
		Data data;
		Key ui_key;
		PAD(8);
	};

	using hash_fixed_struct_data_t = hash_fixed_struct_data_internal_t<T>;

	struct hash_struct_data_t
	{
		PAD(0x10);
		std::array<hash_fixed_struct_data_t, 256> list;
	};

	struct hash_allocated_data_t
	{
	public:
		auto get_list() { return list; }

	private:
		PAD(0x10);
		std::array<hash_fixed_data_t, 128> list;
	};

	template <typename Data>
	struct hash_bucket_data_internal_t
	{
		Data data;
		hash_fixed_data_internal_t<Data> *next;
		Key ui_key;
	};

	using hash_bucket_data_t = hash_bucket_data_internal_t<T>;

	struct hash_unallocated_data_t
	{
		hash_unallocated_data_t *next{};
		Key k_6114;
		Key ui_key;
		Key unk;
		std::array<hash_bucket_data_t, 256> current_block_list;
	};

	struct hash_bucket_t
	{
		hash_struct_data_t *struct_data{};
		void *mutex_list{};
		hash_allocated_data_t *allocated_data{};
		hash_unallocated_data_t *unallocated_data{};
	};

	utl_memory_pool entry_memory;
	hash_bucket_t buckets;
	bool needs_commit{};
};

#endif // SDK_UTL_UTL_TS_HASH_H
