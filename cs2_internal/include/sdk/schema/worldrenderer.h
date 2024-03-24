// generated on: 11/6/2023

#ifndef SDK_SCHEMA_WORLDRENDERER_H
#define SDK_SCHEMA_WORLDRENDERER_H

#include <cstdint>

namespace sdk
{
	namespace schema
	{
		namespace worldrenderer
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
				MEMBER(name_stringable_index, worldrenderer::centity_identity, int);
				MEMBER(name, worldrenderer::centity_identity, cutl_symbol_large);
				MEMBER(designer_name, worldrenderer::centity_identity, cutl_symbol_large);
				MEMBER(flags, worldrenderer::centity_identity, uint32_t);
				MEMBER(world_group_id, worldrenderer::centity_identity, world_group_id_t);
				MEMBER(data_object_types, worldrenderer::centity_identity, uint32_t);
				MEMBER(path_index, worldrenderer::centity_identity, change_accessor_field_path_index_t);
				MEMBER(prev_ptr, worldrenderer::centity_identity, centity_identity*);
				MEMBER(next_ptr, worldrenderer::centity_identity, centity_identity*);
				MEMBER(prev_by_class_ptr, worldrenderer::centity_identity, centity_identity*);
				MEMBER(next_by_class_ptr, worldrenderer::centity_identity, centity_identity*);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class centity_identity

			class centity_instance
			{
			public:
				MEMBER(isz_private_vscripts, worldrenderer::centity_instance, cutl_symbol_large);
				MEMBER(entity_ptr, worldrenderer::centity_instance, centity_identity*);
				MEMBER(cscript_component_ptr, worldrenderer::centity_instance, cscript_component*);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class centity_instance

			class cscript_component : public centity_component
			{
			public:
				MEMBER(script_class_name, worldrenderer::cscript_component, cutl_symbol_large);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cscript_component : public centity_component

		} // namespace worldrenderer

	} // namespace schema

} // namespace sdk

#endif // SDK_SCHEMA_WORLDRENDERER_H
