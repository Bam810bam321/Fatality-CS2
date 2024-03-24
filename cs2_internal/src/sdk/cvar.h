#pragma once
#include "color.h"
#include "macros.h"
#include "math/vector.h"
#include "utl/utl_linked_list.h"
#include "utl/utl_memory.h"

namespace sdk
{
	enum cvar_flags : int
	{
		FCVAR_NONE = 0,
		FCVAR_UNREGISTERED = (1 << 0),
		FCVAR_DEVELOPMENTONLY = (1 << 1),
		FCVAR_GAMEDLL = (1 << 2),
		FCVAR_CLIENTDLL = (1 << 3),
		FCVAR_HIDDEN = (1 << 4),
		FCVAR_PROTECTED = (1 << 5),
		FCVAR_SPONLY = (1 << 6),
		FCVAR_ARCHIVE = (1 << 7),
		FCVAR_NOTIFY = (1 << 8),
		FCVAR_USERINFO = (1 << 9),
		FCVAR_CHEAT = (1 << 14),
		FCVAR_PRINTABLEONLY = (1 << 10),
		FCVAR_UNLOGGED = (1 << 11),
		FCVAR_NEVER_AS_STRING = (1 << 12),
		FCVAR_REPLICATED = (1 << 13),
		// TODO: (1 << 14) used somehow
		FCVAR_DEMO = (1 << 16),
		FCVAR_DONTRECORD = (1 << 17),
		FCVAR_RELOAD_MATERIALS = (1 << 20),
		FCVAR_RELOAD_TEXTURES = (1 << 21),
		FCVAR_NOT_CONNECTED = (1 << 22),
		FCVAR_MATERIAL_SYSTEM_THREAD = (1 << 23),
		FCVAR_ARCHIVE_XBOX = (1 << 24),
		FCVAR_ACCESSIBLE_FROM_THREADS = (1 << 25),
		FCVAR_SERVER_CAN_EXECUTE = (1 << 28),
		FCVAR_SERVER_CANNOT_QUERY = (1 << 29),
		FCVAR_CLIENTCMD_CAN_EXECUTE = (1 << 30),
		FCVAR_MATERIAL_THREAD_MASK = (FCVAR_RELOAD_MATERIALS | FCVAR_RELOAD_TEXTURES | FCVAR_MATERIAL_SYSTEM_THREAD)
	};

	union cvar_value_t
	{
		bool i1;
		short i16;
		uint16_t u16;
		int i32;
		uint32_t u32;
		int64_t i64;
		uint64_t u64;
		float fl;
		double db;
		const char *sz;
		color clr;
		vector2d vec2;
		vector vec3;
		vector4d vec4;
		qangle ang;
	};

	struct convar
	{
		const char* name; // 0x0000
		convar* next; // 0x0008
		MEM_PAD(0x10); // 0x0010
		const char* description; // 0x0020
		uint32_t type; // 0x28
		uint32_t registered; // 0x2C
		uint32_t flags; // 0x30
		MEM_PAD(0x8); // 0x34
		// @note: read-only, mofify with caution
		cvar_value_t value; // 0x40
	};

	struct ccvar
	{
		PAD(0x40);
		cutl_linked_list<convar *> cvars;

		convar *find(uint32_t name)
		{
			for (int i = cvars.head(); i != cvars.invalid_index(); i = cvars.next(i))
			{
				convar *cvar = cvars.element(i);
				if (!cvar)
					continue;

				if (FNV1A_CMP_IM(cvar->name, name))
					return cvar;
			}

			return nullptr;
		}

		void unlock()
		{
			for (int i = cvars.head(); i != cvars.invalid_index(); i = cvars.next(i))
			{
				convar *cvar = cvars.element(i);
				if (!cvar)
					continue;

				cvar->flags &= ~FCVAR_HIDDEN;
				cvar->flags &= ~FCVAR_DEVELOPMENTONLY;
			}
		}
	};

} // namespace sdk

#define var(name) static auto name = sdk::Cvar->find(FNV1A(#name))
