#include <filesystem>
#include <game/cfg.h>
#include <game/draw_manager.h>
#include <game/game.h>
#include <game/hook_manager.h>
#include <ren/renderer.h>
#include <resources/smallest_pixel.h>
#include <sdk/cvar.h>
#include <sdk/engine.h>
#include <sdk/inputsystem.h>
#include <sdk/interface.h>
#include <utils/mem.h>
#include "memory/interfaceless.h"

uint32_t utils::runtime_basis = 2166136261u;
std::unique_ptr<game_t> game;
namespace fs = std::filesystem;
using namespace utils;

game_t::game_t(uintptr_t _base, uint32_t tok) : base(_base)
{

	game_dir = ENC2(util::get_game_dir());

	if (!fs::exists(DEC_INLINE(game_dir) + XOR("fatality")))
		fs::create_directories(DEC_INLINE(game_dir) + XOR("fatality"));
	if (!fs::exists(DEC_INLINE(game_dir) + XOR("fatality/scripts")))
		fs::create_directories(DEC_INLINE(game_dir) + XOR("fatality/scripts"));
	if (!fs::exists(DEC_INLINE(game_dir) + XOR("fatality/scripts/remote")))
		fs::create_directories(DEC_INLINE(game_dir) + XOR("fatality/scripts/remote"));
	if (!fs::exists(DEC_INLINE(game_dir) + XOR("fatality/scripts/lib")))
		fs::create_directories(DEC_INLINE(game_dir) + XOR("fatality/scripts/lib"));
}

void game_t::load_fonts()
{
	DWORD n_fonts;
	mem_font_hadles.push_back(AddFontMemResourceEx(smallest_pixel.data(), smallest_pixel.size(), nullptr, &n_fonts));
	smallest_pixel.clear();
	auto vec = std::vector<unsigned char>(smallest_pixel);
	smallest_pixel.swap(vec);
}

void game_t::remove_fonts() const
{
	for (auto &handle : mem_font_hadles)
		RemoveFontMemResourceEx(handle);
}


void game_t::init()
{
	MEM::Setup();

	auto solve_adress = [](std::uint8_t* nAddressBytes, std::uint32_t nRVAOffset, std::uint32_t nRIPOffset) -> std::uint8_t*
		{
			std::uint32_t nRVA = *reinterpret_cast<std::uint32_t*>(nAddressBytes + nRVAOffset);
			std::uint64_t nRIP = reinterpret_cast<std::uint64_t>(nAddressBytes) + nRIPOffset;

			return reinterpret_cast<std::uint8_t*>(nRVA + nRIP);
		};

	static auto enwndcall = [](HWND handle, LPARAM lParam) -> BOOL CALLBACK
		{
			const auto MainWindow = [handle]()
				{
					return GetWindow(handle, GW_OWNER) == nullptr &&
						IsWindowVisible(handle) && handle != GetConsoleWindow();
				};

			DWORD nPID = 0;
			GetWindowThreadProcessId(handle, &nPID);

			if (GetCurrentProcessId() != nPID || !MainWindow())
				return TRUE;

			*reinterpret_cast<HWND*>(lParam) = handle;
			return FALSE;
		};

	const auto pTier0Handle = MEM::GetModuleBaseHandle(TIER0_DLL);
	if (pTier0Handle == nullptr)
		return ;

	const auto pEngineRegisterList = iless::GetRegisterList(ENGINE2_DLL);
	if (pEngineRegisterList == nullptr)
		return ;

	const auto pClientRegister = iless::GetRegisterList(CLIENT_DLL);
	if (pClientRegister == nullptr)
		return;


	const auto pTier0RegisterList = iless::GetRegisterList(TIER0_DLL);
	if (pTier0RegisterList == nullptr)
		return ;

	const auto pInputSystemRegisterList = iless::GetRegisterList(INPUTSYSTEM_DLL);
	if (pInputSystemRegisterList == nullptr)
		return;

	// load interface
	sdk::Client = Capture<ISource2Client>(pClientRegister, SOURCE2_CLIENT);
	sdk::GameResourceService = iless::Capture<sdk::cgame_resource_service>(pEngineRegisterList, GAME_RESOURCE_SERVICE_CLIENT);
	sdk::Engine = iless::Capture<sdk::cengine_client>(pEngineRegisterList, SOURCE2_ENGINE_TO_CLIENT);
	sdk::Cvar = iless::Capture<sdk::ccvar>(pTier0RegisterList, ENGINE_CVAR);
	sdk::GlobalVars = *reinterpret_cast<sdk::global_vars_t**>(solve_adress(MEM::FindPattern(CLIENT_DLL, CS_XOR("48 89 0D ? ? ? ? 48 89 41")), 0x3, 0x7));
	sdk::LocalPlayerController = *reinterpret_cast<sdk::cs2_player_controller**>(solve_adress(MEM::FindPattern(CLIENT_DLL, CS_XOR("48 8B 05 ? ? ? ? 48 85 C0 74 4F")), 0x3, 0x7));
	sdk::GameEntitySystem = *reinterpret_cast<sdk::cgame_entity_system**>(solve_adress(MEM::FindPattern(CLIENT_DLL, CS_XOR("48 8B 0D ? ? ? ? 48 89 7C 24 ? 8B FA C1 EB")), 0x3, 0x7));
	sdk::Input = *reinterpret_cast<sdk::ccsgo_input**>(solve_adress(MEM::FindPattern(CLIENT_DLL, CS_XOR("48 8B 0D ? ? ? ? E8 ? ? ? ? 8B BE ? ? ? ? 44 8B F0 85 FF 78 04 FF C7 EB 03")), 0x3, 0x7));
	sdk::SwapChain = **reinterpret_cast<ISwapChainDx11***>(solve_adress(MEM::FindPattern(RENDERSYSTEM_DLL, CS_XOR("66 0F 7F 05 ? ? ? ? 66 0F 7F 0D ? ? ? ? 48 89 35")), 0x4, 0x8));
	sdk::InputSystem = iless::Capture<sdk::cinput_system>(pInputSystemRegisterList, INPUT_SYSTEM_VERSION);
	sdk::MemAlloc = *reinterpret_cast<sdk::cmem_alloc**>(MEM::GetExportAddress(pTier0Handle, CS_XOR("g_pMemAlloc")));

	while (sdk::hWindow == nullptr)
	{
		EnumWindows(enwndcall, reinterpret_cast<LPARAM>(&sdk::hWindow));
		::Sleep(200U);
	}

	sdk::pOldWndProc = reinterpret_cast<WNDPROC>(SetWindowLongPtrW(sdk::hWindow, GWLP_WNDPROC, reinterpret_cast<LONG_PTR>(hooks::input_system::wnd_proc)));
	if (sdk::pOldWndProc == nullptr)
		return;

	//load_fonts();

	// load other
	cfg.init();

	sdk::Cvar->unlock();

	hook_manager.init();
	//hook_manager.attach();
}

void game_t::unload() const
{
	std::this_thread::sleep_for(std::chrono::milliseconds(200));

	//hook_manager.detach();

	std::this_thread::sleep_for(std::chrono::milliseconds(200));

	draw_mgr.destroy_objects();
	sdk::InputSystem->set_input(true);
	evo::ren::draw.destroy_objects();
	evo::ren::draw = {};

	FreeLibrary(reinterpret_cast<HMODULE>(base));
	FreeLibraryAndExitThread(reinterpret_cast<HMODULE>(base), 0);
}
