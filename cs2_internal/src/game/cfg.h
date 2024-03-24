#pragma once

#include <unordered_map>
#include <gui/values.h>
#include <ren/types/pos.h>
#include <ren/types/color.h>
#include <chrono>

template <typename T>
using setting = evo::gui::value_param<T>;

template <typename T>
using arr_setting = evo::gui::value_param_array<T>;

struct cfg_t
{
	using bitset = evo::gui::bits;
	using color = evo::ren::color;

	enum wep_group
	{
		grp_auto,
		grp_scout,
		grp_awp,
		grp_heavy_pistol,
		grp_pistol,
		grp_other,
		grp_max,
	};

	enum low_perf
	{
		low_perf_targets,
		low_perf_scan_accuracy,
		low_perf_max,
	};

	enum autostop
	{
		autostop_lethal,
		autostop_inbetween,
		autostop_predictive,
		autostop_max,
	};

	enum fallback_mode
	{
		fallback_off,
		fallback_adaptive,
		fallback_prefer_safepoint,
		fallback_max,
	};

	enum safety
	{
		safety_air,
		safety_lethal,
		safety_moving,
		safety_standing,
		safety_limbs,
		safety_override,
		safety_risky,
		safety_max,
	};

	enum hitboxes
	{
		hitboxes_head,
		hitboxes_neck,
		hitboxes_chest,
		hitboxes_stomach,
		hitboxes_legs,
		hitboxes_feet,
		hitboxes_arms,
		hitboxes_max,
	};

	enum legit_hitboxes
	{
		lh_head,
		lh_chest,
		lh_body,
		lh_pelvis,
		lh_max,
	};

	enum legit_disablers
	{
		legit_disablers_smoke,
		legit_disablers_flash,
		legit_disablers_max,
	};

	enum indicators
	{
		indicators_lc,
		indicators_lby,
		indicators_dt,
		indicators_st,
		indicators_do,
		indicators_safe,
		indicators_ping,
		indicators_tp,
		indicators_fs,
		indicators_head,
		indicators_baim,
		indicators_manual,
		indicators_max,
	};

	enum aa_yaw_base
	{
		aa_yaw_base_viewangles,
		aa_yaw_base_at_target,
		aa_yaw_base_max,
	};

	enum aa_yaw
	{
		aa_yaw_none,
		aa_yaw_backwards,
		aa_yaw_custom,
		aa_yaw_max,
	};

	enum aa_yaw_jitter
	{
		aa_yaw_jitter_none,
		aa_yaw_jitter_center,
		aa_yaw_jitter_offset,
		aa_yaw_jitter_max,
	};

	enum aa_pitch
	{
		aa_pitch_none,
		aa_pitch_down,
		aa_pitch_up,
		aa_pitch_zero,
		aa_pitch_custom,
		aa_pitch_max,
	};

	enum freestand_fake
	{
		freestand_fake_none,
		freestand_fake_normal,
		freestand_fake_opposite,
		freestand_fake_max,
	};

	enum choke_mode
	{
		choke_mode_none,
		choke_mode_always_on,
		choke_mode_adaptive,
		choke_mode_max,
	};

	enum fake_yaw
	{
		fake_static,
		fake_opposite,
		fake_jitter,
		fake_peek_fake,
		fake_peek_real,
		fake_max,
	};

	enum strafing
	{
		strafing_default,
		strafing_never_slide,
		strafing_always_slide,
		strafing_max,
	};

	enum hitmarker
	{
		hitmarker_none,
		hitmarker_world,
		hitmarker_cross,
		hitmarker_max,
	};

	enum hitsound
	{
		hitsound_none,
		hitsound_bell,
		hitsound_cod,
		hitsound_fatality,
		hitsound_arena_switch,
		hitsound_bepis,
		hitsound_phonk,
		hitsound_sparkle,
		hitsound_cock,
		hitsound_max,
	};

	enum autostrafe
	{
		autostrafe_viewangles,
		autostrafe_movement_keys,
		autostrafe_easy_strafe,
		autostrafe_jump_release,
		autostrafe_max,
	};

