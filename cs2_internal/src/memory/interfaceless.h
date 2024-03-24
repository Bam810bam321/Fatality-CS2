#pragma once
#include "memory/common.h"

#define GAME_RESOURCE_SERVICE_CLIENT CS_XOR("GameResourceServiceClientV00")
#define SOURCE2_CLIENT CS_XOR("Source2Client00")
#define SCHEMA_SYSTEM CS_XOR("SchemaSystem_00")
#define INPUT_SYSTEM_VERSION CS_XOR("InputSystemVersion00")
#define SOURCE2_ENGINE_TO_CLIENT CS_XOR("Source2EngineToClient00")
#define ENGINE_CVAR CS_XOR("VEngineCvar00")
#define LOCALIZE CS_XOR("Localize_00")
#define NETWORK_CLIENT_SERVICE CS_XOR("NetworkClientService_00")
#define MATERIAL_SYSTEM2 CS_XOR("VMaterialSystem2_00")
#define RESOURCE_SYSTEM CS_XOR("ResourceSystem013")
#define RESOURCE_HANDLE_UTILS CS_XOR("ResourceHandleUtils001")

// @source: master/game/shared/shareddefs.h
#define TICK_INTERVAL (I::GlobalVars->flIntervalPerTick)
#define TIME_TO_TICKS(TIME) (static_cast<int>(0.5f + static_cast<float>(TIME) / TICK_INTERVAL))
#define TICKS_TO_TIME(TICKS) (TICK_INTERVAL * static_cast<float>(TICKS))
#define ROUND_TO_TICKS(TIME) (TICK_INTERVAL * TIME_TO_TICKS(TIME))
#define TICK_NEVER_THINK (-1)

namespace iless
{
	constexpr int _NUMBER_MAX_BASE = 36;
	constexpr bool IsSpace(const std::uint8_t uChar)
	{
		return ((uChar >= '\t' && uChar <= '\r') || uChar == ' ');
	}
	constexpr bool IsAlpha(const std::uint8_t uChar)
	{
		return ((uChar >= 'A' && uChar <= 'Z') || (uChar >= 'a' && uChar <= 'z'));
	}
	constexpr bool IsDigit(const std::uint8_t uChar)
	{
		return (uChar >= '0' && uChar <= '9');
	}
	template <typename C> requires (std::is_same_v<C, char> || std::is_same_v<C, wchar_t>)
		constexpr std::size_t StringLength(const C* tszSource)
	{
		const C* tszSourceEnd = tszSource;

		while (*tszSourceEnd != C('\0'))
			++tszSourceEnd;

		return tszSourceEnd - tszSource;
	}
	template <typename C> requires (std::is_same_v<C, char> || std::is_same_v<C, wchar_t>)
		constexpr int StringCompareN(const C* tszLeft, const C* tszRight, std::size_t nCount)
	{
		using ComparisonType_t = std::conditional_t<std::is_same_v<C, char>, std::uint8_t, std::conditional_t<sizeof(wchar_t) == 2U, std::int16_t, std::int32_t>>;

		ComparisonType_t nLeft, nRight;
		while (nCount--)
		{
			nLeft = static_cast<ComparisonType_t>(*tszLeft++);
			nRight = static_cast<ComparisonType_t>(*tszRight++);

			if (nLeft != nRight)
				return nLeft - nRight;

			if (nLeft == C('\0'))
				break;
		}

		return 0;
	}
	template <typename T> requires (std::is_integral_v<T>)
		constexpr T StringToInteger(const char* szSourceBegin, char** pszSourceEnd = nullptr, int iBase = 0)
	{
		if (iBase < 0 || iBase == 1 || iBase > _NUMBER_MAX_BASE)
		{
			CS_ASSERT(false); // given number base is out of range
			return 0;
		}

		const char* szSourceCurrent = szSourceBegin;

		// skip to first not whitespace
		while (IsSpace(*szSourceCurrent))
			++szSourceCurrent;

		// determine the sign and strip it
		const bool bIsPositive = ((*szSourceCurrent == '+' || *szSourceCurrent == '-') ? (*szSourceCurrent++ == '+') : true);
		constexpr bool bIsUnsigned = ((std::numeric_limits<T>::min)() == 0U);

		// user provided exact number base
		if (iBase > 0)
		{
			// strip 0x or 0X
			if (iBase == 16 && *szSourceCurrent == '0' && (szSourceCurrent[1] | ('a' ^ 'A')) == 'x')
				szSourceCurrent += 2;
		}
		// otherwise try to determine base automatically
		else if (*szSourceCurrent == '0')
		{
			if (((*szSourceCurrent++) | ('a' ^ 'A')) == 'x')
			{
				// a hexadecimal number is defined as "the prefix 0x or 0X followed by a sequence of the decimal digits and the letters a (or A) through f (or F) with values 10 through 15 respectively" (C standard 6.4.4.1)
				iBase = 16;
				++szSourceCurrent;
			}
			else
				// an octal number is defined as "the prefix 0 optionally followed by a sequence of the digits 0 through 7 only" (C standard 6.4.4.1) and so any number that starts with 0, including just 0, is an octal number
				iBase = 8;
		}
		else
			// a decimal number is defined as beginning "with a nonzero digit and consisting of a sequence of decimal digits" (C standard 6.4.4.1)
			iBase = 10;

		constexpr std::uint64_t ullNegativeMax = (bIsUnsigned ? (std::numeric_limits<T>::max)() : (static_cast<std::uint64_t>((std::numeric_limits<T>::max)()) + 1ULL));
		const std::uint64_t ullAbsoluteMax = (bIsPositive ? (std::numeric_limits<T>::max)() : ullNegativeMax);
		const std::uint64_t ullAbsoluteMaxOfBase = ullAbsoluteMax / iBase;

		bool bIsNumber = false;
		std::uint64_t ullResult = 0ULL;

		for (bool bIsDigit = false, bIsAlpha = false; ((bIsDigit = IsDigit(*szSourceCurrent))) || ((bIsAlpha = IsAlpha(*szSourceCurrent)));) // @note: looks slightly unsafe but have possibility to fast path, double parenthesis to suppress warnings
		{
			int iCurrentDigit = 0;

			if (bIsDigit)
				iCurrentDigit = *szSourceCurrent - '0';
			else if (bIsAlpha)
				iCurrentDigit = (*szSourceCurrent | ('a' ^ 'A')) - 'a' + 0xA;

			if (iCurrentDigit >= iBase)
				break;

			bIsNumber = true;
			++szSourceCurrent;

			// if the number has already hit the maximum value for the current type then the result cannot change, but we still need to advance source to the end of the number
			if (ullResult == ullAbsoluteMax)
			{
				CS_ASSERT(false); // numeric overflow
				continue;
			}

			if (ullResult <= ullAbsoluteMaxOfBase)
				ullResult *= iBase;
			else
			{
				CS_ASSERT(false); // numeric overflow
				ullResult = ullAbsoluteMax;
			}

			if (ullResult <= ullAbsoluteMax - iCurrentDigit)
				ullResult += iCurrentDigit;
			else
			{
				CS_ASSERT(false); // numeric overflow
				ullResult = ullAbsoluteMax;
			}
		}

		if (pszSourceEnd != nullptr)
			*pszSourceEnd = const_cast<char*>(bIsNumber ? szSourceCurrent : szSourceBegin);

		// clamp on overflow
		if (ullResult == ullAbsoluteMax)
			return ((bIsPositive || bIsUnsigned) ? (std::numeric_limits<T>::max)() : (std::numeric_limits<T>::min)());

		return (bIsPositive ? static_cast<T>(ullResult) : -static_cast<T>(ullResult));
	}

