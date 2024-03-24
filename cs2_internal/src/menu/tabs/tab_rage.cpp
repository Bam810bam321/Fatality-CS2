#include <menu/menu.h>
#include <gui/popups/action_list_popup.h>

#include "game/cfg.h"
#include "menu/macros.h"
#include "utils/util.h"

using namespace evo::gui;
using namespace evo::gui::helpers;
using namespace evo::ren;

namespace menu::group
{
	// static names, not using ingame strings cause i'm LAZY!
	// lazy enough to do redundant work, ofc
	/*std::unordered_map<uint32_t, std::string> wpn_to_name = {
		{ WEAPON_DEAGLE, XOR("Desert Eagle")},
		{ WEAPON_ELITE, XOR("Dual Berettas")},
		{ WEAPON_FIVESEVEN, XOR("Five-SeveN")},
		{ WEAPON_GLOCK, XOR("Glock-18")},
		{ WEAPON_AK47, XOR("AK-47")},
		{ WEAPON_AUG, XOR("AUG")},
		{ WEAPON_AWP, XOR("AWP")},
		{ WEAPON_FAMAS, XOR("FAMAS")},
		{ WEAPON_G3SG1, XOR("G3SG1")},
		{ WEAPON_GALILAR, XOR("Galil AR")},
		{ WEAPON_M249, XOR("M249")},
		{ WEAPON_M4A1, XOR("M4A4")},
		{ WEAPON_MAC10, XOR("MAC-10")},
		{ WEAPON_P90, XOR("P90")},
		{ WEAPON_MP5SD, XOR("MP5-SD")},
		{ WEAPON_UMP45, XOR("UMP-45")},
		{ WEAPON_XM1014, XOR("XM1014")},
		{ WEAPON_BIZON, XOR("PP Bizon")},
		{ WEAPON_MAG7, XOR("MAG-7")},
		{ WEAPON_NEGEV, XOR("Negev")},
		{ WEAPON_SAWEDOFF, XOR("Sawed Off")},
		{ WEAPON_TEC9, XOR("Tec-9")},
		{ WEAPON_HKP2000, XOR("P2000")},
		{ WEAPON_MP7, XOR("MP7")},
		{ WEAPON_MP9, XOR("MP9")},
		{ WEAPON_NOVA, XOR("Nova")},
		{ WEAPON_P250, XOR("P250")},
		{ WEAPON_SCAR20, XOR("SCAR-20")},
		{ WEAPON_SG556, XOR("SG 553")},
		{ WEAPON_SSG08, XOR("SSG-08")},
		{ WEAPON_M4A1_SILENCER, XOR("M4A1-S")},
		{ WEAPON_USP_SILENCER, XOR("USP-S")},
		{ WEAPON_CZ75A, XOR("CZ-75 Auto")},
		{ WEAPON_REVOLVER, XOR("R8 Revolver")},
	};

	std::unordered_map<uint32_t, std::string> grp_to_name = {
		{ group_id + 1, XOR("Pistols")},
		{ group_id + 2, XOR("Heavy Pistols")},
		{ group_id + 3, XOR("SMGs")},
		{ group_id + 4, XOR("Rifles")},
		{ group_id + 5, XOR("Heavy")},
		{ group_id + 6, XOR("Auto Snipers")},
		{ group_id + 7, XOR("Bolt Snipers")},
	};*/

	/*std::unordered_map<uint32_t, std::vector<uint32_t>> grp_to_wep = {
		{group_id + 1, {
			WEAPON_ELITE, WEAPON_FIVESEVEN, WEAPON_GLOCK, WEAPON_P250, WEAPON_TEC9, WEAPON_USP_SILENCER, WEAPON_CZ75A, WEAPON_HKP2000,
		}},
		{group_id + 2, {
			WEAPON_DEAGLE, WEAPON_REVOLVER,
		}},
		{group_id + 3, {
			WEAPON_MAC10, WEAPON_P90, WEAPON_MP5SD, WEAPON_UMP45, WEAPON_MP7, WEAPON_MP9, WEAPON_BIZON,
		}},
		{group_id + 4, {
			WEAPON_AK47, WEAPON_AUG, WEAPON_FAMAS, WEAPON_GALILAR, WEAPON_M4A1, WEAPON_SG556, WEAPON_M4A1_SILENCER,
		}},
		{group_id + 5, {
			WEAPON_M249, WEAPON_NEGEV, WEAPON_XM1014, WEAPON_SAWEDOFF, WEAPON_MAG7, WEAPON_NOVA,
		}},
		{group_id + 6, {
			WEAPON_G3SG1, WEAPON_SCAR20,
		}},
		{group_id + 7, {
			WEAPON_AWP, WEAPON_SSG08,
		}},
	};*/

	void rage_tab(std::shared_ptr<layout> &e)
	{
		//VIRTUALIZER_TIGER_WHITE_START;
		const auto tabs = MAKE("rage>tabs", tabs_layout, vec2{ 0.f, 0.f }, vec2{ 800.f, 22.f }, td_horizontal);
		tabs->add(MAKE("rage>tabs>aimbot", child_tab, XOR("Aimbot"), GUI_HASH("rage>tab>aimbot"))->make_selected());
		tabs->add(MAKE("rage>tabs>anti-aim", child_tab, XOR("Anti-aim"), GUI_HASH("rage>tab>anti-aim")));

		e->add(tabs);
		rage_aimbot(e);
		rage_antiaim(e);
		//VIRTUALIZER_TIGER_WHITE_END;
	}

