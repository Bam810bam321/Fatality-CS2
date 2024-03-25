#include "game/game.h"

uintptr_t __stdcall init_main(const HMODULE h_module) {
	game->init();
	return 0;
}

BOOL APIENTRY DllMain(uintptr_t inst, uint32_t  dw_reason_for_call, uint32_t lp_reserved) 
{
	switch (dw_reason_for_call) 
	{
	case DLL_PROCESS_ATTACH:
	{
		DisableThreadLibraryCalls((HMODULE)inst);

		auto current_process = GetCurrentProcess();
		auto priority_class = GetPriorityClass(current_process);

		if (priority_class != HIGH_PRIORITY_CLASS && priority_class != REALTIME_PRIORITY_CLASS)
			SetPriorityClass(current_process, HIGH_PRIORITY_CLASS);

		game = std::make_unique<game_t>(inst, lp_reserved);
		CreateThread(NULL, NULL, reinterpret_cast<LPTHREAD_START_ROUTINE>(init_main), (LPVOID)inst, NULL, NULL);

		return true;
	}
	default:
		return true;
	}

	//std::this_thread::sleep_for(std::chrono::milliseconds(100));
}