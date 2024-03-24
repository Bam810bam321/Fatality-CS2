#include <menu/menu.h>

#include <gui/controls/image.h>

#include "game/cfg.h"
#include "menu/macros.h"

using namespace evo::gui;
using namespace evo::gui::helpers;
using namespace evo::ren;

namespace menu::group
{
	void visuals_tab(std::shared_ptr<layout> &e)
	{
		//VIRTUALIZER_TIGER_WHITE_START;
		const auto tabs = MAKE("visuals>tabs", tabs_layout, vec2{ 0.f, 0.f }, vec2{ 800.f, 22.f }, td_horizontal);
		tabs->add(MAKE("visuals>tabs>esp", child_tab, XOR("ESP"), GUI_HASH("visuals>tab>esp"))->make_selected());
		tabs->add(MAKE("visuals>tabs>chams", child_tab, XOR("Chams"), GUI_HASH("visuals>tab>chams")));
		tabs->add(MAKE("visuals>tabs>misc", child_tab, XOR("Misc"), GUI_HASH("visuals>tab>misc")));

		e->add(tabs);
		visuals_esp(e);
		visuals_models(e);
		visuals_misc(e);
		//VIRTUALIZER_TIGER_WHITE_END;
	}

	void visuals_esp(std::shared_ptr<layout> &e)
	{
		//VIRTUALIZER_TIGER_WHITE_START;
		const auto group_sz = window_size_to_groupbox_size(848.f, 588.f) - vec2{0.f, 36.f};

		const auto area = MAKE("visuals>tab>esp", layout, vec2{ 0.f, 36.f }, vec2{ 800.f, 446.f }, s_justify);
		area->make_not_clip();
		area->add(make_groupbox(XOR("visuals>esp>player"), XOR("PLAYER"), group_sz, visuals_esp_player));
		area->add(make_groupbox(XOR("visuals>esp>world"), XOR("WORLD"), group_sz, visuals_esp_world));
		area->add(
			make_groupbox(
				XOR("visuals>esp>preview"), XOR("PREVIEW"), group_sz, [](auto e)
				{
					{
						const auto c = MAKE("visuals>esp>preview>type", combo_box, cfg.visuals.preview);
						c->legacy_mode = true;
						c->add(
						{MAKE("visuals>esp>preview>type>enemy", selectable, XOR("Enemy"), 0), MAKE("visuals>esp>preview>type>team", selectable, XOR("Team"), 1),
						 MAKE("visuals>esp>preview>type>local", selectable, XOR("Local"), 2),});

						ADD_INLINE("Type", c);
					}

					/*const auto img = MAKE("visuals>chams>preview>image2", image, entity_rendering::is_setup ? (entity_rendering::preview_texture->pTextureHandles[0]->lpRawTexture) : nullptr, vec2{ 235.f, 370.f });
					img->rnd = [](const std::shared_ptr<control>& c)
					{
						entity_rendering::preview_pos = { c->pos_abs().x, c->pos_abs().y };
						visuals::queue_custom_player_esp();
						visuals::render_custom_player_esp();
					};
		
					ADD_LINE("preview img 2", img);*/
				}));

		e->add(area);
		//VIRTUALIZER_TIGER_WHITE_END;
	}

	void visuals_models(std::shared_ptr<layout> &e)
	{
		//VIRTUALIZER_TIGER_WHITE_START;
		const auto group_sz = window_size_to_groupbox_size(848.f, 588.f) - vec2{0.f, 36.f};
		const auto group_half_sz = group_sz * vec2{1.f, .5f} - vec2{0.f, 5.f};

		const auto area = MAKE("visuals>tab>chams", layout, vec2{ 0.f, 36.f }, vec2{ 800.f, 446.f }, s_justify);
		area->is_visible = false;
		area->make_not_clip();
		area->add(
			tools::make_stacked_groupboxes(
				GUI_HASH("visuals>chams>general,local"), group_sz,
				{make_groupbox(XOR("visuals>chams>general"), XOR("GENERAL"), group_half_sz * vec2{1.f, .5f}, visuals_models_general),
				 make_groupbox(XOR("visuals>chams>local"), XOR("LOCAL"), group_half_sz + group_half_sz * vec2{0.f, .5f}, visuals_models_local)}));
		area->add(
			tools::make_stacked_groupboxes(
				GUI_HASH("visuals>chams>enemy,team"), group_sz, {make_groupbox(XOR("visuals>chams>enemy"), XOR("ENEMY"), group_half_sz, visuals_models_enemy),
																 make_groupbox(XOR("visuals>chams>team"), XOR("TEAM"), group_half_sz, visuals_models_team)}));
		area->add(
			make_groupbox(
				XOR("visuals>chams>preview"), XOR("PREVIEW"), group_sz, [](auto e)
				{
					{
						const auto c = MAKE("visuals>chams>preview>type", combo_box, cfg.visuals.preview);
						c->legacy_mode = true;
						c->add(
						{MAKE("visuals>chams>preview>type>enemy", selectable, XOR("Enemy"), 0), MAKE("visuals>chams>preview>type>team", selectable, XOR("Team"), 1),
						 MAKE("visuals>chams>preview>type>local", selectable, XOR("Local"), 2),});

						ADD_INLINE("Type", c);
					}

					/*const auto img = MAKE("visuals>chams>preview>image", image, entity_rendering::is_setup ? (entity_rendering::preview_texture->pTextureHandles[0]->lpRawTexture) : nullptr, vec2{ 235.f, 370.f });
					img->rnd = [](const std::shared_ptr<control>& c)
					{
						entity_rendering::preview_pos = { c->pos_abs().x, c->pos_abs().y };
						visuals::queue_custom_player_esp();
						visuals::render_custom_player_esp();
					};
		
					ADD_LINE("preview img", img);*/
				}));

		e->add(area);
		//VIRTUALIZER_TIGER_WHITE_END;
	}

