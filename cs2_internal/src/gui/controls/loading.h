#ifndef LOADING_65BFEF982D7840ECB1E8CF7850DEA6F6_H
#define LOADING_65BFEF982D7840ECB1E8CF7850DEA6F6_H

#include <gui/control.h>
#include <ren/renderer.h>
#include <ren/misc.h>

namespace evo::gui
{
	class loading : public control
	{
	public:
		loading(control_id id, const ren::vec2 &p = {}) :
			control(id, p, {16.f, 16.f})
		{
			using namespace ren;

			a = std::make_shared<anim_float>(0.f, 0.7f);
			a->on_finished = [](std::shared_ptr<anim<float>> f)
			{
				f->direct(0.f, 360.f);
			};
			a->direct(0, 360.f);

			type = ctrl_loading;
		}

		void render() override;

	private:
		std::shared_ptr<ren::anim_float> a;
	};
}

#endif //LOADING_65BFEF982D7840ECB1E8CF7850DEA6F6_H
