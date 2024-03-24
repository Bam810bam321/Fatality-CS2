#include <gui/popups/action_list_popup.h>

#include "game/cfg.h"
#include "gui/helpers.h"
#include "menu/macros.h"
#include "menu/menu.h"

using namespace evo::gui;
using namespace evo::gui::helpers;
using namespace evo::ren;

namespace menu::group
{
	void legit_aimhelper_assists(const std::shared_ptr<layout> &e, uint32_t grp, const std::string &id, bool vis = false)
	{
		//VIRTUALIZER_TIGER_WHITE_START;
		auto group_sz = window_size_to_groupbox_size(848.f, 588.f, 4.f);
		group_sz.x = 218.f;

		const auto doubletab = MAKE_RUNTIME(id, layout, vec2{ 0.f, 0.f }, vec2{ group_sz.x * 2.f + 16.f, 482.f }, s_justify);
		doubletab->is_visible = vis;
		doubletab->make_not_clip();
		doubletab->add(
			make_groupbox(
				id + XOR(">aimhelper"), XOR("AIMHELPER"), group_sz, [&grp, &id](auto e)
				{
					legit_aimhelper(e, grp, id + XOR(">aimhelper>"));
				}));
		doubletab->add(
			make_groupbox(
				id + XOR(">assists"), XOR("ASSISTS"), group_sz, [&grp, &id](auto e)
				{
					legit_assists(e, grp, id + XOR(">assists>"));
				}));

		e->add(doubletab);
		//VIRTUALIZER_TIGER_WHITE_END;
	}

	void rebuild_legit_layout(bool skip_adjust)
	{
		//VIRTUALIZER_TIGER_WHITE_START;
		const auto wp_tabs = ctx->find<tabs_layout>(GUI_HASH("legit>weapons"));
		const auto wp_area = ctx->find<layout>(GUI_HASH("legit>tab"));

		// remove spacers
		wp_tabs->remove(GUI_HASH("legit>weapons>spacer"));
		wp_tabs->remove(GUI_HASH("legit>weapons>spacer2"));

		bool any_added{};
		std::vector<uint32_t> to_add_grp, to_add_wep;
		//for (auto &[i, v] : cfg.legit.weapon_config.cfgs)
		//{
		//	const auto &name = i >= group_id ? grp_to_name[i] : wpn_to_name[i];
		//	any_added = any_added || v;

		//	// erase everything!
		//	wp_tabs->remove(hash(XOR("legit>weapons>") + name));
		//	wp_area->remove(hash(XOR("legit>weapon>") + name));

		//	// add new ones
		//	if (v)
		//		i >= group_id ? to_add_grp.push_back(i) : to_add_wep.push_back(i);
		//}

		// process queues here so it doesnt delete controls right after they are created
		wp_tabs->process_queues();
		wp_area->process_queues();

		if (to_add_grp.empty() && to_add_wep.empty())
			return;

		// sort both arrays ascending
		std::sort(to_add_grp.begin(), to_add_grp.end());
		std::sort(to_add_wep.begin(), to_add_wep.end());

		// add spacer
		wp_tabs->add(MAKE("legit>weapons>spacer", spacer, vec2{ 0.f, 0.f }, vec2{ 0.f, 8.f })->make_width_automatic());

		//for (auto &i : to_add_grp)
		//{
		//	const auto &name = grp_to_name[i];

		//	// make tab
		//	const auto tb = MAKE_RUNTIME("legit>weapons>" + name, child_tab, name, hash(XOR("legit>weapon>") + name))->
		//		make_vertical();
		//	if (!skip_adjust)
		//		tb->margin.maxs.y = -8.f;

		//	wp_tabs->add(tb);
		//	legit_aimhelper_assists(wp_area, i, XOR("legit>weapon>") + name);
		//}

		if (!to_add_grp.empty() && !to_add_wep.empty())
			wp_tabs->add(MAKE("legit>weapons>spacer2", spacer, vec2{ 0.f, 0.f }, vec2{ 0.f, 8.f })->make_width_automatic());

		/*for (auto &i : to_add_wep)
		{
			const auto &name = wpn_to_name[i];

			const auto tb = MAKE_RUNTIME("legit>weapons>" + name, child_tab, name, hash(XOR("legit>weapon>") + name))->
				make_vertical();
			if (!skip_adjust)
				tb->margin.maxs.y = -8.f;

			wp_tabs->add(tb);
			legit_aimhelper_assists(wp_area, i, XOR("legit>weapon>") + name);
		}*/

		wp_tabs->process_queues();
		wp_area->process_queues();

		ctx->find<child_tab>(GUI_HASH("legit>weapons>general"))->select();
		//VIRTUALIZER_TIGER_WHITE_END;
	}

