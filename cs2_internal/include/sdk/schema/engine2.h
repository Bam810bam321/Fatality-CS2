// generated on: 11/6/2023

#ifndef SDK_SCHEMA_ENGINE2_H
#define SDK_SCHEMA_ENGINE2_H

#include <cstdint>

namespace sdk
{
	namespace schema
	{
		namespace engine2
		{
			class centity_component;
			class centity_identity;
			class centity_instance;
			class cscript_component;
			
			class centity_component
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class centity_component

			class centity_identity
			{
			public:
				MEMBER(name_stringable_index, engine2::centity_identity, int);
				MEMBER(name, engine2::centity_identity, cutl_symbol_large);
				MEMBER(designer_name, engine2::centity_identity, cutl_symbol_large);
				MEMBER(flags, engine2::centity_identity, uint32_t);
				MEMBER(world_group_id, engine2::centity_identity, world_group_id_t);
				MEMBER(data_object_types, engine2::centity_identity, uint32_t);
				MEMBER(path_index, engine2::centity_identity, change_accessor_field_path_index_t);
				MEMBER(prev_ptr, engine2::centity_identity, centity_identity*);
				MEMBER(next_ptr, engine2::centity_identity, centity_identity*);
				MEMBER(prev_by_class_ptr, engine2::centity_identity, centity_identity*);
				MEMBER(next_by_class_ptr, engine2::centity_identity, centity_identity*);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class centity_identity

			class centity_instance
			{
			public:
				MEMBER(isz_private_vscripts, engine2::centity_instance, cutl_symbol_large);
				MEMBER(entity_ptr, engine2::centity_instance, centity_identity*);
				MEMBER(cscript_component_ptr, engine2::centity_instance, cscript_component*);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class centity_instance

			class cscript_component : public centity_component
			{
			public:
				MEMBER(script_class_name, engine2::cscript_component, cutl_symbol_large);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cscript_component : public centity_component

		} // namespace engine2

	} // namespace schema

} // namespace sdk

#endif // SDK_SCHEMA_ENGINE2_H
