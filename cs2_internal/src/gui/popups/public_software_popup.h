#pragma once

#include <gui/controls/popup.h>

#include "macros.h"

namespace gui::popups
{
	class public_software_popup : public evo::gui::popup
	{
	public:
		explicit public_software_popup(evo::gui::control_id id) :
			evo::gui::popup(id, {}, {})
		{
			allow_move = true;
		}

		void on_first_render_call() override;
		void render() override;

	private:
		std::vector<std::tuple<std::string, std::string, std::string>> links{
			{ENC("libressl"), ENC("OpenSSL License"), ENC("https://github.com/ev0lve/libressl/blob/master/COPYING")},
			{ENC("json"), ENC("MIT License"), ENC("https://github.com/nlohmann/json/blob/develop/LICENSE.MIT")},
			{ENC("LuaJIT"), ENC("MIT License"), ENC("https://github.com/LuaJIT/LuaJIT/blob/v2.1/COPYRIGHT")},
			{ENC("miniz-cpp"), ENC("MIT License"), ENC("https://github.com/ev0lve/miniz-cpp/blob/master/LICENSE.md")},
			{ENC("ev0lve/gui"), ENC("powered by"), ENC("https://ev0lve.digital")},};
	};
}
