#ifndef SEARCH_RESULT_F48F91493F2D4D9F870AB2486B8494F5_H
#define SEARCH_RESULT_F48F91493F2D4D9F870AB2486B8494F5_H

#include <gui/control.h>

#include <utility>

namespace evo::gui
{
	class search_result : public control
	{
	public:
		search_result(control_id id, std::string text, std::weak_ptr<control> ctrl) :
			control(id, {}, {0.f, 40.f}), text(std::move(text)), ctrl(std::move(ctrl))
		{
			size_to_parent_w = true;
		}

		void on_mouse_down(char key) override;
		void render() override;

		std::string text;
		std::weak_ptr<control> ctrl;
		std::weak_ptr<control> wnd;
	};
}

#endif //SEARCH_RESULT_F48F91493F2D4D9F870AB2486B8494F5_H