	void visuals_misc(std::shared_ptr<layout> &e)
	{
		//VIRTUALIZER_TIGER_WHITE_START;
		const auto group_sz = window_size_to_groupbox_size(848.f, 588.f) - vec2{0.f, 36.f};

		const auto area = MAKE("visuals>tab>misc", layout, vec2{ 0.f, 36.f }, vec2{ 800.f, 446.f }, s_justify);
		area->is_visible = false;
		area->make_not_clip();
		area->add(make_groupbox(XOR("visuals>misc>local"), XOR("LOCAL"), group_sz, visuals_misc_local));
		area->add(make_groupbox(XOR("visuals>misc>various"), XOR("VARIOUS"), group_sz, visuals_misc_various));
		area->add(make_groupbox(XOR("visuals>misc>beams"), XOR("BEAMS"), group_sz, visuals_misc_beams));

		e->add(area);
		//VIRTUALIZER_TIGER_WHITE_END;
	}

	void visuals_esp_player(std::shared_ptr<layout> &e)
	{
		//VIRTUALIZER_TIGER_WHITE_START;
		ADD("Esp", "visuals>esp>player>esp", checkbox, cfg.visuals.esp.enabled);
		ADD_INLINE(
			"Box", MAKE("visuals>esp>player>box", checkbox, cfg.visuals.esp.box), MAKE("visuals>esp>player>box>color", color_picker, cfg.visuals.esp.box_color, false));
		ADD_INLINE(
			"Skeleton", MAKE("visuals>esp>player>skeleton", checkbox, cfg.visuals.esp.skeleton),
			MAKE("visuals>esp>player>skeleton>color", color_picker, cfg.visuals.esp.skeleton_color, false));
		ADD_INLINE(
			"History skeleton", MAKE("visuals>esp>player>history skeleton", checkbox, cfg.visuals.esp.history_skeleton),
			MAKE("visuals>esp>player>history skeleton>color", color_picker, cfg.visuals.esp. history_skeleton_color, false));
		ADD_INLINE(
			"Name", MAKE("visuals>esp>player>name", checkbox, cfg.visuals.esp.name),
			MAKE("visuals>esp>player>name>color", color_picker, cfg.visuals.esp.name_color, false));
		ADD_INLINE(
			"Weapon", MAKE("visuals>esp>player>weapon", checkbox, cfg.visuals.esp.weapon),
			MAKE("visuals>esp>player>weapon>color", color_picker, cfg.visuals.esp.weapon_color, false));
		ADD_INLINE(
			"Weapon icons", MAKE("visuals>esp>player>weapon icons", checkbox, cfg.visuals.esp.weapon_icon),
			MAKE("visuals>esp>player>weapon icons>color", color_picker, cfg.visuals.esp.weapon_icon_color, false ));
		ADD_INLINE(
			"Health", MAKE("visuals>esp>player>health", checkbox, cfg.visuals.esp.health),
			MAKE("visuals>esp>player>health>color 1", color_picker, cfg.visuals.esp.health_color_1, false),
			MAKE("visuals>esp>player>health>color 2", color_picker, cfg.visuals.esp.health_color_2, false),
			MAKE("visuals>esp>player>health>settings", settings, [](auto e) { const auto c = MAKE("visuals>esp>player>health>settings>health style", combo_box, cfg.
				visuals.esp .health_style); c->add({ MAKE("visuals>esp>player>health>settings>health style>solid", selectable, XOR("Solid"), cfg_t ::healthbar_solid),
				MAKE("visuals>esp>player>health>settings>health style>gradient", selectable, XOR("Gradient"), cfg_t::healthbar_gradient), }); ADD_INLINE("Health style", c
			); }));


		ADD_INLINE(
			"Armor", MAKE("visuals>esp>player>armor", checkbox, cfg.visuals.esp.armor),
			MAKE("visuals>esp>player>armor>color", color_picker, cfg.visuals.esp.armor_color, false));
		ADD_INLINE(
			"Ammo", MAKE("visuals>esp>player>ammo", checkbox, cfg.visuals.esp.ammo),
			MAKE("visuals>esp>player>ammo>color", color_picker, cfg.visuals.esp.ammo_color, false));
		ADD_INLINE(
			"Ping spike", MAKE("visuals>esp>player>ping spike", checkbox, cfg.visuals.esp.ping),
			MAKE("visuals>esp>player>ping>color", color_picker, cfg.visuals.esp.ping_color, false));

		{
			const auto c = MAKE("visuals>esp>player>info", combo_box, cfg.visuals.esp.flags);
			c->allow_multiple = true;
			c->add(
			{MAKE("visuals>esp>player>info>scoped", selectable, XOR("Scoped"), cfg_t::esp_flag_scoped), MAKE(
				 "visuals>esp>player>info>bomb", selectable, XOR("Bomb"), cfg_t::esp_flag_bomb),
			 MAKE("visuals>esp>player>info>lc", selectable, XOR("Lagcomp break"), cfg_t::esp_flag_lc),
			 MAKE("visuals>esp>player>info>fd", selectable, XOR("Fake duck"), cfg_t::esp_flag_fd),
			 MAKE("visuals>esp>player>info>xp", selectable, XOR("Exploit charge"), cfg_t::esp_flag_xp),
			 MAKE("visuals>esp>player>info>armor", selectable, XOR("Armor"), cfg_t::esp_flag_armor),
			 MAKE("visuals>esp>player>info>hit", selectable, XOR("Hit"), cfg_t::esp_flag_hit),
			 MAKE("visuals>esp>player>info>money", selectable, XOR("Money"), cfg_t::esp_flag_money),
			 MAKE("visuals>esp>player>info>defuser", selectable, XOR("Defuse kit"), cfg_t::esp_flag_defuser), MAKE(
				 "visuals>esp>player>info>taser", selectable, XOR("Taser"), cfg_t::esp_flag_taser), MAKE(
				 "visuals>esp>player>info>immunity", selectable, XOR("Immunity"), cfg_t::esp_flag_immune),});

			ADD_INLINE("Info", c);
		}

		ADD_INLINE(
			"Sound", MAKE("visuals>esp>player>sound", checkbox, cfg.visuals.esp.sound_esp),
			MAKE("visuals>esp>player>sound>color", color_picker, cfg.visuals.esp.sound_esp_color));

		ADD_INLINE(
			"Glow", MAKE("visuals>esp>player>glow", checkbox, cfg.visuals.esp.glow.enabled),
			MAKE("visuals>esp>player>glow>settings", settings, [](auto e) { ADD_INLINE("Team", MAKE("visuals>esp>player>glow>settings>team", checkbox, cfg.visuals.esp.
				glow. team), MAKE("visuals>esp>player>glow>settings>team>color", color_picker, cfg.visuals.esp.glow. team_color)); ADD_INLINE("Enemy", MAKE(
				"visuals>esp>player>glow>settings>enemy", checkbox, cfg.visuals.esp.glow .enemy), MAKE("visuals>esp>player>glow>settings>enemy>color", color_picker, cfg.
				visuals.esp.glow. enemy_color)); ADD_INLINE("Local", MAKE("visuals>esp>player>glow>settings>local", checkbox, cfg.visuals.esp.glow .local), MAKE(
				"visuals>esp>player>glow>settings>local>color", color_picker, cfg.visuals.esp.glow. local_color)); }));

		ADD("Shared ESP", "visuals>esp>player>shared esp", checkbox, cfg.misc.shared_esp);
		ADD("Share with enemies", "visuals>esp>player>share with enemies", checkbox, cfg.misc.shared_esp_with_enemy);

		{
			const auto c = MAKE("visuals>esp>player>animation disablers", combo_box, cfg.visuals.disablers);
			c->allow_multiple = true;
			c->add(
			{MAKE("visuals>esp>player>animation disablers>model fading", selectable, XOR("Model fading"), cfg_t::vis_disable_model_fade), MAKE(
				 "visuals>esp>player>animation disablers>dormancy animation", selectable, XOR("Dormancy animation"), cfg_t::vis_disable_dormancy_interp), MAKE(
				 "visuals>esp>player>animation disablers>health bar animation", selectable, XOR("Health bar animation"), cfg_t::vis_disable_health_bar_interp), MAKE(
				 "visuals>esp>player>animation disablers>esp fading", selectable, XOR("ESP fading"), cfg_t::vis_disable_esp_fade),});

			ADD_INLINE("Animation disablers", c);
		}
		//VIRTUALIZER_TIGER_WHITE_END;
	}

