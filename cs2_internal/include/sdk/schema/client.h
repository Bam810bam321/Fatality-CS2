// generated on: 11/6/2023

#ifndef SDK_SCHEMA_CLIENT_H
#define SDK_SCHEMA_CLIENT_H

#include <cstdint>

namespace sdk
{
	namespace schema
	{
		namespace client
		{
			enum class base_combat_character__water_wake_mode_t : uint32_t
			{
				water_wake_none = 0x0,
				water_wake_idle = 0x1,
				water_wake_walking = 0x2,
				water_wake_running = 0x3,
				water_wake_water_overhead = 0x4,
			}; // enum class base_combat_character__water_wake_mode_t : uint32_t

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
			struct fogparams_t;
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
			class base_entity;
			class ccollision_property;
			class clogical_entity;
			class base_flex__emphasized_phoneme;
			class color_correction;
			class env_wind_clientside;
			class env_wind_shared;
			class entity_flame;
			class cprojected_texture_base;
			class base_fire;
			class fire_smoke;
			class rope_keyframe__cphysics_delegate;
			class rope_keyframe;
			struct scene_entity__queued_events_t;
			class tint_controller;
			class cskybox_reference;
			class sky_camera;
			struct sky3dparams_t;
			struct vphysics_collision_attribute_t;
			class ceffect_data;
			class env_detail_controller;
			struct env_wind_shared__wind_ave_event_t;
			struct env_wind_shared__wind_variation_event_t;
			class info_ladder_dismount;
			struct shard_model_desc_t;
			class game_rules_proxy;
			class cglow_property;
			struct physics_ragdoll_pose_t;
			class sound_opvar_set_point_base;
			class sound_opvar_set_point_entity;
			class sound_opvar_set_aabbentity;
			class sound_opvar_set_obbentity;
			class sound_opvar_set_path_corner_entity;
			class sound_opvar_set_obbwind_entity;
			class team_round_timer;
			class cattribute_list;
			class cattribute_manager;
			class cecon_item_attribute;
			struct cattribute_manager_cached_attribute_float_t;
			class attribute_container;
			class econ_item_view;
			struct econ_entity__attached_model_data_t;
			struct entity_spotted_state_t;
			class csgame_rules_proxy;
			class csgame_rules;
			class ccsgame_mode_rules;
			class retake_game_rules;
			class ccsgame_mode_rules_noop;
			class ccsgame_mode_script;
			class ccsgame_mode_rules_scripted;
			class ccsgame_mode_rules_deathmatch;
			struct csper_round_stats_t;
			struct csmatch_stats_t;
			class csgo_team_preview_character_position;
			class csgo_team_select_character_position;
			class csgo_team_select_terrorist_position;
			class csgo_team_select_counter_terrorist_position;
			class csgo_team_intro_character_position;
			class csgo_team_intro_terrorist_position;
			class csgo_team_intro_counter_terrorist_position;
			class ccsgo_wingman_intro_character_position;
			class ccsgo_wingman_intro_terrorist_position;
			class ccsgo_wingman_intro_counter_terrorist_position;
			class csminimap_boundary;
			class player_ping;
			class ccsplayer_ping_services;
			class csplayer_resource;
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
			class global_light;
			class csgo_map_preview_camera_path_node;
			class csgo_map_preview_camera_path;
			class ccsplayer_glow_services;
			class vote_controller;
			class map_veto_pick_controller;
			class csgo_team_preview_camera;
			class csgo_team_select_camera;
			class csgo_terrorist_team_intro_camera;
			class csgo_terrorist_wingman_intro_camera;
			class csgo_counter_terrorist_team_intro_camera;
			class csgo_counter_terrorist_wingman_intro_camera;
			class csgo_end_of_match_camera;
			class csgo_end_of_match_character_position;
			class csgo_end_of_match_lineup_endpoint;
			class csgo_end_of_match_lineup_start;
			class csgo_end_of_match_lineup_end;
			class csm_fov_override;
			class point_entity;
			class env_combined_light_probe_volume;
			class env_cubemap;
			class env_cubemap_box;
			class env_cubemap_fog;
			class gradient_fog;
			class env_light_probe_volume;
			class player_visibility;
			class tonemap_controller2;
			class env_volumetric_fog_controller;
			class env_volumetric_fog_volume;
			class fog_controller;
			class cinfo_target;
			class cinfo_particle_target;
			class info_visibility_box;
			class cinfo_world_layer;
			class point_camera;
			class point_camera_vfov;
			class cpoint_template;
			class sound_area_entity_base;
			class sound_area_entity_sphere;
			class sound_area_entity_oriented_box;
			class team;
			class cbase_player_controller;
			class cbase_player_vdata;
			class cbase_player_weapon_vdata;
			class base_model_entity;
			class cserver_only_model_entity;
			class model_point_entity;
			class clogic_relay;
			class particle_system;
			class path_particle_rope;
			class path_particle_rope_alias_path_particle_rope_clientside;
			class dynamic_light;
			class env_screen_overlay;
			class func_track_train;
			class light_glow;
			class ragdoll_manager;
			class spotlight_end;
			class point_value_remapper;
			class point_world_text;
			class handle_test;
			class env_wind;
			class base_toggle;
			class base_button;
			class precipitation_blocker;
			class entity_dissolve;
			class env_projected_texture;
			class env_decal;
			class func_brush;
			class func_electrified_volume;
			class func_rotating;
			class breakable;
			class phys_box;
			class scene_entity;
			class sun;
			class base_trigger;
			class trigger_volume;
			class trigger_multiple;
			class trigger_lerp_object;
			class beam;
			class func_ladder;
			class cprecipitation_vdata;
			class sprite;
			class sprite_oriented;
			class base_client_uientity;
			class point_client_uidialog;
			class point_client_uihud;
			class point_client_uiworld_panel;
			class cpoint_off_screen_indicator_ui;
			class point_client_uiworld_text_panel;
			class cinfo_offscreen_panorama_texture;
			class cbomb_target;
			class chostage_rescue_zone_shim;
			class chostage_rescue_zone;
			class trigger_buoyancy;
			class cfunc_water;
			class cwater_splasher;
			class info_instructor_hint_hostage_rescue_zone;
			class ccsplayer_controller;
			class footstep_control;
			class ccsweapon_base_vdata;
			class player_spray_decal;
			class func_conveyor;
			class cgrenade_tracer;
			class inferno;
			class fire_cracker_blast;
			class barn_light;
			class rect_light;
			class omni_light;
			class csteam;
			class map_preview_particle_system;
			class cinfo_dynamic_shadow_hint;
			class cinfo_dynamic_shadow_hint_box;
			class env_sky;
			class tonemap_controller2_alias_env_tonemap_controller2;
			class light_entity;
			class light_spot_entity;
			class light_ortho_entity;
			class light_directional_entity;
			class light_environment_entity;
			class post_processing_volume;
			class env_particle_glow;
			class texture_based_animatable;
			class world;
			class cbase_anim_graph;
			class cbase_prop;
			class breakable_prop;
			class dynamic_prop;
			class dynamic_prop_alias_dynamic_prop;
			class dynamic_prop_alias_prop_dynamic_override;
			class dynamic_prop_alias_cable_dynamic;
			class color_correction_volume;
			class func_monitor;
			class func_move_linear;
			class phys_magnet;
			class point_commentary_node;
			class water_bullet;
			class base_door;
			class base_flex;
			class client_ragdoll;
			class precipitation;
			class fire_sprite;
			class fire_from_above_sprite;
			class fish;
			class physics_prop;
			class base_prop_door;
			class phys_prop_clientside;
			class ragdoll_prop;
			class local_temp_entity;
			class shatter_glass_shard_physics;
			class econ_entity;
			class econ_wearable;
			class base_grenade;
			class physics_prop_multiplayer;
			class viewmodel_weapon;
			class base_view_model;
			class viewmodel_attachment_model;
			class predicted_view_model;
			class world_model_stattrak;
			class world_model_nametag;
			class base_csgrenade_projectile;
			class sensor_grenade_projectile;
			class cbreach_charge_projectile;
			class cbump_mine_projectile;
			class ctrip_wire_fire_projectile;
			class csgo_preview_model;
			class csgo_preview_model_alias_csgo_item_previewmodel;
			class bullet_hit_model;
			class pick_up_model_slerper;
			class world_model_gloves;
			class hostage_carriable_prop;
			class multimeter;
			class planted_c4;
			class item;
			class hegrenade_projectile;
			class flashbang_projectile;
			class chicken;
			class base_player_weapon;
			class ragdoll_prop_attached;
			class base_combat_character;
			class base_player_pawn;
			class csgoview_model;
			class csweapon_base;
			class csweapon_base_gun;
			class c4;
			class deagle;
			class weapon_elite;
			class weapon_nova;
			class weapon_sawedoff;
			class weapon_taser;
			class weapon_xm1014;
			class knife;
			class melee;
			class weapon_shield;
			class molotov_projectile;
			class decoy_projectile;
			class smoke_grenade_projectile;
			class base_csgrenade;
			class weapon_base_item;
			class item_dogtags;
			class item_healthshot;
			class fists;
			class sensor_grenade;
			class cbreach_charge;
			class cbump_mine;
			class ctablet;
			class ctrip_wire_fire;
			class cweapon_zone_repulsor;
			class csplayer_pawn_base;
			class csobserver_pawn;
			class csplayer_pawn;
			class hostage;
			class net_test_base_combat_character;
			class ak47;
			class weapon_aug;
			class weapon_awp;
			class weapon_bizon;
			class weapon_famas;
			class weapon_five_seven;
			class weapon_g3_sg1;
			class weapon_galil_ar;
			class weapon_glock;
			class weapon_hkp2000;
			class weapon_uspsilencer;
			class weapon_m4_a1;
			class weapon_m4_a1_silencer;
			class weapon_mac10;
			class weapon_mag7;
			class weapon_mp5_sd;
			class weapon_mp7;
			class weapon_mp9;
			class weapon_negev;
			class weapon_p250;
			class weapon_cz75a;
			class weapon_p90;
			class weapon_scar20;
			class weapon_sg556;
			class weapon_ssg08;
			class weapon_tec9;
			class weapon_ump45;
			class weapon_m249;
			class weapon_revolver;
			class molotov_grenade;
			class incendiary_grenade;
			class decoy_grenade;
			class flashbang;
			class hegrenade;
			class smoke_grenade;
			class csgo_preview_player;
			class csgo_preview_player_alias_csgo_player_previewmodel;
			class csgo_team_preview_model;
			
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
				MEMBER(name_stringable_index, client::centity_identity, int);
				MEMBER(name, client::centity_identity, cutl_symbol_large);
				MEMBER(designer_name, client::centity_identity, cutl_symbol_large);
				MEMBER(flags, client::centity_identity, uint32_t);
				MEMBER(world_group_id, client::centity_identity, world_group_id_t);
				MEMBER(data_object_types, client::centity_identity, uint32_t);
				MEMBER(path_index, client::centity_identity, change_accessor_field_path_index_t);
				MEMBER(prev_ptr, client::centity_identity, centity_identity*);
				MEMBER(next_ptr, client::centity_identity, centity_identity*);
				MEMBER(prev_by_class_ptr, client::centity_identity, centity_identity*);
				MEMBER(next_by_class_ptr, client::centity_identity, centity_identity*);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class centity_identity

			class centity_instance
			{
			public:
				MEMBER(isz_private_vscripts, client::centity_instance, cutl_symbol_large);
				MEMBER(entity_ptr, client::centity_instance, centity_identity*);
				MEMBER(cscript_component_ptr, client::centity_instance, cscript_component*);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class centity_instance

			class cscript_component : public centity_component
			{
			public:
				MEMBER(script_class_name, client::cscript_component, cutl_symbol_large);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cscript_component : public centity_component

			class cbody_component : public centity_component
			{
			public:
				MEMBER(scene_node_ptr, client::cbody_component, cgame_scene_node*);
				MEMBER(_m_p_chain_entity, client::cbody_component, cnetwork_var_chainer);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbody_component : public centity_component

			class cgame_scene_node_handle
			{
			public:
				MEMBER(h_owner, client::cgame_scene_node_handle, centity_handle);
				MEMBER(name, client::cgame_scene_node_handle, cutl_string_token);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cgame_scene_node_handle

			class cgame_scene_node
			{
			public:
				MEMBER(node_to_world, client::cgame_scene_node, ctransform);
				MEMBER(owner_ptr, client::cgame_scene_node, centity_instance*);
				MEMBER(parent_ptr, client::cgame_scene_node, cgame_scene_node*);
				MEMBER(child_ptr, client::cgame_scene_node, cgame_scene_node*);
				MEMBER(next_sibling_ptr, client::cgame_scene_node, cgame_scene_node*);
				MEMBER(h_parent, client::cgame_scene_node, cgame_scene_node_handle);
				MEMBER(vec_origin, client::cgame_scene_node, cnetwork_origin_cell_coord_quantized_vector);
				MEMBER(ang_rotation, client::cgame_scene_node, qangle);
				MEMBER(scale, client::cgame_scene_node, float);
				MEMBER(vec_abs_origin, client::cgame_scene_node, vector);
				MEMBER(ang_abs_rotation, client::cgame_scene_node, qangle);
				MEMBER(abs_scale, client::cgame_scene_node, float);
				MEMBER(parent_attachment_or_bone, client::cgame_scene_node, short);
				MEMBER(debug_abs_origin_changes, client::cgame_scene_node, bool);
				MEMBER(dormant, client::cgame_scene_node, bool);
				MEMBER(force_parent_to_be_networked, client::cgame_scene_node, bool);
				MEMBER(dirty_hierarchy, client::cgame_scene_node, bool);
				MEMBER(dirty_bone_merge_info, client::cgame_scene_node, bool);
				MEMBER(networked_position_changed, client::cgame_scene_node, bool);
				MEMBER(networked_angles_changed, client::cgame_scene_node, bool);
				MEMBER(networked_scale_changed, client::cgame_scene_node, bool);
				MEMBER(will_be_calling_post_data_update, client::cgame_scene_node, bool);
				MEMBER(notify_bone_transforms_changed, client::cgame_scene_node, bool);
				MEMBER(bone_merge_flex, client::cgame_scene_node, bool);
				MEMBER(latch_abs_origin, client::cgame_scene_node, uint8_t);
				MEMBER(dirty_bone_merge_bone_to_root, client::cgame_scene_node, bool);
				MEMBER(hierarchical_depth, client::cgame_scene_node, uint8_t);
				MEMBER(hierarchy_type, client::cgame_scene_node, uint8_t);
				MEMBER(do_not_set_anim_time_in_invalidate_physics_count, client::cgame_scene_node, uint8_t);
				MEMBER(name, client::cgame_scene_node, cutl_string_token);
				MEMBER(hierarchy_attach_name, client::cgame_scene_node, cutl_string_token);
				MEMBER(zoffset, client::cgame_scene_node, float);
				MEMBER(v_render_origin, client::cgame_scene_node, vector);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cgame_scene_node

