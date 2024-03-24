#pragma once
#include <game/game.h>
#include <sdk/mem_alloc.h>

namespace sdk
{
	enum flags : uint32_t
	{
		fl_onground = (1 << 0),
		fl_ducking = (1 << 1),
		fl_waterjump = (1 << 3),
		fl_ontrain = (1 << 4),
		fl_inrain = (1 << 5),
		fl_frozen = (1 << 6),
		fl_atcontrols = (1 << 7),
		fl_client = (1 << 8),
		fl_fakeclient = (1 << 9),
		fl_inwater = (1 << 10),
	};

	enum weapon_id : uint32_t
	{
		weapon_deagle = 1,
		weapon_elite = 2,
		weapon_fiveseven = 3,
		weapon_glock = 4,
		weapon_ak47 = 7,
		weapon_aug = 8,
		weapon_awp = 9,
		weapon_famas = 10,
		weapon_g3sg1 = 11,
		weapon_galilar = 13,
		weapon_m249 = 14,
		weapon_m4a1 = 16,
		weapon_mac10 = 17,
		weapon_p90 = 19,
		weapon_zone_repulsor = 20,
		weapon_mp5sd = 23,
		weapon_ump45 = 24,
		weapon_xm1014 = 25,
		weapon_bizon = 26,
		weapon_mag7 = 27,
		weapon_negev = 28,
		weapon_sawedoff = 29,
		weapon_tec9 = 30,
		weapon_taser = 31,
		weapon_hkp2000 = 32,
		weapon_mp7 = 33,
		weapon_mp9 = 34,
		weapon_nova = 35,
		weapon_p250 = 36,
		weapon_shield = 37,
		weapon_scar20 = 38,
		weapon_sg556 = 39,
		weapon_ssg08 = 40,
		weapon_knifegg = 41,
		weapon_knife = 42,
		weapon_flashbang = 43,
		weapon_hegrenade = 44,
		weapon_smokegrenade = 45,
		weapon_molotov = 46,
		weapon_decoy = 47,
		weapon_incgrenade = 48,
		weapon_c4 = 49,
		weapon_healthshot = 57,
		weapon_knife_t = 59,
		weapon_m4a1_silencer = 60,
		weapon_usp_silencer = 61,
		weapon_cz75a = 63,
		weapon_revolver = 64,
		weapon_tagrenade = 68,
		weapon_fists = 69,
		weapon_breachcharge = 70,
		weapon_tablet = 72,
		weapon_melee = 74,
		weapon_axe = 75,
		weapon_hammer = 76,
		weapon_spanner = 78,
		weapon_knife_ghost = 80,
		weapon_firebomb = 81,
		weapon_diversion = 82,
		weapon_fraggrenade = 83,
		weapon_snowball = 84,
		weapon_bumpmine = 85,
		weapon_bayonet = 500,
		weapon_knife_css = 503,
		weapon_knife_flip = 505,
		weapon_knife_gut = 506,
		weapon_knife_karambit = 507,
		weapon_knife_m9bayonet = 508,
		weapon_knife_tactical = 509,
		weapon_knife_falchion = 512,
		weapon_knife_survival_bowie = 514,
		weapon_knife_butterfly = 515,
		weapon_knife_push = 516,
		weapon_knife_cord = 517,
		weapon_knife_canis = 518,
		weapon_knife_ursus = 519,
		weapon_knife_gypsy_jackknife = 520,
		weapon_knife_outdoor = 521,
		weapon_knife_stiletto = 522,
		weapon_knife_widowmaker = 523,
		weapon_knife_skeleton = 525
	};