	enum buybot_primary
	{
		buybot_primary_none,
		buybot_primary_ak47,
		buybot_primary_sg556,
		buybot_primary_awp,
		buybot_primary_ssg08,
		buybot_primary_scar20,
		buybot_primary_negev,
		buybot_primary_max,
	};

	enum buybot_pistol
	{
		buybot_pistol_none,
		buybot_pistol_deagle,
		buybot_pistol_elites,
		buybot_pistol_tec9,
		buybot_pistol_p250,
		buybot_pistol_fiveseven,
		buybot_pistol_max,
	};

	enum buybot_kevlar
	{
		buybot_kevlar_none,
		buybot_kevlar_k,
		buybot_kevlar_kh,
		buybot_kevlar_max,
	};

	enum spread_circle
	{
		spread_circle_off,
		spread_circle_gradient,
		spread_circle_rainbow,
		spread_circle_rainbow_spinning,
		spread_circle_max,
	};

	enum vis_disablers
	{
		vis_disable_model_fade,
		vis_disable_dormancy_interp,
		vis_disable_health_bar_interp,
		vis_disable_esp_fade,
		vis_disable_max,
	};

	enum healthbar_style
	{
		healthbar_solid,
		healthbar_gradient,
		healthbar_max,
	};

	enum world_esp
	{
		world_weapons,
		world_grenades,
		world_c4,
		world_dangerzone,
		world_max,
	};

	enum esp_flags
	{
		esp_flag_scoped,
		esp_flag_bomb,
		esp_flag_lc,
		esp_flag_fd,
		esp_flag_xp,
		esp_flag_armor,
		esp_flag_hit,
		esp_flag_money,
		esp_flag_defuser,
		esp_flag_taser,
		esp_flag_immune,
		esp_flag_max,
	};

	enum cham_material
	{
		cham_none,
		cham_normal,
		cham_flat,
		cham_rim_glow,
		cham_contour,
		cham_flow,
		cham_acrylic,
		cham_legacy,
		cham_sprite,
		cham_max,
	};

	enum noscope
	{
		noscope_none,
		noscope_static,
		noscope_dynamic,
		noscope_gradient_static,
		noscope_gradient_dynamic,
		noscope_max,
	};

	enum dpi_scale
	{
		dpi_automatic,
		dpi_50,
		dpi_75,
		dpi_100,
		dpi_125,
		dpi_150,
		dpi_200
	};

	enum leg_slide
	{
		leg_default,
		leg_never,
		leg_always,
		leg_max,
	};

	enum roll_lean
	{
		lean_none,
		lean_static,
		lean_extend_fake,
		lean_invert_fake,
		lean_jitter,
		lean_max,
	};

	enum defensive_lag
	{
		def_none,
		def_in_air,
		def_always_on,
		def_max,
	};

	enum defensive_fake
	{
		dfake_none,
		dfake_yaw,
		dfake_yaw_flip,
		dfake_quick_yaw,
		dfake_quick_yaw_flip,
		dfake_max,
	};

	enum resolver_mode
	{
		res_roll,
		res_roll_disabled,
		res_max,
	};

	struct config_data
	{
		std::string key;
		std::string name;
		bool has_new_version{};
	};

	class data_section_t : public evo::gui::value_entry
	{
	public:
		static constexpr uint32_t magic = 0xFFFF0000;

		void reset() override;
		size_t get_size() override;
		void serialize(std::ostream &stream) override;
		bool deserialize(std::istream &stream) override;

		std::unordered_map<uint64_t, evo::gui::value_entry *> data;
	};

	class autoload_section_t : public evo::gui::value_entry
	{
	public:
		static constexpr uint32_t magic = 0xFFFF0001;

		void reset() override;
		size_t get_size() override;
		void serialize(std::ostream &stream) override;
		bool deserialize(std::istream &stream) override;

		std::vector<uint32_t> data;
	};

