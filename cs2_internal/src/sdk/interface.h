#pragma once

#include <utils/mem.h>

namespace sdk
{
	using interface_fn = void *(__cdecl *)();

	struct interface_entry_t
	{
		interface_fn callback;
		const char *name;
		interface_entry_t *flink;
	};

	inline uintptr_t get_interface(uint32_t mod, uint32_t iface)
	{
		const auto create_interface = static_cast<ptrdiff_t>(utils::find_export(mod, FNV1A("CreateInterface")));
		if (!create_interface)
			return 0;

		const auto if_list = *reinterpret_cast<interface_entry_t **>(utils::follow_rel32(create_interface, 3));
		if (!if_list)
			return 0;

		for (auto it = if_list; it; it = it->flink)
		{
			if (FNV1A_CMP_IM(it->name, iface))
				return reinterpret_cast<uintptr_t>(it->callback());
		}

		return 0;
	}
}