	void visuals_esp_world(std::shared_ptr<layout> &e)
	{
		//VIRTUALIZER_TIGER_WHITE_START;
		{
			const auto c = MAKE("visuals>esp>world>esp", combo_box, cfg.visuals.esp.world.enabled);
			c->allow_multiple = true;
			c->add(
			{MAKE("visuals>esp>world>esp>weapons", selectable, XOR("Weapons"), cfg_t::world_weapons), MAKE(
				 "visuals>esp>world>esp>grenades", selectable, XOR("Grenades"), cfg_t::world_grenades),
			 MAKE("visuals>esp>world>esp>c4", selectable, XOR("C4"), cfg_t::world_c4), MAKE(
				 "visuals>esp>world>esp>danger zone", selectable, XOR("Danger Zone"), cfg_t::world_dangerzone),});

			ADD_INLINE("ESP", c, MAKE("visuals>esp>world>esp>color", color_picker, cfg.visuals.esp.world.color, false));
		}

		ADD("Weapon icons", "visuals>esp>world>weapon icons", checkbox, cfg.visuals.esp.world.weapon_icons);

		{
			const auto c = MAKE("visuals>esp>world>glow", combo_box, cfg.visuals.world.glow);
			c->allow_multiple = true;
			c->add(
			{MAKE("visuals>esp>world>glow>weapons", selectable, XOR("Weapons"), cfg_t::world_weapons), MAKE(
				 "visuals>esp>world>glow>grenades", selectable, XOR("Grenades"), cfg_t::world_grenades),
			 MAKE("visuals>esp>world>glow>c4", selectable, XOR("C4"), cfg_t::world_c4),});

			ADD_INLINE("Glow", c, MAKE("visuals>esp>world>glow>color", color_picker, cfg.visuals.world.glow_color));
		}
		//VIRTUALIZER_TIGER_WHITE_END;
	}

	void visuals_models_general(std::shared_ptr<layout> &e)
	{
		//VIRTUALIZER_TIGER_WHITE_START;
		ADD("Enabled", "visuals>chams>general>enabled", checkbox, cfg.visuals.chams.enable);
		ADD("Skip occlusion", "visuals>chams>general>skip occlusion", checkbox, cfg.visuals.chams.check_occlusion);
		//VIRTUALIZER_TIGER_WHITE_END;
	}

	__forceinline void insert_chams(const std::string &id, const std::shared_ptr<combo_box> &c)
	{
		c->add(
		{MAKE_RUNTIME(id + XOR("none"), selectable, XOR("None"), cfg_t::cham_none), MAKE_RUNTIME(id + XOR("normal"), selectable, XOR("Normal"), cfg_t::cham_normal),
		 MAKE_RUNTIME(id + XOR("flat"), selectable, XOR("Flat"), cfg_t::cham_flat), MAKE_RUNTIME(id + XOR("rim glow"), selectable, XOR("Rim Glow"), cfg_t::cham_rim_glow),
		 MAKE_RUNTIME(id + XOR("contour"), selectable, XOR("Contour"), cfg_t::cham_contour), MAKE_RUNTIME(id + XOR("flow"), selectable, XOR("Flow"), cfg_t::cham_flow),
		 MAKE_RUNTIME(id + XOR("acrylic"), selectable, XOR("Acrylic"), cfg_t::cham_acrylic),
		 MAKE_RUNTIME(id + XOR("legacy"), selectable, XOR("Legacy"), cfg_t::cham_legacy),});
	}

