#pragma once

#include <gui/controls/selectable.h>

namespace evo::gui
{
	class selectable_inv : public selectable
	{
	public:
		selectable_inv(control_id id, const std::string &t, const ren::color &c, bool sct, bool st) :
			selectable(std::move(id), t, c), is_ct(sct), is_t(st)
		{
			if (sct || st)
				tooltip += XOR("Equipped: ");
			if (sct)
				tooltip += XOR("CT");
			if (st)
			{
				if (sct)
					tooltip += XOR(", ");
				tooltip += XOR("T");
			}
		}

		void render() override;

		bool is_ct{}, is_t{};
	};
}
