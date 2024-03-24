#pragma once

#include <array>
#include <sdk/macros.h>
#include <sdk/utl.h>

namespace sdk
{
	class schema_type;

	struct schema_type_t
	{
		PAD(8);
		const char *name;
	};

	struct schema_class_binding_t
	{
		schema_class_binding_t *parent;
		const char *binary_name;
		const char *module_name;
		const char *class_name;
		char pad[24];
		schema_type_t *type;
	};

	struct schema_class_field_data_t
	{
		const char *name;
		schema_type *type;
		short offset;
		PAD(0xe);
	};

	struct schema_class_info_data_t
	{
		PAD(8);
		const char *name;
		const char *mod;
		int size;
		short field_size;
		short static_size;
		short meta_size;
		PAD(6);
		schema_class_field_data_t *fields;
	};

	class schema_enum_binding
	{
	public:
		virtual const char *get_binding_name() = 0;
		virtual void *as_class_binding() = 0;
		virtual schema_enum_binding *as_enum_binding() = 0;
		virtual const char *get_binary_name() = 0;
		virtual const char *get_project_name() = 0;

		char *binding_name;
	};

	class schema_system_type_scope
	{
	public:
		VIRTUAL(2, find_type_declared_class(const char *name), schema_class_info_data_t *(__thiscall *)(void *, const char *))(name);

		PAD(8);
		std::array<char, 256> name_value;
		PAD(0x450);
		utl_ts_hash<schema_class_binding_t *> classes;
		PAD(0x2804);
	};

	class schema_type
	{
		struct array_t
		{
			int size;
			int pad;
			schema_type *type;
		};

		struct atomic_t
		{
			uint64_t pad[2];
			schema_type *type;
		};

		struct atomic_tt
		{
			uint64_t pad[2];
			schema_type *types[2];
		};

		struct atomic_i
		{
			uint64_t pad[2];
			uint64_t i;
		};

	public:
		VIRTUAL(3, get_size(int *out, uint8_t *unk), int(__thiscall *)(void *, int *, uint8_t *))(out, unk);

		bool get_size(int *out)
		{
			uint8_t unk{};
			return get_size(out, &unk);
		}

		schema_type *get_ref_class()
		{
			if (category != 1)
				return nullptr;

			auto ptr = type;
			while (ptr && ptr->category == 1)
				ptr = ptr->type;

			return ptr;
		}

		PAD(8);
		const char *name;
		schema_system_type_scope *type_scope;
		uint8_t category;
		uint8_t atomic_category;

		union
		{
			schema_type *type;
			schema_class_info_data_t *class_info;
			void *enum_binding;
			array_t arr;
			atomic_t t;
			atomic_tt tt;
			atomic_i i;
		};
	};

	class schema_system_t
	{
	public:
		VIRTUAL(11, get_global_type(), schema_system_type_scope *(__thiscall *)(void *))();
		VIRTUAL(13, get_type_scope_for_module(const char *name), schema_system_type_scope *(__thiscall *)(void *, const char *))(name);
	};
}