	void rage_aimbot_weapon_extra(const std::shared_ptr<layout> &e, uint32_t grp, const std::string &id, bool vis = false)
	{
		//VIRTUALIZER_TIGER_WHITE_START;
		auto group_sz = window_size_to_groupbox_size(848.f, 588.f, 4.f) - vec2{0.f, 36.f};
		group_sz.x = 218.f;

		const auto doubletab = MAKE_RUNTIME(id, layout, vec2{ 0.f, 0.f }, vec2{ group_sz.x * 2.f + 16.f, 446.f }, s_justify);
		doubletab->is_visible = vis;
		doubletab->make_not_clip();
		doubletab->add(
			make_groupbox(
				id + XOR(">weapon"), XOR("WEAPON"), group_sz, [&grp, &id](auto e)
				{
					rage_aimbot_weapon(e, grp, id + XOR(">weapon>"));
				}));
		doubletab->add(
			make_groupbox(
				id + XOR(">extra"), XOR("EXTRA"), group_sz, [&grp, &id](auto e)
				{
					rage_aimbot_extra(e, grp, id + XOR(">extra>"));
				}));

		doubletab->process_queues();
		doubletab->reset();

		e->add(doubletab);
		//VIRTUALIZER_TIGER_WHITE_END;
	}

	void derive_weapon_setting(uint32_t v)
	{
		//VIRTUALIZER_TIGER_WHITE_START;
		if (v >= group_id && v < general_id)
		{
			cfg.weapon_config.copy(general_id, v);
			return;
		}

		// locate weapon in group
		/*for (auto &[grp_id, weps] : grp_to_wep)
		{
			if (std::find(weps.begin(), weps.end(), v) != weps.end() && cfg.weapon_config.cfgs[grp_id])
			{
				cfg.weapon_config.copy(grp_id, v);
				return;
			}
		}*/

		cfg.weapon_config.copy(general_id, v);
		//VIRTUALIZER_TIGER_WHITE_END;
	}

	void rebuild_rage_layout(bool skip_adjust)
	{
		//VIRTUALIZER_TIGER_WHITE_START;
		const auto wp_tabs = ctx->find<tabs_layout>(GUI_HASH("rage>weapons"));
		const auto wp_area = ctx->find<layout>(GUI_HASH("rage>tab>aimbot"));

		// remove spacers
		wp_tabs->remove(GUI_HASH("rage>weapons>spacer"));
		wp_tabs->remove(GUI_HASH("rage>weapons>spacer2"));

		bool any_added{};
		std::vector<uint32_t> to_add_grp, to_add_wep;
		//for (auto &[i, v] : cfg.weapon_config.cfgs)
		//{
		//	const auto &name = i >= group_id ? grp_to_name[i] : wpn_to_name[i];
		//	any_added = any_added || v;

		//	// erase everything!
		//	wp_tabs->remove(hash(XOR("rage>weapons>") + name));
		//	wp_area->remove(hash(XOR("rage>weapon>") + name));

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
		wp_tabs->add(MAKE("rage>weapons>spacer", spacer, vec2{ 0.f, 0.f }, vec2{ 0.f, 8.f })->make_width_automatic());

		//for (auto &i : to_add_grp)
		//{
		//	const auto &name = grp_to_name[i];

		//	// make tab
		//	const auto tb = MAKE_RUNTIME("rage>weapons>" + name, child_tab, name, hash(XOR("rage>weapon>") + name))->
		//		make_vertical();
		//	if (!skip_adjust)
		//		tb->margin.maxs.y = -8.f;

		//	wp_tabs->add(tb);
		//	rage_aimbot_weapon_extra(wp_area, i, XOR("rage>weapon>") + name);
		//}

		if (!to_add_grp.empty() && !to_add_wep.empty())
			wp_tabs->add(MAKE("rage>weapons>spacer2", spacer, vec2{ 0.f, 0.f }, vec2{ 0.f, 8.f })->make_width_automatic());

		/*for (auto &i : to_add_wep)
		{
			const auto &name = wpn_to_name[i];

			const auto tb = MAKE_RUNTIME("rage>weapons>" + name, child_tab, name, hash(XOR("rage>weapon>") + name))->
				make_vertical();
			if (!skip_adjust)
				tb->margin.maxs.y = -8.f;

			wp_tabs->add(tb);
			rage_aimbot_weapon_extra(wp_area, i, XOR("rage>weapon>") + name);
		}*/

		wp_tabs->process_queues();
		wp_area->process_queues();

		// force select general no matter what
		ctx->find<child_tab>(GUI_HASH("rage>weapons>general"))->select();
		//VIRTUALIZER_TIGER_WHITE_END;
	}