	// all the parameters
	struct aim_t
	{
		setting<bool> enabled, autofire, anti_exploit, fallback_on_key, hsmode, knife_bot, zeus_bot, slide, fake_duck, punch, doubletap, hideshot, silent, dormant,
					  extend_peek{true}, visualize, baim_on_key, stop_in_air;

		setting<float> zeus_hc, fov, ping_spike_amt{0.f};
		setting<bitset> low_perf, resolver_mode{1 << res_roll}, dt_exploit{1 << def_none};

		setting<color> visualize_color_safe{color::white()}, visualize_color{color::white()};

		bool headshot_only();
	} aim;

	struct cur_weapon_config_t
	{
		float hitchance, pointscale, mindmg, mindmg_override;
		bool mindmg_override_enabled, autostop, autorevolver, scout_jumpshot, autoscope, ignore_limbs;
		bitset autostop_mode, baim, extra_safety, force_safe, hitboxes, pointscales, fallback_mode;

		int get_true_mindmg() const
		{
			return mindmg_override_enabled ? mindmg_override : mindmg;
		}

		//int get_mindmg(C_CSPlayer *player = nullptr, int highest_damage = 0) const;
	};

	struct weapon_config_t
	{
		arr_setting<float> hitchance, pointscale, mindmg, mindmg_override;
		arr_setting<bool> mindmg_override_enabled, autostop, autorevolver, scout_jumpshot, autoscope, ignore_limbs;
		arr_setting<bitset> autostop_mode, baim, extra_safety, force_safe, hitboxes, pointscales, fallback_mode{1 << fallback_off};

		arr_setting<bool> cfgs;

		bool is_scout{};
		cur_weapon_config_t cur{};

		void copy(uint32_t from, uint32_t to)
		{
			hitchance[from].copy(hitchance[to]);
			pointscale[from].copy(pointscale[to]);
			mindmg[from].copy(mindmg[to]);
			mindmg_override[from].copy(mindmg_override[to]);
			mindmg_override_enabled[from].copy(mindmg_override_enabled[to]);
			autostop[from].copy(autostop[to]);
			autorevolver[from].copy(autorevolver[to]);
			scout_jumpshot[from].copy(scout_jumpshot[to]);
			autoscope[from].copy(autoscope[to]);
			ignore_limbs[from].copy(ignore_limbs[to]);
			autostop_mode[from].copy(autostop_mode[to]);
			baim[from].copy(baim[to]);
			extra_safety[from].copy(extra_safety[to]);
			force_safe[from].copy(force_safe[to]);
			hitboxes[from].copy(hitboxes[to]);
			pointscales[from].copy(pointscales[to]);
			fallback_mode[from].copy(fallback_mode[to]);
		}

		//void update_current_config(C_BaseCombatWeapon *wep);
	} weapon_config;

	struct cur_weapon_legit_config_t
	{
		bool magnet, triggerbot, rcs, triggerbot_only_in_scope, magnet_only_in_scope;
		float magnet_smooth, magnet_fov, magnet_speed, override_factor, limit_factor, target_delay, reaction_time, rcs_speed;
		bitset magnet_hitboxes;
	};

	struct legit_t
	{
		setting<bool> enabled, quick_stop;
		setting<bitset> disablers;
		setting<float> backtrack;

		struct legit_weapon_config_t
		{
			arr_setting<bool> magnet, triggerbot, rcs, triggerbot_only_in_scope, magnet_only_in_scope;
			arr_setting<float> magnet_smooth, magnet_fov, magnet_speed, override_factor, limit_factor, target_delay, reaction_time, rcs_speed;
			arr_setting<bitset> magnet_hitboxes;

			arr_setting<bool> cfgs;
			cur_weapon_legit_config_t cur{};