	inline std::unordered_map<uint32_t, weapon_id> name_to_id{{FNV1A("weapon_deagle"), weapon_deagle}, {FNV1A("weapon_elite"), weapon_elite},
															  {FNV1A("weapon_fiveseven"), weapon_fiveseven}, {FNV1A("weapon_glock"), weapon_glock},
															  {FNV1A("weapon_ak47"), weapon_ak47}, {FNV1A("weapon_aug"), weapon_aug}, {FNV1A("weapon_awp"), weapon_awp},
															  {FNV1A("weapon_famas"), weapon_famas}, {FNV1A("weapon_g3sg1"), weapon_g3sg1},
															  {FNV1A("weapon_galilar"), weapon_galilar}, {FNV1A("weapon_m249"), weapon_m249},
															  {FNV1A("weapon_m4a1"), weapon_m4a1}, {FNV1A("weapon_mac10"), weapon_mac10},
															  {FNV1A("weapon_p90"), weapon_p90}, {FNV1A("weapon_zone_repulsor"), weapon_zone_repulsor},
															  {FNV1A("weapon_mp5sd"), weapon_mp5sd}, {FNV1A("weapon_ump45"), weapon_ump45},
															  {FNV1A("weapon_xm1014"), weapon_xm1014}, {FNV1A("weapon_bizon"), weapon_bizon},
															  {FNV1A("weapon_mag7"), weapon_mag7}, {FNV1A("weapon_negev"), weapon_negev},
															  {FNV1A("weapon_sawedoff"), weapon_sawedoff}, {FNV1A("weapon_tec9"), weapon_tec9},
															  {FNV1A("weapon_taser"), weapon_taser}, {FNV1A("weapon_hkp2000"), weapon_hkp2000},
															  {FNV1A("weapon_mp7"), weapon_mp7}, {FNV1A("weapon_mp9"), weapon_mp9}, {FNV1A("weapon_nova"), weapon_nova},
															  {FNV1A("weapon_p250"), weapon_p250}, {FNV1A("weapon_shield"), weapon_shield},
															  {FNV1A("weapon_scar20"), weapon_scar20}, {FNV1A("weapon_sg556"), weapon_sg556},
															  {FNV1A("weapon_ssg08"), weapon_ssg08}, {FNV1A("weapon_knifegg"), weapon_knifegg},
															  {FNV1A("weapon_knife"), weapon_knife}, {FNV1A("weapon_flashbang"), weapon_flashbang},
															  {FNV1A("weapon_hegrenade"), weapon_hegrenade}, {FNV1A("weapon_smokegrenade"), weapon_smokegrenade},
															  {FNV1A("weapon_molotov"), weapon_molotov}, {FNV1A("weapon_decoy"), weapon_decoy},
															  {FNV1A("weapon_incgrenade"), weapon_incgrenade}, {FNV1A("weapon_c4"), weapon_c4},
															  {FNV1A("weapon_healthshot"), weapon_healthshot}, {FNV1A("weapon_knife_t"), weapon_knife_t},
															  {FNV1A("weapon_m4a1_silencer"), weapon_m4a1_silencer}, {FNV1A("weapon_usp_silencer"), weapon_usp_silencer},
															  {FNV1A("weapon_cz75a"), weapon_cz75a}, {FNV1A("weapon_revolver"), weapon_revolver},
															  {FNV1A("weapon_tagrenade"), weapon_tagrenade}, {FNV1A("weapon_fists"), weapon_fists},
															  {FNV1A("weapon_breachcharge"), weapon_breachcharge}, {FNV1A("weapon_tablet"), weapon_tablet},
															  {FNV1A("weapon_melee"), weapon_melee}, {FNV1A("weapon_axe"), weapon_axe},
															  {FNV1A("weapon_hammer"), weapon_hammer}, {FNV1A("weapon_spanner"), weapon_spanner},
															  {FNV1A("weapon_knife_ghost"), weapon_knife_ghost}, {FNV1A("weapon_firebomb"), weapon_firebomb},
															  {FNV1A("weapon_diversion"), weapon_diversion}, {FNV1A("weapon_fraggrenade"), weapon_fraggrenade},
															  {FNV1A("weapon_snowball"), weapon_snowball}, {FNV1A("weapon_bumpmine"), weapon_bumpmine},
															  {FNV1A("weapon_bayonet"), weapon_bayonet}, {FNV1A("weapon_knife_css"), weapon_knife_css},
															  {FNV1A("weapon_knife_flip"), weapon_knife_flip}, {FNV1A("weapon_knife_gut"), weapon_knife_gut},
															  {FNV1A("weapon_knife_karambit"), weapon_knife_karambit},
															  {FNV1A("weapon_knife_m9bayonet"), weapon_knife_m9bayonet},
															  {FNV1A("weapon_knife_tactical"), weapon_knife_tactical},
															  {FNV1A("weapon_knife_falchion"), weapon_knife_falchion},
															  {FNV1A("weapon_knife_survival_bowie"), weapon_knife_survival_bowie},
															  {FNV1A("weapon_knife_butterfly"), weapon_knife_butterfly}, {FNV1A("weapon_knife_push"), weapon_knife_push},
															  {FNV1A("weapon_knife_cord"), weapon_knife_cord}, {FNV1A("weapon_knife_canis"), weapon_knife_canis},
															  {FNV1A("weapon_knife_ursus"), weapon_knife_ursus},
															  {FNV1A("weapon_knife_gypsy_jackknife"), weapon_knife_gypsy_jackknife},
															  {FNV1A("weapon_knife_outdoor"), weapon_knife_outdoor},
															  {FNV1A("weapon_knife_stiletto"), weapon_knife_stiletto},
															  {FNV1A("weapon_knife_widowmaker"), weapon_knife_widowmaker},
															  {FNV1A("weapon_knife_skeleton"), weapon_knife_skeleton},};