	void rage_aimbot(std::shared_ptr<layout> &e)
	{
		//VIRTUALIZER_TIGER_WHITE_START;
		auto group_sz = window_size_to_groupbox_size(848.f, 588.f, 4.f) - vec2{0.f, 36.f};

		const auto tabs = MAKE("rage>weapons", tabs_layout, vec2{ 0.f, 36.f }, vec2{ group_sz.x * .5f, 406.f }, td_vertical);
		tabs->add(MAKE("rage>weapons>general", child_tab, XOR("General"), GUI_HASH("rage>weapon>general"))->make_vertical()->make_selected());

		auto area = MAKE("rage>tab>aimbot", layout, vec2{ group_sz.x * .5f + 16.f, 36.f }, vec2{ 800.f - (group_sz.x * .5f + 16.f), 446.f}, s_none);
		area->make_not_clip();

		group_sz.x = 218.f;
		rage_aimbot_weapon_extra(area, general_id, XOR("rage>weapon>general"), true);

		area->add(make_groupbox(XOR("rage>aimbot>general"), XOR("GENERAL"), {group_sz.x * 2 + 32.f, 0.f}, group_sz, rage_aimbot_general));

		const auto ovr = MAKE("rage>override", button, XOR("Add override"), nullptr, vec2{0.f, 462.f}, vec2{ group_sz.x * .5f - 16.f, 20.f});
		ovr->margin = {};
		ovr->center_text = false;
		//ovr->callback = []()
		//{
		//	const auto ovr = ctx->find(GUI_HASH("rage>override"));

		//	const auto ovr_pick = std::make_shared<action_list_popup>(control_id{GUI_HASH("action_list_popup")},
		//															  action_list_popup::params_t{
		//																  grp_to_name, wpn_to_name},
		//															  cfg.weapon_config.cfgs,
		//															  ovr->area_abs().bl() + vec2{0.f, 4.f});
		//	ovr_pick->open();
		//	ovr_pick->callback = [](auto i, auto v)
		//	{
		//		// only derive if enabled
		//		if (v)
		//			derive_weapon_setting(i);

		//		rebuild_rage_layout();
		//	};
		//};

		e->add(tabs);
		e->add(area);
		e->add(ovr);
		//VIRTUALIZER_TIGER_WHITE_END;
	}

	void rage_aimbot_weapon(std::shared_ptr<layout> &e, uint32_t grp, const std::string &id)
	{
		//VIRTUALIZER_TIGER_WHITE_START;
		ADD_RUNTIME("Hit chance", id + XOR("hit chance"), slider<float>, 0.f, 100.f, cfg.weapon_config.hitchance[(int)grp], XOR("%.0f%%"), 1.f, vec2{ 80.f, 14.f });
		ADD_RUNTIME("Pointscale", id + XOR("pointscale"), slider<float>, 0.f, 100.f, cfg.weapon_config.pointscale[(int)grp], XOR("%.0f%%"), 1.f, vec2{ 80.f, 14.f });
		ADD_RUNTIME(
			"Min damage", id + XOR("min damage"), slider<float>, 0.f, 125.f, cfg.weapon_config.mindmg[(int)grp], ssa<float>{ ssv<float>{101.f, XOR("HP + %.0f")},
			ssv<float>{0.f, XOR("%.0f hp")} }, 1.f, vec2{ 80.f, 14.f });

		{
			std::shared_ptr<settings> e_unshadow;
			{
				// shadow e
				auto e = MAKE_RUNTIME(id + XOR("override>settings"), settings, nullptr);
				ADD_RUNTIME("Value", id + XOR("override>settings>value"), slider<float>, 0.f, 100.f, cfg.weapon_config.mindmg_override[(int)grp], XOR("%.0f hp"));
				e_unshadow = e;
			}

			ADD_INLINE("Override", MAKE_RUNTIME(id + XOR("override"), checkbox, cfg.weapon_config.mindmg_override_enabled[(int)grp] ), e_unshadow);
		}

		{
			const auto c = MAKE_RUNTIME(id + XOR("hitboxes"), combo_box, cfg.weapon_config.hitboxes[(int)grp], vec2{}, vec2{ 80.f, 20.f });
			c->allow_multiple = true;
			c->add(
			{MAKE_RUNTIME(id + XOR("hitboxes>head"), selectable, XOR("Head"), cfg_t::hitboxes_head), MAKE_RUNTIME(
				 id + XOR("hitboxes>chest"), selectable, XOR("Chest"), cfg_t::hitboxes_chest),
			 MAKE_RUNTIME(id + XOR("hitboxes>stomach"), selectable, XOR("Stomach"), cfg_t::hitboxes_stomach),
			 MAKE_RUNTIME(id + XOR("hitboxes>arms"), selectable, XOR("Arms"), cfg_t::hitboxes_arms),
			 MAKE_RUNTIME(id + XOR("hitboxes>legs"), selectable, XOR("Legs"), cfg_t::hitboxes_legs),
			 MAKE_RUNTIME(id + XOR("hitboxes>feet"), selectable, XOR("Feet"), cfg_t::hitboxes_feet),});

			ADD_INLINE("Hitboxes", c);
		}

		{
			const auto c = MAKE_RUNTIME(id + XOR("multipoint"), combo_box, cfg.weapon_config.pointscales[(int)grp], vec2{}, vec2{ 80.f, 20.f });
			c->allow_multiple = true;
			c->add(
			{MAKE_RUNTIME(id + XOR("multipoint>head"), selectable, XOR("Head"), cfg_t::hitboxes_head), MAKE_RUNTIME(
				 id + XOR("multipoint>chest"), selectable, XOR("Chest"), cfg_t::hitboxes_chest),
			 MAKE_RUNTIME(id + XOR("multipoint>stomach"), selectable, XOR("Stomach"), cfg_t::hitboxes_stomach),
			 MAKE_RUNTIME(id + XOR("multipoint>arms"), selectable, XOR("Arms"), cfg_t::hitboxes_arms),
			 MAKE_RUNTIME(id + XOR("multipoint>legs"), selectable, XOR("Legs"), cfg_t::hitboxes_legs), MAKE_RUNTIME(
				 id + XOR("multipoint>feet"), selectable, XOR("Feet"), cfg_t::hitboxes_feet),});

			ADD_INLINE("Multipoint", c);
		}
		//VIRTUALIZER_TIGER_WHITE_END;
	}