			void copy(uint32_t from, uint32_t to)
			{
				magnet[from].copy(magnet[to]);
				triggerbot[from].copy(triggerbot[to]);
				rcs[from].copy(rcs[to]);
				triggerbot_only_in_scope[from].copy(triggerbot_only_in_scope[to]);
				magnet_only_in_scope[from].copy(magnet_only_in_scope[to]);
				magnet_smooth[from].copy(magnet_smooth[to]);
				magnet_fov[from].copy(magnet_fov[to]);
				magnet_speed[from].copy(magnet_speed[to]);
				override_factor[from].copy(override_factor[to]);
				limit_factor[from].copy(limit_factor[to]);
				target_delay[from].copy(target_delay[to]);
				reaction_time[from].copy(reaction_time[to]);
				rcs_speed[from].copy(rcs_speed[to]);
				magnet_hitboxes[from].copy(magnet_hitboxes[to]);
			}

			//void update_current_config(C_BaseCombatWeapon *wep);
		} weapon_config;

		bool legit_enabled();
	} legit;

	struct aa_t
	{
		setting<bool> enabled, spin, jitter, at_target, aa_edge, freestand, add_enabled, ensure_lean, flip_fake, flip_lean, manual, manual_left, manual_right, manual_back
					  , jitter_random;
		setting<bitset> indicators, yaw{1 << aa_yaw_none}, yaw_base{1 << aa_yaw_base_viewangles}, yaw_jitter{1 << aa_yaw_jitter_none}, fake{1 << fake_static}, pitch
							{1 << aa_pitch_none}, choke_mode{1 << choke_mode_none}, strafing{1 << strafing_default}, lean_type{1 << lean_none}, dt_exploit_angles{
							1 << dfake_none};
		setting<float> spin_speed, spin_range, jitter_range, add, choke_limit, fake_amount, fake_limit{60.f}, compensate_angle, lean_amount, pitch_value, yaw_value,
					   yaw_jitter_value;

		bool fake_yaw_enabled()
		{
			return fake->test(cfg_t::fake_opposite) || fake_amount.get() != 0.f;
		}
	} aa;

	struct misc_t
	{
		setting<bool> compensate_grenade, peek_assist, peek_assist_retreat_on_release, birthday_mode, instant_unduck, bhop, fov_enabled, vm_fov_enabled, radar,
					  remove_flash, remove_smoke, remove_blur, avoid_walls, thirdperson, thirdperson_dead, thirdperson_grenade, thirdperson_no_interp, force_crosshair,
					  autoaccept, reveal_ranks, hurtlog, hurtlog_info, buylog, clantag, preservedn, impacts, grenade_tracer, grenade_helper, sv_pure,
					  shared_esp_with_enemy, shared_esp, buybot_defuser, buybot_taser, buybot_grenades, debug_info, edge_jump, goblin_mode, scope_invert;
		setting<color> peek_assist_col{{46, 115, 201}}, peek_assist_col2{{201, 48, 63}}, scope_line_color{color::black()}, impacts_color{{255, 0, 0}}, impacts_color2
						   {{0, 0, 155}}, box_color{color::white()}, tracer_color{color::white()};
		setting<float> fov_scope, fov{90.f}, vm_fov{90.f}, hitsound_volume, scope_line_size, autostrafe_smoothing, thirdperson_dist{30.f}, transparency_in_scope,
					   transparency_nade, aspect;
		setting<bitset> hitsound_select{1 << hitsound_none}, autostrafe, buybot_primary{0}, buybot_pistol{0}, noscope{1 << noscope_none}, buybot_kevlar_helmet{0},
						hitmarker{};

		setting<bitset> dpi_scale{1 << dpi_automatic}; ;
		bool in_peek_assist();
	} misc;

	struct visuals_t
	{
		setting<bool> disable_postprocessing, dark, out_of_fov, autowall_crosshair;
		setting<float> darkness, prop_transparency, out_of_fov_dst{50.f}, out_of_fov_size{24.f}, ragdoll_thrust{100.f};
		setting<color> skybox_color{color::white()}, dark_color{color::white()}, prop_color{color::white()}, spread_circle_color1{color::white()}, spread_circle_color2
						   {color::white()}, out_of_fov_col{color::white()};
		setting<bitset> skybox{0}, spread_circle_type{1 << spread_circle_off}, model_t, model_ct, mask_t, mask_ct, disablers, preview{0};

