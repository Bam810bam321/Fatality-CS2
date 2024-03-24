#ifndef SEARCH_POPUP_2A343B16DF0F4B748F98A991BA78AE5F_H
#define SEARCH_POPUP_2A343B16DF0F4B748F98A991BA78AE5F_H

#include <gui/controls/popup.h>
#include <ren/renderer.h>

namespace evo::gui
{
	class layout;

	class search_popup : public popup
	{
		struct search_cache_entry
		{
			std::weak_ptr<control> control;
			std::string text;
			std::vector<std::string> names;
		};

	public:
		search_popup(control_id id, const ren::vec2 &pos) :
			popup(id, pos, {260.f, 200.f}, true) { }

		void on_first_render_call() override;
		void render() override;

	private:
		std::vector<search_cache_entry> cache{};
		std::atomic_bool is_making_cache{};
		std::shared_ptr<ren::anim_float> loading_anim{};
		std::shared_ptr<layout> search_list{};

		void make_cache();
	};
}

#endif //SEARCH_POPUP_2A343B16DF0F4B748F98A991BA78AE5F_H