			class chitbox_component : public centity_component
			{
			public:
				MEMBER_ARR(bv_disabled_hit_groups_arr, client::chitbox_component, 1, uint32_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class chitbox_component : public centity_component

			class clight_component : public centity_component
			{
			public:
				MEMBER(_m_p_chain_entity, client::clight_component, cnetwork_var_chainer);
				MEMBER(color, client::clight_component, color);
				MEMBER(secondary_color, client::clight_component, color);
				MEMBER(brightness, client::clight_component, float);
				MEMBER(brightness_scale, client::clight_component, float);
				MEMBER(brightness_mult, client::clight_component, float);
				MEMBER(range, client::clight_component, float);
				MEMBER(falloff, client::clight_component, float);
				MEMBER(attenuation0, client::clight_component, float);
				MEMBER(attenuation1, client::clight_component, float);
				MEMBER(attenuation2, client::clight_component, float);
				MEMBER(theta, client::clight_component, float);
				MEMBER(phi, client::clight_component, float);
				MEMBER(h_light_cookie, client::clight_component, cstrong_handle<info_for_resource_type_ctexture_base>);
				MEMBER(cascades, client::clight_component, int);
				MEMBER(cast_shadows, client::clight_component, int);
				MEMBER(shadow_width, client::clight_component, int);
				MEMBER(shadow_height, client::clight_component, int);
				MEMBER(render_diffuse, client::clight_component, bool);
				MEMBER(render_specular, client::clight_component, int);
				MEMBER(render_transmissive, client::clight_component, bool);
				MEMBER(ortho_light_width, client::clight_component, float);
				MEMBER(ortho_light_height, client::clight_component, float);
				MEMBER(style, client::clight_component, int);
				MEMBER(pattern, client::clight_component, cutl_string);
				MEMBER(cascade_render_static_objects, client::clight_component, int);
				MEMBER(shadow_cascade_cross_fade, client::clight_component, float);
				MEMBER(shadow_cascade_distance_fade, client::clight_component, float);
				MEMBER(shadow_cascade_distance0, client::clight_component, float);
				MEMBER(shadow_cascade_distance1, client::clight_component, float);
				MEMBER(shadow_cascade_distance2, client::clight_component, float);
				MEMBER(shadow_cascade_distance3, client::clight_component, float);
				MEMBER(shadow_cascade_resolution0, client::clight_component, int);
				MEMBER(shadow_cascade_resolution1, client::clight_component, int);
				MEMBER(shadow_cascade_resolution2, client::clight_component, int);
				MEMBER(shadow_cascade_resolution3, client::clight_component, int);
				MEMBER(uses_baked_shadowing, client::clight_component, bool);
				MEMBER(shadow_priority, client::clight_component, int);
				MEMBER(baked_shadow_index, client::clight_component, int);
				MEMBER(render_to_cubemaps, client::clight_component, bool);
				MEMBER(direct_light, client::clight_component, int);
				MEMBER(indirect_light, client::clight_component, int);
				MEMBER(fade_min_dist, client::clight_component, float);
				MEMBER(fade_max_dist, client::clight_component, float);
				MEMBER(shadow_fade_min_dist, client::clight_component, float);
				MEMBER(shadow_fade_max_dist, client::clight_component, float);
				MEMBER(enabled, client::clight_component, bool);
				MEMBER(flicker, client::clight_component, bool);
				MEMBER(precomputed_fields_valid, client::clight_component, bool);
				MEMBER(v_precomputed_bounds_mins, client::clight_component, vector);
				MEMBER(v_precomputed_bounds_maxs, client::clight_component, vector);
				MEMBER(v_precomputed_obborigin, client::clight_component, vector);
				MEMBER(v_precomputed_obbangles, client::clight_component, qangle);
				MEMBER(v_precomputed_obbextent, client::clight_component, vector);
				MEMBER(precomputed_max_range, client::clight_component, float);
				MEMBER(fog_lighting_mode, client::clight_component, int);
				MEMBER(fog_contribution_stength, client::clight_component, float);
				MEMBER(near_clip_plane, client::clight_component, float);
				MEMBER(sky_color, client::clight_component, color);
				MEMBER(sky_intensity, client::clight_component, float);
				MEMBER(sky_ambient_bounce, client::clight_component, color);
				MEMBER(use_secondary_color, client::clight_component, bool);
				MEMBER(mixed_shadows, client::clight_component, bool);
				MEMBER(light_style_start_time, client::clight_component, game_time_t);
				MEMBER(capsule_length, client::clight_component, float);
				MEMBER(min_roughness, client::clight_component, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class clight_component : public centity_component

			class crender_component : public centity_component
			{
			public:
				MEMBER(_m_p_chain_entity, client::crender_component, cnetwork_var_chainer);
				MEMBER(is_rendering_with_view_models, client::crender_component, bool);
				MEMBER(splitscreen_flags, client::crender_component, uint32_t);
				MEMBER(enable_rendering, client::crender_component, bool);
				MEMBER(interpolation_ready_to_draw, client::crender_component, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class crender_component : public centity_component

			class cbuoyancy_helper
			{
			public:
				MEMBER(fluid_density, client::cbuoyancy_helper, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbuoyancy_helper

			struct view_angle_server_change_t
			{
				MEMBER(n_type, client::view_angle_server_change_t, fix_angle_set_t);
				MEMBER(q_angle, client::view_angle_server_change_t, qangle);
				MEMBER(n_index, client::view_angle_server_change_t, uint32_t);
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
				MEMBER_ARR(local_sound_arr, client::audioparams_t, 8, vector);
				MEMBER(soundscape_index, client::audioparams_t, int);
				MEMBER(local_bits, client::audioparams_t, uint8_t);
				MEMBER(soundscape_entity_list_index, client::audioparams_t, int);
				MEMBER(sound_event_hash, client::audioparams_t, uint32_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // struct audioparams_t

			struct fogparams_t
			{
				MEMBER(dir_primary, client::fogparams_t, vector);
				MEMBER(color_primary, client::fogparams_t, color);
				MEMBER(color_secondary, client::fogparams_t, color);
				MEMBER(color_primary_lerp_to, client::fogparams_t, color);
				MEMBER(color_secondary_lerp_to, client::fogparams_t, color);
				MEMBER(start, client::fogparams_t, float);
				MEMBER(end, client::fogparams_t, float);
				MEMBER(farz, client::fogparams_t, float);
				MEMBER(maxdensity, client::fogparams_t, float);
				MEMBER(exponent, client::fogparams_t, float);
				MEMBER(hdrcolor_scale, client::fogparams_t, float);
				MEMBER(skybox_fog_factor, client::fogparams_t, float);
				MEMBER(skybox_fog_factor_lerp_to, client::fogparams_t, float);
				MEMBER(start_lerp_to, client::fogparams_t, float);
				MEMBER(end_lerp_to, client::fogparams_t, float);
				MEMBER(maxdensity_lerp_to, client::fogparams_t, float);
				MEMBER(lerptime, client::fogparams_t, game_time_t);
				MEMBER(duration, client::fogparams_t, float);
				MEMBER(blendtobackground, client::fogparams_t, float);
				MEMBER(scattering, client::fogparams_t, float);
				MEMBER(locallightscale, client::fogparams_t, float);
				MEMBER(enable, client::fogparams_t, bool);
				MEMBER(blend, client::fogparams_t, bool);
				MEMBER(no_reflection_fog, client::fogparams_t, bool);
				MEMBER(padding, client::fogparams_t, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // struct fogparams_t

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
				MEMBER(impulse, client::cplayer_movement_services, int);
				MEMBER(buttons, client::cplayer_movement_services, cin_button_state);
				MEMBER(queued_button_down_mask, client::cplayer_movement_services, uint64_t);
				MEMBER(queued_button_change_mask, client::cplayer_movement_services, uint64_t);
				MEMBER(button_double_pressed, client::cplayer_movement_services, uint64_t);
				MEMBER_ARR(button_pressed_cmd_number_arr, client::cplayer_movement_services, 64, uint32_t);
				MEMBER(last_command_number_processed, client::cplayer_movement_services, uint32_t);
				MEMBER(toggle_button_down_mask, client::cplayer_movement_services, uint64_t);
				MEMBER(maxspeed, client::cplayer_movement_services, float);
				MEMBER_ARR(arr_force_subtick_move_when_arr, client::cplayer_movement_services, 4, float);
				MEMBER(forward_move, client::cplayer_movement_services, float);
				MEMBER(left_move, client::cplayer_movement_services, float);
				MEMBER(up_move, client::cplayer_movement_services, float);
				MEMBER(vec_last_movement_impulses, client::cplayer_movement_services, vector);
				MEMBER(vec_old_view_angles, client::cplayer_movement_services, qangle);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cplayer_movement_services : public cplayer_pawn_component

			class cplayer_movement_services_humanoid : public cplayer_movement_services
			{
			public:
				MEMBER(step_sound_time, client::cplayer_movement_services_humanoid, float);
				MEMBER(fall_velocity, client::cplayer_movement_services_humanoid, float);
				MEMBER(in_crouch, client::cplayer_movement_services_humanoid, bool);
				MEMBER(crouch_state, client::cplayer_movement_services_humanoid, uint32_t);
				MEMBER(crouch_transition_start_time, client::cplayer_movement_services_humanoid, game_time_t);
				MEMBER(ducked, client::cplayer_movement_services_humanoid, bool);
				MEMBER(ducking, client::cplayer_movement_services_humanoid, bool);
				MEMBER(in_duck_jump, client::cplayer_movement_services_humanoid, bool);
				MEMBER(ground_normal, client::cplayer_movement_services_humanoid, vector);
				MEMBER(surface_friction, client::cplayer_movement_services_humanoid, float);
				MEMBER(surface_props, client::cplayer_movement_services_humanoid, cutl_string_token);
				MEMBER(stepside, client::cplayer_movement_services_humanoid, int);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cplayer_movement_services_humanoid : public cplayer_movement_services

			class cplayer_observer_services : public cplayer_pawn_component
			{
			public:
				MEMBER(observer_mode, client::cplayer_observer_services, uint8_t);
				MEMBER(h_observer_target, client::cplayer_observer_services, chandle<base_entity>);
				MEMBER(observer_last_mode, client::cplayer_observer_services, observer_mode_t);
				MEMBER(forced_observer_mode, client::cplayer_observer_services, bool);
				MEMBER(observer_chase_distance, client::cplayer_observer_services, float);
				MEMBER(observer_chase_distance_calc_time, client::cplayer_observer_services, game_time_t);
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
				MEMBER(allow_switch_to_no_weapon, client::cplayer_weapon_services, bool);
				MEMBER(h_my_weapons, client::cplayer_weapon_services, network_utl_vector_base<chandle<base_player_weapon>>);
				MEMBER(h_active_weapon, client::cplayer_weapon_services, chandle<base_player_weapon>);
				MEMBER(h_last_weapon, client::cplayer_weapon_services, chandle<base_player_weapon>);
				MEMBER_ARR(ammo_arr, client::cplayer_weapon_services, 32, uint16_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cplayer_weapon_services : public cplayer_pawn_component

			class cmodel_state
			{
			public:
				MEMBER(h_model, client::cmodel_state, cstrong_handle<info_for_resource_type_cmodel>);
				MEMBER(model_name, client::cmodel_state, cutl_symbol_large);
				MEMBER(client_cloth_creation_suppressed, client::cmodel_state, bool);
				MEMBER(mesh_group_mask, client::cmodel_state, uint64_t);
				MEMBER(ideal_motion_type, client::cmodel_state, char);
				MEMBER(force_lod, client::cmodel_state, char);
				MEMBER(cloth_update_flags, client::cmodel_state, char);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cmodel_state

			struct entity_render_attribute_t
			{
				MEMBER(id, client::entity_render_attribute_t, cutl_string_token);
				MEMBER(values, client::entity_render_attribute_t, vector4d);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // struct entity_render_attribute_t

			struct active_model_config_t
			{
				MEMBER(handle, client::active_model_config_t, model_config_handle_t);
				MEMBER(name, client::active_model_config_t, cutl_symbol_large);
				MEMBER(associated_entities, client::active_model_config_t, network_utl_vector_base<chandle<base_model_entity>>);
				MEMBER(associated_entity_names, client::active_model_config_t, network_utl_vector_base<cutl_symbol_large>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // struct active_model_config_t

			class cskeleton_instance : public cgame_scene_node
			{
			public:
				MEMBER(model_state, client::cskeleton_instance, cmodel_state);
				MEMBER(is_animation_enabled, client::cskeleton_instance, bool);
				MEMBER(use_parent_render_bounds, client::cskeleton_instance, bool);
				MEMBER(disable_solid_collisions_for_hierarchy, client::cskeleton_instance, bool);
				MEMBER(dirty_motion_type, client::cskeleton_instance, bool);
				MEMBER(is_generating_latched_parent_space_state, client::cskeleton_instance, bool);
				MEMBER(material_group, client::cskeleton_instance, cutl_string_token);
				MEMBER(hitbox_set, client::cskeleton_instance, uint8_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cskeleton_instance : public cgame_scene_node

			class cbody_component_skeleton_instance : public cbody_component
			{
			public:
				MEMBER(skeleton_instance, client::cbody_component_skeleton_instance, cskeleton_instance);
				MEMBER(_m_p_chain_entity, client::cbody_component_skeleton_instance, cnetwork_var_chainer);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbody_component_skeleton_instance : public cbody_component

			class cbody_component_point : public cbody_component
			{
			public:
				MEMBER(scene_node, client::cbody_component_point, cgame_scene_node);
				MEMBER(_m_p_chain_entity, client::cbody_component_point, cnetwork_var_chainer);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbody_component_point : public cbody_component

			class cnetworked_sequence_operation
			{
			public:
				MEMBER(h_sequence, client::cnetworked_sequence_operation, hsequence);
				MEMBER(prev_cycle, client::cnetworked_sequence_operation, float);
				MEMBER(cycle, client::cnetworked_sequence_operation, float);
				MEMBER(weight, client::cnetworked_sequence_operation, cnetworked_quantized_float);
				MEMBER(sequence_change_networked, client::cnetworked_sequence_operation, bool);
				MEMBER(discontinuity, client::cnetworked_sequence_operation, bool);
				MEMBER(prev_cycle_from_discontinuity, client::cnetworked_sequence_operation, float);
				MEMBER(prev_cycle_for_anim_event_detection, client::cnetworked_sequence_operation, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cnetworked_sequence_operation

			class cbody_component_base_model_entity : public cbody_component_skeleton_instance
			{
			public:
				MEMBER(_m_p_chain_entity, client::cbody_component_base_model_entity, cnetwork_var_chainer);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbody_component_base_model_entity : public cbody_component_skeleton_instance

			class canim_graph_networked_variables
			{
			public:
				MEMBER(pred_net_bool_variables, client::canim_graph_networked_variables, network_utl_vector_base<uint32_t>);
				MEMBER(pred_net_byte_variables, client::canim_graph_networked_variables, network_utl_vector_base<uint8_t>);
				MEMBER(pred_net_uint16_variables, client::canim_graph_networked_variables, network_utl_vector_base<uint16_t>);
				MEMBER(pred_net_int_variables, client::canim_graph_networked_variables, network_utl_vector_base<int>);
				MEMBER(pred_net_uint32_variables, client::canim_graph_networked_variables, network_utl_vector_base<uint32_t>);
				MEMBER(pred_net_uint64_variables, client::canim_graph_networked_variables, network_utl_vector_base<uint64_t>);
				MEMBER(pred_net_float_variables, client::canim_graph_networked_variables, network_utl_vector_base<float>);
				MEMBER(pred_net_vector_variables, client::canim_graph_networked_variables, network_utl_vector_base<vector>);
				MEMBER(pred_net_quaternion_variables, client::canim_graph_networked_variables, network_utl_vector_base<quaternion>);
				MEMBER(owner_only_pred_net_bool_variables, client::canim_graph_networked_variables, network_utl_vector_base<uint32_t>);
				MEMBER(owner_only_pred_net_byte_variables, client::canim_graph_networked_variables, network_utl_vector_base<uint8_t>);
				MEMBER(owner_only_pred_net_uint16_variables, client::canim_graph_networked_variables, network_utl_vector_base<uint16_t>);
				MEMBER(owner_only_pred_net_int_variables, client::canim_graph_networked_variables, network_utl_vector_base<int>);
				MEMBER(owner_only_pred_net_uint32_variables, client::canim_graph_networked_variables, network_utl_vector_base<uint32_t>);
				MEMBER(owner_only_pred_net_uint64_variables, client::canim_graph_networked_variables, network_utl_vector_base<uint64_t>);
				MEMBER(owner_only_pred_net_float_variables, client::canim_graph_networked_variables, network_utl_vector_base<float>);
				MEMBER(owner_only_pred_net_vector_variables, client::canim_graph_networked_variables, network_utl_vector_base<vector>);
				MEMBER(owner_only_pred_net_quaternion_variables, client::canim_graph_networked_variables, network_utl_vector_base<quaternion>);
				MEMBER(bool_variables_count, client::canim_graph_networked_variables, int);
				MEMBER(owner_only_bool_variables_count, client::canim_graph_networked_variables, int);
				MEMBER(random_seed_offset, client::canim_graph_networked_variables, int);
				MEMBER(last_teleport_time, client::canim_graph_networked_variables, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class canim_graph_networked_variables

			class interval_timer
			{
			public:
				MEMBER(timestamp, client::interval_timer, game_time_t);
				MEMBER(world_group_id, client::interval_timer, world_group_id_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class interval_timer

			class countdown_timer
			{
			public:
				MEMBER(duration, client::countdown_timer, float);
				MEMBER(timestamp, client::countdown_timer, game_time_t);
				MEMBER(timescale, client::countdown_timer, float);
				MEMBER(world_group_id, client::countdown_timer, world_group_id_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class countdown_timer

			class engine_countdown_timer
			{
			public:
				MEMBER(duration, client::engine_countdown_timer, float);
				MEMBER(timestamp, client::engine_countdown_timer, float);
				MEMBER(timescale, client::engine_countdown_timer, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class engine_countdown_timer

			class ctimeline : public interval_timer
			{
			public:
				MEMBER_ARR(values_arr, client::ctimeline, 64, float);
				MEMBER_ARR(value_counts_arr, client::ctimeline, 64, int);
				MEMBER(bucket_count, client::ctimeline, int);
				MEMBER(interval, client::ctimeline, float);
				MEMBER(final_value, client::ctimeline, float);
				MEMBER(compression_type, client::ctimeline, timeline_compression_t);
				MEMBER(stopped, client::ctimeline, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ctimeline : public interval_timer

			class cbase_anim_graph_controller : public cskeleton_animation_controller
			{
			public:
				MEMBER(base_layer, client::cbase_anim_graph_controller, cnetworked_sequence_operation);
				MEMBER(anim_graph_networked_vars, client::cbase_anim_graph_controller, canim_graph_networked_variables);
				MEMBER(sequence_finished, client::cbase_anim_graph_controller, bool);
				MEMBER(last_event_cycle, client::cbase_anim_graph_controller, float);
				MEMBER(last_event_anim_time, client::cbase_anim_graph_controller, float);
				MEMBER(playback_rate, client::cbase_anim_graph_controller, cnetworked_quantized_float);
				MEMBER(prev_anim_time, client::cbase_anim_graph_controller, float);
				MEMBER(client_side_animation, client::cbase_anim_graph_controller, bool);
				MEMBER(networked_animation_inputs_changed, client::cbase_anim_graph_controller, bool);
				MEMBER(prev_new_sequence_parity, client::cbase_anim_graph_controller, uint8_t);
				MEMBER(prev_reset_events_parity, client::cbase_anim_graph_controller, uint8_t);
				MEMBER(new_sequence_parity, client::cbase_anim_graph_controller, int);
				MEMBER(reset_events_parity, client::cbase_anim_graph_controller, int);
				MEMBER(anim_loop_mode, client::cbase_anim_graph_controller, anim_loop_mode_t);
				MEMBER(h_animation_update, client::cbase_anim_graph_controller, animation_update_list_handle_t);
				MEMBER(h_last_anim_event_sequence, client::cbase_anim_graph_controller, hsequence);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbase_anim_graph_controller : public cskeleton_animation_controller

			class base_entity : public centity_instance
			{
			public:
				MEMBER(m_CBodyComponent, client::base_entity, cbody_component*);
				MEMBER(m_NetworkTransmitComponent, client::base_entity, cnetwork_transmit_component);
				MEMBER(m_nLastThinkTick, client::base_entity, game_tick_t);
				MEMBER(m_pGameSceneNode, client::base_entity, cgame_scene_node*);
				MEMBER(m_pRenderComponent, client::base_entity, crender_component*);
				MEMBER(m_pCollision, client::base_entity, ccollision_property*);
				MEMBER(m_iMaxHealth, client::base_entity, int);
				MEMBER(m_iHealth, client::base_entity, int);
				MEMBER(m_lifeState, client::base_entity, uint8_t);
				MEMBER(m_bTakesDamage, client::base_entity, bool);
				MEMBER(m_nTakeDamageFlags, client::base_entity, take_damage_flags_t);
				MEMBER(m_ubInterpolationFrame, client::base_entity, uint8_t);
				MEMBER(m_hSceneObjectController, client::base_entity, chandle<base_entity>);
				MEMBER(m_nNoInterpolationTick, client::base_entity, int);
				MEMBER(m_nVisibilityNoInterpolationTick, client::base_entity, int);
				MEMBER(m_flProxyRandomValue, client::base_entity, float);
				MEMBER(m_iEFlags, client::base_entity, int);
				MEMBER(m_nWaterType, client::base_entity, uint8_t);
				MEMBER(m_bInterpolateEvenWithNoModel, client::base_entity, bool);
				MEMBER(m_bPredictionEligible, client::base_entity, bool);
				MEMBER(m_bApplyLayerMatchIDToModel, client::base_entity, bool);
				MEMBER(m_tokLayerMatchID, client::base_entity, cutl_string_token);
				MEMBER(m_nSubclassID, client::base_entity, cutl_string_token);
				MEMBER(m_nSimulationTick, client::base_entity, int);
				MEMBER(m_iCurrentThinkContext, client::base_entity, int);
				MEMBER(m_aThinkFunctions, client::base_entity, cutl_vector<thinkfunc_t>);
				MEMBER(m_flAnimTime, client::base_entity, float);
				MEMBER(m_flSimulationTime, client::base_entity, float);
				MEMBER(m_nSceneObjectOverrideFlags, client::base_entity, uint8_t);
				MEMBER(m_bHasSuccessfullyInterpolated, client::base_entity, bool);
				MEMBER(m_bHasAddedVarsToInterpolation, client::base_entity, bool);
				MEMBER(m_bRenderEvenWhenNotSuccessfullyInterpolated, client::base_entity, bool);
				MEMBER_ARR(m_nInterpolationLatchDirtyFlags, client::base_entity, 2, int);
				MEMBER_ARR(m_ListEntry, client::base_entity, 11, uint16_t);
				MEMBER(m_flCreateTime, client::base_entity, game_time_t);
				MEMBER(m_flSpeed, client::base_entity, float);
				MEMBER(m_EntClientFlags, client::base_entity, uint16_t);
				MEMBER(m_bClientSideRagdoll, client::base_entity, bool);
				MEMBER(m_iTeamNum, client::base_entity, uint8_t);
				MEMBER(m_spawnflags, client::base_entity, uint32_t);
				MEMBER(m_nNextThinkTick, client::base_entity, game_tick_t);
				MEMBER(m_fFlags, client::base_entity, uint32_t);
				MEMBER(m_vecAbsVelocity, client::base_entity, vector);
				MEMBER(m_vecVelocity, client::base_entity, cnetwork_velocity_vector);
				MEMBER(m_vecBaseVelocity, client::base_entity, vector);
				MEMBER(m_hEffectEntity, client::base_entity, chandle<base_entity>);
				MEMBER(m_hOwnerEntity, client::base_entity, chandle<base_entity>);
				MEMBER(m_MoveCollide, client::base_entity, move_collide_t);
				MEMBER(m_MoveType, client::base_entity, move_type_t);
				MEMBER(m_flWaterLevel, client::base_entity, float);
				MEMBER(m_fEffects, client::base_entity, uint32_t);
				MEMBER(m_hGroundEntity, client::base_entity, chandle<base_entity>);
				MEMBER(m_flFriction, client::base_entity, float);
				MEMBER(m_flElasticity, client::base_entity, float);
				MEMBER(m_flGravityScale, client::base_entity, float);
				MEMBER(m_flTimeScale, client::base_entity, float);
				//MEMBER(simulated_every_tick, client::base_entity, bool);
				MEMBER(m_bAnimatedEveryTick, client::base_entity, bool);
				MEMBER(m_flNavIgnoreUntilTime, client::base_entity, game_time_t);
				MEMBER(m_hThink, client::base_entity, uint16_t);
				MEMBER(m_fBBoxVisFlags, client::base_entity, uint8_t);
				MEMBER(m_bPredictable, client::base_entity, bool);
				MEMBER(m_bRenderWithViewModels, client::base_entity, bool);
				MEMBER(m_nSplitUserPlayerPredictionSlot, client::base_entity, csplit_screen_slot);
				MEMBER(m_nFirstPredictableCommand, client::base_entity, int);
				MEMBER(m_nLastPredictableCommand, client::base_entity, int);
				MEMBER(m_hOldMoveParent, client::base_entity, chandle<base_entity>);
				MEMBER(m_Particles, client::base_entity, cparticle_property);
				MEMBER(m_vecPredictedScriptFloats, client::base_entity, cutl_vector<float>);
				MEMBER(m_vecPredictedScriptFloatIDs, client::base_entity, cutl_vector<int>);
				MEMBER(m_nNextScriptVarRecordID, client::base_entity, int);
				MEMBER(m_vecAngVelocity, client::base_entity, qangle);
				MEMBER(m_DataChangeEventRef, client::base_entity, int);
				MEMBER(m_dependencies, client::base_entity, cutl_vector<centity_handle>);
				MEMBER(m_nCreationTick, client::base_entity, int);
				MEMBER(m_bAnimTimeChanged, client::base_entity, bool);
				MEMBER(m_bSimulationTimeChanged, client::base_entity, bool);
				MEMBER(m_sUniqueHammerID, client::base_entity, cutl_string);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class base_entity : public centity_instance

			class clogical_entity : public base_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class clogical_entity : public base_entity

			class base_flex__emphasized_phoneme
			{
			public:
				MEMBER(s_class_name, client::base_flex__emphasized_phoneme, cutl_string);
				MEMBER(amount, client::base_flex__emphasized_phoneme, float);
				MEMBER(required, client::base_flex__emphasized_phoneme, bool);
				MEMBER(basechecked, client::base_flex__emphasized_phoneme, bool);
				MEMBER(valid, client::base_flex__emphasized_phoneme, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class base_flex__emphasized_phoneme

			class color_correction : public base_entity
			{
			public:
				MEMBER(vec_origin, client::color_correction, vector);
				MEMBER(min_falloff, client::color_correction, float);
				MEMBER(max_falloff, client::color_correction, float);
				MEMBER(fade_in_duration, client::color_correction, float);
				MEMBER(fade_out_duration, client::color_correction, float);
				MEMBER(max_weight, client::color_correction, float);
				MEMBER(cur_weight, client::color_correction, float);
				MEMBER_ARR(netlookup_filename_arr, client::color_correction, 512, char);
				MEMBER(enabled, client::color_correction, bool);
				MEMBER(master, client::color_correction, bool);
				MEMBER(client_side, client::color_correction, bool);
				MEMBER(exclusive, client::color_correction, bool);
				MEMBER_ARR(enabled_on_client_arr, client::color_correction, 1, bool);
				MEMBER_ARR(cur_weight_on_client_arr, client::color_correction, 1, float);
				MEMBER_ARR(fading_in_arr, client::color_correction, 1, bool);
				MEMBER_ARR(fade_start_weight_arr, client::color_correction, 1, float);
				MEMBER_ARR(fade_start_time_arr, client::color_correction, 1, float);
				MEMBER_ARR(fade_duration_arr, client::color_correction, 1, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class color_correction : public base_entity

			class env_wind_shared
			{
			public:
				MEMBER(start_time, client::env_wind_shared, game_time_t);
				MEMBER(wind_seed, client::env_wind_shared, uint32_t);
				MEMBER(min_wind, client::env_wind_shared, uint16_t);
				MEMBER(max_wind, client::env_wind_shared, uint16_t);
				MEMBER(wind_radius, client::env_wind_shared, int);
				MEMBER(min_gust, client::env_wind_shared, uint16_t);
				MEMBER(max_gust, client::env_wind_shared, uint16_t);
				MEMBER(min_gust_delay, client::env_wind_shared, float);
				MEMBER(max_gust_delay, client::env_wind_shared, float);
				MEMBER(gust_duration, client::env_wind_shared, float);
				MEMBER(gust_dir_change, client::env_wind_shared, uint16_t);
				MEMBER(location, client::env_wind_shared, vector);
				MEMBER(isz_gust_sound, client::env_wind_shared, int);
				MEMBER(wind_dir, client::env_wind_shared, int);
				MEMBER(wind_speed, client::env_wind_shared, float);
				MEMBER(current_wind_vector, client::env_wind_shared, vector);
				MEMBER(current_sway_vector, client::env_wind_shared, vector);
				MEMBER(prev_sway_vector, client::env_wind_shared, vector);
				MEMBER(initial_wind_dir, client::env_wind_shared, uint16_t);
				MEMBER(initial_wind_speed, client::env_wind_shared, float);
				MEMBER(variation_time, client::env_wind_shared, game_time_t);
				MEMBER(sway_time, client::env_wind_shared, game_time_t);
				MEMBER(sim_time, client::env_wind_shared, game_time_t);
				MEMBER(switch_time, client::env_wind_shared, game_time_t);
				MEMBER(ave_wind_speed, client::env_wind_shared, float);
				MEMBER(gusting, client::env_wind_shared, bool);
				MEMBER(wind_angle_variation, client::env_wind_shared, float);
				MEMBER(wind_speed_variation, client::env_wind_shared, float);
				MEMBER(ent_index, client::env_wind_shared, centity_index);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class env_wind_shared

			class entity_flame : public base_entity
			{
			public:
				MEMBER(h_ent_attached, client::entity_flame, chandle<base_entity>);
				MEMBER(h_old_attached, client::entity_flame, chandle<base_entity>);
				MEMBER(cheap_effect, client::entity_flame, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class entity_flame : public base_entity

			class cprojected_texture_base
			{
			public:
				MEMBER(h_target_entity, client::cprojected_texture_base, chandle<base_entity>);
				MEMBER(state, client::cprojected_texture_base, bool);
				MEMBER(always_update, client::cprojected_texture_base, bool);
				MEMBER(light_fov, client::cprojected_texture_base, float);
				MEMBER(enable_shadows, client::cprojected_texture_base, bool);
				MEMBER(simple_projection, client::cprojected_texture_base, bool);
				MEMBER(light_only_target, client::cprojected_texture_base, bool);
				MEMBER(light_world, client::cprojected_texture_base, bool);
				MEMBER(camera_space, client::cprojected_texture_base, bool);
				MEMBER(brightness_scale, client::cprojected_texture_base, float);
				MEMBER(light_color, client::cprojected_texture_base, color);
				MEMBER(intensity, client::cprojected_texture_base, float);
				MEMBER(linear_attenuation, client::cprojected_texture_base, float);
				MEMBER(quadratic_attenuation, client::cprojected_texture_base, float);
				MEMBER(volumetric, client::cprojected_texture_base, bool);
				MEMBER(volumetric_intensity, client::cprojected_texture_base, float);
				MEMBER(noise_strength, client::cprojected_texture_base, float);
				MEMBER(flashlight_time, client::cprojected_texture_base, float);
				MEMBER(num_planes, client::cprojected_texture_base, uint32_t);
				MEMBER(plane_offset, client::cprojected_texture_base, float);
				MEMBER(color_transition_time, client::cprojected_texture_base, float);
				MEMBER(ambient, client::cprojected_texture_base, float);
				MEMBER_ARR(spotlight_texture_name_arr, client::cprojected_texture_base, 512, char);
				MEMBER(spotlight_texture_frame, client::cprojected_texture_base, int);
				MEMBER(shadow_quality, client::cprojected_texture_base, uint32_t);
				MEMBER(near_z, client::cprojected_texture_base, float);
				MEMBER(far_z, client::cprojected_texture_base, float);
				MEMBER(projection_size, client::cprojected_texture_base, float);
				MEMBER(rotation, client::cprojected_texture_base, float);
				MEMBER(flip_horizontal, client::cprojected_texture_base, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cprojected_texture_base

			class base_fire : public base_entity
			{
			public:
				MEMBER(scale, client::base_fire, float);
				MEMBER(start_scale, client::base_fire, float);
				MEMBER(scale_time, client::base_fire, float);
				MEMBER(flags, client::base_fire, uint32_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class base_fire : public base_entity

			class rope_keyframe__cphysics_delegate
			{
			public:
				MEMBER(keyframe_ptr, client::rope_keyframe__cphysics_delegate, rope_keyframe*);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class rope_keyframe__cphysics_delegate

			struct scene_entity__queued_events_t
			{
				MEMBER(starttime, client::scene_entity__queued_events_t, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // struct scene_entity__queued_events_t

			class tint_controller : public base_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class tint_controller : public base_entity

			class cskybox_reference : public base_entity
			{
			public:
				MEMBER(world_group_id, client::cskybox_reference, world_group_id_t);
				MEMBER(h_sky_camera, client::cskybox_reference, chandle<sky_camera>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cskybox_reference : public base_entity

			struct sky3dparams_t
			{
				MEMBER(scale, client::sky3dparams_t, short);
				MEMBER(origin, client::sky3dparams_t, vector);
				MEMBER(b_clip3_dsky_box_near_to_world_far, client::sky3dparams_t, bool);
				MEMBER(fl_clip3_dsky_box_near_to_world_far_offset, client::sky3dparams_t, float);
				MEMBER(fog, client::sky3dparams_t, fogparams_t);
				MEMBER(world_group_id, client::sky3dparams_t, world_group_id_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // struct sky3dparams_t

			class fire_smoke : public base_fire
			{
			public:
				MEMBER(flame_model_index, client::fire_smoke, int);
				MEMBER(flame_from_above_model_index, client::fire_smoke, int);
				MEMBER(scale_register, client::fire_smoke, float);
				MEMBER(scale_start, client::fire_smoke, float);
				MEMBER(scale_end, client::fire_smoke, float);
				MEMBER(scale_time_start, client::fire_smoke, game_time_t);
				MEMBER(scale_time_end, client::fire_smoke, game_time_t);
				MEMBER(child_flame_spread, client::fire_smoke, float);
				MEMBER(clip_perc, client::fire_smoke, float);
				MEMBER(clip_tested, client::fire_smoke, bool);
				MEMBER(fading_out, client::fire_smoke, bool);
				MEMBER(t_particle_spawn, client::fire_smoke, timed_event);
				MEMBER(fire_overlay_ptr, client::fire_smoke, cfire_overlay*);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class fire_smoke : public base_fire

			struct vphysics_collision_attribute_t
			{
				MEMBER(interacts_as, client::vphysics_collision_attribute_t, uint64_t);
				MEMBER(interacts_with, client::vphysics_collision_attribute_t, uint64_t);
				MEMBER(interacts_exclude, client::vphysics_collision_attribute_t, uint64_t);
				MEMBER(entity_id, client::vphysics_collision_attribute_t, uint32_t);
				MEMBER(owner_id, client::vphysics_collision_attribute_t, uint32_t);
				MEMBER(hierarchy_id, client::vphysics_collision_attribute_t, uint16_t);
				MEMBER(collision_group, client::vphysics_collision_attribute_t, uint8_t);
				MEMBER(collision_function_mask, client::vphysics_collision_attribute_t, uint8_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // struct vphysics_collision_attribute_t

			class ccollision_property
			{
			public:
				MEMBER(collision_attribute, client::ccollision_property, vphysics_collision_attribute_t);
				MEMBER(vec_mins, client::ccollision_property, vector);
				MEMBER(vec_maxs, client::ccollision_property, vector);
				MEMBER(us_solid_flags, client::ccollision_property, uint8_t);
				MEMBER(solid_type, client::ccollision_property, solid_type_t);
				MEMBER(trigger_bloat, client::ccollision_property, uint8_t);
				MEMBER(surround_type, client::ccollision_property, surrounding_bounds_type_t);
				MEMBER(collision_group, client::ccollision_property, uint8_t);
				MEMBER(enable_physics, client::ccollision_property, uint8_t);
				MEMBER(bounding_radius, client::ccollision_property, float);
				MEMBER(vec_specified_surrounding_mins, client::ccollision_property, vector);
				MEMBER(vec_specified_surrounding_maxs, client::ccollision_property, vector);
				MEMBER(vec_surrounding_maxs, client::ccollision_property, vector);
				MEMBER(vec_surrounding_mins, client::ccollision_property, vector);
				MEMBER(v_capsule_center1, client::ccollision_property, vector);
				MEMBER(v_capsule_center2, client::ccollision_property, vector);
				MEMBER(capsule_radius, client::ccollision_property, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccollision_property

			class ceffect_data
			{
			public:
				MEMBER(v_origin, client::ceffect_data, vector);
				MEMBER(v_start, client::ceffect_data, vector);
				MEMBER(v_normal, client::ceffect_data, vector);
				MEMBER(v_angles, client::ceffect_data, qangle);
				MEMBER(h_entity, client::ceffect_data, centity_handle);
				MEMBER(h_other_entity, client::ceffect_data, centity_handle);
				MEMBER(scale, client::ceffect_data, float);
				MEMBER(magnitude, client::ceffect_data, float);
				MEMBER(radius, client::ceffect_data, float);
				MEMBER(surface_prop, client::ceffect_data, cutl_string_token);
				MEMBER(effect_index, client::ceffect_data, cweak_handle<info_for_resource_type_iparticle_system_definition>);
				MEMBER(damage_type, client::ceffect_data, uint32_t);
				MEMBER(penetrate, client::ceffect_data, uint8_t);
				MEMBER(material, client::ceffect_data, uint16_t);
				MEMBER(hit_box, client::ceffect_data, uint16_t);
				MEMBER(color, client::ceffect_data, uint8_t);
				MEMBER(flags, client::ceffect_data, uint8_t);
				MEMBER(attachment_index, client::ceffect_data, attachment_handle_t);
				MEMBER(attachment_name, client::ceffect_data, cutl_string_token);
				MEMBER(effect_name, client::ceffect_data, uint16_t);
				MEMBER(explosion_type, client::ceffect_data, uint8_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ceffect_data

			class env_detail_controller : public base_entity
			{
			public:
				MEMBER(fade_start_dist, client::env_detail_controller, float);
				MEMBER(fade_end_dist, client::env_detail_controller, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class env_detail_controller : public base_entity

			class env_wind_clientside : public base_entity
			{
			public:
				MEMBER(env_wind_shared, client::env_wind_clientside, env_wind_shared);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class env_wind_clientside : public base_entity

			struct env_wind_shared__wind_ave_event_t
			{
				MEMBER(start_wind_speed, client::env_wind_shared__wind_ave_event_t, float);
				MEMBER(ave_wind_speed, client::env_wind_shared__wind_ave_event_t, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // struct env_wind_shared__wind_ave_event_t

			struct env_wind_shared__wind_variation_event_t
			{
				MEMBER(wind_angle_variation, client::env_wind_shared__wind_variation_event_t, float);
				MEMBER(wind_speed_variation, client::env_wind_shared__wind_variation_event_t, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // struct env_wind_shared__wind_variation_event_t

			class info_ladder_dismount : public base_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class info_ladder_dismount : public base_entity

			struct shard_model_desc_t
			{
				MEMBER(model_id, client::shard_model_desc_t, int);
				MEMBER(h_material, client::shard_model_desc_t, cstrong_handle<info_for_resource_type_imaterial2>);
				MEMBER(solid, client::shard_model_desc_t, shard_solid_t);
				MEMBER(shatter_panel_mode, client::shard_model_desc_t, shatter_panel_mode);
				MEMBER(vec_panel_size, client::shard_model_desc_t, vector2d);
				MEMBER(vec_stress_position_a, client::shard_model_desc_t, vector2d);
				MEMBER(vec_stress_position_b, client::shard_model_desc_t, vector2d);
				MEMBER(vec_panel_vertices, client::shard_model_desc_t, network_utl_vector_base<vector2d>);
				MEMBER(glass_half_thickness, client::shard_model_desc_t, float);
				MEMBER(has_parent, client::shard_model_desc_t, bool);
				MEMBER(parent_frozen, client::shard_model_desc_t, bool);
				MEMBER(surface_prop_string_token, client::shard_model_desc_t, cutl_string_token);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // struct shard_model_desc_t

			class game_rules_proxy : public base_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class game_rules_proxy : public base_entity

			class cglow_property
			{
			public:
				MEMBER(glow_color, client::cglow_property, vector);
				MEMBER(glow_type, client::cglow_property, int);
				MEMBER(glow_team, client::cglow_property, int);
				MEMBER(glow_range, client::cglow_property, int);
				MEMBER(glow_range_min, client::cglow_property, int);
				MEMBER(glow_color_override, client::cglow_property, color);
				MEMBER(flashing, client::cglow_property, bool);
				MEMBER(glow_time, client::cglow_property, float);
				MEMBER(glow_start_time, client::cglow_property, float);
				MEMBER(eligible_for_screen_highlight, client::cglow_property, bool);
				MEMBER(glowing, client::cglow_property, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cglow_property

			struct fogplayerparams_t
			{
				MEMBER(h_ctrl, client::fogplayerparams_t, chandle<fog_controller>);
				MEMBER(transition_time, client::fogplayerparams_t, float);
				MEMBER(old_color, client::fogplayerparams_t, color);
				MEMBER(old_start, client::fogplayerparams_t, float);
				MEMBER(old_end, client::fogplayerparams_t, float);
				MEMBER(old_max_density, client::fogplayerparams_t, float);
				MEMBER(old_hdrcolor_scale, client::fogplayerparams_t, float);
				MEMBER(old_far_z, client::fogplayerparams_t, float);
				MEMBER(new_color, client::fogplayerparams_t, color);
				MEMBER(new_start, client::fogplayerparams_t, float);
				MEMBER(new_end, client::fogplayerparams_t, float);
				MEMBER(new_max_density, client::fogplayerparams_t, float);
				MEMBER(new_hdrcolor_scale, client::fogplayerparams_t, float);
				MEMBER(new_far_z, client::fogplayerparams_t, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // struct fogplayerparams_t

			class cplayer_camera_services : public cplayer_pawn_component
			{
			public:
				MEMBER(vec_cs_view_punch_angle, client::cplayer_camera_services, qangle);
				MEMBER(cs_view_punch_angle_tick, client::cplayer_camera_services, game_tick_t);
				MEMBER(cs_view_punch_angle_tick_ratio, client::cplayer_camera_services, float);
				MEMBER(player_fog, client::cplayer_camera_services, fogplayerparams_t);
				MEMBER(h_color_correction_ctrl, client::cplayer_camera_services, chandle<color_correction>);
				MEMBER(h_view_entity, client::cplayer_camera_services, chandle<base_entity>);
				MEMBER(h_tonemap_controller, client::cplayer_camera_services, chandle<tonemap_controller2>);
				MEMBER(audio, client::cplayer_camera_services, audioparams_t);
				MEMBER(post_processing_volumes, client::cplayer_camera_services, network_utl_vector_base<chandle<post_processing_volume>>);
				MEMBER(old_player_z, client::cplayer_camera_services, float);
				MEMBER(old_player_view_offset_z, client::cplayer_camera_services, float);
				MEMBER(current_fog, client::cplayer_camera_services, fogparams_t);
				MEMBER(h_old_fog_controller, client::cplayer_camera_services, chandle<fog_controller>);
				MEMBER_ARR(override_fog_color_arr, client::cplayer_camera_services, 5, bool);
				MEMBER_ARR(override_fog_color_arr_1, client::cplayer_camera_services, 5, color);
				MEMBER_ARR(override_fog_start_end_arr, client::cplayer_camera_services, 5, bool);
				MEMBER_ARR(override_fog_start_arr, client::cplayer_camera_services, 5, float);
				MEMBER_ARR(override_fog_end_arr, client::cplayer_camera_services, 5, float);
				MEMBER(h_active_post_processing_volume, client::cplayer_camera_services, chandle<post_processing_volume>);
				MEMBER(ang_demo_view_angles, client::cplayer_camera_services, qangle);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cplayer_camera_services : public cplayer_pawn_component

			class sky_camera : public base_entity
			{
			public:
				MEMBER(skybox_data, client::sky_camera, sky3dparams_t);
				MEMBER(skybox_slot_token, client::sky_camera, cutl_string_token);
				MEMBER(use_angles, client::sky_camera, bool);
				MEMBER(next_ptr, client::sky_camera, sky_camera*);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class sky_camera : public base_entity

			struct physics_ragdoll_pose_t
			{
				MEMBER(_m_p_chain_entity, client::physics_ragdoll_pose_t, cnetwork_var_chainer);
				MEMBER(transforms, client::physics_ragdoll_pose_t, network_utl_vector_base<ctransform>);
				MEMBER(h_owner, client::physics_ragdoll_pose_t, chandle<base_entity>);
				MEMBER(dirty, client::physics_ragdoll_pose_t, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // struct physics_ragdoll_pose_t

			class sound_opvar_set_point_base : public base_entity
			{
			public:
				MEMBER(isz_stack_name, client::sound_opvar_set_point_base, cutl_symbol_large);
				MEMBER(isz_operator_name, client::sound_opvar_set_point_base, cutl_symbol_large);
				MEMBER(isz_opvar_name, client::sound_opvar_set_point_base, cutl_symbol_large);
				MEMBER(opvar_index, client::sound_opvar_set_point_base, int);
				MEMBER(use_auto_compare, client::sound_opvar_set_point_base, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class sound_opvar_set_point_base : public base_entity

			class sound_opvar_set_point_entity : public sound_opvar_set_point_base
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class sound_opvar_set_point_entity : public sound_opvar_set_point_base

			class sound_opvar_set_aabbentity : public sound_opvar_set_point_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class sound_opvar_set_aabbentity : public sound_opvar_set_point_entity

			class sound_opvar_set_obbentity : public sound_opvar_set_aabbentity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class sound_opvar_set_obbentity : public sound_opvar_set_aabbentity

			class sound_opvar_set_path_corner_entity : public sound_opvar_set_point_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class sound_opvar_set_path_corner_entity : public sound_opvar_set_point_entity

			class sound_opvar_set_obbwind_entity : public sound_opvar_set_point_base
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class sound_opvar_set_obbwind_entity : public sound_opvar_set_point_base

			class team_round_timer : public base_entity
			{
			public:
				MEMBER(timer_paused, client::team_round_timer, bool);
				MEMBER(time_remaining, client::team_round_timer, float);
				MEMBER(timer_end_time, client::team_round_timer, game_time_t);
				MEMBER(is_disabled, client::team_round_timer, bool);
				MEMBER(show_in_hud, client::team_round_timer, bool);
				MEMBER(timer_length, client::team_round_timer, int);
				MEMBER(timer_initial_length, client::team_round_timer, int);
				MEMBER(timer_max_length, client::team_round_timer, int);
				MEMBER(auto_countdown, client::team_round_timer, bool);
				MEMBER(setup_time_length, client::team_round_timer, int);
				MEMBER(state, client::team_round_timer, int);
				MEMBER(start_paused, client::team_round_timer, bool);
				MEMBER(in_capture_watch_state, client::team_round_timer, bool);
				MEMBER(total_time, client::team_round_timer, float);
				MEMBER(stop_watch_timer, client::team_round_timer, bool);
				MEMBER(fire_finished, client::team_round_timer, bool);
				MEMBER(fire5_min_remain, client::team_round_timer, bool);
				MEMBER(fire4_min_remain, client::team_round_timer, bool);
				MEMBER(fire3_min_remain, client::team_round_timer, bool);
				MEMBER(fire2_min_remain, client::team_round_timer, bool);
				MEMBER(fire1_min_remain, client::team_round_timer, bool);
				MEMBER(fire30_sec_remain, client::team_round_timer, bool);
				MEMBER(fire10_sec_remain, client::team_round_timer, bool);
				MEMBER(fire5_sec_remain, client::team_round_timer, bool);
				MEMBER(fire4_sec_remain, client::team_round_timer, bool);
				MEMBER(fire3_sec_remain, client::team_round_timer, bool);
				MEMBER(fire2_sec_remain, client::team_round_timer, bool);
				MEMBER(fire1_sec_remain, client::team_round_timer, bool);
				MEMBER(old_timer_length, client::team_round_timer, int);
				MEMBER(old_timer_state, client::team_round_timer, int);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class team_round_timer : public base_entity

			class cattribute_list
			{
			public:
				MEMBER(attributes, client::cattribute_list, utl_vector_embedded_network_var<cecon_item_attribute>);
				MEMBER(manager_ptr, client::cattribute_list, cattribute_manager*);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cattribute_list

			class cecon_item_attribute
			{
			public:
				MEMBER(attribute_definition_index, client::cecon_item_attribute, uint16_t);
				MEMBER(value, client::cecon_item_attribute, float);
				MEMBER(initial_value, client::cecon_item_attribute, float);
				MEMBER(refundable_currency, client::cecon_item_attribute, int);
				MEMBER(set_bonus, client::cecon_item_attribute, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cecon_item_attribute

			class cattribute_manager
			{
			public:
				MEMBER(providers, client::cattribute_manager, cutl_vector<chandle<base_entity>>);
				MEMBER(reapply_provision_parity, client::cattribute_manager, int);
				MEMBER(h_outer, client::cattribute_manager, chandle<base_entity>);
				MEMBER(prevent_loopback, client::cattribute_manager, bool);
				MEMBER(provider_type, client::cattribute_manager, attributeprovidertypes_t);
				MEMBER(cached_results, client::cattribute_manager, cutl_vector<cattribute_manager_cached_attribute_float_t>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cattribute_manager

			struct cattribute_manager_cached_attribute_float_t
			{
				MEMBER(fl_in, client::cattribute_manager_cached_attribute_float_t, float);
				MEMBER(i_attrib_hook, client::cattribute_manager_cached_attribute_float_t, cutl_symbol_large);
				MEMBER(fl_out, client::cattribute_manager_cached_attribute_float_t, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // struct cattribute_manager_cached_attribute_float_t

			class econ_item_view : public iecon_item_interface
			{
			public:
				MEMBER(inventory_image_rgba_requested, client::econ_item_view, bool);
				MEMBER(inventory_image_tried_cache, client::econ_item_view, bool);
				MEMBER(inventory_image_rgba_width, client::econ_item_view, int);
				MEMBER(inventory_image_rgba_height, client::econ_item_view, int);
				MEMBER_ARR(current_load_cached_file_name_arr, client::econ_item_view, 260, char);
				MEMBER(restore_custom_material_after_precache, client::econ_item_view, bool);
				MEMBER(item_definition_index, client::econ_item_view, uint16_t);
				MEMBER(entity_quality, client::econ_item_view, int);
				MEMBER(entity_level, client::econ_item_view, uint32_t);
				MEMBER(item_id, client::econ_item_view, uint64_t);
				MEMBER(item_idhigh, client::econ_item_view, uint32_t);
				MEMBER(item_idlow, client::econ_item_view, uint32_t);
				MEMBER(account_id, client::econ_item_view, uint32_t);
				MEMBER(inventory_position, client::econ_item_view, uint32_t);
				MEMBER(initialized, client::econ_item_view, bool);
				MEMBER(is_store_item, client::econ_item_view, bool);
				MEMBER(is_trade_item, client::econ_item_view, bool);
				MEMBER(entity_quantity, client::econ_item_view, int);
				MEMBER(rarity_override, client::econ_item_view, int);
				MEMBER(quality_override, client::econ_item_view, int);
				MEMBER(un_client_flags, client::econ_item_view, uint8_t);
				MEMBER(un_override_style, client::econ_item_view, uint8_t);
				MEMBER(attribute_list, client::econ_item_view, cattribute_list);
				MEMBER(networked_dynamic_attributes, client::econ_item_view, cattribute_list);
				MEMBER_ARR(custom_name_arr, client::econ_item_view, 161, char);
				MEMBER_ARR(custom_name_override_arr, client::econ_item_view, 161, char);
				MEMBER(initialized_tags, client::econ_item_view, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class econ_item_view : public iecon_item_interface

			struct econ_entity__attached_model_data_t
			{
				MEMBER(model_display_flags, client::econ_entity__attached_model_data_t, int);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // struct econ_entity__attached_model_data_t

			struct entity_spotted_state_t
			{
				MEMBER(spotted, client::entity_spotted_state_t, bool);
				MEMBER_ARR(spotted_by_mask_arr, client::entity_spotted_state_t, 2, uint32_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // struct entity_spotted_state_t

			class csgame_rules_proxy : public game_rules_proxy
			{
			public:
				MEMBER(game_rules_ptr, client::csgame_rules_proxy, csgame_rules*);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class csgame_rules_proxy : public game_rules_proxy

			class retake_game_rules
			{
			public:
				MEMBER(match_seed, client::retake_game_rules, int);
				MEMBER(blockers_present, client::retake_game_rules, bool);
				MEMBER(round_in_progress, client::retake_game_rules, bool);
				MEMBER(first_second_half_round, client::retake_game_rules, int);
				MEMBER(bomb_site, client::retake_game_rules, int);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class retake_game_rules

			class ccsgame_mode_rules
			{
			public:
				MEMBER(_m_p_chain_entity, client::ccsgame_mode_rules, cnetwork_var_chainer);
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
				MEMBER(first_think, client::ccsgame_mode_rules_deathmatch, bool);
				MEMBER(first_think_after_connected, client::ccsgame_mode_rules_deathmatch, bool);
				MEMBER(dmbonus_start_time, client::ccsgame_mode_rules_deathmatch, game_time_t);
				MEMBER(dmbonus_time_length, client::ccsgame_mode_rules_deathmatch, float);
				MEMBER(dmbonus_weapon_loadout_slot, client::ccsgame_mode_rules_deathmatch, short);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsgame_mode_rules_deathmatch : public ccsgame_mode_rules

			class csgame_rules : public teamplay_rules
			{
			public:
				MEMBER(_m_p_chain_entity, client::csgame_rules, cnetwork_var_chainer);
				MEMBER(freeze_period, client::csgame_rules, bool);
				MEMBER(warmup_period, client::csgame_rules, bool);
				MEMBER(warmup_period_end, client::csgame_rules, game_time_t);
				MEMBER(warmup_period_start, client::csgame_rules, game_time_t);
				MEMBER(total_paused_ticks, client::csgame_rules, int);
				MEMBER(pause_start_tick, client::csgame_rules, int);
				MEMBER(server_paused, client::csgame_rules, bool);
				MEMBER(game_paused, client::csgame_rules, bool);
				MEMBER(terrorist_time_out_active, client::csgame_rules, bool);
				MEMBER(cttime_out_active, client::csgame_rules, bool);
				MEMBER(terrorist_time_out_remaining, client::csgame_rules, float);
				MEMBER(cttime_out_remaining, client::csgame_rules, float);
				MEMBER(terrorist_time_outs, client::csgame_rules, int);
				MEMBER(cttime_outs, client::csgame_rules, int);
				MEMBER(technical_time_out, client::csgame_rules, bool);
				MEMBER(match_waiting_for_resume, client::csgame_rules, bool);
				MEMBER(round_time, client::csgame_rules, int);
				MEMBER(match_start_time, client::csgame_rules, float);
				MEMBER(round_start_time, client::csgame_rules, game_time_t);
				MEMBER(restart_round_time, client::csgame_rules, game_time_t);
				MEMBER(game_restart, client::csgame_rules, bool);
				MEMBER(game_start_time, client::csgame_rules, float);
				MEMBER(time_until_next_phase_starts, client::csgame_rules, float);
				MEMBER(game_phase, client::csgame_rules, int);
				MEMBER(total_rounds_played, client::csgame_rules, int);
				MEMBER(rounds_played_this_phase, client::csgame_rules, int);
				MEMBER(overtime_playing, client::csgame_rules, int);
				MEMBER(hostages_remaining, client::csgame_rules, int);
				MEMBER(any_hostage_reached, client::csgame_rules, bool);
				MEMBER(map_has_bomb_target, client::csgame_rules, bool);
				MEMBER(map_has_rescue_zone, client::csgame_rules, bool);
				MEMBER(map_has_buy_zone, client::csgame_rules, bool);
				MEMBER(is_queued_matchmaking, client::csgame_rules, bool);
				MEMBER(queued_matchmaking_mode, client::csgame_rules, int);
				MEMBER(is_valve_ds, client::csgame_rules, bool);
				MEMBER(logo_map, client::csgame_rules, bool);
				MEMBER(play_all_step_sounds_on_server, client::csgame_rules, bool);
				MEMBER(spectator_slot_count, client::csgame_rules, int);
				MEMBER(match_device, client::csgame_rules, int);
				MEMBER(has_match_started, client::csgame_rules, bool);
				MEMBER(next_map_in_mapgroup, client::csgame_rules, int);
				MEMBER_ARR(tournament_event_name_arr, client::csgame_rules, 512, char);
				MEMBER_ARR(tournament_event_stage_arr, client::csgame_rules, 512, char);
				MEMBER_ARR(match_stat_txt_arr, client::csgame_rules, 512, char);
				MEMBER_ARR(tournament_predictions_txt_arr, client::csgame_rules, 512, char);
				MEMBER(tournament_predictions_pct, client::csgame_rules, int);
				MEMBER(cmmitem_drop_reveal_start_time, client::csgame_rules, game_time_t);
				MEMBER(cmmitem_drop_reveal_end_time, client::csgame_rules, game_time_t);
				MEMBER(is_dropping_items, client::csgame_rules, bool);
				MEMBER(is_quest_eligible, client::csgame_rules, bool);
				MEMBER(is_hltv_active, client::csgame_rules, bool);
				MEMBER(guardian_mode_wave_number, client::csgame_rules, int);
				MEMBER(guardian_mode_special_kills_remaining, client::csgame_rules, int);
				MEMBER(guardian_mode_special_weapon_needed, client::csgame_rules, int);
				MEMBER(guardian_grenades_to_give_bots, client::csgame_rules, int);
				MEMBER(num_heavies_to_spawn, client::csgame_rules, int);
				MEMBER(num_global_gifts_given, client::csgame_rules, uint32_t);
				MEMBER(num_global_gifters, client::csgame_rules, uint32_t);
				MEMBER(num_global_gifts_period_seconds, client::csgame_rules, uint32_t);
				MEMBER_ARR(arr_featured_gifters_accounts_arr, client::csgame_rules, 4, uint32_t);
				MEMBER_ARR(arr_featured_gifters_gifts_arr, client::csgame_rules, 4, uint32_t);
				MEMBER_ARR(arr_prohibited_item_indices_arr, client::csgame_rules, 100, uint16_t);
				MEMBER_ARR(arr_tournament_active_caster_accounts_arr, client::csgame_rules, 4, uint32_t);
				MEMBER(num_best_of_maps, client::csgame_rules, int);
				MEMBER(halloween_mask_list_seed, client::csgame_rules, int);
				MEMBER(bomb_dropped, client::csgame_rules, bool);
				MEMBER(bomb_planted, client::csgame_rules, bool);
				MEMBER(round_win_status, client::csgame_rules, int);
				MEMBER(e_round_win_reason, client::csgame_rules, int);
				MEMBER(tcant_buy, client::csgame_rules, bool);
				MEMBER(ctcant_buy, client::csgame_rules, bool);
				MEMBER(guardian_buy_until_time, client::csgame_rules, game_time_t);
				MEMBER_ARR(match_stats_round_results_arr, client::csgame_rules, 30, int);
				MEMBER_ARR(match_stats_players_alive_ct_arr, client::csgame_rules, 30, int);
				MEMBER_ARR(match_stats_players_alive_t_arr, client::csgame_rules, 30, int);
				MEMBER_ARR(team_respawn_wave_times_arr, client::csgame_rules, 32, float);
				MEMBER_ARR(next_respawn_wave_arr, client::csgame_rules, 32, game_time_t);
				MEMBER(server_quest_id, client::csgame_rules, int);
				MEMBER(v_minimap_mins, client::csgame_rules, vector);
				MEMBER(v_minimap_maxs, client::csgame_rules, vector);
				MEMBER_ARR(minimap_vertical_section_heights_arr, client::csgame_rules, 8, float);
				MEMBER(dont_increment_coop_wave, client::csgame_rules, bool);
				MEMBER(spawned_terror_hunt_heavy, client::csgame_rules, bool);
				MEMBER_ARR(end_match_map_group_vote_types_arr, client::csgame_rules, 10, int);
				MEMBER_ARR(end_match_map_group_vote_options_arr, client::csgame_rules, 10, int);
				MEMBER(end_match_map_vote_winner, client::csgame_rules, int);
				MEMBER(num_consecutive_ctloses, client::csgame_rules, int);
				MEMBER(num_consecutive_terrorist_loses, client::csgame_rules, int);
				MEMBER(mark_client_stop_record_at_round_end, client::csgame_rules, bool);
				MEMBER(match_aborted_early_reason, client::csgame_rules, int);
				MEMBER(has_triggered_round_start_music, client::csgame_rules, bool);
				MEMBER(has_triggered_coop_spawn_reset, client::csgame_rules, bool);
				MEMBER(switching_teams_at_round_reset, client::csgame_rules, bool);
				MEMBER(game_mode_rules_ptr, client::csgame_rules, ccsgame_mode_rules*);
				MEMBER(retake_rules, client::csgame_rules, retake_game_rules);
				MEMBER(match_end_count, client::csgame_rules, uint8_t);
				MEMBER(tteam_intro_variant, client::csgame_rules, int);
				MEMBER(ctteam_intro_variant, client::csgame_rules, int);
				MEMBER(team_intro_period, client::csgame_rules, bool);
				MEMBER(last_perf_sample_time, client::csgame_rules, double);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class csgame_rules : public teamplay_rules

			struct csper_round_stats_t
			{
				MEMBER(kills, client::csper_round_stats_t, int);
				MEMBER(deaths, client::csper_round_stats_t, int);
				MEMBER(assists, client::csper_round_stats_t, int);
				MEMBER(damage, client::csper_round_stats_t, int);
				MEMBER(equipment_value, client::csper_round_stats_t, int);
				MEMBER(money_saved, client::csper_round_stats_t, int);
				MEMBER(kill_reward, client::csper_round_stats_t, int);
				MEMBER(live_time, client::csper_round_stats_t, int);
				MEMBER(head_shot_kills, client::csper_round_stats_t, int);
				MEMBER(objective, client::csper_round_stats_t, int);
				MEMBER(cash_earned, client::csper_round_stats_t, int);
				MEMBER(utility_damage, client::csper_round_stats_t, int);
				MEMBER(enemies_flashed, client::csper_round_stats_t, int);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // struct csper_round_stats_t

			struct csmatch_stats_t : public csper_round_stats_t
			{
				MEMBER(enemy5_ks, client::csmatch_stats_t, int);
				MEMBER(enemy4_ks, client::csmatch_stats_t, int);
				MEMBER(enemy3_ks, client::csmatch_stats_t, int);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // struct csmatch_stats_t : public csper_round_stats_t

			class csgo_team_preview_character_position : public base_entity
			{
			public:
				MEMBER(variant, client::csgo_team_preview_character_position, int);
				MEMBER(random, client::csgo_team_preview_character_position, int);
				MEMBER(ordinal, client::csgo_team_preview_character_position, int);
				MEMBER(s_weapon_name, client::csgo_team_preview_character_position, cutl_string);
				MEMBER(xuid, client::csgo_team_preview_character_position, uint64_t);
				MEMBER(agent_item, client::csgo_team_preview_character_position, econ_item_view);
				MEMBER(gloves_item, client::csgo_team_preview_character_position, econ_item_view);
				MEMBER(weapon_item, client::csgo_team_preview_character_position, econ_item_view);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class csgo_team_preview_character_position : public base_entity

			class csgo_team_select_character_position : public csgo_team_preview_character_position
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class csgo_team_select_character_position : public csgo_team_preview_character_position

			class csgo_team_select_terrorist_position : public csgo_team_select_character_position
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class csgo_team_select_terrorist_position : public csgo_team_select_character_position

			class csgo_team_select_counter_terrorist_position : public csgo_team_select_character_position
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class csgo_team_select_counter_terrorist_position : public csgo_team_select_character_position

			class csgo_team_intro_character_position : public csgo_team_preview_character_position
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class csgo_team_intro_character_position : public csgo_team_preview_character_position

			class csgo_team_intro_terrorist_position : public csgo_team_intro_character_position
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class csgo_team_intro_terrorist_position : public csgo_team_intro_character_position

			class csgo_team_intro_counter_terrorist_position : public csgo_team_intro_character_position
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class csgo_team_intro_counter_terrorist_position : public csgo_team_intro_character_position

			class ccsgo_wingman_intro_character_position : public csgo_team_intro_character_position
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsgo_wingman_intro_character_position : public csgo_team_intro_character_position

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

			class csminimap_boundary : public base_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class csminimap_boundary : public base_entity

			class player_ping : public base_entity
			{
			public:
				MEMBER(h_player, client::player_ping, chandle<csplayer_pawn>);
				MEMBER(h_pinged_entity, client::player_ping, chandle<base_entity>);
				MEMBER(type, client::player_ping, int);
				MEMBER(urgent, client::player_ping, bool);
				MEMBER_ARR(place_name_arr, client::player_ping, 18, char);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class player_ping : public base_entity

			class ccsplayer_ping_services : public cplayer_pawn_component
			{
			public:
				MEMBER(h_player_ping, client::ccsplayer_ping_services, chandle<base_entity>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsplayer_ping_services : public cplayer_pawn_component

			class csplayer_resource : public base_entity
			{
			public:
				MEMBER_ARR(hostage_alive_arr, client::csplayer_resource, 12, bool);
				MEMBER_ARR(is_hostage_following_someone_arr, client::csplayer_resource, 12, bool);
				MEMBER_ARR(hostage_entity_ids_arr, client::csplayer_resource, 12, centity_index);
				MEMBER(bombsite_center_a, client::csplayer_resource, vector);
				MEMBER(bombsite_center_b, client::csplayer_resource, vector);
				MEMBER_ARR(hostage_rescue_x_arr, client::csplayer_resource, 4, int);
				MEMBER_ARR(hostage_rescue_y_arr, client::csplayer_resource, 4, int);
				MEMBER_ARR(hostage_rescue_z_arr, client::csplayer_resource, 4, int);
				MEMBER(end_match_next_map_all_voted, client::csplayer_resource, bool);
				MEMBER(found_goal_positions, client::csplayer_resource, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class csplayer_resource : public base_entity

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
				MEMBER(fov, client::ccsplayer_base_camera_services, uint32_t);
				MEMBER(fovstart, client::ccsplayer_base_camera_services, uint32_t);
				MEMBER(fovtime, client::ccsplayer_base_camera_services, game_time_t);
				MEMBER(fovrate, client::ccsplayer_base_camera_services, float);
				MEMBER(h_zoom_owner, client::ccsplayer_base_camera_services, chandle<base_entity>);
				MEMBER(last_shot_fov, client::ccsplayer_base_camera_services, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsplayer_base_camera_services : public cplayer_camera_services

			struct weapon_purchase_count_t
			{
				MEMBER(item_def_index, client::weapon_purchase_count_t, uint16_t);
				MEMBER(count, client::weapon_purchase_count_t, uint16_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // struct weapon_purchase_count_t

			struct weapon_purchase_tracker_t
			{
				MEMBER(weapon_purchases, client::weapon_purchase_tracker_t, utl_vector_embedded_network_var<weapon_purchase_count_t>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // struct weapon_purchase_tracker_t

			class ccsplayer_action_tracking_services : public cplayer_pawn_component
			{
			public:
				MEMBER(h_last_weapon_before_c4_auto_switch, client::ccsplayer_action_tracking_services, chandle<base_player_weapon>);
				MEMBER(is_rescuing, client::ccsplayer_action_tracking_services, bool);
				MEMBER(weapon_purchases_this_match, client::ccsplayer_action_tracking_services, weapon_purchase_tracker_t);
				MEMBER(weapon_purchases_this_round, client::ccsplayer_action_tracking_services, weapon_purchase_tracker_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsplayer_action_tracking_services : public cplayer_pawn_component

			class ccsplayer_bullet_services : public cplayer_pawn_component
			{
			public:
				MEMBER(total_hits_on_server, client::ccsplayer_bullet_services, int);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsplayer_bullet_services : public cplayer_pawn_component

			struct sellback_purchase_entry_t
			{
				MEMBER(un_def_idx, client::sellback_purchase_entry_t, uint16_t);
				MEMBER(cost, client::sellback_purchase_entry_t, int);
				MEMBER(prev_armor, client::sellback_purchase_entry_t, int);
				MEMBER(prev_helmet, client::sellback_purchase_entry_t, bool);
				MEMBER(h_item, client::sellback_purchase_entry_t, centity_handle);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // struct sellback_purchase_entry_t

			class ccsplayer_buy_services : public cplayer_pawn_component
			{
			public:
				MEMBER(vec_sellback_purchase_entries, client::ccsplayer_buy_services, utl_vector_embedded_network_var<sellback_purchase_entry_t>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsplayer_buy_services : public cplayer_pawn_component

			class ccsplayer_camera_services : public ccsplayer_base_camera_services
			{
			public:
				MEMBER(death_cam_tilt, client::ccsplayer_camera_services, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsplayer_camera_services : public ccsplayer_base_camera_services

			class ccsplayer_hostage_services : public cplayer_pawn_component
			{
			public:
				MEMBER(h_carried_hostage, client::ccsplayer_hostage_services, chandle<base_entity>);
				MEMBER(h_carried_hostage_prop, client::ccsplayer_hostage_services, chandle<base_entity>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsplayer_hostage_services : public cplayer_pawn_component

			class ccsplayer_item_services : public cplayer_item_services
			{
			public:
				MEMBER(has_defuser, client::ccsplayer_item_services, bool);
				MEMBER(has_helmet, client::ccsplayer_item_services, bool);
				MEMBER(has_heavy_armor, client::ccsplayer_item_services, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsplayer_item_services : public cplayer_item_services

			class ccsplayer_movement_services : public cplayer_movement_services_humanoid
			{
			public:
				MEMBER(max_fall_velocity, client::ccsplayer_movement_services, float);
				MEMBER(vec_ladder_normal, client::ccsplayer_movement_services, vector);
				MEMBER(ladder_surface_prop_index, client::ccsplayer_movement_services, int);
				MEMBER(duck_amount, client::ccsplayer_movement_services, float);
				MEMBER(duck_speed, client::ccsplayer_movement_services, float);
				MEMBER(duck_override, client::ccsplayer_movement_services, bool);
				MEMBER(desires_duck, client::ccsplayer_movement_services, bool);
				MEMBER(duck_offset, client::ccsplayer_movement_services, float);
				MEMBER(duck_time_msecs, client::ccsplayer_movement_services, uint32_t);
				MEMBER(duck_jump_time_msecs, client::ccsplayer_movement_services, uint32_t);
				MEMBER(jump_time_msecs, client::ccsplayer_movement_services, uint32_t);
				MEMBER(last_duck_time, client::ccsplayer_movement_services, float);
				MEMBER(vec_last_position_at_full_crouch_speed, client::ccsplayer_movement_services, vector2d);
				MEMBER(duck_until_on_ground, client::ccsplayer_movement_services, bool);
				MEMBER(has_walk_moved_since_last_jump, client::ccsplayer_movement_services, bool);
				MEMBER(in_stuck_test, client::ccsplayer_movement_services, bool);
				MEMBER_ARR(stuck_check_time_arr, client::ccsplayer_movement_services, 128, float);
				MEMBER(trace_count, client::ccsplayer_movement_services, int);
				MEMBER(stuck_last, client::ccsplayer_movement_services, int);
				MEMBER(speed_cropped, client::ccsplayer_movement_services, bool);
				MEMBER(old_water_level, client::ccsplayer_movement_services, int);
				MEMBER(water_entry_time, client::ccsplayer_movement_services, float);
				MEMBER(vec_forward, client::ccsplayer_movement_services, vector);
				MEMBER(vec_left, client::ccsplayer_movement_services, vector);
				MEMBER(vec_up, client::ccsplayer_movement_services, vector);
				MEMBER(vec_previously_predicted_origin, client::ccsplayer_movement_services, vector);
				MEMBER(old_jump_pressed, client::ccsplayer_movement_services, bool);
				MEMBER(jump_pressed_time, client::ccsplayer_movement_services, float);
				MEMBER(jump_until, client::ccsplayer_movement_services, float);
				MEMBER(jump_vel, client::ccsplayer_movement_services, float);
				MEMBER(stash_grenade_parameter_when, client::ccsplayer_movement_services, game_time_t);
				MEMBER(button_down_mask_prev, client::ccsplayer_movement_services, uint64_t);
				MEMBER(offset_tick_complete_time, client::ccsplayer_movement_services, float);
				MEMBER(offset_tick_stashed_speed, client::ccsplayer_movement_services, float);
				MEMBER(stamina, client::ccsplayer_movement_services, float);
				MEMBER(update_predicted_origin_after_data_update, client::ccsplayer_movement_services, bool);
				MEMBER(height_at_jump_start, client::ccsplayer_movement_services, float);
				MEMBER(max_jump_height_this_jump, client::ccsplayer_movement_services, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsplayer_movement_services : public cplayer_movement_services_humanoid

			class ccsplayer_use_services : public cplayer_use_services
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsplayer_use_services : public cplayer_use_services

			class ccsplayer_view_model_services : public cplayer_view_model_services
			{
			public:
				MEMBER_ARR(h_view_model_arr, client::ccsplayer_view_model_services, 3, chandle<base_view_model>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsplayer_view_model_services : public cplayer_view_model_services

			class ccsplayer_water_services : public cplayer_water_services
			{
			public:
				MEMBER(water_jump_time, client::ccsplayer_water_services, float);
				MEMBER(vec_water_jump_vel, client::ccsplayer_water_services, vector);
				MEMBER(swim_sound_time, client::ccsplayer_water_services, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsplayer_water_services : public cplayer_water_services

			class ccsplayer_weapon_services : public cplayer_weapon_services
			{
			public:
				MEMBER(next_attack, client::ccsplayer_weapon_services, game_time_t);
				MEMBER(is_looking_at_weapon, client::ccsplayer_weapon_services, bool);
				MEMBER(is_holding_look_at_weapon, client::ccsplayer_weapon_services, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsplayer_weapon_services : public cplayer_weapon_services

			class ccsobserver_observer_services : public cplayer_observer_services
			{
			public:
				MEMBER(h_last_observer_target, client::ccsobserver_observer_services, centity_handle);
				MEMBER(vec_observer_interpolate_offset, client::ccsobserver_observer_services, vector);
				MEMBER(vec_observer_interp_start_pos, client::ccsobserver_observer_services, vector);
				MEMBER(obs_interp_path_length, client::ccsobserver_observer_services, float);
				MEMBER(q_obs_interp_orientation_start, client::ccsobserver_observer_services, quaternion);
				MEMBER(q_obs_interp_orientation_travel_dir, client::ccsobserver_observer_services, quaternion);
				MEMBER(obs_interp_state, client::ccsobserver_observer_services, observer_interp_state_t);
				MEMBER(observer_interpolation_needs_deferred_setup, client::ccsobserver_observer_services, bool);
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
				MEMBER(per_round_stats, client::ccsplayer_controller_action_tracking_services, utl_vector_embedded_network_var<csper_round_stats_t>);
				MEMBER(match_stats, client::ccsplayer_controller_action_tracking_services, csmatch_stats_t);
				MEMBER(num_round_kills, client::ccsplayer_controller_action_tracking_services, int);
				MEMBER(num_round_kills_headshots, client::ccsplayer_controller_action_tracking_services, int);
				MEMBER(un_total_round_damage_dealt, client::ccsplayer_controller_action_tracking_services, uint32_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsplayer_controller_action_tracking_services : public cplayer_controller_component

			class cdamage_record
			{
			public:
				MEMBER(player_damager, client::cdamage_record, chandle<csplayer_pawn_base>);
				MEMBER(player_recipient, client::cdamage_record, chandle<csplayer_pawn_base>);
				MEMBER(h_player_controller_damager, client::cdamage_record, chandle<ccsplayer_controller>);
				MEMBER(h_player_controller_recipient, client::cdamage_record, chandle<ccsplayer_controller>);
				MEMBER(player_damager_name, client::cdamage_record, cutl_string);
				MEMBER(player_recipient_name, client::cdamage_record, cutl_string);
				MEMBER(damager_xuid, client::cdamage_record, uint64_t);
				MEMBER(recipient_xuid, client::cdamage_record, uint64_t);
				MEMBER(damage, client::cdamage_record, int);
				MEMBER(actual_health_removed, client::cdamage_record, int);
				MEMBER(num_hits, client::cdamage_record, int);
				MEMBER(last_bullet_update, client::cdamage_record, int);
				MEMBER(is_other_enemy, client::cdamage_record, bool);
				MEMBER(kill_type, client::cdamage_record, ekill_types_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cdamage_record

			class ccsplayer_controller_damage_services : public cplayer_controller_component
			{
			public:
				MEMBER(send_update, client::ccsplayer_controller_damage_services, int);
				MEMBER(damage_list, client::ccsplayer_controller_damage_services, utl_vector_embedded_network_var<cdamage_record>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsplayer_controller_damage_services : public cplayer_controller_component

			class ccsplayer_controller_in_game_money_services : public cplayer_controller_component
			{
			public:
				MEMBER(account, client::ccsplayer_controller_in_game_money_services, int);
				MEMBER(start_account, client::ccsplayer_controller_in_game_money_services, int);
				MEMBER(total_cash_spent, client::ccsplayer_controller_in_game_money_services, int);
				MEMBER(cash_spent_this_round, client::ccsplayer_controller_in_game_money_services, int);
				MEMBER(previous_account, client::ccsplayer_controller_in_game_money_services, int);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsplayer_controller_in_game_money_services : public cplayer_controller_component

			struct server_authoritative_weapon_slot_t
			{
				MEMBER(un_class, client::server_authoritative_weapon_slot_t, uint16_t);
				MEMBER(un_slot, client::server_authoritative_weapon_slot_t, uint16_t);
				MEMBER(un_item_def_idx, client::server_authoritative_weapon_slot_t, uint16_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // struct server_authoritative_weapon_slot_t

			class ccsplayer_controller_inventory_services : public cplayer_controller_component
			{
			public:
				MEMBER(un_music_id, client::ccsplayer_controller_inventory_services, uint16_t);
				MEMBER_ARR(rank_arr, client::ccsplayer_controller_inventory_services, 6, medal_rank_t);
				MEMBER(persona_data_public_level, client::ccsplayer_controller_inventory_services, int);
				MEMBER(persona_data_public_commends_leader, client::ccsplayer_controller_inventory_services, int);
				MEMBER(persona_data_public_commends_teacher, client::ccsplayer_controller_inventory_services, int);
				MEMBER(persona_data_public_commends_friendly, client::ccsplayer_controller_inventory_services, int);
				MEMBER(vec_server_authoritative_weapon_slots, client::ccsplayer_controller_inventory_services, utl_vector_embedded_network_var<server_authoritative_weapon_slot_t>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsplayer_controller_inventory_services : public cplayer_controller_component

			class global_light : public base_entity
			{
			public:
				MEMBER(wind_cloth_force_handle, client::global_light, uint16_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class global_light : public base_entity

			class csgo_map_preview_camera_path_node : public base_entity
			{
			public:
				MEMBER(parent_path_unique_id, client::csgo_map_preview_camera_path_node, cutl_symbol_large);
				MEMBER(path_index, client::csgo_map_preview_camera_path_node, int);
				MEMBER(v_in_tangent_local, client::csgo_map_preview_camera_path_node, vector);
				MEMBER(v_out_tangent_local, client::csgo_map_preview_camera_path_node, vector);
				MEMBER(fov, client::csgo_map_preview_camera_path_node, float);
				MEMBER(speed, client::csgo_map_preview_camera_path_node, float);
				MEMBER(ease_in, client::csgo_map_preview_camera_path_node, float);
				MEMBER(ease_out, client::csgo_map_preview_camera_path_node, float);
				MEMBER(v_in_tangent_world, client::csgo_map_preview_camera_path_node, vector);
				MEMBER(v_out_tangent_world, client::csgo_map_preview_camera_path_node, vector);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class csgo_map_preview_camera_path_node : public base_entity

			class csgo_map_preview_camera_path : public base_entity
			{
			public:
				MEMBER(zfar, client::csgo_map_preview_camera_path, float);
				MEMBER(znear, client::csgo_map_preview_camera_path, float);
				MEMBER(loop, client::csgo_map_preview_camera_path, bool);
				MEMBER(vertical_fov, client::csgo_map_preview_camera_path, bool);
				MEMBER(constant_speed, client::csgo_map_preview_camera_path, bool);
				MEMBER(duration, client::csgo_map_preview_camera_path, float);
				MEMBER(path_length, client::csgo_map_preview_camera_path, float);
				MEMBER(path_duration, client::csgo_map_preview_camera_path, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class csgo_map_preview_camera_path : public base_entity

			class ccsplayer_glow_services : public cplayer_pawn_component
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsplayer_glow_services : public cplayer_pawn_component

			class vote_controller : public base_entity
			{
			public:
				MEMBER(active_issue_index, client::vote_controller, int);
				MEMBER(only_team_to_vote, client::vote_controller, int);
				MEMBER_ARR(vote_option_count_arr, client::vote_controller, 5, int);
				MEMBER(potential_votes, client::vote_controller, int);
				MEMBER(votes_dirty, client::vote_controller, bool);
				MEMBER(type_dirty, client::vote_controller, bool);
				MEMBER(is_yes_no_vote, client::vote_controller, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class vote_controller : public base_entity

			class map_veto_pick_controller : public base_entity
			{
			public:
				MEMBER(draft_type, client::map_veto_pick_controller, int);
				MEMBER(team_winning_coin_toss, client::map_veto_pick_controller, int);
				MEMBER_ARR(team_with_first_choice_arr, client::map_veto_pick_controller, 64, int);
				MEMBER_ARR(vote_map_ids_list_arr, client::map_veto_pick_controller, 7, int);
				MEMBER_ARR(account_ids_arr, client::map_veto_pick_controller, 64, int);
				MEMBER_ARR(map_id0_arr, client::map_veto_pick_controller, 64, int);
				MEMBER_ARR(map_id1_arr, client::map_veto_pick_controller, 64, int);
				MEMBER_ARR(map_id2_arr, client::map_veto_pick_controller, 64, int);
				MEMBER_ARR(map_id3_arr, client::map_veto_pick_controller, 64, int);
				MEMBER_ARR(map_id4_arr, client::map_veto_pick_controller, 64, int);
				MEMBER_ARR(map_id5_arr, client::map_veto_pick_controller, 64, int);
				MEMBER_ARR(starting_side0_arr, client::map_veto_pick_controller, 64, int);
				MEMBER(current_phase, client::map_veto_pick_controller, int);
				MEMBER(phase_start_tick, client::map_veto_pick_controller, int);
				MEMBER(phase_duration_ticks, client::map_veto_pick_controller, int);
				MEMBER(post_data_update_tick, client::map_veto_pick_controller, int);
				MEMBER(disabled_hud, client::map_veto_pick_controller, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class map_veto_pick_controller : public base_entity

			class csgo_team_preview_camera : public csgo_map_preview_camera_path
			{
			public:
				MEMBER(variant, client::csgo_team_preview_camera, int);
				MEMBER(dof_enabled, client::csgo_team_preview_camera, bool);
				MEMBER(dof_near_blurry, client::csgo_team_preview_camera, float);
				MEMBER(dof_near_crisp, client::csgo_team_preview_camera, float);
				MEMBER(dof_far_crisp, client::csgo_team_preview_camera, float);
				MEMBER(dof_far_blurry, client::csgo_team_preview_camera, float);
				MEMBER(dof_tilt_to_ground, client::csgo_team_preview_camera, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class csgo_team_preview_camera : public csgo_map_preview_camera_path

			class csgo_team_select_camera : public csgo_team_preview_camera
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class csgo_team_select_camera : public csgo_team_preview_camera

			class csgo_terrorist_team_intro_camera : public csgo_team_preview_camera
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class csgo_terrorist_team_intro_camera : public csgo_team_preview_camera

			class csgo_terrorist_wingman_intro_camera : public csgo_team_preview_camera
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class csgo_terrorist_wingman_intro_camera : public csgo_team_preview_camera

			class csgo_counter_terrorist_team_intro_camera : public csgo_team_preview_camera
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class csgo_counter_terrorist_team_intro_camera : public csgo_team_preview_camera

			class csgo_counter_terrorist_wingman_intro_camera : public csgo_team_preview_camera
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class csgo_counter_terrorist_wingman_intro_camera : public csgo_team_preview_camera

			class csgo_end_of_match_camera : public csgo_team_preview_camera
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class csgo_end_of_match_camera : public csgo_team_preview_camera

			class csgo_end_of_match_character_position : public csgo_team_preview_character_position
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class csgo_end_of_match_character_position : public csgo_team_preview_character_position

			class csgo_end_of_match_lineup_endpoint : public base_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class csgo_end_of_match_lineup_endpoint : public base_entity

			class csgo_end_of_match_lineup_start : public csgo_end_of_match_lineup_endpoint
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class csgo_end_of_match_lineup_start : public csgo_end_of_match_lineup_endpoint

			class csgo_end_of_match_lineup_end : public csgo_end_of_match_lineup_endpoint
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class csgo_end_of_match_lineup_end : public csgo_end_of_match_lineup_endpoint

			class csm_fov_override : public base_entity
			{
			public:
				MEMBER(camera_name, client::csm_fov_override, cutl_string);
				MEMBER(csm_fov_override_value, client::csm_fov_override, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class csm_fov_override : public base_entity

			class point_entity : public base_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class point_entity : public base_entity

			class env_combined_light_probe_volume : public base_entity
			{
			public:
				MEMBER(color, client::env_combined_light_probe_volume, color);
				MEMBER(brightness, client::env_combined_light_probe_volume, float);
				MEMBER(h_cubemap_texture, client::env_combined_light_probe_volume, cstrong_handle<info_for_resource_type_ctexture_base>);
				MEMBER(custom_cubemap_texture, client::env_combined_light_probe_volume, bool);
				MEMBER(h_light_probe_texture, client::env_combined_light_probe_volume, cstrong_handle<info_for_resource_type_ctexture_base>);
				MEMBER(h_light_probe_direct_light_indices_texture, client::env_combined_light_probe_volume, cstrong_handle<info_for_resource_type_ctexture_base>);
				MEMBER(h_light_probe_direct_light_scalars_texture, client::env_combined_light_probe_volume, cstrong_handle<info_for_resource_type_ctexture_base>);
				MEMBER(h_light_probe_direct_light_shadows_texture, client::env_combined_light_probe_volume, cstrong_handle<info_for_resource_type_ctexture_base>);
				MEMBER(v_box_mins, client::env_combined_light_probe_volume, vector);
				MEMBER(v_box_maxs, client::env_combined_light_probe_volume, vector);
				MEMBER(moveable, client::env_combined_light_probe_volume, bool);
				MEMBER(handshake, client::env_combined_light_probe_volume, int);
				MEMBER(env_cube_map_array_index, client::env_combined_light_probe_volume, int);
				MEMBER(priority, client::env_combined_light_probe_volume, int);
				MEMBER(start_disabled, client::env_combined_light_probe_volume, bool);
				MEMBER(edge_fade_dist, client::env_combined_light_probe_volume, float);
				MEMBER(v_edge_fade_dists, client::env_combined_light_probe_volume, vector);
				MEMBER(light_probe_size_x, client::env_combined_light_probe_volume, int);
				MEMBER(light_probe_size_y, client::env_combined_light_probe_volume, int);
				MEMBER(light_probe_size_z, client::env_combined_light_probe_volume, int);
				MEMBER(light_probe_atlas_x, client::env_combined_light_probe_volume, int);
				MEMBER(light_probe_atlas_y, client::env_combined_light_probe_volume, int);
				MEMBER(light_probe_atlas_z, client::env_combined_light_probe_volume, int);
				MEMBER(enabled, client::env_combined_light_probe_volume, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class env_combined_light_probe_volume : public base_entity

			class env_cubemap : public base_entity
			{
			public:
				MEMBER(h_cubemap_texture, client::env_cubemap, cstrong_handle<info_for_resource_type_ctexture_base>);
				MEMBER(custom_cubemap_texture, client::env_cubemap, bool);
				MEMBER(influence_radius, client::env_cubemap, float);
				MEMBER(v_box_project_mins, client::env_cubemap, vector);
				MEMBER(v_box_project_maxs, client::env_cubemap, vector);
				MEMBER(moveable, client::env_cubemap, bool);
				MEMBER(handshake, client::env_cubemap, int);
				MEMBER(env_cube_map_array_index, client::env_cubemap, int);
				MEMBER(priority, client::env_cubemap, int);
				MEMBER(edge_fade_dist, client::env_cubemap, float);
				MEMBER(v_edge_fade_dists, client::env_cubemap, vector);
				MEMBER(diffuse_scale, client::env_cubemap, float);
				MEMBER(start_disabled, client::env_cubemap, bool);
				MEMBER(default_env_map, client::env_cubemap, bool);
				MEMBER(default_spec_env_map, client::env_cubemap, bool);
				MEMBER(indoor_cube_map, client::env_cubemap, bool);
				MEMBER(copy_diffuse_from_default_cubemap, client::env_cubemap, bool);
				MEMBER(enabled, client::env_cubemap, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class env_cubemap : public base_entity

			class env_cubemap_box : public env_cubemap
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class env_cubemap_box : public env_cubemap

			class env_cubemap_fog : public base_entity
			{
			public:
				MEMBER(end_distance, client::env_cubemap_fog, float);
				MEMBER(start_distance, client::env_cubemap_fog, float);
				MEMBER(fog_falloff_exponent, client::env_cubemap_fog, float);
				MEMBER(height_fog_enabled, client::env_cubemap_fog, bool);
				MEMBER(fog_height_width, client::env_cubemap_fog, float);
				MEMBER(fog_height_end, client::env_cubemap_fog, float);
				MEMBER(fog_height_start, client::env_cubemap_fog, float);
				MEMBER(fog_height_exponent, client::env_cubemap_fog, float);
				MEMBER(lodbias, client::env_cubemap_fog, float);
				MEMBER(active, client::env_cubemap_fog, bool);
				MEMBER(start_disabled, client::env_cubemap_fog, bool);
				MEMBER(fog_max_opacity, client::env_cubemap_fog, float);
				MEMBER(cubemap_source_type, client::env_cubemap_fog, int);
				MEMBER(h_sky_material, client::env_cubemap_fog, cstrong_handle<info_for_resource_type_imaterial2>);
				MEMBER(isz_sky_entity, client::env_cubemap_fog, cutl_symbol_large);
				MEMBER(h_fog_cubemap_texture, client::env_cubemap_fog, cstrong_handle<info_for_resource_type_ctexture_base>);
				MEMBER(has_height_fog_end, client::env_cubemap_fog, bool);
				MEMBER(first_time, client::env_cubemap_fog, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class env_cubemap_fog : public base_entity

			class gradient_fog : public base_entity
			{
			public:
				MEMBER(h_gradient_fog_texture, client::gradient_fog, cstrong_handle<info_for_resource_type_ctexture_base>);
				MEMBER(fog_start_distance, client::gradient_fog, float);
				MEMBER(fog_end_distance, client::gradient_fog, float);
				MEMBER(height_fog_enabled, client::gradient_fog, bool);
				MEMBER(fog_start_height, client::gradient_fog, float);
				MEMBER(fog_end_height, client::gradient_fog, float);
				MEMBER(far_z, client::gradient_fog, float);
				MEMBER(fog_max_opacity, client::gradient_fog, float);
				MEMBER(fog_falloff_exponent, client::gradient_fog, float);
				MEMBER(fog_vertical_exponent, client::gradient_fog, float);
				MEMBER(fog_color, client::gradient_fog, color);
				MEMBER(fog_strength, client::gradient_fog, float);
				MEMBER(fade_time, client::gradient_fog, float);
				MEMBER(start_disabled, client::gradient_fog, bool);
				MEMBER(is_enabled, client::gradient_fog, bool);
				MEMBER(gradient_fog_needs_textures, client::gradient_fog, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class gradient_fog : public base_entity

			class env_light_probe_volume : public base_entity
			{
			public:
				MEMBER(h_light_probe_texture, client::env_light_probe_volume, cstrong_handle<info_for_resource_type_ctexture_base>);
				MEMBER(h_light_probe_direct_light_indices_texture, client::env_light_probe_volume, cstrong_handle<info_for_resource_type_ctexture_base>);
				MEMBER(h_light_probe_direct_light_scalars_texture, client::env_light_probe_volume, cstrong_handle<info_for_resource_type_ctexture_base>);
				MEMBER(h_light_probe_direct_light_shadows_texture, client::env_light_probe_volume, cstrong_handle<info_for_resource_type_ctexture_base>);
				MEMBER(v_box_mins, client::env_light_probe_volume, vector);
				MEMBER(v_box_maxs, client::env_light_probe_volume, vector);
				MEMBER(moveable, client::env_light_probe_volume, bool);
				MEMBER(handshake, client::env_light_probe_volume, int);
				MEMBER(priority, client::env_light_probe_volume, int);
				MEMBER(start_disabled, client::env_light_probe_volume, bool);
				MEMBER(light_probe_size_x, client::env_light_probe_volume, int);
				MEMBER(light_probe_size_y, client::env_light_probe_volume, int);
				MEMBER(light_probe_size_z, client::env_light_probe_volume, int);
				MEMBER(light_probe_atlas_x, client::env_light_probe_volume, int);
				MEMBER(light_probe_atlas_y, client::env_light_probe_volume, int);
				MEMBER(light_probe_atlas_z, client::env_light_probe_volume, int);
				MEMBER(enabled, client::env_light_probe_volume, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class env_light_probe_volume : public base_entity

			class player_visibility : public base_entity
			{
			public:
				MEMBER(visibility_strength, client::player_visibility, float);
				MEMBER(fog_distance_multiplier, client::player_visibility, float);
				MEMBER(fog_max_density_multiplier, client::player_visibility, float);
				MEMBER(fade_time, client::player_visibility, float);
				MEMBER(start_disabled, client::player_visibility, bool);
				MEMBER(is_enabled, client::player_visibility, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class player_visibility : public base_entity

			class tonemap_controller2 : public base_entity
			{
			public:
				MEMBER(auto_exposure_min, client::tonemap_controller2, float);
				MEMBER(auto_exposure_max, client::tonemap_controller2, float);
				MEMBER(tonemap_percent_target, client::tonemap_controller2, float);
				MEMBER(tonemap_percent_bright_pixels, client::tonemap_controller2, float);
				MEMBER(tonemap_min_avg_lum, client::tonemap_controller2, float);
				MEMBER(exposure_adaptation_speed_up, client::tonemap_controller2, float);
				MEMBER(exposure_adaptation_speed_down, client::tonemap_controller2, float);
				MEMBER(tonemap_evsmoothing_range, client::tonemap_controller2, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class tonemap_controller2 : public base_entity

			class env_volumetric_fog_controller : public base_entity
			{
			public:
				MEMBER(scattering, client::env_volumetric_fog_controller, float);
				MEMBER(anisotropy, client::env_volumetric_fog_controller, float);
				MEMBER(fade_speed, client::env_volumetric_fog_controller, float);
				MEMBER(draw_distance, client::env_volumetric_fog_controller, float);
				MEMBER(fade_in_start, client::env_volumetric_fog_controller, float);
				MEMBER(fade_in_end, client::env_volumetric_fog_controller, float);
				MEMBER(indirect_strength, client::env_volumetric_fog_controller, float);
				MEMBER(indirect_texture_dim_x, client::env_volumetric_fog_controller, int);
				MEMBER(indirect_texture_dim_y, client::env_volumetric_fog_controller, int);
				MEMBER(indirect_texture_dim_z, client::env_volumetric_fog_controller, int);
				MEMBER(v_box_mins, client::env_volumetric_fog_controller, vector);
				MEMBER(v_box_maxs, client::env_volumetric_fog_controller, vector);
				MEMBER(active, client::env_volumetric_fog_controller, bool);
				MEMBER(start_aniso_time, client::env_volumetric_fog_controller, game_time_t);
				MEMBER(start_scatter_time, client::env_volumetric_fog_controller, game_time_t);
				MEMBER(start_draw_distance_time, client::env_volumetric_fog_controller, game_time_t);
				MEMBER(start_anisotropy, client::env_volumetric_fog_controller, float);
				MEMBER(start_scattering, client::env_volumetric_fog_controller, float);
				MEMBER(start_draw_distance, client::env_volumetric_fog_controller, float);
				MEMBER(default_anisotropy, client::env_volumetric_fog_controller, float);
				MEMBER(default_scattering, client::env_volumetric_fog_controller, float);
				MEMBER(default_draw_distance, client::env_volumetric_fog_controller, float);
				MEMBER(start_disabled, client::env_volumetric_fog_controller, bool);
				MEMBER(enable_indirect, client::env_volumetric_fog_controller, bool);
				MEMBER(is_master, client::env_volumetric_fog_controller, bool);
				MEMBER(h_fog_indirect_texture, client::env_volumetric_fog_controller, cstrong_handle<info_for_resource_type_ctexture_base>);
				MEMBER(force_refresh_count, client::env_volumetric_fog_controller, int);
				MEMBER(first_time, client::env_volumetric_fog_controller, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class env_volumetric_fog_controller : public base_entity

			class env_volumetric_fog_volume : public base_entity
			{
			public:
				MEMBER(active, client::env_volumetric_fog_volume, bool);
				MEMBER(v_box_mins, client::env_volumetric_fog_volume, vector);
				MEMBER(v_box_maxs, client::env_volumetric_fog_volume, vector);
				MEMBER(start_disabled, client::env_volumetric_fog_volume, bool);
				MEMBER(strength, client::env_volumetric_fog_volume, float);
				MEMBER(falloff_shape, client::env_volumetric_fog_volume, int);
				MEMBER(falloff_exponent, client::env_volumetric_fog_volume, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class env_volumetric_fog_volume : public base_entity

			class fog_controller : public base_entity
			{
			public:
				MEMBER(fog, client::fog_controller, fogparams_t);
				MEMBER(use_angles, client::fog_controller, bool);
				MEMBER(changed_variables, client::fog_controller, int);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class fog_controller : public base_entity

			class cinfo_target : public point_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cinfo_target : public point_entity

			class cinfo_particle_target : public point_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cinfo_particle_target : public point_entity

			class info_visibility_box : public base_entity
			{
			public:
				MEMBER(mode, client::info_visibility_box, int);
				MEMBER(v_box_size, client::info_visibility_box, vector);
				MEMBER(enabled, client::info_visibility_box, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class info_visibility_box : public base_entity

			class cinfo_world_layer : public base_entity
			{
			public:
				MEMBER(output_on_entities_spawned, client::cinfo_world_layer, centity_iooutput);
				MEMBER(world_name, client::cinfo_world_layer, cutl_symbol_large);
				MEMBER(layer_name, client::cinfo_world_layer, cutl_symbol_large);
				MEMBER(world_layer_visible, client::cinfo_world_layer, bool);
				MEMBER(entities_spawned, client::cinfo_world_layer, bool);
				MEMBER(create_as_child_spawn_group, client::cinfo_world_layer, bool);
				MEMBER(h_layer_spawn_group, client::cinfo_world_layer, uint32_t);
				MEMBER(world_layer_actually_visible, client::cinfo_world_layer, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cinfo_world_layer : public base_entity

			class point_camera : public base_entity
			{
			public:
				MEMBER(fov, client::point_camera, float);
				MEMBER(resolution, client::point_camera, float);
				MEMBER(fog_enable, client::point_camera, bool);
				MEMBER(fog_color, client::point_camera, color);
				MEMBER(fog_start, client::point_camera, float);
				MEMBER(fog_end, client::point_camera, float);
				MEMBER(fog_max_density, client::point_camera, float);
				MEMBER(active, client::point_camera, bool);
				MEMBER(use_screen_aspect_ratio, client::point_camera, bool);
				MEMBER(aspect_ratio, client::point_camera, float);
				MEMBER(no_sky, client::point_camera, bool);
				MEMBER(brightness, client::point_camera, float);
				MEMBER(zfar, client::point_camera, float);
				MEMBER(znear, client::point_camera, float);
				MEMBER(can_hltvuse, client::point_camera, bool);
				MEMBER(dof_enabled, client::point_camera, bool);
				MEMBER(dof_near_blurry, client::point_camera, float);
				MEMBER(dof_near_crisp, client::point_camera, float);
				MEMBER(dof_far_crisp, client::point_camera, float);
				MEMBER(dof_far_blurry, client::point_camera, float);
				MEMBER(dof_tilt_to_ground, client::point_camera, float);
				MEMBER(target_fov, client::point_camera, float);
				MEMBER(degrees_per_second, client::point_camera, float);
				MEMBER(is_on, client::point_camera, bool);
				MEMBER(next_ptr, client::point_camera, point_camera*);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class point_camera : public base_entity

			class point_camera_vfov : public point_camera
			{
			public:
				MEMBER(vertical_fov, client::point_camera_vfov, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class point_camera_vfov : public point_camera

			class cpoint_template : public clogical_entity
			{
			public:
				MEMBER(isz_world_name, client::cpoint_template, cutl_symbol_large);
				MEMBER(isz_source2_entity_lump_name, client::cpoint_template, cutl_symbol_large);
				MEMBER(isz_entity_filter_name, client::cpoint_template, cutl_symbol_large);
				MEMBER(timeout_interval, client::cpoint_template, float);
				MEMBER(asynchronously_spawn_entities, client::cpoint_template, bool);
				MEMBER(output_on_spawned, client::cpoint_template, centity_iooutput);
				MEMBER(client_only_entity_behavior, client::cpoint_template, point_template_client_only_entity_behavior_t);
				MEMBER(owner_spawn_group_type, client::cpoint_template, point_template_owner_spawn_group_type_t);
				MEMBER(created_spawn_group_handles, client::cpoint_template, cutl_vector<uint32_t>);
				MEMBER(spawned_entity_handles, client::cpoint_template, cutl_vector<centity_handle>);
				MEMBER(script_spawn_callback, client::cpoint_template, hscript);
				MEMBER(script_callback_scope, client::cpoint_template, hscript);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cpoint_template : public clogical_entity

			class sound_area_entity_base : public base_entity
			{
			public:
				MEMBER(disabled, client::sound_area_entity_base, bool);
				MEMBER(was_enabled, client::sound_area_entity_base, bool);
				MEMBER(isz_sound_area_type, client::sound_area_entity_base, cutl_symbol_large);
				MEMBER(v_pos, client::sound_area_entity_base, vector);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class sound_area_entity_base : public base_entity

			class sound_area_entity_sphere : public sound_area_entity_base
			{
			public:
				MEMBER(radius, client::sound_area_entity_sphere, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class sound_area_entity_sphere : public sound_area_entity_base

			class sound_area_entity_oriented_box : public sound_area_entity_base
			{
			public:
				MEMBER(v_min, client::sound_area_entity_oriented_box, vector);
				MEMBER(v_max, client::sound_area_entity_oriented_box, vector);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class sound_area_entity_oriented_box : public sound_area_entity_base

			class team : public base_entity
			{
			public:
				MEMBER(a_player_controllers, client::team, network_utl_vector_base<chandle<cbase_player_controller>>);
				MEMBER(a_players, client::team, network_utl_vector_base<chandle<base_player_pawn>>);
				MEMBER(score, client::team, int);
				MEMBER_ARR(teamname_arr, client::team, 129, char);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class team : public base_entity

			class cbase_player_controller : public base_entity
			{
			public:
				MEMBER(final_predicted_tick, client::cbase_player_controller, int);
				MEMBER(command_context, client::cbase_player_controller, command_context);
				MEMBER(in_buttons_which_are_toggles, client::cbase_player_controller, uint64_t);
				MEMBER(tick_base, client::cbase_player_controller, uint32_t);
				MEMBER(h_pawn, client::cbase_player_controller, chandle<base_player_pawn>);
				MEMBER(h_predicted_pawn, client::cbase_player_controller, chandle<base_player_pawn>);
				MEMBER(split_screen_slot, client::cbase_player_controller, csplit_screen_slot);
				MEMBER(h_split_owner, client::cbase_player_controller, chandle<cbase_player_controller>);
				MEMBER(h_split_screen_players, client::cbase_player_controller, cutl_vector<chandle<cbase_player_controller>>);
				MEMBER(is_hltv, client::cbase_player_controller, bool);
				MEMBER(connected, client::cbase_player_controller, player_connected_state);
				MEMBER_ARR(isz_player_name_arr, client::cbase_player_controller, 128, char);
				MEMBER(steam_id, client::cbase_player_controller, uint64_t);
				MEMBER(is_local_player_controller, client::cbase_player_controller, bool);
				MEMBER(desired_fov, client::cbase_player_controller, uint32_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbase_player_controller : public base_entity

			class cbase_player_vdata : public centity_subclass_vdata_base
			{
			public:
				MEMBER(s_model_name, client::cbase_player_vdata, cresource_name_typed<cweak_handle<info_for_resource_type_cmodel>>);
				MEMBER(head_damage_multiplier, client::cbase_player_vdata, cskill_float);
				MEMBER(chest_damage_multiplier, client::cbase_player_vdata, cskill_float);
				MEMBER(stomach_damage_multiplier, client::cbase_player_vdata, cskill_float);
				MEMBER(arm_damage_multiplier, client::cbase_player_vdata, cskill_float);
				MEMBER(leg_damage_multiplier, client::cbase_player_vdata, cskill_float);
				MEMBER(hold_breath_time, client::cbase_player_vdata, float);
				MEMBER(drowning_damage_interval, client::cbase_player_vdata, float);
				MEMBER(drowning_damage_initial, client::cbase_player_vdata, int);
				MEMBER(drowning_damage_max, client::cbase_player_vdata, int);
				MEMBER(water_speed, client::cbase_player_vdata, int);
				MEMBER(use_range, client::cbase_player_vdata, float);
				MEMBER(use_angle_tolerance, client::cbase_player_vdata, float);
				MEMBER(crouch_time, client::cbase_player_vdata, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbase_player_vdata : public centity_subclass_vdata_base

			class cbase_player_weapon_vdata : public centity_subclass_vdata_base
			{
			public:
				MEMBER(world_model, client::cbase_player_weapon_vdata, cresource_name_typed<cweak_handle<info_for_resource_type_cmodel>>);
				MEMBER(built_right_handed, client::cbase_player_weapon_vdata, bool);
				MEMBER(allow_flipping, client::cbase_player_weapon_vdata, bool);
				MEMBER(is_full_auto, client::cbase_player_weapon_vdata, bool);
				MEMBER(num_bullets, client::cbase_player_weapon_vdata, int);
				MEMBER(s_muzzle_attachment, client::cbase_player_weapon_vdata, cutl_string);
				MEMBER(muzzle_flash_particle, client::cbase_player_weapon_vdata, cresource_name_typed<cweak_handle<info_for_resource_type_iparticle_system_definition>>);
				MEMBER(flags, client::cbase_player_weapon_vdata, item_flag_types_t);
				MEMBER(primary_ammo_type, client::cbase_player_weapon_vdata, ammo_index_t);
				MEMBER(secondary_ammo_type, client::cbase_player_weapon_vdata, ammo_index_t);
				MEMBER(max_clip1, client::cbase_player_weapon_vdata, int);
				MEMBER(max_clip2, client::cbase_player_weapon_vdata, int);
				MEMBER(default_clip1, client::cbase_player_weapon_vdata, int);
				MEMBER(default_clip2, client::cbase_player_weapon_vdata, int);
				MEMBER(weight, client::cbase_player_weapon_vdata, int);
				MEMBER(auto_switch_to, client::cbase_player_weapon_vdata, bool);
				MEMBER(auto_switch_from, client::cbase_player_weapon_vdata, bool);
				MEMBER(rumble_effect, client::cbase_player_weapon_vdata, rumble_effect_t);
				MEMBER(a_shoot_sounds, client::cbase_player_weapon_vdata, cutl_map<weapon_sound_t, _csound_event_name>);
				MEMBER(slot, client::cbase_player_weapon_vdata, int);
				MEMBER(position, client::cbase_player_weapon_vdata, int);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbase_player_weapon_vdata : public centity_subclass_vdata_base

			class cbody_component_base_anim_graph : public cbody_component_skeleton_instance
			{
			public:
				MEMBER(animation_controller, client::cbody_component_base_anim_graph, cbase_anim_graph_controller);
				MEMBER(_m_p_chain_entity, client::cbody_component_base_anim_graph, cnetwork_var_chainer);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbody_component_base_anim_graph : public cbody_component_skeleton_instance

			class base_model_entity : public base_entity
			{
			public:
				MEMBER(m_CRenderComponent, client::base_model_entity, crender_component*);
				MEMBER(m_CHitboxComponent, client::base_model_entity, chitbox_component);
				MEMBER(m_bInitModelEffects, client::base_model_entity, bool);
				MEMBER(m_bIsStaticProp, client::base_model_entity, bool);
				MEMBER(m_nLastAddDecal, client::base_model_entity, int);
				MEMBER(m_nDecalsAdded, client::base_model_entity, int);
				MEMBER(m_iOldHealth, client::base_model_entity, int);
				MEMBER(m_nRenderMode, client::base_model_entity, render_mode_t);
				MEMBER(m_nRenderFX, client::base_model_entity, render_fx_t);
				MEMBER(m_bAllowFadeInView, client::base_model_entity, bool);
				MEMBER(m_clrRender, client::base_model_entity, color);
				MEMBER(m_vecRenderAttributes, client::base_model_entity, utl_vector_embedded_network_var<entity_render_attribute_t>);
				MEMBER(m_bRenderToCubemaps, client::base_model_entity, bool);
				MEMBER(m_Collision, client::base_model_entity, ccollision_property);
				MEMBER(m_Glow, client::base_model_entity, cglow_property);
				MEMBER(m_flGlowBackfaceMult, client::base_model_entity, float);
				MEMBER(m_fadeMinDist, client::base_model_entity, float);
				MEMBER(m_fadeMaxDist, client::base_model_entity, float);
				MEMBER(m_flFadeScale, client::base_model_entity, float);
				MEMBER(m_flShadowStrength, client::base_model_entity, float);
				MEMBER(m_nObjectCulling, client::base_model_entity, uint8_t);
				MEMBER(m_nAddDecal, client::base_model_entity, int);
				MEMBER(m_vDecalPosition, client::base_model_entity, vector);
				MEMBER(m_vDecalForwardAxis, client::base_model_entity, vector);
				MEMBER(m_flDecalHealBloodRate, client::base_model_entity, float);
				MEMBER(m_flDecalHealHeightRate, client::base_model_entity, float);
				MEMBER(m_ConfigEntitiesToPropagateMaterialDecalsTo, client::base_model_entity, network_utl_vector_base<chandle<base_model_entity>>);
				MEMBER(m_vecViewOffset, client::base_model_entity, cnetwork_view_offset_vector);
				MEMBER(m_pClientAlphaProperty, client::base_model_entity, cclient_alpha_property*);
				MEMBER(m_ClientOverrideTint, client::base_model_entity, color);
				MEMBER(m_bUseClientOverrideTint, client::base_model_entity, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class base_model_entity : public base_entity

			class cserver_only_model_entity : public base_model_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cserver_only_model_entity : public base_model_entity

			class model_point_entity : public base_model_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class model_point_entity : public base_model_entity

			class clogic_relay : public clogical_entity
			{
			public:
				MEMBER(on_trigger, client::clogic_relay, centity_iooutput);
				MEMBER(on_spawn, client::clogic_relay, centity_iooutput);
				MEMBER(disabled, client::clogic_relay, bool);
				MEMBER(wait_for_refire, client::clogic_relay, bool);
				MEMBER(trigger_once, client::clogic_relay, bool);
				MEMBER(fast_retrigger, client::clogic_relay, bool);
				MEMBER(passthough_caller, client::clogic_relay, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class clogic_relay : public clogical_entity

			class particle_system : public base_model_entity
			{
			public:
				MEMBER_ARR(snapshot_file_name_arr, client::particle_system, 512, char);
				MEMBER(active, client::particle_system, bool);
				MEMBER(frozen, client::particle_system, bool);
				MEMBER(freeze_transition_duration, client::particle_system, float);
				MEMBER(stop_type, client::particle_system, int);
				MEMBER(animate_during_gameplay_pause, client::particle_system, bool);
				MEMBER(effect_index, client::particle_system, cstrong_handle<info_for_resource_type_iparticle_system_definition>);
				MEMBER(start_time, client::particle_system, game_time_t);
				MEMBER(pre_sim_time, client::particle_system, float);
				MEMBER_ARR(v_server_control_points_arr, client::particle_system, 4, vector);
				MEMBER_ARR(server_control_point_assignments_arr, client::particle_system, 4, uint8_t);
				MEMBER_ARR(h_control_point_ents_arr, client::particle_system, 64, chandle<base_entity>);
				MEMBER(no_save, client::particle_system, bool);
				MEMBER(no_freeze, client::particle_system, bool);
				MEMBER(no_ramp, client::particle_system, bool);
				MEMBER(start_active, client::particle_system, bool);
				MEMBER(isz_effect_name, client::particle_system, cutl_symbol_large);
				MEMBER_ARR(isz_control_point_names_arr, client::particle_system, 64, cutl_symbol_large);
				MEMBER(data_cp, client::particle_system, int);
				MEMBER(vec_data_cpvalue, client::particle_system, vector);
				MEMBER(tint_cp, client::particle_system, int);
				MEMBER(clr_tint, client::particle_system, color);
				MEMBER(old_active, client::particle_system, bool);
				MEMBER(old_frozen, client::particle_system, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class particle_system : public base_model_entity

			class path_particle_rope : public base_entity
			{
			public:
				MEMBER(start_active, client::path_particle_rope, bool);
				MEMBER(max_simulation_time, client::path_particle_rope, float);
				MEMBER(isz_effect_name, client::path_particle_rope, cutl_symbol_large);
				MEMBER(path_nodes_name, client::path_particle_rope, cutl_vector<cutl_symbol_large>);
				MEMBER(particle_spacing, client::path_particle_rope, float);
				MEMBER(slack, client::path_particle_rope, float);
				MEMBER(radius, client::path_particle_rope, float);
				MEMBER(color_tint, client::path_particle_rope, color);
				MEMBER(effect_state, client::path_particle_rope, int);
				MEMBER(effect_index, client::path_particle_rope, cstrong_handle<info_for_resource_type_iparticle_system_definition>);
				MEMBER(path_nodes_position, client::path_particle_rope, network_utl_vector_base<vector>);
				MEMBER(path_nodes_tangent_in, client::path_particle_rope, network_utl_vector_base<vector>);
				MEMBER(path_nodes_tangent_out, client::path_particle_rope, network_utl_vector_base<vector>);
				MEMBER(path_nodes_color, client::path_particle_rope, network_utl_vector_base<vector>);
				MEMBER(path_nodes_pin_enabled, client::path_particle_rope, network_utl_vector_base<bool>);
				MEMBER(path_nodes_radius_scale, client::path_particle_rope, network_utl_vector_base<float>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class path_particle_rope : public base_entity

			class path_particle_rope_alias_path_particle_rope_clientside : public path_particle_rope
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class path_particle_rope_alias_path_particle_rope_clientside : public path_particle_rope

			class dynamic_light : public base_model_entity
			{
			public:
				MEMBER(flags, client::dynamic_light, uint8_t);
				MEMBER(light_style, client::dynamic_light, uint8_t);
				MEMBER(radius, client::dynamic_light, float);
				MEMBER(exponent, client::dynamic_light, int);
				MEMBER(inner_angle, client::dynamic_light, float);
				MEMBER(outer_angle, client::dynamic_light, float);
				MEMBER(spot_radius, client::dynamic_light, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class dynamic_light : public base_model_entity

			class env_screen_overlay : public point_entity
			{
			public:
				MEMBER_ARR(isz_overlay_names_arr, client::env_screen_overlay, 10, cutl_symbol_large);
				MEMBER_ARR(overlay_times_arr, client::env_screen_overlay, 10, float);
				MEMBER(start_time, client::env_screen_overlay, game_time_t);
				MEMBER(desired_overlay, client::env_screen_overlay, int);
				MEMBER(is_active, client::env_screen_overlay, bool);
				MEMBER(was_active, client::env_screen_overlay, bool);
				MEMBER(cached_desired_overlay, client::env_screen_overlay, int);
				MEMBER(current_overlay, client::env_screen_overlay, int);
				MEMBER(current_overlay_time, client::env_screen_overlay, game_time_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class env_screen_overlay : public point_entity

			class func_track_train : public base_model_entity
			{
			public:
				MEMBER(long_axis, client::func_track_train, int);
				MEMBER(radius, client::func_track_train, float);
				MEMBER(line_length, client::func_track_train, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class func_track_train : public base_model_entity

			class light_glow : public base_model_entity
			{
			public:
				MEMBER(horizontal_size, client::light_glow, uint32_t);
				MEMBER(vertical_size, client::light_glow, uint32_t);
				MEMBER(min_dist, client::light_glow, uint32_t);
				MEMBER(max_dist, client::light_glow, uint32_t);
				MEMBER(outer_max_dist, client::light_glow, uint32_t);
				MEMBER(glow_proxy_size, client::light_glow, float);
				MEMBER(hdrcolor_scale, client::light_glow, float);
				MEMBER(glow, client::light_glow, light_glow_overlay);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class light_glow : public base_model_entity

			class ragdoll_manager : public base_entity
			{
			public:
				MEMBER(current_max_ragdoll_count, client::ragdoll_manager, char);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ragdoll_manager : public base_entity

			class spotlight_end : public base_model_entity
			{
			public:
				MEMBER(light_scale, client::spotlight_end, float);
				MEMBER(radius, client::spotlight_end, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class spotlight_end : public base_model_entity

			class point_value_remapper : public base_entity
			{
			public:
				MEMBER(disabled, client::point_value_remapper, bool);
				MEMBER(disabled_old, client::point_value_remapper, bool);
				MEMBER(update_on_client, client::point_value_remapper, bool);
				MEMBER(input_type, client::point_value_remapper, value_remapper_input_type_t);
				MEMBER(h_remap_line_start, client::point_value_remapper, chandle<base_entity>);
				MEMBER(h_remap_line_end, client::point_value_remapper, chandle<base_entity>);
				MEMBER(maximum_change_per_second, client::point_value_remapper, float);
				MEMBER(disengage_distance, client::point_value_remapper, float);
				MEMBER(engage_distance, client::point_value_remapper, float);
				MEMBER(requires_use_key, client::point_value_remapper, bool);
				MEMBER(output_type, client::point_value_remapper, value_remapper_output_type_t);
				MEMBER(h_output_entities, client::point_value_remapper, network_utl_vector_base<chandle<base_entity>>);
				MEMBER(haptics_type, client::point_value_remapper, value_remapper_haptics_type_t);
				MEMBER(momentum_type, client::point_value_remapper, value_remapper_momentum_type_t);
				MEMBER(momentum_modifier, client::point_value_remapper, float);
				MEMBER(snap_value, client::point_value_remapper, float);
				MEMBER(current_momentum, client::point_value_remapper, float);
				MEMBER(ratchet_type, client::point_value_remapper, value_remapper_ratchet_type_t);
				MEMBER(ratchet_offset, client::point_value_remapper, float);
				MEMBER(input_offset, client::point_value_remapper, float);
				MEMBER(engaged, client::point_value_remapper, bool);
				MEMBER(first_update, client::point_value_remapper, bool);
				MEMBER(previous_value, client::point_value_remapper, float);
				MEMBER(previous_update_tick_time, client::point_value_remapper, game_time_t);
				MEMBER(vec_previous_test_point, client::point_value_remapper, vector);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class point_value_remapper : public base_entity

			class point_world_text : public model_point_entity
			{
			public:
				MEMBER(force_recreate_next_update, client::point_world_text, bool);
				MEMBER_ARR(message_text_arr, client::point_world_text, 512, char);
				MEMBER_ARR(font_name_arr, client::point_world_text, 64, char);
				MEMBER(enabled, client::point_world_text, bool);
				MEMBER(fullbright, client::point_world_text, bool);
				MEMBER(world_units_per_px, client::point_world_text, float);
				MEMBER(font_size, client::point_world_text, float);
				MEMBER(depth_offset, client::point_world_text, float);
				MEMBER(color, client::point_world_text, color);
				MEMBER(justify_horizontal, client::point_world_text, point_world_text_justify_horizontal_t);
				MEMBER(justify_vertical, client::point_world_text, point_world_text_justify_vertical_t);
				MEMBER(reorient_mode, client::point_world_text, point_world_text_reorient_mode_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class point_world_text : public model_point_entity

			class handle_test : public base_entity
			{
			public:
				MEMBER(handle, client::handle_test, chandle<base_entity>);
				MEMBER(send_handle, client::handle_test, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class handle_test : public base_entity

			class env_wind : public base_entity
			{
			public:
				MEMBER(env_wind_shared, client::env_wind, env_wind_shared);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class env_wind : public base_entity

			class base_toggle : public base_model_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class base_toggle : public base_model_entity

			class base_button : public base_toggle
			{
			public:
				MEMBER(glow_entity, client::base_button, chandle<base_model_entity>);
				MEMBER(usable, client::base_button, bool);
				MEMBER(display_text, client::base_button, cutl_symbol_large);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class base_button : public base_toggle

			class precipitation_blocker : public base_model_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class precipitation_blocker : public base_model_entity

			class entity_dissolve : public base_model_entity
			{
			public:
				MEMBER(start_time, client::entity_dissolve, game_time_t);
				MEMBER(fade_in_start, client::entity_dissolve, float);
				MEMBER(fade_in_length, client::entity_dissolve, float);
				MEMBER(fade_out_model_start, client::entity_dissolve, float);
				MEMBER(fade_out_model_length, client::entity_dissolve, float);
				MEMBER(fade_out_start, client::entity_dissolve, float);
				MEMBER(fade_out_length, client::entity_dissolve, float);
				MEMBER(next_spark_time, client::entity_dissolve, game_time_t);
				MEMBER(dissolve_type, client::entity_dissolve, entity_disolve_type_t);
				MEMBER(v_dissolver_origin, client::entity_dissolve, vector);
				MEMBER(magnitude, client::entity_dissolve, uint32_t);
				MEMBER(core_explode, client::entity_dissolve, bool);
				MEMBER(linked_to_server_ent, client::entity_dissolve, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class entity_dissolve : public base_model_entity

			class env_projected_texture : public model_point_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class env_projected_texture : public model_point_entity

			class env_decal : public base_model_entity
			{
			public:
				MEMBER(h_decal_material, client::env_decal, cstrong_handle<info_for_resource_type_imaterial2>);
				MEMBER(width, client::env_decal, float);
				MEMBER(height, client::env_decal, float);
				MEMBER(depth, client::env_decal, float);
				MEMBER(render_order, client::env_decal, uint32_t);
				MEMBER(project_on_world, client::env_decal, bool);
				MEMBER(project_on_characters, client::env_decal, bool);
				MEMBER(project_on_water, client::env_decal, bool);
				MEMBER(depth_sort_bias, client::env_decal, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class env_decal : public base_model_entity

			class func_brush : public base_model_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class func_brush : public base_model_entity

			class func_electrified_volume : public func_brush
			{
			public:
				MEMBER(ambient_effect, client::func_electrified_volume, particle_index_t);
				MEMBER(effect_name, client::func_electrified_volume, cutl_symbol_large);
				MEMBER(state, client::func_electrified_volume, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class func_electrified_volume : public func_brush

			class func_rotating : public base_model_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class func_rotating : public base_model_entity

			class breakable : public base_model_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class breakable : public base_model_entity

			class phys_box : public breakable
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class phys_box : public breakable

			class rope_keyframe : public base_model_entity
			{
			public:
				MEMBER(links_touching_something, client::rope_keyframe, cbit_vec<10>);
				MEMBER(links_touching_something_1, client::rope_keyframe, int);
				MEMBER(apply_wind, client::rope_keyframe, bool);
				MEMBER(prev_locked_points, client::rope_keyframe, int);
				MEMBER(force_point_move_counter, client::rope_keyframe, int);
				MEMBER_ARR(prev_end_point_pos_arr, client::rope_keyframe, 2, bool);
				MEMBER_ARR(v_prev_end_point_pos_arr, client::rope_keyframe, 2, vector);
				MEMBER(cur_scroll, client::rope_keyframe, float);
				MEMBER(scroll_speed, client::rope_keyframe, float);
				MEMBER(rope_flags, client::rope_keyframe, uint16_t);
				MEMBER(rope_material_model_index, client::rope_keyframe, cstrong_handle<info_for_resource_type_imaterial2>);
				MEMBER_ARR(light_values_arr, client::rope_keyframe, 10, vector);
				MEMBER(segments, client::rope_keyframe, uint8_t);
				MEMBER(h_start_point, client::rope_keyframe, chandle<base_entity>);
				MEMBER(h_end_point, client::rope_keyframe, chandle<base_entity>);
				MEMBER(start_attachment, client::rope_keyframe, attachment_handle_t);
				MEMBER(end_attachment, client::rope_keyframe, attachment_handle_t);
				MEMBER(subdiv, client::rope_keyframe, uint8_t);
				MEMBER(rope_length, client::rope_keyframe, short);
				MEMBER(slack, client::rope_keyframe, short);
				MEMBER(texture_scale, client::rope_keyframe, float);
				MEMBER(locked_points, client::rope_keyframe, uint8_t);
				MEMBER(change_count, client::rope_keyframe, uint8_t);
				MEMBER(width, client::rope_keyframe, float);
				MEMBER(physics_delegate, client::rope_keyframe, rope_keyframe__cphysics_delegate);
				MEMBER(h_material, client::rope_keyframe, cstrong_handle<info_for_resource_type_imaterial2>);
				MEMBER(texture_height, client::rope_keyframe, int);
				MEMBER(vec_impulse, client::rope_keyframe, vector);
				MEMBER(vec_previous_impulse, client::rope_keyframe, vector);
				MEMBER(current_gust_timer, client::rope_keyframe, float);
				MEMBER(current_gust_lifetime, client::rope_keyframe, float);
				MEMBER(time_to_next_gust, client::rope_keyframe, float);
				MEMBER(v_wind_dir, client::rope_keyframe, vector);
				MEMBER(v_color_mod, client::rope_keyframe, vector);
				MEMBER_ARR(v_cached_end_point_attachment_pos_arr, client::rope_keyframe, 2, vector);
				MEMBER_ARR(v_cached_end_point_attachment_angle_arr, client::rope_keyframe, 2, qangle);
				MEMBER(constrain_between_endpoints, client::rope_keyframe, bool);
				MEMBER(end_point_attachment_positions_dirty, client::rope_keyframe, bool);
				MEMBER(end_point_attachment_angles_dirty, client::rope_keyframe, bool);
				MEMBER(new_data_this_frame, client::rope_keyframe, bool);
				MEMBER(physics_initted, client::rope_keyframe, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class rope_keyframe : public base_model_entity

			class scene_entity : public point_entity
			{
			public:
				MEMBER(is_playing_back, client::scene_entity, bool);
				MEMBER(paused, client::scene_entity, bool);
				MEMBER(multiplayer, client::scene_entity, bool);
				MEMBER(autogenerated, client::scene_entity, bool);
				MEMBER(force_client_time, client::scene_entity, float);
				MEMBER(scene_string_index, client::scene_entity, uint16_t);
				MEMBER(client_only, client::scene_entity, bool);
				MEMBER(h_owner, client::scene_entity, chandle<base_flex>);
				MEMBER(h_actor_list, client::scene_entity, network_utl_vector_base<chandle<base_flex>>);
				MEMBER(was_playing, client::scene_entity, bool);
				MEMBER(queued_events, client::scene_entity, cutl_vector<scene_entity__queued_events_t>);
				MEMBER(current_time, client::scene_entity, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class scene_entity : public point_entity

			class sun : public base_model_entity
			{
			public:
				MEMBER(fx_sssun_flare_effect_index, client::sun, particle_index_t);
				MEMBER(fx_sun_flare_effect_index, client::sun, particle_index_t);
				MEMBER(fdist_normalize, client::sun, float);
				MEMBER(v_sun_pos, client::sun, vector);
				MEMBER(v_direction, client::sun, vector);
				MEMBER(isz_effect_name, client::sun, cutl_symbol_large);
				MEMBER(isz_sseffect_name, client::sun, cutl_symbol_large);
				MEMBER(clr_overlay, client::sun, color);
				MEMBER(on, client::sun, bool);
				MEMBER(bmax_color, client::sun, bool);
				MEMBER(size, client::sun, float);
				MEMBER(haze_scale, client::sun, float);
				MEMBER(rotation, client::sun, float);
				MEMBER(hdrcolor_scale, client::sun, float);
				MEMBER(alpha_haze, client::sun, float);
				MEMBER(alpha_scale, client::sun, float);
				MEMBER(alpha_hdr, client::sun, float);
				MEMBER(far_zscale, client::sun, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class sun : public base_model_entity

			class base_trigger : public base_toggle
			{
			public:
				MEMBER(disabled, client::base_trigger, bool);
				MEMBER(client_side_predicted, client::base_trigger, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class base_trigger : public base_toggle

			class trigger_volume : public base_model_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class trigger_volume : public base_model_entity

			class trigger_multiple : public base_trigger
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class trigger_multiple : public base_trigger

			class trigger_lerp_object : public base_trigger
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class trigger_lerp_object : public base_trigger

			class beam : public base_model_entity
			{
			public:
				MEMBER(frame_rate, client::beam, float);
				MEMBER(hdrcolor_scale, client::beam, float);
				MEMBER(fire_time, client::beam, game_time_t);
				MEMBER(damage, client::beam, float);
				MEMBER(num_beam_ents, client::beam, uint8_t);
				MEMBER(query_handle_halo, client::beam, int);
				MEMBER(h_base_material, client::beam, cstrong_handle<info_for_resource_type_imaterial2>);
				MEMBER(halo_index, client::beam, cstrong_handle<info_for_resource_type_imaterial2>);
				MEMBER(beam_type, client::beam, beam_type_t);
				MEMBER(beam_flags, client::beam, uint32_t);
				MEMBER_ARR(h_attach_entity_arr, client::beam, 10, chandle<base_entity>);
				MEMBER_ARR(attach_index_arr, client::beam, 10, attachment_handle_t);
				MEMBER(width, client::beam, float);
				MEMBER(end_width, client::beam, float);
				MEMBER(fade_length, client::beam, float);
				MEMBER(halo_scale, client::beam, float);
				MEMBER(amplitude, client::beam, float);
				MEMBER(start_frame, client::beam, float);
				MEMBER(speed, client::beam, float);
				MEMBER(frame, client::beam, float);
				MEMBER(clip_style, client::beam, beam_clip_style_t);
				MEMBER(turned_off, client::beam, bool);
				MEMBER(vec_end_pos, client::beam, vector);
				MEMBER(h_end_entity, client::beam, chandle<base_entity>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class beam : public base_model_entity

			class func_ladder : public base_model_entity
			{
			public:
				MEMBER(vec_ladder_dir, client::func_ladder, vector);
				MEMBER(dismounts, client::func_ladder, cutl_vector<chandle<info_ladder_dismount>>);
				MEMBER(vec_local_top, client::func_ladder, vector);
				MEMBER(vec_player_mount_position_top, client::func_ladder, vector);
				MEMBER(vec_player_mount_position_bottom, client::func_ladder, vector);
				MEMBER(auto_ride_speed, client::func_ladder, float);
				MEMBER(disabled, client::func_ladder, bool);
				MEMBER(fake_ladder, client::func_ladder, bool);
				MEMBER(has_slack, client::func_ladder, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class func_ladder : public base_model_entity

			class cprecipitation_vdata : public centity_subclass_vdata_base
			{
			public:
				MEMBER(particle_precipitation_effect, client::cprecipitation_vdata, cresource_name_typed<cweak_handle<info_for_resource_type_iparticle_system_definition>>);
				MEMBER(inner_distance, client::cprecipitation_vdata, float);
				MEMBER(attach_type, client::cprecipitation_vdata, particle_attachment_t);
				MEMBER(batch_same_volume_type, client::cprecipitation_vdata, bool);
				MEMBER(rtenv_cp, client::cprecipitation_vdata, int);
				MEMBER(rtenv_cpcomponent, client::cprecipitation_vdata, int);
				MEMBER(modifier, client::cprecipitation_vdata, cutl_string);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cprecipitation_vdata : public centity_subclass_vdata_base

			class sprite : public base_model_entity
			{
			public:
				MEMBER(h_sprite_material, client::sprite, cstrong_handle<info_for_resource_type_imaterial2>);
				MEMBER(h_attached_to_entity, client::sprite, chandle<base_entity>);
				MEMBER(attachment, client::sprite, attachment_handle_t);
				MEMBER(sprite_framerate, client::sprite, float);
				MEMBER(frame, client::sprite, float);
				MEMBER(die_time, client::sprite, game_time_t);
				MEMBER(brightness, client::sprite, uint32_t);
				MEMBER(brightness_duration, client::sprite, float);
				MEMBER(sprite_scale, client::sprite, float);
				MEMBER(scale_duration, client::sprite, float);
				MEMBER(world_space_scale, client::sprite, bool);
				MEMBER(glow_proxy_size, client::sprite, float);
				MEMBER(hdrcolor_scale, client::sprite, float);
				MEMBER(last_time, client::sprite, game_time_t);
				MEMBER(max_frame, client::sprite, float);
				MEMBER(start_scale, client::sprite, float);
				MEMBER(dest_scale, client::sprite, float);
				MEMBER(scale_time_start, client::sprite, game_time_t);
				MEMBER(start_brightness, client::sprite, int);
				MEMBER(dest_brightness, client::sprite, int);
				MEMBER(brightness_time_start, client::sprite, game_time_t);
				MEMBER(h_old_sprite_material, client::sprite, cweak_handle<info_for_resource_type_imaterial2>);
				MEMBER(sprite_width, client::sprite, int);
				MEMBER(sprite_height, client::sprite, int);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class sprite : public base_model_entity

			class sprite_oriented : public sprite
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class sprite_oriented : public sprite

			class base_client_uientity : public base_model_entity
			{
			public:
				MEMBER(enabled, client::base_client_uientity, bool);
				MEMBER(dialog_xmlname, client::base_client_uientity, cutl_symbol_large);
				MEMBER(panel_class_name, client::base_client_uientity, cutl_symbol_large);
				MEMBER(panel_id, client::base_client_uientity, cutl_symbol_large);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class base_client_uientity : public base_model_entity

			class point_client_uidialog : public base_client_uientity
			{
			public:
				MEMBER(h_activator, client::point_client_uidialog, chandle<base_entity>);
				MEMBER(start_enabled, client::point_client_uidialog, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class point_client_uidialog : public base_client_uientity

			class point_client_uihud : public base_client_uientity
			{
			public:
				MEMBER(check_cssclasses, client::point_client_uihud, bool);
				MEMBER(ignore_input, client::point_client_uihud, bool);
				MEMBER(width, client::point_client_uihud, float);
				MEMBER(height, client::point_client_uihud, float);
				MEMBER(dpi, client::point_client_uihud, float);
				MEMBER(interact_distance, client::point_client_uihud, float);
				MEMBER(depth_offset, client::point_client_uihud, float);
				MEMBER(un_owner_context, client::point_client_uihud, uint32_t);
				MEMBER(un_horizontal_align, client::point_client_uihud, uint32_t);
				MEMBER(un_vertical_align, client::point_client_uihud, uint32_t);
				MEMBER(un_orientation, client::point_client_uihud, uint32_t);
				MEMBER(allow_interaction_from_all_scene_worlds, client::point_client_uihud, bool);
				MEMBER(vec_cssclasses, client::point_client_uihud, network_utl_vector_base<cutl_symbol_large>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class point_client_uihud : public base_client_uientity

			class point_client_uiworld_panel : public base_client_uientity
			{
			public:
				MEMBER(force_recreate_next_update, client::point_client_uiworld_panel, bool);
				MEMBER(move_view_to_player_next_think, client::point_client_uiworld_panel, bool);
				MEMBER(check_cssclasses, client::point_client_uiworld_panel, bool);
				MEMBER(anchor_delta_transform, client::point_client_uiworld_panel, ctransform);
				MEMBER(off_screen_indicator_ptr, client::point_client_uiworld_panel, cpoint_off_screen_indicator_ui*);
				MEMBER(ignore_input, client::point_client_uiworld_panel, bool);
				MEMBER(lit, client::point_client_uiworld_panel, bool);
				MEMBER(follow_player_across_teleport, client::point_client_uiworld_panel, bool);
				MEMBER(width, client::point_client_uiworld_panel, float);
				MEMBER(height, client::point_client_uiworld_panel, float);
				MEMBER(dpi, client::point_client_uiworld_panel, float);
				MEMBER(interact_distance, client::point_client_uiworld_panel, float);
				MEMBER(depth_offset, client::point_client_uiworld_panel, float);
				MEMBER(un_owner_context, client::point_client_uiworld_panel, uint32_t);
				MEMBER(un_horizontal_align, client::point_client_uiworld_panel, uint32_t);
				MEMBER(un_vertical_align, client::point_client_uiworld_panel, uint32_t);
				MEMBER(un_orientation, client::point_client_uiworld_panel, uint32_t);
				MEMBER(allow_interaction_from_all_scene_worlds, client::point_client_uiworld_panel, bool);
				MEMBER(vec_cssclasses, client::point_client_uiworld_panel, network_utl_vector_base<cutl_symbol_large>);
				MEMBER(opaque, client::point_client_uiworld_panel, bool);
				MEMBER(no_depth, client::point_client_uiworld_panel, bool);
				MEMBER(render_backface, client::point_client_uiworld_panel, bool);
				MEMBER(use_off_screen_indicator, client::point_client_uiworld_panel, bool);
				MEMBER(exclude_from_save_games, client::point_client_uiworld_panel, bool);
				MEMBER(grabbable, client::point_client_uiworld_panel, bool);
				MEMBER(only_render_to_texture, client::point_client_uiworld_panel, bool);
				MEMBER(disable_mip_gen, client::point_client_uiworld_panel, bool);
				MEMBER(explicit_image_layout, client::point_client_uiworld_panel, int);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class point_client_uiworld_panel : public base_client_uientity

			class cpoint_off_screen_indicator_ui : public point_client_uiworld_panel
			{
			public:
				MEMBER(been_enabled, client::cpoint_off_screen_indicator_ui, bool);
				MEMBER(hide, client::cpoint_off_screen_indicator_ui, bool);
				MEMBER(seen_target_time, client::cpoint_off_screen_indicator_ui, float);
				MEMBER(target_panel_ptr, client::cpoint_off_screen_indicator_ui, point_client_uiworld_panel*);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cpoint_off_screen_indicator_ui : public point_client_uiworld_panel

			class point_client_uiworld_text_panel : public point_client_uiworld_panel
			{
			public:
				MEMBER_ARR(message_text_arr, client::point_client_uiworld_text_panel, 512, char);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class point_client_uiworld_text_panel : public point_client_uiworld_panel

			class cinfo_offscreen_panorama_texture : public point_entity
			{
			public:
				MEMBER(disabled, client::cinfo_offscreen_panorama_texture, bool);
				MEMBER(resolution_x, client::cinfo_offscreen_panorama_texture, int);
				MEMBER(resolution_y, client::cinfo_offscreen_panorama_texture, int);
				MEMBER(layout_file_name, client::cinfo_offscreen_panorama_texture, cutl_symbol_large);
				MEMBER(render_attr_name, client::cinfo_offscreen_panorama_texture, cutl_symbol_large);
				MEMBER(target_entities, client::cinfo_offscreen_panorama_texture, network_utl_vector_base<chandle<base_model_entity>>);
				MEMBER(target_change_count, client::cinfo_offscreen_panorama_texture, int);
				MEMBER(vec_cssclasses, client::cinfo_offscreen_panorama_texture, network_utl_vector_base<cutl_symbol_large>);
				MEMBER(check_cssclasses, client::cinfo_offscreen_panorama_texture, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cinfo_offscreen_panorama_texture : public point_entity

			class attribute_container : public cattribute_manager
			{
			public:
				MEMBER(item, client::attribute_container, econ_item_view);
				MEMBER(external_item_provider_registered_token, client::attribute_container, int);
				MEMBER(ull_registered_as_item_id, client::attribute_container, uint64_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class attribute_container : public cattribute_manager

			class cbomb_target : public base_trigger
			{
			public:
				MEMBER(bomb_planted_here, client::cbomb_target, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbomb_target : public base_trigger

			class chostage_rescue_zone_shim : public base_trigger
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class chostage_rescue_zone_shim : public base_trigger

			class chostage_rescue_zone : public chostage_rescue_zone_shim
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class chostage_rescue_zone : public chostage_rescue_zone_shim

			class trigger_buoyancy : public base_trigger
			{
			public:
				MEMBER(buoyancy_helper, client::trigger_buoyancy, cbuoyancy_helper);
				MEMBER(fluid_density, client::trigger_buoyancy, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class trigger_buoyancy : public base_trigger

			class cfunc_water : public base_model_entity
			{
			public:
				MEMBER(buoyancy_helper, client::cfunc_water, cbuoyancy_helper);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cfunc_water : public base_model_entity

			class cwater_splasher : public base_model_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cwater_splasher : public base_model_entity

			class info_instructor_hint_hostage_rescue_zone : public point_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class info_instructor_hint_hostage_rescue_zone : public point_entity

			class ccsplayer_controller : public cbase_player_controller
			{
			public:
				MEMBER(in_game_money_services_ptr, client::ccsplayer_controller, ccsplayer_controller_in_game_money_services*);
				MEMBER(inventory_services_ptr, client::ccsplayer_controller, ccsplayer_controller_inventory_services*);
				MEMBER(action_tracking_services_ptr, client::ccsplayer_controller, ccsplayer_controller_action_tracking_services*);
				MEMBER(damage_services_ptr, client::ccsplayer_controller, ccsplayer_controller_damage_services*);
				MEMBER(ping, client::ccsplayer_controller, uint32_t);
				MEMBER(has_communication_abuse_mute, client::ccsplayer_controller, bool);
				MEMBER(crosshair_codes, client::ccsplayer_controller, cutl_symbol_large);
				MEMBER(pending_team_num, client::ccsplayer_controller, uint8_t);
				MEMBER(force_team_time, client::ccsplayer_controller, game_time_t);
				MEMBER(comp_teammate_color, client::ccsplayer_controller, int);
				MEMBER(ever_played_on_team, client::ccsplayer_controller, bool);
				MEMBER(previous_force_join_team_time, client::ccsplayer_controller, game_time_t);
				MEMBER(clan, client::ccsplayer_controller, cutl_symbol_large);
				MEMBER(s_sanitized_player_name, client::ccsplayer_controller, cutl_string);
				MEMBER(coaching_team, client::ccsplayer_controller, int);
				MEMBER(player_dominated, client::ccsplayer_controller, uint64_t);
				MEMBER(player_dominating_me, client::ccsplayer_controller, uint64_t);
				MEMBER(competitive_ranking, client::ccsplayer_controller, int);
				MEMBER(competitive_wins, client::ccsplayer_controller, int);
				MEMBER(competitive_rank_type, client::ccsplayer_controller, char);
				MEMBER(competitive_ranking_predicted_win, client::ccsplayer_controller, int);
				MEMBER(competitive_ranking_predicted_loss, client::ccsplayer_controller, int);
				MEMBER(competitive_ranking_predicted_tie, client::ccsplayer_controller, int);
				MEMBER(end_match_next_map_vote, client::ccsplayer_controller, int);
				MEMBER(un_active_quest_id, client::ccsplayer_controller, uint16_t);
				MEMBER(quest_progress_reason, client::ccsplayer_controller, quest_progress__reason);
				MEMBER(un_player_tv_control_flags, client::ccsplayer_controller, uint32_t);
				MEMBER(draft_index, client::ccsplayer_controller, int);
				MEMBER(ms_queued_mode_disconnection_timestamp, client::ccsplayer_controller, uint32_t);
				MEMBER(ui_abandon_recorded_reason, client::ccsplayer_controller, uint32_t);
				MEMBER(cannot_be_kicked, client::ccsplayer_controller, bool);
				MEMBER(ever_fully_connected, client::ccsplayer_controller, bool);
				MEMBER(abandon_allows_surrender, client::ccsplayer_controller, bool);
				MEMBER(abandon_offers_instant_surrender, client::ccsplayer_controller, bool);
				MEMBER(disconnection1_min_warning_printed, client::ccsplayer_controller, bool);
				MEMBER(score_reported, client::ccsplayer_controller, bool);
				MEMBER(disconnection_tick, client::ccsplayer_controller, int);
				MEMBER(controlling_bot, client::ccsplayer_controller, bool);
				MEMBER(has_controlled_bot_this_round, client::ccsplayer_controller, bool);
				MEMBER(has_been_controlled_by_player_this_round, client::ccsplayer_controller, bool);
				MEMBER(bots_controlled_this_round, client::ccsplayer_controller, int);
				MEMBER(can_control_observed_bot, client::ccsplayer_controller, bool);
				MEMBER(h_player_pawn, client::ccsplayer_controller, chandle<csplayer_pawn>);
				MEMBER(h_observer_pawn, client::ccsplayer_controller, chandle<csobserver_pawn>);
				MEMBER(pawn_is_alive, client::ccsplayer_controller, bool);
				MEMBER(pawn_health, client::ccsplayer_controller, uint32_t);
				MEMBER(pawn_armor, client::ccsplayer_controller, int);
				MEMBER(pawn_has_defuser, client::ccsplayer_controller, bool);
				MEMBER(pawn_has_helmet, client::ccsplayer_controller, bool);
				MEMBER(pawn_character_def_index, client::ccsplayer_controller, uint16_t);
				MEMBER(pawn_lifetime_start, client::ccsplayer_controller, int);
				MEMBER(pawn_lifetime_end, client::ccsplayer_controller, int);
				MEMBER(pawn_bot_difficulty, client::ccsplayer_controller, int);
				MEMBER(h_original_controller_of_current_pawn, client::ccsplayer_controller, chandle<ccsplayer_controller>);
				MEMBER(score, client::ccsplayer_controller, int);
				MEMBER(vec_kills, client::ccsplayer_controller, network_utl_vector_base<ekill_types_t>);
				MEMBER(mvps, client::ccsplayer_controller, int);
				MEMBER(is_player_name_dirty, client::ccsplayer_controller, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsplayer_controller : public cbase_player_controller

			class footstep_control : public base_trigger
			{
			public:
				MEMBER(source, client::footstep_control, cutl_symbol_large);
				MEMBER(destination, client::footstep_control, cutl_symbol_large);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class footstep_control : public base_trigger

			class ccsweapon_base_vdata : public cbase_player_weapon_vdata
			{
			public:
				MEMBER(weapon_type, client::ccsweapon_base_vdata, csweapon_type);
				MEMBER(weapon_category, client::ccsweapon_base_vdata, csweapon_category);
				MEMBER(view_model, client::ccsweapon_base_vdata, cresource_name_typed<cweak_handle<info_for_resource_type_cmodel>>);
				MEMBER(player_model, client::ccsweapon_base_vdata, cresource_name_typed<cweak_handle<info_for_resource_type_cmodel>>);
				MEMBER(world_dropped_model, client::ccsweapon_base_vdata, cresource_name_typed<cweak_handle<info_for_resource_type_cmodel>>);
				MEMBER(aimsight_lens_mask_model, client::ccsweapon_base_vdata, cresource_name_typed<cweak_handle<info_for_resource_type_cmodel>>);
				MEMBER(magazine_model, client::ccsweapon_base_vdata, cresource_name_typed<cweak_handle<info_for_resource_type_cmodel>>);
				MEMBER(heat_effect, client::ccsweapon_base_vdata, cresource_name_typed<cweak_handle<info_for_resource_type_iparticle_system_definition>>);
				MEMBER(eject_brass_effect, client::ccsweapon_base_vdata, cresource_name_typed<cweak_handle<info_for_resource_type_iparticle_system_definition>>);
				MEMBER(muzzle_flash_particle_alt, client::ccsweapon_base_vdata, cresource_name_typed<cweak_handle<info_for_resource_type_iparticle_system_definition>>);
				MEMBER(muzzle_flash_third_person_particle, client::ccsweapon_base_vdata, cresource_name_typed<cweak_handle<info_for_resource_type_iparticle_system_definition>>);
				MEMBER(muzzle_flash_third_person_particle_alt, client::ccsweapon_base_vdata, cresource_name_typed<cweak_handle<info_for_resource_type_iparticle_system_definition>>);
				MEMBER(tracer_particle, client::ccsweapon_base_vdata, cresource_name_typed<cweak_handle<info_for_resource_type_iparticle_system_definition>>);
				MEMBER(gear_slot, client::ccsweapon_base_vdata, gear_slot_t);
				MEMBER(gear_slot_position, client::ccsweapon_base_vdata, int);
				MEMBER(default_loadout_slot, client::ccsweapon_base_vdata, loadout_slot_t);
				MEMBER(s_wrong_team_msg, client::ccsweapon_base_vdata, cutl_string);
				MEMBER(price, client::ccsweapon_base_vdata, int);
				MEMBER(kill_award, client::ccsweapon_base_vdata, int);
				MEMBER(primary_reserve_ammo_max, client::ccsweapon_base_vdata, int);
				MEMBER(secondary_reserve_ammo_max, client::ccsweapon_base_vdata, int);
				MEMBER(melee_weapon, client::ccsweapon_base_vdata, bool);
				MEMBER(has_burst_mode, client::ccsweapon_base_vdata, bool);
				MEMBER(is_revolver, client::ccsweapon_base_vdata, bool);
				MEMBER(cannot_shoot_underwater, client::ccsweapon_base_vdata, bool);
				MEMBER(name, client::ccsweapon_base_vdata, cutl_string);
				MEMBER(anim_extension, client::ccsweapon_base_vdata, cutl_string);
				MEMBER(e_silencer_type, client::ccsweapon_base_vdata, csweapon_silencer_type);
				MEMBER(crosshair_min_distance, client::ccsweapon_base_vdata, int);
				MEMBER(crosshair_delta_distance, client::ccsweapon_base_vdata, int);
				MEMBER(cycle_time, client::ccsweapon_base_vdata, cfiring_mode_float);
				MEMBER(max_speed, client::ccsweapon_base_vdata, cfiring_mode_float);
				MEMBER(spread, client::ccsweapon_base_vdata, cfiring_mode_float);
				MEMBER(inaccuracy_crouch, client::ccsweapon_base_vdata, cfiring_mode_float);
				MEMBER(inaccuracy_stand, client::ccsweapon_base_vdata, cfiring_mode_float);
				MEMBER(inaccuracy_jump, client::ccsweapon_base_vdata, cfiring_mode_float);
				MEMBER(inaccuracy_land, client::ccsweapon_base_vdata, cfiring_mode_float);
				MEMBER(inaccuracy_ladder, client::ccsweapon_base_vdata, cfiring_mode_float);
				MEMBER(inaccuracy_fire, client::ccsweapon_base_vdata, cfiring_mode_float);
				MEMBER(inaccuracy_move, client::ccsweapon_base_vdata, cfiring_mode_float);
				MEMBER(recoil_angle, client::ccsweapon_base_vdata, cfiring_mode_float);
				MEMBER(recoil_angle_variance, client::ccsweapon_base_vdata, cfiring_mode_float);
				MEMBER(recoil_magnitude, client::ccsweapon_base_vdata, cfiring_mode_float);
				MEMBER(recoil_magnitude_variance, client::ccsweapon_base_vdata, cfiring_mode_float);
				MEMBER(tracer_frequency, client::ccsweapon_base_vdata, cfiring_mode_int);
				MEMBER(inaccuracy_jump_initial, client::ccsweapon_base_vdata, float);
				MEMBER(inaccuracy_jump_apex, client::ccsweapon_base_vdata, float);
				MEMBER(inaccuracy_reload, client::ccsweapon_base_vdata, float);
				MEMBER(recoil_seed, client::ccsweapon_base_vdata, int);
				MEMBER(spread_seed, client::ccsweapon_base_vdata, int);
				MEMBER(time_to_idle_after_fire, client::ccsweapon_base_vdata, float);
				MEMBER(idle_interval, client::ccsweapon_base_vdata, float);
				MEMBER(attack_movespeed_factor, client::ccsweapon_base_vdata, float);
				MEMBER(heat_per_shot, client::ccsweapon_base_vdata, float);
				MEMBER(inaccuracy_pitch_shift, client::ccsweapon_base_vdata, float);
				MEMBER(inaccuracy_alt_sound_threshold, client::ccsweapon_base_vdata, float);
				MEMBER(bot_audible_range, client::ccsweapon_base_vdata, float);
				MEMBER(use_radio_subtitle, client::ccsweapon_base_vdata, cutl_string);
				MEMBER(unzooms_after_shot, client::ccsweapon_base_vdata, bool);
				MEMBER(hide_view_model_when_zoomed, client::ccsweapon_base_vdata, bool);
				MEMBER(zoom_levels, client::ccsweapon_base_vdata, int);
				MEMBER(zoom_fov1, client::ccsweapon_base_vdata, int);
				MEMBER(zoom_fov2, client::ccsweapon_base_vdata, int);
				MEMBER(zoom_time0, client::ccsweapon_base_vdata, float);
				MEMBER(zoom_time1, client::ccsweapon_base_vdata, float);
				MEMBER(zoom_time2, client::ccsweapon_base_vdata, float);
				MEMBER(iron_sight_pull_up_speed, client::ccsweapon_base_vdata, float);
				MEMBER(iron_sight_put_down_speed, client::ccsweapon_base_vdata, float);
				MEMBER(iron_sight_fov, client::ccsweapon_base_vdata, float);
				MEMBER(iron_sight_pivot_forward, client::ccsweapon_base_vdata, float);
				MEMBER(iron_sight_looseness, client::ccsweapon_base_vdata, float);
				MEMBER(ang_pivot_angle, client::ccsweapon_base_vdata, qangle);
				MEMBER(vec_iron_sight_eye_pos, client::ccsweapon_base_vdata, vector);
				MEMBER(damage, client::ccsweapon_base_vdata, int);
				MEMBER(headshot_multiplier, client::ccsweapon_base_vdata, float);
				MEMBER(armor_ratio, client::ccsweapon_base_vdata, float);
				MEMBER(penetration, client::ccsweapon_base_vdata, float);
				MEMBER(range, client::ccsweapon_base_vdata, float);
				MEMBER(range_modifier, client::ccsweapon_base_vdata, float);
				MEMBER(flinch_velocity_modifier_large, client::ccsweapon_base_vdata, float);
				MEMBER(flinch_velocity_modifier_small, client::ccsweapon_base_vdata, float);
				MEMBER(recovery_time_crouch, client::ccsweapon_base_vdata, float);
				MEMBER(recovery_time_stand, client::ccsweapon_base_vdata, float);
				MEMBER(recovery_time_crouch_final, client::ccsweapon_base_vdata, float);
				MEMBER(recovery_time_stand_final, client::ccsweapon_base_vdata, float);
				MEMBER(recovery_transition_start_bullet, client::ccsweapon_base_vdata, int);
				MEMBER(recovery_transition_end_bullet, client::ccsweapon_base_vdata, int);
				MEMBER(throw_velocity, client::ccsweapon_base_vdata, float);
				MEMBER(v_smoke_color, client::ccsweapon_base_vdata, vector);
				MEMBER(anim_class, client::ccsweapon_base_vdata, cutl_string);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ccsweapon_base_vdata : public cbase_player_weapon_vdata

			class player_spray_decal : public model_point_entity
			{
			public:
				MEMBER(unique_id, client::player_spray_decal, int);
				MEMBER(un_account_id, client::player_spray_decal, uint32_t);
				MEMBER(un_trace_id, client::player_spray_decal, uint32_t);
				MEMBER(rt_gc_time, client::player_spray_decal, uint32_t);
				MEMBER(vec_end_pos, client::player_spray_decal, vector);
				MEMBER(vec_start, client::player_spray_decal, vector);
				MEMBER(vec_left, client::player_spray_decal, vector);
				MEMBER(vec_normal, client::player_spray_decal, vector);
				MEMBER(player, client::player_spray_decal, int);
				MEMBER(entity, client::player_spray_decal, int);
				MEMBER(hitbox, client::player_spray_decal, int);
				MEMBER(creation_time, client::player_spray_decal, float);
				MEMBER(tint_id, client::player_spray_decal, int);
				MEMBER(version, client::player_spray_decal, uint8_t);
				MEMBER_ARR(ub_signature_arr, client::player_spray_decal, 128, uint8_t);
				MEMBER(spray_render_helper, client::player_spray_decal, cplayer_spray_decal_render_helper);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class player_spray_decal : public model_point_entity

			class func_conveyor : public base_model_entity
			{
			public:
				MEMBER(vec_move_dir_entity_space, client::func_conveyor, vector);
				MEMBER(target_speed, client::func_conveyor, float);
				MEMBER(transition_start_tick, client::func_conveyor, game_tick_t);
				MEMBER(transition_duration_ticks, client::func_conveyor, int);
				MEMBER(transition_start_speed, client::func_conveyor, float);
				MEMBER(h_conveyor_models, client::func_conveyor, network_utl_vector_base<chandle<base_entity>>);
				MEMBER(current_conveyor_offset, client::func_conveyor, float);
				MEMBER(current_conveyor_speed, client::func_conveyor, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class func_conveyor : public base_model_entity

			class cgrenade_tracer : public base_model_entity
			{
			public:
				MEMBER(tracer_duration, client::cgrenade_tracer, float);
				MEMBER(type, client::cgrenade_tracer, grenade_type_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cgrenade_tracer : public base_model_entity

			class inferno : public base_model_entity
			{
			public:
				MEMBER(nfx_fire_damage_effect, client::inferno, particle_index_t);
				MEMBER_ARR(fire_positions_arr, client::inferno, 64, vector);
				MEMBER_ARR(fire_parent_positions_arr, client::inferno, 64, vector);
				MEMBER_ARR(fire_is_burning_arr, client::inferno, 64, bool);
				MEMBER_ARR(burn_normal_arr, client::inferno, 64, vector);
				MEMBER(fire_count, client::inferno, int);
				MEMBER(inferno_type, client::inferno, int);
				MEMBER(fire_lifetime, client::inferno, float);
				MEMBER(in_post_effect_time, client::inferno, bool);
				MEMBER(last_fire_count, client::inferno, int);
				MEMBER(fire_effect_tick_begin, client::inferno, int);
				MEMBER(drawable_count, client::inferno, int);
				MEMBER(blos_check, client::inferno, bool);
				MEMBER(nlosperiod, client::inferno, int);
				MEMBER(max_fire_half_width, client::inferno, float);
				MEMBER(max_fire_height, client::inferno, float);
				MEMBER(min_bounds, client::inferno, vector);
				MEMBER(max_bounds, client::inferno, vector);
				MEMBER(last_grass_burn_think, client::inferno, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class inferno : public base_model_entity

			class fire_cracker_blast : public inferno
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class fire_cracker_blast : public inferno

			class barn_light : public base_model_entity
			{
			public:
				MEMBER(enabled, client::barn_light, bool);
				MEMBER(color_mode, client::barn_light, int);
				MEMBER(color, client::barn_light, color);
				MEMBER(color_temperature, client::barn_light, float);
				MEMBER(brightness, client::barn_light, float);
				MEMBER(brightness_scale, client::barn_light, float);
				MEMBER(direct_light, client::barn_light, int);
				MEMBER(baked_shadow_index, client::barn_light, int);
				MEMBER(luminaire_shape, client::barn_light, int);
				MEMBER(luminaire_size, client::barn_light, float);
				MEMBER(luminaire_anisotropy, client::barn_light, float);
				MEMBER(light_style_string, client::barn_light, cutl_string);
				MEMBER(light_style_start_time, client::barn_light, game_time_t);
				MEMBER(queued_light_style_strings, client::barn_light, network_utl_vector_base<cutl_string>);
				MEMBER(light_style_events, client::barn_light, network_utl_vector_base<cutl_string>);
				MEMBER(light_style_targets, client::barn_light, network_utl_vector_base<chandle<base_model_entity>>);
				MEMBER_ARR(style_event_arr, client::barn_light, 4, centity_iooutput);
				MEMBER(h_light_cookie, client::barn_light, cstrong_handle<info_for_resource_type_ctexture_base>);
				MEMBER(shape, client::barn_light, float);
				MEMBER(soft_x, client::barn_light, float);
				MEMBER(soft_y, client::barn_light, float);
				MEMBER(skirt, client::barn_light, float);
				MEMBER(skirt_near, client::barn_light, float);
				MEMBER(v_size_params, client::barn_light, vector);
				MEMBER(range, client::barn_light, float);
				MEMBER(v_shear, client::barn_light, vector);
				MEMBER(bake_specular_to_cubemaps, client::barn_light, int);
				MEMBER(v_bake_specular_to_cubemaps_size, client::barn_light, vector);
				MEMBER(cast_shadows, client::barn_light, int);
				MEMBER(shadow_map_size, client::barn_light, int);
				MEMBER(shadow_priority, client::barn_light, int);
				MEMBER(contact_shadow, client::barn_light, bool);
				MEMBER(bounce_light, client::barn_light, int);
				MEMBER(bounce_scale, client::barn_light, float);
				MEMBER(min_roughness, client::barn_light, float);
				MEMBER(v_alternate_color, client::barn_light, vector);
				MEMBER(alternate_color_brightness, client::barn_light, float);
				MEMBER(fog, client::barn_light, int);
				MEMBER(fog_strength, client::barn_light, float);
				MEMBER(fog_shadows, client::barn_light, int);
				MEMBER(fog_scale, client::barn_light, float);
				MEMBER(fade_size_start, client::barn_light, float);
				MEMBER(fade_size_end, client::barn_light, float);
				MEMBER(shadow_fade_size_start, client::barn_light, float);
				MEMBER(shadow_fade_size_end, client::barn_light, float);
				MEMBER(precomputed_fields_valid, client::barn_light, bool);
				MEMBER(v_precomputed_bounds_mins, client::barn_light, vector);
				MEMBER(v_precomputed_bounds_maxs, client::barn_light, vector);
				MEMBER(v_precomputed_obborigin, client::barn_light, vector);
				MEMBER(v_precomputed_obbangles, client::barn_light, qangle);
				MEMBER(v_precomputed_obbextent, client::barn_light, vector);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class barn_light : public base_model_entity

			class rect_light : public barn_light
			{
			public:
				MEMBER(show_light, client::rect_light, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class rect_light : public barn_light

			class omni_light : public barn_light
			{
			public:
				MEMBER(inner_angle, client::omni_light, float);
				MEMBER(outer_angle, client::omni_light, float);
				MEMBER(show_light, client::omni_light, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class omni_light : public barn_light

			class csteam : public team
			{
			public:
				MEMBER_ARR(team_match_stat_arr, client::csteam, 512, char);
				MEMBER(num_map_victories, client::csteam, int);
				MEMBER(surrendered, client::csteam, bool);
				MEMBER(score_first_half, client::csteam, int);
				MEMBER(score_second_half, client::csteam, int);
				MEMBER(score_overtime, client::csteam, int);
				MEMBER_ARR(clan_teamname_arr, client::csteam, 129, char);
				MEMBER(clan_id, client::csteam, uint32_t);
				MEMBER_ARR(team_flag_image_arr, client::csteam, 8, char);
				MEMBER_ARR(team_logo_image_arr, client::csteam, 8, char);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class csteam : public team

			class map_preview_particle_system : public particle_system
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class map_preview_particle_system : public particle_system

			class cinfo_dynamic_shadow_hint : public point_entity
			{
			public:
				MEMBER(disabled, client::cinfo_dynamic_shadow_hint, bool);
				MEMBER(range, client::cinfo_dynamic_shadow_hint, float);
				MEMBER(importance, client::cinfo_dynamic_shadow_hint, int);
				MEMBER(light_choice, client::cinfo_dynamic_shadow_hint, int);
				MEMBER(h_light, client::cinfo_dynamic_shadow_hint, chandle<base_entity>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cinfo_dynamic_shadow_hint : public point_entity

			class cinfo_dynamic_shadow_hint_box : public cinfo_dynamic_shadow_hint
			{
			public:
				MEMBER(v_box_mins, client::cinfo_dynamic_shadow_hint_box, vector);
				MEMBER(v_box_maxs, client::cinfo_dynamic_shadow_hint_box, vector);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cinfo_dynamic_shadow_hint_box : public cinfo_dynamic_shadow_hint

			class env_sky : public base_model_entity
			{
			public:
				MEMBER(h_sky_material, client::env_sky, cstrong_handle<info_for_resource_type_imaterial2>);
				MEMBER(h_sky_material_lighting_only, client::env_sky, cstrong_handle<info_for_resource_type_imaterial2>);
				MEMBER(start_disabled, client::env_sky, bool);
				MEMBER(v_tint_color, client::env_sky, color);
				MEMBER(v_tint_color_lighting_only, client::env_sky, color);
				MEMBER(brightness_scale, client::env_sky, float);
				MEMBER(fog_type, client::env_sky, int);
				MEMBER(fog_min_start, client::env_sky, float);
				MEMBER(fog_min_end, client::env_sky, float);
				MEMBER(fog_max_start, client::env_sky, float);
				MEMBER(fog_max_end, client::env_sky, float);
				MEMBER(enabled, client::env_sky, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class env_sky : public base_model_entity

			class tonemap_controller2_alias_env_tonemap_controller2 : public tonemap_controller2
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class tonemap_controller2_alias_env_tonemap_controller2 : public tonemap_controller2

			class light_entity : public base_model_entity
			{
			public:
				MEMBER(clight_component_ptr, client::light_entity, clight_component*);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class light_entity : public base_model_entity

			class light_spot_entity : public light_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class light_spot_entity : public light_entity

			class light_ortho_entity : public light_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class light_ortho_entity : public light_entity

			class light_directional_entity : public light_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class light_directional_entity : public light_entity

			class light_environment_entity : public light_directional_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class light_environment_entity : public light_directional_entity

			class post_processing_volume : public base_trigger
			{
			public:
				MEMBER(h_post_settings, client::post_processing_volume, cstrong_handle<info_for_resource_type_cpost_processing_resource>);
				MEMBER(fade_duration, client::post_processing_volume, float);
				MEMBER(min_log_exposure, client::post_processing_volume, float);
				MEMBER(max_log_exposure, client::post_processing_volume, float);
				MEMBER(min_exposure, client::post_processing_volume, float);
				MEMBER(max_exposure, client::post_processing_volume, float);
				MEMBER(exposure_compensation, client::post_processing_volume, float);
				MEMBER(exposure_fade_speed_up, client::post_processing_volume, float);
				MEMBER(exposure_fade_speed_down, client::post_processing_volume, float);
				MEMBER(tonemap_evsmoothing_range, client::post_processing_volume, float);
				MEMBER(master, client::post_processing_volume, bool);
				MEMBER(exposure_control, client::post_processing_volume, bool);
				MEMBER(rate, client::post_processing_volume, float);
				MEMBER(tonemap_percent_target, client::post_processing_volume, float);
				MEMBER(tonemap_percent_bright_pixels, client::post_processing_volume, float);
				MEMBER(tonemap_min_avg_lum, client::post_processing_volume, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class post_processing_volume : public base_trigger

			class env_particle_glow : public particle_system
			{
			public:
				MEMBER(alpha_scale, client::env_particle_glow, float);
				MEMBER(radius_scale, client::env_particle_glow, float);
				MEMBER(self_illum_scale, client::env_particle_glow, float);
				MEMBER(color_tint, client::env_particle_glow, color);
				MEMBER(h_texture_override, client::env_particle_glow, cstrong_handle<info_for_resource_type_ctexture_base>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class env_particle_glow : public particle_system

			class texture_based_animatable : public base_model_entity
			{
			public:
				MEMBER(loop, client::texture_based_animatable, bool);
				MEMBER(fps, client::texture_based_animatable, float);
				MEMBER(h_position_keys, client::texture_based_animatable, cstrong_handle<info_for_resource_type_ctexture_base>);
				MEMBER(h_rotation_keys, client::texture_based_animatable, cstrong_handle<info_for_resource_type_ctexture_base>);
				MEMBER(v_animation_bounds_min, client::texture_based_animatable, vector);
				MEMBER(v_animation_bounds_max, client::texture_based_animatable, vector);
				MEMBER(start_time, client::texture_based_animatable, float);
				MEMBER(start_frame, client::texture_based_animatable, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class texture_based_animatable : public base_model_entity

			class world : public base_model_entity
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class world : public base_model_entity

			class cbase_anim_graph : public base_model_entity
			{
			public:
				MEMBER(initially_populate_interp_history, client::cbase_anim_graph, bool);
				MEMBER(should_animate_during_gameplay_pause, client::cbase_anim_graph, bool);
				MEMBER(suppress_anim_event_sounds, client::cbase_anim_graph, bool);
				MEMBER(anim_graph_update_enabled, client::cbase_anim_graph, bool);
				MEMBER(max_slope_distance, client::cbase_anim_graph, float);
				MEMBER(v_last_slope_check_pos, client::cbase_anim_graph, vector);
				MEMBER(vec_force, client::cbase_anim_graph, vector);
				MEMBER(force_bone, client::cbase_anim_graph, int);
				MEMBER(clientside_ragdoll_ptr, client::cbase_anim_graph, cbase_anim_graph*);
				MEMBER(built_ragdoll, client::cbase_anim_graph, bool);
				MEMBER(ragdoll_pose_ptr, client::cbase_anim_graph, physics_ragdoll_pose_t*);
				MEMBER(client_ragdoll, client::cbase_anim_graph, bool);
				MEMBER(has_animated_material_attributes, client::cbase_anim_graph, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbase_anim_graph : public base_model_entity

			class cbase_prop : public cbase_anim_graph
			{
			public:
				MEMBER(model_overrode_block_los, client::cbase_prop, bool);
				MEMBER(shape_type, client::cbase_prop, int);
				MEMBER(conform_to_collision_bounds, client::cbase_prop, bool);
				MEMBER(m_preferred_catch_transform, client::cbase_prop, matrix3x4_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbase_prop : public cbase_anim_graph

			class breakable_prop : public cbase_prop
			{
			public:
				MEMBER(on_break, client::breakable_prop, centity_iooutput);
				MEMBER(on_health_changed, client::breakable_prop, centity_output_template<float>);
				MEMBER(on_take_damage, client::breakable_prop, centity_iooutput);
				MEMBER(impact_energy_scale, client::breakable_prop, float);
				MEMBER(min_health_dmg, client::breakable_prop, int);
				MEMBER(pressure_delay, client::breakable_prop, float);
				MEMBER(h_breaker, client::breakable_prop, chandle<base_entity>);
				MEMBER(performance_mode, client::breakable_prop, performance_mode_t);
				MEMBER(dmg_mod_bullet, client::breakable_prop, float);
				MEMBER(dmg_mod_club, client::breakable_prop, float);
				MEMBER(dmg_mod_explosive, client::breakable_prop, float);
				MEMBER(dmg_mod_fire, client::breakable_prop, float);
				MEMBER(isz_physics_damage_table_name, client::breakable_prop, cutl_symbol_large);
				MEMBER(isz_base_prop_data, client::breakable_prop, cutl_symbol_large);
				MEMBER(interactions, client::breakable_prop, int);
				MEMBER(prevent_damage_before_time, client::breakable_prop, game_time_t);
				MEMBER(has_break_pieces_or_commands, client::breakable_prop, bool);
				MEMBER(explode_damage, client::breakable_prop, float);
				MEMBER(explode_radius, client::breakable_prop, float);
				MEMBER(explosion_delay, client::breakable_prop, float);
				MEMBER(explosion_buildup_sound, client::breakable_prop, cutl_symbol_large);
				MEMBER(explosion_custom_effect, client::breakable_prop, cutl_symbol_large);
				MEMBER(explosion_custom_sound, client::breakable_prop, cutl_symbol_large);
				MEMBER(explosion_modifier, client::breakable_prop, cutl_symbol_large);
				MEMBER(h_physics_attacker, client::breakable_prop, chandle<base_player_pawn>);
				MEMBER(last_physics_influence_time, client::breakable_prop, game_time_t);
				MEMBER(default_fade_scale, client::breakable_prop, float);
				MEMBER(h_last_attacker, client::breakable_prop, chandle<base_entity>);
				MEMBER(h_flare_ent, client::breakable_prop, chandle<base_entity>);
				MEMBER(no_ghost_collision, client::breakable_prop, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class breakable_prop : public cbase_prop

			class dynamic_prop : public breakable_prop
			{
			public:
				MEMBER(use_hitboxes_for_render_box, client::dynamic_prop, bool);
				MEMBER(use_anim_graph, client::dynamic_prop, bool);
				MEMBER(output_anim_begun, client::dynamic_prop, centity_iooutput);
				MEMBER(output_anim_over, client::dynamic_prop, centity_iooutput);
				MEMBER(output_anim_loop_cycle_over, client::dynamic_prop, centity_iooutput);
				MEMBER(on_anim_reached_start, client::dynamic_prop, centity_iooutput);
				MEMBER(on_anim_reached_end, client::dynamic_prop, centity_iooutput);
				MEMBER(isz_default_anim, client::dynamic_prop, cutl_symbol_large);
				MEMBER(default_anim_loop_mode, client::dynamic_prop, anim_loop_mode_t);
				MEMBER(animate_on_server, client::dynamic_prop, bool);
				MEMBER(randomize_cycle, client::dynamic_prop, bool);
				MEMBER(start_disabled, client::dynamic_prop, bool);
				MEMBER(scripted_movement, client::dynamic_prop, bool);
				MEMBER(fired_start_end_output, client::dynamic_prop, bool);
				MEMBER(force_npc_exclude, client::dynamic_prop, bool);
				MEMBER(create_non_solid, client::dynamic_prop, bool);
				MEMBER(is_override_prop, client::dynamic_prop, bool);
				MEMBER(initial_glow_state, client::dynamic_prop, int);
				MEMBER(glow_range, client::dynamic_prop, int);
				MEMBER(glow_range_min, client::dynamic_prop, int);
				MEMBER(glow_color, client::dynamic_prop, color);
				MEMBER(glow_team, client::dynamic_prop, int);
				MEMBER(cached_frame_count, client::dynamic_prop, int);
				MEMBER(vec_cached_render_mins, client::dynamic_prop, vector);
				MEMBER(vec_cached_render_maxs, client::dynamic_prop, vector);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class dynamic_prop : public breakable_prop

			class dynamic_prop_alias_dynamic_prop : public dynamic_prop
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class dynamic_prop_alias_dynamic_prop : public dynamic_prop

			class dynamic_prop_alias_prop_dynamic_override : public dynamic_prop
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class dynamic_prop_alias_prop_dynamic_override : public dynamic_prop

			class dynamic_prop_alias_cable_dynamic : public dynamic_prop
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class dynamic_prop_alias_cable_dynamic : public dynamic_prop

			class color_correction_volume : public base_trigger
			{
			public:
				MEMBER(last_enter_weight, client::color_correction_volume, float);
				MEMBER(last_enter_time, client::color_correction_volume, float);
				MEMBER(last_exit_weight, client::color_correction_volume, float);
				MEMBER(last_exit_time, client::color_correction_volume, float);
				MEMBER(enabled, client::color_correction_volume, bool);
				MEMBER(max_weight, client::color_correction_volume, float);
				MEMBER(fade_duration, client::color_correction_volume, float);
				MEMBER(weight, client::color_correction_volume, float);
				MEMBER_ARR(lookup_filename_arr, client::color_correction_volume, 512, char);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class color_correction_volume : public base_trigger

			class func_monitor : public func_brush
			{
			public:
				MEMBER(target_camera, client::func_monitor, cutl_string);
				MEMBER(resolution_enum, client::func_monitor, int);
				MEMBER(render_shadows, client::func_monitor, bool);
				MEMBER(use_unique_color_target, client::func_monitor, bool);
				MEMBER(brush_model_name, client::func_monitor, cutl_string);
				MEMBER(h_target_camera, client::func_monitor, chandle<base_entity>);
				MEMBER(enabled, client::func_monitor, bool);
				MEMBER(draw3_dskybox, client::func_monitor, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class func_monitor : public func_brush

			class func_move_linear : public base_toggle
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class func_move_linear : public base_toggle

			class phys_magnet : public cbase_anim_graph
			{
			public:
				MEMBER(a_attached_objects_from_server, client::phys_magnet, cutl_vector<int>);
				MEMBER(a_attached_objects, client::phys_magnet, cutl_vector<chandle<base_entity>>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class phys_magnet : public cbase_anim_graph

			class point_commentary_node : public cbase_anim_graph
			{
			public:
				MEMBER(active, client::point_commentary_node, bool);
				MEMBER(was_active, client::point_commentary_node, bool);
				MEMBER(end_time, client::point_commentary_node, game_time_t);
				MEMBER(start_time, client::point_commentary_node, game_time_t);
				MEMBER(start_time_in_commentary, client::point_commentary_node, float);
				MEMBER(isz_commentary_file, client::point_commentary_node, cutl_symbol_large);
				MEMBER(isz_title, client::point_commentary_node, cutl_symbol_large);
				MEMBER(isz_speakers, client::point_commentary_node, cutl_symbol_large);
				MEMBER(node_number, client::point_commentary_node, int);
				MEMBER(node_number_max, client::point_commentary_node, int);
				MEMBER(listened_to, client::point_commentary_node, bool);
				MEMBER(h_view_position, client::point_commentary_node, chandle<base_entity>);
				MEMBER(restart_after_restore, client::point_commentary_node, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class point_commentary_node : public cbase_anim_graph

			class water_bullet : public cbase_anim_graph
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class water_bullet : public cbase_anim_graph

			class base_door : public base_toggle
			{
			public:
				MEMBER(is_usable, client::base_door, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class base_door : public base_toggle

			class base_flex : public cbase_anim_graph
			{
			public:
				MEMBER(flex_weight, client::base_flex, network_utl_vector_base<float>);
				MEMBER(v_look_target_position, client::base_flex, vector);
				MEMBER(blinktoggle, client::base_flex, bool);
				MEMBER(last_flex_update_frame_count, client::base_flex, int);
				MEMBER(cached_view_target, client::base_flex, vector);
				MEMBER(next_scene_event_id, client::base_flex, uint32_t);
				MEMBER(blink, client::base_flex, int);
				MEMBER(blinktime, client::base_flex, float);
				MEMBER(prevblinktoggle, client::base_flex, bool);
				MEMBER(jaw_open, client::base_flex, int);
				MEMBER(jaw_open_amount, client::base_flex, float);
				MEMBER(blink_amount, client::base_flex, float);
				MEMBER(mouth_attachment, client::base_flex, attachment_handle_t);
				MEMBER(eye_attachment, client::base_flex, attachment_handle_t);
				MEMBER(reset_flex_weights_on_model_change, client::base_flex, bool);
				MEMBER(eye_occlusion_renderer_bone, client::base_flex, int);
				MEMBER(m_eye_occlusion_renderer_camera_to_bone_transform, client::base_flex, matrix3x4_t);
				MEMBER(v_eye_occlusion_renderer_half_extent, client::base_flex, vector);
				MEMBER_ARR(phoneme_classes_arr, client::base_flex, 3, base_flex__emphasized_phoneme);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class base_flex : public cbase_anim_graph

			class client_ragdoll : public cbase_anim_graph
			{
			public:
				MEMBER(fade_out, client::client_ragdoll, bool);
				MEMBER(important, client::client_ragdoll, bool);
				MEMBER(effect_time, client::client_ragdoll, game_time_t);
				MEMBER(gib_despawn_time, client::client_ragdoll, game_time_t);
				MEMBER(current_friction, client::client_ragdoll, int);
				MEMBER(min_friction, client::client_ragdoll, int);
				MEMBER(max_friction, client::client_ragdoll, int);
				MEMBER(friction_anim_state, client::client_ragdoll, int);
				MEMBER(release_ragdoll, client::client_ragdoll, bool);
				MEMBER(eye_attachment, client::client_ragdoll, attachment_handle_t);
				MEMBER(fading_out, client::client_ragdoll, bool);
				MEMBER_ARR(scale_end_arr, client::client_ragdoll, 10, float);
				MEMBER_ARR(scale_time_start_arr, client::client_ragdoll, 10, game_time_t);
				MEMBER_ARR(scale_time_end_arr, client::client_ragdoll, 10, game_time_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class client_ragdoll : public cbase_anim_graph

			class precipitation : public base_trigger
			{
			public:
				MEMBER(density, client::precipitation, float);
				MEMBER(particle_inner_dist, client::precipitation, float);
				MEMBER(particle_def_ptr, client::precipitation, char*);
				MEMBER_ARR(t_particle_precip_trace_timer_arr, client::precipitation, 1, timed_event);
				MEMBER_ARR(active_particle_precip_emitter_arr, client::precipitation, 1, bool);
				MEMBER(particle_precip_initialized, client::precipitation, bool);
				MEMBER(has_simulated_since_last_scene_object_update, client::precipitation, bool);
				MEMBER(available_sheet_sequences_max_index, client::precipitation, int);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class precipitation : public base_trigger

			class fire_sprite : public sprite
			{
			public:
				MEMBER(vec_move_dir, client::fire_sprite, vector);
				MEMBER(fade_from_above, client::fire_sprite, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class fire_sprite : public sprite

			class fire_from_above_sprite : public sprite
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class fire_from_above_sprite : public sprite

			class fish : public cbase_anim_graph
			{
			public:
				MEMBER(pos, client::fish, vector);
				MEMBER(vel, client::fish, vector);
				MEMBER(angles, client::fish, qangle);
				MEMBER(local_life_state, client::fish, int);
				MEMBER(death_depth, client::fish, float);
				MEMBER(death_angle, client::fish, float);
				MEMBER(buoyancy, client::fish, float);
				MEMBER(wiggle_timer, client::fish, countdown_timer);
				MEMBER(wiggle_phase, client::fish, float);
				MEMBER(wiggle_rate, client::fish, float);
				MEMBER(actual_pos, client::fish, vector);
				MEMBER(actual_angles, client::fish, qangle);
				MEMBER(pool_origin, client::fish, vector);
				MEMBER(water_level, client::fish, float);
				MEMBER(got_update, client::fish, bool);
				MEMBER(x, client::fish, float);
				MEMBER(y, client::fish, float);
				MEMBER(z, client::fish, float);
				MEMBER(angle, client::fish, float);
				MEMBER_ARR(error_history_arr, client::fish, 20, float);
				MEMBER(error_history_index, client::fish, int);
				MEMBER(error_history_count, client::fish, int);
				MEMBER(average_error, client::fish, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class fish : public cbase_anim_graph

			class physics_prop : public breakable_prop
			{
			public:
				MEMBER(awake, client::physics_prop, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class physics_prop : public breakable_prop

			class base_prop_door : public dynamic_prop
			{
			public:
				MEMBER(e_door_state, client::base_prop_door, door_state_t);
				MEMBER(model_changed, client::base_prop_door, bool);
				MEMBER(locked, client::base_prop_door, bool);
				MEMBER(closed_position, client::base_prop_door, vector);
				MEMBER(closed_angles, client::base_prop_door, qangle);
				MEMBER(h_master, client::base_prop_door, chandle<base_prop_door>);
				MEMBER(v_where_to_set_lighting_origin, client::base_prop_door, vector);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class base_prop_door : public dynamic_prop

			class phys_prop_clientside : public breakable_prop
			{
			public:
				MEMBER(touch_delta, client::phys_prop_clientside, game_time_t);
				MEMBER(death_time, client::phys_prop_clientside, game_time_t);
				MEMBER(impact_energy_scale, client::phys_prop_clientside, float);
				MEMBER(inertia_scale, client::phys_prop_clientside, float);
				MEMBER(dmg_mod_bullet, client::phys_prop_clientside, float);
				MEMBER(dmg_mod_club, client::phys_prop_clientside, float);
				MEMBER(dmg_mod_explosive, client::phys_prop_clientside, float);
				MEMBER(dmg_mod_fire, client::phys_prop_clientside, float);
				MEMBER(isz_physics_damage_table_name, client::phys_prop_clientside, cutl_symbol_large);
				MEMBER(isz_base_prop_data, client::phys_prop_clientside, cutl_symbol_large);
				MEMBER(interactions, client::phys_prop_clientside, int);
				MEMBER(has_break_pieces_or_commands, client::phys_prop_clientside, bool);
				MEMBER(vec_damage_position, client::phys_prop_clientside, vector);
				MEMBER(vec_damage_direction, client::phys_prop_clientside, vector);
				MEMBER(damage_type, client::phys_prop_clientside, int);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class phys_prop_clientside : public breakable_prop

			class ragdoll_prop : public cbase_anim_graph
			{
			public:
				MEMBER(rag_pos, client::ragdoll_prop, network_utl_vector_base<vector>);
				MEMBER(rag_angles, client::ragdoll_prop, network_utl_vector_base<qangle>);
				MEMBER(blend_weight, client::ragdoll_prop, float);
				MEMBER(h_ragdoll_source, client::ragdoll_prop, chandle<base_entity>);
				MEMBER(eye_attachment, client::ragdoll_prop, attachment_handle_t);
				MEMBER(blend_weight_current, client::ragdoll_prop, float);
				MEMBER(parent_physics_bone_indices, client::ragdoll_prop, cutl_vector<int>);
				MEMBER(world_space_bone_computation_order, client::ragdoll_prop, cutl_vector<int>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ragdoll_prop : public cbase_anim_graph

			class local_temp_entity : public cbase_anim_graph
			{
			public:
				MEMBER(flags, client::local_temp_entity, int);
				MEMBER(die, client::local_temp_entity, game_time_t);
				MEMBER(frame_max, client::local_temp_entity, float);
				MEMBER(x, client::local_temp_entity, float);
				MEMBER(y, client::local_temp_entity, float);
				MEMBER(fade_speed, client::local_temp_entity, float);
				MEMBER(bounce_factor, client::local_temp_entity, float);
				MEMBER(hit_sound, client::local_temp_entity, int);
				MEMBER(priority, client::local_temp_entity, int);
				MEMBER(tent_offset, client::local_temp_entity, vector);
				MEMBER(vec_temp_ent_ang_velocity, client::local_temp_entity, qangle);
				MEMBER(tempent_renderamt, client::local_temp_entity, int);
				MEMBER(vec_normal, client::local_temp_entity, vector);
				MEMBER(sprite_scale, client::local_temp_entity, float);
				MEMBER(flicker_frame, client::local_temp_entity, int);
				MEMBER(frame_rate, client::local_temp_entity, float);
				MEMBER(frame, client::local_temp_entity, float);
				MEMBER(psz_impact_effect_ptr, client::local_temp_entity, char*);
				MEMBER(psz_particle_effect_ptr, client::local_temp_entity, char*);
				MEMBER(particle_collision, client::local_temp_entity, bool);
				MEMBER(last_collision_frame, client::local_temp_entity, int);
				MEMBER(v_last_collision_origin, client::local_temp_entity, vector);
				MEMBER(vec_temp_ent_velocity, client::local_temp_entity, vector);
				MEMBER(vec_prev_abs_origin, client::local_temp_entity, vector);
				MEMBER(vec_temp_ent_acceleration, client::local_temp_entity, vector);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class local_temp_entity : public cbase_anim_graph

			class shatter_glass_shard_physics : public physics_prop
			{
			public:
				MEMBER(shard_desc, client::shatter_glass_shard_physics, shard_model_desc_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class shatter_glass_shard_physics : public physics_prop

			class econ_entity : public base_flex
			{
			public:
				MEMBER(flex_delay_time, client::econ_entity, float);
				MEMBER(flex_delayed_weight_ptr, client::econ_entity, float32*);
				MEMBER(attributes_initialized, client::econ_entity, bool);
				MEMBER(attribute_manager, client::econ_entity, attribute_container);
				MEMBER(original_owner_xuid_low, client::econ_entity, uint32_t);
				MEMBER(original_owner_xuid_high, client::econ_entity, uint32_t);
				MEMBER(fallback_paint_kit, client::econ_entity, int);
				MEMBER(fallback_seed, client::econ_entity, int);
				MEMBER(fallback_wear, client::econ_entity, float);
				MEMBER(fallback_stat_trak, client::econ_entity, int);
				MEMBER(clientside, client::econ_entity, bool);
				MEMBER(particle_systems_created, client::econ_entity, bool);
				MEMBER(vec_attached_particles, client::econ_entity, cutl_vector<int>);
				MEMBER(h_viewmodel_attachment, client::econ_entity, chandle<cbase_anim_graph>);
				MEMBER(old_team, client::econ_entity, int);
				MEMBER(attachment_dirty, client::econ_entity, bool);
				MEMBER(unloaded_model_index, client::econ_entity, int);
				MEMBER(num_owner_validation_retries, client::econ_entity, int);
				MEMBER(h_old_providee, client::econ_entity, chandle<base_entity>);
				MEMBER(vec_attached_models, client::econ_entity, cutl_vector<econ_entity__attached_model_data_t>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class econ_entity : public base_flex

			class econ_wearable : public econ_entity
			{
			public:
				MEMBER(force_skin, client::econ_wearable, int);
				MEMBER(always_allow, client::econ_wearable, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class econ_wearable : public econ_entity

			class base_grenade : public base_flex
			{
			public:
				MEMBER(has_warned_ai, client::base_grenade, bool);
				MEMBER(is_smoke_grenade, client::base_grenade, bool);
				MEMBER(is_live, client::base_grenade, bool);
				MEMBER(dmg_radius, client::base_grenade, float);
				MEMBER(detonate_time, client::base_grenade, game_time_t);
				MEMBER(warn_aitime, client::base_grenade, float);
				MEMBER(damage, client::base_grenade, float);
				MEMBER(isz_bounce_sound, client::base_grenade, cutl_symbol_large);
				MEMBER(explosion_sound, client::base_grenade, cutl_string);
				MEMBER(h_thrower, client::base_grenade, chandle<csplayer_pawn>);
				MEMBER(next_attack, client::base_grenade, game_time_t);
				MEMBER(h_original_thrower, client::base_grenade, chandle<csplayer_pawn>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class base_grenade : public base_flex

			class physics_prop_multiplayer : public physics_prop
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class physics_prop_multiplayer : public physics_prop

			class viewmodel_weapon : public cbase_anim_graph
			{
			public:
				MEMBER(world_model_ptr, client::viewmodel_weapon, char*);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class viewmodel_weapon : public cbase_anim_graph

			class base_view_model : public cbase_anim_graph
			{
			public:
				MEMBER(vec_last_facing, client::base_view_model, vector);
				MEMBER(view_model_index, client::base_view_model, uint32_t);
				MEMBER(animation_parity, client::base_view_model, uint32_t);
				MEMBER(animation_start_time, client::base_view_model, float);
				MEMBER(h_weapon, client::base_view_model, chandle<base_player_weapon>);
				MEMBER(s_vmname, client::base_view_model, cutl_symbol_large);
				MEMBER(s_animation_prefix, client::base_view_model, cutl_symbol_large);
				MEMBER(h_weapon_model, client::base_view_model, chandle<viewmodel_weapon>);
				MEMBER(camera_attachment, client::base_view_model, attachment_handle_t);
				MEMBER(vec_last_camera_angles, client::base_view_model, qangle);
				MEMBER(previous_elapsed_duration, client::base_view_model, float);
				MEMBER(previous_cycle, client::base_view_model, float);
				MEMBER(old_animation_parity, client::base_view_model, int);
				MEMBER(h_old_layer_sequence, client::base_view_model, hsequence);
				MEMBER(old_layer, client::base_view_model, int);
				MEMBER(old_layer_start_time, client::base_view_model, float);
				MEMBER(h_control_panel, client::base_view_model, chandle<base_entity>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class base_view_model : public cbase_anim_graph

			class viewmodel_attachment_model : public cbase_anim_graph
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class viewmodel_attachment_model : public cbase_anim_graph

			class predicted_view_model : public base_view_model
			{
			public:
				MEMBER(lag_angles_history, client::predicted_view_model, qangle);
				MEMBER(v_predicted_offset, client::predicted_view_model, vector);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class predicted_view_model : public base_view_model

			class world_model_stattrak : public cbase_anim_graph
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class world_model_stattrak : public cbase_anim_graph

			class world_model_nametag : public cbase_anim_graph
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class world_model_nametag : public cbase_anim_graph

			class base_csgrenade_projectile : public base_grenade
			{
			public:
				MEMBER(v_initial_position, client::base_csgrenade_projectile, vector);
				MEMBER(v_initial_velocity, client::base_csgrenade_projectile, vector);
				MEMBER(bounces, client::base_csgrenade_projectile, int);
				MEMBER(explode_effect_index, client::base_csgrenade_projectile, cstrong_handle<info_for_resource_type_iparticle_system_definition>);
				MEMBER(explode_effect_tick_begin, client::base_csgrenade_projectile, int);
				MEMBER(vec_explode_effect_origin, client::base_csgrenade_projectile, vector);
				MEMBER(spawn_time, client::base_csgrenade_projectile, game_time_t);
				MEMBER(vec_last_trail_line_pos, client::base_csgrenade_projectile, vector);
				MEMBER(fl_next_trail_line_time, client::base_csgrenade_projectile, game_time_t);
				MEMBER(explode_effect_began, client::base_csgrenade_projectile, bool);
				MEMBER(can_create_grenade_trail, client::base_csgrenade_projectile, bool);
				MEMBER(snapshot_trajectory_effect_index, client::base_csgrenade_projectile, particle_index_t);
				MEMBER(h_snapshot_trajectory_particle_snapshot, client::base_csgrenade_projectile, cstrong_handle<info_for_resource_type_iparticle_snapshot>);
				MEMBER(arr_trajectory_trail_points, client::base_csgrenade_projectile, cutl_vector<vector>);
				MEMBER(arr_trajectory_trail_point_creation_times, client::base_csgrenade_projectile, cutl_vector<float>);
				MEMBER(trajectory_trail_effect_creation_time, client::base_csgrenade_projectile, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class base_csgrenade_projectile : public base_grenade

			class sensor_grenade_projectile : public base_csgrenade_projectile
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class sensor_grenade_projectile : public base_csgrenade_projectile

			class cbreach_charge_projectile : public base_grenade
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbreach_charge_projectile : public base_grenade

			class cbump_mine_projectile : public base_grenade
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbump_mine_projectile : public base_grenade

			class ctrip_wire_fire_projectile : public base_grenade
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ctrip_wire_fire_projectile : public base_grenade

			class csgo_preview_model : public base_flex
			{
			public:
				MEMBER(animgraph, client::csgo_preview_model, cutl_string);
				MEMBER(animgraph_character_mode_string, client::csgo_preview_model, cutl_string);
				MEMBER(default_anim, client::csgo_preview_model, cutl_string);
				MEMBER(default_anim_loop_mode, client::csgo_preview_model, anim_loop_mode_t);
				MEMBER(initial_model_scale, client::csgo_preview_model, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class csgo_preview_model : public base_flex

			class csgo_preview_model_alias_csgo_item_previewmodel : public csgo_preview_model
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class csgo_preview_model_alias_csgo_item_previewmodel : public csgo_preview_model

			class bullet_hit_model : public cbase_anim_graph
			{
			public:
				MEMBER(mat_local, client::bullet_hit_model, matrix3x4_t);
				MEMBER(bone_index, client::bullet_hit_model, int);
				MEMBER(h_player_parent, client::bullet_hit_model, chandle<base_entity>);
				MEMBER(is_hit, client::bullet_hit_model, bool);
				MEMBER(time_created, client::bullet_hit_model, float);
				MEMBER(vec_start_pos, client::bullet_hit_model, vector);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class bullet_hit_model : public cbase_anim_graph

			class pick_up_model_slerper : public cbase_anim_graph
			{
			public:
				MEMBER(h_player_parent, client::pick_up_model_slerper, chandle<base_entity>);
				MEMBER(h_item, client::pick_up_model_slerper, chandle<base_entity>);
				MEMBER(time_picked_up, client::pick_up_model_slerper, float);
				MEMBER(ang_original, client::pick_up_model_slerper, qangle);
				MEMBER(vec_pos_original, client::pick_up_model_slerper, vector);
				MEMBER(ang_random, client::pick_up_model_slerper, qangle);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class pick_up_model_slerper : public cbase_anim_graph

			class world_model_gloves : public cbase_anim_graph
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class world_model_gloves : public cbase_anim_graph

			class hostage_carriable_prop : public cbase_anim_graph
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class hostage_carriable_prop : public cbase_anim_graph

			class multimeter : public cbase_anim_graph
			{
			public:
				MEMBER(h_target_c4, client::multimeter, chandle<planted_c4>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class multimeter : public cbase_anim_graph

			class planted_c4 : public cbase_anim_graph
			{
			public:
				MEMBER(bomb_ticking, client::planted_c4, bool);
				MEMBER(bomb_site, client::planted_c4, int);
				MEMBER(source_soundscape_hash, client::planted_c4, int);
				MEMBER(entity_spotted_state, client::planted_c4, entity_spotted_state_t);
				MEMBER(next_glow, client::planted_c4, game_time_t);
				MEMBER(next_beep, client::planted_c4, game_time_t);
				MEMBER(c4_blow, client::planted_c4, game_time_t);
				MEMBER(cannot_be_defused, client::planted_c4, bool);
				MEMBER(has_exploded, client::planted_c4, bool);
				MEMBER(timer_length, client::planted_c4, float);
				MEMBER(being_defused, client::planted_c4, bool);
				MEMBER(trigger_warning, client::planted_c4, float);
				MEMBER(explode_warning, client::planted_c4, float);
				MEMBER(c4_activated, client::planted_c4, bool);
				MEMBER(ten_sec_warning, client::planted_c4, bool);
				MEMBER(defuse_length, client::planted_c4, float);
				MEMBER(defuse_count_down, client::planted_c4, game_time_t);
				MEMBER(bomb_defused, client::planted_c4, bool);
				MEMBER(h_bomb_defuser, client::planted_c4, chandle<csplayer_pawn>);
				MEMBER(h_control_panel, client::planted_c4, chandle<base_entity>);
				MEMBER(h_defuser_multimeter, client::planted_c4, chandle<multimeter>);
				MEMBER(next_radar_flash_time, client::planted_c4, game_time_t);
				MEMBER(radar_flash, client::planted_c4, bool);
				MEMBER(bomb_defuser, client::planted_c4, chandle<csplayer_pawn>);
				MEMBER(last_defuse_time, client::planted_c4, game_time_t);
				MEMBER(prediction_owner_ptr, client::planted_c4, cbase_player_controller*);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class planted_c4 : public cbase_anim_graph

			class item : public econ_entity
			{
			public:
				MEMBER(should_glow, client::item, bool);
				MEMBER_ARR(reticle_hint_text_name_arr, client::item, 256, char);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class item : public econ_entity

			class hegrenade_projectile : public base_csgrenade_projectile
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class hegrenade_projectile : public base_csgrenade_projectile

			class flashbang_projectile : public base_csgrenade_projectile
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class flashbang_projectile : public base_csgrenade_projectile

			class chicken : public dynamic_prop
			{
			public:
				MEMBER(h_holiday_hat_addon, client::chicken, chandle<cbase_anim_graph>);
				MEMBER(jumped_this_frame, client::chicken, bool);
				MEMBER(leader, client::chicken, chandle<csplayer_pawn_base>);
				MEMBER(attribute_manager, client::chicken, attribute_container);
				MEMBER(original_owner_xuid_low, client::chicken, uint32_t);
				MEMBER(original_owner_xuid_high, client::chicken, uint32_t);
				MEMBER(attributes_initialized, client::chicken, bool);
				MEMBER(h_water_wake_particles, client::chicken, particle_index_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class chicken : public dynamic_prop

			class base_player_weapon : public econ_entity
			{
			public:
				MEMBER(next_primary_attack_tick, client::base_player_weapon, game_tick_t);
				MEMBER(next_primary_attack_tick_ratio, client::base_player_weapon, float);
				MEMBER(next_secondary_attack_tick, client::base_player_weapon, game_tick_t);
				MEMBER(next_secondary_attack_tick_ratio, client::base_player_weapon, float);
				MEMBER(clip1, client::base_player_weapon, int);
				MEMBER(clip2, client::base_player_weapon, int);
				MEMBER_ARR(reserve_ammo_arr, client::base_player_weapon, 2, int);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class base_player_weapon : public econ_entity

			class ragdoll_prop_attached : public ragdoll_prop
			{
			public:
				MEMBER(bone_index_attached, client::ragdoll_prop_attached, uint32_t);
				MEMBER(ragdoll_attached_object_index, client::ragdoll_prop_attached, uint32_t);
				MEMBER(attachment_point_bone_space, client::ragdoll_prop_attached, vector);
				MEMBER(attachment_point_ragdoll_space, client::ragdoll_prop_attached, vector);
				MEMBER(vec_offset, client::ragdoll_prop_attached, vector);
				MEMBER(parent_time, client::ragdoll_prop_attached, float);
				MEMBER(has_parent, client::ragdoll_prop_attached, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ragdoll_prop_attached : public ragdoll_prop

			class base_combat_character : public base_flex
			{
			public:
				MEMBER(h_my_wearables, client::base_combat_character, network_utl_vector_base<chandle<econ_wearable>>);
				MEMBER(blood_color, client::base_combat_character, int);
				MEMBER(left_foot_attachment, client::base_combat_character, attachment_handle_t);
				MEMBER(right_foot_attachment, client::base_combat_character, attachment_handle_t);
				MEMBER(water_wake_mode, client::base_combat_character, base_combat_character__water_wake_mode_t);
				MEMBER(water_world_z, client::base_combat_character, float);
				MEMBER(water_next_trace_time, client::base_combat_character, float);
				MEMBER(field_of_view, client::base_combat_character, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class base_combat_character : public base_flex

			class base_player_pawn : public base_combat_character
			{
			public:
				MEMBER(weapon_services_ptr, client::base_player_pawn, cplayer_weapon_services*);
				MEMBER(item_services_ptr, client::base_player_pawn, cplayer_item_services*);
				MEMBER(autoaim_services_ptr, client::base_player_pawn, cplayer_autoaim_services*);
				MEMBER(observer_services_ptr, client::base_player_pawn, cplayer_observer_services*);
				MEMBER(water_services_ptr, client::base_player_pawn, cplayer_water_services*);
				MEMBER(use_services_ptr, client::base_player_pawn, cplayer_use_services*);
				MEMBER(flashlight_services_ptr, client::base_player_pawn, cplayer_flashlight_services*);
				MEMBER(camera_services_ptr, client::base_player_pawn, cplayer_camera_services*);
				MEMBER(movement_services_ptr, client::base_player_pawn, cplayer_movement_services*);
				MEMBER(server_view_angle_changes, client::base_player_pawn, utl_vector_embedded_network_var<view_angle_server_change_t>);
				MEMBER(highest_consumed_server_view_angle_change_index, client::base_player_pawn, uint32_t);
				MEMBER(v_angle, client::base_player_pawn, qangle);
				MEMBER(v_angle_previous, client::base_player_pawn, qangle);
				MEMBER(hide_hud, client::base_player_pawn, uint32_t);
				MEMBER(skybox3d, client::base_player_pawn, sky3dparams_t);
				MEMBER(death_time, client::base_player_pawn, game_time_t);
				MEMBER(vec_prediction_error, client::base_player_pawn, vector);
				MEMBER(prediction_error_time, client::base_player_pawn, game_time_t);
				MEMBER(vec_last_camera_setup_local_origin, client::base_player_pawn, vector);
				MEMBER(last_camera_setup_time, client::base_player_pawn, game_time_t);
				MEMBER(fovsensitivity_adjust, client::base_player_pawn, float);
				MEMBER(mouse_sensitivity, client::base_player_pawn, float);
				MEMBER(v_old_origin, client::base_player_pawn, vector);
				MEMBER(old_simulation_time, client::base_player_pawn, float);
				MEMBER(last_executed_command_number, client::base_player_pawn, int);
				MEMBER(last_executed_command_tick, client::base_player_pawn, int);
				MEMBER(h_controller, client::base_player_pawn, chandle<cbase_player_controller>);
				MEMBER(is_swapping_to_predictable_controller, client::base_player_pawn, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class base_player_pawn : public base_combat_character

			class csgoview_model : public predicted_view_model
			{
			public:
				MEMBER(should_ignore_offset_and_accuracy, client::csgoview_model, bool);
				MEMBER(weapon_parity, client::csgoview_model, uint32_t);
				MEMBER(old_weapon_parity, client::csgoview_model, uint32_t);
				MEMBER(last_known_associated_weapon_ent_index, client::csgoview_model, centity_index);
				MEMBER(need_to_queue_high_res_composite, client::csgoview_model, bool);
				MEMBER(v_lowered_weapon_offset, client::csgoview_model, qangle);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class csgoview_model : public predicted_view_model

			class csweapon_base : public base_player_weapon
			{
			public:
				MEMBER(fire_sequence_start_time, client::csweapon_base, float);
				MEMBER(fire_sequence_start_time_change, client::csweapon_base, int);
				MEMBER(fire_sequence_start_time_ack, client::csweapon_base, int);
				MEMBER(e_player_fire_event, client::csweapon_base, player_anim_event_t);
				MEMBER(e_player_fire_event_attack_type, client::csweapon_base, weapon_attack_type_t);
				MEMBER(seq_idle, client::csweapon_base, hsequence);
				MEMBER(seq_fire_primary, client::csweapon_base, hsequence);
				MEMBER(seq_fire_secondary, client::csweapon_base, hsequence);
				MEMBER(third_person_fire_sequences, client::csweapon_base, cutl_vector<hsequence>);
				MEMBER(h_current_third_person_sequence, client::csweapon_base, hsequence);
				MEMBER(silencer_bone_index, client::csweapon_base, int);
				MEMBER_ARR(third_person_sequences_arr, client::csweapon_base, 6, hsequence);
				MEMBER(client_previous_weapon_state, client::csweapon_base, csweapon_state_t);
				MEMBER(state, client::csweapon_base, csweapon_state_t);
				MEMBER(crosshair_distance, client::csweapon_base, float);
				MEMBER(ammo_last_check, client::csweapon_base, int);
				MEMBER(alpha, client::csweapon_base, int);
				MEMBER(scope_texture_id, client::csweapon_base, int);
				MEMBER(crosshair_texture_id, client::csweapon_base, int);
				MEMBER(gun_accuracy_position, client::csweapon_base, float);
				MEMBER(view_model_index, client::csweapon_base, uint32_t);
				MEMBER(reloads_with_clips, client::csweapon_base, bool);
				MEMBER(time_weapon_idle, client::csweapon_base, game_time_t);
				MEMBER(fire_on_empty, client::csweapon_base, bool);
				MEMBER(on_player_pickup, client::csweapon_base, centity_iooutput);
				MEMBER(weapon_mode, client::csweapon_base, csweapon_mode);
				MEMBER(turning_inaccuracy_delta, client::csweapon_base, float);
				MEMBER(vec_turning_inaccuracy_eye_dir_last, client::csweapon_base, vector);
				MEMBER(turning_inaccuracy, client::csweapon_base, float);
				MEMBER(accuracy_penalty, client::csweapon_base, float);
				MEMBER(last_accuracy_update_time, client::csweapon_base, game_time_t);
				MEMBER(accuracy_smoothed_for_zoom, client::csweapon_base, float);
				MEMBER(scope_zoom_end_time, client::csweapon_base, game_time_t);
				MEMBER(recoil_index, client::csweapon_base, int);
				MEMBER(recoil_index_1, client::csweapon_base, float);
				MEMBER(burst_mode, client::csweapon_base, bool);
				MEMBER(postpone_fire_ready_ticks, client::csweapon_base, game_tick_t);
				MEMBER(postpone_fire_ready_frac, client::csweapon_base, float);
				MEMBER(in_reload, client::csweapon_base, bool);
				MEMBER(reload_visually_complete, client::csweapon_base, bool);
				MEMBER(dropped_at_time, client::csweapon_base, game_time_t);
				MEMBER(is_hauled_back, client::csweapon_base, bool);
				MEMBER(silencer_on, client::csweapon_base, bool);
				MEMBER(time_silencer_switch_complete, client::csweapon_base, game_time_t);
				MEMBER(original_team_number, client::csweapon_base, int);
				MEMBER(next_attack_render_time_offset, client::csweapon_base, float);
				MEMBER(visuals_data_set, client::csweapon_base, bool);
				MEMBER(old_first_person_spectated_state, client::csweapon_base, bool);
				MEMBER(h_our_ping, client::csweapon_base, chandle<base_entity>);
				MEMBER(our_ping_index, client::csweapon_base, centity_index);
				MEMBER(vec_our_ping_pos, client::csweapon_base, vector);
				MEMBER(glow_for_ping, client::csweapon_base, bool);
				MEMBER(uiweapon, client::csweapon_base, bool);
				MEMBER(h_prev_owner, client::csweapon_base, chandle<csplayer_pawn>);
				MEMBER(drop_tick, client::csweapon_base, game_tick_t);
				MEMBER(donated, client::csweapon_base, bool);
				MEMBER(last_shot_time, client::csweapon_base, game_time_t);
				MEMBER(was_owned_by_ct, client::csweapon_base, bool);
				MEMBER(was_owned_by_terrorist, client::csweapon_base, bool);
				MEMBER(gun_heat, client::csweapon_base, float);
				MEMBER(smoke_attachments, client::csweapon_base, uint32_t);
				MEMBER(last_smoke_time, client::csweapon_base, game_time_t);
				MEMBER(next_client_fire_bullet_time, client::csweapon_base, float);
				MEMBER(next_client_fire_bullet_time_repredict, client::csweapon_base, float);
				MEMBER(iron_sight_controller, client::csweapon_base, iron_sight_controller);
				MEMBER(iron_sight_mode, client::csweapon_base, int);
				MEMBER(last_lostrace_failure_time, client::csweapon_base, game_time_t);
				MEMBER(num_empty_attacks, client::csweapon_base, int);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class csweapon_base : public base_player_weapon

			class csweapon_base_gun : public csweapon_base
			{
			public:
				MEMBER(zoom_level, client::csweapon_base_gun, int);
				MEMBER(burst_shots_remaining, client::csweapon_base_gun, int);
				MEMBER(silencer_bodygroup, client::csweapon_base_gun, int);
				MEMBER(silenced_model_index, client::csweapon_base_gun, int);
				MEMBER(in_precache, client::csweapon_base_gun, bool);
				MEMBER(needs_bolt_action, client::csweapon_base_gun, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class csweapon_base_gun : public csweapon_base

			class c4 : public csweapon_base
			{
			public:
				MEMBER_ARR(screen_text_arr, client::c4, 32, char);
				MEMBER(active_light_particle_index, client::c4, particle_index_t);
				MEMBER(e_active_light_effect, client::c4, c4_light_effect_t);
				MEMBER(started_arming, client::c4, bool);
				MEMBER(armed_time, client::c4, game_time_t);
				MEMBER(bomb_placed_animation, client::c4, bool);
				MEMBER(is_planting_via_use, client::c4, bool);
				MEMBER(entity_spotted_state, client::c4, entity_spotted_state_t);
				MEMBER(spot_rules, client::c4, int);
				MEMBER_ARR(played_arming_beeps_arr, client::c4, 7, bool);
				MEMBER(bomb_planted, client::c4, bool);
				MEMBER(dropped_from_death, client::c4, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class c4 : public csweapon_base

			class deagle : public csweapon_base_gun
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class deagle : public csweapon_base_gun

			class weapon_elite : public csweapon_base_gun
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class weapon_elite : public csweapon_base_gun

			class weapon_nova : public csweapon_base
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class weapon_nova : public csweapon_base

			class weapon_sawedoff : public csweapon_base
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class weapon_sawedoff : public csweapon_base

			class weapon_taser : public csweapon_base_gun
			{
			public:
				MEMBER(fire_time, client::weapon_taser, game_time_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class weapon_taser : public csweapon_base_gun

			class weapon_xm1014 : public csweapon_base
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class weapon_xm1014 : public csweapon_base

			class knife : public csweapon_base
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class knife : public csweapon_base

			class melee : public csweapon_base
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class melee : public csweapon_base

			class weapon_shield : public csweapon_base_gun
			{
			public:
				MEMBER(display_health, client::weapon_shield, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class weapon_shield : public csweapon_base_gun

			class molotov_projectile : public base_csgrenade_projectile
			{
			public:
				MEMBER(is_inc_grenade, client::molotov_projectile, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class molotov_projectile : public base_csgrenade_projectile

			class decoy_projectile : public base_csgrenade_projectile
			{
			public:
				MEMBER(decoy_shot_tick, client::decoy_projectile, int);
				MEMBER(client_last_known_decoy_shot_tick, client::decoy_projectile, int);
				MEMBER(time_particle_effect_spawn, client::decoy_projectile, game_time_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class decoy_projectile : public base_csgrenade_projectile

			class smoke_grenade_projectile : public base_csgrenade_projectile
			{
			public:
				MEMBER(smoke_effect_tick_begin, client::smoke_grenade_projectile, int);
				MEMBER(did_smoke_effect, client::smoke_grenade_projectile, bool);
				MEMBER(random_seed, client::smoke_grenade_projectile, int);
				MEMBER(v_smoke_color, client::smoke_grenade_projectile, vector);
				MEMBER(v_smoke_detonation_pos, client::smoke_grenade_projectile, vector);
				MEMBER(voxel_frame_data, client::smoke_grenade_projectile, cutl_vector<uint8_t>);
				MEMBER(smoke_volume_data_received, client::smoke_grenade_projectile, bool);
				MEMBER(smoke_effect_spawned, client::smoke_grenade_projectile, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class smoke_grenade_projectile : public base_csgrenade_projectile

			class base_csgrenade : public csweapon_base
			{
			public:
				MEMBER(client_predict_delete, client::base_csgrenade, bool);
				MEMBER(redraw, client::base_csgrenade, bool);
				MEMBER(is_held_by_player, client::base_csgrenade, bool);
				MEMBER(pin_pulled, client::base_csgrenade, bool);
				MEMBER(jump_throw, client::base_csgrenade, bool);
				MEMBER(e_throw_status, client::base_csgrenade, egrenade_throw_state);
				MEMBER(throw_time, client::base_csgrenade, game_time_t);
				MEMBER(throw_strength, client::base_csgrenade, float);
				MEMBER(throw_strength_approach, client::base_csgrenade, float);
				MEMBER(drop_time, client::base_csgrenade, game_time_t);
				MEMBER(next_hold_tick, client::base_csgrenade, game_tick_t);
				MEMBER(next_hold_frac, client::base_csgrenade, float);
				MEMBER(just_pulled_pin, client::base_csgrenade, bool);
				MEMBER(switch_weapon_after_throw, client::base_csgrenade, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class base_csgrenade : public csweapon_base

			class weapon_base_item : public csweapon_base
			{
			public:
				MEMBER(sequence_complete_timer, client::weapon_base_item, countdown_timer);
				MEMBER(redraw, client::weapon_base_item, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class weapon_base_item : public csweapon_base

			class item_dogtags : public item
			{
			public:
				MEMBER(owning_player, client::item_dogtags, chandle<csplayer_pawn>);
				MEMBER(killing_player, client::item_dogtags, chandle<csplayer_pawn>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class item_dogtags : public item

			class item_healthshot : public weapon_base_item
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class item_healthshot : public weapon_base_item

			class fists : public csweapon_base
			{
			public:
				MEMBER(playing_uninterruptable_act, client::fists, bool);
				MEMBER(uninterruptable_activity, client::fists, player_anim_event_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class fists : public csweapon_base

			class sensor_grenade : public base_csgrenade
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class sensor_grenade : public base_csgrenade

			class cbreach_charge : public csweapon_base
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbreach_charge : public csweapon_base

			class cbump_mine : public csweapon_base
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cbump_mine : public csweapon_base

			class ctablet : public csweapon_base
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ctablet : public csweapon_base

			class ctrip_wire_fire : public base_csgrenade
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ctrip_wire_fire : public base_csgrenade

			class cweapon_zone_repulsor : public csweapon_base_gun
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class cweapon_zone_repulsor : public csweapon_base_gun

			class csplayer_pawn_base : public base_player_pawn
			{
			public:
				MEMBER(m_pPingServices, client::csplayer_pawn_base, ccsplayer_ping_services*);
				MEMBER(m_pViewModelServices, client::csplayer_pawn_base, cplayer_view_model_services*);
				MEMBER_ARR(m_fRenderingClipPlane, client::csplayer_pawn_base, 4, float);
				MEMBER(m_nLastClipPlaneSetupFrame, client::csplayer_pawn_base, int);
				MEMBER(m_vecLastClipCameraPos, client::csplayer_pawn_base, vector);
				MEMBER(m_vecLastClipCameraForward, client::csplayer_pawn_base, vector);
				MEMBER(m_bClipHitStaticWorld, client::csplayer_pawn_base, bool);
				MEMBER(m_bCachedPlaneIsValid, client::csplayer_pawn_base, bool);
				MEMBER(m_pClippingWeapon, client::csplayer_pawn_base, csweapon_base*);
				MEMBER(m_previousPlayerState, client::csplayer_pawn_base, csplayer_state);
				MEMBER(m_flLastCollisionCeiling, client::csplayer_pawn_base, float);
				MEMBER(m_flLastCollisionCeilingChangeTime, client::csplayer_pawn_base, float);
				MEMBER(m_grenadeParameterStashTime, client::csplayer_pawn_base, game_time_t);
				MEMBER(m_bGrenadeParametersStashed, client::csplayer_pawn_base, bool);
				MEMBER(m_angStashedShootAngles, client::csplayer_pawn_base, qangle);
				MEMBER(m_vecStashedGrenadeThrowPosition, client::csplayer_pawn_base, vector);
				MEMBER(m_vecStashedVelocity, client::csplayer_pawn_base, vector);
				MEMBER_ARR(m_angShootAngleHistory, client::csplayer_pawn_base, 2, qangle);
				MEMBER_ARR(m_vecThrowPositionHistory, client::csplayer_pawn_base, 2, vector);
				MEMBER_ARR(m_vecVelocityHistory, client::csplayer_pawn_base, 2, vector);
				MEMBER(m_thirdPersonHeading, client::csplayer_pawn_base, qangle);
				MEMBER(m_flSlopeDropOffset, client::csplayer_pawn_base, float);
				MEMBER(m_flSlopeDropHeight, client::csplayer_pawn_base, float);
				MEMBER(m_vHeadConstraintOffset, client::csplayer_pawn_base, vector);
				MEMBER(m_bIsScoped, client::csplayer_pawn_base, bool);
				MEMBER(m_bIsWalking, client::csplayer_pawn_base, bool);
				MEMBER(m_bResumeZoom, client::csplayer_pawn_base, bool);
				MEMBER(m_iPlayerState, client::csplayer_pawn_base, csplayer_state);
				MEMBER(m_bIsDefusing, client::csplayer_pawn_base, bool);
				MEMBER(m_bIsGrabbingHostage, client::csplayer_pawn_base, bool);
				MEMBER(m_iBlockingUseActionInProgress, client::csplayer_pawn_base, csplayer_blocking_use_action_t);
				MEMBER(m_bIsRescuing, client::csplayer_pawn_base, bool);
				MEMBER(m_fImmuneToGunGameDamageTime, client::csplayer_pawn_base, game_time_t);
				MEMBER(m_fImmuneToGunGameDamageTimeLast, client::csplayer_pawn_base, game_time_t);
				MEMBER(m_bGunGameImmunity, client::csplayer_pawn_base, bool);
				MEMBER(m_bHasMovedSinceSpawn, client::csplayer_pawn_base, bool);
				MEMBER(m_fMolotovUseTime, client::csplayer_pawn_base, float);
				MEMBER(m_fMolotovDamageTime, client::csplayer_pawn_base, float);
				MEMBER(m_nWhichBombZone, client::csplayer_pawn_base, int);
				MEMBER(m_bInNoDefuseArea, client::csplayer_pawn_base, bool);
				MEMBER(m_iThrowGrenadeCounter, client::csplayer_pawn_base, int);
				MEMBER(m_bWaitForNoAttack, client::csplayer_pawn_base, bool);
				MEMBER(m_flGuardianTooFarDistFrac, client::csplayer_pawn_base, float);
				MEMBER(m_flDetectedByEnemySensorTime, client::csplayer_pawn_base, game_time_t);
				MEMBER(m_flNextGuardianTooFarWarning, client::csplayer_pawn_base, float);
				MEMBER(m_bSuppressGuardianTooFarWarningAudio, client::csplayer_pawn_base, bool);
				MEMBER(m_bKilledByTaser, client::csplayer_pawn_base, bool);
				MEMBER(m_iMoveState, client::csplayer_pawn_base, int);
				MEMBER(m_bCanMoveDuringFreezePeriod, client::csplayer_pawn_base, bool);
				MEMBER(m_flLowerBodyYawTarget, client::csplayer_pawn_base, float);
				MEMBER(m_bStrafing, client::csplayer_pawn_base, bool);
				MEMBER(m_flLastSpawnTimeIndex, client::csplayer_pawn_base, game_time_t);
				MEMBER(m_flEmitSoundTime, client::csplayer_pawn_base, game_time_t);
				MEMBER(m_iAddonBits, client::csplayer_pawn_base, int);
				MEMBER(m_iPrimaryAddon, client::csplayer_pawn_base, int);
				MEMBER(m_iSecondaryAddon, client::csplayer_pawn_base, int);
				MEMBER(m_iProgressBarDuration, client::csplayer_pawn_base, int);
				MEMBER(m_flProgressBarStartTime, client::csplayer_pawn_base, float);
				MEMBER(m_iDirection, client::csplayer_pawn_base, int);
				MEMBER(m_iShotsFired, client::csplayer_pawn_base, int);
				MEMBER(m_bNightVisionOn, client::csplayer_pawn_base, bool);
				MEMBER(m_bHasNightVision, client::csplayer_pawn_base, bool);
				MEMBER(m_flVelocityModifier, client::csplayer_pawn_base, float);
				MEMBER(m_flHitHeading, client::csplayer_pawn_base, float);
				MEMBER(m_nHitBodyPart, client::csplayer_pawn_base, int);
				MEMBER(m_iStartAccount, client::csplayer_pawn_base, int);
				MEMBER(m_vecIntroStartEyePosition, client::csplayer_pawn_base, vector);
				MEMBER(m_vecIntroStartPlayerForward, client::csplayer_pawn_base, vector);
				MEMBER(m_flClientDeathTime, client::csplayer_pawn_base, game_time_t);
				MEMBER(m_flNightVisionAlpha, client::csplayer_pawn_base, float);
				MEMBER(m_bScreenTearFrameCaptured, client::csplayer_pawn_base, bool);
				MEMBER(m_flFlashBangTime, client::csplayer_pawn_base, float);
				MEMBER(m_flFlashScreenshotAlpha, client::csplayer_pawn_base, float);
				MEMBER(m_flFlashOverlayAlpha, client::csplayer_pawn_base, float);
				MEMBER(m_bFlashBuildUp, client::csplayer_pawn_base, bool);
				MEMBER(m_bFlashDspHasBeenCleared, client::csplayer_pawn_base, bool);
				MEMBER(m_bFlashScreenshotHasBeenGrabbed, client::csplayer_pawn_base, bool);
				MEMBER(m_flFlashMaxAlpha, client::csplayer_pawn_base, float);
				MEMBER(m_flFlashDuration, client::csplayer_pawn_base, float);
				MEMBER(m_lastStandingPos, client::csplayer_pawn_base, vector);
				MEMBER(m_vecLastMuzzleFlashPos, client::csplayer_pawn_base, vector);
				MEMBER(m_angLastMuzzleFlashAngle, client::csplayer_pawn_base, qangle);
				MEMBER(m_hMuzzleFlashShape, client::csplayer_pawn_base, chandle<base_entity>);
				MEMBER(m_iHealthBarRenderMaskIndex, client::csplayer_pawn_base, int);
				MEMBER(m_flHealthFadeValue, client::csplayer_pawn_base, float);
				MEMBER(m_flHealthFadeAlpha, client::csplayer_pawn_base, float);
				MEMBER(m_nMyCollisionGroup, client::csplayer_pawn_base, int);
				MEMBER(m_ignoreLadderJumpTime, client::csplayer_pawn_base, float);
				MEMBER(m_ladderSurpressionTimer, client::csplayer_pawn_base, countdown_timer);
				MEMBER(m_lastLadderNormal, client::csplayer_pawn_base, vector);
				MEMBER(m_lastLadderPos, client::csplayer_pawn_base, vector);
				MEMBER(m_flDeathCCWeight, client::csplayer_pawn_base, float);
				MEMBER(m_bOldIsScoped, client::csplayer_pawn_base, bool);
				MEMBER(m_flPrevRoundEndTime, client::csplayer_pawn_base, float);
				MEMBER(m_flPrevMatchEndTime, client::csplayer_pawn_base, float);
				MEMBER(m_unCurrentEquipmentValue, client::csplayer_pawn_base, uint16_t);
				MEMBER(m_unRoundStartEquipmentValue, client::csplayer_pawn_base, uint16_t);
				MEMBER(m_unFreezetimeEndEquipmentValue, client::csplayer_pawn_base, uint16_t);
				MEMBER(m_vecThirdPersonViewPositionOverride, client::csplayer_pawn_base, vector);
				MEMBER(m_nHeavyAssaultSuitCooldownRemaining, client::csplayer_pawn_base, int);
				MEMBER(m_ArmorValue, client::csplayer_pawn_base, int);
				MEMBER(m_angEyeAngles, client::csplayer_pawn_base, qangle);
				MEMBER(m_fNextThinkPushAway, client::csplayer_pawn_base, float);
				MEMBER(m_bShouldAutobuyDMWeapons, client::csplayer_pawn_base, bool);
				MEMBER(m_bShouldAutobuyNow, client::csplayer_pawn_base, bool);
				MEMBER(m_bHud_MiniScoreHidden, client::csplayer_pawn_base, bool);
				MEMBER(m_bHud_RadarHidden, client::csplayer_pawn_base, bool);
				MEMBER(m_nLastKillerIndex, client::csplayer_pawn_base, centity_index);
				MEMBER(m_nLastConcurrentKilled, client::csplayer_pawn_base, int);
				MEMBER(m_nDeathCamMusic, client::csplayer_pawn_base, int);
				MEMBER(m_iIDEntIndex, client::csplayer_pawn_base, centity_index);
				MEMBER(m_delayTargetIDTimer, client::csplayer_pawn_base, countdown_timer);
				MEMBER(m_iTargetedWeaponEntIndex, client::csplayer_pawn_base, centity_index);
				MEMBER(m_iOldIDEntIndex, client::csplayer_pawn_base, centity_index);
				MEMBER(m_holdTargetIDTimer, client::csplayer_pawn_base, countdown_timer);
				MEMBER(m_flCurrentMusicStartTime, client::csplayer_pawn_base, float);
				MEMBER(m_flMusicRoundStartTime, client::csplayer_pawn_base, float);
				MEMBER(m_bDeferStartMusicOnWarmup, client::csplayer_pawn_base, bool);
				MEMBER(m_cycleLatch, client::csplayer_pawn_base, int);
				MEMBER(m_serverIntendedCycle, client::csplayer_pawn_base, float);
				MEMBER_ARR(m_vecPlayerPatchEconIndices, client::csplayer_pawn_base, 5, uint32_t);
				MEMBER(m_bHideTargetID, client::csplayer_pawn_base, bool);
				MEMBER(m_flLastSmokeOverlayAlpha, client::csplayer_pawn_base, float);
				MEMBER(m_flLastSmokeAge, client::csplayer_pawn_base, float);
				//MEMBER(last_smoke_overlay_alpha, client::csplayer_pawn_base, float);
				MEMBER(m_vLastSmokeOverlayColor, client::csplayer_pawn_base, vector);
				MEMBER(m_nPlayerSmokedFx, client::csplayer_pawn_base, particle_index_t);
				MEMBER(m_flNextMagDropTime, client::csplayer_pawn_base, float);
				MEMBER(m_nLastMagDropAttachmentIndex, client::csplayer_pawn_base, int);
				MEMBER(m_vecBulletHitModels, client::csplayer_pawn_base, cutl_vector<bullet_hit_model*>);
				MEMBER(m_vecPickupModelSlerpers, client::csplayer_pawn_base, cutl_vector<pick_up_model_slerper*>);
				MEMBER(m_vecLastAliveLocalVelocity, client::csplayer_pawn_base, vector);
				MEMBER(m_entitySpottedState, client::csplayer_pawn_base, entity_spotted_state_t);
				MEMBER(m_nSurvivalTeamNumber, client::csplayer_pawn_base, int);
				MEMBER(m_bGuardianShouldSprayCustomXMark, client::csplayer_pawn_base, bool);
				MEMBER(m_bHasDeathInfo, client::csplayer_pawn_base, bool);
				MEMBER(m_flDeathInfoTime, client::csplayer_pawn_base, float);
				MEMBER(m_vecDeathInfoOrigin, client::csplayer_pawn_base, vector);
				MEMBER(m_bKilledByHeadshot, client::csplayer_pawn_base, bool);
				MEMBER(m_hOriginalController, client::csplayer_pawn_base, chandle<ccsplayer_controller>);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class csplayer_pawn_base : public base_player_pawn


			class csobserver_pawn : public csplayer_pawn_base
			{
			public:
				MEMBER(h_detect_parent_change, client::csobserver_pawn, centity_handle);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class csobserver_pawn : public csplayer_pawn_base

			class csplayer_pawn : public csplayer_pawn_base
			{
			public:
				MEMBER(bullet_services_ptr, client::csplayer_pawn, ccsplayer_bullet_services*);
				MEMBER(hostage_services_ptr, client::csplayer_pawn, ccsplayer_hostage_services*);
				MEMBER(buy_services_ptr, client::csplayer_pawn, ccsplayer_buy_services*);
				MEMBER(glow_services_ptr, client::csplayer_pawn, ccsplayer_glow_services*);
				MEMBER(action_tracking_services_ptr, client::csplayer_pawn, ccsplayer_action_tracking_services*);
				MEMBER(health_shot_boost_expiration_time, client::csplayer_pawn, game_time_t);
				MEMBER(last_fired_weapon_time, client::csplayer_pawn, game_time_t);
				MEMBER(has_female_voice, client::csplayer_pawn, bool);
				MEMBER(landseconds, client::csplayer_pawn, float);
				MEMBER(old_fall_velocity, client::csplayer_pawn, float);
				MEMBER_ARR(last_place_name_arr, client::csplayer_pawn, 18, char);
				MEMBER(prev_defuser, client::csplayer_pawn, bool);
				MEMBER(prev_helmet, client::csplayer_pawn, bool);
				MEMBER(prev_armor_val, client::csplayer_pawn, int);
				MEMBER(prev_grenade_ammo_count, client::csplayer_pawn, int);
				MEMBER(un_previous_weapon_hash, client::csplayer_pawn, uint32_t);
				MEMBER(un_weapon_hash, client::csplayer_pawn, uint32_t);
				MEMBER(in_buy_zone, client::csplayer_pawn, bool);
				MEMBER(previously_in_buy_zone, client::csplayer_pawn, bool);
				MEMBER(aim_punch_angle, client::csplayer_pawn, qangle);
				MEMBER(aim_punch_angle_vel, client::csplayer_pawn, qangle);
				MEMBER(aim_punch_tick_base, client::csplayer_pawn, int);
				MEMBER(aim_punch_tick_fraction, client::csplayer_pawn, float);
				MEMBER(aim_punch_cache, client::csplayer_pawn, cutl_vector<qangle>);
				MEMBER(in_landing, client::csplayer_pawn, bool);
				MEMBER(landing_time, client::csplayer_pawn, float);
				MEMBER(in_hostage_rescue_zone, client::csplayer_pawn, bool);
				MEMBER(in_bomb_zone, client::csplayer_pawn, bool);
				MEMBER(is_buy_menu_open, client::csplayer_pawn, bool);
				MEMBER(time_of_last_injury, client::csplayer_pawn, game_time_t);
				MEMBER(next_spray_decal_time, client::csplayer_pawn, game_time_t);
				MEMBER(retakes_offering, client::csplayer_pawn, int);
				MEMBER(retakes_offering_card, client::csplayer_pawn, int);
				MEMBER(retakes_has_defuse_kit, client::csplayer_pawn, bool);
				MEMBER(retakes_mvplast_round, client::csplayer_pawn, bool);
				MEMBER(retakes_mvpboost_item, client::csplayer_pawn, int);
				MEMBER(retakes_mvpboost_extra_utility, client::csplayer_pawn, loadout_slot_t);
				MEMBER(need_to_re_apply_gloves, client::csplayer_pawn, bool);
				MEMBER(econ_gloves, client::csplayer_pawn, econ_item_view);
				MEMBER(must_sync_ragdoll_state, client::csplayer_pawn, bool);
				MEMBER(ragdoll_damage_bone, client::csplayer_pawn, int);
				MEMBER(v_ragdoll_damage_force, client::csplayer_pawn, vector);
				MEMBER(v_ragdoll_damage_position, client::csplayer_pawn, vector);
				MEMBER_ARR(ragdoll_damage_weapon_name_arr, client::csplayer_pawn, 64, char);
				MEMBER(ragdoll_damage_headshot, client::csplayer_pawn, bool);
				MEMBER(v_ragdoll_server_origin, client::csplayer_pawn, vector);
				MEMBER(last_head_bone_transform_is_valid, client::csplayer_pawn, bool);
				MEMBER(last_land_time, client::csplayer_pawn, game_time_t);
				MEMBER(on_ground_last_tick, client::csplayer_pawn, bool);
				MEMBER(q_death_eye_angles, client::csplayer_pawn, qangle);
				MEMBER(skip_one_head_constraint_update, client::csplayer_pawn, bool);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class csplayer_pawn : public csplayer_pawn_base

			class hostage : public base_combat_character
			{
			public:
				MEMBER(entity_spotted_state, client::hostage, entity_spotted_state_t);
				MEMBER(leader, client::hostage, chandle<base_entity>);
				MEMBER(reuse_timer, client::hostage, countdown_timer);
				MEMBER(vel, client::hostage, vector);
				MEMBER(is_rescued, client::hostage, bool);
				MEMBER(jumped_this_frame, client::hostage, bool);
				MEMBER(hostage_state, client::hostage, int);
				MEMBER(hands_have_been_cut, client::hostage, bool);
				MEMBER(h_hostage_grabber, client::hostage, chandle<csplayer_pawn>);
				MEMBER(last_grab_time, client::hostage, game_time_t);
				MEMBER(vec_grabbed_pos, client::hostage, vector);
				MEMBER(rescue_start_time, client::hostage, game_time_t);
				MEMBER(grab_success_time, client::hostage, game_time_t);
				MEMBER(drop_start_time, client::hostage, game_time_t);
				MEMBER(dead_or_rescued_time, client::hostage, game_time_t);
				MEMBER(blink_timer, client::hostage, countdown_timer);
				MEMBER(look_at, client::hostage, vector);
				MEMBER(look_around_timer, client::hostage, countdown_timer);
				MEMBER(is_init, client::hostage, bool);
				MEMBER(eye_attachment, client::hostage, attachment_handle_t);
				MEMBER(chest_attachment, client::hostage, attachment_handle_t);
				MEMBER(prediction_owner_ptr, client::hostage, cbase_player_controller*);
				MEMBER(newest_alpha_think_time, client::hostage, game_time_t);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class hostage : public base_combat_character

			class net_test_base_combat_character : public base_combat_character
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class net_test_base_combat_character : public base_combat_character

			class ak47 : public csweapon_base_gun
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class ak47 : public csweapon_base_gun

			class weapon_aug : public csweapon_base_gun
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class weapon_aug : public csweapon_base_gun

			class weapon_awp : public csweapon_base_gun
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class weapon_awp : public csweapon_base_gun

			class weapon_bizon : public csweapon_base_gun
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class weapon_bizon : public csweapon_base_gun

			class weapon_famas : public csweapon_base_gun
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class weapon_famas : public csweapon_base_gun

			class weapon_five_seven : public csweapon_base_gun
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class weapon_five_seven : public csweapon_base_gun

			class weapon_g3_sg1 : public csweapon_base_gun
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class weapon_g3_sg1 : public csweapon_base_gun

			class weapon_galil_ar : public csweapon_base_gun
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class weapon_galil_ar : public csweapon_base_gun

			class weapon_glock : public csweapon_base_gun
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class weapon_glock : public csweapon_base_gun

			class weapon_hkp2000 : public csweapon_base_gun
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class weapon_hkp2000 : public csweapon_base_gun

			class weapon_uspsilencer : public csweapon_base_gun
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class weapon_uspsilencer : public csweapon_base_gun

			class weapon_m4_a1 : public csweapon_base_gun
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class weapon_m4_a1 : public csweapon_base_gun

			class weapon_m4_a1_silencer : public csweapon_base_gun
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class weapon_m4_a1_silencer : public csweapon_base_gun

			class weapon_mac10 : public csweapon_base_gun
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class weapon_mac10 : public csweapon_base_gun

			class weapon_mag7 : public csweapon_base_gun
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class weapon_mag7 : public csweapon_base_gun

			class weapon_mp5_sd : public csweapon_base_gun
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class weapon_mp5_sd : public csweapon_base_gun

			class weapon_mp7 : public csweapon_base_gun
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class weapon_mp7 : public csweapon_base_gun

			class weapon_mp9 : public csweapon_base_gun
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class weapon_mp9 : public csweapon_base_gun

			class weapon_negev : public csweapon_base_gun
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class weapon_negev : public csweapon_base_gun

			class weapon_p250 : public csweapon_base_gun
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class weapon_p250 : public csweapon_base_gun

			class weapon_cz75a : public csweapon_base_gun
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class weapon_cz75a : public csweapon_base_gun

			class weapon_p90 : public csweapon_base_gun
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class weapon_p90 : public csweapon_base_gun

			class weapon_scar20 : public csweapon_base_gun
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class weapon_scar20 : public csweapon_base_gun

			class weapon_sg556 : public csweapon_base_gun
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class weapon_sg556 : public csweapon_base_gun

			class weapon_ssg08 : public csweapon_base_gun
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class weapon_ssg08 : public csweapon_base_gun

			class weapon_tec9 : public csweapon_base_gun
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class weapon_tec9 : public csweapon_base_gun

			class weapon_ump45 : public csweapon_base_gun
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class weapon_ump45 : public csweapon_base_gun

			class weapon_m249 : public csweapon_base_gun
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class weapon_m249 : public csweapon_base_gun

			class weapon_revolver : public csweapon_base_gun
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class weapon_revolver : public csweapon_base_gun

			class molotov_grenade : public base_csgrenade
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class molotov_grenade : public base_csgrenade

			class incendiary_grenade : public molotov_grenade
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class incendiary_grenade : public molotov_grenade

			class decoy_grenade : public base_csgrenade
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class decoy_grenade : public base_csgrenade

			class flashbang : public base_csgrenade
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class flashbang : public base_csgrenade

			class hegrenade : public base_csgrenade
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class hegrenade : public base_csgrenade

			class smoke_grenade : public base_csgrenade
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class smoke_grenade : public base_csgrenade

			class csgo_preview_player : public csplayer_pawn
			{
			public:
				MEMBER(animgraph, client::csgo_preview_player, cutl_string);
				MEMBER(animgraph_character_mode_string, client::csgo_preview_player, cutl_string);
				MEMBER(initial_model_scale, client::csgo_preview_player, float);
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class csgo_preview_player : public csplayer_pawn

			class csgo_preview_player_alias_csgo_player_previewmodel : public csgo_preview_player
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class csgo_preview_player_alias_csgo_player_previewmodel : public csgo_preview_player

			class csgo_team_preview_model : public csgo_preview_player
			{
			public:
				// empty.
				template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
			}; // class csgo_team_preview_model : public csgo_preview_player

		} // namespace client

	} // namespace schema

} // namespace sdk

#endif // SDK_SCHEMA_CLIENT_H