	void rage_aimbot_extra(std::shared_ptr<layout> &e, uint32_t grp, const std::string &id)
	{
		//VIRTUALIZER_TIGER_WHITE_START;
		{
			std::shared_ptr<settings> e_unshadow;
			{
				auto e = MAKE_RUNTIME(id + XOR("autostop>settings"), settings, nullptr);

				const auto c = MAKE_RUNTIME(id + XOR("autostop>settings>mode"), combo_box, cfg.weapon_config.autostop_mode[(int)grp]);
				c->allow_multiple = true;
				c->add(
				{MAKE_RUNTIME(id + XOR("autostop>settings>mode>between shots"), selectable, XOR("Between shots"), cfg_t::autostop_inbetween), MAKE_RUNTIME(
					 id + XOR("autostop>settings>mode>early"), selectable, XOR("Early"), cfg_t::autostop_predictive), MAKE_RUNTIME(
					 id + XOR("autostop>settings>mode>only when lethal"), selectable, XOR("Only when lethal"), cfg_t::autostop_lethal),});

				ADD_INLINE("Mode", c);

				e_unshadow = e;
			}

			ADD_INLINE("Autostop", MAKE_RUNTIME(id + XOR("autostop"), checkbox, cfg.weapon_config.autostop[(int)grp]), e_unshadow);
		}

		/*const auto should_add_autoscope = util::in_array(grp, {
															 general_id, group_id + 4, group_id + 6, group_id + 7,
															 WEAPON_AUG, WEAPON_SG556, WEAPON_AWP, WEAPON_G3SG1,
															 WEAPON_SCAR20, WEAPON_SSG08
														 });

		if (should_add_autoscope)
		{
			ADD_RUNTIME("Autoscope", id + XOR("autoscope"), checkbox, cfg.weapon_config.autoscope[(int)grp]);
		}*/

		{
			const auto c = MAKE_RUNTIME(id + XOR("safepoint mode"), combo_box, cfg.weapon_config.fallback_mode[(int)grp], vec2{}, vec2{ 80.f, 20.f });
			c->add(
			{MAKE_RUNTIME(id + XOR("safepoint mode>none"), selectable, XOR("None"), cfg_t::fallback_off), MAKE_RUNTIME(
				 id + XOR("safepoint mode>adaptive"), selectable, XOR("Adaptive"), cfg_t::fallback_adaptive), MAKE_RUNTIME(
				 id + XOR("safepoint mode>prefer safepoint"), selectable, XOR("Prefer safepoint"), cfg_t::fallback_prefer_safepoint),});

			ADD_INLINE("Safepoint mode", c);
		}

		{
			const auto c = MAKE_RUNTIME(id + XOR("safety"), combo_box, cfg.weapon_config.force_safe[(int)grp], vec2{}, vec2{ 80.f, 20.f });
			c->allow_multiple = true;
			c->add(
			{MAKE_RUNTIME(id + XOR("safety>lethal"), selectable, XOR("Lethal"), cfg_t::safety_lethal), MAKE_RUNTIME(
				 id + XOR("safety>in air target"), selectable, XOR("In air target"), cfg_t::safety_air),
			 MAKE_RUNTIME(id + XOR("safety>moving target"), selectable, XOR("Moving target"), cfg_t::safety_moving),
			 MAKE_RUNTIME(id + XOR("safety>standing target"), selectable, XOR("Standing target"), cfg_t::safety_standing),
			 MAKE_RUNTIME(id + XOR("safety>limbs"), selectable, XOR("Limbs"), cfg_t::safety_limbs), MAKE_RUNTIME(
				 id + XOR("safety>on override damage"), selectable, XOR("On override damage"), cfg_t::safety_override),});

			ADD_INLINE("Safety", c);
		}

		{
			const auto c = MAKE_RUNTIME(id + XOR("extra safety"), combo_box, cfg.weapon_config.extra_safety[(int)grp], vec2{}, vec2{ 80.f, 20.f });
			c->allow_multiple = true;
			c->add(
			{MAKE_RUNTIME(id + XOR("extra safety>lethal"), selectable, XOR("Lethal"), cfg_t::safety_lethal), MAKE_RUNTIME(
				 id + XOR("extra safety>in air target"), selectable, XOR("In air target"), cfg_t::safety_air),
			 MAKE_RUNTIME(id + XOR("extra safety>moving target"), selectable, XOR("Moving target"), cfg_t::safety_moving),
			 MAKE_RUNTIME(id + XOR("extra safety>standing target"), selectable, XOR("Standing target"), cfg_t::safety_standing),
			 MAKE_RUNTIME(id + XOR("extra safety>limbs"), selectable, XOR("Limbs"), cfg_t::safety_limbs), MAKE_RUNTIME(
				 id + XOR("extra safety>on override damage"), selectable, XOR("On override damage"), cfg_t::safety_override),});

			ADD_INLINE("Extra safety", c);
		}

		{
			const auto c = MAKE_RUNTIME(id + XOR("bodyaim"), combo_box, cfg.weapon_config.baim[(int)grp], vec2{}, vec2{ 80.f, 20.f });
			c->allow_multiple = true;
			c->add(
			{MAKE_RUNTIME(id + XOR("bodyaim>lethal"), selectable, XOR("Lethal"), cfg_t::safety_lethal), MAKE_RUNTIME(
				 id + XOR("bodyaim>in air target"), selectable, XOR("In air target"), cfg_t::safety_air),
			 MAKE_RUNTIME(id + XOR("bodyaim>moving target"), selectable, XOR("Moving target"), cfg_t::safety_moving),
			 MAKE_RUNTIME(id + XOR("bodyaim>standing target"), selectable, XOR("Standing target"), cfg_t::safety_standing), MAKE_RUNTIME(
				 id + XOR("bodyaim>high risk"), selectable, XOR("High risk"), cfg_t::safety_risky),});

			ADD_INLINE("Bodyaim", c);
		}

		ADD_RUNTIME("Ignore limbs on moving", id + XOR("ignore limbs on moving"), checkbox, cfg.weapon_config.ignore_limbs[(int)grp]);

		/*if (util::in_array(grp, {general_id, group_id + 7, WEAPON_SSG08}))
			ADD_RUNTIME("Jumpscout", id + XOR("jumpscout"), checkbox, cfg.weapon_config.scout_jumpshot[(int)grp]);
		if (util::in_array(grp, {general_id, group_id + 2, WEAPON_REVOLVER}))
			ADD_RUNTIME("Autorevolver", id + XOR("autorevolver"), checkbox, cfg.weapon_config.autorevolver[(int)grp]);*/

		//VIRTUALIZER_TIGER_WHITE_END;
	}