	struct econ_item_definition_t
	{
		PAD(8);
		void *kv_item;
		uint16_t def_index;
		cutl_vector<uint16_t> associated_items_def_indexes;
		bool enabled;
		const char *prefab;
		uint8_t min_item_level;
		uint8_t max_item_level;
		uint8_t item_rarity;
		uint8_t item_quality;
		uint8_t forced_item_quality;
		uint8_t default_drop_item_quality;
		uint8_t default_drop_quantity;
		cutl_vector<void *> static_attributes;
		uint8_t popularity_seed;
		void *portraits_kv;
		const char *item_base_name;
		bool proper_name;
		const char *item_type_name;
		uint32_t item_type_id;
		const char *item_desc;
	};

	struct cview_setup
	{
		PAD(0x490);
		float ortho_left; // 0x0494
		float ortho_top; // 0x0498
		float ortho_right; // 0x049C
		float ortho_bottom; // 0x04A0
		PAD(0x38);
		float fov; // 0x04D8
		float fov_viewmodel; // 0x04DC
		vector origin; // 0x04E0
		PAD(0xC); // 0x04EC
		qangle view; // 0x04F8
		PAD(0x14); // 0x0504
		float aspect_ratio; // 0x0518
	};

	struct cview_render
	{
		PAD(0x10)
		cview_setup setup;
	};

	enum client_frame_stage : int
	{
		FRAME_UNDEFINED = -1,
		FRAME_START,
		FRAME_SIMULATE_START,
		FRAME_NET_UPDATE_START,
		FRAME_NET_UPDATE_PREPROCESS,
		FRAME_NET_FULL_FRAME_UPDATE_ON_REMOVE,
		FRAME_NET_UPDATE_POSTDATAUPDATE_START,
		FRAME_NET_UPDATE_POSTDATAUPDATE_END,
		FRAME_NET_UPDATE_END,
		FRAME_NET_CREATION,
		FRAME_SIMULATE_END,
	};

	constexpr uint16_t max_players = 64;

	struct cgame_entity_system;
	struct cs2_player_pawn;

	struct cgame_resource_service
	{
		//MEMBER_CUSTOM(game_entity_system, cgame_resource_service, cgame_entity_system *);
		MEM_PAD(0x58);
		cgame_entity_system* game_entity_system;
	};

	struct cs2_econ_item_view : schema::econ_item_view
	{
		VIRTUAL(13, get_item_definition(), econ_item_definition_t *(__thiscall *)(void *))();
	};

	struct cs2_player_pawn : schema::csplayer_pawn
	{
	public:
		bool is_enemy()
		{
			const auto local_controller = reinterpret_cast<schema::client::ccsplayer_controller *>(sdk::LocalPlayerController);
			return !local_controller || !local_controller->get_h_player_pawn().valid() ? true : get_m_iTeamNum() != local_controller->get_m_iTeamNum();
		}