	void legit_derive_weapon_setting(uint32_t v)
	{
		//VIRTUALIZER_TIGER_WHITE_START;
		if (v >= group_id && v < general_id)
		{
			cfg.legit.weapon_config.copy(general_id, v);
			return;
		}

		// locate weapon in group
		/*for (auto &[grp_id, weps] : grp_to_wep)
		{
			if (std::find(weps.begin(), weps.end(), v) != weps.end() && cfg.legit.weapon_config.cfgs[grp_id])
			{
				cfg.legit.weapon_config.copy(grp_id, v);
				return;
			}
		}*/

		cfg.legit.weapon_config.copy(general_id, v);
		//VIRTUALIZER_TIGER_WHITE_END;
	}

	void legit_tab(std::shared_ptr<layout> &e)
	{
		//VIRTUALIZER_TIGER_WHITE_START;
		auto group_sz = window_size_to_groupbox_size(848.f, 588.f, 4.f);

		const auto tabs = MAKE("legit>weapons", tabs_layout, vec2{ 0.f, 0.f }, vec2{ group_sz.x * .5f, 442.f }, td_vertical);
		tabs->add(MAKE("legit>weapons>general", child_tab, XOR("General"), GUI_HASH("legit>weapon>general"))->make_vertical()->make_selected());

		auto area = MAKE("legit>tab", layout, vec2{ group_sz.x * .5f + 16.f, 0.f }, vec2{ 800.f - (group_sz.x * .5f + 16.f), 482.f }, s_none);
		area->make_not_clip();

		group_sz.x = 218.f;
		legit_aimhelper_assists(area, general_id, XOR("legit>weapon>general"), true);

		area->add(make_groupbox(XOR("legit>general"), XOR("GENERAL"), {group_sz.x * 2 + 32.f, 0.f}, group_sz, legit_general));

		const auto ovr = MAKE("legit>override", button, XOR("Add override"), nullptr, vec2{ 0.f, 462.f }, vec2{ group_sz.x * .5f - 16.f, 20.f });
		ovr->margin = {};
		ovr->center_text = false;
		//ovr->callback = []()
		//{
		//	const auto ovr = ctx->find(GUI_HASH("legit>override"));

		//	const auto ovr_pick = std::make_shared<action_list_popup>(control_id{GUI_HASH("action_list_popup")},
		//															  action_list_popup::params_t{
		//																  grp_to_name, wpn_to_name},
		//															  cfg.legit.weapon_config.cfgs,
		//															  ovr->area_abs().bl() + vec2{0.f, 4.f});
		//	ovr_pick->open();
		//	ovr_pick->callback = [](auto i, auto v)
		//	{
		//		// only derive if enabled
		//		if (v)
		//			legit_derive_weapon_setting(i);

		//		rebuild_legit_layout();
		//	};
		//};

		e->add(tabs);
		e->add(area);
		e->add(ovr);
		//VIRTUALIZER_TIGER_WHITE_END;
	}

