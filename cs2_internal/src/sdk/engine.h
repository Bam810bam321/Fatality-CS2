#pragma once

namespace sdk
{
	struct cengine_client
	{
		/*VIRTUAL(32, in_game(), bool(__thiscall*)(void*))();
		VIRTUAL(33, is_connected(), bool(__thiscall*)(void*))();
		VIRTUAL(50, get_screen_size(int &w, int &h), void(__thiscall *)(void *, int &, int &))(w, h);*/

		int max_clients()
		{
			return MEM::CallVFunc<int, 31U>(this);
		}

		bool in_game()
		{
			return MEM::CallVFunc<bool, 32U>(this);
		}

		bool is_connected()
		{
			return MEM::CallVFunc<bool, 33U>(this);
		}

		// return CBaseHandle index
		int get_local()
		{
			int nIndex = -1;

			MEM::CallVFunc<void, 44U>(this, std::ref(nIndex), 0);

			return nIndex + 1;
		}

		void get_screen_size(int& w, int& h)
		{
			MEM::CallVFunc<void, 50U>(this, w, h);
		}

		const char* level_name()
		{
			return MEM::CallVFunc<const char*, 53U>(this);
		}

		const char* level_name_short()
		{
			return MEM::CallVFunc<const char*, 54U>(this);
		}

		const char* product_version_string()
		{
			return MEM::CallVFunc<const char*, 78U>(this);
		}
	};

	struct cgame_ui_funcs
	{
		MFUNC(get_binding_for_button_code(int code), const char *(*)(void *, int), engine2, cgame_ui_funcs::get_binding_for_button_code)(code);
	};
} // namespace sdk
