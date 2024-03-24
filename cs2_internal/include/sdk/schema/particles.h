// generated on: 11/6/2023

#ifndef SDK_SCHEMA_PARTICLES_H
#define SDK_SCHEMA_PARTICLES_H

#include <cstdint>

namespace sdk
{
	namespace schema
	{
		namespace particles
		{
			class cparticle_binding_real_pulse;
			
			class cparticle_binding_real_pulse : public cparticle_collection_binding_instance
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cparticle_binding_real_pulse : public cparticle_collection_binding_instance

		} // namespace particles

	} // namespace schema

} // namespace sdk

#endif // SDK_SCHEMA_PARTICLES_H