		struct
		{
			struct cham_t
			{
				setting<bitset> mat{0};
				setting<bool> ignorez;
				setting<color> col1{color::white()}, col2{color::white()}, col_z{color::white()};
			};

			setting<bool> enable, check_occlusion, enemy_his, local_interp, local_pulsate, local_nosleeve;
			setting<color> enemy_his_col{color::white()};
			cham_t team_pl, team_rag, team_att, enemy_pl, enemy_shot, enemy_rag, enemy_att, local_pl, local_fake, local_arms, local_att;
		} chams;

		struct
		{
			setting<bool> enabled, ammo, armor, ping, health, name, weapon, weapon_icon, box, skeleton, history_skeleton, sound_esp;
			setting<color> ammo_color{color::white()}, armor_color{color::white()}, ping_color{color::white()}, health_color_1{{130, 0, 0}}, health_color_2{{130, 180, 0}}
						   , name_color{color::white()}, weapon_color{color::white()}, weapon_icon_color{color::white()}, box_color{color::white()}, skeleton_color
							   {color::white()}, history_skeleton_color{color::white()}, sound_esp_color{color::white()};
			setting<bitset> health_style{1 << healthbar_solid}, flags;

			struct
			{
				setting<bool> weapon_icons;
				setting<bitset> enabled;
				setting<color> color{color::white()};
			} world;

			struct
			{
				setting<bool> enabled, team, enemy, local;
				setting<color> team_color{color::white()}, enemy_color{color::white()}, local_color{color::white()};
			} glow;
		} esp;

		struct
		{
			setting<bool> enabled, enemy_enabled, team_enabled, local_enabled;
			setting<float> width{8.f};
			setting<color> enemy_color{color::white()}, team_color{color::white()}, local_color{color::white()};
		} beams;

		struct
		{
			setting<bitset> glow;
			setting<color> glow_color{color::white()};
		} world;
	} visuals;

	struct lua_t
	{
		setting<bool> allow_insecure;
	} lua;

	struct menu_t
	{
		setting<bool> autoselect_weapon, show_all_skins;

		setting<bool> equip_ct, equip_t;
		setting<int> seed, wear, stat_trak{-1};
		setting<bitset> sel_weapon{0}, sel_skin{0}, sel_inv{0};
	} menu;

	void init(); // initializes funky stuff
	void save(const std::string &filename); // save to file
	void save(std::ostream &stream); // save to stream
	bool load(const std::string &filename); // load from file
	bool load(std::istream &stream, bool reset = true); // load from stream
	void drop(bool reset = false); // reset everything

	bool register_lua_bool_entry(uint64_t id);
	bool register_lua_float_entry(uint64_t id);
	bool register_lua_bit_entry(uint64_t id);
	bool register_lua_color_entry(uint64_t id);

	std::vector<config_data> cfg_list;
	std::atomic_bool is_requesting, has_data, config_created;
	std::chrono::time_point<std::chrono::system_clock> last_cfg_action{};

	data_section_t data;
	autoload_section_t autoload;

	std::string want_to_change{}, last_changed_config{}, currently_loaded{}, current_data{};
	bool is_dangerous{}, is_loading{}, is_updating{};

	struct lua_data_t
	{
		std::unordered_map<uint64_t, setting<bool>> b;
		std::unordered_map<uint64_t, setting<float>> f{};
		std::unordered_map<uint64_t, setting<bitset>> s{};
		std::unordered_map<uint64_t, setting<color>> c{};
	} lua_data;

private:
	static constexpr uint32_t magic = 0x00544146;
	// "FAT\x00" - highest byte may act as version, in case major changes are there
	// always better to tell user they're dumb than crash the game...

	template <typename T>
	void add_section(T *v)
	{
		section_decoders[T::magic] = v;
	}

	std::unordered_map<uint64_t, evo::gui::value_entry *> section_decoders;
};

extern cfg_t cfg;
