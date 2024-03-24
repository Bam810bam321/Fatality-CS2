#ifndef NOTIFICATION_CONTROL_99B876ACDB0544CC961D9A0A347F5F54_H
#define NOTIFICATION_CONTROL_99B876ACDB0544CC961D9A0A347F5F54_H

#include <gui/control.h>
#include <gui/notify_system.h>

namespace evo::gui
{
	class notification_control : public control
	{
	public:
		notification_control(control_id id, bool is_odd, const std::shared_ptr<notification> &n) :
			control(id, {}, {0.f, 46.f}), is_odd(is_odd), obj(n)
		{
			size_to_parent_w = true;
			type = ctrl_notification_control;
		}

		void render() override;

		bool is_odd{};
		std::shared_ptr<notification> obj{};
	};
}

#endif //NOTIFICATION_CONTROL_99B876ACDB0544CC961D9A0A347F5F54_H