		bool is_alive() { return get_m_lifeState() == static_cast<uint8_t>(schema::life_state_t::life_alive); }
	};

	struct cs2_player_controller : schema::client::ccsplayer_controller
	{
	public:
		bool is_enemy() { return !get_pawn() || get_pawn()->is_enemy(); }

		cs2_player_pawn *get_pawn()
		{
			return get_h_player_pawn().valid() ? get_h_player_pawn().get_as<cs2_player_pawn>() : nullptr;
		}
	};

	struct cs2_base_entity : schema::base_entity
	{
		//MFUNC(get_computed_abs_origin(), sdk::vector *(*)(void *), client, baseentity::get_abs_origin)();

		const sdk::vector& get_computed_abs_origin()
		{
			if (this->get_m_pGameSceneNode())
				return get_m_pGameSceneNode()->get_vec_abs_origin();

			return sdk::vector(0.f,0.f,0.f);
		}
	};

	struct cgame_entity_system
	{

		void* GetEntityByIndex(int nIndex)
		{
			using fnGetBaseEntity = void* (CS_THISCALL*)(void*, int);
			static auto GetBaseEntity = reinterpret_cast<fnGetBaseEntity>(MEM::FindPattern(CLIENT_DLL, CS_XOR("81 FA ? ? ? ? 77 ? 8B C2 C1 F8 ? 83 F8 ? 77 ? 48 98 48 8B 4C C1 ? 48 85 C9 74 ? 8B C2 25 ? ? ? ? 48 6B C0 ? 48 03 C8 74 ? 8B 41 ? 25 ? ? ? ? 3B C2 75 ? 48 8B 01")));
			return GetBaseEntity(this, nIndex);
		}

		template <typename T = cs2_base_entity>
		T* get_entity_by_index(const uint32_t nIndex)
		{
			return reinterpret_cast<T*>(this->GetEntityByIndex(nIndex));
		}

		cs2_player_pawn *get_player_pawn(const uint32_t index)
		{
			const auto controller = get_entity_by_index<schema::client::ccsplayer_controller>(index);
			return controller && controller->get_h_player_pawn().valid() ? controller->get_h_player_pawn().get_as<cs2_player_pawn>() : nullptr;
		}

		cs2_player_controller *get_player_controller(const uint32_t index)
		{
			return get_entity_by_index<cs2_player_controller>(index);
		}

		template <typename F>
		void for_each_player(F fn, const bool local)
		{
			for (auto i = 1; i <=  (sdk::max_players); i++)
			{
				const auto player_controller = get_player_controller(i);
				if (!player_controller || !local && player_controller->get_is_local_player_controller())
					continue;

				const auto player_pawn = get_player_pawn(i);
				if (!player_pawn)
					continue;

				fn(player_controller, player_pawn);
			}
		}

		template <typename F>
		void for_each(F fn, const bool local)
		{
			const auto last_entity = get_last_entity_index();
			const auto local_controller = sdk::LocalPlayerController;

			for (auto i = 1; i <= last_entity; i++)
			{
				const auto entity = get_entity_by_index(i);
				if (!entity || !local && entity == local_controller->as<cs2_base_entity>())
					continue;

				fn(entity);
			}
		}

		MEMBER_CUSTOM(last_entity_index, cgame_entity_system, int32_t);
	};

	struct cprediction
	{
		VIRTUAL(11, update(int a2, int a3), void(*)(void*, int, int))(a2, a3)
	};

	inline uint8_t *load_text_file(const char *name)
	{
		return reinterpret_cast<uint8_t*(__fastcall *)(const char *, void *)>(game->client.at(sdk::offsets::functions::load_text_file))(name, nullptr);
	}

	inline std::string load_svg_compiled_file(const char *name)
	{
		std::string out{};

		const auto file = load_text_file(name);
		if (!file)
			return out;

		uint8_t *i{file};

		// locate start
		while (!std::string(reinterpret_cast<const char *>(i)).starts_with(XOR("<svg ")))
			++i;

		// read shit
		out = reinterpret_cast<const char *>(i);

		sdk::MemAlloc->free(file);
		return out;
	}
} // namespace sdk