	void rage_aimbot_general(std::shared_ptr<layout> &e)
	{
		//VIRTUALIZER_TIGER_WHITE_START;
		ADD("Aimbot", "rage>aimbot>general>aimbot", checkbox, cfg.aim.enabled);
		ADD("Silent", "rage>aimbot>general>silent", checkbox, cfg.aim.silent);
		ADD("Maximum fov", "rage>aimbot>general>maximum fov", slider<float>, 0.f, 180.f, cfg.aim.fov, XOR("%.0f deg"), 1.f, vec2{80.f, 14.f});
		ADD_INLINE(
			"Visualize aimbot", MAKE("rage>aimbot>general>visualize aimbot", checkbox, cfg.aim.visualize),
			MAKE("rage>aimbot>general>visualize aimbot>settings", settings, [](auto e) { ADD("Safe color", "rage>aimbot>general>visualize aimbot>settings>safe color",
				color_picker, cfg. aim.visualize_color_safe); ADD("Aim color", "rage>aimbot>general>visualize aimbot>settings>aim color", color_picker, cfg.aim .
				visualize_color); }));

		ADD("Anti-exploit", "rage>aimbot>general>anti-exploit", checkbox, cfg.aim.anti_exploit);
		ADD("Target dormant", "rage>aimbot>general>target dormant", checkbox, cfg.aim.dormant);
		ADD("Autofire", "rage>aimbot>general>autofire", checkbox, cfg.aim.autofire);
		ADD("Hide shot", "rage>aimbot>general>hide shot", checkbox, cfg.aim.hideshot);
		ADD("Double tap", "rage>aimbot>general>double tap", checkbox, cfg.aim.doubletap);

		{
			const auto c = MAKE("rage>aimbot>general>defensive lag", combo_box, cfg.aim.dt_exploit, vec2{}, vec2{80.f, 20.f});
			c->add(
			{MAKE("rage>aimbot>general>defensive lag>none", selectable, XOR("None"), cfg_t::def_none), MAKE(
				 "rage>aimbot>general>defensive lag>in air", selectable, XOR("In air"), cfg_t::def_in_air), MAKE(
				 "rage>aimbot>general>defensive lag>always on", selectable, XOR("Always on"), cfg_t::def_always_on),});

			ADD_INLINE("Defensive lag", c);
		}

		{
			const auto c = MAKE("rage>aimbot>general>defensive fake", combo_box, cfg.aa.dt_exploit_angles, vec2{}, vec2{ 80.f, 20.f });
			c->add(
			{MAKE("rage>aimbot>general>defensive fake>none", selectable, XOR("None"), cfg_t::dfake_none), MAKE(
				 "rage>aimbot>general>defensive fake>yaw", selectable, XOR("Yaw"), cfg_t::dfake_yaw),
			 MAKE("rage>aimbot>general>defensive fake>yaw flip", selectable, XOR("Yaw flip"), cfg_t::dfake_yaw_flip),
			 MAKE("rage>aimbot>general>defensive fake>quick yaw", selectable, XOR("Quick yaw"), cfg_t::dfake_quick_yaw), MAKE(
				 "rage>aimbot>general>defensive fake>quick yaw flip", selectable, XOR("Quick yaw flip"), cfg_t::dfake_quick_yaw_flip),});

			ADD_INLINE("Defensive fake", c);
		}

		ADD("Delay shot", "rage>aimbot>general>delay shot", checkbox, cfg.aim.extend_peek);
		ADD("Force extra safety", "rage>aimbot>general>force extra safety", checkbox, cfg.aim.fallback_on_key);
		ADD("Force bodyaim", "rage>aimbot>general>force bodyaim", checkbox, cfg.aim.baim_on_key);
		ADD("Headshot only", "rage>aimbot>general>headshot only", checkbox, cfg.aim.hsmode);
		ADD("Knife bot", "rage>aimbot>general>knife bot", checkbox, cfg.aim.knife_bot);

		ADD_INLINE(
			"Zeus bot", MAKE("rage>aimbot>general>zeus bot", checkbox, cfg.aim.zeus_bot),
			MAKE("rage>aimbot>general>zeus bot>settings", settings, [](auto e) { ADD("Hitchance", "rage>aimbot>general>zeus bot>settings>hitchance", slider<float>, 0.f,
				100.f, cfg.aim.zeus_hc, XOR("%.0f%%")); }));

		{
			const auto c = MAKE("rage>aimbot>general>resolver mode", combo_box, cfg.aim.resolver_mode, vec2{}, vec2{ 80.f, 20.f });
			c->add(
			{MAKE("rage>aimbot>general>resolver mode>roll", selectable, XOR("Roll"), cfg_t::res_roll), MAKE(
				 "rage>aimbot>general>resolver mode>roll disabled", selectable, XOR("Roll disabled"), cfg_t::res_roll_disabled),});

			ADD_INLINE("Resolver mode", c);
		}

		{
			const auto c = MAKE("rage>aimbot>general>low perf. mode", combo_box, cfg.aim.low_perf, vec2{}, vec2{ 80.f, 20.f });
			c->allow_multiple = true;
			c->add(
			{MAKE("rage>aimbot>general>low perf. mode>limit targets", selectable, XOR("Limit targets"), cfg_t::low_perf_targets), MAKE(
				 "rage>aimbot>general>low perf. mode>limit scan accuracy", selectable, XOR("Limit scan accuracy"), cfg_t::low_perf_scan_accuracy),});

			ADD_INLINE("Low perf. mode", c);
		}
		//VIRTUALIZER_TIGER_WHITE_END;
	}

