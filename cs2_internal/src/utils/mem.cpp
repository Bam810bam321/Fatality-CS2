#include <macros.h>
#include <utils/mem.h>
#include "tinyformat.h"

typedef struct _LDR_MODULE
{
	LIST_ENTRY InLoadOrderModuleList;
	LIST_ENTRY InMemoryOrderModuleList;
	LIST_ENTRY InInitializationOrderModuleList;
	PVOID BaseAddress;
	PVOID EntryPoint;
	ULONG SizeOfImage;
	UNICODE_STRING FullDllName;
	UNICODE_STRING BaseDllName;
	ULONG Flags;
	SHORT LoadCount;
	SHORT TlsIndex;
	LIST_ENTRY HashTableEntry;
	ULONG TimeDateStamp;
} LDR_MODULE, *PLDR_MODULE;

typedef struct _PEB_LOADER_DATA
{
	ULONG Length;
	BOOLEAN Initialized;
	PVOID SsHandle;
	LIST_ENTRY InLoadOrderModuleList;
	LIST_ENTRY InMemoryOrderModuleList;
	LIST_ENTRY InInitializationOrderModuleList;
} PEB_LOADER_DATA, *PPEB_LOADER_DATA;

namespace utils
{
	__forceinline static wchar_t *file_name_w(wchar_t *path)
	{
		auto slash = path;
		while (path && *path)
		{
			if ((*path == '\\' || *path == '/' || *path == ':') && path[1] && path[1] != '\\' && path[1] != '/')
				slash = path + 1;
			path++;
		}

		return slash;
	}

	std::optional<module_t> find_module(uint32_t hash)
	{
		const auto peb = NtCurrentTeb()->ProcessEnvironmentBlock;
		if (!peb)
			return {};

		const auto ldr = reinterpret_cast<PEB_LOADER_DATA *>(peb->Ldr);
		if (!ldr)
			return {};

		const auto head = &ldr->InLoadOrderModuleList;
		auto cur = head->Flink;

		while (cur != head)
		{
			const auto mod = CONTAINING_RECORD(cur, LDR_MODULE, InLoadOrderModuleList);

			std::wstring wide(file_name_w(mod->FullDllName.Buffer));
			std::string name(wide.begin(), wide.end());
			std::ranges::transform(name, name.begin(), ::tolower);

			if (FNV1A_CMP_IM(name.c_str(), hash))
				return module_t{reinterpret_cast<uintptr_t>(mod->BaseAddress), mod->SizeOfImage};

			cur = cur->Flink;
		}

		return {};
	}

	struct pattern_token_t
	{
		uint8_t byte;
		bool wc;
	};

	__forceinline uint8_t hex_to_char(const char in)
	{
		return static_cast<char>(isdigit(in) ? (in - '0') : (in - 'A' + 10));
	}

	uintptr_t find_pattern(uint32_t hash, const char *pattern)
	{
		const auto mod = find_module(hash);
		if (!mod)
		{
#ifdef _DEBUG
			MessageBoxA(nullptr, tfm::format("Module not found: %s", pattern).c_str(), "Error", MB_ICONERROR);
#endif
			return 0;
		}


		std::vector<pattern_token_t> tokens;
		std::optional<uint8_t> cur{};
		for (int i{}; i < strlen(pattern); ++i)
		{
			if (pattern[i] == ' ')
				continue;

			if (pattern[i] != '?')
			{
				if (cur)
				{
					tokens.emplace_back(pattern_token_t{static_cast<uint8_t>(*cur * 16 + hex_to_char(pattern[i])), false});
					cur = {};
					continue;
				}

				cur = hex_to_char(pattern[i]);
			}
			else
			{
				cur = {};
				tokens.emplace_back(pattern_token_t{0, true});
			}
		}

		const auto compare = [&](uintptr_t addr)
		{
			for (auto &[b, w] : tokens)
			{
				if (w)
				{
					addr++;
					continue;
				}

				if (b != *reinterpret_cast<uint8_t *>(addr++))
					return false;
			}

			return true;
		};

		for (uintptr_t i{mod->base}; i < static_cast<uintptr_t>(mod->base + mod->size); ++i)
			if (compare(i))
				return i;

#ifdef _DEBUG
		MessageBoxA(nullptr, tfm::format("Pattern not found: %s", pattern).c_str(), "Error", MB_ICONERROR);
#endif

		return 0;
	}

	uintptr_t find_export(uint32_t hash, uint32_t exp)
	{
		const auto mod = find_module(hash);
		if (!mod)
			return 0;

		const auto base = mod->base;
		const auto dos = reinterpret_cast<PIMAGE_DOS_HEADER>(base);
		const auto nt = reinterpret_cast<PIMAGE_NT_HEADERS>(base + dos->e_lfanew);

		if (dos->e_magic != IMAGE_DOS_SIGNATURE || nt->Signature != IMAGE_NT_SIGNATURE)
			return 0;

		const auto exports = reinterpret_cast<PIMAGE_EXPORT_DIRECTORY>(base + nt->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_EXPORT].VirtualAddress);
		const auto names = reinterpret_cast<uint32_t *>(base + exports->AddressOfNames);

		auto ordinal_index = static_cast<size_t>(-1);
		for (uint32_t i = 0; i < exports->NumberOfFunctions; i++)
			if (FNV1A_CMP_IM(reinterpret_cast<const char *>(base + names[i]), exp))
			{
				ordinal_index = i;
				break;
			}

		if (ordinal_index > exports->NumberOfFunctions)
			return 0;

		const auto ordinals = reinterpret_cast<uint16_t *>(base + exports->AddressOfNameOrdinals);
		const auto addresses = reinterpret_cast<uint32_t *>(base + exports->AddressOfFunctions);
		return static_cast<uintptr_t>(base + addresses[ordinals[ordinal_index]]);
	}
}
