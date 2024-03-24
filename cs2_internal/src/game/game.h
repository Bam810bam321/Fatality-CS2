#pragma once

#include <macros.h>
#include <utils/value_obfuscation.h>
#include <utils/util.h>
#include <utils/mem.h>

#include "sdk/globalvars.h"
#include "sdk/math/vector.h"
#include "framework.h"

#include "memory/memory.h"

struct IDXGISwapChain;
class ISource2Client;

class ISwapChainDx11
{
	MEM_PAD(0x170);
	IDXGISwapChain* pDXGISwapChain;
};

namespace sdk
{
	struct global_vars_t;
	struct cgame_resource_service;
	struct cgame_entity_system;
	struct cengine_client;
	struct cs2_player_controller;
	struct ccsgo_input;
	struct cinput_system;
	struct cgame_ui_funcs;
	struct ccvar;
	struct clocalize;
	struct cui_engine;
	struct cmem_alloc;
	struct cprediction;

	inline ISwapChainDx11* SwapChain = nullptr;
	inline sdk::ccsgo_input* Input = nullptr;
	inline WNDPROC pOldWndProc = nullptr;
	inline HWND hWindow = nullptr;
	inline sdk::cinput_system* InputSystem = nullptr;

	inline sdk::cmem_alloc* MemAlloc = nullptr;
	//inline ISchemaSystem* SchemaSystem = nullptr;
	inline sdk::global_vars_t* GlobalVars = nullptr;
	inline sdk::cs2_player_controller* LocalPlayerController = nullptr;
	inline sdk::cgame_entity_system* GameEntitySystem = nullptr;
	inline sdk::cgame_resource_service* GameResourceService = nullptr;
	inline ISource2Client* Client = nullptr;
	inline sdk::cengine_client* Engine = nullptr;
	inline sdk::ccvar* Cvar = nullptr;
	//inline INetworkClientService* NetworkClientService = nullptr;
	//inline IMaterialSystem2* MaterialSystem2 = nullptr;
	//inline IResourceSystem* ResourceSystem = nullptr;
	//inline CResourceHandleUtils* ResourceHandleUtils = nullptr;

	namespace schema::client
	{
		class ccsweapon_base_vdata;
		class econ_item_view;
	}
}

struct game_t
{
	game_t(uintptr_t base, uint32_t tok);

	void init();
	void unload() const;

	using get_weapon_data_t = sdk::schema::client::ccsweapon_base_vdata*(*)(sdk::schema::client::econ_item_view *);
	using sdl_set_relative_mouse_mode_t = int (*)(int);
	using sdl_set_window_grab_t = int (*)(void *, int);
	using set_channel_verbosity_t = void (*)(sdk::logging_channel_id_t id, sdk::logging_severity_t severity);
	using register_logging_channel_t = void (*)(
		const char *channel_name, sdk::register_tags_func register_tags_func, int flags, sdk::logging_severity_t minimum_severity, sdk::color spew_color);
	using log_direct_t = sdk::logging_response_t(*)(sdk::logging_channel_id_t channel_id, sdk::logging_severity_t severity, sdk::color spew_color, const char *message);
	using find_channel_t = sdk::logging_channel_id_t (*)(const char *name);


	struct
	{
		get_weapon_data_t get_weapon_data;
		sdl_set_relative_mouse_mode_t sdl_set_relative_mouse_mode;
		sdl_set_window_grab_t sdl_set_window_grab;
		set_channel_verbosity_t set_channel_verbosity;
		register_logging_channel_t register_logging_channel;
		log_direct_t log_direct;
		find_channel_t find_channel;
	} fn;

	utils::library tier0, sdl3, gameoverlayrenderer64, client, engine2, inputsystem, localize, panorama, scenesystem;

	uintptr_t base;
	std::string version{ ("1.0.0")};
	std::vector<HANDLE> mem_font_hadles = {};
	std::string game_dir{};

private:
	void load_fonts();
	void remove_fonts() const;
};

extern std::unique_ptr<game_t> game;