	using InstantiateInterfaceFn_t = void* (*)();

	class CInterfaceRegister
	{
	public:
		InstantiateInterfaceFn_t fnCreate;
		const char* szName;
		CInterfaceRegister* pNext;
	};

	static const CInterfaceRegister* GetRegisterList(const wchar_t* wszModuleName)
	{
		void* hModule = MEM::GetModuleBaseHandle(wszModuleName);
		if (hModule == nullptr)
			return nullptr;

		std::uint8_t* pCreateInterface = reinterpret_cast<std::uint8_t*>(MEM::GetExportAddress(hModule, CS_XOR("CreateInterface")));

		if (pCreateInterface == nullptr)
		{
			return nullptr;
		}

		auto solve_adress = [](std::uint8_t* nAddressBytes, std::uint32_t nRVAOffset, std::uint32_t nRIPOffset) -> std::uint8_t*
			{
				std::uint32_t nRVA = *reinterpret_cast<std::uint32_t*>(nAddressBytes + nRVAOffset);
				std::uint64_t nRIP = reinterpret_cast<std::uint64_t>(nAddressBytes) + nRIPOffset;

				return reinterpret_cast<std::uint8_t*>(nRVA + nRIP);
			};

		return *reinterpret_cast<CInterfaceRegister**>(solve_adress(pCreateInterface, 0x3, 0x7));
	}

	template <typename T = void*>
	T* Capture(const CInterfaceRegister* pModuleRegister, const char* szInterfaceName)
	{
		for (const CInterfaceRegister* pRegister = pModuleRegister; pRegister != nullptr; pRegister = pRegister->pNext)
		{
			if (const std::size_t nInterfaceNameLength = StringLength(szInterfaceName);
				// found needed interface
				StringCompareN(szInterfaceName, pRegister->szName, nInterfaceNameLength) == 0 &&
				// and we've given full name with hardcoded digits
				(StringLength(pRegister->szName) == nInterfaceNameLength ||
					// or it contains digits after name
					StringToInteger<int>(pRegister->szName + nInterfaceNameLength, nullptr, 10) > 0))
			{
				// capture our interface
				void* pInterface = pRegister->fnCreate();

				return static_cast<T*>(pInterface);
			}
		}
		return nullptr;
	}
}