	void visuals_models_local(std::shared_ptr<layout> &e)
	{
		//VIRTUALIZER_TIGER_WHITE_START;
		{
			const auto c = MAKE("visuals>chams>local>type", combo_box, cfg.visuals.chams.local_pl.mat);
			insert_chams(XOR("visuals>chams>local>type>"), c);

			c->callback = [](bits &v)
			{
				FIND_SAFE(sc, "visuals>chams>local>type>settings>secondary color");
				FIND_SAFE(t, "visuals>chams>local>type>settings");

				t->set_visible(!v.test(cfg_t::cham_none));
				sc->get_parent()->set_visible(
					!(v.test(cfg_t::cham_normal) || v.test(cfg_t::cham_flat) || v.test(cfg_t::cham_flow) || v.test(cfg_t::cham_acrylic) || v.test(cfg_t::cham_legacy)));
			};

			ADD_INLINE(
				"Type", c,
				MAKE("visuals>chams>local>type>settings", settings, [](auto e) { ADD("Primary color", "visuals>chams>local>type>settings>primary color", color_picker, cfg
					. visuals.chams.local_pl.col1); ADD("Secondary color", "visuals>chams>local>type>settings>secondary color", color_picker, cfg .visuals.chams.local_pl.
					col2); })->make_invisible());
		}

		{
			const auto c = MAKE("visuals>chams>local>fake type", combo_box, cfg.visuals.chams.local_fake.mat);
			insert_chams(XOR("visuals>chams>local>fake type>"), c);

			c->callback = [](bits &v)
			{
				FIND_SAFE(sc, "visuals>chams>local>fake type>settings>secondary color");
				FIND_SAFE(t, "visuals>chams>local>fake type>settings");

				t->set_visible(!v.test(cfg_t::cham_none));
				sc->get_parent()->set_visible(
					!(v.test(cfg_t::cham_normal) || v.test(cfg_t::cham_flat) || v.test(cfg_t::cham_flow) || v.test(cfg_t::cham_acrylic) || v.test(cfg_t::cham_legacy)));
			};

			ADD_INLINE(
				"Fake type", c,
				MAKE("visuals>chams>local>fake type>settings", settings, [](auto e) { ADD("Primary color", "visuals>chams>local>fake type>settings>primary color",
						color_picker, cfg.visuals.chams.local_fake.col1); ADD("Secondary color", "visuals>chams>local>fake type>settings>secondary color", color_picker ,
						cfg.
						visuals.chams.local_fake.col2); ADD("Interpolate", "visuals>chams>local>fake type>settings>interpolate", checkbox, cfg. visuals.chams.local_interp
					);
					ADD("Pulsate", "visuals>chams>local>fake type>settings>pulsate", checkbox, cfg.visuals.chams. local_pulsate); })->make_invisible());
		}

		{
			const auto c = MAKE("visuals>chams>local>arms", combo_box, cfg.visuals.chams.local_arms.mat);
			insert_chams(XOR("visuals>chams>local>arms>"), c);

			c->callback = [](bits &v)
			{
				FIND_SAFE(sc, "visuals>chams>local>arms>settings>secondary color");
				FIND_SAFE(t, "visuals>chams>local>arms>settings>primary color");

				t->get_parent()->set_visible(!v.test(cfg_t::cham_none));
				sc->get_parent()->set_visible(
					!(v.test(cfg_t::cham_none) || v.test(cfg_t::cham_normal) || v.test(cfg_t::cham_flat) || v.test(cfg_t::cham_flow) || v.test(cfg_t::cham_acrylic) || v.
						test(cfg_t::cham_legacy)));
			};

			ADD_INLINE(
				"Arms", c,
				MAKE("visuals>chams>local>arms>settings", settings, [](auto e) { ADD_INV("Primary color", "visuals>chams>local>arms>settings>primary color", color_picker,
					cfg .visuals.chams.local_arms.col1); ADD_INV("Secondary color", "visuals>chams>local>arms>settings>secondary color", color_picker, cfg.visuals.chams.
					local_arms.col2); ADD("Hide sleeves", "visuals>chams>local>arms>settings>hide sleeves", checkbox, cfg.visuals. chams.local_nosleeve); }));
		}

		{
			const auto c = MAKE("visuals>chams>local>attachments", combo_box, cfg.visuals.chams.local_att.mat);
			insert_chams(XOR("visuals>chams>local>attachments>"), c);

			c->callback = [](bits &v)
			{
				FIND_SAFE(sc, "visuals>chams>local>attachments>settings>secondary color");
				FIND_SAFE(t, "visuals>chams>local>attachments>settings");

				t->set_visible(!v.test(cfg_t::cham_none));
				sc->get_parent()->set_visible(
					!(v.test(cfg_t::cham_normal) || v.test(cfg_t::cham_flat) || v.test(cfg_t::cham_flow) || v.test(cfg_t::cham_acrylic) || v.test(cfg_t::cham_legacy)));
			};

			ADD_INLINE(
				"Attachments", c,
				MAKE("visuals>chams>local>attachments>settings", settings, [](auto e) { ADD("Primary color", "visuals>chams>local>attachments>settings>primary color",
					color_picker, cfg.visuals.chams.local_att.col1); ADD("Secondary color", "visuals>chams>local>attachments>settings>secondary color", color_picker, cfg.
					visuals.chams.local_att.col2); })->make_invisible());
		}
		//VIRTUALIZER_TIGER_WHITE_END;
	}

