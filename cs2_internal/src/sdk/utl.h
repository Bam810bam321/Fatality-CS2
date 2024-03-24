#pragma once

namespace sdk
{
	struct utl_memory_pool
	{
		int block_size{}, blocks_per_blob{}, grow_mode{}, blocks_allocated{}, blocks_allocated_size{}, peak_alloc{};
	};

	template <typename T, typename K = uint64_t>
	struct utl_ts_hash
	{
		struct hash_fixed_data_t
		{
			K key;
			hash_fixed_data_t *next;
			T data;
		};

		struct hash_fixed_struct_data_t
		{
			T data;
			K key;
		};

		struct hash_struct_data_t
		{
			char pad[0x10];
			std::array<hash_fixed_struct_data_t, 256> list;
		};

		struct hash_allocated_data_t
		{
			char pad[0x18];
			std::array<hash_fixed_data_t, 128> list;
		};

		struct hash_bucket_data_t
		{
			T data;
			hash_fixed_data_t *next;
			K key;
		};

		struct hash_unallocated_data_t
		{
			hash_unallocated_data_t *next;
			K pad0;
			K key;
			K pad1;
			std::array<hash_bucket_data_t, 256> list;
		};

		struct hash_bucket_t
		{
			hash_struct_data_t *struct_data;
			void *mutex_list;
			hash_allocated_data_t *allocated_data;
			hash_unallocated_data_t *unallocated_data;
		};


		utl_memory_pool pool;
		hash_bucket_t bucket;
		bool dirty;
	};
}