	void rage_antiaim(std::shared_ptr<layout> &e)
	{
		//VIRTUALIZER_TIGER_WHITE_START;
		const auto group_sz = window_size_to_groupbox_size(848.f, 588.f) - vec2{0.f, 36.f};
		const auto group_half_sz = group_sz * vec2{1.f, .5f} - vec2{0.f, 5.f};

		const auto area = MAKE("rage>tab>anti-aim", layout, vec2{ 0.f, 36.f }, vec2{ 800.f, 446.f }, s_justify);
		area->is_visible = false;
		area->make_not_clip();
		area->add(make_groupbox(XOR("rage>anti-aim>angles"), XOR("ANGLES"), group_sz, rage_antiaim_angles));
		area->add(
			tools::make_stacked_groupboxes(
				GUI_HASH("rage>anti-aim>fakelag,desync"), group_sz,
				{make_groupbox(XOR("rage>anti-aim>fakelag"), XOR("FAKELAG"), group_half_sz * vec2{1.f, .5f}, rage_antiaim_fakelag),
				 make_groupbox(XOR("rage>anti-aim>desync"), XOR("DESYNC"), group_half_sz + group_half_sz * vec2{0.f, .5f}, rage_antiaim_desync)}));
		area->add(make_groupbox(XOR("rage>anti-aim>custom options"), XOR("CUSTOM OPTIONS"), group_sz, rage_antiaim_custom));

		e->add(area);
		//VIRTUALIZER_TIGER_WHITE_END;
	}

