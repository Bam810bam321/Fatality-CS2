#pragma once

#include <game/debug_tools.h>
#include <functional>
#include <chrono>

namespace util
{
	struct function_profiler_t
	{
		std::chrono::steady_clock::time_point m_start;
		std::chrono::steady_clock::time_point m_end;
		std::function<void(uint32_t)> m_notify;

		function_profiler_t() :
			m_notify(nullptr)
		{
			m_start = std::chrono::steady_clock::now();
		}

		function_profiler_t(std::function<void(uint32_t)> notify) :
			m_notify(notify)
		{
			m_start = std::chrono::steady_clock::now();
		}

		~function_profiler_t()
		{
			m_end = std::chrono::steady_clock::now();

			if (m_notify)
				m_notify(std::chrono::duration_cast<std::chrono::microseconds>(m_end - m_start).count());
		}
	};

	struct function_profiler_average_t
	{
		std::chrono::steady_clock::time_point m_start;
		std::chrono::steady_clock::time_point m_end;
		uint32_t m_calls_to_notify;

		inline static uint32_t m_counter = 0;
		inline static uint32_t m_min = 0;
		inline static uint32_t m_max = 0;
		inline static float m_average = 0.f;

		function_profiler_average_t(uint32_t calls_to_notify = 50) :
			m_calls_to_notify(calls_to_notify)
		{
			m_start = std::chrono::steady_clock::now();
		}

		~function_profiler_average_t()
		{
			m_end = std::chrono::steady_clock::now();

			auto t = std::chrono::duration_cast<std::chrono::microseconds>(m_end - m_start).count();

			if (t > m_max)
				m_max = t;

			if (t < m_min)
				m_min = t;

			m_average = 0.9f * m_average + (1.f - 0.9f) * (t);

			if (++m_counter > 100)
			{
				debug::print_to_console("max: %d, min %d, avg: %f\n", m_max, m_min, m_average);

				m_average = 0.f;
				m_max = 0;
				m_min = UINT_MAX;
				m_counter = 0;
			}
		}
	};
}
