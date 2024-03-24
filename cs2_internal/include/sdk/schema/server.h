// generated on: 11/6/2023

#ifndef SDK_SCHEMA_SERVER_H
#define SDK_SCHEMA_SERVER_H

#include <cstdint>

namespace sdk
{
	namespace schema
	{
		namespace server
		{
			enum class clogic_branch_list__logic_branch_listener_last_state_t : uint32_t
			{
				logic_branch_listener_not_init = 0x0,
				logic_branch_listener_all_true = 0x1,
				logic_branch_listener_all_false = 0x2,
				logic_branch_listener_mixed = 0x3,
			}; // enum class clogic_branch_list__logic_branch_listener_last_state_t : uint32_t

			enum class spawn_point_coop_enemy__bot_default_behavior_t : uint32_t
			{
				defend_area = 0x0,
				hunt = 0x1,
				charge_enemy = 0x2,
				defend_investigate = 0x3,
			}; // enum class spawn_point_coop_enemy__bot_default_behavior_t : uint32_t

			class centity_component;
			class centity_identity;
			class centity_instance;
			class cscript_component;
			class cbody_component;
			class cgame_scene_node;
			class cbody_component_point;
			class cbody_component_skeleton_instance;
			class cskeleton_instance;
			class chitbox_component;
			class clight_component;
			class crender_component;
			class cbuoyancy_helper;
			struct view_angle_server_change_t;
			class cplayer_autoaim_services;
			struct audioparams_t;
			class cplayer_camera_services;
			struct fogplayerparams_t;
			class cplayer_flashlight_services;
			class cplayer_item_services;
			class cplayer_movement_services;
			class cplayer_movement_services_humanoid;
			class cplayer_observer_services;
			class cplayer_use_services;
			class cplayer_water_services;
			class cplayer_weapon_services;
			class cbody_component_base_anim_graph;
			class cbase_anim_graph_controller;
			struct entity_render_attribute_t;
			struct active_model_config_t;
			class cbody_component_base_model_entity;
			class cgame_scene_node_handle;
			class cnetworked_sequence_operation;
			class cmodel_state;
			class interval_timer;
			class countdown_timer;
			class engine_countdown_timer;
			class ctimeline;
			class canim_graph_networked_variables;
			class cbase_flex;
			class cpulse_graph_instance_server_point_entity;
			class ctouch_expansion_component;
			class cbase_entity;
			class ccollision_property;
			class cserver_only_entity;
			class cserver_only_point_entity;
			class clogical_entity;
			class ccolor_correction;
			class centity_flame;
			class cbase_filter;
			class cfilter_multiple;
			class cfilter_proximity;
			class cfilter_los;
			class cfilter_class;
			class cbase_fire;
			class cfire_smoke;
			class cfish_pool;
			class cinfo_data;
			class clogic_branch;
			class clogic_distance_check;
			class cpoint_prefab;
			class cskybox_reference;
			class csky_camera;
			struct sky3dparams_t;
			class cenv_soundscape;
			class cenv_soundscape_proxy;
			class cenv_soundscape_triggerable;
			struct vphysics_collision_attribute_t;
			class ceffect_data;
			class cenv_detail_controller;
			class cenv_wind_shared;
			struct cenv_wind_shared__wind_ave_event_t;
			struct cenv_wind_shared__wind_variation_event_t;
			class cinfo_ladder_dismount;
			struct shard_model_desc_t;
			class cgame_rules_proxy;
			class cglow_property;
			struct fogparams_t;
			struct physics_ragdoll_pose_t;
			class csound_opvar_set_point_base;
			class csound_opvar_set_point_entity;
			class csound_opvar_set_aabbentity;
			class csound_opvar_set_obbentity;
			class csound_opvar_set_path_corner_entity;
			class csound_opvar_set_obbwind_entity;
			class cattribute_list;
			class cattribute_manager;
			class cecon_item_attribute;
			struct cattribute_manager_cached_attribute_float_t;
			class cattribute_container;
			class cecon_item_view;
			struct entity_spotted_state_t;
			class spawn_point;
			class spawn_point_coop_enemy;
			class ccsgame_rules_proxy;
			class ccsgame_rules;
			class ccsgame_mode_rules;
			class cretake_game_rules;
			class ccsgame_mode_rules_noop;
			class ccsgame_mode_script;
			class ccsgame_mode_rules_scripted;
			class ccsgame_mode_rules_deathmatch;
			struct csper_round_stats_t;
			struct csmatch_stats_t;
			class ccsgo_team_preview_character_position;
			class ccsgo_team_select_character_position;
			class ccsgo_team_select_terrorist_position;
			class ccsgo_team_select_counter_terrorist_position;
			class ccsgo_team_intro_character_position;
			class ccsgo_team_intro_terrorist_position;
			class ccsgo_team_intro_counter_terrorist_position;
			class ccsgo_wingman_intro_character_position;
			class ccsgo_wingman_intro_terrorist_position;
			class ccsgo_wingman_intro_counter_terrorist_position;
			class ccsminimap_boundary;
			class cplayer_ping;
			class ccsplayer_ping_services;
			class ccsplayer_resource;
			class cplayer_view_model_services;
			class ccsplayer_base_camera_services;
			struct weapon_purchase_count_t;
			struct weapon_purchase_tracker_t;
			class ccsplayer_action_tracking_services;
			class ccsplayer_bullet_services;
			struct sellback_purchase_entry_t;
			class ccsplayer_buy_services;
			class ccsplayer_camera_services;
			class ccsplayer_hostage_services;
			class ccsplayer_item_services;
			class ccsplayer_movement_services;
			class ccsplayer_use_services;
			class ccsplayer_view_model_services;
			class ccsplayer_water_services;
			class ccsplayer_weapon_services;
			class ccsobserver_observer_services;
			class ccsobserver_camera_services;
			class ccsobserver_movement_services;
			class ccsobserver_use_services;
			class ccsobserver_view_model_services;
			class ccsplayer_controller_action_tracking_services;
			class cdamage_record;
			class ccsplayer_controller_damage_services;
			class ccsplayer_controller_in_game_money_services;
			struct server_authoritative_weapon_slot_t;
			class ccsplayer_controller_inventory_services;
			class cbase_player_controller;
			class ccsplayer_damage_react_services;
			class ccsplayer_radio_services;
			class cvote_controller;
			class cmap_veto_pick_controller;
			class clogic_event_listener;
			class cbot;
			class ccsplayer_controller;
			class ccsplayer_pawn;
			class cbt_action_aim;
			class cbt_action_combat_positioning;
			class cbt_action_move_to;
			class cbt_action_parachute_positioning;
			class cbt_node_condition;
			class cbt_node_condition_inactive;
			class cpoint_entity;
			class cenv_combined_light_probe_volume;
			class cenv_cubemap;
			class cenv_cubemap_box;
			class cenv_cubemap_fog;
			class cgradient_fog;
			class cenv_light_probe_volume;
			class cplayer_visibility;
			class ctonemap_controller2;
			class cenv_volumetric_fog_controller;
			class cenv_volumetric_fog_volume;
			class cfog_controller;
			class cinfo_target;
			class cinfo_target_server_only;
			class cinfo_particle_target;
			class cinfo_visibility_box;
			class cinfo_world_layer;
			class cmulti_light_proxy;
			class cpoint_camera;
			class cpoint_camera_vfov;
			class cpoint_template;
			class cgame_gib_manager;
			class csound_area_entity_base;
			class csound_area_entity_sphere;
			class csound_area_entity_oriented_box;
			class cteam;
			class cbase_player_vdata;
			class cbase_player_weapon_vdata;
			class cinfo_game_event_proxy;
			class cprojected_decal;
			class cbase_model_entity;
			class cserver_only_model_entity;
			class cmodel_point_entity;
			class clogic_relay;
			class cparticle_system;
			class cpath_particle_rope;
			class cpath_particle_rope_alias_path_particle_rope_clientside;
			class cfunc_wall;
			class cfunc_wall_toggle;
			class cfunc_vehicle_clip;
			class cfunc_illusionary;
			class cfunc_vphysics_clip;
			class cfunc_interaction_layer_clip;
			class cpoint_client_command;
			class cpoint_server_command;
			class cpoint_broadcast_client_command;
			class ccommentary_auto;
			class cdynamic_light;
			class cbubbling;
			class cenv_tracer;
			class ctest_effect;
			class cblood;
			class cenv_funnel;
			class cenv_beverage;
			class cprecipitation_blocker;
			class cenv_wind;
			class cphysics_wire;
			class cenv_muzzle_flash;
			class cenv_splash;
			class cenv_view_punch;
			class cenv_entity_igniter;
			class cdebug_history;
			class cenv_entity_maker;
			class cinfo_instructor_hint_target;
			class cenv_instructor_hint;
			class cenv_instructor_vrhint;
			class cinstructor_event_entity;
			class cenv_screen_overlay;
			class cenv_fade;
			class ccredits;
			class cenv_shake;
			class cenv_tilt;
			class cenv_spark;
			class cshower;
			class cenv_explosion;
			class cfilter_name;
			class cfilter_model;
			class cfilter_context;
			class filter_team;
			class cfilter_mass_greater;
			class filter_damage_type;
			class filter_health;
			class cfilter_enemy;
			class cfilter_attribute_int;
			class cfire;
			class cenv_fire_source;
			class cenv_fire_sensor;
			class cfunc_timescale;
			class clight_glow;
			class clogic_achievement;
			class clogic_game_event_listener;
			class clogic_measure_movement;
			class clogic_navigation;
			class clogic_npccounter;
			class clogic_npccounter_aabb;
			class clogic_npccounter_obb;
			class clogic_player_proxy;
			class clogic_auto;
			class clogic_script;
			class ctimer_entity;
			class clogic_line_to_entity;
			class cmath_remap;
			class cmath_color_blend;
			class cenv_global;
			class cmulti_source;
			class cmath_counter;
			class clogic_case;
			class clogic_compare;
			class clogic_autosave;
			class clogic_active_autosave;
			class clogic_distance_autosave;
			class clogic_collision_pair;
			class clogic_branch_list;
			class clogic_game_event;
			class cmessage_entity;
			class ctrigger_brush;
			class cpath_key_frame;
			class cbase_move_behavior;
			class cpath_corner;
			class cphys_force;
			class cphys_thruster;
			class cphys_torque;
			class cphys_motor;
			class ckeep_upright;
			class cphys_constraint;
			class cphys_hinge;
			class cphys_hinge_alias_phys_hinge_local;
			class cphys_ball_socket;
			class cphys_slide_constraint;
			class cphys_fixed;
			class cphys_pulley;
			class cphys_length;
			class cragdoll_constraint;
			class cgeneric_constraint;
			class cspline_constraint;
			class cphys_wheel_constraint;
			class cphysics_entity_solver;
			class cphysics_spring;
			class cpoint_push;
			class cinfo_player_start;
			class cpoint_entity_finder;
			class cpoint_value_remapper;
			class cpoint_world_text;
			class cpoint_angle_sensor;
			class cpoint_proximity_sensor;
			class cpoint_angular_velocity_sensor;
			class cpoint_velocity_sensor;
			class cpoint_hurt;
			class cpoint_teleport;
			class cenable_motion_fixup;
			class cfunc_prop_respawn_zone;
			class cragdoll_manager;
			class crevert_saved;
			class cscene_list_manager;
			class cscene_entity;
			class cscripted_sequence;
			class csound_opvar_set_entity;
			class caisound;
			class csound_stack_save;
			class csound_event_entity;
			class csound_event_entity_alias_snd_event_point;
			class csound_event_aabbentity;
			class csound_event_obbentity;
			class csound_event_path_corner_entity;
			class csound_event_parameter;
			class cenv_soundscape_proxy_alias_snd_soundscape_proxy;
			class cenv_soundscape_alias_snd_soundscape;
			class cenv_soundscape_triggerable_alias_snd_soundscape_triggerable;
			class cnull_entity;
			class cbase_dmstart;
			class cinfo_landmark;
			class csun;
			class ctank_target_change;
			class ctank_train_ai;
			class chandle_test;
			class chandle_dummy;
			class cplat_trigger;
			class cfunc_train_controls;
			class ctrigger_volume;
			class cinfo_teleport_destination;
			class cai_change_target;
			class cai_change_hint_group;
			class clogic_proximity;
			class cinfo_spawn_group_landmark;
			class cinfo_spawn_group_load_unload;
			class cpoint_pulse;
			class cpoint_script;
			class cfunc_nav_obstruction;
			class cambient_generic;
			class cbase_toggle;
			class cbase_button;
			class cphysical_button;
			class crot_button;
			class cmomentary_rot_button;
			class cragdoll_magnet;
			class cbase_door;
			class centity_blocker;
			class centity_dissolve;
			class cenv_projected_texture;
			class cenv_decal;
			class cmessage;
			class cenv_microphone;
			class cbreakable;
			class cfunc_move_linear;
			class cfunc_rotating;
			class citem_generic_trigger_helper;
			class crule_entity;
			class crule_point_entity;
			class cgame_player_equip;
			class cmarkup_volume;
			class cmarkup_volume_tagged;
			class cmarkup_volume_with_ref;
			class cfunc_brush;
			class cpath_track;
			class cphys_box;
			class cphys_explosion;
			class cphys_impact;
			class crope_keyframe;
			class csound_ent;
			class cspotlight_end;
			class cfunc_track_train;
			class cbase_trigger;
			class ctrigger_multiple;
			class ctrigger_snd_sos_opvar;
			class ctrigger_hurt;
			class ctrigger_hurt_ghost;
			class ctrigger_callback;
			class ctrigger_lerp_object;
			class cchange_level;
			class ctrigger_teleport;
			class ctrigger_fan;
			class cnav_walkable;
			class cfunc_nav_blocker;
			class cnav_link_area_entity;
			class cnav_space_info;
			class cbeam;
			class cfunc_ladder;
			class cfunc_shatterglass;
			class cprecipitation_vdata;
			class csprite;
			class csprite_oriented;
			class cbase_client_uientity;
			class cpoint_client_uidialog;
			class cpoint_client_uiworld_panel;
			class cpoint_client_uiworld_text_panel;
			class cinfo_offscreen_panorama_texture;
			class cinfo_player_terrorist;
			class cinfo_player_counterterrorist;
			class cinfo_deathmatch_spawn;
			class cinfo_enemy_terrorist_spawn;
			class cpoint_give_ammo;
			class cbomb_target;
			class cinfo_instructor_hint_bomb_target_a;
			class cinfo_instructor_hint_bomb_target_b;
			class chostage_rescue_zone_shim;
			class chostage_rescue_zone;
			class cinfo_instructor_hint_hostage_rescue_zone;
			class ctrigger_buoyancy;
			class cfunc_water;
			class ccssprite;
			class cfootstep_control;
			class ccsweapon_base_vdata;
			class ctrigger_trip_wire;
			class cpoint_gamestats_counter;
			class cenv_hud_hint;
			class cbuy_zone;
			class cfunc_conveyor;
			class ctrigger_bomb_reset;
			class ctrigger_hostage_reset;
			class ccsplace;
			class cgame_money;
			class cplayer_spray_decal;
			class cinferno;
			class cfire_cracker_blast;
			class cbarn_light;
			class crect_light;
			class comni_light;
			class ccsteam;
			class cmap_info;
			class ccsbot;
			class cfog_volume;
			class cinfo_dynamic_shadow_hint;
			class cinfo_dynamic_shadow_hint_box;
			class cenv_sky;
			class ctonemap_controller2_alias_env_tonemap_controller2;
			class ctonemap_trigger;
			class cfog_trigger;
			class clight_entity;
			class clight_spot_entity;
			class clight_ortho_entity;
			class clight_directional_entity;
			class clight_environment_entity;
			class cpost_processing_volume;
			class cenv_particle_glow;
			class ctexture_based_animatable;
			class cworld;
			class cbase_anim_graph;
			class cbase_prop;
			class cbreakable_prop;
			class cdynamic_prop;
			class cdynamic_prop_alias_dynamic_prop;
			class cdynamic_prop_alias_prop_dynamic_override;
			class cdynamic_prop_alias_cable_dynamic;
			class ccolor_correction_volume;
			class cpoint_commentary_node;
			class ccommentary_view_position;
			class crot_door;
			class citem_soda;
			class cprecipitation;
			class cenv_beam;
			class cpushable;
			class cfunc_ladder_alias_func_useableladder;
			class cfunc_monitor;
			class cfunc_move_linear_alias_momentary_door;
			class cgun_target;
			class ctrigger_game_event;
			class crule_brush_entity;
			class cgame_end;
			class cgame_text;
			class cgame_player_zone;
			class csimple_markup_volume_tagged;
			class cmarkup_volume_tagged_nav;
			class cmarkup_volume_tagged_nav_game;
			class cfunc_electrified_volume;
			class cpath_corner_crash;
			class cconstraint_anchor;
			class cornament_prop;
			class crope_keyframe_alias_move_rope;
			class cscene_entity_alias_logic_choreographed_scene;
			class cinstanced_scene_entity;
			class ctrigger_soundscape;
			class csprite_alias_env_glow;
			class cfunc_tank_train;
			class cbase_plat_train;
			class cfunc_plat;
			class cfunc_plat_rot;
			class cfunc_train;
			class cfunc_track_change;
			class cfunc_track_auto;
			class ctrigger_remove;
			class cscript_trigger_hurt;
			class cscript_trigger_multiple;
			class ctrigger_once;
			class cscript_trigger_once;
			class ctrigger_look;
			class ctrigger_push;
			class cscript_trigger_push;
			class ctrigger_toggle_save;
			class ctrigger_save;
			class ctrigger_gravity;
			class ctrigger_proximity;
			class ctrigger_impact;
			class cserver_ragdoll_trigger;
			class ctrigger_active_weapon_detect;
			class ctrigger_physics;
			class ctrigger_detect_bullet_fire;
			class ctrigger_detect_explosion;
			class cscript_nav_blocker;
			class cbase_prop_door;
			class cenv_laser;
			class cfish;
			class citem;
			class cragdoll_prop;
			class cphys_magnet;
			class cphysics_prop;
			class cphysics_prop_override;
			class cphysics_prop_respawnable;
			class cwater_bullet;
			class cshatter_glass_shard_physics;
			class cecon_entity;
			class cecon_wearable;
			class cbase_grenade;
			class ccoop_bonus_coin;
			class cphysics_prop_multiplayer;
			class cbase_view_model;
			class cpredicted_view_model;
			class cplanted_c4;
			class cbase_csgrenade_projectile;
			class citem_dogtags;
			class csensor_grenade_projectile;
			class cbreach_charge_projectile;
			class cbump_mine_projectile;
			class ctrip_wire_fire_projectile;
			class cflashbang_projectile;
			class chegrenade_projectile;
			class cchicken;
			class chostage_carriable_prop;
			class citem_assault_suit;
			class citem_heavy_assault_suit;
			class citem_kevlar;
			class citem_defuser;
			class cbase_player_weapon;
			class cbase_flex_alias_fun_cbase_flex;
			class cscript_item;
			class cragdoll_prop_alias_physics_prop_ragdoll;
			class cragdoll_prop_attached;
			class cprop_door_rotating;
			class cprop_door_rotating_breakable;
			class cbase_combat_character;
			class citem_generic;
			class cbase_player_pawn;
			class ccsgoview_model;
			class ccsweapon_base;
			class ccsweapon_base_gun;
			class cc4;
			class cdeagle;
			class cweapon_elite;
			class cweapon_nova;
			class cweapon_sawedoff;
			class cweapon_taser;
			class cweapon_xm1014;
			class cknife;
			class cmelee;
			class cweapon_shield;
			class cmolotov_projectile;
			class cdecoy_projectile;
			class csmoke_grenade_projectile;
			class cbase_csgrenade;
			class cweapon_base_item;
			class citem_healthshot;
			class cfists;
			class csensor_grenade;
			class cbreach_charge;
			class cbump_mine;
			class ctablet;
			class ctrip_wire_fire;
			class cweapon_zone_repulsor;
			class ccsplayer_pawn_base;
			class ccsobserver_pawn;
			class chostage_expresser_shim;
			class chostage;
			class chostage_alias_info_hostage_spawn;
			class citem_defuser_alias_item_defuser;
			class cak47;
			class cweapon_aug;
			class cweapon_awp;
			class cweapon_bizon;
			class cweapon_famas;
			class cweapon_five_seven;
			class cweapon_g3_sg1;
			class cweapon_galil_ar;
			class cweapon_glock;
			class cweapon_hkp2000;
			class cweapon_uspsilencer;
			class cweapon_m4_a1;
			class cweapon_m4_a1_silencer;
			class cweapon_mac10;
			class cweapon_mag7;
			class cweapon_mp5_sd;
			class cweapon_mp7;
			class cweapon_mp9;
			class cweapon_negev;
			class cweapon_p250;
			class cweapon_cz75a;
			class cweapon_p90;
			class cweapon_scar20;
			class cweapon_sg556;
			class cweapon_ssg08;
			class cweapon_tec9;
			class cweapon_ump45;
			class cweapon_m249;
			class cweapon_revolver;
			class cmolotov_grenade;
			class cincendiary_grenade;
			class cdecoy_grenade;
			class cflashbang;
			class chegrenade;
			class csmoke_grenade;
			
			class centity_component
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class centity_component

			class centity_identity
			{
			public:
				MEMBER(name_stringable_index, server::centity_identity, int);
				MEMBER(name, server::centity_identity, cutl_symbol_large);
				MEMBER(designer_name, server::centity_identity, cutl_symbol_large);
				MEMBER(flags, server::centity_identity, uint32_t);
				MEMBER(world_group_id, server::centity_identity, world_group_id_t);
				MEMBER(data_object_types, server::centity_identity, uint32_t);
				MEMBER(path_index, server::centity_identity, change_accessor_field_path_index_t);
				MEMBER(prev_ptr, server::centity_identity, centity_identity*);
				MEMBER(next_ptr, server::centity_identity, centity_identity*);
				MEMBER(prev_by_class_ptr, server::centity_identity, centity_identity*);
				MEMBER(next_by_class_ptr, server::centity_identity, centity_identity*);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class centity_identity

			class centity_instance
			{
			public:
				MEMBER(isz_private_vscripts, server::centity_instance, cutl_symbol_large);
				MEMBER(entity_ptr, server::centity_instance, centity_identity*);
				MEMBER(cscript_component_ptr, server::centity_instance, cscript_component*);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class centity_instance

			class cscript_component : public centity_component
			{
			public:
				MEMBER(script_class_name, server::cscript_component, cutl_symbol_large);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cscript_component : public centity_component

			class cbody_component : public centity_component
			{
			public:
				MEMBER(scene_node_ptr, server::cbody_component, cgame_scene_node*);
				MEMBER(_m_p_chain_entity, server::cbody_component, cnetwork_var_chainer);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbody_component : public centity_component

			class cgame_scene_node_handle
			{
			public:
				MEMBER(h_owner, server::cgame_scene_node_handle, centity_handle);
				MEMBER(name, server::cgame_scene_node_handle, cutl_string_token);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cgame_scene_node_handle

			class chitbox_component : public centity_component
			{
			public:
				MEMBER_ARR(bv_disabled_hit_groups_arr, server::chitbox_component, 1, uint32_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class chitbox_component : public centity_component

			class crender_component : public centity_component
			{
			public:
				MEMBER(_m_p_chain_entity, server::crender_component, cnetwork_var_chainer);
				MEMBER(is_rendering_with_view_models, server::crender_component, bool);
				MEMBER(splitscreen_flags, server::crender_component, uint32_t);
				MEMBER(enable_rendering, server::crender_component, bool);
				MEMBER(interpolation_ready_to_draw, server::crender_component, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class crender_component : public centity_component

			class cbuoyancy_helper
			{
			public:
				MEMBER(fluid_density, server::cbuoyancy_helper, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbuoyancy_helper

			struct view_angle_server_change_t
			{
				MEMBER(n_type, server::view_angle_server_change_t, fix_angle_set_t);
				MEMBER(q_angle, server::view_angle_server_change_t, qangle);
				MEMBER(n_index, server::view_angle_server_change_t, uint32_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // struct view_angle_server_change_t

			class cplayer_autoaim_services : public cplayer_pawn_component
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cplayer_autoaim_services : public cplayer_pawn_component

			struct audioparams_t
			{
				MEMBER_ARR(local_sound_arr, server::audioparams_t, 8, vector);
				MEMBER(soundscape_index, server::audioparams_t, int);
				MEMBER(local_bits, server::audioparams_t, uint8_t);
				MEMBER(soundscape_entity_list_index, server::audioparams_t, int);
				MEMBER(sound_event_hash, server::audioparams_t, uint32_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // struct audioparams_t

			class cplayer_flashlight_services : public cplayer_pawn_component
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cplayer_flashlight_services : public cplayer_pawn_component

			class cplayer_item_services : public cplayer_pawn_component
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cplayer_item_services : public cplayer_pawn_component

			class cplayer_movement_services : public cplayer_pawn_component
			{
			public:
				MEMBER(impulse, server::cplayer_movement_services, int);
				MEMBER(buttons, server::cplayer_movement_services, cin_button_state);
				MEMBER(queued_button_down_mask, server::cplayer_movement_services, uint64_t);
				MEMBER(queued_button_change_mask, server::cplayer_movement_services, uint64_t);
				MEMBER(button_double_pressed, server::cplayer_movement_services, uint64_t);
				MEMBER_ARR(button_pressed_cmd_number_arr, server::cplayer_movement_services, 64, uint32_t);
				MEMBER(last_command_number_processed, server::cplayer_movement_services, uint32_t);
				MEMBER(toggle_button_down_mask, server::cplayer_movement_services, uint64_t);
				MEMBER(maxspeed, server::cplayer_movement_services, float);
				MEMBER_ARR(arr_force_subtick_move_when_arr, server::cplayer_movement_services, 4, float);
				MEMBER(forward_move, server::cplayer_movement_services, float);
				MEMBER(left_move, server::cplayer_movement_services, float);
				MEMBER(up_move, server::cplayer_movement_services, float);
				MEMBER(vec_last_movement_impulses, server::cplayer_movement_services, vector);
				MEMBER(vec_old_view_angles, server::cplayer_movement_services, qangle);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cplayer_movement_services : public cplayer_pawn_component

			class cplayer_observer_services : public cplayer_pawn_component
			{
			public:
				MEMBER(observer_mode, server::cplayer_observer_services, uint8_t);
				MEMBER(h_observer_target, server::cplayer_observer_services, chandle<cbase_entity>);
				MEMBER(observer_last_mode, server::cplayer_observer_services, observer_mode_t);
				MEMBER(forced_observer_mode, server::cplayer_observer_services, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cplayer_observer_services : public cplayer_pawn_component

			class cplayer_use_services : public cplayer_pawn_component
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cplayer_use_services : public cplayer_pawn_component

			class cplayer_water_services : public cplayer_pawn_component
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cplayer_water_services : public cplayer_pawn_component

			class cplayer_weapon_services : public cplayer_pawn_component
			{
			public:
				MEMBER(allow_switch_to_no_weapon, server::cplayer_weapon_services, bool);
				MEMBER(h_my_weapons, server::cplayer_weapon_services, cnetwork_utl_vector_base<chandle<cbase_player_weapon>>);
				MEMBER(h_active_weapon, server::cplayer_weapon_services, chandle<cbase_player_weapon>);
				MEMBER(h_last_weapon, server::cplayer_weapon_services, chandle<cbase_player_weapon>);
				MEMBER_ARR(ammo_arr, server::cplayer_weapon_services, 32, uint16_t);
				MEMBER(prevent_weapon_pickup, server::cplayer_weapon_services, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cplayer_weapon_services : public cplayer_pawn_component

			class cgame_scene_node
			{
			public:
				MEMBER(node_to_world, server::cgame_scene_node, ctransform);
				MEMBER(owner_ptr, server::cgame_scene_node, centity_instance*);
				MEMBER(parent_ptr, server::cgame_scene_node, cgame_scene_node*);
				MEMBER(child_ptr, server::cgame_scene_node, cgame_scene_node*);
				MEMBER(next_sibling_ptr, server::cgame_scene_node, cgame_scene_node*);
				MEMBER(h_parent, server::cgame_scene_node, cgame_scene_node_handle);
				MEMBER(vec_origin, server::cgame_scene_node, cnetwork_origin_cell_coord_quantized_vector);
				MEMBER(ang_rotation, server::cgame_scene_node, qangle);
				MEMBER(scale, server::cgame_scene_node, float);
				MEMBER(vec_abs_origin, server::cgame_scene_node, vector);
				MEMBER(ang_abs_rotation, server::cgame_scene_node, qangle);
				MEMBER(abs_scale, server::cgame_scene_node, float);
				MEMBER(parent_attachment_or_bone, server::cgame_scene_node, short);
				MEMBER(debug_abs_origin_changes, server::cgame_scene_node, bool);
				MEMBER(dormant, server::cgame_scene_node, bool);
				MEMBER(force_parent_to_be_networked, server::cgame_scene_node, bool);
				MEMBER(dirty_hierarchy, server::cgame_scene_node, bool);
				MEMBER(dirty_bone_merge_info, server::cgame_scene_node, bool);
				MEMBER(networked_position_changed, server::cgame_scene_node, bool);
				MEMBER(networked_angles_changed, server::cgame_scene_node, bool);
				MEMBER(networked_scale_changed, server::cgame_scene_node, bool);
				MEMBER(will_be_calling_post_data_update, server::cgame_scene_node, bool);
				MEMBER(notify_bone_transforms_changed, server::cgame_scene_node, bool);
				MEMBER(bone_merge_flex, server::cgame_scene_node, bool);
				MEMBER(latch_abs_origin, server::cgame_scene_node, uint8_t);
				MEMBER(dirty_bone_merge_bone_to_root, server::cgame_scene_node, bool);
				MEMBER(hierarchical_depth, server::cgame_scene_node, uint8_t);
				MEMBER(hierarchy_type, server::cgame_scene_node, uint8_t);
				MEMBER(do_not_set_anim_time_in_invalidate_physics_count, server::cgame_scene_node, uint8_t);
				MEMBER(name, server::cgame_scene_node, cutl_string_token);
				MEMBER(hierarchy_attach_name, server::cgame_scene_node, cutl_string_token);
				MEMBER(zoffset, server::cgame_scene_node, float);
				MEMBER(v_render_origin, server::cgame_scene_node, vector);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cgame_scene_node

			struct entity_render_attribute_t
			{
				MEMBER(id, server::entity_render_attribute_t, cutl_string_token);
				MEMBER(values, server::entity_render_attribute_t, vector4d);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // struct entity_render_attribute_t

			struct active_model_config_t
			{
				MEMBER(handle, server::active_model_config_t, model_config_handle_t);
				MEMBER(name, server::active_model_config_t, cutl_symbol_large);
				MEMBER(associated_entities, server::active_model_config_t, cnetwork_utl_vector_base<chandle<cbase_model_entity>>);
				MEMBER(associated_entity_names, server::active_model_config_t, cnetwork_utl_vector_base<cutl_symbol_large>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // struct active_model_config_t

			class cmodel_state
			{
			public:
				MEMBER(h_model, server::cmodel_state, cstrong_handle<info_for_resource_type_cmodel>);
				MEMBER(model_name, server::cmodel_state, cutl_symbol_large);
				MEMBER(client_cloth_creation_suppressed, server::cmodel_state, bool);
				MEMBER(mesh_group_mask, server::cmodel_state, uint64_t);
				MEMBER(ideal_motion_type, server::cmodel_state, char);
				MEMBER(force_lod, server::cmodel_state, char);
				MEMBER(cloth_update_flags, server::cmodel_state, char);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cmodel_state

			class cskeleton_instance : public cgame_scene_node
			{
			public:
				MEMBER(model_state, server::cskeleton_instance, cmodel_state);
				MEMBER(is_animation_enabled, server::cskeleton_instance, bool);
				MEMBER(use_parent_render_bounds, server::cskeleton_instance, bool);
				MEMBER(disable_solid_collisions_for_hierarchy, server::cskeleton_instance, bool);
				MEMBER(dirty_motion_type, server::cskeleton_instance, bool);
				MEMBER(is_generating_latched_parent_space_state, server::cskeleton_instance, bool);
				MEMBER(material_group, server::cskeleton_instance, cutl_string_token);
				MEMBER(hitbox_set, server::cskeleton_instance, uint8_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cskeleton_instance : public cgame_scene_node

			class clight_component : public centity_component
			{
			public:
				MEMBER(_m_p_chain_entity, server::clight_component, cnetwork_var_chainer);
				MEMBER(color, server::clight_component, color);
				MEMBER(secondary_color, server::clight_component, color);
				MEMBER(brightness, server::clight_component, float);
				MEMBER(brightness_scale, server::clight_component, float);
				MEMBER(brightness_mult, server::clight_component, float);
				MEMBER(range, server::clight_component, float);
				MEMBER(falloff, server::clight_component, float);
				MEMBER(attenuation0, server::clight_component, float);
				MEMBER(attenuation1, server::clight_component, float);
				MEMBER(attenuation2, server::clight_component, float);
				MEMBER(theta, server::clight_component, float);
				MEMBER(phi, server::clight_component, float);
				MEMBER(h_light_cookie, server::clight_component, cstrong_handle<info_for_resource_type_ctexture_base>);
				MEMBER(cascades, server::clight_component, int);
				MEMBER(cast_shadows, server::clight_component, int);
				MEMBER(shadow_width, server::clight_component, int);
				MEMBER(shadow_height, server::clight_component, int);
				MEMBER(render_diffuse, server::clight_component, bool);
				MEMBER(render_specular, server::clight_component, int);
				MEMBER(render_transmissive, server::clight_component, bool);
				MEMBER(ortho_light_width, server::clight_component, float);
				MEMBER(ortho_light_height, server::clight_component, float);
				MEMBER(style, server::clight_component, int);
				MEMBER(pattern, server::clight_component, cutl_string);
				MEMBER(cascade_render_static_objects, server::clight_component, int);
				MEMBER(shadow_cascade_cross_fade, server::clight_component, float);
				MEMBER(shadow_cascade_distance_fade, server::clight_component, float);
				MEMBER(shadow_cascade_distance0, server::clight_component, float);
				MEMBER(shadow_cascade_distance1, server::clight_component, float);
				MEMBER(shadow_cascade_distance2, server::clight_component, float);
				MEMBER(shadow_cascade_distance3, server::clight_component, float);
				MEMBER(shadow_cascade_resolution0, server::clight_component, int);
				MEMBER(shadow_cascade_resolution1, server::clight_component, int);
				MEMBER(shadow_cascade_resolution2, server::clight_component, int);
				MEMBER(shadow_cascade_resolution3, server::clight_component, int);
				MEMBER(uses_baked_shadowing, server::clight_component, bool);
				MEMBER(shadow_priority, server::clight_component, int);
				MEMBER(baked_shadow_index, server::clight_component, int);
				MEMBER(render_to_cubemaps, server::clight_component, bool);
				MEMBER(direct_light, server::clight_component, int);
				MEMBER(indirect_light, server::clight_component, int);
				MEMBER(fade_min_dist, server::clight_component, float);
				MEMBER(fade_max_dist, server::clight_component, float);
				MEMBER(shadow_fade_min_dist, server::clight_component, float);
				MEMBER(shadow_fade_max_dist, server::clight_component, float);
				MEMBER(enabled, server::clight_component, bool);
				MEMBER(flicker, server::clight_component, bool);
				MEMBER(precomputed_fields_valid, server::clight_component, bool);
				MEMBER(v_precomputed_bounds_mins, server::clight_component, vector);
				MEMBER(v_precomputed_bounds_maxs, server::clight_component, vector);
				MEMBER(v_precomputed_obborigin, server::clight_component, vector);
				MEMBER(v_precomputed_obbangles, server::clight_component, qangle);
				MEMBER(v_precomputed_obbextent, server::clight_component, vector);
				MEMBER(precomputed_max_range, server::clight_component, float);
				MEMBER(fog_lighting_mode, server::clight_component, int);
				MEMBER(fog_contribution_stength, server::clight_component, float);
				MEMBER(near_clip_plane, server::clight_component, float);
				MEMBER(sky_color, server::clight_component, color);
				MEMBER(sky_intensity, server::clight_component, float);
				MEMBER(sky_ambient_bounce, server::clight_component, color);
				MEMBER(use_secondary_color, server::clight_component, bool);
				MEMBER(mixed_shadows, server::clight_component, bool);
				MEMBER(light_style_start_time, server::clight_component, game_time_t);
				MEMBER(capsule_length, server::clight_component, float);
				MEMBER(min_roughness, server::clight_component, float);
				MEMBER(pvs_modify_entity, server::clight_component, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class clight_component : public centity_component

			struct fogplayerparams_t
			{
				MEMBER(h_ctrl, server::fogplayerparams_t, chandle<cfog_controller>);
				MEMBER(transition_time, server::fogplayerparams_t, float);
				MEMBER(old_color, server::fogplayerparams_t, color);
				MEMBER(old_start, server::fogplayerparams_t, float);
				MEMBER(old_end, server::fogplayerparams_t, float);
				MEMBER(old_max_density, server::fogplayerparams_t, float);
				MEMBER(old_hdrcolor_scale, server::fogplayerparams_t, float);
				MEMBER(old_far_z, server::fogplayerparams_t, float);
				MEMBER(new_color, server::fogplayerparams_t, color);
				MEMBER(new_start, server::fogplayerparams_t, float);
				MEMBER(new_end, server::fogplayerparams_t, float);
				MEMBER(new_max_density, server::fogplayerparams_t, float);
				MEMBER(new_hdrcolor_scale, server::fogplayerparams_t, float);
				MEMBER(new_far_z, server::fogplayerparams_t, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // struct fogplayerparams_t

			class cbody_component_skeleton_instance : public cbody_component
			{
			public:
				MEMBER(skeleton_instance, server::cbody_component_skeleton_instance, cskeleton_instance);
				MEMBER(_m_p_chain_entity, server::cbody_component_skeleton_instance, cnetwork_var_chainer);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbody_component_skeleton_instance : public cbody_component

			class cbody_component_point : public cbody_component
			{
			public:
				MEMBER(scene_node, server::cbody_component_point, cgame_scene_node);
				MEMBER(_m_p_chain_entity, server::cbody_component_point, cnetwork_var_chainer);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbody_component_point : public cbody_component

			class cplayer_movement_services_humanoid : public cplayer_movement_services
			{
			public:
				MEMBER(step_sound_time, server::cplayer_movement_services_humanoid, float);
				MEMBER(fall_velocity, server::cplayer_movement_services_humanoid, float);
				MEMBER(in_crouch, server::cplayer_movement_services_humanoid, bool);
				MEMBER(crouch_state, server::cplayer_movement_services_humanoid, uint32_t);
				MEMBER(crouch_transition_start_time, server::cplayer_movement_services_humanoid, game_time_t);
				MEMBER(ducked, server::cplayer_movement_services_humanoid, bool);
				MEMBER(ducking, server::cplayer_movement_services_humanoid, bool);
				MEMBER(in_duck_jump, server::cplayer_movement_services_humanoid, bool);
				MEMBER(ground_normal, server::cplayer_movement_services_humanoid, vector);
				MEMBER(surface_friction, server::cplayer_movement_services_humanoid, float);
				MEMBER(surface_props, server::cplayer_movement_services_humanoid, cutl_string_token);
				MEMBER(stepside, server::cplayer_movement_services_humanoid, int);
				MEMBER(target_volume, server::cplayer_movement_services_humanoid, int);
				MEMBER(vec_smoothed_velocity, server::cplayer_movement_services_humanoid, vector);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cplayer_movement_services_humanoid : public cplayer_movement_services

			class cnetworked_sequence_operation
			{
			public:
				MEMBER(h_sequence, server::cnetworked_sequence_operation, hsequence);
				MEMBER(prev_cycle, server::cnetworked_sequence_operation, float);
				MEMBER(cycle, server::cnetworked_sequence_operation, float);
				MEMBER(weight, server::cnetworked_sequence_operation, cnetworked_quantized_float);
				MEMBER(sequence_change_networked, server::cnetworked_sequence_operation, bool);
				MEMBER(discontinuity, server::cnetworked_sequence_operation, bool);
				MEMBER(prev_cycle_from_discontinuity, server::cnetworked_sequence_operation, float);
				MEMBER(prev_cycle_for_anim_event_detection, server::cnetworked_sequence_operation, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cnetworked_sequence_operation

			class cbody_component_base_model_entity : public cbody_component_skeleton_instance
			{
			public:
				MEMBER(_m_p_chain_entity, server::cbody_component_base_model_entity, cnetwork_var_chainer);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbody_component_base_model_entity : public cbody_component_skeleton_instance

			class canim_graph_networked_variables
			{
			public:
				MEMBER(pred_net_bool_variables, server::canim_graph_networked_variables, cnetwork_utl_vector_base<uint32_t>);
				MEMBER(pred_net_byte_variables, server::canim_graph_networked_variables, cnetwork_utl_vector_base<uint8_t>);
				MEMBER(pred_net_uint16_variables, server::canim_graph_networked_variables, cnetwork_utl_vector_base<uint16_t>);
				MEMBER(pred_net_int_variables, server::canim_graph_networked_variables, cnetwork_utl_vector_base<int>);
				MEMBER(pred_net_uint32_variables, server::canim_graph_networked_variables, cnetwork_utl_vector_base<uint32_t>);
				MEMBER(pred_net_uint64_variables, server::canim_graph_networked_variables, cnetwork_utl_vector_base<uint64_t>);
				MEMBER(pred_net_float_variables, server::canim_graph_networked_variables, cnetwork_utl_vector_base<float>);
				MEMBER(pred_net_vector_variables, server::canim_graph_networked_variables, cnetwork_utl_vector_base<vector>);
				MEMBER(pred_net_quaternion_variables, server::canim_graph_networked_variables, cnetwork_utl_vector_base<quaternion>);
				MEMBER(owner_only_pred_net_bool_variables, server::canim_graph_networked_variables, cnetwork_utl_vector_base<uint32_t>);
				MEMBER(owner_only_pred_net_byte_variables, server::canim_graph_networked_variables, cnetwork_utl_vector_base<uint8_t>);
				MEMBER(owner_only_pred_net_uint16_variables, server::canim_graph_networked_variables, cnetwork_utl_vector_base<uint16_t>);
				MEMBER(owner_only_pred_net_int_variables, server::canim_graph_networked_variables, cnetwork_utl_vector_base<int>);
				MEMBER(owner_only_pred_net_uint32_variables, server::canim_graph_networked_variables, cnetwork_utl_vector_base<uint32_t>);
				MEMBER(owner_only_pred_net_uint64_variables, server::canim_graph_networked_variables, cnetwork_utl_vector_base<uint64_t>);
				MEMBER(owner_only_pred_net_float_variables, server::canim_graph_networked_variables, cnetwork_utl_vector_base<float>);
				MEMBER(owner_only_pred_net_vector_variables, server::canim_graph_networked_variables, cnetwork_utl_vector_base<vector>);
				MEMBER(owner_only_pred_net_quaternion_variables, server::canim_graph_networked_variables, cnetwork_utl_vector_base<quaternion>);
				MEMBER(bool_variables_count, server::canim_graph_networked_variables, int);
				MEMBER(owner_only_bool_variables_count, server::canim_graph_networked_variables, int);
				MEMBER(random_seed_offset, server::canim_graph_networked_variables, int);
				MEMBER(last_teleport_time, server::canim_graph_networked_variables, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class canim_graph_networked_variables

			class interval_timer
			{
			public:
				MEMBER(timestamp, server::interval_timer, game_time_t);
				MEMBER(world_group_id, server::interval_timer, world_group_id_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class interval_timer

			class countdown_timer
			{
			public:
				MEMBER(duration, server::countdown_timer, float);
				MEMBER(timestamp, server::countdown_timer, game_time_t);
				MEMBER(timescale, server::countdown_timer, float);
				MEMBER(world_group_id, server::countdown_timer, world_group_id_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class countdown_timer

			class engine_countdown_timer
			{
			public:
				MEMBER(duration, server::engine_countdown_timer, float);
				MEMBER(timestamp, server::engine_countdown_timer, float);
				MEMBER(timescale, server::engine_countdown_timer, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class engine_countdown_timer

			class ctimeline : public interval_timer
			{
			public:
				MEMBER_ARR(values_arr, server::ctimeline, 64, float);
				MEMBER_ARR(value_counts_arr, server::ctimeline, 64, int);
				MEMBER(bucket_count, server::ctimeline, int);
				MEMBER(interval, server::ctimeline, float);
				MEMBER(final_value, server::ctimeline, float);
				MEMBER(compression_type, server::ctimeline, timeline_compression_t);
				MEMBER(stopped, server::ctimeline, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ctimeline : public interval_timer

			class cbase_anim_graph_controller : public cskeleton_animation_controller
			{
			public:
				MEMBER(base_layer, server::cbase_anim_graph_controller, cnetworked_sequence_operation);
				MEMBER(anim_graph_networked_vars, server::cbase_anim_graph_controller, canim_graph_networked_variables);
				MEMBER(sequence_finished, server::cbase_anim_graph_controller, bool);
				MEMBER(last_event_cycle, server::cbase_anim_graph_controller, float);
				MEMBER(last_event_anim_time, server::cbase_anim_graph_controller, float);
				MEMBER(playback_rate, server::cbase_anim_graph_controller, cnetworked_quantized_float);
				MEMBER(prev_anim_time, server::cbase_anim_graph_controller, float);
				MEMBER(client_side_animation, server::cbase_anim_graph_controller, bool);
				MEMBER(networked_animation_inputs_changed, server::cbase_anim_graph_controller, bool);
				MEMBER(new_sequence_parity, server::cbase_anim_graph_controller, int);
				MEMBER(reset_events_parity, server::cbase_anim_graph_controller, int);
				MEMBER(anim_loop_mode, server::cbase_anim_graph_controller, anim_loop_mode_t);
				MEMBER(h_animation_update, server::cbase_anim_graph_controller, animation_update_list_handle_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbase_anim_graph_controller : public cskeleton_animation_controller

			class cpulse_graph_instance_server_point_entity : public cbase_pulse_graph_instance
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cpulse_graph_instance_server_point_entity : public cbase_pulse_graph_instance

			class ctouch_expansion_component : public centity_component
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ctouch_expansion_component : public centity_component

			class cbase_entity : public centity_instance
			{
			public:
				MEMBER(cbody_component_ptr, server::cbase_entity, cbody_component*);
				MEMBER(network_transmit_component, server::cbase_entity, cnetwork_transmit_component);
				MEMBER(a_think_functions, server::cbase_entity, cutl_vector<thinkfunc_t>);
				MEMBER(current_think_context, server::cbase_entity, int);
				MEMBER(last_think_tick, server::cbase_entity, game_tick_t);
				MEMBER(is_steady_state, server::cbase_entity, cbit_vec<64>);
				MEMBER(last_network_change, server::cbase_entity, float);
				MEMBER(response_contexts, server::cbase_entity, cutl_vector<response_context_t>);
				MEMBER(isz_response_context, server::cbase_entity, cutl_symbol_large);
				MEMBER(health, server::cbase_entity, int);
				MEMBER(max_health, server::cbase_entity, int);
				MEMBER(life_state, server::cbase_entity, uint8_t);
				MEMBER(damage_accumulator, server::cbase_entity, float);
				MEMBER(takes_damage, server::cbase_entity, bool);
				MEMBER(take_damage_flags, server::cbase_entity, take_damage_flags_t);
				MEMBER(move_collide, server::cbase_entity, move_collide_t);
				MEMBER(move_type, server::cbase_entity, move_type_t);
				MEMBER(water_touch, server::cbase_entity, uint8_t);
				MEMBER(slime_touch, server::cbase_entity, uint8_t);
				MEMBER(restore_in_hierarchy, server::cbase_entity, bool);
				MEMBER(target, server::cbase_entity, cutl_symbol_large);
				MEMBER(move_done_time, server::cbase_entity, float);
				MEMBER(h_damage_filter, server::cbase_entity, chandle<cbase_filter>);
				MEMBER(isz_damage_filter_name, server::cbase_entity, cutl_symbol_large);
				MEMBER(subclass_id, server::cbase_entity, cutl_string_token);
				MEMBER(anim_time, server::cbase_entity, float);
				MEMBER(simulation_time, server::cbase_entity, float);
				MEMBER(create_time, server::cbase_entity, game_time_t);
				MEMBER(client_side_ragdoll, server::cbase_entity, bool);
				MEMBER(ub_interpolation_frame, server::cbase_entity, uint8_t);
				MEMBER(v_prev_vphysics_update_pos, server::cbase_entity, vector);
				MEMBER(team_num, server::cbase_entity, uint8_t);
				MEMBER(globalname, server::cbase_entity, cutl_symbol_large);
				MEMBER(sent_to_clients, server::cbase_entity, int);
				MEMBER(speed, server::cbase_entity, float);
				MEMBER(s_unique_hammer_id, server::cbase_entity, cutl_string);
				MEMBER(spawnflags, server::cbase_entity, uint32_t);
				MEMBER(next_think_tick, server::cbase_entity, game_tick_t);
				MEMBER(simulation_tick, server::cbase_entity, int);
				MEMBER(on_killed, server::cbase_entity, centity_iooutput);
				MEMBER(flags, server::cbase_entity, uint32_t);
				MEMBER(vec_abs_velocity, server::cbase_entity, vector);
				MEMBER(vec_velocity, server::cbase_entity, cnetwork_velocity_vector);
				MEMBER(vec_base_velocity, server::cbase_entity, vector);
				MEMBER(push_enum_count, server::cbase_entity, int);
				MEMBER(collision_ptr, server::cbase_entity, ccollision_property*);
				MEMBER(h_effect_entity, server::cbase_entity, chandle<cbase_entity>);
				MEMBER(h_owner_entity, server::cbase_entity, chandle<cbase_entity>);
				MEMBER(effects, server::cbase_entity, uint32_t);
				MEMBER(h_ground_entity, server::cbase_entity, chandle<cbase_entity>);
				MEMBER(friction, server::cbase_entity, float);
				MEMBER(elasticity, server::cbase_entity, float);
				MEMBER(gravity_scale, server::cbase_entity, float);
				MEMBER(time_scale, server::cbase_entity, float);
				MEMBER(water_level, server::cbase_entity, float);
				MEMBER(simulated_every_tick, server::cbase_entity, bool);
				MEMBER(animated_every_tick, server::cbase_entity, bool);
				MEMBER(disable_low_violence, server::cbase_entity, bool);
				MEMBER(water_type, server::cbase_entity, uint8_t);
				MEMBER(eflags, server::cbase_entity, int);
				MEMBER(on_user1, server::cbase_entity, centity_iooutput);
				MEMBER(on_user2, server::cbase_entity, centity_iooutput);
				MEMBER(on_user3, server::cbase_entity, centity_iooutput);
				MEMBER(on_user4, server::cbase_entity, centity_iooutput);
				MEMBER(initial_team_num, server::cbase_entity, int);
				MEMBER(nav_ignore_until_time, server::cbase_entity, game_time_t);
				MEMBER(vec_ang_velocity, server::cbase_entity, qangle);
				MEMBER(network_quantize_origin_and_angles, server::cbase_entity, bool);
				MEMBER(lag_compensate, server::cbase_entity, bool);
				MEMBER(overridden_friction, server::cbase_entity, float);
				MEMBER(blocker, server::cbase_entity, chandle<cbase_entity>);
				MEMBER(local_time, server::cbase_entity, float);
				MEMBER(vphysics_update_local_time, server::cbase_entity, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbase_entity : public centity_instance

			class cserver_only_entity : public cbase_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cserver_only_entity : public cbase_entity

			class cserver_only_point_entity : public cserver_only_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cserver_only_point_entity : public cserver_only_entity

			class clogical_entity : public cserver_only_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class clogical_entity : public cserver_only_entity

			class ccolor_correction : public cbase_entity
			{
			public:
				MEMBER(fade_in_duration, server::ccolor_correction, float);
				MEMBER(fade_out_duration, server::ccolor_correction, float);
				MEMBER(start_fade_in_weight, server::ccolor_correction, float);
				MEMBER(start_fade_out_weight, server::ccolor_correction, float);
				MEMBER(time_start_fade_in, server::ccolor_correction, game_time_t);
				MEMBER(time_start_fade_out, server::ccolor_correction, game_time_t);
				MEMBER(max_weight, server::ccolor_correction, float);
				MEMBER(start_disabled, server::ccolor_correction, bool);
				MEMBER(enabled, server::ccolor_correction, bool);
				MEMBER(master, server::ccolor_correction, bool);
				MEMBER(client_side, server::ccolor_correction, bool);
				MEMBER(exclusive, server::ccolor_correction, bool);
				MEMBER(min_falloff, server::ccolor_correction, float);
				MEMBER(max_falloff, server::ccolor_correction, float);
				MEMBER(cur_weight, server::ccolor_correction, float);
				MEMBER_ARR(netlookup_filename_arr, server::ccolor_correction, 512, char);
				MEMBER(lookup_filename, server::ccolor_correction, cutl_symbol_large);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccolor_correction : public cbase_entity

			class centity_flame : public cbase_entity
			{
			public:
				MEMBER(h_ent_attached, server::centity_flame, chandle<cbase_entity>);
				MEMBER(cheap_effect, server::centity_flame, bool);
				MEMBER(size, server::centity_flame, float);
				MEMBER(use_hitboxes, server::centity_flame, bool);
				MEMBER(num_hitbox_fires, server::centity_flame, int);
				MEMBER(hitbox_fire_scale, server::centity_flame, float);
				MEMBER(lifetime, server::centity_flame, game_time_t);
				MEMBER(h_attacker, server::centity_flame, chandle<cbase_entity>);
				MEMBER(danger_sound, server::centity_flame, int);
				MEMBER(direct_damage_per_second, server::centity_flame, float);
				MEMBER(custom_damage_type, server::centity_flame, int);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class centity_flame : public cbase_entity

			class cbase_filter : public clogical_entity
			{
			public:
				MEMBER(negated, server::cbase_filter, bool);
				MEMBER(on_pass, server::cbase_filter, centity_iooutput);
				MEMBER(on_fail, server::cbase_filter, centity_iooutput);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbase_filter : public clogical_entity

			class cfilter_multiple : public cbase_filter
			{
			public:
				MEMBER(filter_type, server::cfilter_multiple, filter_t);
				MEMBER_ARR(filter_name_arr, server::cfilter_multiple, 10, cutl_symbol_large);
				MEMBER_ARR(h_filter_arr, server::cfilter_multiple, 10, chandle<cbase_entity>);
				MEMBER(filter_count, server::cfilter_multiple, int);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cfilter_multiple : public cbase_filter

			class cfilter_proximity : public cbase_filter
			{
			public:
				MEMBER(radius, server::cfilter_proximity, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cfilter_proximity : public cbase_filter

			class cfilter_los : public cbase_filter
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cfilter_los : public cbase_filter

			class cfilter_class : public cbase_filter
			{
			public:
				MEMBER(filter_class, server::cfilter_class, cutl_symbol_large);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cfilter_class : public cbase_filter

			class cbase_fire : public cbase_entity
			{
			public:
				MEMBER(scale, server::cbase_fire, float);
				MEMBER(start_scale, server::cbase_fire, float);
				MEMBER(scale_time, server::cbase_fire, float);
				MEMBER(flags, server::cbase_fire, uint32_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbase_fire : public cbase_entity

			class cfire_smoke : public cbase_fire
			{
			public:
				MEMBER(flame_model_index, server::cfire_smoke, int);
				MEMBER(flame_from_above_model_index, server::cfire_smoke, int);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cfire_smoke : public cbase_fire

			class cfish_pool : public cbase_entity
			{
			public:
				MEMBER(fish_count, server::cfish_pool, int);
				MEMBER(max_range, server::cfish_pool, float);
				MEMBER(swim_depth, server::cfish_pool, float);
				MEMBER(water_level, server::cfish_pool, float);
				MEMBER(is_dormant, server::cfish_pool, bool);
				MEMBER(fishes, server::cfish_pool, cutl_vector<chandle<cfish>>);
				MEMBER(vis_timer, server::cfish_pool, countdown_timer);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cfish_pool : public cbase_entity

			class cinfo_data : public cserver_only_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cinfo_data : public cserver_only_entity

			class clogic_branch : public clogical_entity
			{
			public:
				MEMBER(in_value, server::clogic_branch, bool);
				MEMBER(listeners, server::clogic_branch, cutl_vector<chandle<cbase_entity>>);
				MEMBER(on_true, server::clogic_branch, centity_iooutput);
				MEMBER(on_false, server::clogic_branch, centity_iooutput);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class clogic_branch : public clogical_entity

			class clogic_distance_check : public clogical_entity
			{
			public:
				MEMBER(isz_entity_a, server::clogic_distance_check, cutl_symbol_large);
				MEMBER(isz_entity_b, server::clogic_distance_check, cutl_symbol_large);
				MEMBER(zone1_distance, server::clogic_distance_check, float);
				MEMBER(zone2_distance, server::clogic_distance_check, float);
				MEMBER(in_zone1, server::clogic_distance_check, centity_iooutput);
				MEMBER(in_zone2, server::clogic_distance_check, centity_iooutput);
				MEMBER(in_zone3, server::clogic_distance_check, centity_iooutput);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class clogic_distance_check : public clogical_entity

			class cpoint_prefab : public cserver_only_point_entity
			{
			public:
				MEMBER(target_map_name, server::cpoint_prefab, cutl_symbol_large);
				MEMBER(force_world_group_id, server::cpoint_prefab, cutl_symbol_large);
				MEMBER(associated_relay_target_name, server::cpoint_prefab, cutl_symbol_large);
				MEMBER(fixup_names, server::cpoint_prefab, bool);
				MEMBER(load_dynamic, server::cpoint_prefab, bool);
				MEMBER(associated_relay_entity, server::cpoint_prefab, chandle<cpoint_prefab>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cpoint_prefab : public cserver_only_point_entity

			class cskybox_reference : public cbase_entity
			{
			public:
				MEMBER(world_group_id, server::cskybox_reference, world_group_id_t);
				MEMBER(h_sky_camera, server::cskybox_reference, chandle<csky_camera>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cskybox_reference : public cbase_entity

			struct fogparams_t
			{
				MEMBER(dir_primary, server::fogparams_t, vector);
				MEMBER(color_primary, server::fogparams_t, color);
				MEMBER(color_secondary, server::fogparams_t, color);
				MEMBER(color_primary_lerp_to, server::fogparams_t, color);
				MEMBER(color_secondary_lerp_to, server::fogparams_t, color);
				MEMBER(start, server::fogparams_t, float);
				MEMBER(end, server::fogparams_t, float);
				MEMBER(farz, server::fogparams_t, float);
				MEMBER(maxdensity, server::fogparams_t, float);
				MEMBER(exponent, server::fogparams_t, float);
				MEMBER(hdrcolor_scale, server::fogparams_t, float);
				MEMBER(skybox_fog_factor, server::fogparams_t, float);
				MEMBER(skybox_fog_factor_lerp_to, server::fogparams_t, float);
				MEMBER(start_lerp_to, server::fogparams_t, float);
				MEMBER(end_lerp_to, server::fogparams_t, float);
				MEMBER(maxdensity_lerp_to, server::fogparams_t, float);
				MEMBER(lerptime, server::fogparams_t, game_time_t);
				MEMBER(duration, server::fogparams_t, float);
				MEMBER(blendtobackground, server::fogparams_t, float);
				MEMBER(scattering, server::fogparams_t, float);
				MEMBER(locallightscale, server::fogparams_t, float);
				MEMBER(enable, server::fogparams_t, bool);
				MEMBER(blend, server::fogparams_t, bool);
				MEMBER(no_reflection_fog, server::fogparams_t, bool);
				MEMBER(padding, server::fogparams_t, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // struct fogparams_t

			class cenv_soundscape : public cserver_only_entity
			{
			public:
				MEMBER(on_play, server::cenv_soundscape, centity_iooutput);
				MEMBER(radius, server::cenv_soundscape, float);
				MEMBER(soundscape_name, server::cenv_soundscape, cutl_symbol_large);
				MEMBER(sound_event_name, server::cenv_soundscape, cutl_symbol_large);
				MEMBER(override_with_event, server::cenv_soundscape, bool);
				MEMBER(soundscape_index, server::cenv_soundscape, int);
				MEMBER(soundscape_entity_list_id, server::cenv_soundscape, int);
				MEMBER(sound_event_hash, server::cenv_soundscape, uint32_t);
				MEMBER_ARR(position_names_arr, server::cenv_soundscape, 8, cutl_symbol_large);
				MEMBER(h_proxy_soundscape, server::cenv_soundscape, chandle<cenv_soundscape>);
				MEMBER(disabled, server::cenv_soundscape, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cenv_soundscape : public cserver_only_entity

			class cenv_soundscape_proxy : public cenv_soundscape
			{
			public:
				MEMBER(main_soundscape_name, server::cenv_soundscape_proxy, cutl_symbol_large);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cenv_soundscape_proxy : public cenv_soundscape

			class cenv_soundscape_triggerable : public cenv_soundscape
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cenv_soundscape_triggerable : public cenv_soundscape

			struct vphysics_collision_attribute_t
			{
				MEMBER(interacts_as, server::vphysics_collision_attribute_t, uint64_t);
				MEMBER(interacts_with, server::vphysics_collision_attribute_t, uint64_t);
				MEMBER(interacts_exclude, server::vphysics_collision_attribute_t, uint64_t);
				MEMBER(entity_id, server::vphysics_collision_attribute_t, uint32_t);
				MEMBER(owner_id, server::vphysics_collision_attribute_t, uint32_t);
				MEMBER(hierarchy_id, server::vphysics_collision_attribute_t, uint16_t);
				MEMBER(collision_group, server::vphysics_collision_attribute_t, uint8_t);
				MEMBER(collision_function_mask, server::vphysics_collision_attribute_t, uint8_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // struct vphysics_collision_attribute_t

			class ccollision_property
			{
			public:
				MEMBER(collision_attribute, server::ccollision_property, vphysics_collision_attribute_t);
				MEMBER(vec_mins, server::ccollision_property, vector);
				MEMBER(vec_maxs, server::ccollision_property, vector);
				MEMBER(us_solid_flags, server::ccollision_property, uint8_t);
				MEMBER(solid_type, server::ccollision_property, solid_type_t);
				MEMBER(trigger_bloat, server::ccollision_property, uint8_t);
				MEMBER(surround_type, server::ccollision_property, surrounding_bounds_type_t);
				MEMBER(collision_group, server::ccollision_property, uint8_t);
				MEMBER(enable_physics, server::ccollision_property, uint8_t);
				MEMBER(bounding_radius, server::ccollision_property, float);
				MEMBER(vec_specified_surrounding_mins, server::ccollision_property, vector);
				MEMBER(vec_specified_surrounding_maxs, server::ccollision_property, vector);
				MEMBER(vec_surrounding_maxs, server::ccollision_property, vector);
				MEMBER(vec_surrounding_mins, server::ccollision_property, vector);
				MEMBER(v_capsule_center1, server::ccollision_property, vector);
				MEMBER(v_capsule_center2, server::ccollision_property, vector);
				MEMBER(capsule_radius, server::ccollision_property, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccollision_property

			class ceffect_data
			{
			public:
				MEMBER(v_origin, server::ceffect_data, vector);
				MEMBER(v_start, server::ceffect_data, vector);
				MEMBER(v_normal, server::ceffect_data, vector);
				MEMBER(v_angles, server::ceffect_data, qangle);
				MEMBER(h_entity, server::ceffect_data, centity_handle);
				MEMBER(h_other_entity, server::ceffect_data, centity_handle);
				MEMBER(scale, server::ceffect_data, float);
				MEMBER(magnitude, server::ceffect_data, float);
				MEMBER(radius, server::ceffect_data, float);
				MEMBER(surface_prop, server::ceffect_data, cutl_string_token);
				MEMBER(effect_index, server::ceffect_data, cweak_handle<info_for_resource_type_iparticle_system_definition>);
				MEMBER(damage_type, server::ceffect_data, uint32_t);
				MEMBER(penetrate, server::ceffect_data, uint8_t);
				MEMBER(material, server::ceffect_data, uint16_t);
				MEMBER(hit_box, server::ceffect_data, uint16_t);
				MEMBER(color, server::ceffect_data, uint8_t);
				MEMBER(flags, server::ceffect_data, uint8_t);
				MEMBER(attachment_index, server::ceffect_data, attachment_handle_t);
				MEMBER(attachment_name, server::ceffect_data, cutl_string_token);
				MEMBER(effect_name, server::ceffect_data, uint16_t);
				MEMBER(explosion_type, server::ceffect_data, uint8_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ceffect_data

			class cenv_detail_controller : public cbase_entity
			{
			public:
				MEMBER(fade_start_dist, server::cenv_detail_controller, float);
				MEMBER(fade_end_dist, server::cenv_detail_controller, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cenv_detail_controller : public cbase_entity

			class cenv_wind_shared
			{
			public:
				MEMBER(start_time, server::cenv_wind_shared, game_time_t);
				MEMBER(wind_seed, server::cenv_wind_shared, uint32_t);
				MEMBER(min_wind, server::cenv_wind_shared, uint16_t);
				MEMBER(max_wind, server::cenv_wind_shared, uint16_t);
				MEMBER(wind_radius, server::cenv_wind_shared, int);
				MEMBER(min_gust, server::cenv_wind_shared, uint16_t);
				MEMBER(max_gust, server::cenv_wind_shared, uint16_t);
				MEMBER(min_gust_delay, server::cenv_wind_shared, float);
				MEMBER(max_gust_delay, server::cenv_wind_shared, float);
				MEMBER(gust_duration, server::cenv_wind_shared, float);
				MEMBER(gust_dir_change, server::cenv_wind_shared, uint16_t);
				MEMBER(location, server::cenv_wind_shared, vector);
				MEMBER(isz_gust_sound, server::cenv_wind_shared, int);
				MEMBER(wind_dir, server::cenv_wind_shared, int);
				MEMBER(wind_speed, server::cenv_wind_shared, float);
				MEMBER(current_wind_vector, server::cenv_wind_shared, vector);
				MEMBER(current_sway_vector, server::cenv_wind_shared, vector);
				MEMBER(prev_sway_vector, server::cenv_wind_shared, vector);
				MEMBER(initial_wind_dir, server::cenv_wind_shared, uint16_t);
				MEMBER(initial_wind_speed, server::cenv_wind_shared, float);
				MEMBER(on_gust_start, server::cenv_wind_shared, centity_iooutput);
				MEMBER(on_gust_end, server::cenv_wind_shared, centity_iooutput);
				MEMBER(variation_time, server::cenv_wind_shared, game_time_t);
				MEMBER(sway_time, server::cenv_wind_shared, game_time_t);
				MEMBER(sim_time, server::cenv_wind_shared, game_time_t);
				MEMBER(switch_time, server::cenv_wind_shared, game_time_t);
				MEMBER(ave_wind_speed, server::cenv_wind_shared, float);
				MEMBER(gusting, server::cenv_wind_shared, bool);
				MEMBER(wind_angle_variation, server::cenv_wind_shared, float);
				MEMBER(wind_speed_variation, server::cenv_wind_shared, float);
				MEMBER(ent_index, server::cenv_wind_shared, centity_index);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cenv_wind_shared

			struct cenv_wind_shared__wind_ave_event_t
			{
				MEMBER(start_wind_speed, server::cenv_wind_shared__wind_ave_event_t, float);
				MEMBER(ave_wind_speed, server::cenv_wind_shared__wind_ave_event_t, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // struct cenv_wind_shared__wind_ave_event_t

			struct cenv_wind_shared__wind_variation_event_t
			{
				MEMBER(wind_angle_variation, server::cenv_wind_shared__wind_variation_event_t, float);
				MEMBER(wind_speed_variation, server::cenv_wind_shared__wind_variation_event_t, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // struct cenv_wind_shared__wind_variation_event_t

			class cinfo_ladder_dismount : public cbase_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cinfo_ladder_dismount : public cbase_entity

			struct shard_model_desc_t
			{
				MEMBER(model_id, server::shard_model_desc_t, int);
				MEMBER(h_material, server::shard_model_desc_t, cstrong_handle<info_for_resource_type_imaterial2>);
				MEMBER(solid, server::shard_model_desc_t, shard_solid_t);
				MEMBER(shatter_panel_mode, server::shard_model_desc_t, shatter_panel_mode);
				MEMBER(vec_panel_size, server::shard_model_desc_t, vector2d);
				MEMBER(vec_stress_position_a, server::shard_model_desc_t, vector2d);
				MEMBER(vec_stress_position_b, server::shard_model_desc_t, vector2d);
				MEMBER(vec_panel_vertices, server::shard_model_desc_t, cnetwork_utl_vector_base<vector2d>);
				MEMBER(glass_half_thickness, server::shard_model_desc_t, float);
				MEMBER(has_parent, server::shard_model_desc_t, bool);
				MEMBER(parent_frozen, server::shard_model_desc_t, bool);
				MEMBER(surface_prop_string_token, server::shard_model_desc_t, cutl_string_token);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // struct shard_model_desc_t

			class cgame_rules_proxy : public cbase_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cgame_rules_proxy : public cbase_entity

			class cglow_property
			{
			public:
				MEMBER(glow_color, server::cglow_property, vector);
				MEMBER(glow_type, server::cglow_property, int);
				MEMBER(glow_team, server::cglow_property, int);
				MEMBER(glow_range, server::cglow_property, int);
				MEMBER(glow_range_min, server::cglow_property, int);
				MEMBER(glow_color_override, server::cglow_property, color);
				MEMBER(flashing, server::cglow_property, bool);
				MEMBER(glow_time, server::cglow_property, float);
				MEMBER(glow_start_time, server::cglow_property, float);
				MEMBER(eligible_for_screen_highlight, server::cglow_property, bool);
				MEMBER(glowing, server::cglow_property, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cglow_property

			struct sky3dparams_t
			{
				MEMBER(scale, server::sky3dparams_t, short);
				MEMBER(origin, server::sky3dparams_t, vector);
				MEMBER(b_clip3_dsky_box_near_to_world_far, server::sky3dparams_t, bool);
				MEMBER(fl_clip3_dsky_box_near_to_world_far_offset, server::sky3dparams_t, float);
				MEMBER(fog, server::sky3dparams_t, fogparams_t);
				MEMBER(world_group_id, server::sky3dparams_t, world_group_id_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // struct sky3dparams_t

			class cplayer_camera_services : public cplayer_pawn_component
			{
			public:
				MEMBER(vec_cs_view_punch_angle, server::cplayer_camera_services, qangle);
				MEMBER(cs_view_punch_angle_tick, server::cplayer_camera_services, game_tick_t);
				MEMBER(cs_view_punch_angle_tick_ratio, server::cplayer_camera_services, float);
				MEMBER(player_fog, server::cplayer_camera_services, fogplayerparams_t);
				MEMBER(h_color_correction_ctrl, server::cplayer_camera_services, chandle<ccolor_correction>);
				MEMBER(h_view_entity, server::cplayer_camera_services, chandle<cbase_entity>);
				MEMBER(h_tonemap_controller, server::cplayer_camera_services, chandle<ctonemap_controller2>);
				MEMBER(audio, server::cplayer_camera_services, audioparams_t);
				MEMBER(post_processing_volumes, server::cplayer_camera_services, cnetwork_utl_vector_base<chandle<cpost_processing_volume>>);
				MEMBER(old_player_z, server::cplayer_camera_services, float);
				MEMBER(old_player_view_offset_z, server::cplayer_camera_services, float);
				MEMBER(h_trigger_soundscape_list, server::cplayer_camera_services, cutl_vector<chandle<cenv_soundscape_triggerable>>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cplayer_camera_services : public cplayer_pawn_component

			class csky_camera : public cbase_entity
			{
			public:
				MEMBER(skybox_data, server::csky_camera, sky3dparams_t);
				MEMBER(skybox_slot_token, server::csky_camera, cutl_string_token);
				MEMBER(use_angles, server::csky_camera, bool);
				MEMBER(next_ptr, server::csky_camera, csky_camera*);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class csky_camera : public cbase_entity

			struct physics_ragdoll_pose_t
			{
				MEMBER(_m_p_chain_entity, server::physics_ragdoll_pose_t, cnetwork_var_chainer);
				MEMBER(transforms, server::physics_ragdoll_pose_t, cnetwork_utl_vector_base<ctransform>);
				MEMBER(h_owner, server::physics_ragdoll_pose_t, chandle<cbase_entity>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // struct physics_ragdoll_pose_t

			class csound_opvar_set_point_base : public cbase_entity
			{
			public:
				MEMBER(disabled, server::csound_opvar_set_point_base, bool);
				MEMBER(h_source, server::csound_opvar_set_point_base, centity_handle);
				MEMBER(isz_source_entity_name, server::csound_opvar_set_point_base, cutl_symbol_large);
				MEMBER(v_last_position, server::csound_opvar_set_point_base, vector);
				MEMBER(isz_stack_name, server::csound_opvar_set_point_base, cutl_symbol_large);
				MEMBER(isz_operator_name, server::csound_opvar_set_point_base, cutl_symbol_large);
				MEMBER(isz_opvar_name, server::csound_opvar_set_point_base, cutl_symbol_large);
				MEMBER(opvar_index, server::csound_opvar_set_point_base, int);
				MEMBER(use_auto_compare, server::csound_opvar_set_point_base, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class csound_opvar_set_point_base : public cbase_entity

			class csound_opvar_set_point_entity : public csound_opvar_set_point_base
			{
			public:
				MEMBER(on_enter, server::csound_opvar_set_point_entity, centity_iooutput);
				MEMBER(on_exit, server::csound_opvar_set_point_entity, centity_iooutput);
				MEMBER(auto_disable, server::csound_opvar_set_point_entity, bool);
				MEMBER(distance_min, server::csound_opvar_set_point_entity, float);
				MEMBER(distance_max, server::csound_opvar_set_point_entity, float);
				MEMBER(distance_map_min, server::csound_opvar_set_point_entity, float);
				MEMBER(distance_map_max, server::csound_opvar_set_point_entity, float);
				MEMBER(occlusion_radius, server::csound_opvar_set_point_entity, float);
				MEMBER(occlusion_min, server::csound_opvar_set_point_entity, float);
				MEMBER(occlusion_max, server::csound_opvar_set_point_entity, float);
				MEMBER(val_set_on_disable, server::csound_opvar_set_point_entity, float);
				MEMBER(set_value_on_disable, server::csound_opvar_set_point_entity, bool);
				MEMBER(simulation_mode, server::csound_opvar_set_point_entity, int);
				MEMBER(visibility_samples, server::csound_opvar_set_point_entity, int);
				MEMBER(v_dynamic_proxy_point, server::csound_opvar_set_point_entity, vector);
				MEMBER(dynamic_maximum_occlusion, server::csound_opvar_set_point_entity, float);
				MEMBER(h_dynamic_entity, server::csound_opvar_set_point_entity, centity_handle);
				MEMBER(isz_dynamic_entity_name, server::csound_opvar_set_point_entity, cutl_symbol_large);
				MEMBER(pathing_distance_norm_factor, server::csound_opvar_set_point_entity, float);
				MEMBER(v_pathing_source_pos, server::csound_opvar_set_point_entity, vector);
				MEMBER(v_pathing_listener_pos, server::csound_opvar_set_point_entity, vector);
				MEMBER(pathing_source_index, server::csound_opvar_set_point_entity, int);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class csound_opvar_set_point_entity : public csound_opvar_set_point_base

			class csound_opvar_set_aabbentity : public csound_opvar_set_point_entity
			{
			public:
				MEMBER(v_distance_inner_mins, server::csound_opvar_set_aabbentity, vector);
				MEMBER(v_distance_inner_maxs, server::csound_opvar_set_aabbentity, vector);
				MEMBER(v_distance_outer_mins, server::csound_opvar_set_aabbentity, vector);
				MEMBER(v_distance_outer_maxs, server::csound_opvar_set_aabbentity, vector);
				MEMBER(aabbdirection, server::csound_opvar_set_aabbentity, int);
				MEMBER(v_inner_mins, server::csound_opvar_set_aabbentity, vector);
				MEMBER(v_inner_maxs, server::csound_opvar_set_aabbentity, vector);
				MEMBER(v_outer_mins, server::csound_opvar_set_aabbentity, vector);
				MEMBER(v_outer_maxs, server::csound_opvar_set_aabbentity, vector);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class csound_opvar_set_aabbentity : public csound_opvar_set_point_entity

			class csound_opvar_set_obbentity : public csound_opvar_set_aabbentity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class csound_opvar_set_obbentity : public csound_opvar_set_aabbentity

			class csound_opvar_set_path_corner_entity : public csound_opvar_set_point_entity
			{
			public:
				MEMBER(dist_min_sqr, server::csound_opvar_set_path_corner_entity, float);
				MEMBER(dist_max_sqr, server::csound_opvar_set_path_corner_entity, float);
				MEMBER(isz_path_corner_entity_name, server::csound_opvar_set_path_corner_entity, cutl_symbol_large);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class csound_opvar_set_path_corner_entity : public csound_opvar_set_point_entity

			class csound_opvar_set_obbwind_entity : public csound_opvar_set_point_base
			{
			public:
				MEMBER(v_mins, server::csound_opvar_set_obbwind_entity, vector);
				MEMBER(v_maxs, server::csound_opvar_set_obbwind_entity, vector);
				MEMBER(v_distance_mins, server::csound_opvar_set_obbwind_entity, vector);
				MEMBER(v_distance_maxs, server::csound_opvar_set_obbwind_entity, vector);
				MEMBER(wind_min, server::csound_opvar_set_obbwind_entity, float);
				MEMBER(wind_max, server::csound_opvar_set_obbwind_entity, float);
				MEMBER(wind_map_min, server::csound_opvar_set_obbwind_entity, float);
				MEMBER(wind_map_max, server::csound_opvar_set_obbwind_entity, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class csound_opvar_set_obbwind_entity : public csound_opvar_set_point_base

			class cattribute_list
			{
			public:
				MEMBER(attributes, server::cattribute_list, cutl_vector_embedded_network_var<cecon_item_attribute>);
				MEMBER(manager_ptr, server::cattribute_list, cattribute_manager*);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cattribute_list

			class cecon_item_attribute
			{
			public:
				MEMBER(attribute_definition_index, server::cecon_item_attribute, uint16_t);
				MEMBER(value, server::cecon_item_attribute, float);
				MEMBER(initial_value, server::cecon_item_attribute, float);
				MEMBER(refundable_currency, server::cecon_item_attribute, int);
				MEMBER(set_bonus, server::cecon_item_attribute, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cecon_item_attribute

			class cattribute_manager
			{
			public:
				MEMBER(providers, server::cattribute_manager, cutl_vector<chandle<cbase_entity>>);
				MEMBER(reapply_provision_parity, server::cattribute_manager, int);
				MEMBER(h_outer, server::cattribute_manager, chandle<cbase_entity>);
				MEMBER(prevent_loopback, server::cattribute_manager, bool);
				MEMBER(provider_type, server::cattribute_manager, attributeprovidertypes_t);
				MEMBER(cached_results, server::cattribute_manager, cutl_vector<cattribute_manager_cached_attribute_float_t>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cattribute_manager

			struct cattribute_manager_cached_attribute_float_t
			{
				MEMBER(fl_in, server::cattribute_manager_cached_attribute_float_t, float);
				MEMBER(i_attrib_hook, server::cattribute_manager_cached_attribute_float_t, cutl_symbol_large);
				MEMBER(fl_out, server::cattribute_manager_cached_attribute_float_t, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // struct cattribute_manager_cached_attribute_float_t

			class cecon_item_view : public iecon_item_interface
			{
			public:
				MEMBER(item_definition_index, server::cecon_item_view, uint16_t);
				MEMBER(entity_quality, server::cecon_item_view, int);
				MEMBER(entity_level, server::cecon_item_view, uint32_t);
				MEMBER(item_id, server::cecon_item_view, uint64_t);
				MEMBER(item_idhigh, server::cecon_item_view, uint32_t);
				MEMBER(item_idlow, server::cecon_item_view, uint32_t);
				MEMBER(account_id, server::cecon_item_view, uint32_t);
				MEMBER(inventory_position, server::cecon_item_view, uint32_t);
				MEMBER(initialized, server::cecon_item_view, bool);
				MEMBER(attribute_list, server::cecon_item_view, cattribute_list);
				MEMBER(networked_dynamic_attributes, server::cecon_item_view, cattribute_list);
				MEMBER_ARR(custom_name_arr, server::cecon_item_view, 161, char);
				MEMBER_ARR(custom_name_override_arr, server::cecon_item_view, 161, char);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cecon_item_view : public iecon_item_interface

			struct entity_spotted_state_t
			{
				MEMBER(spotted, server::entity_spotted_state_t, bool);
				MEMBER_ARR(spotted_by_mask_arr, server::entity_spotted_state_t, 2, uint32_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // struct entity_spotted_state_t

			class spawn_point : public cserver_only_point_entity
			{
			public:
				MEMBER(priority, server::spawn_point, int);
				MEMBER(enabled, server::spawn_point, bool);
				MEMBER(type, server::spawn_point, int);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class spawn_point : public cserver_only_point_entity

			class spawn_point_coop_enemy : public spawn_point
			{
			public:
				MEMBER(weapons_to_give, server::spawn_point_coop_enemy, cutl_symbol_large);
				MEMBER(player_model_to_use, server::spawn_point_coop_enemy, cutl_symbol_large);
				MEMBER(armor_to_spawn_with, server::spawn_point_coop_enemy, int);
				MEMBER(default_behavior, server::spawn_point_coop_enemy, spawn_point_coop_enemy__bot_default_behavior_t);
				MEMBER(bot_difficulty, server::spawn_point_coop_enemy, int);
				MEMBER(is_agressive, server::spawn_point_coop_enemy, bool);
				MEMBER(start_asleep, server::spawn_point_coop_enemy, bool);
				MEMBER(hide_radius, server::spawn_point_coop_enemy, float);
				MEMBER(behavior_tree_file, server::spawn_point_coop_enemy, cutl_symbol_large);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class spawn_point_coop_enemy : public spawn_point

			class ccsgame_rules_proxy : public cgame_rules_proxy
			{
			public:
				MEMBER(game_rules_ptr, server::ccsgame_rules_proxy, ccsgame_rules*);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsgame_rules_proxy : public cgame_rules_proxy

			class cretake_game_rules
			{
			public:
				MEMBER(match_seed, server::cretake_game_rules, int);
				MEMBER(blockers_present, server::cretake_game_rules, bool);
				MEMBER(round_in_progress, server::cretake_game_rules, bool);
				MEMBER(first_second_half_round, server::cretake_game_rules, int);
				MEMBER(bomb_site, server::cretake_game_rules, int);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cretake_game_rules

			class ccsgame_mode_rules
			{
			public:
				MEMBER(_m_p_chain_entity, server::ccsgame_mode_rules, cnetwork_var_chainer);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsgame_mode_rules

			class ccsgame_mode_rules_noop : public ccsgame_mode_rules
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsgame_mode_rules_noop : public ccsgame_mode_rules

			class ccsgame_mode_script : public cbase_pulse_graph_instance
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsgame_mode_script : public cbase_pulse_graph_instance

			class ccsgame_mode_rules_scripted : public ccsgame_mode_rules
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsgame_mode_rules_scripted : public ccsgame_mode_rules

			class ccsgame_mode_rules_deathmatch : public ccsgame_mode_rules
			{
			public:
				MEMBER(first_think, server::ccsgame_mode_rules_deathmatch, bool);
				MEMBER(first_think_after_connected, server::ccsgame_mode_rules_deathmatch, bool);
				MEMBER(dmbonus_start_time, server::ccsgame_mode_rules_deathmatch, game_time_t);
				MEMBER(dmbonus_time_length, server::ccsgame_mode_rules_deathmatch, float);
				MEMBER(dmbonus_weapon_loadout_slot, server::ccsgame_mode_rules_deathmatch, short);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsgame_mode_rules_deathmatch : public ccsgame_mode_rules

			class ccsgame_rules : public cteamplay_rules
			{
			public:
				MEMBER(_m_p_chain_entity, server::ccsgame_rules, cnetwork_var_chainer);
				MEMBER(coop_mission_manager, server::ccsgame_rules, chandle<cbase_entity>);
				MEMBER(freeze_period, server::ccsgame_rules, bool);
				MEMBER(warmup_period, server::ccsgame_rules, bool);
				MEMBER(warmup_period_end, server::ccsgame_rules, game_time_t);
				MEMBER(warmup_period_start, server::ccsgame_rules, game_time_t);
				MEMBER(total_paused_ticks, server::ccsgame_rules, int);
				MEMBER(pause_start_tick, server::ccsgame_rules, int);
				MEMBER(server_paused, server::ccsgame_rules, bool);
				MEMBER(game_paused, server::ccsgame_rules, bool);
				MEMBER(terrorist_time_out_active, server::ccsgame_rules, bool);
				MEMBER(cttime_out_active, server::ccsgame_rules, bool);
				MEMBER(terrorist_time_out_remaining, server::ccsgame_rules, float);
				MEMBER(cttime_out_remaining, server::ccsgame_rules, float);
				MEMBER(terrorist_time_outs, server::ccsgame_rules, int);
				MEMBER(cttime_outs, server::ccsgame_rules, int);
				MEMBER(technical_time_out, server::ccsgame_rules, bool);
				MEMBER(match_waiting_for_resume, server::ccsgame_rules, bool);
				MEMBER(round_time, server::ccsgame_rules, int);
				MEMBER(match_start_time, server::ccsgame_rules, float);
				MEMBER(round_start_time, server::ccsgame_rules, game_time_t);
				MEMBER(restart_round_time, server::ccsgame_rules, game_time_t);
				MEMBER(game_restart, server::ccsgame_rules, bool);
				MEMBER(game_start_time, server::ccsgame_rules, float);
				MEMBER(time_until_next_phase_starts, server::ccsgame_rules, float);
				MEMBER(game_phase, server::ccsgame_rules, int);
				MEMBER(total_rounds_played, server::ccsgame_rules, int);
				MEMBER(rounds_played_this_phase, server::ccsgame_rules, int);
				MEMBER(overtime_playing, server::ccsgame_rules, int);
				MEMBER(hostages_remaining, server::ccsgame_rules, int);
				MEMBER(any_hostage_reached, server::ccsgame_rules, bool);
				MEMBER(map_has_bomb_target, server::ccsgame_rules, bool);
				MEMBER(map_has_rescue_zone, server::ccsgame_rules, bool);
				MEMBER(map_has_buy_zone, server::ccsgame_rules, bool);
				MEMBER(is_queued_matchmaking, server::ccsgame_rules, bool);
				MEMBER(queued_matchmaking_mode, server::ccsgame_rules, int);
				MEMBER(is_valve_ds, server::ccsgame_rules, bool);
				MEMBER(logo_map, server::ccsgame_rules, bool);
				MEMBER(play_all_step_sounds_on_server, server::ccsgame_rules, bool);
				MEMBER(spectator_slot_count, server::ccsgame_rules, int);
				MEMBER(match_device, server::ccsgame_rules, int);
				MEMBER(has_match_started, server::ccsgame_rules, bool);
				MEMBER(next_map_in_mapgroup, server::ccsgame_rules, int);
				MEMBER_ARR(tournament_event_name_arr, server::ccsgame_rules, 512, char);
				MEMBER_ARR(tournament_event_stage_arr, server::ccsgame_rules, 512, char);
				MEMBER_ARR(match_stat_txt_arr, server::ccsgame_rules, 512, char);
				MEMBER_ARR(tournament_predictions_txt_arr, server::ccsgame_rules, 512, char);
				MEMBER(tournament_predictions_pct, server::ccsgame_rules, int);
				MEMBER(cmmitem_drop_reveal_start_time, server::ccsgame_rules, game_time_t);
				MEMBER(cmmitem_drop_reveal_end_time, server::ccsgame_rules, game_time_t);
				MEMBER(is_dropping_items, server::ccsgame_rules, bool);
				MEMBER(is_quest_eligible, server::ccsgame_rules, bool);
				MEMBER(is_hltv_active, server::ccsgame_rules, bool);
				MEMBER(guardian_mode_wave_number, server::ccsgame_rules, int);
				MEMBER(guardian_mode_special_kills_remaining, server::ccsgame_rules, int);
				MEMBER(guardian_mode_special_weapon_needed, server::ccsgame_rules, int);
				MEMBER(guardian_grenades_to_give_bots, server::ccsgame_rules, int);
				MEMBER(num_heavies_to_spawn, server::ccsgame_rules, int);
				MEMBER(num_global_gifts_given, server::ccsgame_rules, uint32_t);
				MEMBER(num_global_gifters, server::ccsgame_rules, uint32_t);
				MEMBER(num_global_gifts_period_seconds, server::ccsgame_rules, uint32_t);
				MEMBER_ARR(arr_featured_gifters_accounts_arr, server::ccsgame_rules, 4, uint32_t);
				MEMBER_ARR(arr_featured_gifters_gifts_arr, server::ccsgame_rules, 4, uint32_t);
				MEMBER_ARR(arr_prohibited_item_indices_arr, server::ccsgame_rules, 100, uint16_t);
				MEMBER_ARR(arr_tournament_active_caster_accounts_arr, server::ccsgame_rules, 4, uint32_t);
				MEMBER(num_best_of_maps, server::ccsgame_rules, int);
				MEMBER(halloween_mask_list_seed, server::ccsgame_rules, int);
				MEMBER(bomb_dropped, server::ccsgame_rules, bool);
				MEMBER(bomb_planted, server::ccsgame_rules, bool);
				MEMBER(round_win_status, server::ccsgame_rules, int);
				MEMBER(e_round_win_reason, server::ccsgame_rules, int);
				MEMBER(tcant_buy, server::ccsgame_rules, bool);
				MEMBER(ctcant_buy, server::ccsgame_rules, bool);
				MEMBER(guardian_buy_until_time, server::ccsgame_rules, game_time_t);
				MEMBER_ARR(match_stats_round_results_arr, server::ccsgame_rules, 30, int);
				MEMBER_ARR(match_stats_players_alive_ct_arr, server::ccsgame_rules, 30, int);
				MEMBER_ARR(match_stats_players_alive_t_arr, server::ccsgame_rules, 30, int);
				MEMBER_ARR(team_respawn_wave_times_arr, server::ccsgame_rules, 32, float);
				MEMBER_ARR(next_respawn_wave_arr, server::ccsgame_rules, 32, game_time_t);
				MEMBER(server_quest_id, server::ccsgame_rules, int);
				MEMBER(v_minimap_mins, server::ccsgame_rules, vector);
				MEMBER(v_minimap_maxs, server::ccsgame_rules, vector);
				MEMBER_ARR(minimap_vertical_section_heights_arr, server::ccsgame_rules, 8, float);
				MEMBER(dont_increment_coop_wave, server::ccsgame_rules, bool);
				MEMBER(spawned_terror_hunt_heavy, server::ccsgame_rules, bool);
				MEMBER_ARR(end_match_map_group_vote_types_arr, server::ccsgame_rules, 10, int);
				MEMBER_ARR(end_match_map_group_vote_options_arr, server::ccsgame_rules, 10, int);
				MEMBER(end_match_map_vote_winner, server::ccsgame_rules, int);
				MEMBER(num_consecutive_ctloses, server::ccsgame_rules, int);
				MEMBER(num_consecutive_terrorist_loses, server::ccsgame_rules, int);
				MEMBER(has_hostage_been_touched, server::ccsgame_rules, bool);
				MEMBER(intermission_start_time, server::ccsgame_rules, game_time_t);
				MEMBER(intermission_end_time, server::ccsgame_rules, game_time_t);
				MEMBER(level_initialized, server::ccsgame_rules, bool);
				MEMBER(total_rounds_played_1, server::ccsgame_rules, int);
				MEMBER(un_balanced_rounds, server::ccsgame_rules, int);
				MEMBER(end_match_on_round_reset, server::ccsgame_rules, bool);
				MEMBER(end_match_on_think, server::ccsgame_rules, bool);
				MEMBER(freeze_time, server::ccsgame_rules, int);
				MEMBER(num_terrorist, server::ccsgame_rules, int);
				MEMBER(num_ct, server::ccsgame_rules, int);
				MEMBER(num_spawnable_terrorist, server::ccsgame_rules, int);
				MEMBER(num_spawnable_ct, server::ccsgame_rules, int);
				MEMBER(arr_selected_hostage_spawn_indices, server::ccsgame_rules, cutl_vector<int>);
				MEMBER(first_connected, server::ccsgame_rules, bool);
				MEMBER(complete_reset, server::ccsgame_rules, bool);
				MEMBER(pick_new_teams_on_reset, server::ccsgame_rules, bool);
				MEMBER(scramble_teams_on_restart, server::ccsgame_rules, bool);
				MEMBER(swap_teams_on_restart, server::ccsgame_rules, bool);
				MEMBER(end_match_tied_votes, server::ccsgame_rules, cutl_vector<int>);
				MEMBER(need_to_ask_players_for_continue_vote, server::ccsgame_rules, bool);
				MEMBER(num_queued_matchmaking_accounts, server::ccsgame_rules, uint32_t);
				MEMBER(queued_matchmaking_reservation_string_ptr, server::ccsgame_rules, char*);
				MEMBER(num_total_tournament_drops, server::ccsgame_rules, uint32_t);
				MEMBER(num_spectators_count_max, server::ccsgame_rules, uint32_t);
				MEMBER(num_spectators_count_max_tv, server::ccsgame_rules, uint32_t);
				MEMBER(num_spectators_count_max_lnk, server::ccsgame_rules, uint32_t);
				MEMBER(force_team_change_silent, server::ccsgame_rules, bool);
				MEMBER(loading_round_backup_data, server::ccsgame_rules, bool);
				MEMBER(match_info_show_type, server::ccsgame_rules, int);
				MEMBER(match_info_decided_time, server::ccsgame_rules, float);
				MEMBER(coop_respawn_and_heal_time, server::ccsgame_rules, float);
				MEMBER(coop_bonus_coins_found, server::ccsgame_rules, int);
				MEMBER(coop_bonus_pistols_only, server::ccsgame_rules, bool);
				MEMBER(coop_players_in_deployment_zone, server::ccsgame_rules, bool);
				MEMBER(coop_mission_dead_player_respawn_enabled, server::ccsgame_rules, bool);
				MEMBER(m_team_dmlast_winning_team_number, server::ccsgame_rules, int);
				MEMBER(m_team_dmlast_think_time, server::ccsgame_rules, float);
				MEMBER(team_dmlast_announcement_time, server::ccsgame_rules, float);
				MEMBER(account_terrorist, server::ccsgame_rules, int);
				MEMBER(account_ct, server::ccsgame_rules, int);
				MEMBER(spawn_point_count_terrorist, server::ccsgame_rules, int);
				MEMBER(spawn_point_count_ct, server::ccsgame_rules, int);
				MEMBER(max_num_terrorists, server::ccsgame_rules, int);
				MEMBER(max_num_cts, server::ccsgame_rules, int);
				MEMBER(loser_bonus, server::ccsgame_rules, int);
				MEMBER(loser_bonus_most_recent_team, server::ccsgame_rules, int);
				MEMBER(tm_next_periodic_think, server::ccsgame_rules, float);
				MEMBER(voice_won_match_brag_fired, server::ccsgame_rules, bool);
				MEMBER(warmup_next_chat_notice_time, server::ccsgame_rules, float);
				MEMBER(hostages_rescued, server::ccsgame_rules, int);
				MEMBER(hostages_touched, server::ccsgame_rules, int);
				MEMBER(next_hostage_announcement, server::ccsgame_rules, float);
				MEMBER(no_terrorists_killed, server::ccsgame_rules, bool);
				MEMBER(no_cts_killed, server::ccsgame_rules, bool);
				MEMBER(no_enemies_killed, server::ccsgame_rules, bool);
				MEMBER(can_donate_weapons, server::ccsgame_rules, bool);
				MEMBER(first_kill_time, server::ccsgame_rules, float);
				MEMBER(first_blood_time, server::ccsgame_rules, float);
				MEMBER(hostage_was_injured, server::ccsgame_rules, bool);
				MEMBER(hostage_was_killed, server::ccsgame_rules, bool);
				MEMBER(vote_called, server::ccsgame_rules, bool);
				MEMBER(server_vote_on_reset, server::ccsgame_rules, bool);
				MEMBER(vote_check_throttle, server::ccsgame_rules, float);
				MEMBER(buy_time_ended, server::ccsgame_rules, bool);
				MEMBER(last_freeze_end_beep, server::ccsgame_rules, int);
				MEMBER(target_bombed, server::ccsgame_rules, bool);
				MEMBER(bomb_defused, server::ccsgame_rules, bool);
				MEMBER(map_has_bomb_zone, server::ccsgame_rules, bool);
				MEMBER(vec_main_ctspawn_pos, server::ccsgame_rules, vector);
				MEMBER(ctspawn_points_master_list, server::ccsgame_rules, cutl_vector<spawn_point*>);
				MEMBER(terrorist_spawn_points_master_list, server::ccsgame_rules, cutl_vector<spawn_point*>);
				MEMBER(next_ctspawn_point, server::ccsgame_rules, int);
				MEMBER(next_terrorist_spawn_point, server::ccsgame_rules, int);
				MEMBER(ctspawn_points, server::ccsgame_rules, cutl_vector<spawn_point*>);
				MEMBER(terrorist_spawn_points, server::ccsgame_rules, cutl_vector<spawn_point*>);
				MEMBER(is_unreserved_game_server, server::ccsgame_rules, bool);
				MEMBER(autobalance_display_time, server::ccsgame_rules, float);
				MEMBER(allow_weapon_switch, server::ccsgame_rules, bool);
				MEMBER(round_time_warning_triggered, server::ccsgame_rules, bool);
				MEMBER(phase_change_announcement_time, server::ccsgame_rules, game_time_t);
				MEMBER(next_update_team_clan_names_time, server::ccsgame_rules, float);
				MEMBER(last_think_time, server::ccsgame_rules, game_time_t);
				MEMBER(accumulated_round_off_damage, server::ccsgame_rules, float);
				MEMBER(shorthanded_bonus_last_eval_round, server::ccsgame_rules, int);
				MEMBER(match_aborted_early_reason, server::ccsgame_rules, int);
				MEMBER(has_triggered_round_start_music, server::ccsgame_rules, bool);
				MEMBER(has_triggered_coop_spawn_reset, server::ccsgame_rules, bool);
				MEMBER(switching_teams_at_round_reset, server::ccsgame_rules, bool);
				MEMBER(game_mode_rules_ptr, server::ccsgame_rules, ccsgame_mode_rules*);
				MEMBER(bt_global_blackboard, server::ccsgame_rules, key_values3);
				MEMBER(h_player_resource, server::ccsgame_rules, chandle<cbase_entity>);
				MEMBER(retake_rules, server::ccsgame_rules, cretake_game_rules);
				MEMBER(guardian_bot_skill_level_max, server::ccsgame_rules, int);
				MEMBER(guardian_bot_skill_level_min, server::ccsgame_rules, int);
				MEMBER_ARR(arr_team_unique_kill_weapons_match_arr, server::ccsgame_rules, 4, cutl_vector<int>);
				MEMBER_ARR(team_last_kill_used_unique_weapon_match_arr, server::ccsgame_rules, 4, bool);
				MEMBER(match_end_count, server::ccsgame_rules, uint8_t);
				MEMBER(tteam_intro_variant, server::ccsgame_rules, int);
				MEMBER(ctteam_intro_variant, server::ccsgame_rules, int);
				MEMBER(team_intro_period, server::ccsgame_rules, bool);
				MEMBER(team_intro_period_end, server::ccsgame_rules, game_time_t);
				MEMBER(played_team_intro_vo, server::ccsgame_rules, bool);
				MEMBER(last_perf_sample_time, server::ccsgame_rules, double);
				MEMBER(skip_next_server_perf_sample, server::ccsgame_rules, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsgame_rules : public cteamplay_rules

			struct csper_round_stats_t
			{
				MEMBER(kills, server::csper_round_stats_t, int);
				MEMBER(deaths, server::csper_round_stats_t, int);
				MEMBER(assists, server::csper_round_stats_t, int);
				MEMBER(damage, server::csper_round_stats_t, int);
				MEMBER(equipment_value, server::csper_round_stats_t, int);
				MEMBER(money_saved, server::csper_round_stats_t, int);
				MEMBER(kill_reward, server::csper_round_stats_t, int);
				MEMBER(live_time, server::csper_round_stats_t, int);
				MEMBER(head_shot_kills, server::csper_round_stats_t, int);
				MEMBER(objective, server::csper_round_stats_t, int);
				MEMBER(cash_earned, server::csper_round_stats_t, int);
				MEMBER(utility_damage, server::csper_round_stats_t, int);
				MEMBER(enemies_flashed, server::csper_round_stats_t, int);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // struct csper_round_stats_t

			struct csmatch_stats_t : public csper_round_stats_t
			{
				MEMBER(enemy5_ks, server::csmatch_stats_t, int);
				MEMBER(enemy4_ks, server::csmatch_stats_t, int);
				MEMBER(enemy3_ks, server::csmatch_stats_t, int);
				MEMBER(enemy2_ks, server::csmatch_stats_t, int);
				MEMBER(utility_count, server::csmatch_stats_t, int);
				MEMBER(utility_successes, server::csmatch_stats_t, int);
				MEMBER(utility_enemies, server::csmatch_stats_t, int);
				MEMBER(flash_count, server::csmatch_stats_t, int);
				MEMBER(flash_successes, server::csmatch_stats_t, int);
				MEMBER(health_points_removed_total, server::csmatch_stats_t, int);
				MEMBER(health_points_dealt_total, server::csmatch_stats_t, int);
				MEMBER(shots_fired_total, server::csmatch_stats_t, int);
				MEMBER(shots_on_target_total, server::csmatch_stats_t, int);
				MEMBER(i1v1_count, server::csmatch_stats_t, int);
				MEMBER(i1v1_wins, server::csmatch_stats_t, int);
				MEMBER(i1v2_count, server::csmatch_stats_t, int);
				MEMBER(i1v2_wins, server::csmatch_stats_t, int);
				MEMBER(entry_count, server::csmatch_stats_t, int);
				MEMBER(entry_wins, server::csmatch_stats_t, int);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // struct csmatch_stats_t : public csper_round_stats_t

			class ccsgo_team_preview_character_position : public cbase_entity
			{
			public:
				MEMBER(variant, server::ccsgo_team_preview_character_position, int);
				MEMBER(random, server::ccsgo_team_preview_character_position, int);
				MEMBER(ordinal, server::ccsgo_team_preview_character_position, int);
				MEMBER(s_weapon_name, server::ccsgo_team_preview_character_position, cutl_string);
				MEMBER(xuid, server::ccsgo_team_preview_character_position, uint64_t);
				MEMBER(agent_item, server::ccsgo_team_preview_character_position, cecon_item_view);
				MEMBER(gloves_item, server::ccsgo_team_preview_character_position, cecon_item_view);
				MEMBER(weapon_item, server::ccsgo_team_preview_character_position, cecon_item_view);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsgo_team_preview_character_position : public cbase_entity

			class ccsgo_team_select_character_position : public ccsgo_team_preview_character_position
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsgo_team_select_character_position : public ccsgo_team_preview_character_position

			class ccsgo_team_select_terrorist_position : public ccsgo_team_select_character_position
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsgo_team_select_terrorist_position : public ccsgo_team_select_character_position

			class ccsgo_team_select_counter_terrorist_position : public ccsgo_team_select_character_position
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsgo_team_select_counter_terrorist_position : public ccsgo_team_select_character_position

			class ccsgo_team_intro_character_position : public ccsgo_team_preview_character_position
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsgo_team_intro_character_position : public ccsgo_team_preview_character_position

			class ccsgo_team_intro_terrorist_position : public ccsgo_team_intro_character_position
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsgo_team_intro_terrorist_position : public ccsgo_team_intro_character_position

			class ccsgo_team_intro_counter_terrorist_position : public ccsgo_team_intro_character_position
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsgo_team_intro_counter_terrorist_position : public ccsgo_team_intro_character_position

			class ccsgo_wingman_intro_character_position : public ccsgo_team_intro_character_position
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsgo_wingman_intro_character_position : public ccsgo_team_intro_character_position

			class ccsgo_wingman_intro_terrorist_position : public ccsgo_wingman_intro_character_position
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsgo_wingman_intro_terrorist_position : public ccsgo_wingman_intro_character_position

			class ccsgo_wingman_intro_counter_terrorist_position : public ccsgo_wingman_intro_character_position
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsgo_wingman_intro_counter_terrorist_position : public ccsgo_wingman_intro_character_position

			class ccsminimap_boundary : public cbase_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsminimap_boundary : public cbase_entity

			class cplayer_ping : public cbase_entity
			{
			public:
				MEMBER(h_player, server::cplayer_ping, chandle<ccsplayer_pawn>);
				MEMBER(h_pinged_entity, server::cplayer_ping, chandle<cbase_entity>);
				MEMBER(type, server::cplayer_ping, int);
				MEMBER(urgent, server::cplayer_ping, bool);
				MEMBER_ARR(place_name_arr, server::cplayer_ping, 18, char);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cplayer_ping : public cbase_entity

			class ccsplayer_ping_services : public cplayer_pawn_component
			{
			public:
				MEMBER_ARR(player_ping_tokens_arr, server::ccsplayer_ping_services, 5, game_time_t);
				MEMBER(h_player_ping, server::ccsplayer_ping_services, chandle<cbase_entity>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsplayer_ping_services : public cplayer_pawn_component

			class ccsplayer_resource : public cbase_entity
			{
			public:
				MEMBER_ARR(hostage_alive_arr, server::ccsplayer_resource, 12, bool);
				MEMBER_ARR(is_hostage_following_someone_arr, server::ccsplayer_resource, 12, bool);
				MEMBER_ARR(hostage_entity_ids_arr, server::ccsplayer_resource, 12, centity_index);
				MEMBER(bombsite_center_a, server::ccsplayer_resource, vector);
				MEMBER(bombsite_center_b, server::ccsplayer_resource, vector);
				MEMBER_ARR(hostage_rescue_x_arr, server::ccsplayer_resource, 4, int);
				MEMBER_ARR(hostage_rescue_y_arr, server::ccsplayer_resource, 4, int);
				MEMBER_ARR(hostage_rescue_z_arr, server::ccsplayer_resource, 4, int);
				MEMBER(end_match_next_map_all_voted, server::ccsplayer_resource, bool);
				MEMBER(found_goal_positions, server::ccsplayer_resource, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsplayer_resource : public cbase_entity

			class cplayer_view_model_services : public cplayer_pawn_component
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cplayer_view_model_services : public cplayer_pawn_component

			class ccsplayer_base_camera_services : public cplayer_camera_services
			{
			public:
				MEMBER(fov, server::ccsplayer_base_camera_services, uint32_t);
				MEMBER(fovstart, server::ccsplayer_base_camera_services, uint32_t);
				MEMBER(fovtime, server::ccsplayer_base_camera_services, game_time_t);
				MEMBER(fovrate, server::ccsplayer_base_camera_services, float);
				MEMBER(h_zoom_owner, server::ccsplayer_base_camera_services, chandle<cbase_entity>);
				MEMBER(h_trigger_fog_list, server::ccsplayer_base_camera_services, cutl_vector<chandle<cbase_entity>>);
				MEMBER(h_last_fog_trigger, server::ccsplayer_base_camera_services, chandle<cbase_entity>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsplayer_base_camera_services : public cplayer_camera_services

			struct weapon_purchase_count_t
			{
				MEMBER(item_def_index, server::weapon_purchase_count_t, uint16_t);
				MEMBER(count, server::weapon_purchase_count_t, uint16_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // struct weapon_purchase_count_t

			struct weapon_purchase_tracker_t
			{
				MEMBER(weapon_purchases, server::weapon_purchase_tracker_t, cutl_vector_embedded_network_var<weapon_purchase_count_t>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // struct weapon_purchase_tracker_t

			class ccsplayer_action_tracking_services : public cplayer_pawn_component
			{
			public:
				MEMBER(h_last_weapon_before_c4_auto_switch, server::ccsplayer_action_tracking_services, chandle<cbase_player_weapon>);
				MEMBER(is_rescuing, server::ccsplayer_action_tracking_services, bool);
				MEMBER(weapon_purchases_this_match, server::ccsplayer_action_tracking_services, weapon_purchase_tracker_t);
				MEMBER(weapon_purchases_this_round, server::ccsplayer_action_tracking_services, weapon_purchase_tracker_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsplayer_action_tracking_services : public cplayer_pawn_component

			class ccsplayer_bullet_services : public cplayer_pawn_component
			{
			public:
				MEMBER(total_hits_on_server, server::ccsplayer_bullet_services, int);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsplayer_bullet_services : public cplayer_pawn_component

			struct sellback_purchase_entry_t
			{
				MEMBER(un_def_idx, server::sellback_purchase_entry_t, uint16_t);
				MEMBER(cost, server::sellback_purchase_entry_t, int);
				MEMBER(prev_armor, server::sellback_purchase_entry_t, int);
				MEMBER(prev_helmet, server::sellback_purchase_entry_t, bool);
				MEMBER(h_item, server::sellback_purchase_entry_t, centity_handle);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // struct sellback_purchase_entry_t

			class ccsplayer_buy_services : public cplayer_pawn_component
			{
			public:
				MEMBER(vec_sellback_purchase_entries, server::ccsplayer_buy_services, cutl_vector_embedded_network_var<sellback_purchase_entry_t>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsplayer_buy_services : public cplayer_pawn_component

			class ccsplayer_camera_services : public ccsplayer_base_camera_services
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsplayer_camera_services : public ccsplayer_base_camera_services

			class ccsplayer_hostage_services : public cplayer_pawn_component
			{
			public:
				MEMBER(h_carried_hostage, server::ccsplayer_hostage_services, chandle<cbase_entity>);
				MEMBER(h_carried_hostage_prop, server::ccsplayer_hostage_services, chandle<cbase_entity>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsplayer_hostage_services : public cplayer_pawn_component

			class ccsplayer_item_services : public cplayer_item_services
			{
			public:
				MEMBER(has_defuser, server::ccsplayer_item_services, bool);
				MEMBER(has_helmet, server::ccsplayer_item_services, bool);
				MEMBER(has_heavy_armor, server::ccsplayer_item_services, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsplayer_item_services : public cplayer_item_services

			class ccsplayer_movement_services : public cplayer_movement_services_humanoid
			{
			public:
				MEMBER(max_fall_velocity, server::ccsplayer_movement_services, float);
				MEMBER(vec_ladder_normal, server::ccsplayer_movement_services, vector);
				MEMBER(ladder_surface_prop_index, server::ccsplayer_movement_services, int);
				MEMBER(duck_amount, server::ccsplayer_movement_services, float);
				MEMBER(duck_speed, server::ccsplayer_movement_services, float);
				MEMBER(duck_override, server::ccsplayer_movement_services, bool);
				MEMBER(desires_duck, server::ccsplayer_movement_services, bool);
				MEMBER(duck_offset, server::ccsplayer_movement_services, float);
				MEMBER(duck_time_msecs, server::ccsplayer_movement_services, uint32_t);
				MEMBER(duck_jump_time_msecs, server::ccsplayer_movement_services, uint32_t);
				MEMBER(jump_time_msecs, server::ccsplayer_movement_services, uint32_t);
				MEMBER(last_duck_time, server::ccsplayer_movement_services, float);
				MEMBER(vec_last_position_at_full_crouch_speed, server::ccsplayer_movement_services, vector2d);
				MEMBER(duck_until_on_ground, server::ccsplayer_movement_services, bool);
				MEMBER(has_walk_moved_since_last_jump, server::ccsplayer_movement_services, bool);
				MEMBER(in_stuck_test, server::ccsplayer_movement_services, bool);
				MEMBER_ARR(stuck_check_time_arr, server::ccsplayer_movement_services, 128, float);
				MEMBER(trace_count, server::ccsplayer_movement_services, int);
				MEMBER(stuck_last, server::ccsplayer_movement_services, int);
				MEMBER(speed_cropped, server::ccsplayer_movement_services, bool);
				MEMBER(old_water_level, server::ccsplayer_movement_services, int);
				MEMBER(water_entry_time, server::ccsplayer_movement_services, float);
				MEMBER(vec_forward, server::ccsplayer_movement_services, vector);
				MEMBER(vec_left, server::ccsplayer_movement_services, vector);
				MEMBER(vec_up, server::ccsplayer_movement_services, vector);
				MEMBER(vec_previously_predicted_origin, server::ccsplayer_movement_services, vector);
				MEMBER(made_footstep_noise, server::ccsplayer_movement_services, bool);
				MEMBER(footsteps, server::ccsplayer_movement_services, int);
				MEMBER(old_jump_pressed, server::ccsplayer_movement_services, bool);
				MEMBER(jump_pressed_time, server::ccsplayer_movement_services, float);
				MEMBER(jump_until, server::ccsplayer_movement_services, float);
				MEMBER(jump_vel, server::ccsplayer_movement_services, float);
				MEMBER(stash_grenade_parameter_when, server::ccsplayer_movement_services, game_time_t);
				MEMBER(button_down_mask_prev, server::ccsplayer_movement_services, uint64_t);
				MEMBER(offset_tick_complete_time, server::ccsplayer_movement_services, float);
				MEMBER(offset_tick_stashed_speed, server::ccsplayer_movement_services, float);
				MEMBER(stamina, server::ccsplayer_movement_services, float);
				MEMBER(height_at_jump_start, server::ccsplayer_movement_services, float);
				MEMBER(max_jump_height_this_jump, server::ccsplayer_movement_services, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsplayer_movement_services : public cplayer_movement_services_humanoid

			class ccsplayer_use_services : public cplayer_use_services
			{
			public:
				MEMBER(h_last_known_use_entity, server::ccsplayer_use_services, chandle<cbase_entity>);
				MEMBER(last_use_time_stamp, server::ccsplayer_use_services, game_time_t);
				MEMBER(time_started_holding_use, server::ccsplayer_use_services, game_time_t);
				MEMBER(time_last_used_window, server::ccsplayer_use_services, game_time_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsplayer_use_services : public cplayer_use_services

			class ccsplayer_view_model_services : public cplayer_view_model_services
			{
			public:
				MEMBER_ARR(h_view_model_arr, server::ccsplayer_view_model_services, 3, chandle<cbase_view_model>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsplayer_view_model_services : public cplayer_view_model_services

			class ccsplayer_water_services : public cplayer_water_services
			{
			public:
				MEMBER(next_drown_damage_time, server::ccsplayer_water_services, float);
				MEMBER(drown_dmg_rate, server::ccsplayer_water_services, int);
				MEMBER(air_finished_time, server::ccsplayer_water_services, game_time_t);
				MEMBER(water_jump_time, server::ccsplayer_water_services, float);
				MEMBER(vec_water_jump_vel, server::ccsplayer_water_services, vector);
				MEMBER(swim_sound_time, server::ccsplayer_water_services, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsplayer_water_services : public cplayer_water_services

			class ccsplayer_weapon_services : public cplayer_weapon_services
			{
			public:
				MEMBER(next_attack, server::ccsplayer_weapon_services, game_time_t);
				MEMBER(is_looking_at_weapon, server::ccsplayer_weapon_services, bool);
				MEMBER(is_holding_look_at_weapon, server::ccsplayer_weapon_services, bool);
				MEMBER(h_saved_weapon, server::ccsplayer_weapon_services, chandle<cbase_player_weapon>);
				MEMBER(time_to_melee, server::ccsplayer_weapon_services, int);
				MEMBER(time_to_secondary, server::ccsplayer_weapon_services, int);
				MEMBER(time_to_primary, server::ccsplayer_weapon_services, int);
				MEMBER(time_to_sniper_rifle, server::ccsplayer_weapon_services, int);
				MEMBER(is_being_given_item, server::ccsplayer_weapon_services, bool);
				MEMBER(is_picking_up_item_with_use, server::ccsplayer_weapon_services, bool);
				MEMBER(picked_up_weapon, server::ccsplayer_weapon_services, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsplayer_weapon_services : public cplayer_weapon_services

			class ccsobserver_observer_services : public cplayer_observer_services
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsobserver_observer_services : public cplayer_observer_services

			class ccsobserver_camera_services : public ccsplayer_base_camera_services
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsobserver_camera_services : public ccsplayer_base_camera_services

			class ccsobserver_movement_services : public cplayer_movement_services
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsobserver_movement_services : public cplayer_movement_services

			class ccsobserver_use_services : public cplayer_use_services
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsobserver_use_services : public cplayer_use_services

			class ccsobserver_view_model_services : public cplayer_view_model_services
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsobserver_view_model_services : public cplayer_view_model_services

			class ccsplayer_controller_action_tracking_services : public cplayer_controller_component
			{
			public:
				MEMBER(per_round_stats, server::ccsplayer_controller_action_tracking_services, cutl_vector_embedded_network_var<csper_round_stats_t>);
				MEMBER(match_stats, server::ccsplayer_controller_action_tracking_services, csmatch_stats_t);
				MEMBER(num_round_kills, server::ccsplayer_controller_action_tracking_services, int);
				MEMBER(num_round_kills_headshots, server::ccsplayer_controller_action_tracking_services, int);
				MEMBER(un_total_round_damage_dealt, server::ccsplayer_controller_action_tracking_services, uint32_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsplayer_controller_action_tracking_services : public cplayer_controller_component

			class cdamage_record
			{
			public:
				MEMBER(player_damager, server::cdamage_record, chandle<ccsplayer_pawn_base>);
				MEMBER(player_recipient, server::cdamage_record, chandle<ccsplayer_pawn_base>);
				MEMBER(h_player_controller_damager, server::cdamage_record, chandle<ccsplayer_controller>);
				MEMBER(h_player_controller_recipient, server::cdamage_record, chandle<ccsplayer_controller>);
				MEMBER(player_damager_name, server::cdamage_record, cutl_string);
				MEMBER(player_recipient_name, server::cdamage_record, cutl_string);
				MEMBER(damager_xuid, server::cdamage_record, uint64_t);
				MEMBER(recipient_xuid, server::cdamage_record, uint64_t);
				MEMBER(damage, server::cdamage_record, int);
				MEMBER(actual_health_removed, server::cdamage_record, int);
				MEMBER(num_hits, server::cdamage_record, int);
				MEMBER(last_bullet_update, server::cdamage_record, int);
				MEMBER(is_other_enemy, server::cdamage_record, bool);
				MEMBER(kill_type, server::cdamage_record, ekill_types_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cdamage_record

			class ccsplayer_controller_damage_services : public cplayer_controller_component
			{
			public:
				MEMBER(send_update, server::ccsplayer_controller_damage_services, int);
				MEMBER(damage_list, server::ccsplayer_controller_damage_services, cutl_vector_embedded_network_var<cdamage_record>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsplayer_controller_damage_services : public cplayer_controller_component

			class ccsplayer_controller_in_game_money_services : public cplayer_controller_component
			{
			public:
				MEMBER(receives_money_next_round, server::ccsplayer_controller_in_game_money_services, bool);
				MEMBER(account_money_earned_for_next_round, server::ccsplayer_controller_in_game_money_services, int);
				MEMBER(account, server::ccsplayer_controller_in_game_money_services, int);
				MEMBER(start_account, server::ccsplayer_controller_in_game_money_services, int);
				MEMBER(total_cash_spent, server::ccsplayer_controller_in_game_money_services, int);
				MEMBER(cash_spent_this_round, server::ccsplayer_controller_in_game_money_services, int);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsplayer_controller_in_game_money_services : public cplayer_controller_component

			struct server_authoritative_weapon_slot_t
			{
				MEMBER(un_class, server::server_authoritative_weapon_slot_t, uint16_t);
				MEMBER(un_slot, server::server_authoritative_weapon_slot_t, uint16_t);
				MEMBER(un_item_def_idx, server::server_authoritative_weapon_slot_t, uint16_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // struct server_authoritative_weapon_slot_t

			class ccsplayer_controller_inventory_services : public cplayer_controller_component
			{
			public:
				MEMBER(un_music_id, server::ccsplayer_controller_inventory_services, uint16_t);
				MEMBER_ARR(rank_arr, server::ccsplayer_controller_inventory_services, 6, medal_rank_t);
				MEMBER(persona_data_public_level, server::ccsplayer_controller_inventory_services, int);
				MEMBER(persona_data_public_commends_leader, server::ccsplayer_controller_inventory_services, int);
				MEMBER(persona_data_public_commends_teacher, server::ccsplayer_controller_inventory_services, int);
				MEMBER(persona_data_public_commends_friendly, server::ccsplayer_controller_inventory_services, int);
				MEMBER_ARR(un_equipped_player_spray_ids_arr, server::ccsplayer_controller_inventory_services, 1, uint32_t);
				MEMBER(vec_server_authoritative_weapon_slots, server::ccsplayer_controller_inventory_services, cutl_vector_embedded_network_var<server_authoritative_weapon_slot_t>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsplayer_controller_inventory_services : public cplayer_controller_component

			class ccsplayer_damage_react_services : public cplayer_pawn_component
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsplayer_damage_react_services : public cplayer_pawn_component

			class ccsplayer_radio_services : public cplayer_pawn_component
			{
			public:
				MEMBER(got_hostage_talk_timer, server::ccsplayer_radio_services, game_time_t);
				MEMBER(defusing_talk_timer, server::ccsplayer_radio_services, game_time_t);
				MEMBER(c4_plant_talk_timer, server::ccsplayer_radio_services, game_time_t);
				MEMBER_ARR(radio_token_slots_arr, server::ccsplayer_radio_services, 3, game_time_t);
				MEMBER(ignore_radio, server::ccsplayer_radio_services, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsplayer_radio_services : public cplayer_pawn_component

			class cvote_controller : public cbase_entity
			{
			public:
				MEMBER(active_issue_index, server::cvote_controller, int);
				MEMBER(only_team_to_vote, server::cvote_controller, int);
				MEMBER_ARR(vote_option_count_arr, server::cvote_controller, 5, int);
				MEMBER(potential_votes, server::cvote_controller, int);
				MEMBER(is_yes_no_vote, server::cvote_controller, bool);
				MEMBER(accepting_votes_timer, server::cvote_controller, countdown_timer);
				MEMBER(execute_command_timer, server::cvote_controller, countdown_timer);
				MEMBER(reset_vote_timer, server::cvote_controller, countdown_timer);
				MEMBER_ARR(votes_cast_arr, server::cvote_controller, 64, int);
				MEMBER(player_holding_vote, server::cvote_controller, cplayer_slot);
				MEMBER(player_override_for_vote, server::cvote_controller, cplayer_slot);
				MEMBER(highest_count_index, server::cvote_controller, int);
				MEMBER(potential_issues, server::cvote_controller, cutl_vector<cbase_issue*>);
				MEMBER(vote_options, server::cvote_controller, cutl_vector<char*>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cvote_controller : public cbase_entity

			class cmap_veto_pick_controller : public cbase_entity
			{
			public:
				MEMBER(played_intro_vcd, server::cmap_veto_pick_controller, bool);
				MEMBER(need_to_play_five_seconds_remaining, server::cmap_veto_pick_controller, bool);
				MEMBER(dbl_pre_match_draft_sequence_time, server::cmap_veto_pick_controller, double);
				MEMBER(pre_match_draft_state_changed, server::cmap_veto_pick_controller, bool);
				MEMBER(draft_type, server::cmap_veto_pick_controller, int);
				MEMBER(team_winning_coin_toss, server::cmap_veto_pick_controller, int);
				MEMBER_ARR(team_with_first_choice_arr, server::cmap_veto_pick_controller, 64, int);
				MEMBER_ARR(vote_map_ids_list_arr, server::cmap_veto_pick_controller, 7, int);
				MEMBER_ARR(account_ids_arr, server::cmap_veto_pick_controller, 64, int);
				MEMBER_ARR(map_id0_arr, server::cmap_veto_pick_controller, 64, int);
				MEMBER_ARR(map_id1_arr, server::cmap_veto_pick_controller, 64, int);
				MEMBER_ARR(map_id2_arr, server::cmap_veto_pick_controller, 64, int);
				MEMBER_ARR(map_id3_arr, server::cmap_veto_pick_controller, 64, int);
				MEMBER_ARR(map_id4_arr, server::cmap_veto_pick_controller, 64, int);
				MEMBER_ARR(map_id5_arr, server::cmap_veto_pick_controller, 64, int);
				MEMBER_ARR(starting_side0_arr, server::cmap_veto_pick_controller, 64, int);
				MEMBER(current_phase, server::cmap_veto_pick_controller, int);
				MEMBER(phase_start_tick, server::cmap_veto_pick_controller, int);
				MEMBER(phase_duration_ticks, server::cmap_veto_pick_controller, int);
				MEMBER(on_map_vetoed, server::cmap_veto_pick_controller, centity_output_template<cutl_symbol_large>);
				MEMBER(on_map_picked, server::cmap_veto_pick_controller, centity_output_template<cutl_symbol_large>);
				MEMBER(on_sides_picked, server::cmap_veto_pick_controller, centity_output_template<int>);
				MEMBER(on_new_phase_started, server::cmap_veto_pick_controller, centity_output_template<int>);
				MEMBER(on_level_transition, server::cmap_veto_pick_controller, centity_output_template<int>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cmap_veto_pick_controller : public cbase_entity

			class clogic_event_listener : public clogical_entity
			{
			public:
				MEMBER(str_event_name, server::clogic_event_listener, cutl_string);
				MEMBER(is_enabled, server::clogic_event_listener, bool);
				MEMBER(team, server::clogic_event_listener, int);
				MEMBER(on_event_fired, server::clogic_event_listener, centity_iooutput);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class clogic_event_listener : public clogical_entity

			class cbot
			{
			public:
				MEMBER(controller_ptr, server::cbot, ccsplayer_controller*);
				MEMBER(player_ptr, server::cbot, ccsplayer_pawn*);
				MEMBER(has_spawned, server::cbot, bool);
				MEMBER(id, server::cbot, uint32_t);
				MEMBER(is_running, server::cbot, bool);
				MEMBER(is_crouching, server::cbot, bool);
				MEMBER(forward_speed, server::cbot, float);
				MEMBER(left_speed, server::cbot, float);
				MEMBER(vertical_speed, server::cbot, float);
				MEMBER(button_flags, server::cbot, uint64_t);
				MEMBER(jump_timestamp, server::cbot, float);
				MEMBER(view_forward, server::cbot, vector);
				MEMBER(posture_stack_index, server::cbot, int);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbot

			class cbt_action_aim : public cbt_node
			{
			public:
				MEMBER(sensor_input_key, server::cbt_action_aim, cutl_string);
				MEMBER(aim_ready_key, server::cbt_action_aim, cutl_string);
				MEMBER(zoom_cooldown_timestamp, server::cbt_action_aim, float);
				MEMBER(done_aiming, server::cbt_action_aim, bool);
				MEMBER(lerp_start_time, server::cbt_action_aim, float);
				MEMBER(next_look_target_lerp_time, server::cbt_action_aim, float);
				MEMBER(penalty_reduction_ratio, server::cbt_action_aim, float);
				MEMBER(next_look_target, server::cbt_action_aim, qangle);
				MEMBER(aim_timer, server::cbt_action_aim, countdown_timer);
				MEMBER(sniper_hold_timer, server::cbt_action_aim, countdown_timer);
				MEMBER(focus_interval_timer, server::cbt_action_aim, countdown_timer);
				MEMBER(acquired, server::cbt_action_aim, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbt_action_aim : public cbt_node

			class cbt_action_combat_positioning : public cbt_node
			{
			public:
				MEMBER(sensor_input_key, server::cbt_action_combat_positioning, cutl_string);
				MEMBER(is_attacking_key, server::cbt_action_combat_positioning, cutl_string);
				MEMBER(action_timer, server::cbt_action_combat_positioning, countdown_timer);
				MEMBER(crouching, server::cbt_action_combat_positioning, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbt_action_combat_positioning : public cbt_node

			class cbt_action_move_to : public cbt_node
			{
			public:
				MEMBER(destination_input_key, server::cbt_action_move_to, cutl_string);
				MEMBER(hiding_spot_input_key, server::cbt_action_move_to, cutl_string);
				MEMBER(threat_input_key, server::cbt_action_move_to, cutl_string);
				MEMBER(vec_destination, server::cbt_action_move_to, vector);
				MEMBER(auto_look_adjust, server::cbt_action_move_to, bool);
				MEMBER(compute_path, server::cbt_action_move_to, bool);
				MEMBER(damaging_areas_penalty_cost, server::cbt_action_move_to, float);
				MEMBER(check_approximate_corners_timer, server::cbt_action_move_to, countdown_timer);
				MEMBER(check_high_priority_item, server::cbt_action_move_to, countdown_timer);
				MEMBER(repath_timer, server::cbt_action_move_to, countdown_timer);
				MEMBER(arrival_epsilon, server::cbt_action_move_to, float);
				MEMBER(additional_arrival_epsilon2d, server::cbt_action_move_to, float);
				MEMBER(hiding_spot_check_distance_threshold, server::cbt_action_move_to, float);
				MEMBER(nearest_area_distance_threshold, server::cbt_action_move_to, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbt_action_move_to : public cbt_node

			class cbt_action_parachute_positioning : public cbt_node
			{
			public:
				MEMBER(action_timer, server::cbt_action_parachute_positioning, countdown_timer);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbt_action_parachute_positioning : public cbt_node

			class cbt_node_condition : public cbt_node_decorator
			{
			public:
				MEMBER(negated, server::cbt_node_condition, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbt_node_condition : public cbt_node_decorator

			class cbt_node_condition_inactive : public cbt_node_condition
			{
			public:
				MEMBER(round_start_threshold_seconds, server::cbt_node_condition_inactive, float);
				MEMBER(sensor_inactivity_threshold_seconds, server::cbt_node_condition_inactive, float);
				MEMBER(sensor_inactivity_timer, server::cbt_node_condition_inactive, countdown_timer);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbt_node_condition_inactive : public cbt_node_condition

			class cpoint_entity : public cbase_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cpoint_entity : public cbase_entity

			class cenv_combined_light_probe_volume : public cbase_entity
			{
			public:
				MEMBER(color, server::cenv_combined_light_probe_volume, color);
				MEMBER(brightness, server::cenv_combined_light_probe_volume, float);
				MEMBER(h_cubemap_texture, server::cenv_combined_light_probe_volume, cstrong_handle<info_for_resource_type_ctexture_base>);
				MEMBER(custom_cubemap_texture, server::cenv_combined_light_probe_volume, bool);
				MEMBER(h_light_probe_texture, server::cenv_combined_light_probe_volume, cstrong_handle<info_for_resource_type_ctexture_base>);
				MEMBER(h_light_probe_direct_light_indices_texture, server::cenv_combined_light_probe_volume, cstrong_handle<info_for_resource_type_ctexture_base>);
				MEMBER(h_light_probe_direct_light_scalars_texture, server::cenv_combined_light_probe_volume, cstrong_handle<info_for_resource_type_ctexture_base>);
				MEMBER(h_light_probe_direct_light_shadows_texture, server::cenv_combined_light_probe_volume, cstrong_handle<info_for_resource_type_ctexture_base>);
				MEMBER(v_box_mins, server::cenv_combined_light_probe_volume, vector);
				MEMBER(v_box_maxs, server::cenv_combined_light_probe_volume, vector);
				MEMBER(moveable, server::cenv_combined_light_probe_volume, bool);
				MEMBER(handshake, server::cenv_combined_light_probe_volume, int);
				MEMBER(env_cube_map_array_index, server::cenv_combined_light_probe_volume, int);
				MEMBER(priority, server::cenv_combined_light_probe_volume, int);
				MEMBER(start_disabled, server::cenv_combined_light_probe_volume, bool);
				MEMBER(edge_fade_dist, server::cenv_combined_light_probe_volume, float);
				MEMBER(v_edge_fade_dists, server::cenv_combined_light_probe_volume, vector);
				MEMBER(light_probe_size_x, server::cenv_combined_light_probe_volume, int);
				MEMBER(light_probe_size_y, server::cenv_combined_light_probe_volume, int);
				MEMBER(light_probe_size_z, server::cenv_combined_light_probe_volume, int);
				MEMBER(light_probe_atlas_x, server::cenv_combined_light_probe_volume, int);
				MEMBER(light_probe_atlas_y, server::cenv_combined_light_probe_volume, int);
				MEMBER(light_probe_atlas_z, server::cenv_combined_light_probe_volume, int);
				MEMBER(enabled, server::cenv_combined_light_probe_volume, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cenv_combined_light_probe_volume : public cbase_entity

			class cenv_cubemap : public cbase_entity
			{
			public:
				MEMBER(h_cubemap_texture, server::cenv_cubemap, cstrong_handle<info_for_resource_type_ctexture_base>);
				MEMBER(custom_cubemap_texture, server::cenv_cubemap, bool);
				MEMBER(influence_radius, server::cenv_cubemap, float);
				MEMBER(v_box_project_mins, server::cenv_cubemap, vector);
				MEMBER(v_box_project_maxs, server::cenv_cubemap, vector);
				MEMBER(moveable, server::cenv_cubemap, bool);
				MEMBER(handshake, server::cenv_cubemap, int);
				MEMBER(env_cube_map_array_index, server::cenv_cubemap, int);
				MEMBER(priority, server::cenv_cubemap, int);
				MEMBER(edge_fade_dist, server::cenv_cubemap, float);
				MEMBER(v_edge_fade_dists, server::cenv_cubemap, vector);
				MEMBER(diffuse_scale, server::cenv_cubemap, float);
				MEMBER(start_disabled, server::cenv_cubemap, bool);
				MEMBER(default_env_map, server::cenv_cubemap, bool);
				MEMBER(default_spec_env_map, server::cenv_cubemap, bool);
				MEMBER(indoor_cube_map, server::cenv_cubemap, bool);
				MEMBER(copy_diffuse_from_default_cubemap, server::cenv_cubemap, bool);
				MEMBER(enabled, server::cenv_cubemap, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cenv_cubemap : public cbase_entity

			class cenv_cubemap_box : public cenv_cubemap
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cenv_cubemap_box : public cenv_cubemap

			class cenv_cubemap_fog : public cbase_entity
			{
			public:
				MEMBER(end_distance, server::cenv_cubemap_fog, float);
				MEMBER(start_distance, server::cenv_cubemap_fog, float);
				MEMBER(fog_falloff_exponent, server::cenv_cubemap_fog, float);
				MEMBER(height_fog_enabled, server::cenv_cubemap_fog, bool);
				MEMBER(fog_height_width, server::cenv_cubemap_fog, float);
				MEMBER(fog_height_end, server::cenv_cubemap_fog, float);
				MEMBER(fog_height_start, server::cenv_cubemap_fog, float);
				MEMBER(fog_height_exponent, server::cenv_cubemap_fog, float);
				MEMBER(lodbias, server::cenv_cubemap_fog, float);
				MEMBER(active, server::cenv_cubemap_fog, bool);
				MEMBER(start_disabled, server::cenv_cubemap_fog, bool);
				MEMBER(fog_max_opacity, server::cenv_cubemap_fog, float);
				MEMBER(cubemap_source_type, server::cenv_cubemap_fog, int);
				MEMBER(h_sky_material, server::cenv_cubemap_fog, cstrong_handle<info_for_resource_type_imaterial2>);
				MEMBER(isz_sky_entity, server::cenv_cubemap_fog, cutl_symbol_large);
				MEMBER(h_fog_cubemap_texture, server::cenv_cubemap_fog, cstrong_handle<info_for_resource_type_ctexture_base>);
				MEMBER(has_height_fog_end, server::cenv_cubemap_fog, bool);
				MEMBER(first_time, server::cenv_cubemap_fog, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cenv_cubemap_fog : public cbase_entity

			class cgradient_fog : public cbase_entity
			{
			public:
				MEMBER(h_gradient_fog_texture, server::cgradient_fog, cstrong_handle<info_for_resource_type_ctexture_base>);
				MEMBER(fog_start_distance, server::cgradient_fog, float);
				MEMBER(fog_end_distance, server::cgradient_fog, float);
				MEMBER(height_fog_enabled, server::cgradient_fog, bool);
				MEMBER(fog_start_height, server::cgradient_fog, float);
				MEMBER(fog_end_height, server::cgradient_fog, float);
				MEMBER(far_z, server::cgradient_fog, float);
				MEMBER(fog_max_opacity, server::cgradient_fog, float);
				MEMBER(fog_falloff_exponent, server::cgradient_fog, float);
				MEMBER(fog_vertical_exponent, server::cgradient_fog, float);
				MEMBER(fog_color, server::cgradient_fog, color);
				MEMBER(fog_strength, server::cgradient_fog, float);
				MEMBER(fade_time, server::cgradient_fog, float);
				MEMBER(start_disabled, server::cgradient_fog, bool);
				MEMBER(is_enabled, server::cgradient_fog, bool);
				MEMBER(gradient_fog_needs_textures, server::cgradient_fog, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cgradient_fog : public cbase_entity

			class cenv_light_probe_volume : public cbase_entity
			{
			public:
				MEMBER(h_light_probe_texture, server::cenv_light_probe_volume, cstrong_handle<info_for_resource_type_ctexture_base>);
				MEMBER(h_light_probe_direct_light_indices_texture, server::cenv_light_probe_volume, cstrong_handle<info_for_resource_type_ctexture_base>);
				MEMBER(h_light_probe_direct_light_scalars_texture, server::cenv_light_probe_volume, cstrong_handle<info_for_resource_type_ctexture_base>);
				MEMBER(h_light_probe_direct_light_shadows_texture, server::cenv_light_probe_volume, cstrong_handle<info_for_resource_type_ctexture_base>);
				MEMBER(v_box_mins, server::cenv_light_probe_volume, vector);
				MEMBER(v_box_maxs, server::cenv_light_probe_volume, vector);
				MEMBER(moveable, server::cenv_light_probe_volume, bool);
				MEMBER(handshake, server::cenv_light_probe_volume, int);
				MEMBER(priority, server::cenv_light_probe_volume, int);
				MEMBER(start_disabled, server::cenv_light_probe_volume, bool);
				MEMBER(light_probe_size_x, server::cenv_light_probe_volume, int);
				MEMBER(light_probe_size_y, server::cenv_light_probe_volume, int);
				MEMBER(light_probe_size_z, server::cenv_light_probe_volume, int);
				MEMBER(light_probe_atlas_x, server::cenv_light_probe_volume, int);
				MEMBER(light_probe_atlas_y, server::cenv_light_probe_volume, int);
				MEMBER(light_probe_atlas_z, server::cenv_light_probe_volume, int);
				MEMBER(enabled, server::cenv_light_probe_volume, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cenv_light_probe_volume : public cbase_entity

			class cplayer_visibility : public cbase_entity
			{
			public:
				MEMBER(visibility_strength, server::cplayer_visibility, float);
				MEMBER(fog_distance_multiplier, server::cplayer_visibility, float);
				MEMBER(fog_max_density_multiplier, server::cplayer_visibility, float);
				MEMBER(fade_time, server::cplayer_visibility, float);
				MEMBER(start_disabled, server::cplayer_visibility, bool);
				MEMBER(is_enabled, server::cplayer_visibility, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cplayer_visibility : public cbase_entity

			class ctonemap_controller2 : public cbase_entity
			{
			public:
				MEMBER(auto_exposure_min, server::ctonemap_controller2, float);
				MEMBER(auto_exposure_max, server::ctonemap_controller2, float);
				MEMBER(tonemap_percent_target, server::ctonemap_controller2, float);
				MEMBER(tonemap_percent_bright_pixels, server::ctonemap_controller2, float);
				MEMBER(tonemap_min_avg_lum, server::ctonemap_controller2, float);
				MEMBER(exposure_adaptation_speed_up, server::ctonemap_controller2, float);
				MEMBER(exposure_adaptation_speed_down, server::ctonemap_controller2, float);
				MEMBER(tonemap_evsmoothing_range, server::ctonemap_controller2, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ctonemap_controller2 : public cbase_entity

			class cenv_volumetric_fog_controller : public cbase_entity
			{
			public:
				MEMBER(scattering, server::cenv_volumetric_fog_controller, float);
				MEMBER(anisotropy, server::cenv_volumetric_fog_controller, float);
				MEMBER(fade_speed, server::cenv_volumetric_fog_controller, float);
				MEMBER(draw_distance, server::cenv_volumetric_fog_controller, float);
				MEMBER(fade_in_start, server::cenv_volumetric_fog_controller, float);
				MEMBER(fade_in_end, server::cenv_volumetric_fog_controller, float);
				MEMBER(indirect_strength, server::cenv_volumetric_fog_controller, float);
				MEMBER(indirect_texture_dim_x, server::cenv_volumetric_fog_controller, int);
				MEMBER(indirect_texture_dim_y, server::cenv_volumetric_fog_controller, int);
				MEMBER(indirect_texture_dim_z, server::cenv_volumetric_fog_controller, int);
				MEMBER(v_box_mins, server::cenv_volumetric_fog_controller, vector);
				MEMBER(v_box_maxs, server::cenv_volumetric_fog_controller, vector);
				MEMBER(active, server::cenv_volumetric_fog_controller, bool);
				MEMBER(start_aniso_time, server::cenv_volumetric_fog_controller, game_time_t);
				MEMBER(start_scatter_time, server::cenv_volumetric_fog_controller, game_time_t);
				MEMBER(start_draw_distance_time, server::cenv_volumetric_fog_controller, game_time_t);
				MEMBER(start_anisotropy, server::cenv_volumetric_fog_controller, float);
				MEMBER(start_scattering, server::cenv_volumetric_fog_controller, float);
				MEMBER(start_draw_distance, server::cenv_volumetric_fog_controller, float);
				MEMBER(default_anisotropy, server::cenv_volumetric_fog_controller, float);
				MEMBER(default_scattering, server::cenv_volumetric_fog_controller, float);
				MEMBER(default_draw_distance, server::cenv_volumetric_fog_controller, float);
				MEMBER(start_disabled, server::cenv_volumetric_fog_controller, bool);
				MEMBER(enable_indirect, server::cenv_volumetric_fog_controller, bool);
				MEMBER(is_master, server::cenv_volumetric_fog_controller, bool);
				MEMBER(h_fog_indirect_texture, server::cenv_volumetric_fog_controller, cstrong_handle<info_for_resource_type_ctexture_base>);
				MEMBER(force_refresh_count, server::cenv_volumetric_fog_controller, int);
				MEMBER(first_time, server::cenv_volumetric_fog_controller, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cenv_volumetric_fog_controller : public cbase_entity

			class cenv_volumetric_fog_volume : public cbase_entity
			{
			public:
				MEMBER(active, server::cenv_volumetric_fog_volume, bool);
				MEMBER(v_box_mins, server::cenv_volumetric_fog_volume, vector);
				MEMBER(v_box_maxs, server::cenv_volumetric_fog_volume, vector);
				MEMBER(start_disabled, server::cenv_volumetric_fog_volume, bool);
				MEMBER(strength, server::cenv_volumetric_fog_volume, float);
				MEMBER(falloff_shape, server::cenv_volumetric_fog_volume, int);
				MEMBER(falloff_exponent, server::cenv_volumetric_fog_volume, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cenv_volumetric_fog_volume : public cbase_entity

			class cfog_controller : public cbase_entity
			{
			public:
				MEMBER(fog, server::cfog_controller, fogparams_t);
				MEMBER(use_angles, server::cfog_controller, bool);
				MEMBER(changed_variables, server::cfog_controller, int);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cfog_controller : public cbase_entity

			class cinfo_target : public cpoint_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cinfo_target : public cpoint_entity

			class cinfo_target_server_only : public cserver_only_point_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cinfo_target_server_only : public cserver_only_point_entity

			class cinfo_particle_target : public cpoint_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cinfo_particle_target : public cpoint_entity

			class cinfo_visibility_box : public cbase_entity
			{
			public:
				MEMBER(mode, server::cinfo_visibility_box, int);
				MEMBER(v_box_size, server::cinfo_visibility_box, vector);
				MEMBER(enabled, server::cinfo_visibility_box, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cinfo_visibility_box : public cbase_entity

			class cinfo_world_layer : public cbase_entity
			{
			public:
				MEMBER(output_on_entities_spawned, server::cinfo_world_layer, centity_iooutput);
				MEMBER(world_name, server::cinfo_world_layer, cutl_symbol_large);
				MEMBER(layer_name, server::cinfo_world_layer, cutl_symbol_large);
				MEMBER(world_layer_visible, server::cinfo_world_layer, bool);
				MEMBER(entities_spawned, server::cinfo_world_layer, bool);
				MEMBER(create_as_child_spawn_group, server::cinfo_world_layer, bool);
				MEMBER(h_layer_spawn_group, server::cinfo_world_layer, uint32_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cinfo_world_layer : public cbase_entity

			class cmulti_light_proxy : public clogical_entity
			{
			public:
				MEMBER(isz_light_name_filter, server::cmulti_light_proxy, cutl_symbol_large);
				MEMBER(isz_light_class_filter, server::cmulti_light_proxy, cutl_symbol_large);
				MEMBER(light_radius_filter, server::cmulti_light_proxy, float);
				MEMBER(brightness_delta, server::cmulti_light_proxy, float);
				MEMBER(perform_screen_fade, server::cmulti_light_proxy, bool);
				MEMBER(target_brightness_multiplier, server::cmulti_light_proxy, float);
				MEMBER(current_brightness_multiplier, server::cmulti_light_proxy, float);
				MEMBER(vec_lights, server::cmulti_light_proxy, cutl_vector<chandle<clight_entity>>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cmulti_light_proxy : public clogical_entity

			class cpoint_camera : public cbase_entity
			{
			public:
				MEMBER(fov, server::cpoint_camera, float);
				MEMBER(resolution, server::cpoint_camera, float);
				MEMBER(fog_enable, server::cpoint_camera, bool);
				MEMBER(fog_color, server::cpoint_camera, color);
				MEMBER(fog_start, server::cpoint_camera, float);
				MEMBER(fog_end, server::cpoint_camera, float);
				MEMBER(fog_max_density, server::cpoint_camera, float);
				MEMBER(active, server::cpoint_camera, bool);
				MEMBER(use_screen_aspect_ratio, server::cpoint_camera, bool);
				MEMBER(aspect_ratio, server::cpoint_camera, float);
				MEMBER(no_sky, server::cpoint_camera, bool);
				MEMBER(brightness, server::cpoint_camera, float);
				MEMBER(zfar, server::cpoint_camera, float);
				MEMBER(znear, server::cpoint_camera, float);
				MEMBER(can_hltvuse, server::cpoint_camera, bool);
				MEMBER(dof_enabled, server::cpoint_camera, bool);
				MEMBER(dof_near_blurry, server::cpoint_camera, float);
				MEMBER(dof_near_crisp, server::cpoint_camera, float);
				MEMBER(dof_far_crisp, server::cpoint_camera, float);
				MEMBER(dof_far_blurry, server::cpoint_camera, float);
				MEMBER(dof_tilt_to_ground, server::cpoint_camera, float);
				MEMBER(target_fov, server::cpoint_camera, float);
				MEMBER(degrees_per_second, server::cpoint_camera, float);
				MEMBER(is_on, server::cpoint_camera, bool);
				MEMBER(next_ptr, server::cpoint_camera, cpoint_camera*);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cpoint_camera : public cbase_entity

			class cpoint_camera_vfov : public cpoint_camera
			{
			public:
				MEMBER(vertical_fov, server::cpoint_camera_vfov, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cpoint_camera_vfov : public cpoint_camera

			class cpoint_template : public clogical_entity
			{
			public:
				MEMBER(isz_world_name, server::cpoint_template, cutl_symbol_large);
				MEMBER(isz_source2_entity_lump_name, server::cpoint_template, cutl_symbol_large);
				MEMBER(isz_entity_filter_name, server::cpoint_template, cutl_symbol_large);
				MEMBER(timeout_interval, server::cpoint_template, float);
				MEMBER(asynchronously_spawn_entities, server::cpoint_template, bool);
				MEMBER(output_on_spawned, server::cpoint_template, centity_iooutput);
				MEMBER(client_only_entity_behavior, server::cpoint_template, point_template_client_only_entity_behavior_t);
				MEMBER(owner_spawn_group_type, server::cpoint_template, point_template_owner_spawn_group_type_t);
				MEMBER(created_spawn_group_handles, server::cpoint_template, cutl_vector<uint32_t>);
				MEMBER(spawned_entity_handles, server::cpoint_template, cutl_vector<centity_handle>);
				MEMBER(script_spawn_callback, server::cpoint_template, hscript);
				MEMBER(script_callback_scope, server::cpoint_template, hscript);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cpoint_template : public clogical_entity

			class cgame_gib_manager : public cbase_entity
			{
			public:
				MEMBER(allow_new_gibs, server::cgame_gib_manager, bool);
				MEMBER(current_max_pieces, server::cgame_gib_manager, int);
				MEMBER(max_pieces, server::cgame_gib_manager, int);
				MEMBER(last_frame, server::cgame_gib_manager, int);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cgame_gib_manager : public cbase_entity

			class csound_area_entity_base : public cbase_entity
			{
			public:
				MEMBER(disabled, server::csound_area_entity_base, bool);
				MEMBER(isz_sound_area_type, server::csound_area_entity_base, cutl_symbol_large);
				MEMBER(v_pos, server::csound_area_entity_base, vector);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class csound_area_entity_base : public cbase_entity

			class csound_area_entity_sphere : public csound_area_entity_base
			{
			public:
				MEMBER(radius, server::csound_area_entity_sphere, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class csound_area_entity_sphere : public csound_area_entity_base

			class csound_area_entity_oriented_box : public csound_area_entity_base
			{
			public:
				MEMBER(v_min, server::csound_area_entity_oriented_box, vector);
				MEMBER(v_max, server::csound_area_entity_oriented_box, vector);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class csound_area_entity_oriented_box : public csound_area_entity_base

			class cteam : public cbase_entity
			{
			public:
				MEMBER(a_player_controllers, server::cteam, cnetwork_utl_vector_base<chandle<cbase_player_controller>>);
				MEMBER(a_players, server::cteam, cnetwork_utl_vector_base<chandle<cbase_player_pawn>>);
				MEMBER(score, server::cteam, int);
				MEMBER_ARR(teamname_arr, server::cteam, 129, char);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cteam : public cbase_entity

			class cbase_player_controller : public cbase_entity
			{
			public:
				MEMBER(in_buttons_which_are_toggles, server::cbase_player_controller, uint64_t);
				MEMBER(tick_base, server::cbase_player_controller, uint32_t);
				MEMBER(h_pawn, server::cbase_player_controller, chandle<cbase_player_pawn>);
				MEMBER(split_screen_slot, server::cbase_player_controller, csplit_screen_slot);
				MEMBER(h_split_owner, server::cbase_player_controller, chandle<cbase_player_controller>);
				MEMBER(h_split_screen_players, server::cbase_player_controller, cutl_vector<chandle<cbase_player_controller>>);
				MEMBER(is_hltv, server::cbase_player_controller, bool);
				MEMBER(connected, server::cbase_player_controller, player_connected_state);
				MEMBER_ARR(isz_player_name_arr, server::cbase_player_controller, 128, char);
				MEMBER(network_idstring, server::cbase_player_controller, cutl_string);
				MEMBER(lerp_time, server::cbase_player_controller, float);
				MEMBER(lag_compensation, server::cbase_player_controller, bool);
				MEMBER(predict, server::cbase_player_controller, bool);
				MEMBER(auto_kick_disabled, server::cbase_player_controller, bool);
				MEMBER(is_low_violence, server::cbase_player_controller, bool);
				MEMBER(game_paused, server::cbase_player_controller, bool);
				MEMBER(usec_timestamp_last_user_cmd_received, server::cbase_player_controller, long long);
				MEMBER(last_real_command_number_executed, server::cbase_player_controller, int);
				MEMBER(ignore_global_chat, server::cbase_player_controller, chat_ignore_type_t);
				MEMBER(last_player_talk_time, server::cbase_player_controller, float);
				MEMBER(last_entity_steady_state, server::cbase_player_controller, float);
				MEMBER(available_entity_steady_state, server::cbase_player_controller, int);
				MEMBER(has_any_steady_state_ents, server::cbase_player_controller, bool);
				MEMBER(steam_id, server::cbase_player_controller, uint64_t);
				MEMBER(desired_fov, server::cbase_player_controller, uint32_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbase_player_controller : public cbase_entity

			class cbase_player_vdata : public centity_subclass_vdata_base
			{
			public:
				MEMBER(s_model_name, server::cbase_player_vdata, cresource_name_typed<cweak_handle<info_for_resource_type_cmodel>>);
				MEMBER(head_damage_multiplier, server::cbase_player_vdata, cskill_float);
				MEMBER(chest_damage_multiplier, server::cbase_player_vdata, cskill_float);
				MEMBER(stomach_damage_multiplier, server::cbase_player_vdata, cskill_float);
				MEMBER(arm_damage_multiplier, server::cbase_player_vdata, cskill_float);
				MEMBER(leg_damage_multiplier, server::cbase_player_vdata, cskill_float);
				MEMBER(hold_breath_time, server::cbase_player_vdata, float);
				MEMBER(drowning_damage_interval, server::cbase_player_vdata, float);
				MEMBER(drowning_damage_initial, server::cbase_player_vdata, int);
				MEMBER(drowning_damage_max, server::cbase_player_vdata, int);
				MEMBER(water_speed, server::cbase_player_vdata, int);
				MEMBER(use_range, server::cbase_player_vdata, float);
				MEMBER(use_angle_tolerance, server::cbase_player_vdata, float);
				MEMBER(crouch_time, server::cbase_player_vdata, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbase_player_vdata : public centity_subclass_vdata_base

			class cbase_player_weapon_vdata : public centity_subclass_vdata_base
			{
			public:
				MEMBER(world_model, server::cbase_player_weapon_vdata, cresource_name_typed<cweak_handle<info_for_resource_type_cmodel>>);
				MEMBER(built_right_handed, server::cbase_player_weapon_vdata, bool);
				MEMBER(allow_flipping, server::cbase_player_weapon_vdata, bool);
				MEMBER(is_full_auto, server::cbase_player_weapon_vdata, bool);
				MEMBER(num_bullets, server::cbase_player_weapon_vdata, int);
				MEMBER(s_muzzle_attachment, server::cbase_player_weapon_vdata, cutl_string);
				MEMBER(muzzle_flash_particle, server::cbase_player_weapon_vdata, cresource_name_typed<cweak_handle<info_for_resource_type_iparticle_system_definition>>);
				MEMBER(flags, server::cbase_player_weapon_vdata, item_flag_types_t);
				MEMBER(primary_ammo_type, server::cbase_player_weapon_vdata, ammo_index_t);
				MEMBER(secondary_ammo_type, server::cbase_player_weapon_vdata, ammo_index_t);
				MEMBER(max_clip1, server::cbase_player_weapon_vdata, int);
				MEMBER(max_clip2, server::cbase_player_weapon_vdata, int);
				MEMBER(default_clip1, server::cbase_player_weapon_vdata, int);
				MEMBER(default_clip2, server::cbase_player_weapon_vdata, int);
				MEMBER(weight, server::cbase_player_weapon_vdata, int);
				MEMBER(auto_switch_to, server::cbase_player_weapon_vdata, bool);
				MEMBER(auto_switch_from, server::cbase_player_weapon_vdata, bool);
				MEMBER(rumble_effect, server::cbase_player_weapon_vdata, rumble_effect_t);
				MEMBER(a_shoot_sounds, server::cbase_player_weapon_vdata, cutl_map<weapon_sound_t, _csound_event_name>);
				MEMBER(slot, server::cbase_player_weapon_vdata, int);
				MEMBER(position, server::cbase_player_weapon_vdata, int);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbase_player_weapon_vdata : public centity_subclass_vdata_base

			class cinfo_game_event_proxy : public cpoint_entity
			{
			public:
				MEMBER(isz_event_name, server::cinfo_game_event_proxy, cutl_symbol_large);
				MEMBER(range, server::cinfo_game_event_proxy, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cinfo_game_event_proxy : public cpoint_entity

			class cprojected_decal : public cpoint_entity
			{
			public:
				MEMBER(texture, server::cprojected_decal, int);
				MEMBER(distance, server::cprojected_decal, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cprojected_decal : public cpoint_entity

			class cbody_component_base_anim_graph : public cbody_component_skeleton_instance
			{
			public:
				MEMBER(animation_controller, server::cbody_component_base_anim_graph, cbase_anim_graph_controller);
				MEMBER(_m_p_chain_entity, server::cbody_component_base_anim_graph, cnetwork_var_chainer);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbody_component_base_anim_graph : public cbody_component_skeleton_instance

			class cbase_model_entity : public cbase_entity
			{
			public:
				MEMBER(crender_component_ptr, server::cbase_model_entity, crender_component*);
				MEMBER(chitbox_component, server::cbase_model_entity, chitbox_component);
				MEMBER(dissolve_start_time, server::cbase_model_entity, game_time_t);
				MEMBER(on_ignite, server::cbase_model_entity, centity_iooutput);
				MEMBER(render_mode, server::cbase_model_entity, render_mode_t);
				MEMBER(render_fx, server::cbase_model_entity, render_fx_t);
				MEMBER(allow_fade_in_view, server::cbase_model_entity, bool);
				MEMBER(clr_render, server::cbase_model_entity, color);
				MEMBER(vec_render_attributes, server::cbase_model_entity, cutl_vector_embedded_network_var<entity_render_attribute_t>);
				MEMBER(render_to_cubemaps, server::cbase_model_entity, bool);
				MEMBER(collision, server::cbase_model_entity, ccollision_property);
				MEMBER(glow, server::cbase_model_entity, cglow_property);
				MEMBER(glow_backface_mult, server::cbase_model_entity, float);
				MEMBER(fade_min_dist, server::cbase_model_entity, float);
				MEMBER(fade_max_dist, server::cbase_model_entity, float);
				MEMBER(fade_scale, server::cbase_model_entity, float);
				MEMBER(shadow_strength, server::cbase_model_entity, float);
				MEMBER(object_culling, server::cbase_model_entity, uint8_t);
				MEMBER(add_decal, server::cbase_model_entity, int);
				MEMBER(v_decal_position, server::cbase_model_entity, vector);
				MEMBER(v_decal_forward_axis, server::cbase_model_entity, vector);
				MEMBER(decal_heal_blood_rate, server::cbase_model_entity, float);
				MEMBER(decal_heal_height_rate, server::cbase_model_entity, float);
				MEMBER(config_entities_to_propagate_material_decals_to, server::cbase_model_entity, cnetwork_utl_vector_base<chandle<cbase_model_entity>>);
				MEMBER(vec_view_offset, server::cbase_model_entity, cnetwork_view_offset_vector);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbase_model_entity : public cbase_entity

			class cserver_only_model_entity : public cbase_model_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cserver_only_model_entity : public cbase_model_entity

			class cmodel_point_entity : public cbase_model_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cmodel_point_entity : public cbase_model_entity

			class clogic_relay : public clogical_entity
			{
			public:
				MEMBER(on_trigger, server::clogic_relay, centity_iooutput);
				MEMBER(on_spawn, server::clogic_relay, centity_iooutput);
				MEMBER(disabled, server::clogic_relay, bool);
				MEMBER(wait_for_refire, server::clogic_relay, bool);
				MEMBER(trigger_once, server::clogic_relay, bool);
				MEMBER(fast_retrigger, server::clogic_relay, bool);
				MEMBER(passthough_caller, server::clogic_relay, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class clogic_relay : public clogical_entity

			class cparticle_system : public cbase_model_entity
			{
			public:
				MEMBER_ARR(snapshot_file_name_arr, server::cparticle_system, 512, char);
				MEMBER(active, server::cparticle_system, bool);
				MEMBER(frozen, server::cparticle_system, bool);
				MEMBER(freeze_transition_duration, server::cparticle_system, float);
				MEMBER(stop_type, server::cparticle_system, int);
				MEMBER(animate_during_gameplay_pause, server::cparticle_system, bool);
				MEMBER(effect_index, server::cparticle_system, cstrong_handle<info_for_resource_type_iparticle_system_definition>);
				MEMBER(start_time, server::cparticle_system, game_time_t);
				MEMBER(pre_sim_time, server::cparticle_system, float);
				MEMBER_ARR(v_server_control_points_arr, server::cparticle_system, 4, vector);
				MEMBER_ARR(server_control_point_assignments_arr, server::cparticle_system, 4, uint8_t);
				MEMBER_ARR(h_control_point_ents_arr, server::cparticle_system, 64, chandle<cbase_entity>);
				MEMBER(no_save, server::cparticle_system, bool);
				MEMBER(no_freeze, server::cparticle_system, bool);
				MEMBER(no_ramp, server::cparticle_system, bool);
				MEMBER(start_active, server::cparticle_system, bool);
				MEMBER(isz_effect_name, server::cparticle_system, cutl_symbol_large);
				MEMBER_ARR(isz_control_point_names_arr, server::cparticle_system, 64, cutl_symbol_large);
				MEMBER(data_cp, server::cparticle_system, int);
				MEMBER(vec_data_cpvalue, server::cparticle_system, vector);
				MEMBER(tint_cp, server::cparticle_system, int);
				MEMBER(clr_tint, server::cparticle_system, color);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cparticle_system : public cbase_model_entity

			class cpath_particle_rope : public cbase_entity
			{
			public:
				MEMBER(start_active, server::cpath_particle_rope, bool);
				MEMBER(max_simulation_time, server::cpath_particle_rope, float);
				MEMBER(isz_effect_name, server::cpath_particle_rope, cutl_symbol_large);
				MEMBER(path_nodes_name, server::cpath_particle_rope, cutl_vector<cutl_symbol_large>);
				MEMBER(particle_spacing, server::cpath_particle_rope, float);
				MEMBER(slack, server::cpath_particle_rope, float);
				MEMBER(radius, server::cpath_particle_rope, float);
				MEMBER(color_tint, server::cpath_particle_rope, color);
				MEMBER(effect_state, server::cpath_particle_rope, int);
				MEMBER(effect_index, server::cpath_particle_rope, cstrong_handle<info_for_resource_type_iparticle_system_definition>);
				MEMBER(path_nodes_position, server::cpath_particle_rope, cnetwork_utl_vector_base<vector>);
				MEMBER(path_nodes_tangent_in, server::cpath_particle_rope, cnetwork_utl_vector_base<vector>);
				MEMBER(path_nodes_tangent_out, server::cpath_particle_rope, cnetwork_utl_vector_base<vector>);
				MEMBER(path_nodes_color, server::cpath_particle_rope, cnetwork_utl_vector_base<vector>);
				MEMBER(path_nodes_pin_enabled, server::cpath_particle_rope, cnetwork_utl_vector_base<bool>);
				MEMBER(path_nodes_radius_scale, server::cpath_particle_rope, cnetwork_utl_vector_base<float>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cpath_particle_rope : public cbase_entity

			class cpath_particle_rope_alias_path_particle_rope_clientside : public cpath_particle_rope
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cpath_particle_rope_alias_path_particle_rope_clientside : public cpath_particle_rope

			class cfunc_wall : public cbase_model_entity
			{
			public:
				MEMBER(state, server::cfunc_wall, int);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cfunc_wall : public cbase_model_entity

			class cfunc_wall_toggle : public cfunc_wall
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cfunc_wall_toggle : public cfunc_wall

			class cfunc_vehicle_clip : public cbase_model_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cfunc_vehicle_clip : public cbase_model_entity

			class cfunc_illusionary : public cbase_model_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cfunc_illusionary : public cbase_model_entity

			class cfunc_vphysics_clip : public cbase_model_entity
			{
			public:
				MEMBER(disabled, server::cfunc_vphysics_clip, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cfunc_vphysics_clip : public cbase_model_entity

			class cfunc_interaction_layer_clip : public cbase_model_entity
			{
			public:
				MEMBER(disabled, server::cfunc_interaction_layer_clip, bool);
				MEMBER(isz_interacts_as, server::cfunc_interaction_layer_clip, cutl_symbol_large);
				MEMBER(isz_interacts_with, server::cfunc_interaction_layer_clip, cutl_symbol_large);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cfunc_interaction_layer_clip : public cbase_model_entity

			class cpoint_client_command : public cpoint_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cpoint_client_command : public cpoint_entity

			class cpoint_server_command : public cpoint_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cpoint_server_command : public cpoint_entity

			class cpoint_broadcast_client_command : public cpoint_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cpoint_broadcast_client_command : public cpoint_entity

			class ccommentary_auto : public cbase_entity
			{
			public:
				MEMBER(on_commentary_new_game, server::ccommentary_auto, centity_iooutput);
				MEMBER(on_commentary_mid_game, server::ccommentary_auto, centity_iooutput);
				MEMBER(on_commentary_multiplayer_spawn, server::ccommentary_auto, centity_iooutput);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccommentary_auto : public cbase_entity

			class cdynamic_light : public cbase_model_entity
			{
			public:
				MEMBER(actual_flags, server::cdynamic_light, uint8_t);
				MEMBER(flags, server::cdynamic_light, uint8_t);
				MEMBER(light_style, server::cdynamic_light, uint8_t);
				MEMBER(on, server::cdynamic_light, bool);
				MEMBER(radius, server::cdynamic_light, float);
				MEMBER(exponent, server::cdynamic_light, int);
				MEMBER(inner_angle, server::cdynamic_light, float);
				MEMBER(outer_angle, server::cdynamic_light, float);
				MEMBER(spot_radius, server::cdynamic_light, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cdynamic_light : public cbase_model_entity

			class cbubbling : public cbase_model_entity
			{
			public:
				MEMBER(density, server::cbubbling, int);
				MEMBER(frequency, server::cbubbling, int);
				MEMBER(state, server::cbubbling, int);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbubbling : public cbase_model_entity

			class cenv_tracer : public cpoint_entity
			{
			public:
				MEMBER(vec_end, server::cenv_tracer, vector);
				MEMBER(delay, server::cenv_tracer, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cenv_tracer : public cpoint_entity

			class ctest_effect : public cbase_entity
			{
			public:
				MEMBER(loop, server::ctest_effect, int);
				MEMBER(beam, server::ctest_effect, int);
				MEMBER_ARR(beam_arr_ptr, server::ctest_effect, 24, cbeam*);
				MEMBER_ARR(beam_time_arr, server::ctest_effect, 24, game_time_t);
				MEMBER(start_time, server::ctest_effect, game_time_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ctest_effect : public cbase_entity

			class cblood : public cpoint_entity
			{
			public:
				MEMBER(vec_spray_angles, server::cblood, qangle);
				MEMBER(vec_spray_dir, server::cblood, vector);
				MEMBER(amount, server::cblood, float);
				MEMBER(color, server::cblood, int);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cblood : public cpoint_entity

			class cenv_funnel : public cbase_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cenv_funnel : public cbase_entity

			class cenv_beverage : public cbase_entity
			{
			public:
				MEMBER(can_in_dispenser, server::cenv_beverage, bool);
				MEMBER(beverage_type, server::cenv_beverage, int);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cenv_beverage : public cbase_entity

			class cprecipitation_blocker : public cbase_model_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cprecipitation_blocker : public cbase_model_entity

			class cenv_wind : public cbase_entity
			{
			public:
				MEMBER(env_wind_shared, server::cenv_wind, cenv_wind_shared);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cenv_wind : public cbase_entity

			class cphysics_wire : public cbase_entity
			{
			public:
				MEMBER(density, server::cphysics_wire, int);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cphysics_wire : public cbase_entity

			class cenv_muzzle_flash : public cpoint_entity
			{
			public:
				MEMBER(scale, server::cenv_muzzle_flash, float);
				MEMBER(isz_parent_attachment, server::cenv_muzzle_flash, cutl_symbol_large);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cenv_muzzle_flash : public cpoint_entity

			class cenv_splash : public cpoint_entity
			{
			public:
				MEMBER(scale, server::cenv_splash, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cenv_splash : public cpoint_entity

			class cenv_view_punch : public cpoint_entity
			{
			public:
				MEMBER(radius, server::cenv_view_punch, float);
				MEMBER(ang_view_punch, server::cenv_view_punch, qangle);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cenv_view_punch : public cpoint_entity

			class cenv_entity_igniter : public cbase_entity
			{
			public:
				MEMBER(lifetime, server::cenv_entity_igniter, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cenv_entity_igniter : public cbase_entity

			class cdebug_history : public cbase_entity
			{
			public:
				MEMBER(npc_events, server::cdebug_history, int);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cdebug_history : public cbase_entity

			class cenv_entity_maker : public cpoint_entity
			{
			public:
				MEMBER(vec_entity_mins, server::cenv_entity_maker, vector);
				MEMBER(vec_entity_maxs, server::cenv_entity_maker, vector);
				MEMBER(h_current_instance, server::cenv_entity_maker, chandle<cbase_entity>);
				MEMBER(h_current_blocker, server::cenv_entity_maker, chandle<cbase_entity>);
				MEMBER(vec_blocker_origin, server::cenv_entity_maker, vector);
				MEMBER(ang_post_spawn_direction, server::cenv_entity_maker, qangle);
				MEMBER(post_spawn_direction_variance, server::cenv_entity_maker, float);
				MEMBER(post_spawn_speed, server::cenv_entity_maker, float);
				MEMBER(post_spawn_use_angles, server::cenv_entity_maker, bool);
				MEMBER(isz_template, server::cenv_entity_maker, cutl_symbol_large);
				MEMBER(output_on_spawned, server::cenv_entity_maker, centity_iooutput);
				MEMBER(output_on_failed_spawn, server::cenv_entity_maker, centity_iooutput);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cenv_entity_maker : public cpoint_entity

			class cinfo_instructor_hint_target : public cpoint_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cinfo_instructor_hint_target : public cpoint_entity

			class cenv_instructor_hint : public cpoint_entity
			{
			public:
				MEMBER(isz_name, server::cenv_instructor_hint, cutl_symbol_large);
				MEMBER(isz_replace_key, server::cenv_instructor_hint, cutl_symbol_large);
				MEMBER(isz_hint_target_entity, server::cenv_instructor_hint, cutl_symbol_large);
				MEMBER(timeout, server::cenv_instructor_hint, int);
				MEMBER(display_limit, server::cenv_instructor_hint, int);
				MEMBER(isz_icon_onscreen, server::cenv_instructor_hint, cutl_symbol_large);
				MEMBER(isz_icon_offscreen, server::cenv_instructor_hint, cutl_symbol_large);
				MEMBER(isz_caption, server::cenv_instructor_hint, cutl_symbol_large);
				MEMBER(isz_activator_caption, server::cenv_instructor_hint, cutl_symbol_large);
				MEMBER(color, server::cenv_instructor_hint, color);
				MEMBER(icon_offset, server::cenv_instructor_hint, float);
				MEMBER(range, server::cenv_instructor_hint, float);
				MEMBER(pulse_option, server::cenv_instructor_hint, uint8_t);
				MEMBER(alpha_option, server::cenv_instructor_hint, uint8_t);
				MEMBER(shake_option, server::cenv_instructor_hint, uint8_t);
				MEMBER(static_, server::cenv_instructor_hint, bool);
				MEMBER(no_offscreen, server::cenv_instructor_hint, bool);
				MEMBER(force_caption, server::cenv_instructor_hint, bool);
				MEMBER(instance_type, server::cenv_instructor_hint, int);
				MEMBER(suppress_rest, server::cenv_instructor_hint, bool);
				MEMBER(isz_binding, server::cenv_instructor_hint, cutl_symbol_large);
				MEMBER(allow_no_draw_target, server::cenv_instructor_hint, bool);
				MEMBER(auto_start, server::cenv_instructor_hint, bool);
				MEMBER(local_player_only, server::cenv_instructor_hint, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cenv_instructor_hint : public cpoint_entity

			class cenv_instructor_vrhint : public cpoint_entity
			{
			public:
				MEMBER(isz_name, server::cenv_instructor_vrhint, cutl_symbol_large);
				MEMBER(isz_hint_target_entity, server::cenv_instructor_vrhint, cutl_symbol_large);
				MEMBER(timeout, server::cenv_instructor_vrhint, int);
				MEMBER(isz_caption, server::cenv_instructor_vrhint, cutl_symbol_large);
				MEMBER(isz_start_sound, server::cenv_instructor_vrhint, cutl_symbol_large);
				MEMBER(layout_file_type, server::cenv_instructor_vrhint, int);
				MEMBER(isz_custom_layout_file, server::cenv_instructor_vrhint, cutl_symbol_large);
				MEMBER(attach_type, server::cenv_instructor_vrhint, int);
				MEMBER(height_offset, server::cenv_instructor_vrhint, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cenv_instructor_vrhint : public cpoint_entity

			class cinstructor_event_entity : public cpoint_entity
			{
			public:
				MEMBER(isz_name, server::cinstructor_event_entity, cutl_symbol_large);
				MEMBER(isz_hint_target_entity, server::cinstructor_event_entity, cutl_symbol_large);
				MEMBER(h_target_player, server::cinstructor_event_entity, chandle<cbase_player_pawn>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cinstructor_event_entity : public cpoint_entity

			class cenv_screen_overlay : public cpoint_entity
			{
			public:
				MEMBER_ARR(isz_overlay_names_arr, server::cenv_screen_overlay, 10, cutl_symbol_large);
				MEMBER_ARR(overlay_times_arr, server::cenv_screen_overlay, 10, float);
				MEMBER(start_time, server::cenv_screen_overlay, game_time_t);
				MEMBER(desired_overlay, server::cenv_screen_overlay, int);
				MEMBER(is_active, server::cenv_screen_overlay, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cenv_screen_overlay : public cpoint_entity

			class cenv_fade : public clogical_entity
			{
			public:
				MEMBER(fade_color, server::cenv_fade, color);
				MEMBER(duration, server::cenv_fade, float);
				MEMBER(hold_duration, server::cenv_fade, float);
				MEMBER(on_begin_fade, server::cenv_fade, centity_iooutput);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cenv_fade : public clogical_entity

			class ccredits : public cpoint_entity
			{
			public:
				MEMBER(on_credits_done, server::ccredits, centity_iooutput);
				MEMBER(rolled_outro_credits, server::ccredits, bool);
				MEMBER(logo_length, server::ccredits, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccredits : public cpoint_entity

			class cenv_shake : public cpoint_entity
			{
			public:
				MEMBER(limit_to_entity, server::cenv_shake, cutl_symbol_large);
				MEMBER(amplitude, server::cenv_shake, float);
				MEMBER(frequency, server::cenv_shake, float);
				MEMBER(duration, server::cenv_shake, float);
				MEMBER(radius, server::cenv_shake, float);
				MEMBER(stop_time, server::cenv_shake, game_time_t);
				MEMBER(next_shake, server::cenv_shake, game_time_t);
				MEMBER(current_amp, server::cenv_shake, float);
				MEMBER(max_force, server::cenv_shake, vector);
				MEMBER(shake_callback, server::cenv_shake, cphysics_shake);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cenv_shake : public cpoint_entity

			class cenv_tilt : public cpoint_entity
			{
			public:
				MEMBER(duration, server::cenv_tilt, float);
				MEMBER(radius, server::cenv_tilt, float);
				MEMBER(tilt_time, server::cenv_tilt, float);
				MEMBER(stop_time, server::cenv_tilt, game_time_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cenv_tilt : public cpoint_entity

			class cenv_spark : public cpoint_entity
			{
			public:
				MEMBER(delay, server::cenv_spark, float);
				MEMBER(magnitude, server::cenv_spark, int);
				MEMBER(trail_length, server::cenv_spark, int);
				MEMBER(type, server::cenv_spark, int);
				MEMBER(on_spark, server::cenv_spark, centity_iooutput);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cenv_spark : public cpoint_entity

			class cshower : public cmodel_point_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cshower : public cmodel_point_entity

			class cenv_explosion : public cmodel_point_entity
			{
			public:
				MEMBER(magnitude, server::cenv_explosion, int);
				MEMBER(player_damage, server::cenv_explosion, float);
				MEMBER(radius_override, server::cenv_explosion, int);
				MEMBER(inner_radius, server::cenv_explosion, float);
				MEMBER(sprite_scale, server::cenv_explosion, int);
				MEMBER(damage_force, server::cenv_explosion, float);
				MEMBER(h_inflictor, server::cenv_explosion, chandle<cbase_entity>);
				MEMBER(custom_damage_type, server::cenv_explosion, int);
				MEMBER(isz_explosion_type, server::cenv_explosion, cutl_symbol_large);
				MEMBER(isz_custom_effect_name, server::cenv_explosion, cutl_symbol_large);
				MEMBER(isz_custom_sound_name, server::cenv_explosion, cutl_symbol_large);
				MEMBER(class_ignore, server::cenv_explosion, class_t);
				MEMBER(class_ignore2, server::cenv_explosion, class_t);
				MEMBER(isz_entity_ignore_name, server::cenv_explosion, cutl_symbol_large);
				MEMBER(h_entity_ignore, server::cenv_explosion, chandle<cbase_entity>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cenv_explosion : public cmodel_point_entity

			class cfilter_name : public cbase_filter
			{
			public:
				MEMBER(filter_name, server::cfilter_name, cutl_symbol_large);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cfilter_name : public cbase_filter

			class cfilter_model : public cbase_filter
			{
			public:
				MEMBER(filter_model, server::cfilter_model, cutl_symbol_large);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cfilter_model : public cbase_filter

			class cfilter_context : public cbase_filter
			{
			public:
				MEMBER(filter_context, server::cfilter_context, cutl_symbol_large);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cfilter_context : public cbase_filter

			class filter_team : public cbase_filter
			{
			public:
				MEMBER(filter_team, server::filter_team, int);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class filter_team : public cbase_filter

			class cfilter_mass_greater : public cbase_filter
			{
			public:
				MEMBER(filter_mass, server::cfilter_mass_greater, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cfilter_mass_greater : public cbase_filter

			class filter_damage_type : public cbase_filter
			{
			public:
				MEMBER(damage_type, server::filter_damage_type, int);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class filter_damage_type : public cbase_filter

			class filter_health : public cbase_filter
			{
			public:
				MEMBER(adrenaline_active, server::filter_health, bool);
				MEMBER(health_min, server::filter_health, int);
				MEMBER(health_max, server::filter_health, int);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class filter_health : public cbase_filter

			class cfilter_enemy : public cbase_filter
			{
			public:
				MEMBER(isz_enemy_name, server::cfilter_enemy, cutl_symbol_large);
				MEMBER(radius, server::cfilter_enemy, float);
				MEMBER(outer_radius, server::cfilter_enemy, float);
				MEMBER(max_squadmates_per_enemy, server::cfilter_enemy, int);
				MEMBER(isz_player_name, server::cfilter_enemy, cutl_symbol_large);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cfilter_enemy : public cbase_filter

			class cfilter_attribute_int : public cbase_filter
			{
			public:
				MEMBER(s_attribute_name, server::cfilter_attribute_int, cutl_string_token);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cfilter_attribute_int : public cbase_filter

			class cfire : public cbase_model_entity
			{
			public:
				MEMBER(h_effect, server::cfire, chandle<cbase_fire>);
				MEMBER(h_owner, server::cfire, chandle<cbase_entity>);
				MEMBER(fire_type, server::cfire, int);
				MEMBER(fuel, server::cfire, float);
				MEMBER(damage_time, server::cfire, game_time_t);
				MEMBER(last_damage, server::cfire, game_time_t);
				MEMBER(fire_size, server::cfire, float);
				MEMBER(last_nav_update_time, server::cfire, game_time_t);
				MEMBER(heat_level, server::cfire, float);
				MEMBER(heat_absorb, server::cfire, float);
				MEMBER(damage_scale, server::cfire, float);
				MEMBER(max_heat, server::cfire, float);
				MEMBER(last_heat_level, server::cfire, float);
				MEMBER(attack_time, server::cfire, float);
				MEMBER(enabled, server::cfire, bool);
				MEMBER(start_disabled, server::cfire, bool);
				MEMBER(did_activate, server::cfire, bool);
				MEMBER(on_ignited, server::cfire, centity_iooutput);
				MEMBER(on_extinguished, server::cfire, centity_iooutput);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cfire : public cbase_model_entity

			class cenv_fire_source : public cbase_entity
			{
			public:
				MEMBER(enabled, server::cenv_fire_source, bool);
				MEMBER(radius, server::cenv_fire_source, float);
				MEMBER(damage, server::cenv_fire_source, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cenv_fire_source : public cbase_entity

			class cenv_fire_sensor : public cbase_entity
			{
			public:
				MEMBER(enabled, server::cenv_fire_sensor, bool);
				MEMBER(heat_at_level, server::cenv_fire_sensor, bool);
				MEMBER(radius, server::cenv_fire_sensor, float);
				MEMBER(target_level, server::cenv_fire_sensor, float);
				MEMBER(target_time, server::cenv_fire_sensor, float);
				MEMBER(level_time, server::cenv_fire_sensor, float);
				MEMBER(on_heat_level_start, server::cenv_fire_sensor, centity_iooutput);
				MEMBER(on_heat_level_end, server::cenv_fire_sensor, centity_iooutput);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cenv_fire_sensor : public cbase_entity

			class cfunc_timescale : public cbase_entity
			{
			public:
				MEMBER(desired_timescale, server::cfunc_timescale, float);
				MEMBER(acceleration, server::cfunc_timescale, float);
				MEMBER(min_blend_rate, server::cfunc_timescale, float);
				MEMBER(blend_delta_multiplier, server::cfunc_timescale, float);
				MEMBER(is_started, server::cfunc_timescale, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cfunc_timescale : public cbase_entity

			class clight_glow : public cbase_model_entity
			{
			public:
				MEMBER(horizontal_size, server::clight_glow, uint32_t);
				MEMBER(vertical_size, server::clight_glow, uint32_t);
				MEMBER(min_dist, server::clight_glow, uint32_t);
				MEMBER(max_dist, server::clight_glow, uint32_t);
				MEMBER(outer_max_dist, server::clight_glow, uint32_t);
				MEMBER(glow_proxy_size, server::clight_glow, float);
				MEMBER(hdrcolor_scale, server::clight_glow, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class clight_glow : public cbase_model_entity

			class clogic_achievement : public clogical_entity
			{
			public:
				MEMBER(disabled, server::clogic_achievement, bool);
				MEMBER(isz_achievement_event_id, server::clogic_achievement, cutl_symbol_large);
				MEMBER(on_fired, server::clogic_achievement, centity_iooutput);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class clogic_achievement : public clogical_entity

			class clogic_game_event_listener : public clogical_entity
			{
			public:
				MEMBER(on_event_fired, server::clogic_game_event_listener, centity_iooutput);
				MEMBER(isz_game_event_name, server::clogic_game_event_listener, cutl_symbol_large);
				MEMBER(isz_game_event_item, server::clogic_game_event_listener, cutl_symbol_large);
				MEMBER(enabled, server::clogic_game_event_listener, bool);
				MEMBER(start_disabled, server::clogic_game_event_listener, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class clogic_game_event_listener : public clogical_entity

			class clogic_measure_movement : public clogical_entity
			{
			public:
				MEMBER(str_measure_target, server::clogic_measure_movement, cutl_symbol_large);
				MEMBER(str_measure_reference, server::clogic_measure_movement, cutl_symbol_large);
				MEMBER(str_target_reference, server::clogic_measure_movement, cutl_symbol_large);
				MEMBER(h_measure_target, server::clogic_measure_movement, chandle<cbase_entity>);
				MEMBER(h_measure_reference, server::clogic_measure_movement, chandle<cbase_entity>);
				MEMBER(h_target, server::clogic_measure_movement, chandle<cbase_entity>);
				MEMBER(h_target_reference, server::clogic_measure_movement, chandle<cbase_entity>);
				MEMBER(scale, server::clogic_measure_movement, float);
				MEMBER(measure_type, server::clogic_measure_movement, int);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class clogic_measure_movement : public clogical_entity

			class clogic_navigation : public clogical_entity
			{
			public:
				MEMBER(is_on, server::clogic_navigation, bool);
				MEMBER(nav_property, server::clogic_navigation, navproperties_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class clogic_navigation : public clogical_entity

			class clogic_npccounter : public cbase_entity
			{
			public:
				MEMBER(on_min_count_all, server::clogic_npccounter, centity_iooutput);
				MEMBER(on_max_count_all, server::clogic_npccounter, centity_iooutput);
				MEMBER(on_factor_all, server::clogic_npccounter, centity_output_template<float>);
				MEMBER(on_min_player_dist_all, server::clogic_npccounter, centity_output_template<float>);
				MEMBER(on_min_count_1, server::clogic_npccounter, centity_iooutput);
				MEMBER(on_max_count_1, server::clogic_npccounter, centity_iooutput);
				MEMBER(on_factor_1, server::clogic_npccounter, centity_output_template<float>);
				MEMBER(on_min_player_dist_1, server::clogic_npccounter, centity_output_template<float>);
				MEMBER(on_min_count_2, server::clogic_npccounter, centity_iooutput);
				MEMBER(on_max_count_2, server::clogic_npccounter, centity_iooutput);
				MEMBER(on_factor_2, server::clogic_npccounter, centity_output_template<float>);
				MEMBER(on_min_player_dist_2, server::clogic_npccounter, centity_output_template<float>);
				MEMBER(on_min_count_3, server::clogic_npccounter, centity_iooutput);
				MEMBER(on_max_count_3, server::clogic_npccounter, centity_iooutput);
				MEMBER(on_factor_3, server::clogic_npccounter, centity_output_template<float>);
				MEMBER(on_min_player_dist_3, server::clogic_npccounter, centity_output_template<float>);
				MEMBER(h_source, server::clogic_npccounter, centity_handle);
				MEMBER(isz_source_entity_name, server::clogic_npccounter, cutl_symbol_large);
				MEMBER(distance_max, server::clogic_npccounter, float);
				MEMBER(disabled, server::clogic_npccounter, bool);
				MEMBER(min_count_all, server::clogic_npccounter, int);
				MEMBER(max_count_all, server::clogic_npccounter, int);
				MEMBER(min_factor_all, server::clogic_npccounter, int);
				MEMBER(max_factor_all, server::clogic_npccounter, int);
				MEMBER(isz_npcclassname_1, server::clogic_npccounter, cutl_symbol_large);
				MEMBER(npcstate_1, server::clogic_npccounter, int);
				MEMBER(invert_state_1, server::clogic_npccounter, bool);
				MEMBER(min_count_1, server::clogic_npccounter, int);
				MEMBER(max_count_1, server::clogic_npccounter, int);
				MEMBER(min_factor_1, server::clogic_npccounter, int);
				MEMBER(max_factor_1, server::clogic_npccounter, int);
				MEMBER(default_dist_1, server::clogic_npccounter, float);
				MEMBER(isz_npcclassname_2, server::clogic_npccounter, cutl_symbol_large);
				MEMBER(npcstate_2, server::clogic_npccounter, int);
				MEMBER(invert_state_2, server::clogic_npccounter, bool);
				MEMBER(min_count_2, server::clogic_npccounter, int);
				MEMBER(max_count_2, server::clogic_npccounter, int);
				MEMBER(min_factor_2, server::clogic_npccounter, int);
				MEMBER(max_factor_2, server::clogic_npccounter, int);
				MEMBER(default_dist_2, server::clogic_npccounter, float);
				MEMBER(isz_npcclassname_3, server::clogic_npccounter, cutl_symbol_large);
				MEMBER(npcstate_3, server::clogic_npccounter, int);
				MEMBER(invert_state_3, server::clogic_npccounter, bool);
				MEMBER(min_count_3, server::clogic_npccounter, int);
				MEMBER(max_count_3, server::clogic_npccounter, int);
				MEMBER(min_factor_3, server::clogic_npccounter, int);
				MEMBER(max_factor_3, server::clogic_npccounter, int);
				MEMBER(default_dist_3, server::clogic_npccounter, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class clogic_npccounter : public cbase_entity

			class clogic_npccounter_aabb : public clogic_npccounter
			{
			public:
				MEMBER(v_distance_outer_mins, server::clogic_npccounter_aabb, vector);
				MEMBER(v_distance_outer_maxs, server::clogic_npccounter_aabb, vector);
				MEMBER(v_outer_mins, server::clogic_npccounter_aabb, vector);
				MEMBER(v_outer_maxs, server::clogic_npccounter_aabb, vector);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class clogic_npccounter_aabb : public clogic_npccounter

			class clogic_npccounter_obb : public clogic_npccounter_aabb
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class clogic_npccounter_obb : public clogic_npccounter_aabb

			class clogic_player_proxy : public clogical_entity
			{
			public:
				MEMBER(h_player, server::clogic_player_proxy, chandle<cbase_entity>);
				MEMBER(player_has_ammo, server::clogic_player_proxy, centity_iooutput);
				MEMBER(player_has_no_ammo, server::clogic_player_proxy, centity_iooutput);
				MEMBER(player_died, server::clogic_player_proxy, centity_iooutput);
				MEMBER(requested_player_health, server::clogic_player_proxy, centity_output_template<int>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class clogic_player_proxy : public clogical_entity

			class clogic_auto : public cbase_entity
			{
			public:
				MEMBER(on_map_spawn, server::clogic_auto, centity_iooutput);
				MEMBER(on_demo_map_spawn, server::clogic_auto, centity_iooutput);
				MEMBER(on_new_game, server::clogic_auto, centity_iooutput);
				MEMBER(on_load_game, server::clogic_auto, centity_iooutput);
				MEMBER(on_map_transition, server::clogic_auto, centity_iooutput);
				MEMBER(on_background_map, server::clogic_auto, centity_iooutput);
				MEMBER(on_multi_new_map, server::clogic_auto, centity_iooutput);
				MEMBER(on_multi_new_round, server::clogic_auto, centity_iooutput);
				MEMBER(on_vrenabled, server::clogic_auto, centity_iooutput);
				MEMBER(on_vrnot_enabled, server::clogic_auto, centity_iooutput);
				MEMBER(globalstate, server::clogic_auto, cutl_symbol_large);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class clogic_auto : public cbase_entity

			class clogic_script : public cpoint_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class clogic_script : public cpoint_entity

			class ctimer_entity : public clogical_entity
			{
			public:
				MEMBER(on_timer, server::ctimer_entity, centity_iooutput);
				MEMBER(on_timer_high, server::ctimer_entity, centity_iooutput);
				MEMBER(on_timer_low, server::ctimer_entity, centity_iooutput);
				MEMBER(disabled, server::ctimer_entity, int);
				MEMBER(initial_delay, server::ctimer_entity, float);
				MEMBER(refire_time, server::ctimer_entity, float);
				MEMBER(up_down_state, server::ctimer_entity, bool);
				MEMBER(use_random_time, server::ctimer_entity, int);
				MEMBER(pause_after_firing, server::ctimer_entity, bool);
				MEMBER(lower_random_bound, server::ctimer_entity, float);
				MEMBER(upper_random_bound, server::ctimer_entity, float);
				MEMBER(remaining_time, server::ctimer_entity, float);
				MEMBER(paused, server::ctimer_entity, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ctimer_entity : public clogical_entity

			class clogic_line_to_entity : public clogical_entity
			{
			public:
				MEMBER(line, server::clogic_line_to_entity, centity_output_template<vector>);
				MEMBER(source_name, server::clogic_line_to_entity, cutl_symbol_large);
				MEMBER(start_entity, server::clogic_line_to_entity, chandle<cbase_entity>);
				MEMBER(end_entity, server::clogic_line_to_entity, chandle<cbase_entity>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class clogic_line_to_entity : public clogical_entity

			class cmath_remap : public clogical_entity
			{
			public:
				MEMBER(in_min, server::cmath_remap, float);
				MEMBER(in_max, server::cmath_remap, float);
				MEMBER(out1, server::cmath_remap, float);
				MEMBER(out2, server::cmath_remap, float);
				MEMBER(old_in_value, server::cmath_remap, float);
				MEMBER(enabled, server::cmath_remap, bool);
				MEMBER(out_value, server::cmath_remap, centity_output_template<float>);
				MEMBER(on_rose_above_min, server::cmath_remap, centity_iooutput);
				MEMBER(on_rose_above_max, server::cmath_remap, centity_iooutput);
				MEMBER(on_fell_below_min, server::cmath_remap, centity_iooutput);
				MEMBER(on_fell_below_max, server::cmath_remap, centity_iooutput);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cmath_remap : public clogical_entity

			class cmath_color_blend : public clogical_entity
			{
			public:
				MEMBER(in_min, server::cmath_color_blend, float);
				MEMBER(in_max, server::cmath_color_blend, float);
				MEMBER(out_color1, server::cmath_color_blend, color);
				MEMBER(out_color2, server::cmath_color_blend, color);
				MEMBER(out_value, server::cmath_color_blend, centity_output_template<color>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cmath_color_blend : public clogical_entity

			class cenv_global : public clogical_entity
			{
			public:
				MEMBER(out_counter, server::cenv_global, centity_output_template<int>);
				MEMBER(globalstate, server::cenv_global, cutl_symbol_large);
				MEMBER(triggermode, server::cenv_global, int);
				MEMBER(initialstate, server::cenv_global, int);
				MEMBER(counter, server::cenv_global, int);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cenv_global : public clogical_entity

			class cmulti_source : public clogical_entity
			{
			public:
				MEMBER_ARR(rg_entities_arr, server::cmulti_source, 32, chandle<cbase_entity>);
				MEMBER_ARR(rg_triggered_arr, server::cmulti_source, 32, int);
				MEMBER(on_trigger, server::cmulti_source, centity_iooutput);
				MEMBER(total, server::cmulti_source, int);
				MEMBER(globalstate, server::cmulti_source, cutl_symbol_large);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cmulti_source : public clogical_entity

			class cmath_counter : public clogical_entity
			{
			public:
				MEMBER(min, server::cmath_counter, float);
				MEMBER(max, server::cmath_counter, float);
				MEMBER(hit_min, server::cmath_counter, bool);
				MEMBER(hit_max, server::cmath_counter, bool);
				MEMBER(disabled, server::cmath_counter, bool);
				MEMBER(out_value, server::cmath_counter, centity_output_template<float>);
				MEMBER(on_get_value, server::cmath_counter, centity_output_template<float>);
				MEMBER(on_hit_min, server::cmath_counter, centity_iooutput);
				MEMBER(on_hit_max, server::cmath_counter, centity_iooutput);
				MEMBER(on_changed_from_min, server::cmath_counter, centity_iooutput);
				MEMBER(on_changed_from_max, server::cmath_counter, centity_iooutput);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cmath_counter : public clogical_entity

			class clogic_case : public clogical_entity
			{
			public:
				MEMBER_ARR(case_arr, server::clogic_case, 32, cutl_symbol_large);
				MEMBER(shuffle_cases, server::clogic_case, int);
				MEMBER(last_shuffle_case, server::clogic_case, int);
				MEMBER_ARR(uch_shuffle_case_map_arr, server::clogic_case, 32, uint8_t);
				MEMBER_ARR(on_case_arr, server::clogic_case, 32, centity_iooutput);
				MEMBER(on_default, server::clogic_case, centity_output_template<cvariant_base<cvariant_default_allocator>>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class clogic_case : public clogical_entity

			class clogic_compare : public clogical_entity
			{
			public:
				MEMBER(in_value, server::clogic_compare, float);
				MEMBER(compare_value, server::clogic_compare, float);
				MEMBER(on_less_than, server::clogic_compare, centity_output_template<float>);
				MEMBER(on_equal_to, server::clogic_compare, centity_output_template<float>);
				MEMBER(on_not_equal_to, server::clogic_compare, centity_output_template<float>);
				MEMBER(on_greater_than, server::clogic_compare, centity_output_template<float>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class clogic_compare : public clogical_entity

			class clogic_autosave : public clogical_entity
			{
			public:
				MEMBER(force_new_level_unit, server::clogic_autosave, bool);
				MEMBER(min_hit_points, server::clogic_autosave, int);
				MEMBER(min_hit_points_to_commit, server::clogic_autosave, int);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class clogic_autosave : public clogical_entity

			class clogic_active_autosave : public clogic_autosave
			{
			public:
				MEMBER(trigger_hit_points, server::clogic_active_autosave, int);
				MEMBER(time_to_trigger, server::clogic_active_autosave, float);
				MEMBER(start_time, server::clogic_active_autosave, game_time_t);
				MEMBER(dangerous_time, server::clogic_active_autosave, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class clogic_active_autosave : public clogic_autosave

			class clogic_distance_autosave : public clogical_entity
			{
			public:
				MEMBER(isz_target_entity, server::clogic_distance_autosave, cutl_symbol_large);
				MEMBER(distance_to_player, server::clogic_distance_autosave, float);
				MEMBER(force_new_level_unit, server::clogic_distance_autosave, bool);
				MEMBER(check_cough, server::clogic_distance_autosave, bool);
				MEMBER(think_dangerous, server::clogic_distance_autosave, bool);
				MEMBER(dangerous_time, server::clogic_distance_autosave, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class clogic_distance_autosave : public clogical_entity

			class clogic_collision_pair : public clogical_entity
			{
			public:
				MEMBER(name_attach1, server::clogic_collision_pair, cutl_symbol_large);
				MEMBER(name_attach2, server::clogic_collision_pair, cutl_symbol_large);
				MEMBER(disabled, server::clogic_collision_pair, bool);
				MEMBER(succeeded, server::clogic_collision_pair, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class clogic_collision_pair : public clogical_entity

			class clogic_branch_list : public clogical_entity
			{
			public:
				MEMBER_ARR(logic_branch_names_arr, server::clogic_branch_list, 16, cutl_symbol_large);
				MEMBER(logic_branch_list, server::clogic_branch_list, cutl_vector<chandle<cbase_entity>>);
				MEMBER(e_last_state, server::clogic_branch_list, clogic_branch_list__logic_branch_listener_last_state_t);
				MEMBER(on_all_true, server::clogic_branch_list, centity_iooutput);
				MEMBER(on_all_false, server::clogic_branch_list, centity_iooutput);
				MEMBER(on_mixed, server::clogic_branch_list, centity_iooutput);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class clogic_branch_list : public clogical_entity

			class clogic_game_event : public clogical_entity
			{
			public:
				MEMBER(isz_event_name, server::clogic_game_event, cutl_symbol_large);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class clogic_game_event : public clogical_entity

			class cmessage_entity : public cpoint_entity
			{
			public:
				MEMBER(radius, server::cmessage_entity, int);
				MEMBER(message_text, server::cmessage_entity, cutl_symbol_large);
				MEMBER(draw_text, server::cmessage_entity, bool);
				MEMBER(developer_only, server::cmessage_entity, bool);
				MEMBER(enabled, server::cmessage_entity, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cmessage_entity : public cpoint_entity

			class ctrigger_brush : public cbase_model_entity
			{
			public:
				MEMBER(on_start_touch, server::ctrigger_brush, centity_iooutput);
				MEMBER(on_end_touch, server::ctrigger_brush, centity_iooutput);
				MEMBER(on_use, server::ctrigger_brush, centity_iooutput);
				MEMBER(input_filter, server::ctrigger_brush, int);
				MEMBER(dont_message_parent, server::ctrigger_brush, int);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ctrigger_brush : public cbase_model_entity

			class cpath_key_frame : public clogical_entity
			{
			public:
				MEMBER(origin, server::cpath_key_frame, vector);
				MEMBER(angles, server::cpath_key_frame, qangle);
				MEMBER(q_angle, server::cpath_key_frame, quaternion);
				MEMBER(next_key, server::cpath_key_frame, cutl_symbol_large);
				MEMBER(next_time, server::cpath_key_frame, float);
				MEMBER(next_key_ptr, server::cpath_key_frame, cpath_key_frame*);
				MEMBER(prev_key_ptr, server::cpath_key_frame, cpath_key_frame*);
				MEMBER(speed, server::cpath_key_frame, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cpath_key_frame : public clogical_entity

			class cbase_move_behavior : public cpath_key_frame
			{
			public:
				MEMBER(position_interpolator, server::cbase_move_behavior, int);
				MEMBER(rotation_interpolator, server::cbase_move_behavior, int);
				MEMBER(anim_start_time, server::cbase_move_behavior, float);
				MEMBER(anim_end_time, server::cbase_move_behavior, float);
				MEMBER(average_speed_across_frame, server::cbase_move_behavior, float);
				MEMBER(current_key_frame_ptr, server::cbase_move_behavior, cpath_key_frame*);
				MEMBER(target_key_frame_ptr, server::cbase_move_behavior, cpath_key_frame*);
				MEMBER(pre_key_frame_ptr, server::cbase_move_behavior, cpath_key_frame*);
				MEMBER(post_key_frame_ptr, server::cbase_move_behavior, cpath_key_frame*);
				MEMBER(time_into_frame, server::cbase_move_behavior, float);
				MEMBER(direction, server::cbase_move_behavior, int);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbase_move_behavior : public cpath_key_frame

			class cpath_corner : public cpoint_entity
			{
			public:
				MEMBER(wait, server::cpath_corner, float);
				MEMBER(radius, server::cpath_corner, float);
				MEMBER(on_pass, server::cpath_corner, centity_iooutput);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cpath_corner : public cpoint_entity

			class cphys_force : public cpoint_entity
			{
			public:
				MEMBER(name_attach, server::cphys_force, cutl_symbol_large);
				MEMBER(force, server::cphys_force, float);
				MEMBER(force_time, server::cphys_force, float);
				MEMBER(attached_object, server::cphys_force, chandle<cbase_entity>);
				MEMBER(was_restored, server::cphys_force, bool);
				MEMBER(integrator, server::cphys_force, cconstant_force_controller);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cphys_force : public cpoint_entity

			class cphys_thruster : public cphys_force
			{
			public:
				MEMBER(local_origin, server::cphys_thruster, vector);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cphys_thruster : public cphys_force

			class cphys_torque : public cphys_force
			{
			public:
				MEMBER(axis, server::cphys_torque, vector);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cphys_torque : public cphys_force

			class cphys_motor : public clogical_entity
			{
			public:
				MEMBER(name_attach, server::cphys_motor, cutl_symbol_large);
				MEMBER(h_attached_object, server::cphys_motor, chandle<cbase_entity>);
				MEMBER(spin_up, server::cphys_motor, float);
				MEMBER(additional_acceleration, server::cphys_motor, float);
				MEMBER(angular_acceleration, server::cphys_motor, float);
				MEMBER(last_time, server::cphys_motor, game_time_t);
				MEMBER(motor, server::cphys_motor, cmotor_controller);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cphys_motor : public clogical_entity

			class ckeep_upright : public cpoint_entity
			{
			public:
				MEMBER(world_goal_axis, server::ckeep_upright, vector);
				MEMBER(local_test_axis, server::ckeep_upright, vector);
				MEMBER(name_attach, server::ckeep_upright, cutl_symbol_large);
				MEMBER(attached_object, server::ckeep_upright, chandle<cbase_entity>);
				MEMBER(angular_limit, server::ckeep_upright, float);
				MEMBER(active, server::ckeep_upright, bool);
				MEMBER(damp_all_rotation, server::ckeep_upright, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ckeep_upright : public cpoint_entity

			class cphys_constraint : public clogical_entity
			{
			public:
				MEMBER(name_attach1, server::cphys_constraint, cutl_symbol_large);
				MEMBER(name_attach2, server::cphys_constraint, cutl_symbol_large);
				MEMBER(break_sound, server::cphys_constraint, cutl_symbol_large);
				MEMBER(force_limit, server::cphys_constraint, float);
				MEMBER(torque_limit, server::cphys_constraint, float);
				MEMBER(teleport_tick, server::cphys_constraint, uint32_t);
				MEMBER(min_teleport_distance, server::cphys_constraint, float);
				MEMBER(on_break, server::cphys_constraint, centity_iooutput);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cphys_constraint : public clogical_entity

			class cphys_hinge : public cphys_constraint
			{
			public:
				MEMBER(sound_info, server::cphys_hinge, constraint_sound_info);
				MEMBER(notify_min_limit_reached, server::cphys_hinge, centity_iooutput);
				MEMBER(notify_max_limit_reached, server::cphys_hinge, centity_iooutput);
				MEMBER(at_min_limit, server::cphys_hinge, bool);
				MEMBER(at_max_limit, server::cphys_hinge, bool);
				MEMBER(hinge, server::cphys_hinge, constraint_hingeparams_t);
				MEMBER(hinge_friction, server::cphys_hinge, float);
				MEMBER(system_load_scale, server::cphys_hinge, float);
				MEMBER(is_axis_local, server::cphys_hinge, bool);
				MEMBER(min_rotation, server::cphys_hinge, float);
				MEMBER(max_rotation, server::cphys_hinge, float);
				MEMBER(initial_rotation, server::cphys_hinge, float);
				MEMBER(motor_frequency, server::cphys_hinge, float);
				MEMBER(motor_damping_ratio, server::cphys_hinge, float);
				MEMBER(angle_speed, server::cphys_hinge, float);
				MEMBER(angle_speed_threshold, server::cphys_hinge, float);
				MEMBER(on_start_moving, server::cphys_hinge, centity_iooutput);
				MEMBER(on_stop_moving, server::cphys_hinge, centity_iooutput);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cphys_hinge : public cphys_constraint

			class cphys_hinge_alias_phys_hinge_local : public cphys_hinge
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cphys_hinge_alias_phys_hinge_local : public cphys_hinge

			class cphys_ball_socket : public cphys_constraint
			{
			public:
				MEMBER(friction, server::cphys_ball_socket, float);
				MEMBER(enable_swing_limit, server::cphys_ball_socket, bool);
				MEMBER(swing_limit, server::cphys_ball_socket, float);
				MEMBER(enable_twist_limit, server::cphys_ball_socket, bool);
				MEMBER(min_twist_angle, server::cphys_ball_socket, float);
				MEMBER(max_twist_angle, server::cphys_ball_socket, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cphys_ball_socket : public cphys_constraint

			class cphys_slide_constraint : public cphys_constraint
			{
			public:
				MEMBER(axis_end, server::cphys_slide_constraint, vector);
				MEMBER(slide_friction, server::cphys_slide_constraint, float);
				MEMBER(system_load_scale, server::cphys_slide_constraint, float);
				MEMBER(initial_offset, server::cphys_slide_constraint, float);
				MEMBER(enable_linear_constraint, server::cphys_slide_constraint, bool);
				MEMBER(enable_angular_constraint, server::cphys_slide_constraint, bool);
				MEMBER(motor_frequency, server::cphys_slide_constraint, float);
				MEMBER(motor_damping_ratio, server::cphys_slide_constraint, float);
				MEMBER(use_entity_pivot, server::cphys_slide_constraint, bool);
				MEMBER(sound_info, server::cphys_slide_constraint, constraint_sound_info);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cphys_slide_constraint : public cphys_constraint

			class cphys_fixed : public cphys_constraint
			{
			public:
				MEMBER(linear_frequency, server::cphys_fixed, float);
				MEMBER(linear_damping_ratio, server::cphys_fixed, float);
				MEMBER(angular_frequency, server::cphys_fixed, float);
				MEMBER(angular_damping_ratio, server::cphys_fixed, float);
				MEMBER(enable_linear_constraint, server::cphys_fixed, bool);
				MEMBER(enable_angular_constraint, server::cphys_fixed, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cphys_fixed : public cphys_constraint

			class cphys_pulley : public cphys_constraint
			{
			public:
				MEMBER(position2, server::cphys_pulley, vector);
				MEMBER_ARR(offset_arr, server::cphys_pulley, 2, vector);
				MEMBER(add_length, server::cphys_pulley, float);
				MEMBER(gear_ratio, server::cphys_pulley, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cphys_pulley : public cphys_constraint

			class cphys_length : public cphys_constraint
			{
			public:
				MEMBER_ARR(offset_arr, server::cphys_length, 2, vector);
				MEMBER(vec_attach, server::cphys_length, vector);
				MEMBER(add_length, server::cphys_length, float);
				MEMBER(min_length, server::cphys_length, float);
				MEMBER(total_length, server::cphys_length, float);
				MEMBER(enable_collision, server::cphys_length, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cphys_length : public cphys_constraint

			class cragdoll_constraint : public cphys_constraint
			{
			public:
				MEMBER(xmin, server::cragdoll_constraint, float);
				MEMBER(xmax, server::cragdoll_constraint, float);
				MEMBER(ymin, server::cragdoll_constraint, float);
				MEMBER(ymax, server::cragdoll_constraint, float);
				MEMBER(zmin, server::cragdoll_constraint, float);
				MEMBER(zmax, server::cragdoll_constraint, float);
				MEMBER(xfriction, server::cragdoll_constraint, float);
				MEMBER(yfriction, server::cragdoll_constraint, float);
				MEMBER(zfriction, server::cragdoll_constraint, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cragdoll_constraint : public cphys_constraint

			class cgeneric_constraint : public cphys_constraint
			{
			public:
				MEMBER(linear_motion_x, server::cgeneric_constraint, joint_motion_t);
				MEMBER(linear_motion_y, server::cgeneric_constraint, joint_motion_t);
				MEMBER(linear_motion_z, server::cgeneric_constraint, joint_motion_t);
				MEMBER(linear_frequency_x, server::cgeneric_constraint, float);
				MEMBER(linear_frequency_y, server::cgeneric_constraint, float);
				MEMBER(linear_frequency_z, server::cgeneric_constraint, float);
				MEMBER(linear_damping_ratio_x, server::cgeneric_constraint, float);
				MEMBER(linear_damping_ratio_y, server::cgeneric_constraint, float);
				MEMBER(linear_damping_ratio_z, server::cgeneric_constraint, float);
				MEMBER(max_linear_impulse_x, server::cgeneric_constraint, float);
				MEMBER(max_linear_impulse_y, server::cgeneric_constraint, float);
				MEMBER(max_linear_impulse_z, server::cgeneric_constraint, float);
				MEMBER(break_after_time_x, server::cgeneric_constraint, float);
				MEMBER(break_after_time_y, server::cgeneric_constraint, float);
				MEMBER(break_after_time_z, server::cgeneric_constraint, float);
				MEMBER(break_after_time_start_time_x, server::cgeneric_constraint, game_time_t);
				MEMBER(break_after_time_start_time_y, server::cgeneric_constraint, game_time_t);
				MEMBER(break_after_time_start_time_z, server::cgeneric_constraint, game_time_t);
				MEMBER(break_after_time_threshold_x, server::cgeneric_constraint, float);
				MEMBER(break_after_time_threshold_y, server::cgeneric_constraint, float);
				MEMBER(break_after_time_threshold_z, server::cgeneric_constraint, float);
				MEMBER(notify_force_x, server::cgeneric_constraint, float);
				MEMBER(notify_force_y, server::cgeneric_constraint, float);
				MEMBER(notify_force_z, server::cgeneric_constraint, float);
				MEMBER(notify_force_min_time_x, server::cgeneric_constraint, float);
				MEMBER(notify_force_min_time_y, server::cgeneric_constraint, float);
				MEMBER(notify_force_min_time_z, server::cgeneric_constraint, float);
				MEMBER(notify_force_last_time_x, server::cgeneric_constraint, game_time_t);
				MEMBER(notify_force_last_time_y, server::cgeneric_constraint, game_time_t);
				MEMBER(notify_force_last_time_z, server::cgeneric_constraint, game_time_t);
				MEMBER(axis_notified_x, server::cgeneric_constraint, bool);
				MEMBER(axis_notified_y, server::cgeneric_constraint, bool);
				MEMBER(axis_notified_z, server::cgeneric_constraint, bool);
				MEMBER(angular_motion_x, server::cgeneric_constraint, joint_motion_t);
				MEMBER(angular_motion_y, server::cgeneric_constraint, joint_motion_t);
				MEMBER(angular_motion_z, server::cgeneric_constraint, joint_motion_t);
				MEMBER(angular_frequency_x, server::cgeneric_constraint, float);
				MEMBER(angular_frequency_y, server::cgeneric_constraint, float);
				MEMBER(angular_frequency_z, server::cgeneric_constraint, float);
				MEMBER(angular_damping_ratio_x, server::cgeneric_constraint, float);
				MEMBER(angular_damping_ratio_y, server::cgeneric_constraint, float);
				MEMBER(angular_damping_ratio_z, server::cgeneric_constraint, float);
				MEMBER(max_angular_impulse_x, server::cgeneric_constraint, float);
				MEMBER(max_angular_impulse_y, server::cgeneric_constraint, float);
				MEMBER(max_angular_impulse_z, server::cgeneric_constraint, float);
				MEMBER(notify_force_reached_x, server::cgeneric_constraint, centity_iooutput);
				MEMBER(notify_force_reached_y, server::cgeneric_constraint, centity_iooutput);
				MEMBER(notify_force_reached_z, server::cgeneric_constraint, centity_iooutput);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cgeneric_constraint : public cphys_constraint

			class cspline_constraint : public cphys_constraint
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cspline_constraint : public cphys_constraint

			class cphys_wheel_constraint : public cphys_constraint
			{
			public:
				MEMBER(suspension_frequency, server::cphys_wheel_constraint, float);
				MEMBER(suspension_damping_ratio, server::cphys_wheel_constraint, float);
				MEMBER(suspension_height_offset, server::cphys_wheel_constraint, float);
				MEMBER(enable_suspension_limit, server::cphys_wheel_constraint, bool);
				MEMBER(min_suspension_offset, server::cphys_wheel_constraint, float);
				MEMBER(max_suspension_offset, server::cphys_wheel_constraint, float);
				MEMBER(enable_steering_limit, server::cphys_wheel_constraint, bool);
				MEMBER(min_steering_angle, server::cphys_wheel_constraint, float);
				MEMBER(max_steering_angle, server::cphys_wheel_constraint, float);
				MEMBER(steering_axis_friction, server::cphys_wheel_constraint, float);
				MEMBER(spin_axis_friction, server::cphys_wheel_constraint, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cphys_wheel_constraint : public cphys_constraint

			class cphysics_entity_solver : public clogical_entity
			{
			public:
				MEMBER(h_moving_entity, server::cphysics_entity_solver, chandle<cbase_entity>);
				MEMBER(h_physics_blocker, server::cphysics_entity_solver, chandle<cbase_entity>);
				MEMBER(separation_duration, server::cphysics_entity_solver, float);
				MEMBER(cancel_time, server::cphysics_entity_solver, game_time_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cphysics_entity_solver : public clogical_entity

			class cphysics_spring : public cbase_entity
			{
			public:
				MEMBER(frequency, server::cphysics_spring, float);
				MEMBER(damping_ratio, server::cphysics_spring, float);
				MEMBER(rest_length, server::cphysics_spring, float);
				MEMBER(name_attach_start, server::cphysics_spring, cutl_symbol_large);
				MEMBER(name_attach_end, server::cphysics_spring, cutl_symbol_large);
				MEMBER(start, server::cphysics_spring, vector);
				MEMBER(end, server::cphysics_spring, vector);
				MEMBER(teleport_tick, server::cphysics_spring, uint32_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cphysics_spring : public cbase_entity

			class cpoint_push : public cpoint_entity
			{
			public:
				MEMBER(enabled, server::cpoint_push, bool);
				MEMBER(magnitude, server::cpoint_push, float);
				MEMBER(radius, server::cpoint_push, float);
				MEMBER(inner_radius, server::cpoint_push, float);
				MEMBER(cone_of_influence, server::cpoint_push, float);
				MEMBER(isz_filter_name, server::cpoint_push, cutl_symbol_large);
				MEMBER(h_filter, server::cpoint_push, chandle<cbase_filter>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cpoint_push : public cpoint_entity

			class cinfo_player_start : public cpoint_entity
			{
			public:
				MEMBER(disabled, server::cinfo_player_start, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cinfo_player_start : public cpoint_entity

			class cpoint_entity_finder : public cbase_entity
			{
			public:
				MEMBER(h_entity, server::cpoint_entity_finder, chandle<cbase_entity>);
				MEMBER(filter_name, server::cpoint_entity_finder, cutl_symbol_large);
				MEMBER(h_filter, server::cpoint_entity_finder, chandle<cbase_filter>);
				MEMBER(ref_name, server::cpoint_entity_finder, cutl_symbol_large);
				MEMBER(h_reference, server::cpoint_entity_finder, chandle<cbase_entity>);
				MEMBER(find_method, server::cpoint_entity_finder, ent_finder_method_t);
				MEMBER(on_found_entity, server::cpoint_entity_finder, centity_iooutput);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cpoint_entity_finder : public cbase_entity

			class cpoint_value_remapper : public cbase_entity
			{
			public:
				MEMBER(disabled, server::cpoint_value_remapper, bool);
				MEMBER(update_on_client, server::cpoint_value_remapper, bool);
				MEMBER(input_type, server::cpoint_value_remapper, value_remapper_input_type_t);
				MEMBER(isz_remap_line_start_name, server::cpoint_value_remapper, cutl_symbol_large);
				MEMBER(isz_remap_line_end_name, server::cpoint_value_remapper, cutl_symbol_large);
				MEMBER(h_remap_line_start, server::cpoint_value_remapper, chandle<cbase_entity>);
				MEMBER(h_remap_line_end, server::cpoint_value_remapper, chandle<cbase_entity>);
				MEMBER(maximum_change_per_second, server::cpoint_value_remapper, float);
				MEMBER(disengage_distance, server::cpoint_value_remapper, float);
				MEMBER(engage_distance, server::cpoint_value_remapper, float);
				MEMBER(requires_use_key, server::cpoint_value_remapper, bool);
				MEMBER(output_type, server::cpoint_value_remapper, value_remapper_output_type_t);
				MEMBER(isz_output_entity_name, server::cpoint_value_remapper, cutl_symbol_large);
				MEMBER(isz_output_entity2_name, server::cpoint_value_remapper, cutl_symbol_large);
				MEMBER(isz_output_entity3_name, server::cpoint_value_remapper, cutl_symbol_large);
				MEMBER(isz_output_entity4_name, server::cpoint_value_remapper, cutl_symbol_large);
				MEMBER(h_output_entities, server::cpoint_value_remapper, cnetwork_utl_vector_base<chandle<cbase_entity>>);
				MEMBER(haptics_type, server::cpoint_value_remapper, value_remapper_haptics_type_t);
				MEMBER(momentum_type, server::cpoint_value_remapper, value_remapper_momentum_type_t);
				MEMBER(momentum_modifier, server::cpoint_value_remapper, float);
				MEMBER(snap_value, server::cpoint_value_remapper, float);
				MEMBER(current_momentum, server::cpoint_value_remapper, float);
				MEMBER(ratchet_type, server::cpoint_value_remapper, value_remapper_ratchet_type_t);
				MEMBER(ratchet_offset, server::cpoint_value_remapper, float);
				MEMBER(input_offset, server::cpoint_value_remapper, float);
				MEMBER(engaged, server::cpoint_value_remapper, bool);
				MEMBER(first_update, server::cpoint_value_remapper, bool);
				MEMBER(previous_value, server::cpoint_value_remapper, float);
				MEMBER(previous_update_tick_time, server::cpoint_value_remapper, game_time_t);
				MEMBER(vec_previous_test_point, server::cpoint_value_remapper, vector);
				MEMBER(h_using_player, server::cpoint_value_remapper, chandle<cbase_player_pawn>);
				MEMBER(custom_output_value, server::cpoint_value_remapper, float);
				MEMBER(isz_sound_engage, server::cpoint_value_remapper, cutl_symbol_large);
				MEMBER(isz_sound_disengage, server::cpoint_value_remapper, cutl_symbol_large);
				MEMBER(isz_sound_reached_value_zero, server::cpoint_value_remapper, cutl_symbol_large);
				MEMBER(isz_sound_reached_value_one, server::cpoint_value_remapper, cutl_symbol_large);
				MEMBER(isz_sound_moving_loop, server::cpoint_value_remapper, cutl_symbol_large);
				MEMBER(position, server::cpoint_value_remapper, centity_output_template<float>);
				MEMBER(position_delta, server::cpoint_value_remapper, centity_output_template<float>);
				MEMBER(on_reached_value_zero, server::cpoint_value_remapper, centity_iooutput);
				MEMBER(on_reached_value_one, server::cpoint_value_remapper, centity_iooutput);
				MEMBER(on_reached_value_custom, server::cpoint_value_remapper, centity_iooutput);
				MEMBER(on_engage, server::cpoint_value_remapper, centity_iooutput);
				MEMBER(on_disengage, server::cpoint_value_remapper, centity_iooutput);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cpoint_value_remapper : public cbase_entity

			class cpoint_world_text : public cmodel_point_entity
			{
			public:
				MEMBER_ARR(message_text_arr, server::cpoint_world_text, 512, char);
				MEMBER_ARR(font_name_arr, server::cpoint_world_text, 64, char);
				MEMBER(enabled, server::cpoint_world_text, bool);
				MEMBER(fullbright, server::cpoint_world_text, bool);
				MEMBER(world_units_per_px, server::cpoint_world_text, float);
				MEMBER(font_size, server::cpoint_world_text, float);
				MEMBER(depth_offset, server::cpoint_world_text, float);
				MEMBER(color, server::cpoint_world_text, color);
				MEMBER(justify_horizontal, server::cpoint_world_text, point_world_text_justify_horizontal_t);
				MEMBER(justify_vertical, server::cpoint_world_text, point_world_text_justify_vertical_t);
				MEMBER(reorient_mode, server::cpoint_world_text, point_world_text_reorient_mode_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cpoint_world_text : public cmodel_point_entity

			class cpoint_angle_sensor : public cpoint_entity
			{
			public:
				MEMBER(disabled, server::cpoint_angle_sensor, bool);
				MEMBER(look_at_name, server::cpoint_angle_sensor, cutl_symbol_large);
				MEMBER(h_target_entity, server::cpoint_angle_sensor, chandle<cbase_entity>);
				MEMBER(h_look_at_entity, server::cpoint_angle_sensor, chandle<cbase_entity>);
				MEMBER(duration, server::cpoint_angle_sensor, float);
				MEMBER(dot_tolerance, server::cpoint_angle_sensor, float);
				MEMBER(facing_time, server::cpoint_angle_sensor, game_time_t);
				MEMBER(fired, server::cpoint_angle_sensor, bool);
				MEMBER(on_facing_lookat, server::cpoint_angle_sensor, centity_iooutput);
				MEMBER(on_not_facing_lookat, server::cpoint_angle_sensor, centity_iooutput);
				MEMBER(target_dir, server::cpoint_angle_sensor, centity_output_template<vector>);
				MEMBER(facing_percentage, server::cpoint_angle_sensor, centity_output_template<float>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cpoint_angle_sensor : public cpoint_entity

			class cpoint_proximity_sensor : public cpoint_entity
			{
			public:
				MEMBER(disabled, server::cpoint_proximity_sensor, bool);
				MEMBER(h_target_entity, server::cpoint_proximity_sensor, chandle<cbase_entity>);
				MEMBER(distance, server::cpoint_proximity_sensor, centity_output_template<float>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cpoint_proximity_sensor : public cpoint_entity

			class cpoint_angular_velocity_sensor : public cpoint_entity
			{
			public:
				MEMBER(h_target_entity, server::cpoint_angular_velocity_sensor, chandle<cbase_entity>);
				MEMBER(threshold, server::cpoint_angular_velocity_sensor, float);
				MEMBER(last_compare_result, server::cpoint_angular_velocity_sensor, int);
				MEMBER(last_fire_result, server::cpoint_angular_velocity_sensor, int);
				MEMBER(fire_time, server::cpoint_angular_velocity_sensor, game_time_t);
				MEMBER(fire_interval, server::cpoint_angular_velocity_sensor, float);
				MEMBER(last_ang_velocity, server::cpoint_angular_velocity_sensor, float);
				MEMBER(last_orientation, server::cpoint_angular_velocity_sensor, qangle);
				MEMBER(vec_axis, server::cpoint_angular_velocity_sensor, vector);
				MEMBER(use_helper, server::cpoint_angular_velocity_sensor, bool);
				MEMBER(angular_velocity, server::cpoint_angular_velocity_sensor, centity_output_template<float>);
				MEMBER(on_less_than, server::cpoint_angular_velocity_sensor, centity_iooutput);
				MEMBER(on_less_than_or_equal_to, server::cpoint_angular_velocity_sensor, centity_iooutput);
				MEMBER(on_greater_than, server::cpoint_angular_velocity_sensor, centity_iooutput);
				MEMBER(on_greater_than_or_equal_to, server::cpoint_angular_velocity_sensor, centity_iooutput);
				MEMBER(on_equal_to, server::cpoint_angular_velocity_sensor, centity_iooutput);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cpoint_angular_velocity_sensor : public cpoint_entity

			class cpoint_velocity_sensor : public cpoint_entity
			{
			public:
				MEMBER(h_target_entity, server::cpoint_velocity_sensor, chandle<cbase_entity>);
				MEMBER(vec_axis, server::cpoint_velocity_sensor, vector);
				MEMBER(enabled, server::cpoint_velocity_sensor, bool);
				MEMBER(prev_velocity, server::cpoint_velocity_sensor, float);
				MEMBER(avg_interval, server::cpoint_velocity_sensor, float);
				MEMBER(velocity, server::cpoint_velocity_sensor, centity_output_template<float>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cpoint_velocity_sensor : public cpoint_entity

			class cpoint_hurt : public cpoint_entity
			{
			public:
				MEMBER(damage, server::cpoint_hurt, int);
				MEMBER(bits_damage_type, server::cpoint_hurt, int);
				MEMBER(radius, server::cpoint_hurt, float);
				MEMBER(delay, server::cpoint_hurt, float);
				MEMBER(str_target, server::cpoint_hurt, cutl_symbol_large);
				MEMBER(activator, server::cpoint_hurt, chandle<cbase_entity>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cpoint_hurt : public cpoint_entity

			class cpoint_teleport : public cserver_only_point_entity
			{
			public:
				MEMBER(v_save_origin, server::cpoint_teleport, vector);
				MEMBER(v_save_angles, server::cpoint_teleport, qangle);
				MEMBER(teleport_parented_entities, server::cpoint_teleport, bool);
				MEMBER(teleport_use_current_angle, server::cpoint_teleport, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cpoint_teleport : public cserver_only_point_entity

			class cenable_motion_fixup : public cbase_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cenable_motion_fixup : public cbase_entity

			class cfunc_prop_respawn_zone : public cbase_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cfunc_prop_respawn_zone : public cbase_entity

			class cragdoll_manager : public cbase_entity
			{
			public:
				MEMBER(current_max_ragdoll_count, server::cragdoll_manager, char);
				MEMBER(max_ragdoll_count, server::cragdoll_manager, int);
				MEMBER(save_important, server::cragdoll_manager, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cragdoll_manager : public cbase_entity

			class crevert_saved : public cmodel_point_entity
			{
			public:
				MEMBER(load_time, server::crevert_saved, float);
				MEMBER(duration, server::crevert_saved, float);
				MEMBER(hold_time, server::crevert_saved, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class crevert_saved : public cmodel_point_entity

			class cscene_list_manager : public clogical_entity
			{
			public:
				MEMBER(h_list_managers, server::cscene_list_manager, cutl_vector<chandle<cscene_list_manager>>);
				MEMBER_ARR(isz_scenes_arr, server::cscene_list_manager, 16, cutl_symbol_large);
				MEMBER_ARR(h_scenes_arr, server::cscene_list_manager, 16, chandle<cbase_entity>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cscene_list_manager : public clogical_entity

			class cscene_entity : public cpoint_entity
			{
			public:
				MEMBER(isz_scene_file, server::cscene_entity, cutl_symbol_large);
				MEMBER(isz_resume_scene_file, server::cscene_entity, cutl_symbol_large);
				MEMBER(isz_target1, server::cscene_entity, cutl_symbol_large);
				MEMBER(isz_target2, server::cscene_entity, cutl_symbol_large);
				MEMBER(isz_target3, server::cscene_entity, cutl_symbol_large);
				MEMBER(isz_target4, server::cscene_entity, cutl_symbol_large);
				MEMBER(isz_target5, server::cscene_entity, cutl_symbol_large);
				MEMBER(isz_target6, server::cscene_entity, cutl_symbol_large);
				MEMBER(isz_target7, server::cscene_entity, cutl_symbol_large);
				MEMBER(isz_target8, server::cscene_entity, cutl_symbol_large);
				MEMBER(h_target1, server::cscene_entity, chandle<cbase_entity>);
				MEMBER(h_target2, server::cscene_entity, chandle<cbase_entity>);
				MEMBER(h_target3, server::cscene_entity, chandle<cbase_entity>);
				MEMBER(h_target4, server::cscene_entity, chandle<cbase_entity>);
				MEMBER(h_target5, server::cscene_entity, chandle<cbase_entity>);
				MEMBER(h_target6, server::cscene_entity, chandle<cbase_entity>);
				MEMBER(h_target7, server::cscene_entity, chandle<cbase_entity>);
				MEMBER(h_target8, server::cscene_entity, chandle<cbase_entity>);
				MEMBER(is_playing_back, server::cscene_entity, bool);
				MEMBER(paused, server::cscene_entity, bool);
				MEMBER(multiplayer, server::cscene_entity, bool);
				MEMBER(autogenerated, server::cscene_entity, bool);
				MEMBER(force_client_time, server::cscene_entity, float);
				MEMBER(current_time, server::cscene_entity, float);
				MEMBER(frame_time, server::cscene_entity, float);
				MEMBER(cancel_at_next_interrupt, server::cscene_entity, bool);
				MEMBER(pitch, server::cscene_entity, float);
				MEMBER(automated, server::cscene_entity, bool);
				MEMBER(automated_action, server::cscene_entity, int);
				MEMBER(automation_delay, server::cscene_entity, float);
				MEMBER(automation_time, server::cscene_entity, float);
				MEMBER(h_waiting_for_this_resume_scene, server::cscene_entity, chandle<cbase_entity>);
				MEMBER(waiting_for_resume_scene, server::cscene_entity, bool);
				MEMBER(paused_via_input, server::cscene_entity, bool);
				MEMBER(pause_at_next_interrupt, server::cscene_entity, bool);
				MEMBER(waiting_for_actor, server::cscene_entity, bool);
				MEMBER(waiting_for_interrupt, server::cscene_entity, bool);
				MEMBER(interrupted_actors_scenes, server::cscene_entity, bool);
				MEMBER(break_on_non_idle, server::cscene_entity, bool);
				MEMBER(h_actor_list, server::cscene_entity, cnetwork_utl_vector_base<chandle<cbase_flex>>);
				MEMBER(h_remove_actor_list, server::cscene_entity, cutl_vector<chandle<cbase_entity>>);
				MEMBER(scene_flush_counter, server::cscene_entity, int);
				MEMBER(scene_string_index, server::cscene_entity, uint16_t);
				MEMBER(on_start, server::cscene_entity, centity_iooutput);
				MEMBER(on_completion, server::cscene_entity, centity_iooutput);
				MEMBER(on_canceled, server::cscene_entity, centity_iooutput);
				MEMBER(on_paused, server::cscene_entity, centity_iooutput);
				MEMBER(on_resumed, server::cscene_entity, centity_iooutput);
				MEMBER_ARR(on_trigger_arr, server::cscene_entity, 16, centity_iooutput);
				MEMBER(h_interrupt_scene, server::cscene_entity, chandle<cscene_entity>);
				MEMBER(interrupt_count, server::cscene_entity, int);
				MEMBER(scene_missing, server::cscene_entity, bool);
				MEMBER(interrupted, server::cscene_entity, bool);
				MEMBER(completed_early, server::cscene_entity, bool);
				MEMBER(interrupt_scene_finished, server::cscene_entity, bool);
				MEMBER(restoring, server::cscene_entity, bool);
				MEMBER(h_notify_scene_completion, server::cscene_entity, cutl_vector<chandle<cscene_entity>>);
				MEMBER(h_list_managers, server::cscene_entity, cutl_vector<chandle<cscene_list_manager>>);
				MEMBER(isz_sound_name, server::cscene_entity, cutl_symbol_large);
				MEMBER(h_actor, server::cscene_entity, chandle<cbase_flex>);
				MEMBER(h_activator, server::cscene_entity, chandle<cbase_entity>);
				MEMBER(busy_actor, server::cscene_entity, int);
				MEMBER(player_death_behavior, server::cscene_entity, scene_on_player_death_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cscene_entity : public cpoint_entity

			class cscripted_sequence : public cbase_entity
			{
			public:
				MEMBER(isz_entry, server::cscripted_sequence, cutl_symbol_large);
				MEMBER(isz_pre_idle, server::cscripted_sequence, cutl_symbol_large);
				MEMBER(isz_play, server::cscripted_sequence, cutl_symbol_large);
				MEMBER(isz_post_idle, server::cscripted_sequence, cutl_symbol_large);
				MEMBER(isz_modifier_to_add_on_play, server::cscripted_sequence, cutl_symbol_large);
				MEMBER(isz_next_script, server::cscripted_sequence, cutl_symbol_large);
				MEMBER(isz_entity, server::cscripted_sequence, cutl_symbol_large);
				MEMBER(isz_sync_group, server::cscripted_sequence, cutl_symbol_large);
				MEMBER(move_to, server::cscripted_sequence, scripted_move_to_t);
				MEMBER(is_playing_pre_idle, server::cscripted_sequence, bool);
				MEMBER(is_playing_entry, server::cscripted_sequence, bool);
				MEMBER(is_playing_action, server::cscripted_sequence, bool);
				MEMBER(is_playing_post_idle, server::cscripted_sequence, bool);
				MEMBER(loop_pre_idle_sequence, server::cscripted_sequence, bool);
				MEMBER(loop_action_sequence, server::cscripted_sequence, bool);
				MEMBER(loop_post_idle_sequence, server::cscripted_sequence, bool);
				MEMBER(synch_post_idles, server::cscripted_sequence, bool);
				MEMBER(ignore_gravity, server::cscripted_sequence, bool);
				MEMBER(disable_npccollisions, server::cscripted_sequence, bool);
				MEMBER(keep_animgraph_locked_post, server::cscripted_sequence, bool);
				MEMBER(dont_add_modifiers, server::cscripted_sequence, bool);
				MEMBER(radius, server::cscripted_sequence, float);
				MEMBER(repeat, server::cscripted_sequence, float);
				MEMBER(play_anim_fade_in_time, server::cscripted_sequence, float);
				MEMBER(move_interp_time, server::cscripted_sequence, float);
				MEMBER(ang_rate, server::cscripted_sequence, float);
				MEMBER(delay, server::cscripted_sequence, int);
				MEMBER(start_time, server::cscripted_sequence, game_time_t);
				MEMBER(wait_for_begin_sequence, server::cscripted_sequence, bool);
				MEMBER(saved_effects, server::cscripted_sequence, int);
				MEMBER(saved_flags, server::cscripted_sequence, int);
				MEMBER(saved_collision_group, server::cscripted_sequence, int);
				MEMBER(interruptable, server::cscripted_sequence, bool);
				MEMBER(sequence_started, server::cscripted_sequence, bool);
				MEMBER(prev_animated_every_tick, server::cscripted_sequence, bool);
				MEMBER(forced_animated_every_tick, server::cscripted_sequence, bool);
				MEMBER(position_relative_to_other_entity, server::cscripted_sequence, bool);
				MEMBER(h_target_ent, server::cscripted_sequence, chandle<cbase_entity>);
				MEMBER(h_next_cine, server::cscripted_sequence, chandle<cscripted_sequence>);
				MEMBER(thinking, server::cscripted_sequence, bool);
				MEMBER(initiated_self_delete, server::cscripted_sequence, bool);
				MEMBER(is_teleporting_due_to_move_to, server::cscripted_sequence, bool);
				MEMBER(allow_custom_interrupt_conditions, server::cscripted_sequence, bool);
				MEMBER(h_last_found_entity, server::cscripted_sequence, chandle<cbase_entity>);
				MEMBER(h_forced_target, server::cscripted_sequence, chandle<cbase_anim_graph>);
				MEMBER(dont_cancel_other_sequences, server::cscripted_sequence, bool);
				MEMBER(force_synch, server::cscripted_sequence, bool);
				MEMBER(target_was_asleep, server::cscripted_sequence, bool);
				MEMBER(prevent_update_yaw_on_finish, server::cscripted_sequence, bool);
				MEMBER(ensure_on_navmesh_on_finish, server::cscripted_sequence, bool);
				MEMBER(on_death_behavior, server::cscripted_sequence, scripted_on_death_t);
				MEMBER(conflict_response, server::cscripted_sequence, scripted_conflict_response_t);
				MEMBER(on_begin_sequence, server::cscripted_sequence, centity_iooutput);
				MEMBER(on_action_start_or_loop, server::cscripted_sequence, centity_iooutput);
				MEMBER(on_end_sequence, server::cscripted_sequence, centity_iooutput);
				MEMBER(on_post_idle_end_sequence, server::cscripted_sequence, centity_iooutput);
				MEMBER(on_cancel_sequence, server::cscripted_sequence, centity_iooutput);
				MEMBER(on_cancel_failed_sequence, server::cscripted_sequence, centity_iooutput);
				MEMBER_ARR(on_script_event_arr, server::cscripted_sequence, 8, centity_iooutput);
				MEMBER(mat_other_to_main, server::cscripted_sequence, ctransform);
				MEMBER(h_interaction_main_entity, server::cscripted_sequence, chandle<cbase_entity>);
				MEMBER(player_death_behavior, server::cscripted_sequence, int);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cscripted_sequence : public cbase_entity

			class csound_opvar_set_entity : public cbase_entity
			{
			public:
				MEMBER(isz_stack_name, server::csound_opvar_set_entity, cutl_symbol_large);
				MEMBER(isz_operator_name, server::csound_opvar_set_entity, cutl_symbol_large);
				MEMBER(isz_opvar_name, server::csound_opvar_set_entity, cutl_symbol_large);
				MEMBER(opvar_type, server::csound_opvar_set_entity, int);
				MEMBER(opvar_index, server::csound_opvar_set_entity, int);
				MEMBER(opvar_value, server::csound_opvar_set_entity, float);
				MEMBER(opvar_value_string, server::csound_opvar_set_entity, cutl_symbol_large);
				MEMBER(set_on_spawn, server::csound_opvar_set_entity, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class csound_opvar_set_entity : public cbase_entity

			class caisound : public cpoint_entity
			{
			public:
				MEMBER(sound_type, server::caisound, int);
				MEMBER(sound_context, server::caisound, int);
				MEMBER(volume, server::caisound, int);
				MEMBER(sound_index, server::caisound, int);
				MEMBER(duration, server::caisound, float);
				MEMBER(isz_proxy_entity_name, server::caisound, cutl_symbol_large);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class caisound : public cpoint_entity

			class csound_stack_save : public clogical_entity
			{
			public:
				MEMBER(isz_stack_name, server::csound_stack_save, cutl_symbol_large);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class csound_stack_save : public clogical_entity

			class csound_event_entity : public cbase_entity
			{
			public:
				MEMBER(start_on_spawn, server::csound_event_entity, bool);
				MEMBER(to_local_player, server::csound_event_entity, bool);
				MEMBER(stop_on_new, server::csound_event_entity, bool);
				MEMBER(save_restore, server::csound_event_entity, bool);
				MEMBER(saved_is_playing, server::csound_event_entity, bool);
				MEMBER(saved_elapsed_time, server::csound_event_entity, float);
				MEMBER(isz_source_entity_name, server::csound_event_entity, cutl_symbol_large);
				MEMBER(isz_attachment_name, server::csound_event_entity, cutl_symbol_large);
				MEMBER(on_guidchanged, server::csound_event_entity, centity_output_template<uint64_t>);
				MEMBER(on_sound_finished, server::csound_event_entity, centity_iooutput);
				MEMBER(isz_sound_name, server::csound_event_entity, cutl_symbol_large);
				MEMBER(h_source, server::csound_event_entity, centity_handle);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class csound_event_entity : public cbase_entity

			class csound_event_entity_alias_snd_event_point : public csound_event_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class csound_event_entity_alias_snd_event_point : public csound_event_entity

			class csound_event_aabbentity : public csound_event_entity
			{
			public:
				MEMBER(v_mins, server::csound_event_aabbentity, vector);
				MEMBER(v_maxs, server::csound_event_aabbentity, vector);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class csound_event_aabbentity : public csound_event_entity

			class csound_event_obbentity : public csound_event_entity
			{
			public:
				MEMBER(v_mins, server::csound_event_obbentity, vector);
				MEMBER(v_maxs, server::csound_event_obbentity, vector);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class csound_event_obbentity : public csound_event_entity

			class csound_event_path_corner_entity : public csound_event_entity
			{
			public:
				MEMBER(isz_path_corner, server::csound_event_path_corner_entity, cutl_symbol_large);
				MEMBER(count_max, server::csound_event_path_corner_entity, int);
				MEMBER(distance_max, server::csound_event_path_corner_entity, float);
				MEMBER(dist_max_sqr, server::csound_event_path_corner_entity, float);
				MEMBER(dot_product_max, server::csound_event_path_corner_entity, float);
				MEMBER(b_playing, server::csound_event_path_corner_entity, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class csound_event_path_corner_entity : public csound_event_entity

			class csound_event_parameter : public cbase_entity
			{
			public:
				MEMBER(isz_param_name, server::csound_event_parameter, cutl_symbol_large);
				MEMBER(float_value, server::csound_event_parameter, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class csound_event_parameter : public cbase_entity

			class cenv_soundscape_proxy_alias_snd_soundscape_proxy : public cenv_soundscape_proxy
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cenv_soundscape_proxy_alias_snd_soundscape_proxy : public cenv_soundscape_proxy

			class cenv_soundscape_alias_snd_soundscape : public cenv_soundscape
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cenv_soundscape_alias_snd_soundscape : public cenv_soundscape

			class cenv_soundscape_triggerable_alias_snd_soundscape_triggerable : public cenv_soundscape_triggerable
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cenv_soundscape_triggerable_alias_snd_soundscape_triggerable : public cenv_soundscape_triggerable

			class cnull_entity : public cbase_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cnull_entity : public cbase_entity

			class cbase_dmstart : public cpoint_entity
			{
			public:
				MEMBER(master, server::cbase_dmstart, cutl_symbol_large);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbase_dmstart : public cpoint_entity

			class cinfo_landmark : public cpoint_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cinfo_landmark : public cpoint_entity

			class csun : public cbase_model_entity
			{
			public:
				MEMBER(v_direction, server::csun, vector);
				MEMBER(clr_overlay, server::csun, color);
				MEMBER(isz_effect_name, server::csun, cutl_symbol_large);
				MEMBER(isz_sseffect_name, server::csun, cutl_symbol_large);
				MEMBER(on, server::csun, bool);
				MEMBER(bmax_color, server::csun, bool);
				MEMBER(size, server::csun, float);
				MEMBER(rotation, server::csun, float);
				MEMBER(haze_scale, server::csun, float);
				MEMBER(alpha_haze, server::csun, float);
				MEMBER(alpha_hdr, server::csun, float);
				MEMBER(alpha_scale, server::csun, float);
				MEMBER(hdrcolor_scale, server::csun, float);
				MEMBER(far_zscale, server::csun, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class csun : public cbase_model_entity

			class ctank_target_change : public cpoint_entity
			{
			public:
				MEMBER(new_target, server::ctank_target_change, cvariant_base<cvariant_default_allocator>);
				MEMBER(new_target_name, server::ctank_target_change, cutl_symbol_large);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ctank_target_change : public cpoint_entity

			class ctank_train_ai : public cpoint_entity
			{
			public:
				MEMBER(h_train, server::ctank_train_ai, chandle<cfunc_track_train>);
				MEMBER(h_target_entity, server::ctank_train_ai, chandle<cbase_entity>);
				MEMBER(sound_playing, server::ctank_train_ai, int);
				MEMBER(start_sound_name, server::ctank_train_ai, cutl_symbol_large);
				MEMBER(engine_sound_name, server::ctank_train_ai, cutl_symbol_large);
				MEMBER(movement_sound_name, server::ctank_train_ai, cutl_symbol_large);
				MEMBER(target_entity_name, server::ctank_train_ai, cutl_symbol_large);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ctank_train_ai : public cpoint_entity

			class chandle_test : public cbase_entity
			{
			public:
				MEMBER(handle, server::chandle_test, chandle<cbase_entity>);
				MEMBER(send_handle, server::chandle_test, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class chandle_test : public cbase_entity

			class chandle_dummy : public cbase_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class chandle_dummy : public cbase_entity

			class cplat_trigger : public cbase_model_entity
			{
			public:
				MEMBER(platform, server::cplat_trigger, chandle<cfunc_plat>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cplat_trigger : public cbase_model_entity

			class cfunc_train_controls : public cbase_model_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cfunc_train_controls : public cbase_model_entity

			class ctrigger_volume : public cbase_model_entity
			{
			public:
				MEMBER(filter_name, server::ctrigger_volume, cutl_symbol_large);
				MEMBER(h_filter, server::ctrigger_volume, chandle<cbase_filter>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ctrigger_volume : public cbase_model_entity

			class cinfo_teleport_destination : public cpoint_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cinfo_teleport_destination : public cpoint_entity

			class cai_change_target : public cbase_entity
			{
			public:
				MEMBER(isz_new_target, server::cai_change_target, cutl_symbol_large);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cai_change_target : public cbase_entity

			class cai_change_hint_group : public cbase_entity
			{
			public:
				MEMBER(search_type, server::cai_change_hint_group, int);
				MEMBER(str_search_name, server::cai_change_hint_group, cutl_symbol_large);
				MEMBER(str_new_hint_group, server::cai_change_hint_group, cutl_symbol_large);
				MEMBER(radius, server::cai_change_hint_group, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cai_change_hint_group : public cbase_entity

			class clogic_proximity : public cpoint_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class clogic_proximity : public cpoint_entity

			class cinfo_spawn_group_landmark : public cpoint_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cinfo_spawn_group_landmark : public cpoint_entity

			class cinfo_spawn_group_load_unload : public clogical_entity
			{
			public:
				MEMBER(on_spawn_group_load_started, server::cinfo_spawn_group_load_unload, centity_iooutput);
				MEMBER(on_spawn_group_load_finished, server::cinfo_spawn_group_load_unload, centity_iooutput);
				MEMBER(on_spawn_group_unload_started, server::cinfo_spawn_group_load_unload, centity_iooutput);
				MEMBER(on_spawn_group_unload_finished, server::cinfo_spawn_group_load_unload, centity_iooutput);
				MEMBER(isz_spawn_group_name, server::cinfo_spawn_group_load_unload, cutl_symbol_large);
				MEMBER(isz_spawn_group_filter_name, server::cinfo_spawn_group_load_unload, cutl_symbol_large);
				MEMBER(isz_landmark_name, server::cinfo_spawn_group_load_unload, cutl_symbol_large);
				MEMBER(s_fixed_spawn_group_name, server::cinfo_spawn_group_load_unload, cutl_string);
				MEMBER(timeout_interval, server::cinfo_spawn_group_load_unload, float);
				MEMBER(streaming_started, server::cinfo_spawn_group_load_unload, bool);
				MEMBER(unloading_started, server::cinfo_spawn_group_load_unload, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cinfo_spawn_group_load_unload : public clogical_entity

			class cpoint_pulse : public cbase_entity
			{
			public:
				MEMBER(s_name_fixup_static_prefix, server::cpoint_pulse, cutl_symbol_large);
				MEMBER(s_name_fixup_parent, server::cpoint_pulse, cutl_symbol_large);
				MEMBER(s_name_fixup_local, server::cpoint_pulse, cutl_symbol_large);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cpoint_pulse : public cbase_entity

			class cpoint_script : public cbase_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cpoint_script : public cbase_entity

			class cfunc_nav_obstruction : public cbase_model_entity
			{
			public:
				MEMBER(disabled, server::cfunc_nav_obstruction, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cfunc_nav_obstruction : public cbase_model_entity

			class cambient_generic : public cpoint_entity
			{
			public:
				MEMBER(radius, server::cambient_generic, float);
				MEMBER(max_radius, server::cambient_generic, float);
				MEMBER(sound_level, server::cambient_generic, soundlevel_t);
				MEMBER(dpv, server::cambient_generic, dynpitchvol_t);
				MEMBER(active, server::cambient_generic, bool);
				MEMBER(looping, server::cambient_generic, bool);
				MEMBER(isz_sound, server::cambient_generic, cutl_symbol_large);
				MEMBER(s_source_ent_name, server::cambient_generic, cutl_symbol_large);
				MEMBER(h_sound_source, server::cambient_generic, chandle<cbase_entity>);
				MEMBER(sound_source_ent_index, server::cambient_generic, centity_index);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cambient_generic : public cpoint_entity

			class cbase_toggle : public cbase_model_entity
			{
			public:
				MEMBER(toggle_state, server::cbase_toggle, toggle_state);
				MEMBER(move_distance, server::cbase_toggle, float);
				MEMBER(wait, server::cbase_toggle, float);
				MEMBER(lip, server::cbase_toggle, float);
				MEMBER(always_fire_blocked_outputs, server::cbase_toggle, bool);
				MEMBER(vec_position1, server::cbase_toggle, vector);
				MEMBER(vec_position2, server::cbase_toggle, vector);
				MEMBER(vec_move_ang, server::cbase_toggle, qangle);
				MEMBER(vec_angle1, server::cbase_toggle, qangle);
				MEMBER(vec_angle2, server::cbase_toggle, qangle);
				MEMBER(height, server::cbase_toggle, float);
				MEMBER(h_activator, server::cbase_toggle, chandle<cbase_entity>);
				MEMBER(vec_final_dest, server::cbase_toggle, vector);
				MEMBER(vec_final_angle, server::cbase_toggle, qangle);
				MEMBER(movement_type, server::cbase_toggle, int);
				MEMBER(s_master, server::cbase_toggle, cutl_symbol_large);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbase_toggle : public cbase_model_entity

			class cbase_button : public cbase_toggle
			{
			public:
				MEMBER(ang_move_entity_space, server::cbase_button, qangle);
				MEMBER(stay_pushed, server::cbase_button, bool);
				MEMBER(rotating, server::cbase_button, bool);
				MEMBER(ls, server::cbase_button, locksound_t);
				MEMBER(s_use_sound, server::cbase_button, cutl_symbol_large);
				MEMBER(s_locked_sound, server::cbase_button, cutl_symbol_large);
				MEMBER(s_unlocked_sound, server::cbase_button, cutl_symbol_large);
				MEMBER(locked, server::cbase_button, bool);
				MEMBER(disabled, server::cbase_button, bool);
				MEMBER(use_locked_time, server::cbase_button, game_time_t);
				MEMBER(solid_bsp, server::cbase_button, bool);
				MEMBER(on_damaged, server::cbase_button, centity_iooutput);
				MEMBER(on_pressed, server::cbase_button, centity_iooutput);
				MEMBER(on_use_locked, server::cbase_button, centity_iooutput);
				MEMBER(on_in, server::cbase_button, centity_iooutput);
				MEMBER(on_out, server::cbase_button, centity_iooutput);
				MEMBER(state, server::cbase_button, int);
				MEMBER(h_constraint, server::cbase_button, centity_handle);
				MEMBER(h_constraint_parent, server::cbase_button, centity_handle);
				MEMBER(force_npc_exclude, server::cbase_button, bool);
				MEMBER(s_glow_entity, server::cbase_button, cutl_symbol_large);
				MEMBER(glow_entity, server::cbase_button, chandle<cbase_model_entity>);
				MEMBER(usable, server::cbase_button, bool);
				MEMBER(display_text, server::cbase_button, cutl_symbol_large);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbase_button : public cbase_toggle

			class cphysical_button : public cbase_button
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cphysical_button : public cbase_button

			class crot_button : public cbase_button
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class crot_button : public cbase_button

			class cmomentary_rot_button : public crot_button
			{
			public:
				MEMBER(position, server::cmomentary_rot_button, centity_output_template<float>);
				MEMBER(on_unpressed, server::cmomentary_rot_button, centity_iooutput);
				MEMBER(on_fully_open, server::cmomentary_rot_button, centity_iooutput);
				MEMBER(on_fully_closed, server::cmomentary_rot_button, centity_iooutput);
				MEMBER(on_reached_position, server::cmomentary_rot_button, centity_iooutput);
				MEMBER(last_used, server::cmomentary_rot_button, int);
				MEMBER(start, server::cmomentary_rot_button, qangle);
				MEMBER(end, server::cmomentary_rot_button, qangle);
				MEMBER(ideal_yaw, server::cmomentary_rot_button, float);
				MEMBER(s_noise, server::cmomentary_rot_button, cutl_symbol_large);
				MEMBER(update_target, server::cmomentary_rot_button, bool);
				MEMBER(direction, server::cmomentary_rot_button, int);
				MEMBER(return_speed, server::cmomentary_rot_button, float);
				MEMBER(start_position, server::cmomentary_rot_button, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cmomentary_rot_button : public crot_button

			class cragdoll_magnet : public cpoint_entity
			{
			public:
				MEMBER(disabled, server::cragdoll_magnet, bool);
				MEMBER(radius, server::cragdoll_magnet, float);
				MEMBER(force, server::cragdoll_magnet, float);
				MEMBER(axis, server::cragdoll_magnet, vector);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cragdoll_magnet : public cpoint_entity

			class cbase_door : public cbase_toggle
			{
			public:
				MEMBER(ang_move_entity_space, server::cbase_door, qangle);
				MEMBER(vec_move_dir_parent_space, server::cbase_door, vector);
				MEMBER(ls, server::cbase_door, locksound_t);
				MEMBER(force_closed, server::cbase_door, bool);
				MEMBER(door_group, server::cbase_door, bool);
				MEMBER(locked, server::cbase_door, bool);
				MEMBER(ignore_debris, server::cbase_door, bool);
				MEMBER(e_spawn_position, server::cbase_door, func_door_spawn_pos_t);
				MEMBER(block_damage, server::cbase_door, float);
				MEMBER(noise_moving, server::cbase_door, cutl_symbol_large);
				MEMBER(noise_arrived, server::cbase_door, cutl_symbol_large);
				MEMBER(noise_moving_closed, server::cbase_door, cutl_symbol_large);
				MEMBER(noise_arrived_closed, server::cbase_door, cutl_symbol_large);
				MEMBER(chain_target, server::cbase_door, cutl_symbol_large);
				MEMBER(on_blocked_closing, server::cbase_door, centity_iooutput);
				MEMBER(on_blocked_opening, server::cbase_door, centity_iooutput);
				MEMBER(on_unblocked_closing, server::cbase_door, centity_iooutput);
				MEMBER(on_unblocked_opening, server::cbase_door, centity_iooutput);
				MEMBER(on_fully_closed, server::cbase_door, centity_iooutput);
				MEMBER(on_fully_open, server::cbase_door, centity_iooutput);
				MEMBER(on_close, server::cbase_door, centity_iooutput);
				MEMBER(on_open, server::cbase_door, centity_iooutput);
				MEMBER(on_locked_use, server::cbase_door, centity_iooutput);
				MEMBER(loop_move_sound, server::cbase_door, bool);
				MEMBER(create_nav_obstacle, server::cbase_door, bool);
				MEMBER(is_chaining, server::cbase_door, bool);
				MEMBER(is_usable, server::cbase_door, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbase_door : public cbase_toggle

			class centity_blocker : public cbase_model_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class centity_blocker : public cbase_model_entity

			class centity_dissolve : public cbase_model_entity
			{
			public:
				MEMBER(fade_in_start, server::centity_dissolve, float);
				MEMBER(fade_in_length, server::centity_dissolve, float);
				MEMBER(fade_out_model_start, server::centity_dissolve, float);
				MEMBER(fade_out_model_length, server::centity_dissolve, float);
				MEMBER(fade_out_start, server::centity_dissolve, float);
				MEMBER(fade_out_length, server::centity_dissolve, float);
				MEMBER(start_time, server::centity_dissolve, game_time_t);
				MEMBER(dissolve_type, server::centity_dissolve, entity_disolve_type_t);
				MEMBER(v_dissolver_origin, server::centity_dissolve, vector);
				MEMBER(magnitude, server::centity_dissolve, uint32_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class centity_dissolve : public cbase_model_entity

			class cenv_projected_texture : public cmodel_point_entity
			{
			public:
				MEMBER(h_target_entity, server::cenv_projected_texture, chandle<cbase_entity>);
				MEMBER(state, server::cenv_projected_texture, bool);
				MEMBER(always_update, server::cenv_projected_texture, bool);
				MEMBER(light_fov, server::cenv_projected_texture, float);
				MEMBER(enable_shadows, server::cenv_projected_texture, bool);
				MEMBER(simple_projection, server::cenv_projected_texture, bool);
				MEMBER(light_only_target, server::cenv_projected_texture, bool);
				MEMBER(light_world, server::cenv_projected_texture, bool);
				MEMBER(camera_space, server::cenv_projected_texture, bool);
				MEMBER(brightness_scale, server::cenv_projected_texture, float);
				MEMBER(light_color, server::cenv_projected_texture, color);
				MEMBER(intensity, server::cenv_projected_texture, float);
				MEMBER(linear_attenuation, server::cenv_projected_texture, float);
				MEMBER(quadratic_attenuation, server::cenv_projected_texture, float);
				MEMBER(volumetric, server::cenv_projected_texture, bool);
				MEMBER(noise_strength, server::cenv_projected_texture, float);
				MEMBER(flashlight_time, server::cenv_projected_texture, float);
				MEMBER(num_planes, server::cenv_projected_texture, uint32_t);
				MEMBER(plane_offset, server::cenv_projected_texture, float);
				MEMBER(volumetric_intensity, server::cenv_projected_texture, float);
				MEMBER(color_transition_time, server::cenv_projected_texture, float);
				MEMBER(ambient, server::cenv_projected_texture, float);
				MEMBER_ARR(spotlight_texture_name_arr, server::cenv_projected_texture, 512, char);
				MEMBER(spotlight_texture_frame, server::cenv_projected_texture, int);
				MEMBER(shadow_quality, server::cenv_projected_texture, uint32_t);
				MEMBER(near_z, server::cenv_projected_texture, float);
				MEMBER(far_z, server::cenv_projected_texture, float);
				MEMBER(projection_size, server::cenv_projected_texture, float);
				MEMBER(rotation, server::cenv_projected_texture, float);
				MEMBER(flip_horizontal, server::cenv_projected_texture, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cenv_projected_texture : public cmodel_point_entity

			class cenv_decal : public cbase_model_entity
			{
			public:
				MEMBER(h_decal_material, server::cenv_decal, cstrong_handle<info_for_resource_type_imaterial2>);
				MEMBER(width, server::cenv_decal, float);
				MEMBER(height, server::cenv_decal, float);
				MEMBER(depth, server::cenv_decal, float);
				MEMBER(render_order, server::cenv_decal, uint32_t);
				MEMBER(project_on_world, server::cenv_decal, bool);
				MEMBER(project_on_characters, server::cenv_decal, bool);
				MEMBER(project_on_water, server::cenv_decal, bool);
				MEMBER(depth_sort_bias, server::cenv_decal, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cenv_decal : public cbase_model_entity

			class cmessage : public cpoint_entity
			{
			public:
				MEMBER(isz_message, server::cmessage, cutl_symbol_large);
				MEMBER(message_volume, server::cmessage, float);
				MEMBER(message_attenuation, server::cmessage, int);
				MEMBER(radius, server::cmessage, float);
				MEMBER(s_noise, server::cmessage, cutl_symbol_large);
				MEMBER(on_show_message, server::cmessage, centity_iooutput);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cmessage : public cpoint_entity

			class cenv_microphone : public cpoint_entity
			{
			public:
				MEMBER(disabled, server::cenv_microphone, bool);
				MEMBER(h_measure_target, server::cenv_microphone, chandle<cbase_entity>);
				MEMBER(sound_mask, server::cenv_microphone, int);
				MEMBER(sensitivity, server::cenv_microphone, float);
				MEMBER(smooth_factor, server::cenv_microphone, float);
				MEMBER(max_range, server::cenv_microphone, float);
				MEMBER(isz_speaker_name, server::cenv_microphone, cutl_symbol_large);
				MEMBER(h_speaker, server::cenv_microphone, chandle<cbase_entity>);
				MEMBER(avoid_feedback, server::cenv_microphone, bool);
				MEMBER(speaker_dsppreset, server::cenv_microphone, int);
				MEMBER(isz_listen_filter, server::cenv_microphone, cutl_symbol_large);
				MEMBER(h_listen_filter, server::cenv_microphone, chandle<cbase_filter>);
				MEMBER(sound_level, server::cenv_microphone, centity_output_template<float>);
				MEMBER(on_routed_sound, server::cenv_microphone, centity_iooutput);
				MEMBER(on_heard_sound, server::cenv_microphone, centity_iooutput);
				MEMBER_ARR(last_sound_arr, server::cenv_microphone, 256, char);
				MEMBER(last_routed_frame, server::cenv_microphone, int);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cenv_microphone : public cpoint_entity

			class cbreakable : public cbase_model_entity
			{
			public:
				MEMBER(material, server::cbreakable, materials);
				MEMBER(h_breaker, server::cbreakable, chandle<cbase_entity>);
				MEMBER(explosion, server::cbreakable, explosions);
				MEMBER(isz_spawn_object, server::cbreakable, cutl_symbol_large);
				MEMBER(pressure_delay, server::cbreakable, float);
				MEMBER(min_health_dmg, server::cbreakable, int);
				MEMBER(isz_prop_data, server::cbreakable, cutl_symbol_large);
				MEMBER(impact_energy_scale, server::cbreakable, float);
				MEMBER(override_block_los, server::cbreakable, eoverride_block_los_t);
				MEMBER(on_break, server::cbreakable, centity_iooutput);
				MEMBER(on_health_changed, server::cbreakable, centity_output_template<float>);
				MEMBER(dmg_mod_bullet, server::cbreakable, float);
				MEMBER(dmg_mod_club, server::cbreakable, float);
				MEMBER(dmg_mod_explosive, server::cbreakable, float);
				MEMBER(dmg_mod_fire, server::cbreakable, float);
				MEMBER(isz_physics_damage_table_name, server::cbreakable, cutl_symbol_large);
				MEMBER(isz_base_prop_data, server::cbreakable, cutl_symbol_large);
				MEMBER(interactions, server::cbreakable, int);
				MEMBER(performance_mode, server::cbreakable, performance_mode_t);
				MEMBER(h_physics_attacker, server::cbreakable, chandle<cbase_player_pawn>);
				MEMBER(last_physics_influence_time, server::cbreakable, game_time_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbreakable : public cbase_model_entity

			class cfunc_move_linear : public cbase_toggle
			{
			public:
				MEMBER(authored_position, server::cfunc_move_linear, move_linear_authored_pos_t);
				MEMBER(ang_move_entity_space, server::cfunc_move_linear, qangle);
				MEMBER(vec_move_dir_parent_space, server::cfunc_move_linear, vector);
				MEMBER(sound_start, server::cfunc_move_linear, cutl_symbol_large);
				MEMBER(sound_stop, server::cfunc_move_linear, cutl_symbol_large);
				MEMBER(current_sound, server::cfunc_move_linear, cutl_symbol_large);
				MEMBER(block_damage, server::cfunc_move_linear, float);
				MEMBER(start_position, server::cfunc_move_linear, float);
				MEMBER(move_distance, server::cfunc_move_linear, float);
				MEMBER(on_fully_open, server::cfunc_move_linear, centity_iooutput);
				MEMBER(on_fully_closed, server::cfunc_move_linear, centity_iooutput);
				MEMBER(create_movable_nav_mesh, server::cfunc_move_linear, bool);
				MEMBER(create_nav_obstacle, server::cfunc_move_linear, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cfunc_move_linear : public cbase_toggle

			class cfunc_rotating : public cbase_model_entity
			{
			public:
				MEMBER(vec_move_ang, server::cfunc_rotating, qangle);
				MEMBER(fan_friction, server::cfunc_rotating, float);
				MEMBER(attenuation, server::cfunc_rotating, float);
				MEMBER(volume, server::cfunc_rotating, float);
				MEMBER(target_speed, server::cfunc_rotating, float);
				MEMBER(max_speed, server::cfunc_rotating, float);
				MEMBER(block_damage, server::cfunc_rotating, float);
				MEMBER(time_scale, server::cfunc_rotating, float);
				MEMBER(noise_running, server::cfunc_rotating, cutl_symbol_large);
				MEMBER(reversed, server::cfunc_rotating, bool);
				MEMBER(ang_start, server::cfunc_rotating, qangle);
				MEMBER(stop_at_start_pos, server::cfunc_rotating, bool);
				MEMBER(vec_client_origin, server::cfunc_rotating, vector);
				MEMBER(vec_client_angles, server::cfunc_rotating, qangle);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cfunc_rotating : public cbase_model_entity

			class citem_generic_trigger_helper : public cbase_model_entity
			{
			public:
				MEMBER(h_parent_item, server::citem_generic_trigger_helper, chandle<citem_generic>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class citem_generic_trigger_helper : public cbase_model_entity

			class crule_entity : public cbase_model_entity
			{
			public:
				MEMBER(isz_master, server::crule_entity, cutl_symbol_large);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class crule_entity : public cbase_model_entity

			class crule_point_entity : public crule_entity
			{
			public:
				MEMBER(score, server::crule_point_entity, int);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class crule_point_entity : public crule_entity

			class cgame_player_equip : public crule_point_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cgame_player_equip : public crule_point_entity

			class cmarkup_volume : public cbase_model_entity
			{
			public:
				MEMBER(enabled, server::cmarkup_volume, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cmarkup_volume : public cbase_model_entity

			class cmarkup_volume_tagged : public cmarkup_volume
			{
			public:
				MEMBER(is_group, server::cmarkup_volume_tagged, bool);
				MEMBER(group_by_prefab, server::cmarkup_volume_tagged, bool);
				MEMBER(group_by_volume, server::cmarkup_volume_tagged, bool);
				MEMBER(group_other_groups, server::cmarkup_volume_tagged, bool);
				MEMBER(is_in_group, server::cmarkup_volume_tagged, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cmarkup_volume_tagged : public cmarkup_volume

			class cmarkup_volume_with_ref : public cmarkup_volume_tagged
			{
			public:
				MEMBER(use_ref, server::cmarkup_volume_with_ref, bool);
				MEMBER(v_ref_pos, server::cmarkup_volume_with_ref, vector);
				MEMBER(ref_dot, server::cmarkup_volume_with_ref, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cmarkup_volume_with_ref : public cmarkup_volume_tagged

			class cfunc_brush : public cbase_model_entity
			{
			public:
				MEMBER(solidity, server::cfunc_brush, brush_solidities_e);
				MEMBER(disabled, server::cfunc_brush, int);
				MEMBER(solid_bsp, server::cfunc_brush, bool);
				MEMBER(isz_excluded_class, server::cfunc_brush, cutl_symbol_large);
				MEMBER(invert_exclusion, server::cfunc_brush, bool);
				MEMBER(scripted_movement, server::cfunc_brush, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cfunc_brush : public cbase_model_entity

			class cpath_track : public cpoint_entity
			{
			public:
				MEMBER(pnext_ptr, server::cpath_track, cpath_track*);
				MEMBER(pprevious_ptr, server::cpath_track, cpath_track*);
				MEMBER(paltpath_ptr, server::cpath_track, cpath_track*);
				MEMBER(radius, server::cpath_track, float);
				MEMBER(length, server::cpath_track, float);
				MEMBER(alt_name, server::cpath_track, cutl_symbol_large);
				MEMBER(iter_val, server::cpath_track, int);
				MEMBER(e_orientation_type, server::cpath_track, track_orientation_type_t);
				MEMBER(on_pass, server::cpath_track, centity_iooutput);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cpath_track : public cpoint_entity

			class cphys_box : public cbreakable
			{
			public:
				MEMBER(damage_type, server::cphys_box, int);
				MEMBER(mass_scale, server::cphys_box, float);
				MEMBER(damage_to_enable_motion, server::cphys_box, int);
				MEMBER(force_to_enable_motion, server::cphys_box, float);
				MEMBER(ang_preferred_carry_angles, server::cphys_box, qangle);
				MEMBER(not_solid_to_world, server::cphys_box, bool);
				MEMBER(enable_use_output, server::cphys_box, bool);
				MEMBER(exploitable_by_player, server::cphys_box, int);
				MEMBER(touch_output_per_entity_delay, server::cphys_box, float);
				MEMBER(on_damaged, server::cphys_box, centity_iooutput);
				MEMBER(on_awakened, server::cphys_box, centity_iooutput);
				MEMBER(on_motion_enabled, server::cphys_box, centity_iooutput);
				MEMBER(on_player_use, server::cphys_box, centity_iooutput);
				MEMBER(on_start_touch, server::cphys_box, centity_iooutput);
				MEMBER(h_carrying_player, server::cphys_box, chandle<cbase_player_pawn>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cphys_box : public cbreakable

			class cphys_explosion : public cpoint_entity
			{
			public:
				MEMBER(explode_on_spawn, server::cphys_explosion, bool);
				MEMBER(magnitude, server::cphys_explosion, float);
				MEMBER(damage, server::cphys_explosion, float);
				MEMBER(radius, server::cphys_explosion, float);
				MEMBER(target_entity_name, server::cphys_explosion, cutl_symbol_large);
				MEMBER(inner_radius, server::cphys_explosion, float);
				MEMBER(push_scale, server::cphys_explosion, float);
				MEMBER(convert_to_debris_when_possible, server::cphys_explosion, bool);
				MEMBER(on_pushed_player, server::cphys_explosion, centity_iooutput);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cphys_explosion : public cpoint_entity

			class cphys_impact : public cpoint_entity
			{
			public:
				MEMBER(damage, server::cphys_impact, float);
				MEMBER(distance, server::cphys_impact, float);
				MEMBER(direction_entity_name, server::cphys_impact, cutl_symbol_large);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cphys_impact : public cpoint_entity

			class crope_keyframe : public cbase_model_entity
			{
			public:
				MEMBER(rope_flags, server::crope_keyframe, uint16_t);
				MEMBER(next_link_name, server::crope_keyframe, cutl_symbol_large);
				MEMBER(slack, server::crope_keyframe, short);
				MEMBER(width, server::crope_keyframe, float);
				MEMBER(texture_scale, server::crope_keyframe, float);
				MEMBER(segments, server::crope_keyframe, uint8_t);
				MEMBER(constrain_between_endpoints, server::crope_keyframe, bool);
				MEMBER(str_rope_material_model, server::crope_keyframe, cutl_symbol_large);
				MEMBER(rope_material_model_index, server::crope_keyframe, cstrong_handle<info_for_resource_type_imaterial2>);
				MEMBER(subdiv, server::crope_keyframe, uint8_t);
				MEMBER(change_count, server::crope_keyframe, uint8_t);
				MEMBER(rope_length, server::crope_keyframe, short);
				MEMBER(locked_points, server::crope_keyframe, uint8_t);
				MEMBER(created_from_map_file, server::crope_keyframe, bool);
				MEMBER(scroll_speed, server::crope_keyframe, float);
				MEMBER(start_point_valid, server::crope_keyframe, bool);
				MEMBER(end_point_valid, server::crope_keyframe, bool);
				MEMBER(h_start_point, server::crope_keyframe, chandle<cbase_entity>);
				MEMBER(h_end_point, server::crope_keyframe, chandle<cbase_entity>);
				MEMBER(start_attachment, server::crope_keyframe, attachment_handle_t);
				MEMBER(end_attachment, server::crope_keyframe, attachment_handle_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class crope_keyframe : public cbase_model_entity

			class csound_ent : public cpoint_entity
			{
			public:
				MEMBER(free_sound, server::csound_ent, int);
				MEMBER(active_sound, server::csound_ent, int);
				MEMBER(c_last_active_sounds, server::csound_ent, int);
				MEMBER_ARR(sound_pool_arr, server::csound_ent, 128, csound);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class csound_ent : public cpoint_entity

			class cspotlight_end : public cbase_model_entity
			{
			public:
				MEMBER(light_scale, server::cspotlight_end, float);
				MEMBER(radius, server::cspotlight_end, float);
				MEMBER(v_spotlight_dir, server::cspotlight_end, vector);
				MEMBER(v_spotlight_org, server::cspotlight_end, vector);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cspotlight_end : public cbase_model_entity

			class cfunc_track_train : public cbase_model_entity
			{
			public:
				MEMBER(ppath, server::cfunc_track_train, chandle<cpath_track>);
				MEMBER(length, server::cfunc_track_train, float);
				MEMBER(v_pos_prev, server::cfunc_track_train, vector);
				MEMBER(ang_prev, server::cfunc_track_train, qangle);
				MEMBER(control_mins, server::cfunc_track_train, vector);
				MEMBER(control_maxs, server::cfunc_track_train, vector);
				MEMBER(last_block_pos, server::cfunc_track_train, vector);
				MEMBER(last_block_tick, server::cfunc_track_train, int);
				MEMBER(volume, server::cfunc_track_train, float);
				MEMBER(bank, server::cfunc_track_train, float);
				MEMBER(old_speed, server::cfunc_track_train, float);
				MEMBER(block_damage, server::cfunc_track_train, float);
				MEMBER(height, server::cfunc_track_train, float);
				MEMBER(max_speed, server::cfunc_track_train, float);
				MEMBER(dir, server::cfunc_track_train, float);
				MEMBER(isz_sound_move, server::cfunc_track_train, cutl_symbol_large);
				MEMBER(isz_sound_move_ping, server::cfunc_track_train, cutl_symbol_large);
				MEMBER(isz_sound_start, server::cfunc_track_train, cutl_symbol_large);
				MEMBER(isz_sound_stop, server::cfunc_track_train, cutl_symbol_large);
				MEMBER(str_path_target, server::cfunc_track_train, cutl_symbol_large);
				MEMBER(move_sound_min_duration, server::cfunc_track_train, float);
				MEMBER(move_sound_max_duration, server::cfunc_track_train, float);
				MEMBER(next_move_sound_time, server::cfunc_track_train, game_time_t);
				MEMBER(move_sound_min_pitch, server::cfunc_track_train, float);
				MEMBER(move_sound_max_pitch, server::cfunc_track_train, float);
				MEMBER(e_orientation_type, server::cfunc_track_train, train_orientation_type_t);
				MEMBER(e_velocity_type, server::cfunc_track_train, train_velocity_type_t);
				MEMBER(on_start, server::cfunc_track_train, centity_iooutput);
				MEMBER(on_next, server::cfunc_track_train, centity_iooutput);
				MEMBER(on_arrived_at_destination_node, server::cfunc_track_train, centity_iooutput);
				MEMBER(manual_speed_changes, server::cfunc_track_train, bool);
				MEMBER(desired_speed, server::cfunc_track_train, float);
				MEMBER(speed_change_time, server::cfunc_track_train, game_time_t);
				MEMBER(accel_speed, server::cfunc_track_train, float);
				MEMBER(decel_speed, server::cfunc_track_train, float);
				MEMBER(accel_to_speed, server::cfunc_track_train, bool);
				MEMBER(time_scale, server::cfunc_track_train, float);
				MEMBER(next_mpsound_time, server::cfunc_track_train, game_time_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cfunc_track_train : public cbase_model_entity

			class cbase_trigger : public cbase_toggle
			{
			public:
				MEMBER(disabled, server::cbase_trigger, bool);
				MEMBER(filter_name, server::cbase_trigger, cutl_symbol_large);
				MEMBER(h_filter, server::cbase_trigger, chandle<cbase_filter>);
				MEMBER(on_start_touch, server::cbase_trigger, centity_iooutput);
				MEMBER(on_start_touch_all, server::cbase_trigger, centity_iooutput);
				MEMBER(on_end_touch, server::cbase_trigger, centity_iooutput);
				MEMBER(on_end_touch_all, server::cbase_trigger, centity_iooutput);
				MEMBER(on_touching, server::cbase_trigger, centity_iooutput);
				MEMBER(on_not_touching, server::cbase_trigger, centity_iooutput);
				MEMBER(h_touching_entities, server::cbase_trigger, cutl_vector<chandle<cbase_entity>>);
				MEMBER(client_side_predicted, server::cbase_trigger, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbase_trigger : public cbase_toggle

			class ctrigger_multiple : public cbase_trigger
			{
			public:
				MEMBER(on_trigger, server::ctrigger_multiple, centity_iooutput);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ctrigger_multiple : public cbase_trigger

			class ctrigger_snd_sos_opvar : public cbase_trigger
			{
			public:
				MEMBER(h_touching_players, server::ctrigger_snd_sos_opvar, cutl_vector<chandle<cbase_entity>>);
				MEMBER(position, server::ctrigger_snd_sos_opvar, vector);
				MEMBER(center_size, server::ctrigger_snd_sos_opvar, float);
				MEMBER(min_val, server::ctrigger_snd_sos_opvar, float);
				MEMBER(max_val, server::ctrigger_snd_sos_opvar, float);
				MEMBER(wait, server::ctrigger_snd_sos_opvar, float);
				MEMBER(opvar_name, server::ctrigger_snd_sos_opvar, cutl_symbol_large);
				MEMBER(stack_name, server::ctrigger_snd_sos_opvar, cutl_symbol_large);
				MEMBER(operator_name, server::ctrigger_snd_sos_opvar, cutl_symbol_large);
				MEMBER(vol_is2d, server::ctrigger_snd_sos_opvar, bool);
				MEMBER_ARR(opvar_name_char_arr, server::ctrigger_snd_sos_opvar, 256, char);
				MEMBER_ARR(stack_name_char_arr, server::ctrigger_snd_sos_opvar, 256, char);
				MEMBER_ARR(operator_name_char_arr, server::ctrigger_snd_sos_opvar, 256, char);
				MEMBER(vec_norm_pos, server::ctrigger_snd_sos_opvar, vector);
				MEMBER(norm_center_size, server::ctrigger_snd_sos_opvar, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ctrigger_snd_sos_opvar : public cbase_trigger

			class ctrigger_hurt : public cbase_trigger
			{
			public:
				MEMBER(original_damage, server::ctrigger_hurt, float);
				MEMBER(damage, server::ctrigger_hurt, float);
				MEMBER(damage_cap, server::ctrigger_hurt, float);
				MEMBER(last_dmg_time, server::ctrigger_hurt, game_time_t);
				MEMBER(forgiveness_delay, server::ctrigger_hurt, float);
				MEMBER(bits_damage_inflict, server::ctrigger_hurt, int);
				MEMBER(damage_model, server::ctrigger_hurt, int);
				MEMBER(no_dmg_force, server::ctrigger_hurt, bool);
				MEMBER(v_damage_force, server::ctrigger_hurt, vector);
				MEMBER(think_always, server::ctrigger_hurt, bool);
				MEMBER(hurt_think_period, server::ctrigger_hurt, float);
				MEMBER(on_hurt, server::ctrigger_hurt, centity_iooutput);
				MEMBER(on_hurt_player, server::ctrigger_hurt, centity_iooutput);
				MEMBER(hurt_entities, server::ctrigger_hurt, cutl_vector<chandle<cbase_entity>>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ctrigger_hurt : public cbase_trigger

			class ctrigger_hurt_ghost : public ctrigger_hurt
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ctrigger_hurt_ghost : public ctrigger_hurt

			class ctrigger_callback : public cbase_trigger
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ctrigger_callback : public cbase_trigger

			class ctrigger_lerp_object : public cbase_trigger
			{
			public:
				MEMBER(isz_lerp_target, server::ctrigger_lerp_object, cutl_symbol_large);
				MEMBER(h_lerp_target, server::ctrigger_lerp_object, chandle<cbase_entity>);
				MEMBER(isz_lerp_target_attachment, server::ctrigger_lerp_object, cutl_symbol_large);
				MEMBER(h_lerp_target_attachment, server::ctrigger_lerp_object, attachment_handle_t);
				MEMBER(lerp_duration, server::ctrigger_lerp_object, float);
				MEMBER(lerp_restore_move_type, server::ctrigger_lerp_object, bool);
				MEMBER(single_lerp_object, server::ctrigger_lerp_object, bool);
				MEMBER(vec_lerping_objects, server::ctrigger_lerp_object, cutl_vector<lerpdata_t>);
				MEMBER(isz_lerp_effect, server::ctrigger_lerp_object, cutl_symbol_large);
				MEMBER(isz_lerp_sound, server::ctrigger_lerp_object, cutl_symbol_large);
				MEMBER(on_lerp_started, server::ctrigger_lerp_object, centity_iooutput);
				MEMBER(on_lerp_finished, server::ctrigger_lerp_object, centity_iooutput);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ctrigger_lerp_object : public cbase_trigger

			class cchange_level : public cbase_trigger
			{
			public:
				MEMBER(s_map_name, server::cchange_level, cutl_string);
				MEMBER(s_landmark_name, server::cchange_level, cutl_string);
				MEMBER(on_change_level, server::cchange_level, centity_iooutput);
				MEMBER(touched, server::cchange_level, bool);
				MEMBER(no_touch, server::cchange_level, bool);
				MEMBER(new_chapter, server::cchange_level, bool);
				MEMBER(on_change_level_fired, server::cchange_level, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cchange_level : public cbase_trigger

			class ctrigger_teleport : public cbase_trigger
			{
			public:
				MEMBER(landmark, server::ctrigger_teleport, cutl_symbol_large);
				MEMBER(use_landmark_angles, server::ctrigger_teleport, bool);
				MEMBER(mirror_player, server::ctrigger_teleport, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ctrigger_teleport : public cbase_trigger

			class ctrigger_fan : public cbase_trigger
			{
			public:
				MEMBER(v_fan_origin, server::ctrigger_fan, vector);
				MEMBER(v_fan_end, server::ctrigger_fan, vector);
				MEMBER(v_noise, server::ctrigger_fan, vector);
				MEMBER(force, server::ctrigger_fan, float);
				MEMBER(player_force, server::ctrigger_fan, float);
				MEMBER(ramp_time, server::ctrigger_fan, float);
				MEMBER(falloff, server::ctrigger_fan, bool);
				MEMBER(push_player, server::ctrigger_fan, bool);
				MEMBER(ramp_down, server::ctrigger_fan, bool);
				MEMBER(add_noise, server::ctrigger_fan, bool);
				MEMBER(ramp_timer, server::ctrigger_fan, countdown_timer);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ctrigger_fan : public cbase_trigger

			class cnav_walkable : public cpoint_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cnav_walkable : public cpoint_entity

			class cfunc_nav_blocker : public cbase_model_entity
			{
			public:
				MEMBER(disabled, server::cfunc_nav_blocker, bool);
				MEMBER(blocked_team_number, server::cfunc_nav_blocker, int);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cfunc_nav_blocker : public cbase_model_entity

			class cnav_link_area_entity : public cpoint_entity
			{
			public:
				MEMBER(width, server::cnav_link_area_entity, float);
				MEMBER(v_locator_offset, server::cnav_link_area_entity, vector);
				MEMBER(q_locator_angles_offset, server::cnav_link_area_entity, qangle);
				MEMBER(str_movement_forward, server::cnav_link_area_entity, cutl_symbol_large);
				MEMBER(str_movement_reverse, server::cnav_link_area_entity, cutl_symbol_large);
				MEMBER(nav_link_id_forward, server::cnav_link_area_entity, int);
				MEMBER(nav_link_id_reverse, server::cnav_link_area_entity, int);
				MEMBER(enabled, server::cnav_link_area_entity, bool);
				MEMBER(str_filter_name, server::cnav_link_area_entity, cutl_symbol_large);
				MEMBER(h_filter, server::cnav_link_area_entity, chandle<cbase_filter>);
				MEMBER(on_nav_link_start, server::cnav_link_area_entity, centity_iooutput);
				MEMBER(on_nav_link_finish, server::cnav_link_area_entity, centity_iooutput);
				MEMBER(is_terminus, server::cnav_link_area_entity, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cnav_link_area_entity : public cpoint_entity

			class cnav_space_info : public cpoint_entity
			{
			public:
				MEMBER(create_flight_space, server::cnav_space_info, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cnav_space_info : public cpoint_entity

			class cbeam : public cbase_model_entity
			{
			public:
				MEMBER(frame_rate, server::cbeam, float);
				MEMBER(hdrcolor_scale, server::cbeam, float);
				MEMBER(fire_time, server::cbeam, game_time_t);
				MEMBER(damage, server::cbeam, float);
				MEMBER(num_beam_ents, server::cbeam, uint8_t);
				MEMBER(h_base_material, server::cbeam, cstrong_handle<info_for_resource_type_imaterial2>);
				MEMBER(halo_index, server::cbeam, cstrong_handle<info_for_resource_type_imaterial2>);
				MEMBER(beam_type, server::cbeam, beam_type_t);
				MEMBER(beam_flags, server::cbeam, uint32_t);
				MEMBER_ARR(h_attach_entity_arr, server::cbeam, 10, chandle<cbase_entity>);
				MEMBER_ARR(attach_index_arr, server::cbeam, 10, attachment_handle_t);
				MEMBER(width, server::cbeam, float);
				MEMBER(end_width, server::cbeam, float);
				MEMBER(fade_length, server::cbeam, float);
				MEMBER(halo_scale, server::cbeam, float);
				MEMBER(amplitude, server::cbeam, float);
				MEMBER(start_frame, server::cbeam, float);
				MEMBER(speed, server::cbeam, float);
				MEMBER(frame, server::cbeam, float);
				MEMBER(clip_style, server::cbeam, beam_clip_style_t);
				MEMBER(turned_off, server::cbeam, bool);
				MEMBER(vec_end_pos, server::cbeam, vector);
				MEMBER(h_end_entity, server::cbeam, chandle<cbase_entity>);
				MEMBER(dissolve_type, server::cbeam, int);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbeam : public cbase_model_entity

			class cfunc_ladder : public cbase_model_entity
			{
			public:
				MEMBER(vec_ladder_dir, server::cfunc_ladder, vector);
				MEMBER(dismounts, server::cfunc_ladder, cutl_vector<chandle<cinfo_ladder_dismount>>);
				MEMBER(vec_local_top, server::cfunc_ladder, vector);
				MEMBER(vec_player_mount_position_top, server::cfunc_ladder, vector);
				MEMBER(vec_player_mount_position_bottom, server::cfunc_ladder, vector);
				MEMBER(auto_ride_speed, server::cfunc_ladder, float);
				MEMBER(disabled, server::cfunc_ladder, bool);
				MEMBER(fake_ladder, server::cfunc_ladder, bool);
				MEMBER(has_slack, server::cfunc_ladder, bool);
				MEMBER(surface_prop_name, server::cfunc_ladder, cutl_symbol_large);
				MEMBER(on_player_got_on_ladder, server::cfunc_ladder, centity_iooutput);
				MEMBER(on_player_got_off_ladder, server::cfunc_ladder, centity_iooutput);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cfunc_ladder : public cbase_model_entity

			class cfunc_shatterglass : public cbase_model_entity
			{
			public:
				MEMBER(h_glass_material_damaged, server::cfunc_shatterglass, cstrong_handle<info_for_resource_type_imaterial2>);
				MEMBER(h_glass_material_undamaged, server::cfunc_shatterglass, cstrong_handle<info_for_resource_type_imaterial2>);
				MEMBER(h_concrete_material_edge_face, server::cfunc_shatterglass, cstrong_handle<info_for_resource_type_imaterial2>);
				MEMBER(h_concrete_material_edge_caps, server::cfunc_shatterglass, cstrong_handle<info_for_resource_type_imaterial2>);
				MEMBER(h_concrete_material_edge_fins, server::cfunc_shatterglass, cstrong_handle<info_for_resource_type_imaterial2>);
				MEMBER(mat_panel_transform, server::cfunc_shatterglass, matrix3x4_t);
				MEMBER(mat_panel_transform_ws_temp, server::cfunc_shatterglass, matrix3x4_t);
				MEMBER(vec_shatter_glass_shards, server::cfunc_shatterglass, cutl_vector<uint32_t>);
				MEMBER(panel_size, server::cfunc_shatterglass, vector2d);
				MEMBER(vec_panel_normal_ws, server::cfunc_shatterglass, vector);
				MEMBER(num_shards_ever_created, server::cfunc_shatterglass, int);
				MEMBER(last_shatter_sound_emit_time, server::cfunc_shatterglass, game_time_t);
				MEMBER(last_cleanup_time, server::cfunc_shatterglass, game_time_t);
				MEMBER(init_at_time, server::cfunc_shatterglass, game_time_t);
				MEMBER(glass_thickness, server::cfunc_shatterglass, float);
				MEMBER(spawn_invulnerability, server::cfunc_shatterglass, float);
				MEMBER(break_silent, server::cfunc_shatterglass, bool);
				MEMBER(break_shardless, server::cfunc_shatterglass, bool);
				MEMBER(broken, server::cfunc_shatterglass, bool);
				MEMBER(has_rate_limited_shards, server::cfunc_shatterglass, bool);
				MEMBER(glass_nav_ignore, server::cfunc_shatterglass, bool);
				MEMBER(glass_in_frame, server::cfunc_shatterglass, bool);
				MEMBER(start_broken, server::cfunc_shatterglass, bool);
				MEMBER(initial_damage_type, server::cfunc_shatterglass, uint8_t);
				MEMBER(damage_positioning_entity_name01, server::cfunc_shatterglass, cutl_symbol_large);
				MEMBER(damage_positioning_entity_name02, server::cfunc_shatterglass, cutl_symbol_large);
				MEMBER(damage_positioning_entity_name03, server::cfunc_shatterglass, cutl_symbol_large);
				MEMBER(damage_positioning_entity_name04, server::cfunc_shatterglass, cutl_symbol_large);
				MEMBER(v_initial_damage_positions, server::cfunc_shatterglass, cutl_vector<vector>);
				MEMBER(v_extra_damage_positions, server::cfunc_shatterglass, cutl_vector<vector>);
				MEMBER(on_broken, server::cfunc_shatterglass, centity_iooutput);
				MEMBER(surface_type, server::cfunc_shatterglass, uint8_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cfunc_shatterglass : public cbase_model_entity

			class cprecipitation_vdata : public centity_subclass_vdata_base
			{
			public:
				MEMBER(particle_precipitation_effect, server::cprecipitation_vdata, cresource_name_typed<cweak_handle<info_for_resource_type_iparticle_system_definition>>);
				MEMBER(inner_distance, server::cprecipitation_vdata, float);
				MEMBER(attach_type, server::cprecipitation_vdata, particle_attachment_t);
				MEMBER(batch_same_volume_type, server::cprecipitation_vdata, bool);
				MEMBER(rtenv_cp, server::cprecipitation_vdata, int);
				MEMBER(rtenv_cpcomponent, server::cprecipitation_vdata, int);
				MEMBER(modifier, server::cprecipitation_vdata, cutl_string);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cprecipitation_vdata : public centity_subclass_vdata_base

			class csprite : public cbase_model_entity
			{
			public:
				MEMBER(h_sprite_material, server::csprite, cstrong_handle<info_for_resource_type_imaterial2>);
				MEMBER(h_attached_to_entity, server::csprite, chandle<cbase_entity>);
				MEMBER(attachment, server::csprite, attachment_handle_t);
				MEMBER(sprite_framerate, server::csprite, float);
				MEMBER(frame, server::csprite, float);
				MEMBER(die_time, server::csprite, game_time_t);
				MEMBER(brightness, server::csprite, uint32_t);
				MEMBER(brightness_duration, server::csprite, float);
				MEMBER(sprite_scale, server::csprite, float);
				MEMBER(scale_duration, server::csprite, float);
				MEMBER(world_space_scale, server::csprite, bool);
				MEMBER(glow_proxy_size, server::csprite, float);
				MEMBER(hdrcolor_scale, server::csprite, float);
				MEMBER(last_time, server::csprite, game_time_t);
				MEMBER(max_frame, server::csprite, float);
				MEMBER(start_scale, server::csprite, float);
				MEMBER(dest_scale, server::csprite, float);
				MEMBER(scale_time_start, server::csprite, game_time_t);
				MEMBER(start_brightness, server::csprite, int);
				MEMBER(dest_brightness, server::csprite, int);
				MEMBER(brightness_time_start, server::csprite, game_time_t);
				MEMBER(sprite_width, server::csprite, int);
				MEMBER(sprite_height, server::csprite, int);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class csprite : public cbase_model_entity

			class csprite_oriented : public csprite
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class csprite_oriented : public csprite

			class cbase_client_uientity : public cbase_model_entity
			{
			public:
				MEMBER(enabled, server::cbase_client_uientity, bool);
				MEMBER(dialog_xmlname, server::cbase_client_uientity, cutl_symbol_large);
				MEMBER(panel_class_name, server::cbase_client_uientity, cutl_symbol_large);
				MEMBER(panel_id, server::cbase_client_uientity, cutl_symbol_large);
				MEMBER(custom_output0, server::cbase_client_uientity, centity_iooutput);
				MEMBER(custom_output1, server::cbase_client_uientity, centity_iooutput);
				MEMBER(custom_output2, server::cbase_client_uientity, centity_iooutput);
				MEMBER(custom_output3, server::cbase_client_uientity, centity_iooutput);
				MEMBER(custom_output4, server::cbase_client_uientity, centity_iooutput);
				MEMBER(custom_output5, server::cbase_client_uientity, centity_iooutput);
				MEMBER(custom_output6, server::cbase_client_uientity, centity_iooutput);
				MEMBER(custom_output7, server::cbase_client_uientity, centity_iooutput);
				MEMBER(custom_output8, server::cbase_client_uientity, centity_iooutput);
				MEMBER(custom_output9, server::cbase_client_uientity, centity_iooutput);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbase_client_uientity : public cbase_model_entity

			class cpoint_client_uidialog : public cbase_client_uientity
			{
			public:
				MEMBER(h_activator, server::cpoint_client_uidialog, chandle<cbase_entity>);
				MEMBER(start_enabled, server::cpoint_client_uidialog, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cpoint_client_uidialog : public cbase_client_uientity

			class cpoint_client_uiworld_panel : public cbase_client_uientity
			{
			public:
				MEMBER(ignore_input, server::cpoint_client_uiworld_panel, bool);
				MEMBER(lit, server::cpoint_client_uiworld_panel, bool);
				MEMBER(follow_player_across_teleport, server::cpoint_client_uiworld_panel, bool);
				MEMBER(width, server::cpoint_client_uiworld_panel, float);
				MEMBER(height, server::cpoint_client_uiworld_panel, float);
				MEMBER(dpi, server::cpoint_client_uiworld_panel, float);
				MEMBER(interact_distance, server::cpoint_client_uiworld_panel, float);
				MEMBER(depth_offset, server::cpoint_client_uiworld_panel, float);
				MEMBER(un_owner_context, server::cpoint_client_uiworld_panel, uint32_t);
				MEMBER(un_horizontal_align, server::cpoint_client_uiworld_panel, uint32_t);
				MEMBER(un_vertical_align, server::cpoint_client_uiworld_panel, uint32_t);
				MEMBER(un_orientation, server::cpoint_client_uiworld_panel, uint32_t);
				MEMBER(allow_interaction_from_all_scene_worlds, server::cpoint_client_uiworld_panel, bool);
				MEMBER(vec_cssclasses, server::cpoint_client_uiworld_panel, cnetwork_utl_vector_base<cutl_symbol_large>);
				MEMBER(opaque, server::cpoint_client_uiworld_panel, bool);
				MEMBER(no_depth, server::cpoint_client_uiworld_panel, bool);
				MEMBER(render_backface, server::cpoint_client_uiworld_panel, bool);
				MEMBER(use_off_screen_indicator, server::cpoint_client_uiworld_panel, bool);
				MEMBER(exclude_from_save_games, server::cpoint_client_uiworld_panel, bool);
				MEMBER(grabbable, server::cpoint_client_uiworld_panel, bool);
				MEMBER(only_render_to_texture, server::cpoint_client_uiworld_panel, bool);
				MEMBER(disable_mip_gen, server::cpoint_client_uiworld_panel, bool);
				MEMBER(explicit_image_layout, server::cpoint_client_uiworld_panel, int);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cpoint_client_uiworld_panel : public cbase_client_uientity

			class cpoint_client_uiworld_text_panel : public cpoint_client_uiworld_panel
			{
			public:
				MEMBER_ARR(message_text_arr, server::cpoint_client_uiworld_text_panel, 512, char);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cpoint_client_uiworld_text_panel : public cpoint_client_uiworld_panel

			class cinfo_offscreen_panorama_texture : public cpoint_entity
			{
			public:
				MEMBER(disabled, server::cinfo_offscreen_panorama_texture, bool);
				MEMBER(resolution_x, server::cinfo_offscreen_panorama_texture, int);
				MEMBER(resolution_y, server::cinfo_offscreen_panorama_texture, int);
				MEMBER(layout_file_name, server::cinfo_offscreen_panorama_texture, cutl_symbol_large);
				MEMBER(render_attr_name, server::cinfo_offscreen_panorama_texture, cutl_symbol_large);
				MEMBER(target_entities, server::cinfo_offscreen_panorama_texture, cnetwork_utl_vector_base<chandle<cbase_model_entity>>);
				MEMBER(target_change_count, server::cinfo_offscreen_panorama_texture, int);
				MEMBER(vec_cssclasses, server::cinfo_offscreen_panorama_texture, cnetwork_utl_vector_base<cutl_symbol_large>);
				MEMBER(targets_name, server::cinfo_offscreen_panorama_texture, cutl_symbol_large);
				MEMBER(additional_target_entities, server::cinfo_offscreen_panorama_texture, cutl_vector<chandle<cbase_model_entity>>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cinfo_offscreen_panorama_texture : public cpoint_entity

			class cattribute_container : public cattribute_manager
			{
			public:
				MEMBER(item, server::cattribute_container, cecon_item_view);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cattribute_container : public cattribute_manager

			class cinfo_player_terrorist : public spawn_point
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cinfo_player_terrorist : public spawn_point

			class cinfo_player_counterterrorist : public spawn_point
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cinfo_player_counterterrorist : public spawn_point

			class cinfo_deathmatch_spawn : public spawn_point
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cinfo_deathmatch_spawn : public spawn_point

			class cinfo_enemy_terrorist_spawn : public spawn_point_coop_enemy
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cinfo_enemy_terrorist_spawn : public spawn_point_coop_enemy

			class cpoint_give_ammo : public cpoint_entity
			{
			public:
				MEMBER(activator, server::cpoint_give_ammo, chandle<cbase_entity>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cpoint_give_ammo : public cpoint_entity

			class cbomb_target : public cbase_trigger
			{
			public:
				MEMBER(on_bomb_explode, server::cbomb_target, centity_iooutput);
				MEMBER(on_bomb_planted, server::cbomb_target, centity_iooutput);
				MEMBER(on_bomb_defused, server::cbomb_target, centity_iooutput);
				MEMBER(is_bomb_site_b, server::cbomb_target, bool);
				MEMBER(is_heist_bomb_target, server::cbomb_target, bool);
				MEMBER(bomb_planted_here, server::cbomb_target, bool);
				MEMBER(mount_target, server::cbomb_target, cutl_symbol_large);
				MEMBER(h_instructor_hint, server::cbomb_target, chandle<cbase_entity>);
				MEMBER(bomb_site_designation, server::cbomb_target, int);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbomb_target : public cbase_trigger

			class cinfo_instructor_hint_bomb_target_a : public cpoint_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cinfo_instructor_hint_bomb_target_a : public cpoint_entity

			class cinfo_instructor_hint_bomb_target_b : public cpoint_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cinfo_instructor_hint_bomb_target_b : public cpoint_entity

			class chostage_rescue_zone_shim : public cbase_trigger
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class chostage_rescue_zone_shim : public cbase_trigger

			class chostage_rescue_zone : public chostage_rescue_zone_shim
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class chostage_rescue_zone : public chostage_rescue_zone_shim

			class cinfo_instructor_hint_hostage_rescue_zone : public cpoint_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cinfo_instructor_hint_hostage_rescue_zone : public cpoint_entity

			class ctrigger_buoyancy : public cbase_trigger
			{
			public:
				MEMBER(buoyancy_helper, server::ctrigger_buoyancy, cbuoyancy_helper);
				MEMBER(fluid_density, server::ctrigger_buoyancy, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ctrigger_buoyancy : public cbase_trigger

			class cfunc_water : public cbase_model_entity
			{
			public:
				MEMBER(buoyancy_helper, server::cfunc_water, cbuoyancy_helper);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cfunc_water : public cbase_model_entity

			class ccssprite : public csprite
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccssprite : public csprite

			class ccsplayer_controller : public cbase_player_controller
			{
			public:
				MEMBER(in_game_money_services_ptr, server::ccsplayer_controller, ccsplayer_controller_in_game_money_services*);
				MEMBER(inventory_services_ptr, server::ccsplayer_controller, ccsplayer_controller_inventory_services*);
				MEMBER(action_tracking_services_ptr, server::ccsplayer_controller, ccsplayer_controller_action_tracking_services*);
				MEMBER(damage_services_ptr, server::ccsplayer_controller, ccsplayer_controller_damage_services*);
				MEMBER(ping, server::ccsplayer_controller, uint32_t);
				MEMBER(has_communication_abuse_mute, server::ccsplayer_controller, bool);
				MEMBER(crosshair_codes, server::ccsplayer_controller, cutl_symbol_large);
				MEMBER(pending_team_num, server::ccsplayer_controller, uint8_t);
				MEMBER(force_team_time, server::ccsplayer_controller, game_time_t);
				MEMBER(comp_teammate_color, server::ccsplayer_controller, int);
				MEMBER(ever_played_on_team, server::ccsplayer_controller, bool);
				MEMBER(attempted_to_get_color, server::ccsplayer_controller, bool);
				MEMBER(teammate_preferred_color, server::ccsplayer_controller, int);
				MEMBER(team_changed, server::ccsplayer_controller, bool);
				MEMBER(in_switch_team, server::ccsplayer_controller, bool);
				MEMBER(has_seen_join_game, server::ccsplayer_controller, bool);
				MEMBER(just_became_spectator, server::ccsplayer_controller, bool);
				MEMBER(switch_teams_on_next_round_reset, server::ccsplayer_controller, bool);
				MEMBER(remove_all_items_on_next_round_reset, server::ccsplayer_controller, bool);
				MEMBER(clan, server::ccsplayer_controller, cutl_symbol_large);
				MEMBER_ARR(clan_name_arr, server::ccsplayer_controller, 32, char);
				MEMBER(coaching_team, server::ccsplayer_controller, int);
				MEMBER(player_dominated, server::ccsplayer_controller, uint64_t);
				MEMBER(player_dominating_me, server::ccsplayer_controller, uint64_t);
				MEMBER(competitive_ranking, server::ccsplayer_controller, int);
				MEMBER(competitive_wins, server::ccsplayer_controller, int);
				MEMBER(competitive_rank_type, server::ccsplayer_controller, char);
				MEMBER(competitive_ranking_predicted_win, server::ccsplayer_controller, int);
				MEMBER(competitive_ranking_predicted_loss, server::ccsplayer_controller, int);
				MEMBER(competitive_ranking_predicted_tie, server::ccsplayer_controller, int);
				MEMBER(end_match_next_map_vote, server::ccsplayer_controller, int);
				MEMBER(un_active_quest_id, server::ccsplayer_controller, uint16_t);
				MEMBER(quest_progress_reason, server::ccsplayer_controller, quest_progress__reason);
				MEMBER(un_player_tv_control_flags, server::ccsplayer_controller, uint32_t);
				MEMBER(draft_index, server::ccsplayer_controller, int);
				MEMBER(ms_queued_mode_disconnection_timestamp, server::ccsplayer_controller, uint32_t);
				MEMBER(ui_abandon_recorded_reason, server::ccsplayer_controller, uint32_t);
				MEMBER(cannot_be_kicked, server::ccsplayer_controller, bool);
				MEMBER(ever_fully_connected, server::ccsplayer_controller, bool);
				MEMBER(abandon_allows_surrender, server::ccsplayer_controller, bool);
				MEMBER(abandon_offers_instant_surrender, server::ccsplayer_controller, bool);
				MEMBER(disconnection1_min_warning_printed, server::ccsplayer_controller, bool);
				MEMBER(score_reported, server::ccsplayer_controller, bool);
				MEMBER(disconnection_tick, server::ccsplayer_controller, int);
				MEMBER(controlling_bot, server::ccsplayer_controller, bool);
				MEMBER(has_controlled_bot_this_round, server::ccsplayer_controller, bool);
				MEMBER(has_been_controlled_by_player_this_round, server::ccsplayer_controller, bool);
				MEMBER(bots_controlled_this_round, server::ccsplayer_controller, int);
				MEMBER(can_control_observed_bot, server::ccsplayer_controller, bool);
				MEMBER(h_player_pawn, server::ccsplayer_controller, chandle<ccsplayer_pawn>);
				MEMBER(h_observer_pawn, server::ccsplayer_controller, chandle<ccsobserver_pawn>);
				MEMBER(desired_observer_mode, server::ccsplayer_controller, int);
				MEMBER(h_desired_observer_target, server::ccsplayer_controller, centity_handle);
				MEMBER(pawn_is_alive, server::ccsplayer_controller, bool);
				MEMBER(pawn_health, server::ccsplayer_controller, uint32_t);
				MEMBER(pawn_armor, server::ccsplayer_controller, int);
				MEMBER(pawn_has_defuser, server::ccsplayer_controller, bool);
				MEMBER(pawn_has_helmet, server::ccsplayer_controller, bool);
				MEMBER(pawn_character_def_index, server::ccsplayer_controller, uint16_t);
				MEMBER(pawn_lifetime_start, server::ccsplayer_controller, int);
				MEMBER(pawn_lifetime_end, server::ccsplayer_controller, int);
				MEMBER(pawn_bot_difficulty, server::ccsplayer_controller, int);
				MEMBER(h_original_controller_of_current_pawn, server::ccsplayer_controller, chandle<ccsplayer_controller>);
				MEMBER(score, server::ccsplayer_controller, int);
				MEMBER(round_score, server::ccsplayer_controller, int);
				MEMBER(rounds_won, server::ccsplayer_controller, int);
				MEMBER(vec_kills, server::ccsplayer_controller, cnetwork_utl_vector_base<ekill_types_t>);
				MEMBER(mvps, server::ccsplayer_controller, int);
				MEMBER(update_counter, server::ccsplayer_controller, int);
				MEMBER(smoothed_ping, server::ccsplayer_controller, float);
				MEMBER(last_held_vote_timer, server::ccsplayer_controller, interval_timer);
				MEMBER(show_hints, server::ccsplayer_controller, bool);
				MEMBER(next_time_check, server::ccsplayer_controller, int);
				MEMBER(just_did_team_kill, server::ccsplayer_controller, bool);
				MEMBER(punish_for_team_kill, server::ccsplayer_controller, bool);
				MEMBER(gave_team_damage_warning, server::ccsplayer_controller, bool);
				MEMBER(gave_team_damage_warning_this_round, server::ccsplayer_controller, bool);
				MEMBER(dbl_last_received_packet_plat_float_time, server::ccsplayer_controller, double);
				MEMBER(last_team_damage_warning_time, server::ccsplayer_controller, game_time_t);
				MEMBER(last_time_player_was_disconnected_for_pawns_remove, server::ccsplayer_controller, game_time_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsplayer_controller : public cbase_player_controller

			class cfootstep_control : public cbase_trigger
			{
			public:
				MEMBER(source, server::cfootstep_control, cutl_symbol_large);
				MEMBER(destination, server::cfootstep_control, cutl_symbol_large);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cfootstep_control : public cbase_trigger

			class ccsweapon_base_vdata : public cbase_player_weapon_vdata
			{
			public:
				MEMBER(weapon_type, server::ccsweapon_base_vdata, csweapon_type);
				MEMBER(weapon_category, server::ccsweapon_base_vdata, csweapon_category);
				MEMBER(view_model, server::ccsweapon_base_vdata, cresource_name_typed<cweak_handle<info_for_resource_type_cmodel>>);
				MEMBER(player_model, server::ccsweapon_base_vdata, cresource_name_typed<cweak_handle<info_for_resource_type_cmodel>>);
				MEMBER(world_dropped_model, server::ccsweapon_base_vdata, cresource_name_typed<cweak_handle<info_for_resource_type_cmodel>>);
				MEMBER(aimsight_lens_mask_model, server::ccsweapon_base_vdata, cresource_name_typed<cweak_handle<info_for_resource_type_cmodel>>);
				MEMBER(magazine_model, server::ccsweapon_base_vdata, cresource_name_typed<cweak_handle<info_for_resource_type_cmodel>>);
				MEMBER(heat_effect, server::ccsweapon_base_vdata, cresource_name_typed<cweak_handle<info_for_resource_type_iparticle_system_definition>>);
				MEMBER(eject_brass_effect, server::ccsweapon_base_vdata, cresource_name_typed<cweak_handle<info_for_resource_type_iparticle_system_definition>>);
				MEMBER(muzzle_flash_particle_alt, server::ccsweapon_base_vdata, cresource_name_typed<cweak_handle<info_for_resource_type_iparticle_system_definition>>);
				MEMBER(muzzle_flash_third_person_particle, server::ccsweapon_base_vdata, cresource_name_typed<cweak_handle<info_for_resource_type_iparticle_system_definition>>);
				MEMBER(muzzle_flash_third_person_particle_alt, server::ccsweapon_base_vdata, cresource_name_typed<cweak_handle<info_for_resource_type_iparticle_system_definition>>);
				MEMBER(tracer_particle, server::ccsweapon_base_vdata, cresource_name_typed<cweak_handle<info_for_resource_type_iparticle_system_definition>>);
				MEMBER(gear_slot, server::ccsweapon_base_vdata, gear_slot_t);
				MEMBER(gear_slot_position, server::ccsweapon_base_vdata, int);
				MEMBER(default_loadout_slot, server::ccsweapon_base_vdata, loadout_slot_t);
				MEMBER(s_wrong_team_msg, server::ccsweapon_base_vdata, cutl_string);
				MEMBER(price, server::ccsweapon_base_vdata, int);
				MEMBER(kill_award, server::ccsweapon_base_vdata, int);
				MEMBER(primary_reserve_ammo_max, server::ccsweapon_base_vdata, int);
				MEMBER(secondary_reserve_ammo_max, server::ccsweapon_base_vdata, int);
				MEMBER(melee_weapon, server::ccsweapon_base_vdata, bool);
				MEMBER(has_burst_mode, server::ccsweapon_base_vdata, bool);
				MEMBER(is_revolver, server::ccsweapon_base_vdata, bool);
				MEMBER(cannot_shoot_underwater, server::ccsweapon_base_vdata, bool);
				MEMBER(name, server::ccsweapon_base_vdata, cutl_string);
				MEMBER(anim_extension, server::ccsweapon_base_vdata, cutl_string);
				MEMBER(e_silencer_type, server::ccsweapon_base_vdata, csweapon_silencer_type);
				MEMBER(crosshair_min_distance, server::ccsweapon_base_vdata, int);
				MEMBER(crosshair_delta_distance, server::ccsweapon_base_vdata, int);
				MEMBER(cycle_time, server::ccsweapon_base_vdata, cfiring_mode_float);
				MEMBER(max_speed, server::ccsweapon_base_vdata, cfiring_mode_float);
				MEMBER(spread, server::ccsweapon_base_vdata, cfiring_mode_float);
				MEMBER(inaccuracy_crouch, server::ccsweapon_base_vdata, cfiring_mode_float);
				MEMBER(inaccuracy_stand, server::ccsweapon_base_vdata, cfiring_mode_float);
				MEMBER(inaccuracy_jump, server::ccsweapon_base_vdata, cfiring_mode_float);
				MEMBER(inaccuracy_land, server::ccsweapon_base_vdata, cfiring_mode_float);
				MEMBER(inaccuracy_ladder, server::ccsweapon_base_vdata, cfiring_mode_float);
				MEMBER(inaccuracy_fire, server::ccsweapon_base_vdata, cfiring_mode_float);
				MEMBER(inaccuracy_move, server::ccsweapon_base_vdata, cfiring_mode_float);
				MEMBER(recoil_angle, server::ccsweapon_base_vdata, cfiring_mode_float);
				MEMBER(recoil_angle_variance, server::ccsweapon_base_vdata, cfiring_mode_float);
				MEMBER(recoil_magnitude, server::ccsweapon_base_vdata, cfiring_mode_float);
				MEMBER(recoil_magnitude_variance, server::ccsweapon_base_vdata, cfiring_mode_float);
				MEMBER(tracer_frequency, server::ccsweapon_base_vdata, cfiring_mode_int);
				MEMBER(inaccuracy_jump_initial, server::ccsweapon_base_vdata, float);
				MEMBER(inaccuracy_jump_apex, server::ccsweapon_base_vdata, float);
				MEMBER(inaccuracy_reload, server::ccsweapon_base_vdata, float);
				MEMBER(recoil_seed, server::ccsweapon_base_vdata, int);
				MEMBER(spread_seed, server::ccsweapon_base_vdata, int);
				MEMBER(time_to_idle_after_fire, server::ccsweapon_base_vdata, float);
				MEMBER(idle_interval, server::ccsweapon_base_vdata, float);
				MEMBER(attack_movespeed_factor, server::ccsweapon_base_vdata, float);
				MEMBER(heat_per_shot, server::ccsweapon_base_vdata, float);
				MEMBER(inaccuracy_pitch_shift, server::ccsweapon_base_vdata, float);
				MEMBER(inaccuracy_alt_sound_threshold, server::ccsweapon_base_vdata, float);
				MEMBER(bot_audible_range, server::ccsweapon_base_vdata, float);
				MEMBER(use_radio_subtitle, server::ccsweapon_base_vdata, cutl_string);
				MEMBER(unzooms_after_shot, server::ccsweapon_base_vdata, bool);
				MEMBER(hide_view_model_when_zoomed, server::ccsweapon_base_vdata, bool);
				MEMBER(zoom_levels, server::ccsweapon_base_vdata, int);
				MEMBER(zoom_fov1, server::ccsweapon_base_vdata, int);
				MEMBER(zoom_fov2, server::ccsweapon_base_vdata, int);
				MEMBER(zoom_time0, server::ccsweapon_base_vdata, float);
				MEMBER(zoom_time1, server::ccsweapon_base_vdata, float);
				MEMBER(zoom_time2, server::ccsweapon_base_vdata, float);
				MEMBER(iron_sight_pull_up_speed, server::ccsweapon_base_vdata, float);
				MEMBER(iron_sight_put_down_speed, server::ccsweapon_base_vdata, float);
				MEMBER(iron_sight_fov, server::ccsweapon_base_vdata, float);
				MEMBER(iron_sight_pivot_forward, server::ccsweapon_base_vdata, float);
				MEMBER(iron_sight_looseness, server::ccsweapon_base_vdata, float);
				MEMBER(ang_pivot_angle, server::ccsweapon_base_vdata, qangle);
				MEMBER(vec_iron_sight_eye_pos, server::ccsweapon_base_vdata, vector);
				MEMBER(damage, server::ccsweapon_base_vdata, int);
				MEMBER(headshot_multiplier, server::ccsweapon_base_vdata, float);
				MEMBER(armor_ratio, server::ccsweapon_base_vdata, float);
				MEMBER(penetration, server::ccsweapon_base_vdata, float);
				MEMBER(range, server::ccsweapon_base_vdata, float);
				MEMBER(range_modifier, server::ccsweapon_base_vdata, float);
				MEMBER(flinch_velocity_modifier_large, server::ccsweapon_base_vdata, float);
				MEMBER(flinch_velocity_modifier_small, server::ccsweapon_base_vdata, float);
				MEMBER(recovery_time_crouch, server::ccsweapon_base_vdata, float);
				MEMBER(recovery_time_stand, server::ccsweapon_base_vdata, float);
				MEMBER(recovery_time_crouch_final, server::ccsweapon_base_vdata, float);
				MEMBER(recovery_time_stand_final, server::ccsweapon_base_vdata, float);
				MEMBER(recovery_transition_start_bullet, server::ccsweapon_base_vdata, int);
				MEMBER(recovery_transition_end_bullet, server::ccsweapon_base_vdata, int);
				MEMBER(throw_velocity, server::ccsweapon_base_vdata, float);
				MEMBER(v_smoke_color, server::ccsweapon_base_vdata, vector);
				MEMBER(anim_class, server::ccsweapon_base_vdata, cutl_string);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsweapon_base_vdata : public cbase_player_weapon_vdata

			class ctrigger_trip_wire : public cbase_trigger
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ctrigger_trip_wire : public cbase_trigger

			class cpoint_gamestats_counter : public cpoint_entity
			{
			public:
				MEMBER(str_statistic_name, server::cpoint_gamestats_counter, cutl_symbol_large);
				MEMBER(disabled, server::cpoint_gamestats_counter, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cpoint_gamestats_counter : public cpoint_entity

			class cenv_hud_hint : public cpoint_entity
			{
			public:
				MEMBER(isz_message, server::cenv_hud_hint, cutl_symbol_large);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cenv_hud_hint : public cpoint_entity

			class cbuy_zone : public cbase_trigger
			{
			public:
				MEMBER(legacy_team_num, server::cbuy_zone, int);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbuy_zone : public cbase_trigger

			class cfunc_conveyor : public cbase_model_entity
			{
			public:
				MEMBER(conveyor_models, server::cfunc_conveyor, cutl_symbol_large);
				MEMBER(transition_duration_seconds, server::cfunc_conveyor, float);
				MEMBER(ang_move_entity_space, server::cfunc_conveyor, qangle);
				MEMBER(vec_move_dir_entity_space, server::cfunc_conveyor, vector);
				MEMBER(target_speed, server::cfunc_conveyor, float);
				MEMBER(transition_start_tick, server::cfunc_conveyor, game_tick_t);
				MEMBER(transition_duration_ticks, server::cfunc_conveyor, int);
				MEMBER(transition_start_speed, server::cfunc_conveyor, float);
				MEMBER(h_conveyor_models, server::cfunc_conveyor, cnetwork_utl_vector_base<chandle<cbase_entity>>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cfunc_conveyor : public cbase_model_entity

			class ctrigger_bomb_reset : public cbase_trigger
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ctrigger_bomb_reset : public cbase_trigger

			class ctrigger_hostage_reset : public cbase_trigger
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ctrigger_hostage_reset : public cbase_trigger

			class ccsplace : public cserver_only_model_entity
			{
			public:
				MEMBER(name, server::ccsplace, cutl_symbol_large);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsplace : public cserver_only_model_entity

			class cgame_money : public crule_point_entity
			{
			public:
				MEMBER(on_money_spent, server::cgame_money, centity_iooutput);
				MEMBER(on_money_spent_fail, server::cgame_money, centity_iooutput);
				MEMBER(money, server::cgame_money, int);
				MEMBER(str_award_text, server::cgame_money, cutl_string);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cgame_money : public crule_point_entity

			class cplayer_spray_decal : public cmodel_point_entity
			{
			public:
				MEMBER(unique_id, server::cplayer_spray_decal, int);
				MEMBER(un_account_id, server::cplayer_spray_decal, uint32_t);
				MEMBER(un_trace_id, server::cplayer_spray_decal, uint32_t);
				MEMBER(rt_gc_time, server::cplayer_spray_decal, uint32_t);
				MEMBER(vec_end_pos, server::cplayer_spray_decal, vector);
				MEMBER(vec_start, server::cplayer_spray_decal, vector);
				MEMBER(vec_left, server::cplayer_spray_decal, vector);
				MEMBER(vec_normal, server::cplayer_spray_decal, vector);
				MEMBER(player, server::cplayer_spray_decal, int);
				MEMBER(entity, server::cplayer_spray_decal, int);
				MEMBER(hitbox, server::cplayer_spray_decal, int);
				MEMBER(creation_time, server::cplayer_spray_decal, float);
				MEMBER(tint_id, server::cplayer_spray_decal, int);
				MEMBER(version, server::cplayer_spray_decal, uint8_t);
				MEMBER_ARR(ub_signature_arr, server::cplayer_spray_decal, 128, uint8_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cplayer_spray_decal : public cmodel_point_entity

			class cinferno : public cbase_model_entity
			{
			public:
				MEMBER_ARR(fire_positions_arr, server::cinferno, 64, vector);
				MEMBER_ARR(fire_parent_positions_arr, server::cinferno, 64, vector);
				MEMBER_ARR(fire_is_burning_arr, server::cinferno, 64, bool);
				MEMBER_ARR(burn_normal_arr, server::cinferno, 64, vector);
				MEMBER(fire_count, server::cinferno, int);
				MEMBER(inferno_type, server::cinferno, int);
				MEMBER(fire_effect_tick_begin, server::cinferno, int);
				MEMBER(fire_lifetime, server::cinferno, float);
				MEMBER(in_post_effect_time, server::cinferno, bool);
				MEMBER(fires_extinguish_count, server::cinferno, int);
				MEMBER(was_created_in_smoke, server::cinferno, bool);
				MEMBER(extent, server::cinferno, extent);
				MEMBER(damage_timer, server::cinferno, countdown_timer);
				MEMBER(damage_ramp_timer, server::cinferno, countdown_timer);
				MEMBER(splash_velocity, server::cinferno, vector);
				MEMBER(initial_splash_velocity, server::cinferno, vector);
				MEMBER(start_pos, server::cinferno, vector);
				MEMBER(vec_original_spawn_location, server::cinferno, vector);
				MEMBER(active_timer, server::cinferno, interval_timer);
				MEMBER(fire_spawn_offset, server::cinferno, int);
				MEMBER(max_flames, server::cinferno, int);
				MEMBER(bookkeeping_timer, server::cinferno, countdown_timer);
				MEMBER(next_spread_timer, server::cinferno, countdown_timer);
				MEMBER(source_item_def_index, server::cinferno, uint16_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cinferno : public cbase_model_entity

			class cfire_cracker_blast : public cinferno
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cfire_cracker_blast : public cinferno

			class cbarn_light : public cbase_model_entity
			{
			public:
				MEMBER(enabled, server::cbarn_light, bool);
				MEMBER(color_mode, server::cbarn_light, int);
				MEMBER(color, server::cbarn_light, color);
				MEMBER(color_temperature, server::cbarn_light, float);
				MEMBER(brightness, server::cbarn_light, float);
				MEMBER(brightness_scale, server::cbarn_light, float);
				MEMBER(direct_light, server::cbarn_light, int);
				MEMBER(baked_shadow_index, server::cbarn_light, int);
				MEMBER(luminaire_shape, server::cbarn_light, int);
				MEMBER(luminaire_size, server::cbarn_light, float);
				MEMBER(luminaire_anisotropy, server::cbarn_light, float);
				MEMBER(light_style_string, server::cbarn_light, cutl_string);
				MEMBER(light_style_start_time, server::cbarn_light, game_time_t);
				MEMBER(queued_light_style_strings, server::cbarn_light, cnetwork_utl_vector_base<cutl_string>);
				MEMBER(light_style_events, server::cbarn_light, cnetwork_utl_vector_base<cutl_string>);
				MEMBER(light_style_targets, server::cbarn_light, cnetwork_utl_vector_base<chandle<cbase_model_entity>>);
				MEMBER_ARR(style_event_arr, server::cbarn_light, 4, centity_iooutput);
				MEMBER(h_light_cookie, server::cbarn_light, cstrong_handle<info_for_resource_type_ctexture_base>);
				MEMBER(shape, server::cbarn_light, float);
				MEMBER(soft_x, server::cbarn_light, float);
				MEMBER(soft_y, server::cbarn_light, float);
				MEMBER(skirt, server::cbarn_light, float);
				MEMBER(skirt_near, server::cbarn_light, float);
				MEMBER(v_size_params, server::cbarn_light, vector);
				MEMBER(range, server::cbarn_light, float);
				MEMBER(v_shear, server::cbarn_light, vector);
				MEMBER(bake_specular_to_cubemaps, server::cbarn_light, int);
				MEMBER(v_bake_specular_to_cubemaps_size, server::cbarn_light, vector);
				MEMBER(cast_shadows, server::cbarn_light, int);
				MEMBER(shadow_map_size, server::cbarn_light, int);
				MEMBER(shadow_priority, server::cbarn_light, int);
				MEMBER(contact_shadow, server::cbarn_light, bool);
				MEMBER(bounce_light, server::cbarn_light, int);
				MEMBER(bounce_scale, server::cbarn_light, float);
				MEMBER(min_roughness, server::cbarn_light, float);
				MEMBER(v_alternate_color, server::cbarn_light, vector);
				MEMBER(alternate_color_brightness, server::cbarn_light, float);
				MEMBER(fog, server::cbarn_light, int);
				MEMBER(fog_strength, server::cbarn_light, float);
				MEMBER(fog_shadows, server::cbarn_light, int);
				MEMBER(fog_scale, server::cbarn_light, float);
				MEMBER(fade_size_start, server::cbarn_light, float);
				MEMBER(fade_size_end, server::cbarn_light, float);
				MEMBER(shadow_fade_size_start, server::cbarn_light, float);
				MEMBER(shadow_fade_size_end, server::cbarn_light, float);
				MEMBER(precomputed_fields_valid, server::cbarn_light, bool);
				MEMBER(v_precomputed_bounds_mins, server::cbarn_light, vector);
				MEMBER(v_precomputed_bounds_maxs, server::cbarn_light, vector);
				MEMBER(v_precomputed_obborigin, server::cbarn_light, vector);
				MEMBER(v_precomputed_obbangles, server::cbarn_light, qangle);
				MEMBER(v_precomputed_obbextent, server::cbarn_light, vector);
				MEMBER(pvs_modify_entity, server::cbarn_light, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbarn_light : public cbase_model_entity

			class crect_light : public cbarn_light
			{
			public:
				MEMBER(show_light, server::crect_light, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class crect_light : public cbarn_light

			class comni_light : public cbarn_light
			{
			public:
				MEMBER(inner_angle, server::comni_light, float);
				MEMBER(outer_angle, server::comni_light, float);
				MEMBER(show_light, server::comni_light, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class comni_light : public cbarn_light

			class ccsteam : public cteam
			{
			public:
				MEMBER(last_recieved_shorthanded_round_bonus, server::ccsteam, int);
				MEMBER(shorthanded_round_bonus_start_round, server::ccsteam, int);
				MEMBER(surrendered, server::ccsteam, bool);
				MEMBER_ARR(team_match_stat_arr, server::ccsteam, 512, char);
				MEMBER(num_map_victories, server::ccsteam, int);
				MEMBER(score_first_half, server::ccsteam, int);
				MEMBER(score_second_half, server::ccsteam, int);
				MEMBER(score_overtime, server::ccsteam, int);
				MEMBER_ARR(clan_teamname_arr, server::ccsteam, 129, char);
				MEMBER(clan_id, server::ccsteam, uint32_t);
				MEMBER_ARR(team_flag_image_arr, server::ccsteam, 8, char);
				MEMBER_ARR(team_logo_image_arr, server::ccsteam, 8, char);
				MEMBER(next_resource_time, server::ccsteam, float);
				MEMBER(last_update_sent_at, server::ccsteam, int);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsteam : public cteam

			class cmap_info : public cpoint_entity
			{
			public:
				MEMBER(buying_status, server::cmap_info, int);
				MEMBER(bomb_radius, server::cmap_info, float);
				MEMBER(pet_population, server::cmap_info, int);
				MEMBER(use_normal_spawns_for_dm, server::cmap_info, bool);
				MEMBER(disable_auto_generated_dmspawns, server::cmap_info, bool);
				MEMBER(bot_max_vision_distance, server::cmap_info, float);
				MEMBER(hostage_count, server::cmap_info, int);
				MEMBER(fade_player_visibility_far_z, server::cmap_info, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cmap_info : public cpoint_entity

			class ccsbot : public cbot
			{
			public:
				MEMBER(last_coop_spawn_point, server::ccsbot, chandle<spawn_point_coop_enemy>);
				MEMBER(eye_position, server::ccsbot, vector);
				MEMBER_ARR(name_arr, server::ccsbot, 64, char);
				MEMBER(combat_range, server::ccsbot, float);
				MEMBER(is_rogue, server::ccsbot, bool);
				MEMBER(rogue_timer, server::ccsbot, countdown_timer);
				MEMBER(died_last_round, server::ccsbot, bool);
				MEMBER(safe_time, server::ccsbot, float);
				MEMBER(was_safe, server::ccsbot, bool);
				MEMBER(blind_fire, server::ccsbot, bool);
				MEMBER(surprise_timer, server::ccsbot, countdown_timer);
				MEMBER(allow_active, server::ccsbot, bool);
				MEMBER(is_following, server::ccsbot, bool);
				MEMBER(leader, server::ccsbot, chandle<ccsplayer_pawn>);
				MEMBER(follow_timestamp, server::ccsbot, float);
				MEMBER(allow_auto_follow_time, server::ccsbot, float);
				MEMBER(hurry_timer, server::ccsbot, countdown_timer);
				MEMBER(alert_timer, server::ccsbot, countdown_timer);
				MEMBER(sneak_timer, server::ccsbot, countdown_timer);
				MEMBER(panic_timer, server::ccsbot, countdown_timer);
				MEMBER(state_timestamp, server::ccsbot, float);
				MEMBER(is_attacking, server::ccsbot, bool);
				MEMBER(is_opening_door, server::ccsbot, bool);
				MEMBER(task_entity, server::ccsbot, chandle<cbase_entity>);
				MEMBER(goal_position, server::ccsbot, vector);
				MEMBER(goal_entity, server::ccsbot, chandle<cbase_entity>);
				MEMBER(avoid, server::ccsbot, chandle<cbase_entity>);
				MEMBER(avoid_timestamp, server::ccsbot, float);
				MEMBER(is_stopping, server::ccsbot, bool);
				MEMBER(has_visited_enemy_spawn, server::ccsbot, bool);
				MEMBER(still_timer, server::ccsbot, interval_timer);
				MEMBER(eye_angles_under_path_finder_control, server::ccsbot, bool);
				MEMBER(path_index, server::ccsbot, int);
				MEMBER(area_entered_timestamp, server::ccsbot, game_time_t);
				MEMBER(repath_timer, server::ccsbot, countdown_timer);
				MEMBER(avoid_friend_timer, server::ccsbot, countdown_timer);
				MEMBER(is_friend_in_the_way, server::ccsbot, bool);
				MEMBER(polite_timer, server::ccsbot, countdown_timer);
				MEMBER(is_waiting_behind_friend, server::ccsbot, bool);
				MEMBER(path_ladder_end, server::ccsbot, float);
				MEMBER(must_run_timer, server::ccsbot, countdown_timer);
				MEMBER(wait_timer, server::ccsbot, countdown_timer);
				MEMBER(update_travel_distance_timer, server::ccsbot, countdown_timer);
				MEMBER_ARR(player_travel_distance_arr, server::ccsbot, 64, float);
				MEMBER(travel_distance_phase, server::ccsbot, uint8_t);
				MEMBER(hostage_escort_count, server::ccsbot, uint8_t);
				MEMBER(hostage_escort_count_timestamp, server::ccsbot, float);
				MEMBER(desired_team, server::ccsbot, int);
				MEMBER(has_joined, server::ccsbot, bool);
				MEMBER(is_waiting_for_hostage, server::ccsbot, bool);
				MEMBER(inhibit_waiting_for_hostage_timer, server::ccsbot, countdown_timer);
				MEMBER(wait_for_hostage_timer, server::ccsbot, countdown_timer);
				MEMBER(noise_position, server::ccsbot, vector);
				MEMBER(noise_travel_distance, server::ccsbot, float);
				MEMBER(noise_timestamp, server::ccsbot, float);
				MEMBER(noise_source_ptr, server::ccsbot, ccsplayer_pawn*);
				MEMBER(noise_bend_timer, server::ccsbot, countdown_timer);
				MEMBER(bent_noise_position, server::ccsbot, vector);
				MEMBER(bend_noise_position_valid, server::ccsbot, bool);
				MEMBER(look_around_state_timestamp, server::ccsbot, float);
				MEMBER(look_ahead_angle, server::ccsbot, float);
				MEMBER(forward_angle, server::ccsbot, float);
				MEMBER(inhibit_look_around_timestamp, server::ccsbot, float);
				MEMBER(look_at_spot, server::ccsbot, vector);
				MEMBER(look_at_spot_duration, server::ccsbot, float);
				MEMBER(look_at_spot_timestamp, server::ccsbot, float);
				MEMBER(look_at_spot_angle_tolerance, server::ccsbot, float);
				MEMBER(look_at_spot_clear_if_close, server::ccsbot, bool);
				MEMBER(look_at_spot_attack, server::ccsbot, bool);
				MEMBER(look_at_desc_ptr, server::ccsbot, char*);
				MEMBER(peripheral_timestamp, server::ccsbot, float);
				MEMBER(approach_point_count, server::ccsbot, uint8_t);
				MEMBER(approach_point_view_position, server::ccsbot, vector);
				MEMBER(view_steady_timer, server::ccsbot, interval_timer);
				MEMBER(toss_grenade_timer, server::ccsbot, countdown_timer);
				MEMBER(is_avoiding_grenade, server::ccsbot, countdown_timer);
				MEMBER(spot_check_timestamp, server::ccsbot, float);
				MEMBER(checked_hiding_spot_count, server::ccsbot, int);
				MEMBER(look_pitch, server::ccsbot, float);
				MEMBER(look_pitch_vel, server::ccsbot, float);
				MEMBER(look_yaw, server::ccsbot, float);
				MEMBER(look_yaw_vel, server::ccsbot, float);
				MEMBER(target_spot, server::ccsbot, vector);
				MEMBER(target_spot_velocity, server::ccsbot, vector);
				MEMBER(target_spot_predicted, server::ccsbot, vector);
				MEMBER(aim_error, server::ccsbot, qangle);
				MEMBER(aim_goal, server::ccsbot, qangle);
				MEMBER(target_spot_time, server::ccsbot, game_time_t);
				MEMBER(aim_focus, server::ccsbot, float);
				MEMBER(aim_focus_interval, server::ccsbot, float);
				MEMBER(aim_focus_next_update, server::ccsbot, game_time_t);
				MEMBER(ignore_enemies_timer, server::ccsbot, countdown_timer);
				MEMBER(enemy, server::ccsbot, chandle<ccsplayer_pawn>);
				MEMBER(is_enemy_visible, server::ccsbot, bool);
				MEMBER(visible_enemy_parts, server::ccsbot, uint8_t);
				MEMBER(last_enemy_position, server::ccsbot, vector);
				MEMBER(last_saw_enemy_timestamp, server::ccsbot, float);
				MEMBER(first_saw_enemy_timestamp, server::ccsbot, float);
				MEMBER(current_enemy_acquire_timestamp, server::ccsbot, float);
				MEMBER(enemy_death_timestamp, server::ccsbot, float);
				MEMBER(friend_death_timestamp, server::ccsbot, float);
				MEMBER(is_last_enemy_dead, server::ccsbot, bool);
				MEMBER(nearby_enemy_count, server::ccsbot, int);
				MEMBER(bomber, server::ccsbot, chandle<ccsplayer_pawn>);
				MEMBER(nearby_friend_count, server::ccsbot, int);
				MEMBER(closest_visible_friend, server::ccsbot, chandle<ccsplayer_pawn>);
				MEMBER(closest_visible_human_friend, server::ccsbot, chandle<ccsplayer_pawn>);
				MEMBER(attention_interval, server::ccsbot, interval_timer);
				MEMBER(attacker, server::ccsbot, chandle<ccsplayer_pawn>);
				MEMBER(attacked_timestamp, server::ccsbot, float);
				MEMBER(burned_by_flames_timer, server::ccsbot, interval_timer);
				MEMBER(last_victim_id, server::ccsbot, int);
				MEMBER(is_aiming_at_enemy, server::ccsbot, bool);
				MEMBER(is_rapid_firing, server::ccsbot, bool);
				MEMBER(equip_timer, server::ccsbot, interval_timer);
				MEMBER(zoom_timer, server::ccsbot, countdown_timer);
				MEMBER(fire_weapon_timestamp, server::ccsbot, game_time_t);
				MEMBER(look_for_weapons_on_ground_timer, server::ccsbot, countdown_timer);
				MEMBER(is_sleeping, server::ccsbot, bool);
				MEMBER(is_enemy_sniper_visible, server::ccsbot, bool);
				MEMBER(saw_enemy_sniper_timer, server::ccsbot, countdown_timer);
				MEMBER(enemy_queue_index, server::ccsbot, uint8_t);
				MEMBER(enemy_queue_count, server::ccsbot, uint8_t);
				MEMBER(enemy_queue_attend_index, server::ccsbot, uint8_t);
				MEMBER(is_stuck, server::ccsbot, bool);
				MEMBER(stuck_timestamp, server::ccsbot, game_time_t);
				MEMBER(stuck_spot, server::ccsbot, vector);
				MEMBER(wiggle_timer, server::ccsbot, countdown_timer);
				MEMBER(stuck_jump_timer, server::ccsbot, countdown_timer);
				MEMBER(next_cleanup_check_timestamp, server::ccsbot, game_time_t);
				MEMBER_ARR(avg_vel_arr, server::ccsbot, 10, float);
				MEMBER(avg_vel_index, server::ccsbot, int);
				MEMBER(avg_vel_count, server::ccsbot, int);
				MEMBER(last_origin, server::ccsbot, vector);
				MEMBER(last_radio_recieved_timestamp, server::ccsbot, float);
				MEMBER(last_radio_sent_timestamp, server::ccsbot, float);
				MEMBER(radio_subject, server::ccsbot, chandle<ccsplayer_pawn>);
				MEMBER(radio_position, server::ccsbot, vector);
				MEMBER(voice_end_timestamp, server::ccsbot, float);
				MEMBER(last_valid_reaction_queue_frame, server::ccsbot, int);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsbot : public cbot

			class cfog_volume : public cserver_only_model_entity
			{
			public:
				MEMBER(fog_name, server::cfog_volume, cutl_symbol_large);
				MEMBER(post_process_name, server::cfog_volume, cutl_symbol_large);
				MEMBER(color_correction_name, server::cfog_volume, cutl_symbol_large);
				MEMBER(disabled, server::cfog_volume, bool);
				MEMBER(in_fog_volumes_list, server::cfog_volume, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cfog_volume : public cserver_only_model_entity

			class cinfo_dynamic_shadow_hint : public cpoint_entity
			{
			public:
				MEMBER(disabled, server::cinfo_dynamic_shadow_hint, bool);
				MEMBER(range, server::cinfo_dynamic_shadow_hint, float);
				MEMBER(importance, server::cinfo_dynamic_shadow_hint, int);
				MEMBER(light_choice, server::cinfo_dynamic_shadow_hint, int);
				MEMBER(h_light, server::cinfo_dynamic_shadow_hint, chandle<cbase_entity>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cinfo_dynamic_shadow_hint : public cpoint_entity

			class cinfo_dynamic_shadow_hint_box : public cinfo_dynamic_shadow_hint
			{
			public:
				MEMBER(v_box_mins, server::cinfo_dynamic_shadow_hint_box, vector);
				MEMBER(v_box_maxs, server::cinfo_dynamic_shadow_hint_box, vector);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cinfo_dynamic_shadow_hint_box : public cinfo_dynamic_shadow_hint

			class cenv_sky : public cbase_model_entity
			{
			public:
				MEMBER(h_sky_material, server::cenv_sky, cstrong_handle<info_for_resource_type_imaterial2>);
				MEMBER(h_sky_material_lighting_only, server::cenv_sky, cstrong_handle<info_for_resource_type_imaterial2>);
				MEMBER(start_disabled, server::cenv_sky, bool);
				MEMBER(v_tint_color, server::cenv_sky, color);
				MEMBER(v_tint_color_lighting_only, server::cenv_sky, color);
				MEMBER(brightness_scale, server::cenv_sky, float);
				MEMBER(fog_type, server::cenv_sky, int);
				MEMBER(fog_min_start, server::cenv_sky, float);
				MEMBER(fog_min_end, server::cenv_sky, float);
				MEMBER(fog_max_start, server::cenv_sky, float);
				MEMBER(fog_max_end, server::cenv_sky, float);
				MEMBER(enabled, server::cenv_sky, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cenv_sky : public cbase_model_entity

			class ctonemap_controller2_alias_env_tonemap_controller2 : public ctonemap_controller2
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ctonemap_controller2_alias_env_tonemap_controller2 : public ctonemap_controller2

			class ctonemap_trigger : public cbase_trigger
			{
			public:
				MEMBER(tonemap_controller_name, server::ctonemap_trigger, cutl_symbol_large);
				MEMBER(h_tonemap_controller, server::ctonemap_trigger, centity_handle);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ctonemap_trigger : public cbase_trigger

			class cfog_trigger : public cbase_trigger
			{
			public:
				MEMBER(fog, server::cfog_trigger, fogparams_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cfog_trigger : public cbase_trigger

			class clight_entity : public cbase_model_entity
			{
			public:
				MEMBER(clight_component_ptr, server::clight_entity, clight_component*);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class clight_entity : public cbase_model_entity

			class clight_spot_entity : public clight_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class clight_spot_entity : public clight_entity

			class clight_ortho_entity : public clight_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class clight_ortho_entity : public clight_entity

			class clight_directional_entity : public clight_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class clight_directional_entity : public clight_entity

			class clight_environment_entity : public clight_directional_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class clight_environment_entity : public clight_directional_entity

			class cpost_processing_volume : public cbase_trigger
			{
			public:
				MEMBER(h_post_settings, server::cpost_processing_volume, cstrong_handle<info_for_resource_type_cpost_processing_resource>);
				MEMBER(fade_duration, server::cpost_processing_volume, float);
				MEMBER(min_log_exposure, server::cpost_processing_volume, float);
				MEMBER(max_log_exposure, server::cpost_processing_volume, float);
				MEMBER(min_exposure, server::cpost_processing_volume, float);
				MEMBER(max_exposure, server::cpost_processing_volume, float);
				MEMBER(exposure_compensation, server::cpost_processing_volume, float);
				MEMBER(exposure_fade_speed_up, server::cpost_processing_volume, float);
				MEMBER(exposure_fade_speed_down, server::cpost_processing_volume, float);
				MEMBER(tonemap_evsmoothing_range, server::cpost_processing_volume, float);
				MEMBER(master, server::cpost_processing_volume, bool);
				MEMBER(exposure_control, server::cpost_processing_volume, bool);
				MEMBER(rate, server::cpost_processing_volume, float);
				MEMBER(tonemap_percent_target, server::cpost_processing_volume, float);
				MEMBER(tonemap_percent_bright_pixels, server::cpost_processing_volume, float);
				MEMBER(tonemap_min_avg_lum, server::cpost_processing_volume, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cpost_processing_volume : public cbase_trigger

			class cenv_particle_glow : public cparticle_system
			{
			public:
				MEMBER(alpha_scale, server::cenv_particle_glow, float);
				MEMBER(radius_scale, server::cenv_particle_glow, float);
				MEMBER(self_illum_scale, server::cenv_particle_glow, float);
				MEMBER(color_tint, server::cenv_particle_glow, color);
				MEMBER(h_texture_override, server::cenv_particle_glow, cstrong_handle<info_for_resource_type_ctexture_base>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cenv_particle_glow : public cparticle_system

			class ctexture_based_animatable : public cbase_model_entity
			{
			public:
				MEMBER(loop, server::ctexture_based_animatable, bool);
				MEMBER(fps, server::ctexture_based_animatable, float);
				MEMBER(h_position_keys, server::ctexture_based_animatable, cstrong_handle<info_for_resource_type_ctexture_base>);
				MEMBER(h_rotation_keys, server::ctexture_based_animatable, cstrong_handle<info_for_resource_type_ctexture_base>);
				MEMBER(v_animation_bounds_min, server::ctexture_based_animatable, vector);
				MEMBER(v_animation_bounds_max, server::ctexture_based_animatable, vector);
				MEMBER(start_time, server::ctexture_based_animatable, float);
				MEMBER(start_frame, server::ctexture_based_animatable, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ctexture_based_animatable : public cbase_model_entity

			class cworld : public cbase_model_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cworld : public cbase_model_entity

			class cbase_anim_graph : public cbase_model_entity
			{
			public:
				MEMBER(initially_populate_interp_history, server::cbase_anim_graph, bool);
				MEMBER(should_animate_during_gameplay_pause, server::cbase_anim_graph, bool);
				MEMBER(choreo_services_ptr, server::cbase_anim_graph, ichoreo_services*);
				MEMBER(anim_graph_update_enabled, server::cbase_anim_graph, bool);
				MEMBER(max_slope_distance, server::cbase_anim_graph, float);
				MEMBER(v_last_slope_check_pos, server::cbase_anim_graph, vector);
				MEMBER(anim_graph_dirty, server::cbase_anim_graph, bool);
				MEMBER(vec_force, server::cbase_anim_graph, vector);
				MEMBER(force_bone, server::cbase_anim_graph, int);
				MEMBER(ragdoll_pose_ptr, server::cbase_anim_graph, physics_ragdoll_pose_t*);
				MEMBER(client_ragdoll, server::cbase_anim_graph, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbase_anim_graph : public cbase_model_entity

			class cbase_prop : public cbase_anim_graph
			{
			public:
				MEMBER(model_overrode_block_los, server::cbase_prop, bool);
				MEMBER(shape_type, server::cbase_prop, int);
				MEMBER(conform_to_collision_bounds, server::cbase_prop, bool);
				MEMBER(m_preferred_catch_transform, server::cbase_prop, matrix3x4_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbase_prop : public cbase_anim_graph

			class cbreakable_prop : public cbase_prop
			{
			public:
				MEMBER(on_break, server::cbreakable_prop, centity_iooutput);
				MEMBER(on_health_changed, server::cbreakable_prop, centity_output_template<float>);
				MEMBER(on_take_damage, server::cbreakable_prop, centity_iooutput);
				MEMBER(impact_energy_scale, server::cbreakable_prop, float);
				MEMBER(min_health_dmg, server::cbreakable_prop, int);
				MEMBER(preferred_carry_angles, server::cbreakable_prop, qangle);
				MEMBER(pressure_delay, server::cbreakable_prop, float);
				MEMBER(h_breaker, server::cbreakable_prop, chandle<cbase_entity>);
				MEMBER(performance_mode, server::cbreakable_prop, performance_mode_t);
				MEMBER(dmg_mod_bullet, server::cbreakable_prop, float);
				MEMBER(dmg_mod_club, server::cbreakable_prop, float);
				MEMBER(dmg_mod_explosive, server::cbreakable_prop, float);
				MEMBER(dmg_mod_fire, server::cbreakable_prop, float);
				MEMBER(isz_physics_damage_table_name, server::cbreakable_prop, cutl_symbol_large);
				MEMBER(isz_base_prop_data, server::cbreakable_prop, cutl_symbol_large);
				MEMBER(interactions, server::cbreakable_prop, int);
				MEMBER(prevent_damage_before_time, server::cbreakable_prop, game_time_t);
				MEMBER(has_break_pieces_or_commands, server::cbreakable_prop, bool);
				MEMBER(explode_damage, server::cbreakable_prop, float);
				MEMBER(explode_radius, server::cbreakable_prop, float);
				MEMBER(explosion_delay, server::cbreakable_prop, float);
				MEMBER(explosion_buildup_sound, server::cbreakable_prop, cutl_symbol_large);
				MEMBER(explosion_custom_effect, server::cbreakable_prop, cutl_symbol_large);
				MEMBER(explosion_custom_sound, server::cbreakable_prop, cutl_symbol_large);
				MEMBER(explosion_modifier, server::cbreakable_prop, cutl_symbol_large);
				MEMBER(h_physics_attacker, server::cbreakable_prop, chandle<cbase_player_pawn>);
				MEMBER(last_physics_influence_time, server::cbreakable_prop, game_time_t);
				MEMBER(original_block_los, server::cbreakable_prop, bool);
				MEMBER(default_fade_scale, server::cbreakable_prop, float);
				MEMBER(h_last_attacker, server::cbreakable_prop, chandle<cbase_entity>);
				MEMBER(h_flare_ent, server::cbreakable_prop, chandle<cbase_entity>);
				MEMBER(use_punt_sound, server::cbreakable_prop, bool);
				MEMBER(isz_punt_sound, server::cbreakable_prop, cutl_symbol_large);
				MEMBER(no_ghost_collision, server::cbreakable_prop, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbreakable_prop : public cbase_prop

			class cdynamic_prop : public cbreakable_prop
			{
			public:
				MEMBER(create_nav_obstacle, server::cdynamic_prop, bool);
				MEMBER(use_hitboxes_for_render_box, server::cdynamic_prop, bool);
				MEMBER(use_anim_graph, server::cdynamic_prop, bool);
				MEMBER(output_anim_begun, server::cdynamic_prop, centity_iooutput);
				MEMBER(output_anim_over, server::cdynamic_prop, centity_iooutput);
				MEMBER(output_anim_loop_cycle_over, server::cdynamic_prop, centity_iooutput);
				MEMBER(on_anim_reached_start, server::cdynamic_prop, centity_iooutput);
				MEMBER(on_anim_reached_end, server::cdynamic_prop, centity_iooutput);
				MEMBER(isz_default_anim, server::cdynamic_prop, cutl_symbol_large);
				MEMBER(default_anim_loop_mode, server::cdynamic_prop, anim_loop_mode_t);
				MEMBER(animate_on_server, server::cdynamic_prop, bool);
				MEMBER(randomize_cycle, server::cdynamic_prop, bool);
				MEMBER(start_disabled, server::cdynamic_prop, bool);
				MEMBER(scripted_movement, server::cdynamic_prop, bool);
				MEMBER(fired_start_end_output, server::cdynamic_prop, bool);
				MEMBER(force_npc_exclude, server::cdynamic_prop, bool);
				MEMBER(create_non_solid, server::cdynamic_prop, bool);
				MEMBER(is_override_prop, server::cdynamic_prop, bool);
				MEMBER(initial_glow_state, server::cdynamic_prop, int);
				MEMBER(glow_range, server::cdynamic_prop, int);
				MEMBER(glow_range_min, server::cdynamic_prop, int);
				MEMBER(glow_color, server::cdynamic_prop, color);
				MEMBER(glow_team, server::cdynamic_prop, int);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cdynamic_prop : public cbreakable_prop

			class cdynamic_prop_alias_dynamic_prop : public cdynamic_prop
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cdynamic_prop_alias_dynamic_prop : public cdynamic_prop

			class cdynamic_prop_alias_prop_dynamic_override : public cdynamic_prop
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cdynamic_prop_alias_prop_dynamic_override : public cdynamic_prop

			class cdynamic_prop_alias_cable_dynamic : public cdynamic_prop
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cdynamic_prop_alias_cable_dynamic : public cdynamic_prop

			class ccolor_correction_volume : public cbase_trigger
			{
			public:
				MEMBER(enabled, server::ccolor_correction_volume, bool);
				MEMBER(max_weight, server::ccolor_correction_volume, float);
				MEMBER(fade_duration, server::ccolor_correction_volume, float);
				MEMBER(start_disabled, server::ccolor_correction_volume, bool);
				MEMBER(weight, server::ccolor_correction_volume, float);
				MEMBER_ARR(lookup_filename_arr, server::ccolor_correction_volume, 512, char);
				MEMBER(last_enter_weight, server::ccolor_correction_volume, float);
				MEMBER(last_enter_time, server::ccolor_correction_volume, game_time_t);
				MEMBER(last_exit_weight, server::ccolor_correction_volume, float);
				MEMBER(last_exit_time, server::ccolor_correction_volume, game_time_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccolor_correction_volume : public cbase_trigger

			class cpoint_commentary_node : public cbase_anim_graph
			{
			public:
				MEMBER(isz_pre_commands, server::cpoint_commentary_node, cutl_symbol_large);
				MEMBER(isz_post_commands, server::cpoint_commentary_node, cutl_symbol_large);
				MEMBER(isz_commentary_file, server::cpoint_commentary_node, cutl_symbol_large);
				MEMBER(isz_view_target, server::cpoint_commentary_node, cutl_symbol_large);
				MEMBER(h_view_target, server::cpoint_commentary_node, chandle<cbase_entity>);
				MEMBER(h_view_target_angles, server::cpoint_commentary_node, chandle<cbase_entity>);
				MEMBER(isz_view_position, server::cpoint_commentary_node, cutl_symbol_large);
				MEMBER(h_view_position, server::cpoint_commentary_node, chandle<cbase_entity>);
				MEMBER(h_view_position_mover, server::cpoint_commentary_node, chandle<cbase_entity>);
				MEMBER(prevent_movement, server::cpoint_commentary_node, bool);
				MEMBER(under_crosshair, server::cpoint_commentary_node, bool);
				MEMBER(unstoppable, server::cpoint_commentary_node, bool);
				MEMBER(finished_time, server::cpoint_commentary_node, game_time_t);
				MEMBER(vec_finish_origin, server::cpoint_commentary_node, vector);
				MEMBER(vec_original_angles, server::cpoint_commentary_node, qangle);
				MEMBER(vec_finish_angles, server::cpoint_commentary_node, qangle);
				MEMBER(prevent_changes_while_moving, server::cpoint_commentary_node, bool);
				MEMBER(disabled, server::cpoint_commentary_node, bool);
				MEMBER(vec_teleport_origin, server::cpoint_commentary_node, vector);
				MEMBER(aborted_playback_at, server::cpoint_commentary_node, game_time_t);
				MEMBER(on_commentary_started, server::cpoint_commentary_node, centity_iooutput);
				MEMBER(on_commentary_stopped, server::cpoint_commentary_node, centity_iooutput);
				MEMBER(active, server::cpoint_commentary_node, bool);
				MEMBER(start_time, server::cpoint_commentary_node, game_time_t);
				MEMBER(start_time_in_commentary, server::cpoint_commentary_node, float);
				MEMBER(isz_title, server::cpoint_commentary_node, cutl_symbol_large);
				MEMBER(isz_speakers, server::cpoint_commentary_node, cutl_symbol_large);
				MEMBER(node_number, server::cpoint_commentary_node, int);
				MEMBER(node_number_max, server::cpoint_commentary_node, int);
				MEMBER(listened_to, server::cpoint_commentary_node, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cpoint_commentary_node : public cbase_anim_graph

			class ccommentary_view_position : public csprite
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccommentary_view_position : public csprite

			class crot_door : public cbase_door
			{
			public:
				MEMBER(solid_bsp, server::crot_door, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class crot_door : public cbase_door

			class citem_soda : public cbase_anim_graph
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class citem_soda : public cbase_anim_graph

			class cprecipitation : public cbase_trigger
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cprecipitation : public cbase_trigger

			class cenv_beam : public cbeam
			{
			public:
				MEMBER(active, server::cenv_beam, int);
				MEMBER(sprite_texture, server::cenv_beam, cstrong_handle<info_for_resource_type_imaterial2>);
				MEMBER(isz_start_entity, server::cenv_beam, cutl_symbol_large);
				MEMBER(isz_end_entity, server::cenv_beam, cutl_symbol_large);
				MEMBER(life, server::cenv_beam, float);
				MEMBER(bolt_width, server::cenv_beam, float);
				MEMBER(noise_amplitude, server::cenv_beam, float);
				MEMBER(speed, server::cenv_beam, int);
				MEMBER(restrike, server::cenv_beam, float);
				MEMBER(isz_sprite_name, server::cenv_beam, cutl_symbol_large);
				MEMBER(frame_start, server::cenv_beam, int);
				MEMBER(v_end_point_world, server::cenv_beam, vector);
				MEMBER(v_end_point_relative, server::cenv_beam, vector);
				MEMBER(radius, server::cenv_beam, float);
				MEMBER(touch_type, server::cenv_beam, touch_t);
				MEMBER(filter_name, server::cenv_beam, cutl_symbol_large);
				MEMBER(h_filter, server::cenv_beam, chandle<cbase_entity>);
				MEMBER(isz_decal, server::cenv_beam, cutl_symbol_large);
				MEMBER(on_touched_by_entity, server::cenv_beam, centity_iooutput);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cenv_beam : public cbeam

			class cpushable : public cbreakable
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cpushable : public cbreakable

			class cfunc_ladder_alias_func_useableladder : public cfunc_ladder
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cfunc_ladder_alias_func_useableladder : public cfunc_ladder

			class cfunc_monitor : public cfunc_brush
			{
			public:
				MEMBER(target_camera, server::cfunc_monitor, cutl_string);
				MEMBER(resolution_enum, server::cfunc_monitor, int);
				MEMBER(render_shadows, server::cfunc_monitor, bool);
				MEMBER(use_unique_color_target, server::cfunc_monitor, bool);
				MEMBER(brush_model_name, server::cfunc_monitor, cutl_string);
				MEMBER(h_target_camera, server::cfunc_monitor, chandle<cbase_entity>);
				MEMBER(enabled, server::cfunc_monitor, bool);
				MEMBER(draw3_dskybox, server::cfunc_monitor, bool);
				MEMBER(start_enabled, server::cfunc_monitor, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cfunc_monitor : public cfunc_brush

			class cfunc_move_linear_alias_momentary_door : public cfunc_move_linear
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cfunc_move_linear_alias_momentary_door : public cfunc_move_linear

			class cgun_target : public cbase_toggle
			{
			public:
				MEMBER(on, server::cgun_target, bool);
				MEMBER(h_target_ent, server::cgun_target, chandle<cbase_entity>);
				MEMBER(on_death, server::cgun_target, centity_iooutput);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cgun_target : public cbase_toggle

			class ctrigger_game_event : public cbase_trigger
			{
			public:
				MEMBER(str_start_touch_event_name, server::ctrigger_game_event, cutl_string);
				MEMBER(str_end_touch_event_name, server::ctrigger_game_event, cutl_string);
				MEMBER(str_trigger_id, server::ctrigger_game_event, cutl_string);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ctrigger_game_event : public cbase_trigger

			class crule_brush_entity : public crule_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class crule_brush_entity : public crule_entity

			class cgame_end : public crule_point_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cgame_end : public crule_point_entity

			class cgame_text : public crule_point_entity
			{
			public:
				MEMBER(isz_message, server::cgame_text, cutl_symbol_large);
				MEMBER(text_parms, server::cgame_text, hudtextparms_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cgame_text : public crule_point_entity

			class cgame_player_zone : public crule_brush_entity
			{
			public:
				MEMBER(on_player_in_zone, server::cgame_player_zone, centity_iooutput);
				MEMBER(on_player_out_zone, server::cgame_player_zone, centity_iooutput);
				MEMBER(players_in_count, server::cgame_player_zone, centity_output_template<int>);
				MEMBER(players_out_count, server::cgame_player_zone, centity_output_template<int>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cgame_player_zone : public crule_brush_entity

			class csimple_markup_volume_tagged : public cmarkup_volume_tagged
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class csimple_markup_volume_tagged : public cmarkup_volume_tagged

			class cmarkup_volume_tagged_nav : public cmarkup_volume_tagged
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cmarkup_volume_tagged_nav : public cmarkup_volume_tagged

			class cmarkup_volume_tagged_nav_game : public cmarkup_volume_with_ref
			{
			public:
				MEMBER(flood_fill_attribute, server::cmarkup_volume_tagged_nav_game, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cmarkup_volume_tagged_nav_game : public cmarkup_volume_with_ref

			class cfunc_electrified_volume : public cfunc_brush
			{
			public:
				MEMBER(effect_name, server::cfunc_electrified_volume, cutl_symbol_large);
				MEMBER(effect_interpenetrate_name, server::cfunc_electrified_volume, cutl_symbol_large);
				MEMBER(effect_zap_name, server::cfunc_electrified_volume, cutl_symbol_large);
				MEMBER(isz_effect_source, server::cfunc_electrified_volume, cutl_symbol_large);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cfunc_electrified_volume : public cfunc_brush

			class cpath_corner_crash : public cpath_corner
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cpath_corner_crash : public cpath_corner

			class cconstraint_anchor : public cbase_anim_graph
			{
			public:
				MEMBER(mass_scale, server::cconstraint_anchor, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cconstraint_anchor : public cbase_anim_graph

			class cornament_prop : public cdynamic_prop
			{
			public:
				MEMBER(initial_owner, server::cornament_prop, cutl_symbol_large);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cornament_prop : public cdynamic_prop

			class crope_keyframe_alias_move_rope : public crope_keyframe
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class crope_keyframe_alias_move_rope : public crope_keyframe

			class cscene_entity_alias_logic_choreographed_scene : public cscene_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cscene_entity_alias_logic_choreographed_scene : public cscene_entity

			class cinstanced_scene_entity : public cscene_entity
			{
			public:
				MEMBER(h_owner, server::cinstanced_scene_entity, chandle<cbase_entity>);
				MEMBER(had_owner, server::cinstanced_scene_entity, bool);
				MEMBER(post_speak_delay, server::cinstanced_scene_entity, float);
				MEMBER(pre_delay, server::cinstanced_scene_entity, float);
				MEMBER(is_background, server::cinstanced_scene_entity, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cinstanced_scene_entity : public cscene_entity

			class ctrigger_soundscape : public cbase_trigger
			{
			public:
				MEMBER(h_soundscape, server::ctrigger_soundscape, chandle<cenv_soundscape_triggerable>);
				MEMBER(soundscape_name, server::ctrigger_soundscape, cutl_symbol_large);
				MEMBER(spectators, server::ctrigger_soundscape, cutl_vector<chandle<cbase_player_pawn>>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ctrigger_soundscape : public cbase_trigger

			class csprite_alias_env_glow : public csprite
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class csprite_alias_env_glow : public csprite

			class cfunc_tank_train : public cfunc_track_train
			{
			public:
				MEMBER(on_death, server::cfunc_tank_train, centity_iooutput);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cfunc_tank_train : public cfunc_track_train

			class cbase_plat_train : public cbase_toggle
			{
			public:
				MEMBER(noise_moving, server::cbase_plat_train, cutl_symbol_large);
				MEMBER(noise_arrived, server::cbase_plat_train, cutl_symbol_large);
				MEMBER(volume, server::cbase_plat_train, float);
				MEMBER(twidth, server::cbase_plat_train, float);
				MEMBER(tlength, server::cbase_plat_train, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbase_plat_train : public cbase_toggle

			class cfunc_plat : public cbase_plat_train
			{
			public:
				MEMBER(s_noise, server::cfunc_plat, cutl_symbol_large);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cfunc_plat : public cbase_plat_train

			class cfunc_plat_rot : public cfunc_plat
			{
			public:
				MEMBER(end, server::cfunc_plat_rot, qangle);
				MEMBER(start, server::cfunc_plat_rot, qangle);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cfunc_plat_rot : public cfunc_plat

			class cfunc_train : public cbase_plat_train
			{
			public:
				MEMBER(h_current_target, server::cfunc_train, chandle<cbase_entity>);
				MEMBER(activated, server::cfunc_train, bool);
				MEMBER(h_enemy, server::cfunc_train, chandle<cbase_entity>);
				MEMBER(block_damage, server::cfunc_train, float);
				MEMBER(next_block_time, server::cfunc_train, game_time_t);
				MEMBER(isz_last_target, server::cfunc_train, cutl_symbol_large);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cfunc_train : public cbase_plat_train

			class cfunc_track_change : public cfunc_plat_rot
			{
			public:
				MEMBER(track_top_ptr, server::cfunc_track_change, cpath_track*);
				MEMBER(track_bottom_ptr, server::cfunc_track_change, cpath_track*);
				MEMBER(train_ptr, server::cfunc_track_change, cfunc_track_train*);
				MEMBER(track_top_name, server::cfunc_track_change, cutl_symbol_large);
				MEMBER(track_bottom_name, server::cfunc_track_change, cutl_symbol_large);
				MEMBER(train_name, server::cfunc_track_change, cutl_symbol_large);
				MEMBER(code, server::cfunc_track_change, train_code);
				MEMBER(target_state, server::cfunc_track_change, int);
				MEMBER(use, server::cfunc_track_change, int);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cfunc_track_change : public cfunc_plat_rot

			class cfunc_track_auto : public cfunc_track_change
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cfunc_track_auto : public cfunc_track_change

			class ctrigger_remove : public cbase_trigger
			{
			public:
				MEMBER(on_remove, server::ctrigger_remove, centity_iooutput);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ctrigger_remove : public cbase_trigger

			class cscript_trigger_hurt : public ctrigger_hurt
			{
			public:
				MEMBER(v_extent, server::cscript_trigger_hurt, vector);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cscript_trigger_hurt : public ctrigger_hurt

			class cscript_trigger_multiple : public ctrigger_multiple
			{
			public:
				MEMBER(v_extent, server::cscript_trigger_multiple, vector);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cscript_trigger_multiple : public ctrigger_multiple

			class ctrigger_once : public ctrigger_multiple
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ctrigger_once : public ctrigger_multiple

			class cscript_trigger_once : public ctrigger_once
			{
			public:
				MEMBER(v_extent, server::cscript_trigger_once, vector);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cscript_trigger_once : public ctrigger_once

			class ctrigger_look : public ctrigger_once
			{
			public:
				MEMBER(h_look_target, server::ctrigger_look, chandle<cbase_entity>);
				MEMBER(field_of_view, server::ctrigger_look, float);
				MEMBER(look_time, server::ctrigger_look, float);
				MEMBER(look_time_total, server::ctrigger_look, float);
				MEMBER(look_time_last, server::ctrigger_look, game_time_t);
				MEMBER(timeout_duration, server::ctrigger_look, float);
				MEMBER(timeout_fired, server::ctrigger_look, bool);
				MEMBER(is_looking, server::ctrigger_look, bool);
				MEMBER(b2_dfov, server::ctrigger_look, bool);
				MEMBER(use_velocity, server::ctrigger_look, bool);
				MEMBER(h_activator, server::ctrigger_look, chandle<cbase_entity>);
				MEMBER(test_occlusion, server::ctrigger_look, bool);
				MEMBER(on_timeout, server::ctrigger_look, centity_iooutput);
				MEMBER(on_start_look, server::ctrigger_look, centity_iooutput);
				MEMBER(on_end_look, server::ctrigger_look, centity_iooutput);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ctrigger_look : public ctrigger_once

			class ctrigger_push : public cbase_trigger
			{
			public:
				MEMBER(ang_push_entity_space, server::ctrigger_push, qangle);
				MEMBER(vec_push_dir_entity_space, server::ctrigger_push, vector);
				MEMBER(trigger_on_start_touch, server::ctrigger_push, bool);
				MEMBER(alternate_ticks_fix, server::ctrigger_push, float);
				MEMBER(push_speed, server::ctrigger_push, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ctrigger_push : public cbase_trigger

			class cscript_trigger_push : public ctrigger_push
			{
			public:
				MEMBER(v_extent, server::cscript_trigger_push, vector);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cscript_trigger_push : public ctrigger_push

			class ctrigger_toggle_save : public cbase_trigger
			{
			public:
				MEMBER(disabled, server::ctrigger_toggle_save, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ctrigger_toggle_save : public cbase_trigger

			class ctrigger_save : public cbase_trigger
			{
			public:
				MEMBER(force_new_level_unit, server::ctrigger_save, bool);
				MEMBER(dangerous_timer, server::ctrigger_save, float);
				MEMBER(min_hit_points, server::ctrigger_save, int);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ctrigger_save : public cbase_trigger

			class ctrigger_gravity : public cbase_trigger
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ctrigger_gravity : public cbase_trigger

			class ctrigger_proximity : public cbase_trigger
			{
			public:
				MEMBER(h_measure_target, server::ctrigger_proximity, chandle<cbase_entity>);
				MEMBER(isz_measure_target, server::ctrigger_proximity, cutl_symbol_large);
				MEMBER(radius, server::ctrigger_proximity, float);
				MEMBER(touchers, server::ctrigger_proximity, int);
				MEMBER(nearest_entity_distance, server::ctrigger_proximity, centity_output_template<float>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ctrigger_proximity : public cbase_trigger

			class ctrigger_impact : public ctrigger_multiple
			{
			public:
				MEMBER(magnitude, server::ctrigger_impact, float);
				MEMBER(noise, server::ctrigger_impact, float);
				MEMBER(viewkick, server::ctrigger_impact, float);
				MEMBER(output_force, server::ctrigger_impact, centity_output_template<vector>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ctrigger_impact : public ctrigger_multiple

			class cserver_ragdoll_trigger : public cbase_trigger
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cserver_ragdoll_trigger : public cbase_trigger

			class ctrigger_active_weapon_detect : public cbase_trigger
			{
			public:
				MEMBER(on_touched_active_weapon, server::ctrigger_active_weapon_detect, centity_iooutput);
				MEMBER(isz_weapon_class_name, server::ctrigger_active_weapon_detect, cutl_symbol_large);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ctrigger_active_weapon_detect : public cbase_trigger

			class ctrigger_physics : public cbase_trigger
			{
			public:
				MEMBER(gravity_scale, server::ctrigger_physics, float);
				MEMBER(linear_limit, server::ctrigger_physics, float);
				MEMBER(linear_damping, server::ctrigger_physics, float);
				MEMBER(angular_limit, server::ctrigger_physics, float);
				MEMBER(angular_damping, server::ctrigger_physics, float);
				MEMBER(linear_force, server::ctrigger_physics, float);
				MEMBER(frequency, server::ctrigger_physics, float);
				MEMBER(damping_ratio, server::ctrigger_physics, float);
				MEMBER(vec_linear_force_point_at, server::ctrigger_physics, vector);
				MEMBER(collapse_to_force_point, server::ctrigger_physics, bool);
				MEMBER(vec_linear_force_point_at_world, server::ctrigger_physics, vector);
				MEMBER(vec_linear_force_direction, server::ctrigger_physics, vector);
				MEMBER(convert_to_debris_when_possible, server::ctrigger_physics, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ctrigger_physics : public cbase_trigger

			class ctrigger_detect_bullet_fire : public cbase_trigger
			{
			public:
				MEMBER(player_fire_only, server::ctrigger_detect_bullet_fire, bool);
				MEMBER(on_detected_bullet_fire, server::ctrigger_detect_bullet_fire, centity_iooutput);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ctrigger_detect_bullet_fire : public cbase_trigger

			class ctrigger_detect_explosion : public cbase_trigger
			{
			public:
				MEMBER(on_detected_explosion, server::ctrigger_detect_explosion, centity_iooutput);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ctrigger_detect_explosion : public cbase_trigger

			class cscript_nav_blocker : public cfunc_nav_blocker
			{
			public:
				MEMBER(v_extent, server::cscript_nav_blocker, vector);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cscript_nav_blocker : public cfunc_nav_blocker

			class cbase_flex : public cbase_anim_graph
			{
			public:
				MEMBER(flex_weight, server::cbase_flex, cnetwork_utl_vector_base<float>);
				MEMBER(v_look_target_position, server::cbase_flex, vector);
				MEMBER(blinktoggle, server::cbase_flex, bool);
				MEMBER(allow_responses_end_time, server::cbase_flex, game_time_t);
				MEMBER(last_flex_animation_time, server::cbase_flex, game_time_t);
				MEMBER(next_scene_event_id, server::cbase_flex, uint32_t);
				MEMBER(update_layer_priorities, server::cbase_flex, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbase_flex : public cbase_anim_graph

			class cbase_prop_door : public cdynamic_prop
			{
			public:
				MEMBER(auto_return_delay, server::cbase_prop_door, float);
				MEMBER(h_door_list, server::cbase_prop_door, cutl_vector<chandle<cbase_prop_door>>);
				MEMBER(hardware_type, server::cbase_prop_door, int);
				MEMBER(needs_hardware, server::cbase_prop_door, bool);
				MEMBER(e_door_state, server::cbase_prop_door, door_state_t);
				MEMBER(locked, server::cbase_prop_door, bool);
				MEMBER(closed_position, server::cbase_prop_door, vector);
				MEMBER(closed_angles, server::cbase_prop_door, qangle);
				MEMBER(h_blocker, server::cbase_prop_door, chandle<cbase_entity>);
				MEMBER(first_blocked, server::cbase_prop_door, bool);
				MEMBER(ls, server::cbase_prop_door, locksound_t);
				MEMBER(force_closed, server::cbase_prop_door, bool);
				MEMBER(vec_latch_world_position, server::cbase_prop_door, vector);
				MEMBER(h_activator, server::cbase_prop_door, chandle<cbase_entity>);
				MEMBER(sound_moving, server::cbase_prop_door, cutl_symbol_large);
				MEMBER(sound_open, server::cbase_prop_door, cutl_symbol_large);
				MEMBER(sound_close, server::cbase_prop_door, cutl_symbol_large);
				MEMBER(sound_lock, server::cbase_prop_door, cutl_symbol_large);
				MEMBER(sound_unlock, server::cbase_prop_door, cutl_symbol_large);
				MEMBER(sound_latch, server::cbase_prop_door, cutl_symbol_large);
				MEMBER(sound_pound, server::cbase_prop_door, cutl_symbol_large);
				MEMBER(sound_jiggle, server::cbase_prop_door, cutl_symbol_large);
				MEMBER(sound_locked_anim, server::cbase_prop_door, cutl_symbol_large);
				MEMBER(num_close_attempts, server::cbase_prop_door, int);
				MEMBER(physics_material, server::cbase_prop_door, cutl_string_token);
				MEMBER(slave_name, server::cbase_prop_door, cutl_symbol_large);
				MEMBER(h_master, server::cbase_prop_door, chandle<cbase_prop_door>);
				MEMBER(on_blocked_closing, server::cbase_prop_door, centity_iooutput);
				MEMBER(on_blocked_opening, server::cbase_prop_door, centity_iooutput);
				MEMBER(on_unblocked_closing, server::cbase_prop_door, centity_iooutput);
				MEMBER(on_unblocked_opening, server::cbase_prop_door, centity_iooutput);
				MEMBER(on_fully_closed, server::cbase_prop_door, centity_iooutput);
				MEMBER(on_fully_open, server::cbase_prop_door, centity_iooutput);
				MEMBER(on_close, server::cbase_prop_door, centity_iooutput);
				MEMBER(on_open, server::cbase_prop_door, centity_iooutput);
				MEMBER(on_locked_use, server::cbase_prop_door, centity_iooutput);
				MEMBER(on_ajar_open, server::cbase_prop_door, centity_iooutput);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbase_prop_door : public cdynamic_prop

			class cenv_laser : public cbeam
			{
			public:
				MEMBER(isz_laser_target, server::cenv_laser, cutl_symbol_large);
				MEMBER(sprite_ptr, server::cenv_laser, csprite*);
				MEMBER(isz_sprite_name, server::cenv_laser, cutl_symbol_large);
				MEMBER(fire_position, server::cenv_laser, vector);
				MEMBER(start_frame, server::cenv_laser, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cenv_laser : public cbeam

			class cfish : public cbase_anim_graph
			{
			public:
				MEMBER(pool, server::cfish, chandle<cfish_pool>);
				MEMBER(id, server::cfish, uint32_t);
				MEMBER(x, server::cfish, float);
				MEMBER(y, server::cfish, float);
				MEMBER(z, server::cfish, float);
				MEMBER(angle, server::cfish, float);
				MEMBER(angle_change, server::cfish, float);
				MEMBER(forward, server::cfish, vector);
				MEMBER(perp, server::cfish, vector);
				MEMBER(pool_origin, server::cfish, vector);
				MEMBER(water_level, server::cfish, float);
				MEMBER(speed, server::cfish, float);
				MEMBER(desired_speed, server::cfish, float);
				MEMBER(calm_speed, server::cfish, float);
				MEMBER(panic_speed, server::cfish, float);
				MEMBER(avoid_range, server::cfish, float);
				MEMBER(turn_timer, server::cfish, countdown_timer);
				MEMBER(turn_clockwise, server::cfish, bool);
				MEMBER(go_timer, server::cfish, countdown_timer);
				MEMBER(move_timer, server::cfish, countdown_timer);
				MEMBER(panic_timer, server::cfish, countdown_timer);
				MEMBER(disperse_timer, server::cfish, countdown_timer);
				MEMBER(proximity_timer, server::cfish, countdown_timer);
				MEMBER(visible, server::cfish, cutl_vector<cfish*>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cfish : public cbase_anim_graph

			class citem : public cbase_anim_graph
			{
			public:
				MEMBER(on_player_touch, server::citem, centity_iooutput);
				MEMBER(activate_when_at_rest, server::citem, bool);
				MEMBER(on_cache_interaction, server::citem, centity_iooutput);
				MEMBER(on_player_pickup, server::citem, centity_iooutput);
				MEMBER(on_glove_pulled, server::citem, centity_iooutput);
				MEMBER(v_original_spawn_origin, server::citem, vector);
				MEMBER(v_original_spawn_angles, server::citem, qangle);
				MEMBER(phys_start_asleep, server::citem, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class citem : public cbase_anim_graph

			class cragdoll_prop : public cbase_anim_graph
			{
			public:
				MEMBER(ragdoll, server::cragdoll_prop, ragdoll_t);
				MEMBER(start_disabled, server::cragdoll_prop, bool);
				MEMBER(rag_pos, server::cragdoll_prop, cnetwork_utl_vector_base<vector>);
				MEMBER(rag_angles, server::cragdoll_prop, cnetwork_utl_vector_base<qangle>);
				MEMBER(h_ragdoll_source, server::cragdoll_prop, chandle<cbase_entity>);
				MEMBER(last_update_tick_count, server::cragdoll_prop, uint32_t);
				MEMBER(all_asleep, server::cragdoll_prop, bool);
				MEMBER(first_collision_after_launch, server::cragdoll_prop, bool);
				MEMBER(h_damage_entity, server::cragdoll_prop, chandle<cbase_entity>);
				MEMBER(h_killer, server::cragdoll_prop, chandle<cbase_entity>);
				MEMBER(h_physics_attacker, server::cragdoll_prop, chandle<cbase_player_pawn>);
				MEMBER(last_physics_influence_time, server::cragdoll_prop, game_time_t);
				MEMBER(fade_out_start_time, server::cragdoll_prop, game_time_t);
				MEMBER(fade_time, server::cragdoll_prop, float);
				MEMBER(vec_last_origin, server::cragdoll_prop, vector);
				MEMBER(awake_time, server::cragdoll_prop, game_time_t);
				MEMBER(last_origin_change_time, server::cragdoll_prop, game_time_t);
				MEMBER(blood_color, server::cragdoll_prop, int);
				MEMBER(str_origin_class_name, server::cragdoll_prop, cutl_symbol_large);
				MEMBER(str_source_class_name, server::cragdoll_prop, cutl_symbol_large);
				MEMBER(has_been_physgunned, server::cragdoll_prop, bool);
				MEMBER(should_teleport_physics, server::cragdoll_prop, bool);
				MEMBER(blend_weight, server::cragdoll_prop, float);
				MEMBER(default_fade_scale, server::cragdoll_prop, float);
				MEMBER(ragdoll_mins, server::cragdoll_prop, cutl_vector<vector>);
				MEMBER(ragdoll_maxs, server::cragdoll_prop, cutl_vector<vector>);
				MEMBER(should_delete_activation_record, server::cragdoll_prop, bool);
				MEMBER(validate_powered_ragdoll_pose, server::cragdoll_prop, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cragdoll_prop : public cbase_anim_graph

			class cphys_magnet : public cbase_anim_graph
			{
			public:
				MEMBER(on_magnet_attach, server::cphys_magnet, centity_iooutput);
				MEMBER(on_magnet_detach, server::cphys_magnet, centity_iooutput);
				MEMBER(mass_scale, server::cphys_magnet, float);
				MEMBER(force_limit, server::cphys_magnet, float);
				MEMBER(torque_limit, server::cphys_magnet, float);
				MEMBER(magnetted_entities, server::cphys_magnet, cutl_vector<magnetted_objects_t>);
				MEMBER(active, server::cphys_magnet, bool);
				MEMBER(has_hit_something, server::cphys_magnet, bool);
				MEMBER(total_mass, server::cphys_magnet, float);
				MEMBER(radius, server::cphys_magnet, float);
				MEMBER(next_suck_time, server::cphys_magnet, game_time_t);
				MEMBER(max_objects_attached, server::cphys_magnet, int);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cphys_magnet : public cbase_anim_graph

			class cphysics_prop : public cbreakable_prop
			{
			public:
				MEMBER(motion_enabled, server::cphysics_prop, centity_iooutput);
				MEMBER(on_awakened, server::cphysics_prop, centity_iooutput);
				MEMBER(on_awake, server::cphysics_prop, centity_iooutput);
				MEMBER(on_asleep, server::cphysics_prop, centity_iooutput);
				MEMBER(on_player_use, server::cphysics_prop, centity_iooutput);
				MEMBER(on_player_pickup, server::cphysics_prop, centity_iooutput);
				MEMBER(on_out_of_world, server::cphysics_prop, centity_iooutput);
				MEMBER(mass_scale, server::cphysics_prop, float);
				MEMBER(inertia_scale, server::cphysics_prop, float);
				MEMBER(buoyancy_scale, server::cphysics_prop, float);
				MEMBER(damage_type, server::cphysics_prop, int);
				MEMBER(damage_to_enable_motion, server::cphysics_prop, int);
				MEMBER(force_to_enable_motion, server::cphysics_prop, float);
				MEMBER(thrown_by_player, server::cphysics_prop, bool);
				MEMBER(dropped_by_player, server::cphysics_prop, bool);
				MEMBER(touched_by_player, server::cphysics_prop, bool);
				MEMBER(first_collision_after_launch, server::cphysics_prop, bool);
				MEMBER(exploitable_by_player, server::cphysics_prop, int);
				MEMBER(has_been_awakened, server::cphysics_prop, bool);
				MEMBER(is_override_prop, server::cphysics_prop, bool);
				MEMBER(next_check_disable_motion_contacts_time, server::cphysics_prop, game_time_t);
				MEMBER(initial_glow_state, server::cphysics_prop, int);
				MEMBER(glow_range, server::cphysics_prop, int);
				MEMBER(glow_range_min, server::cphysics_prop, int);
				MEMBER(glow_color, server::cphysics_prop, color);
				MEMBER(force_nav_ignore, server::cphysics_prop, bool);
				MEMBER(no_navmesh_blocker, server::cphysics_prop, bool);
				MEMBER(force_npc_exclude, server::cphysics_prop, bool);
				MEMBER(should_auto_convert_back_from_debris, server::cphysics_prop, bool);
				MEMBER(mute_impact_effects, server::cphysics_prop, bool);
				MEMBER(accept_damage_from_held_objects, server::cphysics_prop, bool);
				MEMBER(enable_use_output, server::cphysics_prop, bool);
				MEMBER(awake, server::cphysics_prop, bool);
				MEMBER(collision_group_override, server::cphysics_prop, int);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cphysics_prop : public cbreakable_prop

			class cphysics_prop_override : public cphysics_prop
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cphysics_prop_override : public cphysics_prop

			class cphysics_prop_respawnable : public cphysics_prop
			{
			public:
				MEMBER(v_original_spawn_origin, server::cphysics_prop_respawnable, vector);
				MEMBER(v_original_spawn_angles, server::cphysics_prop_respawnable, qangle);
				MEMBER(v_original_mins, server::cphysics_prop_respawnable, vector);
				MEMBER(v_original_maxs, server::cphysics_prop_respawnable, vector);
				MEMBER(respawn_duration, server::cphysics_prop_respawnable, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cphysics_prop_respawnable : public cphysics_prop

			class cwater_bullet : public cbase_anim_graph
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cwater_bullet : public cbase_anim_graph

			class cshatter_glass_shard_physics : public cphysics_prop
			{
			public:
				MEMBER(debris, server::cshatter_glass_shard_physics, bool);
				MEMBER(h_parent_shard, server::cshatter_glass_shard_physics, uint32_t);
				MEMBER(shard_desc, server::cshatter_glass_shard_physics, shard_model_desc_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cshatter_glass_shard_physics : public cphysics_prop

			class cecon_entity : public cbase_flex
			{
			public:
				MEMBER(attribute_manager, server::cecon_entity, cattribute_container);
				MEMBER(original_owner_xuid_low, server::cecon_entity, uint32_t);
				MEMBER(original_owner_xuid_high, server::cecon_entity, uint32_t);
				MEMBER(fallback_paint_kit, server::cecon_entity, int);
				MEMBER(fallback_seed, server::cecon_entity, int);
				MEMBER(fallback_wear, server::cecon_entity, float);
				MEMBER(fallback_stat_trak, server::cecon_entity, int);
				MEMBER(h_old_providee, server::cecon_entity, chandle<cbase_entity>);
				MEMBER(old_owner_class, server::cecon_entity, int);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cecon_entity : public cbase_flex

			class cecon_wearable : public cecon_entity
			{
			public:
				MEMBER(force_skin, server::cecon_wearable, int);
				MEMBER(always_allow, server::cecon_wearable, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cecon_wearable : public cecon_entity

			class cbase_grenade : public cbase_flex
			{
			public:
				MEMBER(on_player_pickup, server::cbase_grenade, centity_iooutput);
				MEMBER(on_explode, server::cbase_grenade, centity_iooutput);
				MEMBER(has_warned_ai, server::cbase_grenade, bool);
				MEMBER(is_smoke_grenade, server::cbase_grenade, bool);
				MEMBER(is_live, server::cbase_grenade, bool);
				MEMBER(dmg_radius, server::cbase_grenade, float);
				MEMBER(detonate_time, server::cbase_grenade, game_time_t);
				MEMBER(warn_aitime, server::cbase_grenade, float);
				MEMBER(damage, server::cbase_grenade, float);
				MEMBER(isz_bounce_sound, server::cbase_grenade, cutl_symbol_large);
				MEMBER(explosion_sound, server::cbase_grenade, cutl_string);
				MEMBER(h_thrower, server::cbase_grenade, chandle<ccsplayer_pawn>);
				MEMBER(next_attack, server::cbase_grenade, game_time_t);
				MEMBER(h_original_thrower, server::cbase_grenade, chandle<ccsplayer_pawn>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbase_grenade : public cbase_flex

			class ccoop_bonus_coin : public cdynamic_prop
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccoop_bonus_coin : public cdynamic_prop

			class cphysics_prop_multiplayer : public cphysics_prop
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cphysics_prop_multiplayer : public cphysics_prop

			class cbase_view_model : public cbase_anim_graph
			{
			public:
				MEMBER(vec_last_facing, server::cbase_view_model, vector);
				MEMBER(view_model_index, server::cbase_view_model, uint32_t);
				MEMBER(animation_parity, server::cbase_view_model, uint32_t);
				MEMBER(animation_start_time, server::cbase_view_model, float);
				MEMBER(h_weapon, server::cbase_view_model, chandle<cbase_player_weapon>);
				MEMBER(s_vmname, server::cbase_view_model, cutl_symbol_large);
				MEMBER(s_animation_prefix, server::cbase_view_model, cutl_symbol_large);
				MEMBER(h_old_layer_sequence, server::cbase_view_model, hsequence);
				MEMBER(old_layer, server::cbase_view_model, int);
				MEMBER(old_layer_start_time, server::cbase_view_model, float);
				MEMBER(h_control_panel, server::cbase_view_model, chandle<cbase_entity>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbase_view_model : public cbase_anim_graph

			class cpredicted_view_model : public cbase_view_model
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cpredicted_view_model : public cbase_view_model

			class cplanted_c4 : public cbase_anim_graph
			{
			public:
				MEMBER(bomb_ticking, server::cplanted_c4, bool);
				MEMBER(c4_blow, server::cplanted_c4, game_time_t);
				MEMBER(bomb_site, server::cplanted_c4, int);
				MEMBER(source_soundscape_hash, server::cplanted_c4, int);
				MEMBER(on_bomb_defused, server::cplanted_c4, centity_iooutput);
				MEMBER(on_bomb_begin_defuse, server::cplanted_c4, centity_iooutput);
				MEMBER(on_bomb_defuse_aborted, server::cplanted_c4, centity_iooutput);
				MEMBER(cannot_be_defused, server::cplanted_c4, bool);
				MEMBER(entity_spotted_state, server::cplanted_c4, entity_spotted_state_t);
				MEMBER(spot_rules, server::cplanted_c4, int);
				MEMBER(training_placed_by_player, server::cplanted_c4, bool);
				MEMBER(has_exploded, server::cplanted_c4, bool);
				MEMBER(timer_length, server::cplanted_c4, float);
				MEMBER(being_defused, server::cplanted_c4, bool);
				MEMBER(last_defuse_time, server::cplanted_c4, game_time_t);
				MEMBER(defuse_length, server::cplanted_c4, float);
				MEMBER(defuse_count_down, server::cplanted_c4, game_time_t);
				MEMBER(bomb_defused, server::cplanted_c4, bool);
				MEMBER(h_bomb_defuser, server::cplanted_c4, chandle<ccsplayer_pawn>);
				MEMBER(h_control_panel, server::cplanted_c4, chandle<cbase_entity>);
				MEMBER(progress_bar_time, server::cplanted_c4, int);
				MEMBER(voice_alert_fired, server::cplanted_c4, bool);
				MEMBER_ARR(voice_alert_played_arr, server::cplanted_c4, 4, bool);
				MEMBER(next_bot_beep_time, server::cplanted_c4, game_time_t);
				MEMBER(planted_after_pickup, server::cplanted_c4, bool);
				MEMBER(ang_catch_up_to_player_eye, server::cplanted_c4, qangle);
				MEMBER(last_spin_detection_time, server::cplanted_c4, game_time_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cplanted_c4 : public cbase_anim_graph

			class cbase_csgrenade_projectile : public cbase_grenade
			{
			public:
				MEMBER(v_initial_position, server::cbase_csgrenade_projectile, vector);
				MEMBER(v_initial_velocity, server::cbase_csgrenade_projectile, vector);
				MEMBER(bounces, server::cbase_csgrenade_projectile, int);
				MEMBER(explode_effect_index, server::cbase_csgrenade_projectile, cstrong_handle<info_for_resource_type_iparticle_system_definition>);
				MEMBER(explode_effect_tick_begin, server::cbase_csgrenade_projectile, int);
				MEMBER(vec_explode_effect_origin, server::cbase_csgrenade_projectile, vector);
				MEMBER(spawn_time, server::cbase_csgrenade_projectile, game_time_t);
				MEMBER(un_ogsextra_flags, server::cbase_csgrenade_projectile, uint8_t);
				MEMBER(detonation_recorded, server::cbase_csgrenade_projectile, bool);
				MEMBER(detonate_time, server::cbase_csgrenade_projectile, game_time_t);
				MEMBER(item_index, server::cbase_csgrenade_projectile, uint16_t);
				MEMBER(vec_original_spawn_location, server::cbase_csgrenade_projectile, vector);
				MEMBER(last_bounce_sound_time, server::cbase_csgrenade_projectile, game_time_t);
				MEMBER(vec_grenade_spin, server::cbase_csgrenade_projectile, rotation_vector);
				MEMBER(vec_last_hit_surface_normal, server::cbase_csgrenade_projectile, vector);
				MEMBER(ticks_at_zero_velocity, server::cbase_csgrenade_projectile, int);
				MEMBER(has_ever_hit_player, server::cbase_csgrenade_projectile, bool);
				MEMBER(clear_from_players, server::cbase_csgrenade_projectile, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbase_csgrenade_projectile : public cbase_grenade

			class citem_dogtags : public citem
			{
			public:
				MEMBER(owning_player, server::citem_dogtags, chandle<ccsplayer_pawn>);
				MEMBER(killing_player, server::citem_dogtags, chandle<ccsplayer_pawn>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class citem_dogtags : public citem

			class csensor_grenade_projectile : public cbase_csgrenade_projectile
			{
			public:
				MEMBER(expire_time, server::csensor_grenade_projectile, game_time_t);
				MEMBER(next_detect_player_sound, server::csensor_grenade_projectile, game_time_t);
				MEMBER(h_display_grenade, server::csensor_grenade_projectile, chandle<cbase_entity>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class csensor_grenade_projectile : public cbase_csgrenade_projectile

			class cbreach_charge_projectile : public cbase_grenade
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbreach_charge_projectile : public cbase_grenade

			class cbump_mine_projectile : public cbase_grenade
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbump_mine_projectile : public cbase_grenade

			class ctrip_wire_fire_projectile : public cbase_grenade
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ctrip_wire_fire_projectile : public cbase_grenade

			class cflashbang_projectile : public cbase_csgrenade_projectile
			{
			public:
				MEMBER(time_to_detonate, server::cflashbang_projectile, float);
				MEMBER(num_opponents_hit, server::cflashbang_projectile, uint8_t);
				MEMBER(num_teammates_hit, server::cflashbang_projectile, uint8_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cflashbang_projectile : public cbase_csgrenade_projectile

			class chegrenade_projectile : public cbase_csgrenade_projectile
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class chegrenade_projectile : public cbase_csgrenade_projectile

			class cchicken : public cdynamic_prop
			{
			public:
				MEMBER(attribute_manager, server::cchicken, cattribute_container);
				MEMBER(original_owner_xuid_low, server::cchicken, uint32_t);
				MEMBER(original_owner_xuid_high, server::cchicken, uint32_t);
				MEMBER(update_timer, server::cchicken, countdown_timer);
				MEMBER(stuck_anchor, server::cchicken, vector);
				MEMBER(stuck_timer, server::cchicken, countdown_timer);
				MEMBER(collision_stuck_timer, server::cchicken, countdown_timer);
				MEMBER(is_on_ground, server::cchicken, bool);
				MEMBER(v_fall_velocity, server::cchicken, vector);
				MEMBER(activity, server::cchicken, chicken_activity);
				MEMBER(activity_timer, server::cchicken, countdown_timer);
				MEMBER(turn_rate, server::cchicken, float);
				MEMBER(flee_from, server::cchicken, chandle<cbase_entity>);
				MEMBER(move_rate_throttle_timer, server::cchicken, countdown_timer);
				MEMBER(startle_timer, server::cchicken, countdown_timer);
				MEMBER(vocalize_timer, server::cchicken, countdown_timer);
				MEMBER(when_zombified, server::cchicken, game_time_t);
				MEMBER(jumped_this_frame, server::cchicken, bool);
				MEMBER(leader, server::cchicken, chandle<ccsplayer_pawn>);
				MEMBER(reuse_timer, server::cchicken, countdown_timer);
				MEMBER(has_been_used, server::cchicken, bool);
				MEMBER(jump_timer, server::cchicken, countdown_timer);
				MEMBER(last_jump_time, server::cchicken, float);
				MEMBER(in_jump, server::cchicken, bool);
				MEMBER(is_waiting_for_leader, server::cchicken, bool);
				MEMBER(repath_timer, server::cchicken, countdown_timer);
				MEMBER(inhibit_door_timer, server::cchicken, countdown_timer);
				MEMBER(inhibit_obstacle_avoidance_timer, server::cchicken, countdown_timer);
				MEMBER(vec_path_goal, server::cchicken, vector);
				MEMBER(active_follow_start_time, server::cchicken, game_time_t);
				MEMBER(follow_minute_timer, server::cchicken, countdown_timer);
				MEMBER(vec_last_egg_poop_position, server::cchicken, vector);
				MEMBER(vec_eggs_pooped, server::cchicken, cutl_vector<chandle<cbase_entity>>);
				MEMBER(block_direction_timer, server::cchicken, countdown_timer);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cchicken : public cdynamic_prop

			class chostage_carriable_prop : public cbase_anim_graph
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class chostage_carriable_prop : public cbase_anim_graph

			class citem_assault_suit : public citem
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class citem_assault_suit : public citem

			class citem_heavy_assault_suit : public citem_assault_suit
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class citem_heavy_assault_suit : public citem_assault_suit

			class citem_kevlar : public citem
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class citem_kevlar : public citem

			class citem_defuser : public citem
			{
			public:
				MEMBER(entity_spotted_state, server::citem_defuser, entity_spotted_state_t);
				MEMBER(spot_rules, server::citem_defuser, int);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class citem_defuser : public citem

			class cbase_player_weapon : public cecon_entity
			{
			public:
				MEMBER(next_primary_attack_tick, server::cbase_player_weapon, game_tick_t);
				MEMBER(next_primary_attack_tick_ratio, server::cbase_player_weapon, float);
				MEMBER(next_secondary_attack_tick, server::cbase_player_weapon, game_tick_t);
				MEMBER(next_secondary_attack_tick_ratio, server::cbase_player_weapon, float);
				MEMBER(clip1, server::cbase_player_weapon, int);
				MEMBER(clip2, server::cbase_player_weapon, int);
				MEMBER_ARR(reserve_ammo_arr, server::cbase_player_weapon, 2, int);
				MEMBER(on_player_use, server::cbase_player_weapon, centity_iooutput);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbase_player_weapon : public cecon_entity

			class cbase_flex_alias_fun_cbase_flex : public cbase_flex
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbase_flex_alias_fun_cbase_flex : public cbase_flex

			class cscript_item : public citem
			{
			public:
				MEMBER(on_player_pickup, server::cscript_item, centity_iooutput);
				MEMBER(move_type_override, server::cscript_item, move_type_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cscript_item : public citem

			class cragdoll_prop_alias_physics_prop_ragdoll : public cragdoll_prop
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cragdoll_prop_alias_physics_prop_ragdoll : public cragdoll_prop

			class cragdoll_prop_attached : public cragdoll_prop
			{
			public:
				MEMBER(bone_index_attached, server::cragdoll_prop_attached, uint32_t);
				MEMBER(ragdoll_attached_object_index, server::cragdoll_prop_attached, uint32_t);
				MEMBER(attachment_point_bone_space, server::cragdoll_prop_attached, vector);
				MEMBER(attachment_point_ragdoll_space, server::cragdoll_prop_attached, vector);
				MEMBER(should_detach, server::cragdoll_prop_attached, bool);
				MEMBER(should_delete_attached_activation_record, server::cragdoll_prop_attached, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cragdoll_prop_attached : public cragdoll_prop

			class cprop_door_rotating : public cbase_prop_door
			{
			public:
				MEMBER(vec_axis, server::cprop_door_rotating, vector);
				MEMBER(distance, server::cprop_door_rotating, float);
				MEMBER(e_spawn_position, server::cprop_door_rotating, prop_door_rotating_spawn_pos_t);
				MEMBER(e_open_direction, server::cprop_door_rotating, prop_door_rotating_open_direction_e);
				MEMBER(e_current_open_direction, server::cprop_door_rotating, prop_door_rotating_open_direction_e);
				MEMBER(ajar_angle, server::cprop_door_rotating, float);
				MEMBER(ang_rotation_ajar_deprecated, server::cprop_door_rotating, qangle);
				MEMBER(ang_rotation_closed, server::cprop_door_rotating, qangle);
				MEMBER(ang_rotation_open_forward, server::cprop_door_rotating, qangle);
				MEMBER(ang_rotation_open_back, server::cprop_door_rotating, qangle);
				MEMBER(ang_goal, server::cprop_door_rotating, qangle);
				MEMBER(vec_forward_bounds_min, server::cprop_door_rotating, vector);
				MEMBER(vec_forward_bounds_max, server::cprop_door_rotating, vector);
				MEMBER(vec_back_bounds_min, server::cprop_door_rotating, vector);
				MEMBER(vec_back_bounds_max, server::cprop_door_rotating, vector);
				MEMBER(ajar_door_shouldnt_always_open, server::cprop_door_rotating, bool);
				MEMBER(h_entity_blocker, server::cprop_door_rotating, chandle<centity_blocker>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cprop_door_rotating : public cbase_prop_door

			class cprop_door_rotating_breakable : public cprop_door_rotating
			{
			public:
				MEMBER(breakable, server::cprop_door_rotating_breakable, bool);
				MEMBER(is_able_to_close_area_portals, server::cprop_door_rotating_breakable, bool);
				MEMBER(current_damage_state, server::cprop_door_rotating_breakable, int);
				MEMBER(damage_states, server::cprop_door_rotating_breakable, cutl_vector<cutl_symbol_large>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cprop_door_rotating_breakable : public cprop_door_rotating

			class cbase_combat_character : public cbase_flex
			{
			public:
				MEMBER(force_server_ragdoll, server::cbase_combat_character, bool);
				MEMBER(h_my_wearables, server::cbase_combat_character, cnetwork_utl_vector_base<chandle<cecon_wearable>>);
				MEMBER(field_of_view, server::cbase_combat_character, float);
				MEMBER(impact_energy_scale, server::cbase_combat_character, float);
				MEMBER(last_hit_group, server::cbase_combat_character, hit_group_t);
				MEMBER(apply_stress_damage, server::cbase_combat_character, bool);
				MEMBER(blood_color, server::cbase_combat_character, int);
				MEMBER(nav_mesh_id, server::cbase_combat_character, int);
				MEMBER(damage_count, server::cbase_combat_character, int);
				MEMBER(vec_relationships_ptr, server::cbase_combat_character, cutl_vector<relationship_override_t>);
				MEMBER(str_relationships, server::cbase_combat_character, cutl_symbol_large);
				MEMBER(e_hull, server::cbase_combat_character, hull_t);
				MEMBER(nav_hull_idx, server::cbase_combat_character, uint32_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbase_combat_character : public cbase_flex

			class citem_generic : public citem
			{
			public:
				MEMBER(has_trigger_radius, server::citem_generic, bool);
				MEMBER(has_pickup_radius, server::citem_generic, bool);
				MEMBER(pickup_radius_sqr, server::citem_generic, float);
				MEMBER(trigger_radius_sqr, server::citem_generic, float);
				MEMBER(last_pickup_check, server::citem_generic, game_time_t);
				MEMBER(player_counter_listener_added, server::citem_generic, bool);
				MEMBER(player_in_trigger_radius, server::citem_generic, bool);
				MEMBER(h_spawn_particle_effect, server::citem_generic, cstrong_handle<info_for_resource_type_iparticle_system_definition>);
				MEMBER(ambient_sound_effect, server::citem_generic, cutl_symbol_large);
				MEMBER(auto_start_ambient_sound, server::citem_generic, bool);
				MEMBER(spawn_script_function, server::citem_generic, cutl_symbol_large);
				MEMBER(h_pickup_particle_effect, server::citem_generic, cstrong_handle<info_for_resource_type_iparticle_system_definition>);
				MEMBER(pickup_sound_effect, server::citem_generic, cutl_symbol_large);
				MEMBER(pickup_script_function, server::citem_generic, cutl_symbol_large);
				MEMBER(h_timeout_particle_effect, server::citem_generic, cstrong_handle<info_for_resource_type_iparticle_system_definition>);
				MEMBER(timeout_sound_effect, server::citem_generic, cutl_symbol_large);
				MEMBER(timeout_script_function, server::citem_generic, cutl_symbol_large);
				MEMBER(pickup_filter_name, server::citem_generic, cutl_symbol_large);
				MEMBER(h_pickup_filter, server::citem_generic, chandle<cbase_filter>);
				MEMBER(on_pickup, server::citem_generic, centity_iooutput);
				MEMBER(on_timeout, server::citem_generic, centity_iooutput);
				MEMBER(on_trigger_start_touch, server::citem_generic, centity_iooutput);
				MEMBER(on_trigger_touch, server::citem_generic, centity_iooutput);
				MEMBER(on_trigger_end_touch, server::citem_generic, centity_iooutput);
				MEMBER(allow_pickup_script_function, server::citem_generic, cutl_symbol_large);
				MEMBER(pickup_radius, server::citem_generic, float);
				MEMBER(trigger_radius, server::citem_generic, float);
				MEMBER(trigger_sound_effect, server::citem_generic, cutl_symbol_large);
				MEMBER(glow_when_in_trigger, server::citem_generic, bool);
				MEMBER(glow_color, server::citem_generic, color);
				MEMBER(useable, server::citem_generic, bool);
				MEMBER(h_trigger_helper, server::citem_generic, chandle<citem_generic_trigger_helper>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class citem_generic : public citem

			class cbase_player_pawn : public cbase_combat_character
			{
			public:
				MEMBER(weapon_services_ptr, server::cbase_player_pawn, cplayer_weapon_services*);
				MEMBER(item_services_ptr, server::cbase_player_pawn, cplayer_item_services*);
				MEMBER(autoaim_services_ptr, server::cbase_player_pawn, cplayer_autoaim_services*);
				MEMBER(observer_services_ptr, server::cbase_player_pawn, cplayer_observer_services*);
				MEMBER(water_services_ptr, server::cbase_player_pawn, cplayer_water_services*);
				MEMBER(use_services_ptr, server::cbase_player_pawn, cplayer_use_services*);
				MEMBER(flashlight_services_ptr, server::cbase_player_pawn, cplayer_flashlight_services*);
				MEMBER(camera_services_ptr, server::cbase_player_pawn, cplayer_camera_services*);
				MEMBER(movement_services_ptr, server::cbase_player_pawn, cplayer_movement_services*);
				MEMBER(server_view_angle_changes, server::cbase_player_pawn, cutl_vector_embedded_network_var<view_angle_server_change_t>);
				MEMBER(highest_generated_server_view_angle_change_index, server::cbase_player_pawn, uint32_t);
				MEMBER(v_angle, server::cbase_player_pawn, qangle);
				MEMBER(v_angle_previous, server::cbase_player_pawn, qangle);
				MEMBER(hide_hud, server::cbase_player_pawn, uint32_t);
				MEMBER(skybox3d, server::cbase_player_pawn, sky3dparams_t);
				MEMBER(time_last_hurt, server::cbase_player_pawn, game_time_t);
				MEMBER(death_time, server::cbase_player_pawn, game_time_t);
				MEMBER(next_suicide_time, server::cbase_player_pawn, game_time_t);
				MEMBER(init_hud, server::cbase_player_pawn, bool);
				MEMBER(expresser_ptr, server::cbase_player_pawn, cai_expresser*);
				MEMBER(h_controller, server::cbase_player_pawn, chandle<cbase_player_controller>);
				MEMBER(hltv_replay_delay, server::cbase_player_pawn, float);
				MEMBER(hltv_replay_end, server::cbase_player_pawn, float);
				MEMBER(hltv_replay_entity, server::cbase_player_pawn, centity_index);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbase_player_pawn : public cbase_combat_character

			class ccsgoview_model : public cpredicted_view_model
			{
			public:
				MEMBER(should_ignore_offset_and_accuracy, server::ccsgoview_model, bool);
				MEMBER(weapon_parity, server::ccsgoview_model, uint32_t);
				MEMBER(old_weapon_parity, server::ccsgoview_model, uint32_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsgoview_model : public cpredicted_view_model

			class ccsweapon_base : public cbase_player_weapon
			{
			public:
				MEMBER(removeable, server::ccsweapon_base, bool);
				MEMBER(fire_sequence_start_time, server::ccsweapon_base, float);
				MEMBER(fire_sequence_start_time_change, server::ccsweapon_base, int);
				MEMBER(fire_sequence_start_time_ack, server::ccsweapon_base, int);
				MEMBER(e_player_fire_event, server::ccsweapon_base, player_anim_event_t);
				MEMBER(e_player_fire_event_attack_type, server::ccsweapon_base, weapon_attack_type_t);
				MEMBER(seq_idle, server::ccsweapon_base, hsequence);
				MEMBER(seq_fire_primary, server::ccsweapon_base, hsequence);
				MEMBER(seq_fire_secondary, server::ccsweapon_base, hsequence);
				MEMBER(third_person_fire_sequences, server::ccsweapon_base, cutl_vector<hsequence>);
				MEMBER(h_current_third_person_sequence, server::ccsweapon_base, hsequence);
				MEMBER(silencer_bone_index, server::ccsweapon_base, int);
				MEMBER_ARR(third_person_sequences_arr, server::ccsweapon_base, 6, hsequence);
				MEMBER(player_ammo_stock_on_pickup, server::ccsweapon_base, bool);
				MEMBER(require_use_to_touch, server::ccsweapon_base, bool);
				MEMBER(state, server::ccsweapon_base, csweapon_state_t);
				MEMBER(last_time_in_air, server::ccsweapon_base, game_time_t);
				MEMBER(last_deploy_time, server::ccsweapon_base, game_time_t);
				MEMBER(view_model_index, server::ccsweapon_base, uint32_t);
				MEMBER(reloads_with_clips, server::ccsweapon_base, bool);
				MEMBER(time_weapon_idle, server::ccsweapon_base, game_time_t);
				MEMBER(fire_on_empty, server::ccsweapon_base, bool);
				MEMBER(on_player_pickup, server::ccsweapon_base, centity_iooutput);
				MEMBER(weapon_mode, server::ccsweapon_base, csweapon_mode);
				MEMBER(turning_inaccuracy_delta, server::ccsweapon_base, float);
				MEMBER(vec_turning_inaccuracy_eye_dir_last, server::ccsweapon_base, vector);
				MEMBER(turning_inaccuracy, server::ccsweapon_base, float);
				MEMBER(accuracy_penalty, server::ccsweapon_base, float);
				MEMBER(last_accuracy_update_time, server::ccsweapon_base, game_time_t);
				MEMBER(accuracy_smoothed_for_zoom, server::ccsweapon_base, float);
				MEMBER(scope_zoom_end_time, server::ccsweapon_base, game_time_t);
				MEMBER(recoil_index, server::ccsweapon_base, int);
				MEMBER(recoil_index_1, server::ccsweapon_base, float);
				MEMBER(burst_mode, server::ccsweapon_base, bool);
				MEMBER(postpone_fire_ready_ticks, server::ccsweapon_base, game_tick_t);
				MEMBER(postpone_fire_ready_frac, server::ccsweapon_base, float);
				MEMBER(in_reload, server::ccsweapon_base, bool);
				MEMBER(reload_visually_complete, server::ccsweapon_base, bool);
				MEMBER(dropped_at_time, server::ccsweapon_base, game_time_t);
				MEMBER(is_hauled_back, server::ccsweapon_base, bool);
				MEMBER(silencer_on, server::ccsweapon_base, bool);
				MEMBER(time_silencer_switch_complete, server::ccsweapon_base, game_time_t);
				MEMBER(original_team_number, server::ccsweapon_base, int);
				MEMBER(next_attack_render_time_offset, server::ccsweapon_base, float);
				MEMBER(can_be_picked_up, server::ccsweapon_base, bool);
				MEMBER(use_can_override_next_owner_touch_time, server::ccsweapon_base, bool);
				MEMBER(next_owner_touch_time, server::ccsweapon_base, game_time_t);
				MEMBER(next_prev_owner_touch_time, server::ccsweapon_base, game_time_t);
				MEMBER(h_prev_owner, server::ccsweapon_base, chandle<ccsplayer_pawn>);
				MEMBER(drop_tick, server::ccsweapon_base, game_tick_t);
				MEMBER(donated, server::ccsweapon_base, bool);
				MEMBER(last_shot_time, server::ccsweapon_base, game_time_t);
				MEMBER(was_owned_by_ct, server::ccsweapon_base, bool);
				MEMBER(was_owned_by_terrorist, server::ccsweapon_base, bool);
				MEMBER(fired_out_of_ammo_event, server::ccsweapon_base, bool);
				MEMBER(num_remove_unowned_weapon_think, server::ccsweapon_base, int);
				MEMBER(iron_sight_controller, server::ccsweapon_base, ciron_sight_controller);
				MEMBER(iron_sight_mode, server::ccsweapon_base, int);
				MEMBER(last_lostrace_failure_time, server::ccsweapon_base, game_time_t);
				MEMBER(num_empty_attacks, server::ccsweapon_base, int);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsweapon_base : public cbase_player_weapon

			class ccsweapon_base_gun : public ccsweapon_base
			{
			public:
				MEMBER(zoom_level, server::ccsweapon_base_gun, int);
				MEMBER(burst_shots_remaining, server::ccsweapon_base_gun, int);
				MEMBER(silenced_model_index, server::ccsweapon_base_gun, int);
				MEMBER(in_precache, server::ccsweapon_base_gun, bool);
				MEMBER(needs_bolt_action, server::ccsweapon_base_gun, bool);
				MEMBER(skill_reload_available, server::ccsweapon_base_gun, bool);
				MEMBER(skill_reload_lifted_reload_key, server::ccsweapon_base_gun, bool);
				MEMBER(skill_bolt_interrupt_available, server::ccsweapon_base_gun, bool);
				MEMBER(skill_bolt_lifted_fire_key, server::ccsweapon_base_gun, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsweapon_base_gun : public ccsweapon_base

			class cc4 : public ccsweapon_base
			{
			public:
				MEMBER(vec_last_valid_player_held_position, server::cc4, vector);
				MEMBER(vec_last_valid_dropped_position, server::cc4, vector);
				MEMBER(do_valid_dropped_position_check, server::cc4, bool);
				MEMBER(started_arming, server::cc4, bool);
				MEMBER(armed_time, server::cc4, game_time_t);
				MEMBER(bomb_placed_animation, server::cc4, bool);
				MEMBER(is_planting_via_use, server::cc4, bool);
				MEMBER(entity_spotted_state, server::cc4, entity_spotted_state_t);
				MEMBER(spot_rules, server::cc4, int);
				MEMBER_ARR(played_arming_beeps_arr, server::cc4, 7, bool);
				MEMBER(bomb_planted, server::cc4, bool);
				MEMBER(dropped_from_death, server::cc4, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cc4 : public ccsweapon_base

			class cdeagle : public ccsweapon_base_gun
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cdeagle : public ccsweapon_base_gun

			class cweapon_elite : public ccsweapon_base_gun
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cweapon_elite : public ccsweapon_base_gun

			class cweapon_nova : public ccsweapon_base
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cweapon_nova : public ccsweapon_base

			class cweapon_sawedoff : public ccsweapon_base
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cweapon_sawedoff : public ccsweapon_base

			class cweapon_taser : public ccsweapon_base_gun
			{
			public:
				MEMBER(fire_time, server::cweapon_taser, game_time_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cweapon_taser : public ccsweapon_base_gun

			class cweapon_xm1014 : public ccsweapon_base
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cweapon_xm1014 : public ccsweapon_base

			class cknife : public ccsweapon_base
			{
			public:
				MEMBER(first_attack, server::cknife, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cknife : public ccsweapon_base

			class cmelee : public ccsweapon_base
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cmelee : public ccsweapon_base

			class cweapon_shield : public ccsweapon_base_gun
			{
			public:
				MEMBER(bullet_damage_absorbed, server::cweapon_shield, float);
				MEMBER(last_bullet_hit_sound_time, server::cweapon_shield, game_time_t);
				MEMBER(display_health, server::cweapon_shield, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cweapon_shield : public ccsweapon_base_gun

			class cmolotov_projectile : public cbase_csgrenade_projectile
			{
			public:
				MEMBER(is_inc_grenade, server::cmolotov_projectile, bool);
				MEMBER(detonated, server::cmolotov_projectile, bool);
				MEMBER(still_timer, server::cmolotov_projectile, interval_timer);
				MEMBER(has_bounced_off_player, server::cmolotov_projectile, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cmolotov_projectile : public cbase_csgrenade_projectile

			class cdecoy_projectile : public cbase_csgrenade_projectile
			{
			public:
				MEMBER(decoy_shot_tick, server::cdecoy_projectile, int);
				MEMBER(shots_remaining, server::cdecoy_projectile, int);
				MEMBER(expire_time, server::cdecoy_projectile, game_time_t);
				MEMBER(decoy_weapon_def_index, server::cdecoy_projectile, uint16_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cdecoy_projectile : public cbase_csgrenade_projectile

			class csmoke_grenade_projectile : public cbase_csgrenade_projectile
			{
			public:
				MEMBER(smoke_effect_tick_begin, server::csmoke_grenade_projectile, int);
				MEMBER(did_smoke_effect, server::csmoke_grenade_projectile, bool);
				MEMBER(random_seed, server::csmoke_grenade_projectile, int);
				MEMBER(v_smoke_color, server::csmoke_grenade_projectile, vector);
				MEMBER(v_smoke_detonation_pos, server::csmoke_grenade_projectile, vector);
				MEMBER(voxel_frame_data, server::csmoke_grenade_projectile, cutl_vector<uint8_t>);
				MEMBER(last_bounce, server::csmoke_grenade_projectile, game_time_t);
				MEMBER(fllast_simulation_time, server::csmoke_grenade_projectile, game_time_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class csmoke_grenade_projectile : public cbase_csgrenade_projectile

			class cbase_csgrenade : public ccsweapon_base
			{
			public:
				MEMBER(redraw, server::cbase_csgrenade, bool);
				MEMBER(is_held_by_player, server::cbase_csgrenade, bool);
				MEMBER(pin_pulled, server::cbase_csgrenade, bool);
				MEMBER(jump_throw, server::cbase_csgrenade, bool);
				MEMBER(e_throw_status, server::cbase_csgrenade, egrenade_throw_state);
				MEMBER(throw_time, server::cbase_csgrenade, game_time_t);
				MEMBER(throw_strength, server::cbase_csgrenade, float);
				MEMBER(throw_strength_approach, server::cbase_csgrenade, float);
				MEMBER(drop_time, server::cbase_csgrenade, game_time_t);
				MEMBER(next_hold_tick, server::cbase_csgrenade, game_tick_t);
				MEMBER(next_hold_frac, server::cbase_csgrenade, float);
				MEMBER(just_pulled_pin, server::cbase_csgrenade, bool);
				MEMBER(switch_weapon_after_throw, server::cbase_csgrenade, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbase_csgrenade : public ccsweapon_base

			class cweapon_base_item : public ccsweapon_base
			{
			public:
				MEMBER(sequence_complete_timer, server::cweapon_base_item, countdown_timer);
				MEMBER(redraw, server::cweapon_base_item, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cweapon_base_item : public ccsweapon_base

			class citem_healthshot : public cweapon_base_item
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class citem_healthshot : public cweapon_base_item

			class cfists : public ccsweapon_base
			{
			public:
				MEMBER(playing_uninterruptable_act, server::cfists, bool);
				MEMBER(uninterruptable_activity, server::cfists, player_anim_event_t);
				MEMBER(restore_prev_wep, server::cfists, bool);
				MEMBER(h_weapon_before_previous, server::cfists, chandle<cbase_player_weapon>);
				MEMBER(h_weapon_previous, server::cfists, chandle<cbase_player_weapon>);
				MEMBER(delayed_hard_punch_incoming, server::cfists, bool);
				MEMBER(destroy_after_taunt, server::cfists, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cfists : public ccsweapon_base

			class csensor_grenade : public cbase_csgrenade
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class csensor_grenade : public cbase_csgrenade

			class cbreach_charge : public ccsweapon_base
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbreach_charge : public ccsweapon_base

			class cbump_mine : public ccsweapon_base
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbump_mine : public ccsweapon_base

			class ctablet : public ccsweapon_base
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ctablet : public ccsweapon_base

			class ctrip_wire_fire : public cbase_csgrenade
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ctrip_wire_fire : public cbase_csgrenade

			class cweapon_zone_repulsor : public ccsweapon_base_gun
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cweapon_zone_repulsor : public ccsweapon_base_gun

			class ccsplayer_pawn_base : public cbase_player_pawn
			{
			public:
				MEMBER(ctouch_expansion_component, server::ccsplayer_pawn_base, ctouch_expansion_component);
				MEMBER(ping_services_ptr, server::ccsplayer_pawn_base, ccsplayer_ping_services*);
				MEMBER(view_model_services_ptr, server::ccsplayer_pawn_base, cplayer_view_model_services*);
				MEMBER(display_history_bits, server::ccsplayer_pawn_base, uint32_t);
				MEMBER(last_attacked_teammate, server::ccsplayer_pawn_base, float);
				MEMBER(h_original_controller, server::ccsplayer_pawn_base, chandle<ccsplayer_controller>);
				MEMBER(blind_until_time, server::ccsplayer_pawn_base, game_time_t);
				MEMBER(blind_start_time, server::ccsplayer_pawn_base, game_time_t);
				MEMBER(allow_auto_follow_time, server::ccsplayer_pawn_base, game_time_t);
				MEMBER(entity_spotted_state, server::ccsplayer_pawn_base, entity_spotted_state_t);
				MEMBER(spot_rules, server::ccsplayer_pawn_base, int);
				MEMBER(player_state, server::ccsplayer_pawn_base, csplayer_state);
				MEMBER(chicken_idle_sound_timer, server::ccsplayer_pawn_base, countdown_timer);
				MEMBER(chicken_jump_sound_timer, server::ccsplayer_pawn_base, countdown_timer);
				MEMBER(vec_last_bookmarked_position, server::ccsplayer_pawn_base, vector);
				MEMBER(last_distance_traveled_notice, server::ccsplayer_pawn_base, float);
				MEMBER(accumulated_distance_traveled, server::ccsplayer_pawn_base, float);
				MEMBER(last_friendly_fire_damage_reduction_ratio, server::ccsplayer_pawn_base, float);
				MEMBER(respawning, server::ccsplayer_pawn_base, bool);
				MEMBER(last_pickup_priority, server::ccsplayer_pawn_base, int);
				MEMBER(last_pickup_priority_time, server::ccsplayer_pawn_base, float);
				MEMBER(is_scoped, server::ccsplayer_pawn_base, bool);
				MEMBER(is_walking, server::ccsplayer_pawn_base, bool);
				MEMBER(resume_zoom, server::ccsplayer_pawn_base, bool);
				MEMBER(is_defusing, server::ccsplayer_pawn_base, bool);
				MEMBER(is_grabbing_hostage, server::ccsplayer_pawn_base, bool);
				MEMBER(blocking_use_action_in_progress, server::ccsplayer_pawn_base, csplayer_blocking_use_action_t);
				MEMBER(immune_to_gun_game_damage_time, server::ccsplayer_pawn_base, game_time_t);
				MEMBER(gun_game_immunity, server::ccsplayer_pawn_base, bool);
				MEMBER(molotov_damage_time, server::ccsplayer_pawn_base, float);
				MEMBER(has_moved_since_spawn, server::ccsplayer_pawn_base, bool);
				MEMBER(can_move_during_freeze_period, server::ccsplayer_pawn_base, bool);
				MEMBER(guardian_too_far_dist_frac, server::ccsplayer_pawn_base, float);
				MEMBER(next_guardian_too_far_hurt_time, server::ccsplayer_pawn_base, float);
				MEMBER(detected_by_enemy_sensor_time, server::ccsplayer_pawn_base, game_time_t);
				MEMBER(dealt_damage_to_enemy_most_recent_timestamp, server::ccsplayer_pawn_base, float);
				MEMBER(last_equipped_helmet_time, server::ccsplayer_pawn_base, game_time_t);
				MEMBER(last_equipped_armor_time, server::ccsplayer_pawn_base, game_time_t);
				MEMBER(heavy_assault_suit_cooldown_remaining, server::ccsplayer_pawn_base, int);
				MEMBER(reset_armor_next_spawn, server::ccsplayer_pawn_base, bool);
				MEMBER(last_bump_mine_bump_time, server::ccsplayer_pawn_base, game_time_t);
				MEMBER(emit_sound_time, server::ccsplayer_pawn_base, game_time_t);
				MEMBER(num_spawns, server::ccsplayer_pawn_base, int);
				MEMBER(should_have_cash, server::ccsplayer_pawn_base, int);
				MEMBER(invalid_steam_logon_delayed, server::ccsplayer_pawn_base, bool);
				MEMBER(last_action, server::ccsplayer_pawn_base, game_time_t);
				MEMBER_ARR(name_change_history_arr, server::ccsplayer_pawn_base, 5, float);
				MEMBER(last_given_defuser_time, server::ccsplayer_pawn_base, float);
				MEMBER(last_given_bomb_time, server::ccsplayer_pawn_base, float);
				MEMBER(has_night_vision, server::ccsplayer_pawn_base, bool);
				MEMBER(night_vision_on, server::ccsplayer_pawn_base, bool);
				MEMBER(next_radar_update_time, server::ccsplayer_pawn_base, float);
				MEMBER(last_money_update_time, server::ccsplayer_pawn_base, float);
				MEMBER_ARR(menu_string_buffer_arr, server::ccsplayer_pawn_base, 1024, char);
				MEMBER(intro_cam_time, server::ccsplayer_pawn_base, float);
				MEMBER(my_collision_group, server::ccsplayer_pawn_base, int);
				MEMBER(in_no_defuse_area, server::ccsplayer_pawn_base, bool);
				MEMBER(killed_by_taser, server::ccsplayer_pawn_base, bool);
				MEMBER(move_state, server::ccsplayer_pawn_base, int);
				MEMBER(grenade_parameter_stash_time, server::ccsplayer_pawn_base, game_time_t);
				MEMBER(grenade_parameters_stashed, server::ccsplayer_pawn_base, bool);
				MEMBER(ang_stashed_shoot_angles, server::ccsplayer_pawn_base, qangle);
				MEMBER(vec_stashed_grenade_throw_position, server::ccsplayer_pawn_base, vector);
				MEMBER(vec_stashed_velocity, server::ccsplayer_pawn_base, vector);
				MEMBER_ARR(ang_shoot_angle_history_arr, server::ccsplayer_pawn_base, 2, qangle);
				MEMBER_ARR(vec_throw_position_history_arr, server::ccsplayer_pawn_base, 2, vector);
				MEMBER_ARR(vec_velocity_history_arr, server::ccsplayer_pawn_base, 2, vector);
				MEMBER(died_airborne, server::ccsplayer_pawn_base, bool);
				MEMBER(bomb_site_index, server::ccsplayer_pawn_base, centity_index);
				MEMBER(which_bomb_zone, server::ccsplayer_pawn_base, int);
				MEMBER(in_bomb_zone_trigger, server::ccsplayer_pawn_base, bool);
				MEMBER(was_in_bomb_zone_trigger, server::ccsplayer_pawn_base, bool);
				MEMBER(direction, server::ccsplayer_pawn_base, int);
				MEMBER(shots_fired, server::ccsplayer_pawn_base, int);
				MEMBER(armor_value, server::ccsplayer_pawn_base, int);
				MEMBER(flinch_stack, server::ccsplayer_pawn_base, float);
				MEMBER(velocity_modifier, server::ccsplayer_pawn_base, float);
				MEMBER(hit_heading, server::ccsplayer_pawn_base, float);
				MEMBER(hit_body_part, server::ccsplayer_pawn_base, int);
				MEMBER(hostages_killed, server::ccsplayer_pawn_base, int);
				MEMBER(vec_total_bullet_force, server::ccsplayer_pawn_base, vector);
				MEMBER(flash_duration, server::ccsplayer_pawn_base, float);
				MEMBER(flash_max_alpha, server::ccsplayer_pawn_base, float);
				MEMBER(progress_bar_start_time, server::ccsplayer_pawn_base, float);
				MEMBER(progress_bar_duration, server::ccsplayer_pawn_base, int);
				MEMBER(wait_for_no_attack, server::ccsplayer_pawn_base, bool);
				MEMBER(lower_body_yaw_target, server::ccsplayer_pawn_base, float);
				MEMBER(strafing, server::ccsplayer_pawn_base, bool);
				MEMBER(last_standing_pos, server::ccsplayer_pawn_base, vector);
				MEMBER(ignore_ladder_jump_time, server::ccsplayer_pawn_base, float);
				MEMBER(ladder_surpression_timer, server::ccsplayer_pawn_base, countdown_timer);
				MEMBER(last_ladder_normal, server::ccsplayer_pawn_base, vector);
				MEMBER(last_ladder_pos, server::ccsplayer_pawn_base, vector);
				MEMBER(third_person_heading, server::ccsplayer_pawn_base, qangle);
				MEMBER(slope_drop_offset, server::ccsplayer_pawn_base, float);
				MEMBER(slope_drop_height, server::ccsplayer_pawn_base, float);
				MEMBER(v_head_constraint_offset, server::ccsplayer_pawn_base, vector);
				MEMBER(last_weapon_fire_usercmd, server::ccsplayer_pawn_base, int);
				MEMBER(ang_eye_angles, server::ccsplayer_pawn_base, qangle);
				MEMBER(vcollision_initted, server::ccsplayer_pawn_base, bool);
				MEMBER(stored_spawn_position, server::ccsplayer_pawn_base, vector);
				MEMBER(stored_spawn_angle, server::ccsplayer_pawn_base, qangle);
				MEMBER(is_spawning, server::ccsplayer_pawn_base, bool);
				MEMBER(hide_target_id, server::ccsplayer_pawn_base, bool);
				MEMBER(num_danger_zone_damage_hits, server::ccsplayer_pawn_base, int);
				MEMBER(hud_mini_score_hidden, server::ccsplayer_pawn_base, bool);
				MEMBER(hud_radar_hidden, server::ccsplayer_pawn_base, bool);
				MEMBER(last_killer_index, server::ccsplayer_pawn_base, centity_index);
				MEMBER(last_concurrent_killed, server::ccsplayer_pawn_base, int);
				MEMBER(death_cam_music, server::ccsplayer_pawn_base, int);
				MEMBER(addon_bits, server::ccsplayer_pawn_base, int);
				MEMBER(primary_addon, server::ccsplayer_pawn_base, int);
				MEMBER(secondary_addon, server::ccsplayer_pawn_base, int);
				MEMBER(current_deafness_filter, server::ccsplayer_pawn_base, cutl_string_token);
				MEMBER(num_enemies_killed_this_spawn, server::ccsplayer_pawn_base, int);
				MEMBER(num_enemies_killed_this_round, server::ccsplayer_pawn_base, int);
				MEMBER(num_enemies_at_round_start, server::ccsplayer_pawn_base, int);
				MEMBER(was_not_killed_naturally, server::ccsplayer_pawn_base, bool);
				MEMBER_ARR(vec_player_patch_econ_indices_arr, server::ccsplayer_pawn_base, 5, uint32_t);
				MEMBER(death_flags, server::ccsplayer_pawn_base, int);
				MEMBER(h_pet, server::ccsplayer_pawn_base, chandle<cchicken>);
				MEMBER(un_current_equipment_value, server::ccsplayer_pawn_base, uint16_t);
				MEMBER(un_round_start_equipment_value, server::ccsplayer_pawn_base, uint16_t);
				MEMBER(un_freezetime_end_equipment_value, server::ccsplayer_pawn_base, uint16_t);
				MEMBER(survival_team_number, server::ccsplayer_pawn_base, int);
				MEMBER(has_death_info, server::ccsplayer_pawn_base, bool);
				MEMBER(death_info_time, server::ccsplayer_pawn_base, float);
				MEMBER(vec_death_info_origin, server::ccsplayer_pawn_base, vector);
				MEMBER(killed_by_headshot, server::ccsplayer_pawn_base, bool);
				MEMBER(last_hit_box, server::ccsplayer_pawn_base, int);
				MEMBER(last_health, server::ccsplayer_pawn_base, int);
				MEMBER(last_collision_ceiling, server::ccsplayer_pawn_base, float);
				MEMBER(last_collision_ceiling_change_time, server::ccsplayer_pawn_base, float);
				MEMBER(bot_ptr, server::ccsplayer_pawn_base, ccsbot*);
				MEMBER(bot_allow_active, server::ccsplayer_pawn_base, bool);
				MEMBER(committing_suicide_on_team_change, server::ccsplayer_pawn_base, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsplayer_pawn_base : public cbase_player_pawn

			class ccsobserver_pawn : public ccsplayer_pawn_base
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsobserver_pawn : public ccsplayer_pawn_base

			class ccsplayer_pawn : public ccsplayer_pawn_base
			{
			public:
				MEMBER(bullet_services_ptr, server::ccsplayer_pawn, ccsplayer_bullet_services*);
				MEMBER(hostage_services_ptr, server::ccsplayer_pawn, ccsplayer_hostage_services*);
				MEMBER(buy_services_ptr, server::ccsplayer_pawn, ccsplayer_buy_services*);
				MEMBER(action_tracking_services_ptr, server::ccsplayer_pawn, ccsplayer_action_tracking_services*);
				MEMBER(radio_services_ptr, server::ccsplayer_pawn, ccsplayer_radio_services*);
				MEMBER(damage_react_services_ptr, server::ccsplayer_pawn, ccsplayer_damage_react_services*);
				MEMBER(character_def_index, server::ccsplayer_pawn, uint16_t);
				MEMBER(h_previous_model, server::ccsplayer_pawn, cstrong_handle<info_for_resource_type_cmodel>);
				MEMBER(has_female_voice, server::ccsplayer_pawn, bool);
				MEMBER(str_voprefix, server::ccsplayer_pawn, cutl_string);
				MEMBER_ARR(last_place_name_arr, server::ccsplayer_pawn, 18, char);
				MEMBER(in_hostage_reset_zone, server::ccsplayer_pawn, bool);
				MEMBER(in_buy_zone, server::ccsplayer_pawn, bool);
				MEMBER(was_in_buy_zone, server::ccsplayer_pawn, bool);
				MEMBER(in_hostage_rescue_zone, server::ccsplayer_pawn, bool);
				MEMBER(in_bomb_zone, server::ccsplayer_pawn, bool);
				MEMBER(was_in_hostage_rescue_zone, server::ccsplayer_pawn, bool);
				MEMBER(retakes_offering, server::ccsplayer_pawn, int);
				MEMBER(retakes_offering_card, server::ccsplayer_pawn, int);
				MEMBER(retakes_has_defuse_kit, server::ccsplayer_pawn, bool);
				MEMBER(retakes_mvplast_round, server::ccsplayer_pawn, bool);
				MEMBER(retakes_mvpboost_item, server::ccsplayer_pawn, int);
				MEMBER(retakes_mvpboost_extra_utility, server::ccsplayer_pawn, loadout_slot_t);
				MEMBER(health_shot_boost_expiration_time, server::ccsplayer_pawn, game_time_t);
				MEMBER(landseconds, server::ccsplayer_pawn, float);
				MEMBER(aim_punch_angle, server::ccsplayer_pawn, qangle);
				MEMBER(aim_punch_angle_vel, server::ccsplayer_pawn, qangle);
				MEMBER(aim_punch_tick_base, server::ccsplayer_pawn, int);
				MEMBER(aim_punch_tick_fraction, server::ccsplayer_pawn, float);
				MEMBER(aim_punch_cache, server::ccsplayer_pawn, cutl_vector<qangle>);
				MEMBER(is_buy_menu_open, server::ccsplayer_pawn, bool);
				MEMBER(x_last_head_bone_transform, server::ccsplayer_pawn, ctransform);
				MEMBER(last_head_bone_transform_is_valid, server::ccsplayer_pawn, bool);
				MEMBER(last_land_time, server::ccsplayer_pawn, game_time_t);
				MEMBER(on_ground_last_tick, server::ccsplayer_pawn, bool);
				MEMBER(player_locked, server::ccsplayer_pawn, int);
				MEMBER(time_of_last_injury, server::ccsplayer_pawn, game_time_t);
				MEMBER(next_spray_decal_time, server::ccsplayer_pawn, game_time_t);
				MEMBER(next_spray_decal_time_expedited, server::ccsplayer_pawn, bool);
				MEMBER(ragdoll_damage_bone, server::ccsplayer_pawn, int);
				MEMBER(v_ragdoll_damage_force, server::ccsplayer_pawn, vector);
				MEMBER(v_ragdoll_damage_position, server::ccsplayer_pawn, vector);
				MEMBER_ARR(ragdoll_damage_weapon_name_arr, server::ccsplayer_pawn, 64, char);
				MEMBER(ragdoll_damage_headshot, server::ccsplayer_pawn, bool);
				MEMBER(v_ragdoll_server_origin, server::ccsplayer_pawn, vector);
				MEMBER(econ_gloves, server::ccsplayer_pawn, cecon_item_view);
				MEMBER(q_death_eye_angles, server::ccsplayer_pawn, qangle);
				MEMBER(skip_one_head_constraint_update, server::ccsplayer_pawn, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsplayer_pawn : public ccsplayer_pawn_base

			class chostage_expresser_shim : public cbase_combat_character
			{
			public:
				MEMBER(expresser_ptr, server::chostage_expresser_shim, cai_expresser*);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class chostage_expresser_shim : public cbase_combat_character

			class chostage : public chostage_expresser_shim
			{
			public:
				MEMBER(on_hostage_begin_grab, server::chostage, centity_iooutput);
				MEMBER(on_first_picked_up, server::chostage, centity_iooutput);
				MEMBER(on_dropped_not_rescued, server::chostage, centity_iooutput);
				MEMBER(on_rescued, server::chostage, centity_iooutput);
				MEMBER(entity_spotted_state, server::chostage, entity_spotted_state_t);
				MEMBER(spot_rules, server::chostage, int);
				MEMBER(ui_hostage_spawn_exclusion_group_mask, server::chostage, uint32_t);
				MEMBER(hostage_spawn_random_factor, server::chostage, uint32_t);
				MEMBER(remove, server::chostage, bool);
				MEMBER(vel, server::chostage, vector);
				MEMBER(is_rescued, server::chostage, bool);
				MEMBER(jumped_this_frame, server::chostage, bool);
				MEMBER(hostage_state, server::chostage, int);
				MEMBER(leader, server::chostage, chandle<cbase_entity>);
				MEMBER(last_leader, server::chostage, chandle<ccsplayer_pawn_base>);
				MEMBER(reuse_timer, server::chostage, countdown_timer);
				MEMBER(has_been_used, server::chostage, bool);
				MEMBER(accel, server::chostage, vector);
				MEMBER(is_running, server::chostage, bool);
				MEMBER(is_crouching, server::chostage, bool);
				MEMBER(jump_timer, server::chostage, countdown_timer);
				MEMBER(is_waiting_for_leader, server::chostage, bool);
				MEMBER(repath_timer, server::chostage, countdown_timer);
				MEMBER(inhibit_door_timer, server::chostage, countdown_timer);
				MEMBER(inhibit_obstacle_avoidance_timer, server::chostage, countdown_timer);
				MEMBER(wiggle_timer, server::chostage, countdown_timer);
				MEMBER(is_adjusted, server::chostage, bool);
				MEMBER(hands_have_been_cut, server::chostage, bool);
				MEMBER(h_hostage_grabber, server::chostage, chandle<ccsplayer_pawn>);
				MEMBER(last_grab_time, server::chostage, game_time_t);
				MEMBER(vec_position_when_started_dropping_to_ground, server::chostage, vector);
				MEMBER(vec_grabbed_pos, server::chostage, vector);
				MEMBER(rescue_start_time, server::chostage, game_time_t);
				MEMBER(grab_success_time, server::chostage, game_time_t);
				MEMBER(drop_start_time, server::chostage, game_time_t);
				MEMBER(approach_reward_payouts, server::chostage, int);
				MEMBER(pickup_event_count, server::chostage, int);
				MEMBER(vec_spawn_ground_pos, server::chostage, vector);
				MEMBER(vec_hostage_reset_position, server::chostage, vector);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class chostage : public chostage_expresser_shim

			class chostage_alias_info_hostage_spawn : public chostage
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class chostage_alias_info_hostage_spawn : public chostage

			class citem_defuser_alias_item_defuser : public citem_defuser
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class citem_defuser_alias_item_defuser : public citem_defuser

			class cak47 : public ccsweapon_base_gun
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cak47 : public ccsweapon_base_gun

			class cweapon_aug : public ccsweapon_base_gun
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cweapon_aug : public ccsweapon_base_gun

			class cweapon_awp : public ccsweapon_base_gun
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cweapon_awp : public ccsweapon_base_gun

			class cweapon_bizon : public ccsweapon_base_gun
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cweapon_bizon : public ccsweapon_base_gun

			class cweapon_famas : public ccsweapon_base_gun
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cweapon_famas : public ccsweapon_base_gun

			class cweapon_five_seven : public ccsweapon_base_gun
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cweapon_five_seven : public ccsweapon_base_gun

			class cweapon_g3_sg1 : public ccsweapon_base_gun
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cweapon_g3_sg1 : public ccsweapon_base_gun

			class cweapon_galil_ar : public ccsweapon_base_gun
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cweapon_galil_ar : public ccsweapon_base_gun

			class cweapon_glock : public ccsweapon_base_gun
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cweapon_glock : public ccsweapon_base_gun

			class cweapon_hkp2000 : public ccsweapon_base_gun
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cweapon_hkp2000 : public ccsweapon_base_gun

			class cweapon_uspsilencer : public ccsweapon_base_gun
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cweapon_uspsilencer : public ccsweapon_base_gun

			class cweapon_m4_a1 : public ccsweapon_base_gun
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cweapon_m4_a1 : public ccsweapon_base_gun

			class cweapon_m4_a1_silencer : public ccsweapon_base_gun
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cweapon_m4_a1_silencer : public ccsweapon_base_gun

			class cweapon_mac10 : public ccsweapon_base_gun
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cweapon_mac10 : public ccsweapon_base_gun

			class cweapon_mag7 : public ccsweapon_base_gun
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cweapon_mag7 : public ccsweapon_base_gun

			class cweapon_mp5_sd : public ccsweapon_base_gun
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cweapon_mp5_sd : public ccsweapon_base_gun

			class cweapon_mp7 : public ccsweapon_base_gun
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cweapon_mp7 : public ccsweapon_base_gun

			class cweapon_mp9 : public ccsweapon_base_gun
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cweapon_mp9 : public ccsweapon_base_gun

			class cweapon_negev : public ccsweapon_base_gun
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cweapon_negev : public ccsweapon_base_gun

			class cweapon_p250 : public ccsweapon_base_gun
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cweapon_p250 : public ccsweapon_base_gun

			class cweapon_cz75a : public ccsweapon_base_gun
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cweapon_cz75a : public ccsweapon_base_gun

			class cweapon_p90 : public ccsweapon_base_gun
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cweapon_p90 : public ccsweapon_base_gun

			class cweapon_scar20 : public ccsweapon_base_gun
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cweapon_scar20 : public ccsweapon_base_gun

			class cweapon_sg556 : public ccsweapon_base_gun
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cweapon_sg556 : public ccsweapon_base_gun

			class cweapon_ssg08 : public ccsweapon_base_gun
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cweapon_ssg08 : public ccsweapon_base_gun

			class cweapon_tec9 : public ccsweapon_base_gun
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cweapon_tec9 : public ccsweapon_base_gun

			class cweapon_ump45 : public ccsweapon_base_gun
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cweapon_ump45 : public ccsweapon_base_gun

			class cweapon_m249 : public ccsweapon_base_gun
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cweapon_m249 : public ccsweapon_base_gun

			class cweapon_revolver : public ccsweapon_base_gun
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cweapon_revolver : public ccsweapon_base_gun

			class cmolotov_grenade : public cbase_csgrenade
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cmolotov_grenade : public cbase_csgrenade

			class cincendiary_grenade : public cmolotov_grenade
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cincendiary_grenade : public cmolotov_grenade

			class cdecoy_grenade : public cbase_csgrenade
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cdecoy_grenade : public cbase_csgrenade

			class cflashbang : public cbase_csgrenade
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cflashbang : public cbase_csgrenade

			class chegrenade : public cbase_csgrenade
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class chegrenade : public cbase_csgrenade

			class csmoke_grenade : public cbase_csgrenade
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class csmoke_grenade : public cbase_csgrenade

		} // namespace server

	} // namespace schema

} // namespace sdk

#endif // SDK_SCHEMA_SERVER_H