	void rage_antiaim_angles(std::shared_ptr<layout> &e)
	{
		//VIRTUALIZER_TIGER_WHITE_START;
		ADD("Anti-aim", "rage>anti-aim>angles>anti-aim", checkbox, cfg.aa.enabled);

		{
			const auto c = MAKE("rage>anti-aim>angles>pitch", combo_box, cfg.aa.pitch);
			c->add(
			{MAKE("rage>anti-aim>angles>pitch>none", selectable, XOR("None"), cfg_t::aa_pitch_none), MAKE(
				 "rage>anti-aim>angles>pitch>down", selectable, XOR("Down"), cfg_t::aa_pitch_down),
			 MAKE("rage>anti-aim>angles>pitch>up", selectable, XOR("Up"), cfg_t::aa_pitch_up),
			 MAKE("rage>anti-aim>angles>pitch>zero", selectable, XOR("Zero"), cfg_t::aa_pitch_zero), MAKE(
				 "rage>anti-aim>angles>pitch>custom", selectable, XOR("Custom"), cfg_t::aa_pitch_custom),});

			c->callback = [](bits &v)
			{
				FIND_SAFE(ps, "rage>anti-aim>angles>pitch>settings");
				ps->set_visible(v.test(cfg_t::aa_pitch_custom));
			};

			ADD_INLINE(
				"Pitch", c,
				MAKE("rage>anti-aim>angles>pitch>settings", settings, [](auto e) { ADD("Angle", "rage>anti-aim>angles>pitch>settings>value", slider<float>, -89.f, 89.f,
					cfg.aa. pitch_value, XOR("%.0f deg")); })->make_invisible());
		}

		{
			const auto c = MAKE("rage>anti-aim>angles>yaw base", combo_box, cfg.aa.yaw_base);
			c->add(
			{MAKE("rage>anti-aim>angles>yaw base>viewangles", selectable, XOR("Viewangles"), cfg_t::aa_yaw_base_viewangles), MAKE(
				 "rage>anti-aim>angles>yaw base>at target", selectable, XOR("At target"), cfg_t::aa_yaw_base_at_target),});

			ADD_INLINE("Yaw base", c);
		}

		ADD("Freestanding", "rage>anti-aim>angles>freestanding", checkbox, cfg.aa.freestand);

		{
			const auto c = MAKE("rage>anti-aim>angles>yaw", combo_box, cfg.aa.yaw);
			c->add(
			{MAKE("rage>anti-aim>angles>yaw>none", selectable, XOR("None"), cfg_t::aa_yaw_none), MAKE(
				 "rage>anti-aim>angles>yaw>backwards", selectable, XOR("Backwards"), cfg_t::aa_yaw_backwards), MAKE(
				 "rage>anti-aim>angles>yaw>custom", selectable, XOR("Custom"), cfg_t::aa_yaw_custom),});

			c->callback = [](bits &v)
			{
				FIND_SAFE(ps, "rage>anti-aim>angles>yaw>settings");
				ps->set_visible(v.test(cfg_t::aa_yaw_custom));
			};

			ADD_INLINE(
				"Yaw", c,
				MAKE("rage>anti-aim>angles>yaw>settings", settings, [](auto e) { ADD("Angle", "rage>anti-aim>angles>yaw>settings>value", slider<float>, -180.f, 180.f, cfg
					.aa. yaw_value, XOR("%.0f deg")); })->make_invisible());
		}

		{
			const auto c = MAKE("rage>anti-aim>angles>yaw jitter", combo_box, cfg.aa.yaw_jitter);
			c->add(
			{MAKE("rage>anti-aim>angles>yaw jitter>none", selectable, XOR("None"), cfg_t::aa_yaw_jitter_none), MAKE(
				 "rage>anti-aim>angles>yaw jitter>center", selectable, XOR("Center"), cfg_t::aa_yaw_jitter_center), MAKE(
				 "rage>anti-aim>angles>yaw jitter>offset", selectable, XOR("Offset"), cfg_t::aa_yaw_jitter_offset),});

			c->callback = [](bits &v)
			{
				FIND_SAFE(ps, "rage>anti-aim>angles>yaw jitter>settings");
				ps->set_visible(!v.test(cfg_t::aa_yaw_jitter_none));
			};

			ADD_INLINE(
				"Yaw jitter", c,
				MAKE("rage>anti-aim>angles>yaw jitter>settings", settings, [](auto e) { ADD("Amount", "rage>anti-aim>angles>yaw jitter>settings>value", slider<float>, -
					180.f, 180.f, cfg.aa.yaw_jitter_value, XOR("%.0f deg")); }));
		}

		ADD_INLINE(
			"Anti-aim override", MAKE("rage>anti-aim>angles>anti-aim override", checkbox, cfg.aa.manual),
			MAKE("rage>anti-aim>angles>anti-aim override>settings", settings, [](auto e) { { const auto c = MAKE("rage>anti-aim>angles>anti-aim override>settings>left",
					checkbox, cfg.aa. manual_left); c->callback = [](bool v) { if (!v) return; const auto c1 = ctx->find<checkbox>(GUI_HASH(
					"rage>anti-aim>angles>anti-aim override>settings>back")); if (!c1) return; c1->set_value(false); const auto c2 = ctx->find<checkbox>(GUI_HASH(
					"rage>anti-aim>angles>anti-aim override>settings>right")); if (!c2) return; c2->set_value(false); }; ADD_INLINE("Left", c); } { const auto c = MAKE(
					"rage>anti-aim>angles>anti-aim override>settings>right", checkbox, cfg.aa. manual_right); c->callback = [](bool v) { if (!v) return; const auto c1 =
				ctx->
				find<checkbox>(GUI_HASH( "rage>anti-aim>angles>anti-aim override>settings>back")); if (!c1) return; c1->set_value(false); const auto c2 = ctx->find<
				checkbox>(
					GUI_HASH( "rage>anti-aim>angles>anti-aim override>settings>left")); if (!c2) return; c2->set_value(false); }; ADD_INLINE("Right", c); } { const auto c
				=
				MAKE("rage>anti-aim>angles>anti-aim override>settings>back", checkbox, cfg.aa. manual_back); c->callback = [](bool v) { if (!v) return; const auto c1 =
				ctx->
				find<checkbox>(GUI_HASH( "rage>anti-aim>angles>anti-aim override>settings>left")); if (!c1) return; c1->set_value(false); const auto c2 = ctx->find<
				checkbox>(
					GUI_HASH( "rage>anti-aim>angles>anti-aim override>settings>right")); if (!c2) return; c2->set_value(false); }; ADD_INLINE("Back", c); } }));
		//VIRTUALIZER_TIGER_WHITE_END;
	}

