#ifndef GUI_TESTER_CONTAINER_H
#define GUI_TESTER_CONTAINER_H

#include <vector>
#include <mutex>
#include <functional>

#include <gui/control.h>

namespace evo::gui
{
	class container
	{
	public:
		// called when child control is added
		virtual void on_control_added(const std::shared_ptr<control> &c) { }

		// called when child control is removed
		virtual void on_control_removed() { }

		bool empty() const
		{
			return controls.empty();
		}

		size_t count() const
		{
			return controls.size();
		}

		virtual void add(const std::shared_ptr<control> &c);
		virtual void remove(uint64_t id);
		virtual void remove(const std::shared_ptr<control> &c);
		virtual void remove_all();

		virtual void clear()
		{
			clear_unsafe();
		}

		virtual void clear_unsafe()
		{
			controls.clear();
		}

		std::shared_ptr<control> &at(size_t n)
		{
			return controls[n];
		}

		template <typename T = control>
		std::shared_ptr<T> at_safe(size_t n)
		{
			if (n > controls.size())
				return nullptr;

			return controls[n]->as<T>();
		}

		// children iterator
		void for_each_control(const std::function<void(std::shared_ptr<control> &)> &fn);
		void for_each_control_logical(const std::function<bool(std::shared_ptr<control> &)> &fn);

		// children iterator, but controls are ordered by input priority
		void for_each_control_ordered(const std::function<bool(std::shared_ptr<control> &)> &fn);
		void for_each_control_ordered_reverse(const std::function<void(std::shared_ptr<control> &)> &fn);

		template <typename T>
		std::shared_ptr<T> find(uint64_t id)
		{
			const auto result = find(id);
			if (result)
				return result->as<T>();

			return nullptr;
		}

		std::vector<std::shared_ptr<control>> find_all(uint64_t id);
		std::shared_ptr<control> find(uint64_t id, bool root_only = false, bool ignore_global = false);

		void find_all(uint64_t id, std::vector<std::shared_ptr<control>> &r);

	protected:
		void sort_controls(std::vector<std::shared_ptr<control>> &controls_ordered);

		// processes add schedule
		void process_add_schedule();

		// processes remove schedule
		void process_remove_schedule();

		std::vector<std::shared_ptr<control>> controls{};

		std::vector<uint64_t> remove_schedule{};
		std::vector<std::shared_ptr<control>> add_schedule{};

		std::mutex container_mutex{};
		std::mutex modify_mutex{};
	};
}

#endif //GUI_TESTER_CONTAINER_H
