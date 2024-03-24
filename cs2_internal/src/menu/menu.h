#pragma once

#include <gui/gui.h>
#include <gui/controls.h>
#include <gui/helpers.h>

namespace menu
{
	namespace tools
	{
		using namespace evo;
		using namespace evo::ren;

		std::shared_ptr<evo::gui::control> make_stacked_groupboxes(uint64_t id, const vec2 &size, const std::vector<std::shared_ptr<evo::gui::control>> &groups);
	}

	namespace group
	{
		using namespace evo::gui;

		constexpr auto group_id = 1 << 8;
		constexpr auto general_id = 1 << 9;

		inline std::mutex on_load_layout_rebuild_mtx;

		extern std::unordered_map<uint32_t, std::string> wpn_to_name;
		extern std::unordered_map<uint32_t, std::string> grp_to_name;
		extern std::unordered_map<uint32_t, std::vector<uint32_t>> grp_to_wep;

		void rebuild_rage_layout(bool skip_adjust = false);
		void rebuild_legit_layout(bool skip_adjust = false);

		void rage_tab(std::shared_ptr<layout> &e);
		void rage_aimbot(std::shared_ptr<layout> &e);
		void rage_aimbot_weapon(std::shared_ptr<layout> &e, uint32_t grp, const std::string &id);
		void rage_aimbot_extra(std::shared_ptr<layout> &e, uint32_t grp, const std::string &id);
		void rage_aimbot_general(std::shared_ptr<layout> &e);
		void rage_antiaim(std::shared_ptr<layout> &e);
		void rage_antiaim_angles(std::shared_ptr<layout> &e);
		void rage_antiaim_fakelag(std::shared_ptr<layout> &e);
		void rage_antiaim_desync(std::shared_ptr<layout> &e);
		void rage_antiaim_custom(std::shared_ptr<layout> &e);

		void legit_tab(std::shared_ptr<layout> &e);
		void legit_aimhelper(std::shared_ptr<layout> &e, uint32_t grp, const std::string &id);
		void legit_assists(std::shared_ptr<layout> &e, uint32_t grp, const std::string &id);
		void legit_general(std::shared_ptr<layout> &e);

		void visuals_tab(std::shared_ptr<layout> &e);
		void visuals_esp(std::shared_ptr<layout> &e);
		void visuals_models(std::shared_ptr<layout> &e);
		void visuals_misc(std::shared_ptr<layout> &e);
		void visuals_esp_player(std::shared_ptr<layout> &e);
		void visuals_esp_world(std::shared_ptr<layout> &e);
		void visuals_models_general(std::shared_ptr<layout> &e);
		void visuals_models_local(std::shared_ptr<layout> &e);
		void visuals_models_enemy(std::shared_ptr<layout> &e);
		void visuals_models_team(std::shared_ptr<layout> &e);
		void visuals_misc_local(std::shared_ptr<layout> &e);
		void visuals_misc_various(std::shared_ptr<layout> &e);
		void visuals_misc_beams(std::shared_ptr<layout> &e);

		void misc_various(std::shared_ptr<layout> &e);
		void misc_movement(std::shared_ptr<layout> &e);
		void misc_buybot(std::shared_ptr<layout> &e);

		void lua_general(std::shared_ptr<layout> &e);
		void lua_stub(std::shared_ptr<layout> &e);

		void skins_weapons(std::shared_ptr<layout> &e);
		void skins_options(std::shared_ptr<layout> &e);
		void skins_paintkit(std::shared_ptr<layout> &e);
		void skins_inventory(std::shared_ptr<layout> &e);
		void skins_agents(std::shared_ptr<layout> &e);
	}

	class menu_t
	{
	public:
		void init();
		void toggle();
		bool is_open();
		void finalize();

		std::weak_ptr<evo::gui::window> main_wnd{};
		std::atomic_bool skins_loaded, skins_ready, full_cycle_reset, font_reset, font_was_reset;
		// hack: this will tell when to start loading skins and shit
		std::mutex render_mtx, scripts_mtx;
		bool finalized{};
	};

	extern menu_t men;
}