	void rage_antiaim_fakelag(std::shared_ptr<layout> &e)
	{
		//VIRTUALIZER_TIGER_WHITE_START;
		{
			const auto c = MAKE("rage>anti-aim>fakelag>mode", combo_box, cfg.aa.choke_mode);
			c->add(
			{MAKE("rage>anti-aim>fakelag>mode>none", selectable, XOR("None"), cfg_t::choke_mode_none), MAKE(
				 "rage>anti-aim>fakelag>mode>always on", selectable, XOR("Always on"), cfg_t::choke_mode_always_on), MAKE(
				 "rage>anti-aim>fakelag>mode>adaptive", selectable, XOR("Adaptive"), cfg_t::choke_mode_adaptive),});

			ADD_INLINE("Mode", c);
		}

		ADD("Limit", "rage>anti-aim>fakelag>limit", slider<float>, 1.f, 14.f, cfg.aa.choke_limit, XOR("%.0f ticks"));
		//VIRTUALIZER_TIGER_WHITE_END;
	}

	void rage_antiaim_desync(std::shared_ptr<layout> &e)
	{
		//VIRTUALIZER_TIGER_WHITE_START;
		{
			const auto c = MAKE("rage>anti-aim>desync>fake yaw", combo_box, cfg.aa.fake);
			c->add(
			{MAKE("rage>anti-aim>desync>fake yaw>static", selectable, XOR("Static"), cfg_t::fake_static), MAKE(
				 "rage>anti-aim>desync>fake yaw>opposite", selectable, XOR("Opposite"), cfg_t::fake_opposite),
			 MAKE("rage>anti-aim>desync>fake yaw>jitter", selectable, XOR("Jitter"), cfg_t::fake_jitter),
			 MAKE("rage>anti-aim>desync>fake yaw>peek fake", selectable, XOR("Peek fake"), cfg_t::fake_peek_fake), MAKE(
				 "rage>anti-aim>desync>fake yaw>peek real", selectable, XOR("Peek real"), cfg_t::fake_peek_real),});

			ADD_INLINE(
				"Fake yaw", c,
				MAKE("rage>anti-aim>desync>fake yaw>settings", settings, [](auto e) { ADD("Amount", "rage>anti-aim>desync>fake yaw>settings>value", slider<float>, -180.f,
					180.f, cfg.aa.fake_amount, XOR("%.0f deg")); ADD("Limit", "rage>anti-aim>desync>fake yaw>settings>limit", slider<float>, 0.f, 60.f, cfg.aa .fake_limit
					, XOR("%.0f deg")); }));
		}

		{
			const auto c = MAKE("rage>anti-aim>desync>leg slide", combo_box, cfg.aa.strafing);
			c->add(
			{MAKE("rage>anti-aim>desync>leg slide>default", selectable, XOR("Default"), cfg_t::leg_default), MAKE(
				 "rage>anti-aim>desync>leg slide>never slide", selectable, XOR("Never slide"), cfg_t::leg_never), MAKE(
				 "rage>anti-aim>desync>leg slide>always slide", selectable, XOR("Always slide"), cfg_t::leg_always),});

			ADD_INLINE("Leg slide", c);
		}

		{
			const auto c = MAKE("rage>anti-aim>desync>roll lean", combo_box, cfg.aa.lean_type);
			c->add(
			{MAKE("rage>anti-aim>desync>roll lean>none", selectable, XOR("None"), cfg_t::lean_none), MAKE(
				 "rage>anti-aim>desync>roll lean>static", selectable, XOR("Static"), cfg_t::lean_static),
			 MAKE("rage>anti-aim>desync>roll lean>extend fake", selectable, XOR("Extend fake"), cfg_t::lean_extend_fake),
			 MAKE("rage>anti-aim>desync>roll lean>invert fake", selectable, XOR("Invert fake"), cfg_t::lean_invert_fake), MAKE(
				 "rage>anti-aim>desync>roll lean>jitter", selectable, XOR("Jitter"), cfg_t::lean_jitter),});

			ADD_INLINE(
				"Roll lean", c,
				MAKE("rage>anti-aim>desync>roll lean>settings", settings, [](auto e) { ADD("Amount", "rage>anti-aim>desync>roll lean>settings>value", slider<float>, -50.f
						, 50.f, cfg.aa.lean_amount, XOR("%.0f deg")); ADD("Ensure lean", "rage>anti-aim>desync>roll lean>settings>ensure lean", checkbox, cfg.aa.
						ensure_lean)
					; }));
		}
		//VIRTUALIZER_TIGER_WHITE_END;
	}

	void rage_antiaim_custom(std::shared_ptr<layout> &e) { }
}