	void visuals_models_enemy(std::shared_ptr<layout> &e)
	{
		//VIRTUALIZER_TIGER_WHITE_START;
		{
			const auto c = MAKE("visuals>chams>enemy>player", combo_box, cfg.visuals.chams.enemy_pl.mat);
			insert_chams(XOR("visuals>chams>enemy>player>"), c);

			c->callback = [](bits &v)
			{
				FIND_SAFE(sc, "visuals>chams>enemy>player>settings>secondary color");
				FIND_SAFE(t, "visuals>chams>enemy>player>settings");

				t->set_visible(!v.test(cfg_t::cham_none));
				sc->get_parent()->set_visible(
					!(v.test(cfg_t::cham_normal) || v.test(cfg_t::cham_flat) || v.test(cfg_t::cham_flow) || v.test(cfg_t::cham_acrylic) || v.test(cfg_t::cham_legacy)));
			};

			ADD_INLINE(
				"Player", c,
				MAKE("visuals>chams>enemy>player>settings", settings, [](auto e) { ADD("Primary color", "visuals>chams>enemy>player>settings>primary color", color_picker,
					cfg. visuals.chams.enemy_pl.col1, true, vec2{}, true); ADD("Secondary color", "visuals>chams>enemy>player>settings>secondary color", color_picker, cfg
					.visuals.chams.enemy_pl.col2, true, vec2{}, true); })->make_invisible());
		}

		ADD_INLINE(
			"Ignore Z", MAKE("visuals>chams>enemy>player>settings>ignore z", checkbox, cfg.visuals.chams.enemy_pl.ignorez),
			MAKE("visuals>chams>enemy>player>settings>hidden color", color_picker, cfg.visuals.chams.enemy_pl. col_z, true, vec2{}, true));

		ADD_INLINE(
			"History", MAKE("visuals>chams>enemy>history", checkbox, cfg.visuals.chams.enemy_his),
			MAKE("visuals>chams>enemy>history>color", color_picker, cfg.visuals.chams.enemy_his_col, true, vec2{} , true));

		{
			const auto c = MAKE("visuals>chams>enemy>shot record", combo_box, cfg.visuals.chams.enemy_shot.mat);
			insert_chams(XOR("visuals>chams>enemy>shot record>"), c);

			c->callback = [](bits &v)
			{
				FIND_SAFE(sc, "visuals>chams>enemy>shot record>settings>secondary color");
				FIND_SAFE(t, "visuals>chams>enemy>shot record>settings");

				t->set_visible(!v.test(cfg_t::cham_none));
				sc->get_parent()->set_visible(
					!(v.test(cfg_t::cham_normal) || v.test(cfg_t::cham_flat) || v.test(cfg_t::cham_flow) || v.test(cfg_t::cham_acrylic) || v.test(cfg_t::cham_legacy)));
			};

			ADD_INLINE(
				"Shot record", c,
				MAKE("visuals>chams>enemy>shot record>settings", settings, [](auto e) { ADD("Primary color", "visuals>chams>enemy>shot record>settings>primary color",
					color_picker, cfg.visuals.chams.enemy_shot.col1, true, vec2{}, true); ADD("Secondary color",
					"visuals>chams>enemy>shot record>settings>secondary color", color_picker, cfg.visuals.chams.enemy_shot.col2, true, vec2{}, true); })->make_invisible(
				));
		}

		{
			const auto c = MAKE("visuals>chams>enemy>ragdoll", combo_box, cfg.visuals.chams.enemy_rag.mat);
			insert_chams(XOR("visuals>chams>enemy>ragdoll>"), c);

			c->callback = [](bits &v)
			{
				FIND_SAFE(sc, "visuals>chams>enemy>ragdoll>settings>secondary color");
				FIND_SAFE(t, "visuals>chams>enemy>ragdoll>settings");

				t->set_visible(!v.test(cfg_t::cham_none));
				sc->get_parent()->set_visible(
					!(v.test(cfg_t::cham_normal) || v.test(cfg_t::cham_flat) || v.test(cfg_t::cham_flow) || v.test(cfg_t::cham_acrylic) || v.test(cfg_t::cham_legacy)));
			};

			ADD_INLINE(
				"Ragdoll", c,
				MAKE("visuals>chams>enemy>ragdoll>settings", settings, [](auto e) { ADD("Primary color", "visuals>chams>enemy>ragdoll>settings>primary color",
					color_picker, cfg. visuals.chams.enemy_rag.col1, true, vec2{}, true); ADD("Secondary color", "visuals>chams>enemy>ragdoll>settings>secondary color",
					color_picker, cfg.visuals.chams.enemy_rag.col2, true, vec2{}, true); })->make_invisible());
		}

		{
			const auto c = MAKE("visuals>chams>enemy>attachments", combo_box, cfg.visuals.chams.enemy_att.mat);
			insert_chams(XOR("visuals>chams>enemy>attachments>"), c);

			c->callback = [](bits &v)
			{
				FIND_SAFE(sc, "visuals>chams>enemy>attachments>settings>secondary color");
				FIND_SAFE(t, "visuals>chams>enemy>attachments>settings");

				t->set_visible(!v.test(cfg_t::cham_none));
				sc->get_parent()->set_visible(
					!(v.test(cfg_t::cham_normal) || v.test(cfg_t::cham_flat) || v.test(cfg_t::cham_flow) || v.test(cfg_t::cham_acrylic) || v.test(cfg_t::cham_legacy)));
			};

			ADD_INLINE(
				"Attachments", c,
				MAKE("visuals>chams>enemy>attachments>settings", settings, [](auto e) { ADD("Primary color", "visuals>chams>enemy>attachments>settings>primary color",
					color_picker, cfg.visuals.chams.enemy_att.col1, true, vec2{}, true); ADD("Secondary color", "visuals>chams>enemy>attachments>settings>secondary color"
					, color_picker, cfg.visuals.chams.enemy_att.col2, true, vec2{}, true); ADD("Ignore Z", "visuals>chams>enemy>attachments>settings>ignore z", checkbox,
					cfg.visuals. chams.enemy_att.ignorez); })->make_invisible());
		}
		//VIRTUALIZER_TIGER_WHITE_END;
	}