	void legit_aimhelper(std::shared_ptr<layout> &e, uint32_t grp, const std::string &id)
	{
		//VIRTUALIZER_TIGER_WHITE_START;
		ADD_RUNTIME("Magnet", id + XOR("magnet"), checkbox, cfg.legit.weapon_config.magnet[grp]);

		{
			const auto c = MAKE_RUNTIME(id + XOR("hitboxes"), combo_box, cfg.legit.weapon_config.magnet_hitboxes[grp]);
			c->allow_multiple = true;
			c->add(
			{MAKE_RUNTIME(id + XOR("hitboxes>head"), selectable, XOR("Head"), cfg_t::lh_head), MAKE_RUNTIME(
				 id + XOR("hitboxes>chest"), selectable, XOR("Chest"), cfg_t::lh_chest), MAKE_RUNTIME(id + XOR("hitboxes>body"), selectable, XOR("Body"), cfg_t::lh_body),
			 MAKE_RUNTIME(id + XOR("hitboxes>pelvis"), selectable, XOR("Pelvis"), cfg_t::lh_pelvis),});

			ADD_INLINE("Hitboxes", c);
		}

		/*const auto is_sniper = util::in_array(grp, {
												  general_id, group_id + 4, group_id + 6, group_id + 7,
												  WEAPON_AUG, WEAPON_SG556, WEAPON_AWP, WEAPON_G3SG1, WEAPON_SCAR20,
												  WEAPON_SSG08
											  });*/

		/*if (is_sniper)
		{
			ADD_RUNTIME("Only in scope", id + XOR("only in scope"), checkbox,
						cfg.legit.weapon_config.magnet_only_in_scope[grp]);
		}*/

		ADD_RUNTIME("Magnet FOV", id + XOR("magnet fov"), slider<float>, 1.f, 50.f, cfg.legit.weapon_config.magnet_fov[grp], XOR("%.0f deg"));
		ADD_RUNTIME("Magnet speed", id + XOR("magnet speed"), slider<float>, 1.f, 100.f, cfg.legit.weapon_config.magnet_speed[grp], XOR("%.0f%%"));
		ADD_RUNTIME("Target delay", id + XOR("target delay"), slider<float>, 10.f, 500.f, cfg.legit.weapon_config.target_delay[grp], XOR("%.0f ms"));
		ADD_RUNTIME("Limit percent", id + XOR("limit percent"), slider<float>, 0.f, 100.f, cfg.legit.weapon_config.limit_factor[grp], XOR("%.0f%%"));
		ADD_RUNTIME("Override %", id + XOR("override %"), slider<float>, 0.f, 100.f, cfg.legit.weapon_config.override_factor[grp], XOR("%.0f%%"));
		//VIRTUALIZER_TIGER_WHITE_END;
	}

	void legit_assists(std::shared_ptr<layout> &e, uint32_t grp, const std::string &id)
	{
		//VIRTUALIZER_TIGER_WHITE_START;
		ADD_RUNTIME("Triggerbot", id + XOR("triggerbot"), checkbox, cfg.legit.weapon_config.triggerbot[grp]);

		/*const auto is_sniper = util::in_array(grp, {
												  general_id, group_id + 4, group_id + 6, group_id + 7,
												  WEAPON_AUG, WEAPON_SG556, WEAPON_AWP, WEAPON_G3SG1, WEAPON_SCAR20,
												  WEAPON_SSG08
											  });

		if (is_sniper)
		{
			ADD_RUNTIME("Only in scope", id + XOR("only in scope"), checkbox,
						cfg.legit.weapon_config.triggerbot_only_in_scope[grp]);
		}*/

		ADD_RUNTIME("Reaction time", id + XOR("reaction time"), slider<float>, 0.f, 500.f, cfg.legit.weapon_config.reaction_time[grp], XOR("%.0f ms"));
		ADD_RUNTIME("Recoil control", id + XOR("recoil control"), checkbox, cfg.legit.weapon_config.rcs[grp]);
		ADD_RUNTIME("Speed", id + XOR("speed"), slider<float>, 1.f, 100.f, cfg.legit.weapon_config.rcs_speed[grp], XOR("%.0f%%"));
		//VIRTUALIZER_TIGER_WHITE_END;
	}

	void legit_general(std::shared_ptr<layout> &e)
	{
		//VIRTUALIZER_TIGER_WHITE_START;
		ADD("Enabled", "legit>general>enabled", checkbox, cfg.legit.enabled);

		{
			const auto c = MAKE("legit>general>disablers", combo_box, cfg.legit.disablers);
			c->allow_multiple = true;
			c->add(
			{MAKE("legit>general>disablers>smoked", selectable, XOR("Smoked"), cfg_t::legit_disablers_smoke), MAKE(
				 "legit>general>disablers>flashed", selectable, XOR("Flashed"), cfg_t::legit_disablers_flash),});

			ADD_INLINE("Disablers", c);
		}

		ADD("Backtrack", "legit>general>backtrack", slider<float>, 0.f, 400.f, cfg.legit.backtrack, XOR("%.0fms"));
		//VIRTUALIZER_TIGER_WHITE_END;
	}
}
