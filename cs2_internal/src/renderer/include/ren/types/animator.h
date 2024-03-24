#ifndef REN_LINKER_ANIMATOR_H
#define REN_LINKER_ANIMATOR_H

#include <cmath>
#include <functional>
#include <memory>
#include <unordered_map>

#include <ren/renderer.h>

#ifndef min
#define min(a, b) ((a) < (b) ? (a) : (b))
#endif

#ifndef max
#define max(a, b) ((a) > (b) ? (a) : (b))
#endif

#define INTERP(n) __forceinline static float interp_##n(float a, float b, float u)
#define LINEAR(c) interp_linear(a, b, c);

namespace evo::ren
{
	enum easing_func
	{
		ease_linear,
		ease_in,
		ease_out,
		ease_in_out,
		ease_max,
	};

	INTERP(linear) { return max(min((1.f - max(min(u, 1.f), 0.f)) * a + u * b, b > a ? b : a), a > b ? b : a); }

	INTERP(ease_in)
	{
		return LINEAR(u * u * u);
	}

	INTERP(ease_out)
	{
		return LINEAR(1.f - powf(1.f - u, 3.f));
	}

	INTERP(ease_in_out) { return LINEAR(u < .5f ? 4.f * u * u * u : 1.f - powf(-2.f * u + 2.f, 3.f) / 2.f) }

	class anim_base : public std::enable_shared_from_this<anim_base>
	{
	public:
		virtual void animate() = 0;

		template <typename T>
		std::shared_ptr<T> as() { return std::static_pointer_cast<T>(shared_from_this()); }
	};

	template <typename T>
	class anim : public anim_base
	{
	public:
		anim(const T &v, float d, char i = ease_linear) :
			value(v), end(v), start(v), interpolation(i), duration(d)
		{
			easings = {interp_linear, interp_ease_in, interp_ease_out, interp_ease_in_out,};
		}

		void animate() override
		{
			if (on_started && time == 0.f)
				on_started(as<anim<T>>());

			if (on_finished)
			{
				if (time == 1.f)
				{
					if (!did_call_finish)
						on_finished(as<anim<T>>());

					did_call_finish = true;
				}
				else
					did_call_finish = false;
			}

			if (duration > 0.f && draw.frame_time > 0.f)
			{
				time += 1.f / duration * draw.frame_time;
				if (time > 1.f)
					time = 1.f;
			}
			else
				time = 1.f;
		}

		virtual void direct(const T &t)
		{
			start = value;
			end = t;

			time = 0.f;
		}

		/**
		 * Directs interpolation into new value (offsets from a custom value)
		 * @param a New start
		 * @param t New value
		 */
		virtual void direct(const T &a, const T &t)
		{
			start = a;
			end = t;

			time = 0.f;
		}

		T value{};
		T end{};
		T start{};

		std::function<void(const std::shared_ptr<anim<T>> &)> on_started{};
		std::function<void(const std::shared_ptr<anim<T>> &)> on_finished{};

		char interpolation{};
		float duration{};

	protected:
		float i(float a, float b) const { return easings[interpolation](a, b, time); }

		std::array<std::function<float(float, float, float)>, (int)ease_max> easings;
		float time{};

	private:
		bool did_call_finish{};
	};

	class anim_float : public anim<float>
	{
	public:
		anim_float(const float &v, float d, char i = ease_linear) :
			anim<float>(v, d, i) {}

		void animate() override
		{
			anim::animate();
			value = i(start, end);
		}
	};

	class anim_vec2 : public anim<vec2>
	{
	public:
		anim_vec2(const vec2 &v, float d, char i = ease_linear) :
			anim<vec2>(v, d, i) {}

		void animate() override
		{
			anim::animate();
			value.x = i(start.x, end.x);
			value.y = i(start.y, end.y);
		}
	};

	enum anim_color_type : char
	{
		act_rgba,
		act_hsva
	};

	class anim_color : public anim<color>
	{
	public:
		anim_color(const color &v, float d, char i = ease_linear) :
			anim<color>(v, d, i) {}

		void animate() override
		{
			anim::animate();

			if (type == act_rgba)
			{
				value.value.r = i(start.value.r, end.value.r);
				value.value.g = i(start.value.g, end.value.g);
				value.value.b = i(start.value.b, end.value.b);
				value.value.a = i(start.value.a, end.value.a);
			}
			else
				value = value.hsv(i(start.h(), end.h()), i(start.s(), end.s()), i(start.v(), end.v())).a(i(start.value.a, end.value.a));
		}

		char type{};
	};
} // namespace evo::ren

#undef INTERP
#undef LINEAR

#endif // REN_LINKER_ANIMATOR_H