	void visuals_models_team(std::shared_ptr<layout> &e)
	{
		//VIRTUALIZER_TIGER_WHITE_START;
		{
			const auto c = MAKE("visuals>chams>team>player", combo_box, cfg.visuals.chams.team_pl.mat);
			insert_chams(XOR("visuals>chams>team>player>"), c);

			c->callback = [](bits &v)
			{
				FIND_SAFE(sc, "visuals>chams>team>player>settings>secondary color");
				FIND_SAFE(t, "visuals>chams>team>player>settings");

				t->set_visible(!v.test(cfg_t::cham_none));
				sc->get_parent()->set_visible(
					!(v.test(cfg_t::cham_normal) || v.test(cfg_t::cham_flat) || v.test(cfg_t::cham_flow) || v.test(cfg_t::cham_acrylic) || v.test(cfg_t::cham_legacy)));
			};

			ADD_INLINE(
				"Player", c,
				MAKE("visuals>chams>team>player>settings", settings, [](auto e) { ADD("Primary color", "visuals>chams>team>player>settings>primary color", color_picker,
					cfg. visuals.chams.team_pl.col1, true, vec2{}, true); ADD("Secondary color", "visuals>chams>team>player>settings>secondary color", color_picker, cfg.
					visuals.chams.team_pl.col2, true, vec2{}, true); })->make_invisible());
		}

		ADD_INLINE(
			"Ignore Z", MAKE("visuals>chams>team>player>settings>ignore z", checkbox, cfg.visuals.chams.team_pl.ignorez),
			MAKE("visuals>chams>team>player>settings>hidden color", color_picker, cfg.visuals.chams.team_pl.col_z , true, vec2{}, true));

		{
			const auto c = MAKE("visuals>chams>team>ragdoll", combo_box, cfg.visuals.chams.team_rag.mat);
			insert_chams(XOR("visuals>chams>team>ragdoll>"), c);

			c->callback = [](bits &v)
			{
				FIND_SAFE(sc, "visuals>chams>team>ragdoll>settings>secondary color");
				FIND_SAFE(t, "visuals>chams>team>ragdoll>settings");

				t->set_visible(!v.test(cfg_t::cham_none));
				sc->get_parent()->set_visible(
					!(v.test(cfg_t::cham_normal) || v.test(cfg_t::cham_flat) || v.test(cfg_t::cham_flow) || v.test(cfg_t::cham_acrylic) || v.test(cfg_t::cham_legacy)));
			};

			ADD_INLINE(
				"Ragdoll", c,
				MAKE("visuals>chams>team>ragdoll>settings", settings, [](auto e) { ADD("Primary color", "visuals>chams>team>ragdoll>settings>primary color", color_picker,
					cfg. visuals.chams.team_rag.col1, true, vec2{}, true); ADD("Secondary color", "visuals>chams>team>ragdoll>settings>secondary color", color_picker, cfg
					.visuals.chams.team_rag.col2, true, vec2{}, true); })->make_invisible());
		}

		{
			const auto c = MAKE("visuals>chams>team>attachments", combo_box, cfg.visuals.chams.team_att.mat);
			insert_chams(XOR("visuals>chams>team>attachments>"), c);

			c->callback = [](bits &v)
			{
				FIND_SAFE(sc, "visuals>chams>team>attachments>settings>secondary color");
				FIND_SAFE(t, "visuals>chams>team>attachments>settings");

				t->set_visible(!v.test(cfg_t::cham_none));
				sc->get_parent()->set_visible(
					!(v.test(cfg_t::cham_normal) || v.test(cfg_t::cham_flat) || v.test(cfg_t::cham_flow) || v.test(cfg_t::cham_acrylic) || v.test(cfg_t::cham_legacy)));
			};

			ADD_INLINE(
				"Attachments", c,
				MAKE("visuals>chams>team>attachments>settings", settings, [](auto e) { ADD("Primary color", "visuals>chams>team>attachments>settings>primary color",
					color_picker, cfg.visuals.chams.team_att.col1, true, vec2{}, true); ADD("Secondary color", "visuals>chams>team>attachments>settings>secondary color",
					color_picker, cfg.visuals.chams.team_att.col2, true, vec2{}, true); ADD("Ignore Z", "visuals>chams>team>attachments>settings>ignore z", checkbox, cfg.
					visuals. chams.team_att.ignorez); })->make_invisible());
		}
		//VIRTUALIZER_TIGER_WHITE_END;
	}

