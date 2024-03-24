#pragma once

#include <gui/controls/selectable.h>

//#include "lua/engine.h"
//
//namespace evo::gui
//{
//	class selectable_script : public selectable
//	{
//	public:
//		selectable_script(control_id id, lua::script_file &f) :
//			selectable(std::move(id), f.get_name()), file(f)
//		{
//			if (f.metadata.description.has_value() || f.metadata.author.has_value())
//			{
//				if (f.metadata.description.has_value())
//					tooltip += *f.metadata.description + XOR(".");
//				if (f.metadata.author.has_value())
//				{
//					if (!tooltip.empty())
//						tooltip += XOR(" ");
//
//					tooltip += XOR("Author: ") + *f.metadata.author;
//				}
//			}
//		}
//
//		void render() override;
//
//		lua::script_file &file;
//	};
//}
