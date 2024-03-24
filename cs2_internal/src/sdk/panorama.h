#pragma once
#include <game/game.h>

namespace sdk
{
	struct ui_event_t
	{
		uintptr_t vtable; // 0x00
		short unk1; // 0x08
		PAD(2);
		uintptr_t unk2; // 0x0C
		PAD(4);
		int priority; // 0x18
		PAD(4);
		char *str; // 0x20
	};

	struct cui_engine
	{
		VIRTUAL(49, fire_ui_event(ui_event_t *ev), void(__thiscall *)(void *, ui_event_t *))(ev);
	};

	struct image_data_t
	{
		image_data_t(std::vector<uint8_t> &buf)
		{
			reinterpret_cast<void *(__fastcall *)(void *, int, int, int)>(game->tier0.at(offsets::functions::utlbuffer::ctor))(pad, 0, 0, 0);
			*reinterpret_cast<uintptr_t *>(pad) = reinterpret_cast<uintptr_t>(buf.data());
			*reinterpret_cast<uint32_t *>(reinterpret_cast<uintptr_t>(pad) + 8) = buf.size();
		}

		bool load_svg(uint8_t *img, size_t s, uint32_t *w, uint32_t *h)
		{
			uint16_t magic[] = {0x33, 0x34, 0x35, 0x5c, 0x37, 0x33, 0x30, 0x5c, 0x6c, 0x6f, 0x63, 0x61, 0x6c, 0x5c, 0x70, 0x61, 0x6e, 0x6f, 0x72, 0x61, 0x6d, 0x61, 0x00};
			return reinterpret_cast<bool(__fastcall *)(void *, uint32_t, void *, uint32_t *, uint32_t *, float, void *)>(game->panorama.at(
				offsets::functions::panorama::load_svg))(img, s, pad, w, h, 1.f, magic);
		}

		char pad[0x3C];
	};
} // namespace sdk