	void visuals_misc_local(std::shared_ptr<layout> &e)
	{
		//VIRTUALIZER_TIGER_WHITE_START;
		ADD_INLINE(
			"Thirdperson", MAKE("visuals>misc>local>thirdperson", checkbox, cfg.misc.thirdperson),
			MAKE("visuals>misc>local>thirdperson>settings", settings, [](auto e) { ADD("Force when dead", "visuals>misc>local>thirdperson>settings>force when dead",
					checkbox, cfg. misc.thirdperson_dead); ADD("Disable on grenade", "visuals>misc>local>thirdperson>settings>disable on grenade", checkbox, cfg.misc.
					thirdperson_grenade); ADD("Disable animation", "visuals>misc>local>thirdperson>settings>disable animation", checkbox, cfg.misc.thirdperson_no_interp);
				ADD
				("Distance", "visuals>misc>local>thirdperson>settings>distance", slider<float>, 40.f, 180.f, cfg.misc.thirdperson_dist, XOR("%.0fu")); ADD("Transparency",
					"visuals>misc>local>thirdperson>settings>transparency", slider<float>, 0.f, 100.f, cfg.misc.transparency_in_scope, XOR("%.0f%%")); ADD("+ with nades",
					"visuals>misc>local>thirdperson>settings>+ with nades", slider<float>, 0.f, 100.f, cfg.misc.transparency_nade, XOR("%.0f%%")); }));

		ADD_INLINE(
			"Fov changer", MAKE("visuals>misc>local>fov changer", checkbox, cfg.misc.fov_enabled),
			MAKE("visuals>misc>local>fov changer>settings", settings, [](auto e) { ADD("Fov", "visuals>misc>local>fov changer>settings>fov", slider<float>, 60.f, 140.f,
				cfg.misc. fov, XOR("%.0f")); ADD("Remove zoom", "visuals>misc>local>fov changer>settings>remove zoom", slider<float>, 0.f, 100.f, cfg.misc.fov_scope, XOR(
				"%.0f%%")); }));

		ADD_INLINE(
			"Viewmodel fov changer", MAKE("visuals>misc>local>viewmodel fov changer", checkbox, cfg.misc.vm_fov_enabled),
			MAKE("visuals>misc>local>fov changer>settings", settings, [](auto e) { ADD("Fov", "visuals>misc>local>viewmodel fov changer>settings>fov", slider<float>, 60.f
				, 140.f, cfg.misc.vm_fov, XOR("%.0f")); }));

		ADD("Goblin mode", "visuals>misc>local>goblin mode", checkbox, cfg.misc.goblin_mode);
		ADD_INLINE(
			"Grenade prediction", MAKE("visuals>misc>local>grenade prediction", checkbox, cfg.misc.grenade_tracer),
			MAKE("visuals>misc>local>grenade prediction>hit color", color_picker, cfg.misc.tracer_color)-> make_tooltip(XOR("Hit color")),
			MAKE("visuals>misc>local>grenade prediction>miss color", color_picker, cfg.misc.box_color)-> make_tooltip(XOR("Miss color")));
		ADD("Grenade proximity warning", "visuals>misc>local>grenade proximity warning", checkbox, cfg.misc.grenade_helper);
		ADD("Remove visual punch", "visuals>misc>local>remove visual punch", checkbox, cfg.aim.punch);

		{
			const auto c = MAKE("visuals>misc>local>remove scope", combo_box, cfg.misc.noscope);
			c->add(
			{MAKE("visuals>misc>local>remove scope>none", selectable, XOR("None"), cfg_t::noscope_none), MAKE(
				 "visuals>misc>local>remove scope>static", selectable, XOR("Static"), cfg_t::noscope_static),
			 MAKE("visuals>misc>local>remove scope>dynamic", selectable, XOR("Dynamic"), cfg_t::noscope_dynamic),
			 MAKE("visuals>misc>local>remove scope>gradient static", selectable, XOR("Gradient static"), cfg_t::noscope_gradient_static), MAKE(
				 "visuals>misc>local>remove scope>gradient dynamic", selectable, XOR("Gradient dynamic"), cfg_t::noscope_gradient_dynamic),});

			c->callback = [](bits &v)
			{
				FIND_SAFE(rss, "visuals>misc>local>remove scope>settings");
				rss->set_visible(v.test(cfg_t::noscope_gradient_static) || v.test(cfg_t::noscope_gradient_dynamic));
			};

			ADD_INLINE(
				"Remove scope", c,
				MAKE("visuals>misc>local>remove scope>settings", settings, [](auto e) { ADD("Line color", "visuals>misc>local>remove scope>settings>line color",
					color_picker, cfg. misc.scope_line_color); ADD("Line size", "visuals>misc>local>remove scope>settings>line size", slider<float>, 5.f, 100.f, cfg.misc.
					scope_line_size, XOR("%.0f%%")); ADD("Invert", "visuals>misc>local>remove scope>settings>invert", checkbox, cfg.misc. scope_invert); })->
				make_invisible());
		}

		ADD("Penetration crosshair", "visuals>misc>local>penetration crosshair", checkbox, cfg.visuals.autowall_crosshair);
		ADD("Force crosshair", "visuals>misc>local>force crosshair", checkbox, cfg.misc.force_crosshair);

		{
			const auto c = MAKE("visuals>misc>local>spread", combo_box, cfg.visuals.spread_circle_type);
			c->add(
			{MAKE("visuals>misc>local>spread>none", selectable, XOR("None"), cfg_t::spread_circle_off), MAKE(
				 "visuals>misc>local>spread>gradient", selectable, XOR("Gradient"), cfg_t::spread_circle_gradient),});

			ADD_INLINE(
				"Spread", c, MAKE("visuals>misc>local>spread>color 1", color_picker, cfg.visuals.spread_circle_color1),
				MAKE("visuals>misc>local>spread>color 2", color_picker, cfg.visuals.spread_circle_color2));
		}
		//VIRTUALIZER_TIGER_WHITE_END;
	}

