#ifndef GUI_TESTER_CONTROL_CONTAINER_H
#define GUI_TESTER_CONTROL_CONTAINER_H

#include <gui/control.h>
#include <gui/container.h>
#include <gui/traits.h>

namespace evo::gui
{
	class control_container : public control, public container
	{
	public:
		control_container(control_id id) :
			control(id)
		{
			is_container = true;
			margin = ren::rect();
			type = ctrl_control_container;
		}

		control_container(control_id _id, const ren::vec2 &_pos, const ren::vec2 &_size) :
			control(_id, _pos, _size)
		{
			is_container = true;
			margin = ren::rect();
			type = ctrl_control_container;
		}

		CALLBACK_TRAIT(container, on_control_added, (const std::shared_ptr<control>& c))(c);
		CALLBACK_TRAIT(container, on_control_removed, ())();

		// called when child received on_draw_param_changed
		virtual void on_control_draw_param_changed(std::shared_ptr<control> c, char w) { }

		void add(const std::shared_ptr<control> &c) override;
		void remove(const std::shared_ptr<control> &c) override;
		void remove(uint64_t id) override;

		CALLBACK_TRAIT(container, remove_all, ())();

		void refresh() override;
		void render() override;
		void reset() override;

		CALLBACK_TRAIT_FRC(control);
		CALLBACK_TRAIT_MM(control);
		CALLBACK_TRAIT_ME(control);
		CALLBACK_TRAIT_ML(control);
		CALLBACK_TRAIT_MD(control);
		CALLBACK_TRAIT_MU(control);
		CALLBACK_TRAIT_MW(control);
		CALLBACK_TRAIT_KD(control);
		CALLBACK_TRAIT_KU(control);
		CALLBACK_TRAIT_TI(control);
		CALLBACK_TRAIT_DPC(control);

		// calculates max Y
		float calc_max_y();

		// copies out elements to that container
		void copy(const std::shared_ptr<control_container> &c);

		// runs on_first_render_call
		void raise_first_render_call();

		// processes add and remove queues/schedules
		void process_queues();

		ren::rect custom_margin{}; // margin to add to children controls
		bool should_process_children{true}; // determines if this container should render it's children
	};
}

#endif //GUI_TESTER_CONTROL_CONTAINER_H