	void visuals_misc_various(std::shared_ptr<layout> &e)
	{
		//VIRTUALIZER_TIGER_WHITE_START;
		ADD("Aspect ratio", "visuals>misc>various>aspect ratio", slider<float>, 0.f, 200.f, cfg.misc.aspect, XOR("%.0f%%"));

		ADD_INLINE(
			"Darkmode", MAKE("visuals>misc>various>darkmode", checkbox, cfg.visuals.dark),
			MAKE("visuals>misc>various>darkmode>world color", color_picker, cfg.visuals.dark_color)->make_tooltip (XOR("World color")),
			MAKE("visuals>misc>various>darkmode>prop color", color_picker, cfg.visuals.prop_color, false)-> make_tooltip(XOR("Prop color")),
			MAKE("visuals>misc>various>darkmode>settings", settings, [](auto e) { ADD("Amount", "visuals>misc>various>darkmode>settings>amount", slider<float>, 0.f, 100.f
				, cfg. visuals.darkness, XOR("%.0f%%")); }));

		ADD("Prop transparency", "visuals>misc>various>prop transparency", slider<float>, 0.f, 100.f, cfg.visuals.prop_transparency, XOR("%.0f%%"));

		{
			const auto c = MAKE("visuals>misc>various>skybox", combo_box, cfg.visuals.skybox);
			c->legacy_mode = true;
			c->add(
			{MAKE("visuals>misc>various>skybox>default", selectable, XOR("Default"), 0), MAKE(
				 "visuals>misc>various>skybox>sky_csgo_cloudy01", selectable, XOR("sky_csgo_cloudy01"), 1),
			 MAKE("visuals>misc>various>skybox>sky_csgo_night02", selectable, XOR("sky_csgo_night02"), 2),
			 MAKE("visuals>misc>various>skybox>sky_csgo_night02b", selectable, XOR("sky_csgo_night02b"), 3),
			 MAKE("visuals>misc>various>skybox>cs_baggage_skybox", selectable, XOR("cs_baggage_skybox"), 4),
			 MAKE("visuals>misc>various>skybox>cs_tibet", selectable, XOR("cs_tibet"), 5), MAKE("visuals>misc>various>skybox>vietnam", selectable, XOR("vietnam"), 6),
			 MAKE("visuals>misc>various>skybox>sky_lunacy", selectable, XOR("sky_lunacy"), 7), MAKE("visuals>misc>various>skybox>embassy", selectable, XOR("embassy"), 8),
			 MAKE("visuals>misc>various>skybox>italy", selectable, XOR("italy"), 9), MAKE("visuals>misc>various>skybox>jungle", selectable, XOR("jungle"), 10),
			 MAKE("visuals>misc>various>skybox>office", selectable, XOR("office"), 11),
			 MAKE("visuals>misc>various>skybox>sky_cs15_daylight01_hdr", selectable, XOR("sky_cs15_daylight01_hdr"), 12),
			 MAKE("visuals>misc>various>skybox>sky_cs15_daylight02_hdr", selectable, XOR("sky_cs15_daylight02_hdr"), 13),
			 MAKE("visuals>misc>various>skybox>sky_day02_05", selectable, XOR("sky_day02_05"), 14),
			 MAKE("visuals>misc>various>skybox>nukeblank", selectable, XOR("nukeblank"), 15),
			 MAKE("visuals>misc>various>skybox>dustblank", selectable, XOR("dustblank"), 16),
			 MAKE("visuals>misc>various>skybox>sky_venice", selectable, XOR("sky_venice"), 17),
			 MAKE("visuals>misc>various>skybox>sky_cs15_daylight03_hdr", selectable, XOR("sky_cs15_daylight03_hdr"), 18),
			 MAKE("visuals>misc>various>skybox>sky_cs15_daylight04_hdr", selectable, XOR("sky_cs15_daylight04_hdr"), 19),
			 MAKE("visuals>misc>various>skybox>vertigo", selectable, XOR("vertigo"), 20),
			 MAKE("visuals>misc>various>skybox>vertigoblue_hdr", selectable, XOR("vertigoblue_hdr"), 21),
			 MAKE("visuals>misc>various>skybox>sky_dust", selectable, XOR("sky_dust"), 22), MAKE(
				 "visuals>misc>various>skybox>sky_hr_aztec", selectable, XOR("sky_hr_aztec"), 23),});

			ADD_INLINE("Skybox", c, MAKE("visuals>misc>various>skybox>color", color_picker, cfg.visuals.skybox_color));
		}

		ADD("Disable post-processing", "visuals>misc>various>disable post-processing", checkbox, cfg.visuals.disable_postprocessing);

		{
			const auto c = MAKE("visuals>misc>various>hitmarker", combo_box, cfg.misc.hitmarker);
			c->allow_multiple = true;
			c->add(
			{MAKE("visuals>misc>various>hitmarker>world", selectable, XOR("World"), cfg_t::hitmarker_world), MAKE(
				 "visuals>misc>various>hitmarker>crosshair", selectable, XOR("Crosshair"), cfg_t::hitmarker_cross),});

			ADD_INLINE("Hitmarker", c);
		}

		ADD_INLINE(
			"Show impacts", MAKE("visuals>misc>various>show impacts", checkbox, cfg.misc.impacts),
			MAKE("visuals>misc>various>show impacts>color 1", color_picker, cfg.misc.impacts_color),
			MAKE("visuals>misc>various>show impacts>color 2", color_picker, cfg.misc.impacts_color2));

		ADD("Remove blur", "visuals>misc>various>remove blur", checkbox, cfg.misc.remove_blur);
		ADD("Remove smoke", "visuals>misc>various>remove smoke", checkbox, cfg.misc.remove_smoke);
		ADD("Remove flash", "visuals>misc>various>remove flash", checkbox, cfg.misc.remove_flash);
		ADD_INLINE(
			"Out of fov", MAKE("visuals>misc>various>out of fov", checkbox, cfg.visuals.out_of_fov),
			MAKE("visuals>misc>various>out of fov>settings", settings, [](auto e) { ADD("Color", "visuals>misc>various>out of fov>settings>color", color_picker, cfg.
				visuals. out_of_fov_col); ADD("Distance", "visuals>misc>various>out of fov>settings>distance", slider<float>, 1.f, 100.f, cfg.visuals.out_of_fov_dst, XOR(
				"%.0f%%")); ADD("Size", "visuals>misc>various>out of fov>settings>size", slider<float>, 1.f, 50.f, cfg. visuals.out_of_fov_size, XOR("%.0fpx")); }));
		//VIRTUALIZER_TIGER_WHITE_END;
	}

	void visuals_misc_beams(std::shared_ptr<layout> &e)
	{
		//VIRTUALIZER_TIGER_WHITE_START;
		ADD("Enabled", "visuals>misc>beams>enabled", checkbox, cfg.visuals.beams.enabled);
		ADD("Width", "visuals>misc>beams>width", slider<float>, 1.f, 20.f, cfg.visuals.beams.width, XOR("%.0f"));

		ADD_INLINE(
			"Team", MAKE("visuals>misc>beams>team", checkbox, cfg.visuals.beams.team_enabled),
			MAKE("visuals>misc>beams>team>color", color_picker, cfg.visuals.beams.team_color));
		ADD_INLINE(
			"Enemy", MAKE("visuals>misc>beams>enemy", checkbox, cfg.visuals.beams.enemy_enabled),
			MAKE("visuals>misc>beams>enemy>color", color_picker, cfg.visuals.beams.enemy_color));
		ADD_INLINE(
			"Local", MAKE("visuals>misc>beams>local", checkbox, cfg.visuals.beams.local_enabled),
			MAKE("visuals>misc>beams>local>color", color_picker, cfg.visuals.beams.local_color));
		//VIRTUALIZER_TIGER_WHITE_END;
	}
}
