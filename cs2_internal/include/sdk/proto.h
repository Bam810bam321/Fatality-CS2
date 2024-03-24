// generated on: 11/6/2023

#ifndef SDK_PROTO_H
#define SDK_PROTO_H

#include <cstdint>

#include <sdk/macros.h>

namespace sdk
{
	namespace proto
	{
		template<typename T, class I = int>
		struct repeated_ptr_t
		{
			struct rep_t
			{
				int alloc_size;
				PAD(4)
				T* mem[];
			};

			struct iterator_t
			{
				iterator_t(repeated_ptr_t<T, I> *repeated_ptr, const I idx) : idx(idx), repeated_ptr(repeated_ptr) {}

				iterator_t &operator++()
				{
					idx = repeated_ptr->next(idx);
					return *this;
				}

				iterator_t operator++(int)
				{
					iterator_t copy = *this;
					++(*this);
					return copy;
				}

				iterator_t &operator--()
				{
					idx = (idx == repeated_ptr->invalid_index() ? idx : repeated_ptr->prev(idx));
					return *this;
				}

				iterator_t operator--(int)
				{
					iterator_t copy = *this;
					--(*this);
					return copy;
				}

				bool operator==(iterator_t it) const { return idx == it.idx; }
				bool operator!=(iterator_t it) const { return idx != it.idx; }

				T &operator*() { return repeated_ptr->elem(idx); }
				T *operator->() { return (&**this); }

				I idx;
				repeated_ptr_t<T, I> *repeated_ptr; 
			};

			T &operator[](const I idx) { return *mem->mem[idx]; }
			const T &operator[](const I idx) const { return *mem->mem[idx]; }

			T &elem(const I idx) { return *mem->mem[idx]; }
			const T &elem(const I idx) const { return *mem->mem[idx]; }

			static I invalid_index() { return static_cast<I>(-1); }
			bool is_valid_index(I idx) const { return idx >= 0 && idx < cur_size && mem && idx < mem->alloc_size; }

			auto first() const { return is_valid_index(0) ? 0 : invalid_index(); }
			auto next(const I idx) const { return is_valid_index(idx + 1) ? idx + 1 : invalid_index(); }
			auto prev(const I idx) const { return is_valid_index(idx - 1) ? idx - 1 : invalid_index(); }

			auto begin() { return iterator_t(this, first()); }
			auto end() { return iterator_t(this, invalid_index()); }

			int cur_size;
			int total_size;
			rep_t* mem;
		};
		struct message_t { PAD(0x18) };
		struct cdemo_string_tables;

		enum class edemo_commands : uint32_t
		{
			dem_error = 0xffffffff,
			dem_stop = 0x0,
			dem_file_header = 0x1,
			dem_file_info = 0x2,
			dem_sync_tick = 0x3,
			dem_send_tables = 0x4,
			dem_class_info = 0x5,
			dem_string_tables = 0x6,
			dem_packet = 0x7,
			dem_signon_packet = 0x8,
			dem_console_cmd = 0x9,
			dem_custom_data = 0xa,
			dem_custom_data_callbacks = 0xb,
			dem_user_cmd = 0xc,
			dem_full_packet = 0xd,
			dem_save_game = 0xe,
			dem_spawn_groups = 0xf,
			dem_animation_data = 0x10,
			dem_max = 0x11,
			dem_is_compressed = 0x40,
		}; // enum class edemo_commands : uint32_t

		struct cdemo_file_header : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* demo_file_stamp;
			std::string* server_name;
			std::string* client_name;
			std::string* map_name;
			std::string* game_directory;
			std::string* addons;
			std::string* demo_version_name;
			std::string* demo_version_guid;
			std::string* game;
			int network_protocol;
			int fullpackets_version;
			bool allow_clientside_entities;
			bool allow_clientside_particles;
			int build_num;
		}; // struct cdemo_file_header : message_t

		struct cgame_info : message_t
		{
			struct cdota_game_info : message_t
			{
				struct cplayer_info : message_t
				{
					template <typename T> T *as() { return reinterpret_cast<T *>(this); }

					std::string* hero_name;
					std::string* player_name;
					bool is_fake_client;
					uint64_t steamid;
					int game_team;
				}; // struct cplayer_info : message_t

				struct chero_select_event : message_t
				{
					template <typename T> T *as() { return reinterpret_cast<T *>(this); }

					bool is_pick;
					uint32_t team;
					uint32_t hero_id;
				}; // struct chero_select_event : message_t

				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				repeated_ptr_t<cgame_info::cdota_game_info::cplayer_info> player_info;
				repeated_ptr_t<cgame_info::cdota_game_info::chero_select_event> picks_bans;
				std::string* radiant_team_tag;
				std::string* dire_team_tag;
				uint64_t match_id;
				int game_mode;
				int game_winner;
				uint32_t leagueid;
				uint32_t radiant_team_id;
				uint32_t dire_team_id;
				uint32_t end_time;
			}; // struct cdota_game_info : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cgame_info::cdota_game_info *dota;
		}; // struct cgame_info : message_t

		struct cdemo_file_info : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cgame_info *game_info;
			float playback_time;
			int playback_ticks;
			int playback_frames;
		}; // struct cdemo_file_info : message_t

		struct cdemo_packet : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* data;
		}; // struct cdemo_packet : message_t

		struct cdemo_full_packet : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cdemo_string_tables *string_table;
			cdemo_packet *packet;
		}; // struct cdemo_full_packet : message_t

		struct cdemo_save_game : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* data;
			uint64_t steam_id;
			uint64_t signature;
			int version;
		}; // struct cdemo_save_game : message_t

		struct cdemo_sync_tick : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

		}; // struct cdemo_sync_tick : message_t

		struct cdemo_console_cmd : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* cmdstring;
		}; // struct cdemo_console_cmd : message_t

		struct cdemo_send_tables : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* data;
		}; // struct cdemo_send_tables : message_t

		struct cdemo_class_info : message_t
		{
			struct class_t : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				std::string* network_name;
				std::string* table_name;
				int class_id;
			}; // struct class_t : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cdemo_class_info::class_t> classes;
		}; // struct cdemo_class_info : message_t

		struct cdemo_custom_data : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* data;
			int callback_index;
		}; // struct cdemo_custom_data : message_t

		struct cdemo_custom_data_callbacks : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* save_id;
		}; // struct cdemo_custom_data_callbacks : message_t

		struct cdemo_animation_data : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* data;
			int entity_id;
			int start_tick;
			int end_tick;
			int64_t data_checksum;
		}; // struct cdemo_animation_data : message_t

		struct cdemo_string_tables : message_t
		{
			struct items_t : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				std::string* str;
				std::string* data;
			}; // struct items_t : message_t

			struct table_t : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				repeated_ptr_t<cdemo_string_tables::items_t> items;
				repeated_ptr_t<cdemo_string_tables::items_t> items_clientside;
				std::string* table_name;
				int table_flags;
			}; // struct table_t : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cdemo_string_tables::table_t> tables;
		}; // struct cdemo_string_tables : message_t

		struct cdemo_stop : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

		}; // struct cdemo_stop : message_t

		struct cdemo_user_cmd : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* data;
			int cmd_number;
		}; // struct cdemo_user_cmd : message_t

		struct cdemo_spawn_groups : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* msgs;
		}; // struct cdemo_spawn_groups : message_t

		struct net_message_splitscreen_user_changed : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t slot;
		}; // struct net_message_splitscreen_user_changed : message_t

		struct net_message_connection_closed : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t reason;
		}; // struct net_message_connection_closed : message_t

		struct net_message_connection_crashed : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t reason;
		}; // struct net_message_connection_crashed : message_t

		struct net_message_packet_start : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

		}; // struct net_message_packet_start : message_t

		struct net_message_packet_end : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

		}; // struct net_message_packet_end : message_t

		enum class egcsystem_msg : uint32_t
		{
			k_egcmsg_invalid = 0x0,
			k_egcmsg_multi = 0x1,
			k_egcmsg_generic_reply = 0xa,
			k_egcmsg_system_base = 0x32,
			k_egcmsg_achievement_awarded = 0x33,
			k_egcmsg_con_command = 0x34,
			k_egcmsg_start_playing = 0x35,
			k_egcmsg_stop_playing = 0x36,
			k_egcmsg_start_gameserver = 0x37,
			k_egcmsg_stop_gameserver = 0x38,
			k_egcmsg_wgrequest = 0x39,
			k_egcmsg_wgresponse = 0x3a,
			k_egcmsg_get_user_game_stats_schema = 0x3b,
			k_egcmsg_get_user_game_stats_schema_response = 0x3c,
			k_egcmsg_get_user_stats_deprecated = 0x3d,
			k_egcmsg_get_user_stats_response = 0x3e,
			k_egcmsg_app_info_updated = 0x3f,
			k_egcmsg_validate_session = 0x40,
			k_egcmsg_validate_session_response = 0x41,
			k_egcmsg_lookup_account_from_input = 0x42,
			k_egcmsg_send_httprequest = 0x43,
			k_egcmsg_send_httprequest_response = 0x44,
			k_egcmsg_pre_test_setup = 0x45,
			k_egcmsg_record_support_action = 0x46,
			k_egcmsg_get_account_details_deprecated = 0x47,
			k_egcmsg_receive_inter_app_message = 0x49,
			k_egcmsg_find_accounts = 0x4a,
			k_egcmsg_post_alert = 0x4b,
			k_egcmsg_get_licenses = 0x4c,
			k_egcmsg_get_user_stats = 0x4d,
			k_egcmsg_get_commands = 0x4e,
			k_egcmsg_get_commands_response = 0x4f,
			k_egcmsg_add_free_license = 0x50,
			k_egcmsg_add_free_license_response = 0x51,
			k_egcmsg_get_iplocation = 0x52,
			k_egcmsg_get_iplocation_response = 0x53,
			k_egcmsg_system_stats_schema = 0x54,
			k_egcmsg_get_system_stats = 0x55,
			k_egcmsg_get_system_stats_response = 0x56,
			k_egcmsg_send_email = 0x57,
			k_egcmsg_send_email_response = 0x58,
			k_egcmsg_get_email_template = 0x59,
			k_egcmsg_get_email_template_response = 0x5a,
			k_egcmsg_grant_guest_pass = 0x5b,
			k_egcmsg_grant_guest_pass_response = 0x5c,
			k_egcmsg_get_account_details = 0x5d,
			k_egcmsg_get_account_details_response = 0x5e,
			k_egcmsg_get_persona_names = 0x5f,
			k_egcmsg_get_persona_names_response = 0x60,
			k_egcmsg_multiplex_msg = 0x61,
			k_egcmsg_multiplex_msg_response = 0x62,
			k_egcmsg_web_apiregister_interfaces = 0x65,
			k_egcmsg_web_apijob_request = 0x66,
			k_egcmsg_web_apijob_request_http_response = 0x68,
			k_egcmsg_web_apijob_request_forward_response = 0x69,
			k_egcmsg_mem_cached_get = 0xc8,
			k_egcmsg_mem_cached_get_response = 0xc9,
			k_egcmsg_mem_cached_set = 0xca,
			k_egcmsg_mem_cached_delete = 0xcb,
			k_egcmsg_mem_cached_stats = 0xcc,
			k_egcmsg_mem_cached_stats_response = 0xcd,
			k_egcmsg_master_set_directory = 0xdc,
			k_egcmsg_master_set_directory_response = 0xdd,
			k_egcmsg_master_set_web_apirouting = 0xde,
			k_egcmsg_master_set_web_apirouting_response = 0xdf,
			k_egcmsg_master_set_client_msg_routing = 0xe0,
			k_egcmsg_master_set_client_msg_routing_response = 0xe1,
			k_egcmsg_set_options = 0xe2,
			k_egcmsg_set_options_response = 0xe3,
			k_egcmsg_system_base2 = 0x1f4,
			k_egcmsg_get_purchase_trust_status = 0x1f5,
			k_egcmsg_get_purchase_trust_status_response = 0x1f6,
			k_egcmsg_update_session = 0x1f7,
			k_egcmsg_gcaccount_vac_status_change = 0x1f8,
			k_egcmsg_check_friendship = 0x1f9,
			k_egcmsg_check_friendship_response = 0x1fa,
			k_egcmsg_get_partner_account_link = 0x1fb,
			k_egcmsg_get_partner_account_link_response = 0x1fc,
			k_egcmsg_dppartner_micro_txns = 0x200,
			k_egcmsg_dppartner_micro_txns_response = 0x201,
			k_egcmsg_vac_verification_change = 0x206,
			k_egcmsg_account_phone_number_change = 0x207,
			k_egcmsg_invite_user_to_lobby = 0x20b,
			k_egcmsg_get_game_personal_data_categories_request = 0x20c,
			k_egcmsg_get_game_personal_data_categories_response = 0x20d,
			k_egcmsg_get_game_personal_data_entries_request = 0x20e,
			k_egcmsg_get_game_personal_data_entries_response = 0x20f,
			k_egcmsg_terminate_game_personal_data_entries_request = 0x210,
			k_egcmsg_terminate_game_personal_data_entries_response = 0x211,
			k_egcmsg_recurring_subscription_status_change = 0x212,
			k_egcmsg_direct_service_method = 0x213,
			k_egcmsg_direct_service_method_response = 0x214,
		}; // enum class egcsystem_msg : uint32_t

		enum class esomsg : uint32_t
		{
			k_esomsg_create = 0x15,
			k_esomsg_update = 0x16,
			k_esomsg_destroy = 0x17,
			k_esomsg_cache_subscribed = 0x18,
			k_esomsg_cache_unsubscribed = 0x19,
			k_esomsg_update_multiple = 0x1a,
			k_esomsg_cache_subscription_check = 0x1b,
			k_esomsg_cache_subscription_refresh = 0x1c,
		}; // enum class esomsg : uint32_t

		enum class egcbase_client_msg : uint32_t
		{
			k_emsg_gcclient_welcome = 0xfa4,
			k_emsg_gcserver_welcome = 0xfa5,
			k_emsg_gcclient_hello = 0xfa6,
			k_emsg_gcserver_hello = 0xfa7,
			k_emsg_gcclient_connection_status = 0xfa9,
			k_emsg_gcserver_connection_status = 0xfaa,
			k_emsg_gcclient_hello_partner = 0xfab,
			k_emsg_gcclient_hello_pw = 0xfac,
			k_emsg_gcclient_hello_r2 = 0xfad,
			k_emsg_gcclient_hello_r3 = 0xfae,
			k_emsg_gcclient_hello_r4 = 0xfaf,
		}; // enum class egcbase_client_msg : uint32_t

		enum class egcto_gcmsg : uint32_t
		{
			k_egcto_gcmsg_master_ack = 0x96,
			k_egcto_gcmsg_master_ack_response = 0x97,
			k_egcto_gcmsg_routed = 0x98,
			k_egcto_gcmsg_routed_reply = 0x99,
			k_emsg_update_session_ip = 0x9a,
			k_emsg_request_session_ip = 0x9b,
			k_emsg_request_session_ipresponse = 0x9c,
			k_egcto_gcmsg_master_startup_complete = 0x9d,
		}; // enum class egcto_gcmsg : uint32_t

		enum class ecommunity_item_class : uint32_t
		{
			k_ecommunity_item_class_invalid = 0x0,
			k_ecommunity_item_class_badge = 0x1,
			k_ecommunity_item_class_game_card = 0x2,
			k_ecommunity_item_class_profile_background = 0x3,
			k_ecommunity_item_class_emoticon = 0x4,
			k_ecommunity_item_class_booster_pack = 0x5,
			k_ecommunity_item_class_consumable = 0x6,
			k_ecommunity_item_class_game_goo = 0x7,
			k_ecommunity_item_class_profile_modifier = 0x8,
			k_ecommunity_item_class_scene = 0x9,
			k_ecommunity_item_class_salien_item = 0xa,
		}; // enum class ecommunity_item_class : uint32_t

		enum class ecommunity_item_attribute : uint32_t
		{
			k_ecommunity_item_attribute_invalid = 0x0,
			k_ecommunity_item_attribute_card_border = 0x1,
			k_ecommunity_item_attribute_level = 0x2,
			k_ecommunity_item_attribute_issue_number = 0x3,
			k_ecommunity_item_attribute_tradable_time = 0x4,
			k_ecommunity_item_attribute_store_package_id = 0x5,
			k_ecommunity_item_attribute_community_item_app_id = 0x6,
			k_ecommunity_item_attribute_community_item_type = 0x7,
			k_ecommunity_item_attribute_profile_modifer_enabled = 0x8,
			k_ecommunity_item_attribute_expiry_time = 0x9,
		}; // enum class ecommunity_item_attribute : uint32_t

		struct cmsg_gchvac_verification_change : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t steamid;
			uint32_t appid;
			bool is_verified;
		}; // struct cmsg_gchvac_verification_change : message_t

		struct cmsg_gchaccount_phone_number_change : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t steamid;
			uint32_t appid;
			uint64_t phone_id;
			bool is_verified;
			bool is_identifying;
		}; // struct cmsg_gchaccount_phone_number_change : message_t

		struct cmsg_gchinvite_user_to_lobby : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t steamid;
			uint32_t appid;
			uint64_t steamid_invited;
			uint64_t steamid_lobby;
		}; // struct cmsg_gchinvite_user_to_lobby : message_t

		struct cmsg_gchrecurring_subscription_status_change : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t steamid;
			uint32_t appid;
			uint64_t agreementid;
			bool active;
		}; // struct cmsg_gchrecurring_subscription_status_change : message_t

		struct cquest_publisher_add_community_items_to_player_request : message_t
		{
			struct attribute : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				uint32_t attribute;
				uint64_t value;
			}; // struct attribute : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cquest_publisher_add_community_items_to_player_request::attribute> attributes;
			std::string* prefix_item_name;
			std::string* note;
			uint64_t steamid;
			uint32_t appid;
			uint32_t match_item_type;
			uint32_t match_item_class;
		}; // struct cquest_publisher_add_community_items_to_player_request : message_t

		struct cquest_publisher_add_community_items_to_player_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t items_matched;
			uint32_t items_granted;
		}; // struct cquest_publisher_add_community_items_to_player_response : message_t

		struct ccommunity_game_personal_data_category_info : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* type;
			std::string* localization_token;
			std::string* template_file;
		}; // struct ccommunity_game_personal_data_category_info : message_t

		struct ccommunity_get_game_personal_data_categories_request : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t appid;
		}; // struct ccommunity_get_game_personal_data_categories_request : message_t

		struct ccommunity_get_game_personal_data_categories_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<ccommunity_game_personal_data_category_info> categories;
			std::string* app_assets_basename;
		}; // struct ccommunity_get_game_personal_data_categories_response : message_t

		struct ccommunity_get_game_personal_data_entries_request : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* type;
			std::string* continue_token;
			uint32_t appid;
			uint64_t steamid;
		}; // struct ccommunity_get_game_personal_data_entries_request : message_t

		struct ccommunity_get_game_personal_data_entries_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* entries;
			std::string* continue_token;
			uint32_t gceresult;
		}; // struct ccommunity_get_game_personal_data_entries_response : message_t

		struct ccommunity_terminate_game_personal_data_entries_request : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t appid;
			uint64_t steamid;
		}; // struct ccommunity_terminate_game_personal_data_entries_request : message_t

		struct ccommunity_terminate_game_personal_data_entries_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t gceresult;
		}; // struct ccommunity_terminate_game_personal_data_entries_response : message_t

		enum class ebase_client_messages : uint32_t
		{
			cm_custom_game_event = 0x118,
			cm_custom_game_event_bounce = 0x119,
			cm_client_uievent = 0x11a,
			cm_dev_palette_visibility_changed = 0x11b,
			cm_world_uicontroller_has_panel_changed = 0x11c,
			cm_rotate_anchor = 0x11d,
			cm_max_base = 0x12c,
		}; // enum class ebase_client_messages : uint32_t

		enum class eclient_uievent : uint32_t
		{
			eclient_uievent_invalid = 0x0,
			eclient_uievent_dialog_finished = 0x1,
			eclient_uievent_fire_output = 0x2,
		}; // enum class eclient_uievent : uint32_t

		struct cclient_msg_custom_game_event : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* event_name;
			std::string* data;
		}; // struct cclient_msg_custom_game_event : message_t

		struct cclient_msg_custom_game_event_bounce : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* event_name;
			std::string* data;
			int player_slot;
		}; // struct cclient_msg_custom_game_event_bounce : message_t

		struct cclient_msg_client_uievent : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* data1;
			std::string* data2;
			eclient_uievent *event;
			uint32_t ent_ehandle;
			uint32_t client_ehandle;
		}; // struct cclient_msg_client_uievent : message_t

		struct cclient_msg_dev_palette_visibility_changed_event : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			bool visible;
		}; // struct cclient_msg_dev_palette_visibility_changed_event : message_t

		struct cclient_msg_world_uicontroller_has_panel_changed_event : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			bool has_panel;
			uint32_t client_ehandle;
			uint32_t literal_hand_type;
		}; // struct cclient_msg_world_uicontroller_has_panel_changed_event : message_t

		struct cclient_msg_rotate_anchor : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			float angle;
		}; // struct cclient_msg_rotate_anchor : message_t

		enum class enetwork_disconnection_reason : uint32_t
		{
			network_disconnect_invalid = 0x0,
			network_disconnect_shutdown = 0x1,
			network_disconnect_disconnect_by_user = 0x2,
			network_disconnect_disconnect_by_server = 0x3,
			network_disconnect_lost = 0x4,
			network_disconnect_overflow = 0x5,
			network_disconnect_steam_banned = 0x6,
			network_disconnect_steam_inuse = 0x7,
			network_disconnect_steam_ticket = 0x8,
			network_disconnect_steam_logon = 0x9,
			network_disconnect_steam_authcancelled = 0xa,
			network_disconnect_steam_authalreadyused = 0xb,
			network_disconnect_steam_authinvalid = 0xc,
			network_disconnect_steam_vacbanstate = 0xd,
			network_disconnect_steam_logged_in_elsewhere = 0xe,
			network_disconnect_steam_vac_check_timedout = 0xf,
			network_disconnect_steam_dropped = 0x10,
			network_disconnect_steam_ownership = 0x11,
			network_disconnect_serverinfo_overflow = 0x12,
			network_disconnect_tickmsg_overflow = 0x13,
			network_disconnect_stringtablemsg_overflow = 0x14,
			network_disconnect_deltaentmsg_overflow = 0x15,
			network_disconnect_tempentmsg_overflow = 0x16,
			network_disconnect_soundsmsg_overflow = 0x17,
			network_disconnect_snapshotoverflow = 0x18,
			network_disconnect_snapshoterror = 0x19,
			network_disconnect_reliableoverflow = 0x1a,
			network_disconnect_baddeltatick = 0x1b,
			network_disconnect_nomoresplits = 0x1c,
			network_disconnect_timedout = 0x1d,
			network_disconnect_disconnected = 0x1e,
			network_disconnect_leavingsplit = 0x1f,
			network_disconnect_differentclasstables = 0x20,
			network_disconnect_badrelaypassword = 0x21,
			network_disconnect_badspectatorpassword = 0x22,
			network_disconnect_hltvrestricted = 0x23,
			network_disconnect_nospectators = 0x24,
			network_disconnect_hltvunavailable = 0x25,
			network_disconnect_hltvstop = 0x26,
			network_disconnect_kicked = 0x27,
			network_disconnect_banadded = 0x28,
			network_disconnect_kickbanadded = 0x29,
			network_disconnect_hltvdirect = 0x2a,
			network_disconnect_pureserver_clientextra = 0x2b,
			network_disconnect_pureserver_mismatch = 0x2c,
			network_disconnect_usercmd = 0x2d,
			network_disconnect_rejected_by_game = 0x2e,
			network_disconnect_message_parse_error = 0x2f,
			network_disconnect_invalid_message_error = 0x30,
			network_disconnect_bad_server_password = 0x31,
			network_disconnect_direct_connect_reservation = 0x32,
			network_disconnect_connection_failure = 0x33,
			network_disconnect_no_peer_group_handlers = 0x34,
			network_disconnect_reconnection = 0x35,
			network_disconnect_loopshutdown = 0x36,
			network_disconnect_loopdeactivate = 0x37,
			network_disconnect_host_endgame = 0x38,
			network_disconnect_loop_levelload_activate = 0x39,
			network_disconnect_create_server_failed = 0x3a,
			network_disconnect_exiting = 0x3b,
			network_disconnect_request_hoststate_idle = 0x3c,
			network_disconnect_request_hoststate_hltvrelay = 0x3d,
			network_disconnect_client_consistency_fail = 0x3e,
			network_disconnect_client_unable_to_crc_map = 0x3f,
			network_disconnect_client_no_map = 0x40,
			network_disconnect_client_different_map = 0x41,
			network_disconnect_server_requires_steam = 0x42,
			network_disconnect_steam_deny_misc = 0x43,
			network_disconnect_steam_deny_bad_anti_cheat = 0x44,
			network_disconnect_server_shutdown = 0x45,
			network_disconnect_replay_incompatible = 0x47,
			network_disconnect_connect_request_timedout = 0x48,
			network_disconnect_server_incompatible = 0x49,
			network_disconnect_localproblem_manyrelays = 0x4a,
			network_disconnect_localproblem_hostedserverprimaryrelay = 0x4b,
			network_disconnect_localproblem_networkconfig = 0x4c,
			network_disconnect_localproblem_other = 0x4d,
			network_disconnect_remote_timeout = 0x4f,
			network_disconnect_remote_timeout_connecting = 0x50,
			network_disconnect_remote_other = 0x51,
			network_disconnect_remote_badcrypt = 0x52,
			network_disconnect_remote_certnottrusted = 0x53,
			network_disconnect_unusual = 0x54,
			network_disconnect_internal_error = 0x55,
			network_disconnect_reject_badchallenge = 0x80,
			network_disconnect_reject_nolobby = 0x81,
			network_disconnect_reject_background_map = 0x82,
			network_disconnect_reject_single_player = 0x83,
			network_disconnect_reject_hidden_game = 0x84,
			network_disconnect_reject_lanrestrict = 0x85,
			network_disconnect_reject_badpassword = 0x86,
			network_disconnect_reject_serverfull = 0x87,
			network_disconnect_reject_invalidreservation = 0x88,
			network_disconnect_reject_failedchannel = 0x89,
			network_disconnect_reject_connect_from_lobby = 0x8a,
			network_disconnect_reject_reserved_for_lobby = 0x8b,
			network_disconnect_reject_invalidkeylength = 0x8c,
			network_disconnect_reject_oldprotocol = 0x8d,
			network_disconnect_reject_newprotocol = 0x8e,
			network_disconnect_reject_invalidconnection = 0x8f,
			network_disconnect_reject_invalidcertlen = 0x90,
			network_disconnect_reject_invalidsteamcertlen = 0x91,
			network_disconnect_reject_steam = 0x92,
			network_disconnect_reject_serverauthdisabled = 0x93,
			network_disconnect_reject_servercdkeyauthinvalid = 0x94,
			network_disconnect_reject_banned = 0x95,
			network_disconnect_kicked_teamkilling = 0x96,
			network_disconnect_kicked_tk_start = 0x97,
			network_disconnect_kicked_untrustedaccount = 0x98,
			network_disconnect_kicked_convictedaccount = 0x99,
			network_disconnect_kicked_competitivecooldown = 0x9a,
			network_disconnect_kicked_teamhurting = 0x9b,
			network_disconnect_kicked_hostagekilling = 0x9c,
			network_disconnect_kicked_votedoff = 0x9d,
			network_disconnect_kicked_idle = 0x9e,
			network_disconnect_kicked_suicide = 0x9f,
			network_disconnect_kicked_nosteamlogin = 0xa0,
			network_disconnect_kicked_nosteamticket = 0xa1,
		}; // enum class enetwork_disconnection_reason : uint32_t

		struct cengine_gotv_sync_packet : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t match_id;
			uint32_t instance_id;
			uint32_t signupfragment;
			uint32_t currentfragment;
			float tickrate;
			uint32_t tick;
			float rtdelay;
			float rcvage;
			float keyframe_interval;
			uint32_t cdndelay;
		}; // struct cengine_gotv_sync_packet : message_t

		enum class eproto_execution_site : uint32_t
		{
			k_eproto_execution_site_unknown = 0x0,
			k_eproto_execution_site_steam_client = 0x3,
		}; // enum class eproto_execution_site : uint32_t

		enum class gcproto_buf_msg_src : uint32_t
		{
			gcproto_buf_msg_src_unspecified = 0x0,
			gcproto_buf_msg_src_from_system = 0x1,
			gcproto_buf_msg_src_from_steam_id = 0x2,
			gcproto_buf_msg_src_from_gc = 0x3,
			gcproto_buf_msg_src_reply_system = 0x4,
		}; // enum class gcproto_buf_msg_src : uint32_t

		struct cmsg_proto_buf_header : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* target_job_name;
			std::string* error_message;
			gcproto_buf_msg_src *gc_msg_src;
			uint64_t client_steam_id;
			int client_session_id;
			uint32_t source_app_id;
			uint64_t job_id_source;
			uint64_t job_id_target;
			int eresult;
			uint32_t ip;
			uint32_t gc_dir_index_source;
		}; // struct cmsg_proto_buf_header : message_t

		struct cmsg_web_apikey : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* domain;
			uint32_t status;
			uint32_t account_id;
			uint32_t publisher_group_id;
			uint32_t key_id;
		}; // struct cmsg_web_apikey : message_t

		struct cmsg_http_request : message_t
		{
			struct request_header : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				std::string* name;
				std::string* value;
			}; // struct request_header : message_t

			struct query_param : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				std::string* name;
				std::string* value;
			}; // struct query_param : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cmsg_http_request::request_header> headers;
			repeated_ptr_t<cmsg_http_request::query_param> get_params;
			repeated_ptr_t<cmsg_http_request::query_param> post_params;
			std::string* hostname;
			std::string* url;
			std::string* body;
			uint32_t request_method;
			uint32_t absolute_timeout;
		}; // struct cmsg_http_request : message_t

		struct cmsg_web_apirequest : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* interface_name;
			std::string* method_name;
			cmsg_web_apikey *api_key;
			cmsg_http_request *request;
			uint32_t version;
			uint32_t routing_app_id;
		}; // struct cmsg_web_apirequest : message_t

		struct cmsg_http_response : message_t
		{
			struct response_header : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				std::string* name;
				std::string* value;
			}; // struct response_header : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cmsg_http_response::response_header> headers;
			std::string* body;
			uint32_t status_code;
		}; // struct cmsg_http_response : message_t

		struct cmsg_amfind_accounts : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* search_string;
			uint32_t search_type;
		}; // struct cmsg_amfind_accounts : message_t

		struct cmsg_amfind_accounts_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t steam_id;
		}; // struct cmsg_amfind_accounts_response : message_t

		struct cmsg_notify_watchdog : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* text;
			uint32_t source;
			uint32_t alert_type;
			uint32_t alert_destination;
			bool critical;
			uint32_t time;
			uint32_t appid;
		}; // struct cmsg_notify_watchdog : message_t

		struct cmsg_amget_licenses : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t steamid;
		}; // struct cmsg_amget_licenses : message_t

		struct cmsg_package_license : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t package_id;
			uint32_t time_created;
			uint32_t owner_id;
		}; // struct cmsg_package_license : message_t

		struct cmsg_amget_licenses_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cmsg_package_license> license;
			uint32_t result;
		}; // struct cmsg_amget_licenses_response : message_t

		struct cmsg_amget_user_game_stats : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t stats;
			uint64_t steam_id;
			uint64_t game_id;
		}; // struct cmsg_amget_user_game_stats : message_t

		struct cmsg_amget_user_game_stats_response : message_t
		{
			struct stats : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				uint32_t stat_id;
				uint32_t stat_value;
			}; // struct stats : message_t

			struct achievement_blocks : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				uint32_t achievement_id;
				uint32_t achievement_bit_id;
				uint32_t unlock_time;
			}; // struct achievement_blocks : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cmsg_amget_user_game_stats_response::stats> stats;
			repeated_ptr_t<cmsg_amget_user_game_stats_response::achievement_blocks> achievement_blocks;
			uint64_t steam_id;
			uint64_t game_id;
			int eresult;
		}; // struct cmsg_amget_user_game_stats_response : message_t

		struct cmsg_gcget_command_list : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* command_prefix;
			uint32_t app_id;
		}; // struct cmsg_gcget_command_list : message_t

		struct cmsg_gcget_command_list_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* command_name;
		}; // struct cmsg_gcget_command_list_response : message_t

		struct cgcmsg_mem_cached_get : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* keys;
		}; // struct cgcmsg_mem_cached_get : message_t

		struct cgcmsg_mem_cached_get_response : message_t
		{
			struct value_tag : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				std::string* value;
				bool found;
			}; // struct value_tag : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cgcmsg_mem_cached_get_response::value_tag> values;
		}; // struct cgcmsg_mem_cached_get_response : message_t

		struct cgcmsg_mem_cached_set : message_t
		{
			struct key_pair : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				std::string* name;
				std::string* value;
			}; // struct key_pair : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cgcmsg_mem_cached_set::key_pair> keys;
		}; // struct cgcmsg_mem_cached_set : message_t

		struct cgcmsg_mem_cached_delete : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* keys;
		}; // struct cgcmsg_mem_cached_delete : message_t

		struct cgcmsg_mem_cached_stats : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

		}; // struct cgcmsg_mem_cached_stats : message_t

		struct cgcmsg_mem_cached_stats_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t curr_connections;
			uint64_t cmd_get;
			uint64_t cmd_set;
			uint64_t cmd_flush;
			uint64_t get_hits;
			uint64_t get_misses;
			uint64_t delete_hits;
			uint64_t delete_misses;
			uint64_t bytes_read;
			uint64_t bytes_written;
			uint64_t limit_maxbytes;
			uint64_t curr_items;
			uint64_t evictions;
			uint64_t bytes;
		}; // struct cgcmsg_mem_cached_stats_response : message_t

		struct cgcmsg_sqlstats : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t schema_catalog;
		}; // struct cgcmsg_sqlstats : message_t

		struct cgcmsg_sqlstats_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t threads;
			uint32_t threads_connected;
			uint32_t threads_active;
			uint32_t operations_submitted;
			uint32_t prepared_statements_executed;
			uint32_t non_prepared_statements_executed;
			uint32_t deadlock_retries;
			uint32_t operations_timed_out_in_queue;
			uint32_t errors;
		}; // struct cgcmsg_sqlstats_response : message_t

		struct cmsg_amadd_free_license : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* store_country_code;
			uint64_t steamid;
			uint32_t ip_public;
			uint32_t packageid;
		}; // struct cmsg_amadd_free_license : message_t

		struct cmsg_amadd_free_license_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			int eresult;
			int purchase_result_detail;
			uint64_t transid;
		}; // struct cmsg_amadd_free_license_response : message_t

		struct cgcmsg_get_iplocation : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t ips;
		}; // struct cgcmsg_get_iplocation : message_t

		struct ciplocation_info : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* country;
			std::string* state;
			std::string* city;
			uint32_t ip;
			float latitude;
			float longitude;
		}; // struct ciplocation_info : message_t

		struct cgcmsg_get_iplocation_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<ciplocation_info> infos;
		}; // struct cgcmsg_get_iplocation_response : message_t

		struct cgcmsg_system_stats_schema : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* schema_kv;
			uint32_t gc_app_id;
		}; // struct cgcmsg_system_stats_schema : message_t

		struct cgcmsg_get_system_stats : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

		}; // struct cgcmsg_get_system_stats : message_t

		struct cgcmsg_get_system_stats_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* stats_kv;
			uint32_t gc_app_id;
			uint32_t active_jobs;
			uint32_t yielding_jobs;
			uint32_t user_sessions;
			uint32_t game_server_sessions;
			uint32_t socaches;
			uint32_t socaches_to_unload;
			uint32_t socaches_loading;
			uint32_t writeback_queue;
			uint32_t steamid_locks;
			uint32_t logon_queue;
			uint32_t logon_jobs;
		}; // struct cgcmsg_get_system_stats_response : message_t

		struct cmsg_amsend_email : message_t
		{
			struct replacement_token : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				std::string* token_name;
				std::string* token_value;
			}; // struct replacement_token : message_t

			struct persona_name_replacement_token : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				std::string* token_name;
				uint64_t steamid;
			}; // struct persona_name_replacement_token : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cmsg_amsend_email::persona_name_replacement_token> persona_name_tokens;
			repeated_ptr_t<cmsg_amsend_email::replacement_token> tokens;
			uint64_t steamid;
			uint32_t email_msg_type;
			uint32_t email_format;
			uint32_t source_gc;
		}; // struct cmsg_amsend_email : message_t

		struct cmsg_amsend_email_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t eresult;
		}; // struct cmsg_amsend_email_response : message_t

		struct cmsg_gcget_email_template : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t app_id;
			uint32_t email_msg_type;
			int email_lang;
			int email_format;
		}; // struct cmsg_gcget_email_template : message_t

		struct cmsg_gcget_email_template_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* template_;
			uint32_t eresult;
			bool template_exists;
		}; // struct cmsg_gcget_email_template_response : message_t

		struct cmsg_amgrant_guest_passes2 : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t steam_id;
			uint32_t package_id;
			int passes_to_grant;
			int days_to_expiration;
			int action;
		}; // struct cmsg_amgrant_guest_passes2 : message_t

		struct cmsg_amgrant_guest_passes2_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			int eresult;
			int passes_granted;
		}; // struct cmsg_amgrant_guest_passes2_response : message_t

		struct cgcsystem_msg_get_account_details : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t steamid;
			uint32_t appid;
		}; // struct cgcsystem_msg_get_account_details : message_t

		struct cgcsystem_msg_get_account_details_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* account_name;
			std::string* persona_name;
			std::string* currency;
			std::string* txn_country_code;
			uint32_t eresult_deprecated;
			bool is_profile_public;
			bool is_inventory_public;
			bool is_vac_banned;
			bool is_cyber_cafe;
			bool is_school_account;
			bool is_limited;
			bool is_subscribed;
			uint32_t package;
			bool is_free_trial_account;
			uint32_t free_trial_expiration;
			bool is_low_violence;
			bool is_account_locked_down;
			bool is_community_banned;
			bool is_trade_banned;
			uint32_t trade_ban_expiration;
			uint32_t accountid;
			uint32_t suspension_end_time;
			uint32_t steam_level;
			uint32_t friend_count;
			uint32_t account_creation_time;
			bool is_steamguard_enabled;
			bool is_phone_verified;
			bool is_two_factor_auth_enabled;
			uint32_t two_factor_enabled_time;
			uint32_t phone_verification_time;
			uint64_t phone_id;
			bool is_phone_identifying;
			uint32_t rt_identity_linked;
			uint32_t rt_birth_date;
			bool has_accepted_china_ssa;
			bool is_banned_steam_china;
		}; // struct cgcsystem_msg_get_account_details_response : message_t

		struct cmsg_gcget_persona_names : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t steamids;
		}; // struct cmsg_gcget_persona_names : message_t

		struct cmsg_gcget_persona_names_response : message_t
		{
			struct persona_name : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				std::string* persona_name;
				uint64_t steamid;
			}; // struct persona_name : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cmsg_gcget_persona_names_response::persona_name> succeeded_lookups;
			uint64_t failed_lookup_steamids;
		}; // struct cmsg_gcget_persona_names_response : message_t

		struct cmsg_gccheck_friendship : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t steamid_left;
			uint64_t steamid_right;
		}; // struct cmsg_gccheck_friendship : message_t

		struct cmsg_gccheck_friendship_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			bool success;
			bool found_friendship;
		}; // struct cmsg_gccheck_friendship_response : message_t

		struct cmsg_gcmsg_master_set_directory : message_t
		{
			struct sub_gc : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				std::string* name;
				std::string* box;
				std::string* command_line;
				std::string* gc_binary;
				uint32_t dir_index;
			}; // struct sub_gc : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cmsg_gcmsg_master_set_directory::sub_gc> dir;
			uint32_t master_dir_index;
		}; // struct cmsg_gcmsg_master_set_directory : message_t

		struct cmsg_gcmsg_master_set_directory_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* message;
			int eresult;
		}; // struct cmsg_gcmsg_master_set_directory_response : message_t

		struct cmsg_gcmsg_web_apijob_request_forward_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t dir_index;
		}; // struct cmsg_gcmsg_web_apijob_request_forward_response : message_t

		struct cgcsystem_msg_get_purchase_trust_request : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t steamid;
		}; // struct cgcsystem_msg_get_purchase_trust_request : message_t

		struct cgcsystem_msg_get_purchase_trust_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			bool has_prior_purchase_history;
			bool has_no_recent_password_resets;
			bool is_wallet_cash_trusted;
			uint32_t time_all_trusted;
		}; // struct cgcsystem_msg_get_purchase_trust_response : message_t

		struct cmsg_gchaccount_vac_status_change : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t steam_id;
			uint32_t app_id;
			uint32_t rtime_vacban_starts;
			bool is_banned_now;
			bool is_banned_future;
		}; // struct cmsg_gchaccount_vac_status_change : message_t

		struct cmsg_gcget_partner_account_link : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t steamid;
		}; // struct cmsg_gcget_partner_account_link : message_t

		struct cmsg_gcget_partner_account_link_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t pwid;
			uint32_t nexonid;
			int ageclass;
			bool id_verified;
			bool is_adult;
		}; // struct cmsg_gcget_partner_account_link_response : message_t

		struct cmsg_gcrouting_info : message_t
		{
			enum class routing_method : uint32_t
			{
				random = 0x0,
				discard = 0x1,
				client_steamid = 0x2,
				protobuf_field_uint64 = 0x3,
				webapi_param_uint64 = 0x4,
			}; // enum class routing_method : uint32_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t dir_index;
			std::string* webapi_param;
			cmsg_gcrouting_info::routing_method *method;
			cmsg_gcrouting_info::routing_method *fallback;
			uint32_t protobuf_field;
		}; // struct cmsg_gcrouting_info : message_t

		struct cmsg_gcmsg_master_set_web_apirouting : message_t
		{
			struct entry : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				std::string* interface_name;
				std::string* method_name;
				cmsg_gcrouting_info *routing;
			}; // struct entry : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cmsg_gcmsg_master_set_web_apirouting::entry> entries;
		}; // struct cmsg_gcmsg_master_set_web_apirouting : message_t

		struct cmsg_gcmsg_master_set_client_msg_routing : message_t
		{
			struct entry : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				cmsg_gcrouting_info *routing;
				uint32_t msg_type;
			}; // struct entry : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cmsg_gcmsg_master_set_client_msg_routing::entry> entries;
		}; // struct cmsg_gcmsg_master_set_client_msg_routing : message_t

		struct cmsg_gcmsg_master_set_web_apirouting_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			int eresult;
		}; // struct cmsg_gcmsg_master_set_web_apirouting_response : message_t

		struct cmsg_gcmsg_master_set_client_msg_routing_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			int eresult;
		}; // struct cmsg_gcmsg_master_set_client_msg_routing_response : message_t

		struct cmsg_gcmsg_set_options : message_t
		{
			enum class option : uint32_t
			{
				notify_user_sessions = 0x0,
				notify_server_sessions = 0x1,
				notify_achievements = 0x2,
				notify_vac_action = 0x3,
			}; // enum class option : uint32_t

			struct message_range : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				uint32_t low;
				uint32_t high;
			}; // struct message_range : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cmsg_gcmsg_set_options::option> options;
			repeated_ptr_t<cmsg_gcmsg_set_options::message_range> client_msg_ranges;
		}; // struct cmsg_gcmsg_set_options : message_t

		struct cmsg_gchupdate_session : message_t
		{
			struct extra_field : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				std::string* name;
				std::string* value;
			}; // struct extra_field : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cmsg_gchupdate_session::extra_field> extra_fields;
			uint32_t depot_ids;
			uint64_t steam_id;
			uint32_t app_id;
			bool online;
			uint64_t server_steam_id;
			uint32_t server_addr;
			uint32_t server_port;
			uint32_t os_type;
			uint32_t client_addr;
			uint64_t owner_id;
			uint32_t cm_session_sysid;
			uint32_t cm_session_identifier;
		}; // struct cmsg_gchupdate_session : message_t

		struct cmsg_notification_of_suspicious_activity : message_t
		{
			struct multiple_game_instances : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				uint64_t other_steamids;
				uint32_t app_instance_count;
			}; // struct multiple_game_instances : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cmsg_notification_of_suspicious_activity::multiple_game_instances *multiple_instances;
			uint64_t steamid;
			uint32_t appid;
		}; // struct cmsg_notification_of_suspicious_activity : message_t

		struct cmsg_dppartner_micro_txns : message_t
		{
			struct partner_micro_txn : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				std::string* country_code;
				std::string* region_code;
				uint32_t init_time;
				uint32_t last_update_time;
				uint64_t txn_id;
				uint32_t account_id;
				uint32_t line_item;
				uint64_t item_id;
				uint32_t def_index;
				uint64_t price;
				uint64_t tax;
				uint64_t price_usd;
				uint64_t tax_usd;
				uint32_t purchase_type;
				uint32_t steam_txn_type;
				int quantity;
				uint64_t ref_trans_id;
			}; // struct partner_micro_txn : message_t

			struct partner_info : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				std::string* partner_name;
				std::string* currency_code;
				std::string* currency_name;
				uint32_t partner_id;
			}; // struct partner_info : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cmsg_dppartner_micro_txns::partner_micro_txn> transactions;
			std::string* gc_name;
			cmsg_dppartner_micro_txns::partner_info *partner;
			uint32_t appid;
		}; // struct cmsg_dppartner_micro_txns : message_t

		struct cmsg_dppartner_micro_txns_response : message_t
		{
			enum class eerror_code : uint32_t
			{
				k_msg_valid = 0x0,
				k_msg_invalid_app_id = 0x1,
				k_msg_invalid_partner_info = 0x2,
				k_msg_no_transactions = 0x3,
				k_msg_sqlfailure = 0x4,
				k_msg_partner_info_discrepancy = 0x5,
				k_msg_transaction_insert_failed = 0x7,
				k_msg_already_running = 0x8,
				k_msg_invalid_transaction_data = 0x9,
			}; // enum class eerror_code : uint32_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cmsg_dppartner_micro_txns_response::eerror_code *eerrorcode;
			uint32_t eresult;
		}; // struct cmsg_dppartner_micro_txns_response : message_t

		struct cchina_agreement_sessions_start_agreement_session_in_game_request : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* client_ipaddress;
			uint32_t appid;
			uint64_t steamid;
		}; // struct cchina_agreement_sessions_start_agreement_session_in_game_request : message_t

		struct cchina_agreement_sessions_start_agreement_session_in_game_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* agreement_url;
		}; // struct cchina_agreement_sessions_start_agreement_session_in_game_response : message_t

		enum class signon_state_t : uint32_t
		{
			signonstate_none = 0x0,
			signonstate_challenge = 0x1,
			signonstate_connected = 0x2,
			signonstate_new = 0x3,
			signonstate_prespawn = 0x4,
			signonstate_spawn = 0x5,
			signonstate_full = 0x6,
			signonstate_changelevel = 0x7,
		}; // enum class signon_state_t : uint32_t

		enum class net_messages : uint32_t
		{
			net_nop = 0x0,
			net_disconnect = 0x1,
			net_split_screen_user = 0x3,
			net_tick = 0x4,
			net_string_cmd = 0x5,
			net_set_con_var = 0x6,
			net_signon_state = 0x7,
			net_spawn_group_load = 0x8,
			net_spawn_group_manifest_update = 0x9,
			net_spawn_group_set_creation_tick = 0xb,
			net_spawn_group_unload = 0xc,
			net_spawn_group_load_completed = 0xd,
			net_debug_overlay = 0xf,
		}; // enum class net_messages : uint32_t

		enum class spawn_group_flags_t : uint32_t
		{
			spawn_group_load_entities_from_save = 0x1,
			spawn_group_dont_spawn_entities = 0x2,
			spawn_group_synchronous_spawn = 0x4,
			spawn_group_is_initial_spawn_group = 0x8,
			spawn_group_create_client_only_entities = 0x10,
			spawn_group_block_until_loaded = 0x40,
			spawn_group_load_streaming_data = 0x80,
			spawn_group_create_new_scene_world = 0x100,
		}; // enum class spawn_group_flags_t : uint32_t

		struct cmsg_vector : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			float x;
			float y;
			float z;
			float w;
		}; // struct cmsg_vector : message_t

		struct cmsg_vector2d : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			float x;
			float y;
		}; // struct cmsg_vector2d : message_t

		struct cmsg_qangle : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			float x;
			float y;
			float z;
		}; // struct cmsg_qangle : message_t

		struct cmsg_quaternion : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			float x;
			float y;
			float z;
			float w;
		}; // struct cmsg_quaternion : message_t

		struct cmsg_transform : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cmsg_vector *position;
			cmsg_quaternion *orientation;
			float scale;
		}; // struct cmsg_transform : message_t

		struct cmsg_rgba : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			int r;
			int g;
			int b;
			int a;
		}; // struct cmsg_rgba : message_t

		struct cmsg_player_info : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* name;
			uint64_t xuid;
			int userid;
			uint64_t steamid;
			bool fakeplayer;
			bool ishltv;
		}; // struct cmsg_player_info : message_t

		struct centity_msg : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t target_entity;
		}; // struct centity_msg : message_t

		struct cmsg_cvars : message_t
		{
			struct cvar : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				std::string* name;
				std::string* value;
			}; // struct cvar : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cmsg_cvars::cvar> cvars;
		}; // struct cmsg_cvars : message_t

		struct cnetmsg_nop : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

		}; // struct cnetmsg_nop : message_t

		struct cnetmsg_split_screen_user : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			int slot;
		}; // struct cnetmsg_split_screen_user : message_t

		struct cnetmsg_disconnect : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			enetwork_disconnection_reason *reason;
		}; // struct cnetmsg_disconnect : message_t

		struct cnetmsg_tick : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t tick;
			uint32_t host_frametime;
			uint32_t host_frametime_std_deviation;
			uint32_t host_computationtime;
			uint32_t host_computationtime_std_deviation;
			uint32_t host_framestarttime_std_deviation;
			uint32_t host_loss;
			uint32_t host_unfiltered_frametime;
			uint32_t hltv_replay_flags;
		}; // struct cnetmsg_tick : message_t

		struct cnetmsg_string_cmd : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* command;
			uint32_t prediction_sync;
		}; // struct cnetmsg_string_cmd : message_t

		struct cnetmsg_set_con_var : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cmsg_cvars *convars;
		}; // struct cnetmsg_set_con_var : message_t

		struct cnetmsg_signon_state : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* players_networkids;
			std::string* map_name;
			std::string* addons;
			signon_state_t *signon_state;
			uint32_t spawn_count;
			uint32_t num_server_players;
		}; // struct cnetmsg_signon_state : message_t

		struct csvcmsg_game_event : message_t
		{
			struct key_t : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				std::string* val_string;
				int type;
				float val_float;
				int val_long;
				int val_short;
				int val_byte;
				bool val_bool;
				uint64_t val_uint64;
			}; // struct key_t : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<csvcmsg_game_event::key_t> keys;
			std::string* event_name;
			int eventid;
		}; // struct csvcmsg_game_event : message_t

		struct csvcmsg_list_game_events : message_t
		{
			struct event_t : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				csvcmsg_game_event *event;
				int tick;
			}; // struct event_t : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<csvcmsg_list_game_events::event_t> events;
		}; // struct csvcmsg_list_game_events : message_t

		struct cnetmsg_spawn_group_load : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* worldname;
			std::string* entitylumpname;
			std::string* entityfiltername;
			std::string* spawngroupmanifest;
			std::string* localnamefixup;
			std::string* parentnamefixup;
			std::string* savegamefilename;
			std::string* worldgroupname;
			cmsg_vector *world_offset_pos;
			cmsg_qangle *world_offset_angle;
			uint32_t spawngrouphandle;
			uint32_t spawngroupownerhandle;
			uint32_t flags;
			int tickcount;
			bool manifestincomplete;
			int manifestloadpriority;
			uint32_t worldgroupid;
			uint32_t creationsequence;
			uint32_t spawngroupparenthandle;
			bool leveltransition;
		}; // struct cnetmsg_spawn_group_load : message_t

		struct cnetmsg_spawn_group_manifest_update : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* spawngroupmanifest;
			uint32_t spawngrouphandle;
			bool manifestincomplete;
		}; // struct cnetmsg_spawn_group_manifest_update : message_t

		struct cnetmsg_spawn_group_set_creation_tick : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t spawngrouphandle;
			int tickcount;
			uint32_t creationsequence;
		}; // struct cnetmsg_spawn_group_set_creation_tick : message_t

		struct cnetmsg_spawn_group_unload : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t spawngrouphandle;
			uint32_t flags;
			int tickcount;
		}; // struct cnetmsg_spawn_group_unload : message_t

		struct cnetmsg_spawn_group_load_completed : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t spawngrouphandle;
		}; // struct cnetmsg_spawn_group_load_completed : message_t

		struct csvcmsg_game_session_configuration : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* hostname;
			std::string* savegamename;
			std::string* s1_mapname;
			std::string* gamemode;
			std::string* server_ip_address;
			std::string* data;
			std::string* previouslevel;
			std::string* landmarkname;
			bool is_multiplayer;
			bool is_loadsavegame;
			bool is_background_map;
			bool is_headless;
			uint32_t min_client_limit;
			uint32_t max_client_limit;
			uint32_t max_clients;
			uint32_t tick_interval;
			bool is_localonly;
			bool no_steam_server;
			bool is_transition;
		}; // struct csvcmsg_game_session_configuration : message_t

		struct cnetmsg_debug_overlay : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cmsg_vector> vectors;
			repeated_ptr_t<cmsg_rgba> colors;
			std::string* strings;
			float dimensions;
			float times;
			bool bools;
			uint64_t uint64s;
			int etype;
		}; // struct cnetmsg_debug_overlay : message_t

		enum class egcitem_msg : uint32_t
		{
			k_emsg_gcbase = 0x3e8,
			k_emsg_gcset_item_position = 0x3e9,
			k_emsg_gccraft = 0x3ea,
			k_emsg_gccraft_response = 0x3eb,
			k_emsg_gcdelete = 0x3ec,
			k_emsg_gcverify_cache_subscription = 0x3ed,
			k_emsg_gcname_item = 0x3ee,
			k_emsg_gcunlock_crate = 0x3ef,
			k_emsg_gcunlock_crate_response = 0x3f0,
			k_emsg_gcpaint_item = 0x3f1,
			k_emsg_gcpaint_item_response = 0x3f2,
			k_emsg_gcgolden_wrench_broadcast = 0x3f3,
			k_emsg_gcmotdrequest = 0x3f4,
			k_emsg_gcmotdrequest_response = 0x3f5,
			k_emsg_gcadd_item_to_socket_deprecated = 0x3f6,
			k_emsg_gcadd_item_to_socket_response_deprecated = 0x3f7,
			k_emsg_gcadd_socket_to_base_item_deprecated = 0x3f8,
			k_emsg_gcadd_socket_to_item_deprecated = 0x3f9,
			k_emsg_gcadd_socket_to_item_response_deprecated = 0x3fa,
			k_emsg_gcname_base_item = 0x3fb,
			k_emsg_gcname_base_item_response = 0x3fc,
			k_emsg_gcremove_socket_item_deprecated = 0x3fd,
			k_emsg_gcremove_socket_item_response_deprecated = 0x3fe,
			k_emsg_gccustomize_item_texture = 0x3ff,
			k_emsg_gccustomize_item_texture_response = 0x400,
			k_emsg_gcuse_item_request = 0x401,
			k_emsg_gcuse_item_response = 0x402,
			k_emsg_gcgifted_items_deprecated = 0x403,
			k_emsg_gcremove_item_name = 0x406,
			k_emsg_gcremove_item_paint = 0x407,
			k_emsg_gcgift_wrap_item = 0x408,
			k_emsg_gcgift_wrap_item_response = 0x409,
			k_emsg_gcdeliver_gift = 0x40a,
			k_emsg_gcdeliver_gift_response_giver = 0x40b,
			k_emsg_gcdeliver_gift_response_receiver = 0x40c,
			k_emsg_gcunwrap_gift_request = 0x40d,
			k_emsg_gcunwrap_gift_response = 0x40e,
			k_emsg_gcset_item_style = 0x40f,
			k_emsg_gcused_claim_code_item = 0x410,
			k_emsg_gcsort_items = 0x411,
			k_emsg_gc_revolving_loot_list_deprecated = 0x412,
			k_emsg_gclookup_account = 0x413,
			k_emsg_gclookup_account_response = 0x414,
			k_emsg_gclookup_account_name = 0x415,
			k_emsg_gclookup_account_name_response = 0x416,
			k_emsg_gcupdate_item_schema = 0x419,
			k_emsg_gcremove_custom_texture = 0x41b,
			k_emsg_gcremove_custom_texture_response = 0x41c,
			k_emsg_gcremove_makers_mark = 0x41d,
			k_emsg_gcremove_makers_mark_response = 0x41e,
			k_emsg_gcremove_unique_craft_index = 0x41f,
			k_emsg_gcremove_unique_craft_index_response = 0x420,
			k_emsg_gcsaxxy_broadcast = 0x421,
			k_emsg_gcbackpack_sort_finished = 0x422,
			k_emsg_gcadjust_item_equipped_state = 0x423,
			k_emsg_gccollect_item = 0x425,
			k_emsg_gcitem_acknowledged__deprecated = 0x426,
			k_emsg_gc_report_abuse = 0x429,
			k_emsg_gc_report_abuse_response = 0x42a,
			k_emsg_gcname_item_notification = 0x42c,
			k_emsg_gcapply_consumable_effects = 0x42d,
			k_emsg_gcconsumable_exhausted = 0x42e,
			k_emsg_gcshow_items_picked_up = 0x42f,
			k_emsg_gcclient_display_notification = 0x430,
			k_emsg_gcapply_strange_part = 0x431,
			k_emsg_gc_increment_kill_count_attribute = 0x432,
			k_emsg_gc_increment_kill_count_response = 0x433,
			k_emsg_gcapply_pennant_upgrade = 0x434,
			k_emsg_gcset_item_positions = 0x435,
			k_emsg_gcapply_egg_essence = 0x436,
			k_emsg_gcname_egg_essence_response = 0x437,
			k_emsg_gcpaint_kit_item = 0x438,
			k_emsg_gcpaint_kit_base_item = 0x439,
			k_emsg_gcpaint_kit_item_response = 0x43a,
			k_emsg_gcgifted_items = 0x43b,
			k_emsg_gcunlock_item_style = 0x43c,
			k_emsg_gcunlock_item_style_response = 0x43d,
			k_emsg_gcapply_sticker = 0x43e,
			k_emsg_gcitem_acknowledged = 0x43f,
			k_emsg_gcstat_trak_swap = 0x440,
			k_emsg_gcuser_track_time_played_consecutively = 0x441,
			k_emsg_gcitem_customization_notification = 0x442,
			k_emsg_gcmodify_item_attribute = 0x443,
			k_emsg_gccasket_item_add = 0x444,
			k_emsg_gccasket_item_extract = 0x445,
			k_emsg_gccasket_item_load_contents = 0x446,
			k_emsg_gctrading_base = 0x5dc,
			k_emsg_gctrading_initiate_trade_request = 0x5dd,
			k_emsg_gctrading_initiate_trade_response = 0x5de,
			k_emsg_gctrading_start_session = 0x5df,
			k_emsg_gctrading_set_item = 0x5e0,
			k_emsg_gctrading_remove_item = 0x5e1,
			k_emsg_gctrading_update_trade_info = 0x5e2,
			k_emsg_gctrading_set_readiness = 0x5e3,
			k_emsg_gctrading_readiness_response = 0x5e4,
			k_emsg_gctrading_session_closed = 0x5e5,
			k_emsg_gctrading_cancel_session = 0x5e6,
			k_emsg_gctrading_trade_chat_msg = 0x5e7,
			k_emsg_gctrading_confirm_offer = 0x5e8,
			k_emsg_gctrading_trade_typing_chat_msg = 0x5e9,
			k_emsg_gcserver_browser_favorite_server = 0x641,
			k_emsg_gcserver_browser_blacklist_server = 0x642,
			k_emsg_gcserver_rentals_base = 0x6a4,
			k_emsg_gcitem_preview_check_status = 0x6a5,
			k_emsg_gcitem_preview_status_response = 0x6a6,
			k_emsg_gcitem_preview_request = 0x6a7,
			k_emsg_gcitem_preview_request_response = 0x6a8,
			k_emsg_gcitem_preview_expire = 0x6a9,
			k_emsg_gcitem_preview_expire_notification = 0x6aa,
			k_emsg_gcitem_preview_item_bought_notification = 0x6ab,
			k_emsg_gcdev_new_item_request = 0x7d1,
			k_emsg_gcdev_new_item_request_response = 0x7d2,
			k_emsg_gcdev_paint_kit_drop_item = 0x7d3,
			k_emsg_gcstore_get_user_data = 0x9c4,
			k_emsg_gcstore_get_user_data_response = 0x9c5,
			k_emsg_gcstore_purchase_init_deprecated = 0x9c6,
			k_emsg_gcstore_purchase_init_response_deprecated = 0x9c7,
			k_emsg_gcstore_purchase_finalize = 0x9c8,
			k_emsg_gcstore_purchase_finalize_response = 0x9c9,
			k_emsg_gcstore_purchase_cancel = 0x9ca,
			k_emsg_gcstore_purchase_cancel_response = 0x9cb,
			k_emsg_gcstore_purchase_query_txn = 0x9cc,
			k_emsg_gcstore_purchase_query_txn_response = 0x9cd,
			k_emsg_gcstore_purchase_init = 0x9ce,
			k_emsg_gcstore_purchase_init_response = 0x9cf,
			k_emsg_gcbanned_word_list_request = 0x9d0,
			k_emsg_gcbanned_word_list_response = 0x9d1,
			k_emsg_gcto_gcbanned_word_list_broadcast = 0x9d2,
			k_emsg_gcto_gcbanned_word_list_updated = 0x9d3,
			k_emsg_gcto_gcdirty_sdocache = 0x9d4,
			k_emsg_gcto_gcdirty_multiple_sdocache = 0x9d5,
			k_emsg_gcto_gcupdate_sqlkey_value = 0x9d6,
			k_emsg_gcto_gcis_trusted_server = 0x9d7,
			k_emsg_gcto_gcis_trusted_server_response = 0x9d8,
			k_emsg_gcto_gcbroadcast_console_command = 0x9d9,
			k_emsg_gcserver_version_updated = 0x9da,
			k_emsg_gcto_gcweb_apiaccount_changed = 0x9dc,
			k_emsg_gcrequest_announcements = 0x9dd,
			k_emsg_gcrequest_announcements_response = 0x9de,
			k_emsg_gcrequest_passport_item_grant = 0x9df,
			k_emsg_gcclient_version_updated = 0x9e0,
			k_emsg_gcadjust_item_equipped_state_multi = 0x9e1,
			k_emsg_gcrecurring_subscription_status = 0x9e2,
			k_emsg_gcadjust_equip_slots_manual = 0x9e3,
			k_emsg_gcadjust_equip_slots_shuffle = 0x9e4,
		}; // enum class egcitem_msg : uint32_t

		enum class egcmsg_response : uint32_t
		{
			k_egcmsg_response_ok = 0x0,
			k_egcmsg_response_denied = 0x1,
			k_egcmsg_response_server_error = 0x2,
			k_egcmsg_response_timeout = 0x3,
			k_egcmsg_response_invalid = 0x4,
			k_egcmsg_response_no_match = 0x5,
			k_egcmsg_response_unknown_error = 0x6,
			k_egcmsg_response_not_logged_on = 0x7,
			k_egcmsg_failed_to_create = 0x8,
			k_egcmsg_limit_exceeded = 0x9,
			k_egcmsg_commit_unfinalized = 0xa,
		}; // enum class egcmsg_response : uint32_t

		enum class eunlock_style : uint32_t
		{
			k_unlock_style_succeeded = 0x0,
			k_unlock_style_failed_pre_req = 0x1,
			k_unlock_style_failed_cant_afford = 0x2,
			k_unlock_style_failed_cant_commit = 0x3,
			k_unlock_style_failed_cant_lock_cache = 0x4,
			k_unlock_style_failed_cant_afford_attrib = 0x5,
		}; // enum class eunlock_style : uint32_t

		enum class egcitem_customization_notification : uint32_t
		{
			k_egcitem_customization_notification_name_item = 0x3ee,
			k_egcitem_customization_notification_unlock_crate = 0x3ef,
			k_egcitem_customization_notification_xray_item_reveal = 0x3f0,
			k_egcitem_customization_notification_xray_item_claim = 0x3f1,
			k_egcitem_customization_notification_casket_too_full = 0x3f3,
			k_egcitem_customization_notification_casket_contents = 0x3f4,
			k_egcitem_customization_notification_casket_added = 0x3f5,
			k_egcitem_customization_notification_casket_removed = 0x3f6,
			k_egcitem_customization_notification_casket_inv_full = 0x3f7,
			k_egcitem_customization_notification_name_base_item = 0x3fb,
			k_egcitem_customization_notification_remove_item_name = 0x406,
			k_egcitem_customization_notification_remove_sticker = 0x41d,
			k_egcitem_customization_notification_apply_sticker = 0x43e,
			k_egcitem_customization_notification_stat_trak_swap = 0x440,
			k_egcitem_customization_notification_remove_patch = 0x441,
			k_egcitem_customization_notification_apply_patch = 0x442,
			k_egcitem_customization_notification_activate_fan_token = 0x23da,
			k_egcitem_customization_notification_activate_operation_coin = 0x23db,
			k_egcitem_customization_notification_graffiti_unseal = 0x23e1,
			k_egcitem_customization_notification_generate_souvenir = 0x23f4,
			k_egcitem_customization_notification_client_redeem_mission_reward = 0x23f9,
			k_egcitem_customization_notification_client_redeem_free_reward = 0x2403,
		}; // enum class egcitem_customization_notification : uint32_t

		struct cmsg_gcgifted_items : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t recipients_accountids;
			uint32_t accountid;
			uint32_t giftdefindex;
			uint32_t max_gifts_possible;
			uint32_t num_eligible_recipients;
		}; // struct cmsg_gcgifted_items : message_t

		struct cmsg_apply_autograph : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t autograph_item_id;
			uint64_t item_item_id;
		}; // struct cmsg_apply_autograph : message_t

		struct cmsg_casket_item : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t casket_item_id;
			uint64_t item_item_id;
		}; // struct cmsg_casket_item : message_t

		struct cmsg_gcuser_track_time_played_consecutively : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t state;
		}; // struct cmsg_gcuser_track_time_played_consecutively : message_t

		struct cmsg_gcitem_customization_notification : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t item_id;
			uint32_t request;
		}; // struct cmsg_gcitem_customization_notification : message_t

		struct cattribute_string : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* value;
		}; // struct cattribute_string : message_t

		enum class egcbase_msg : uint32_t
		{
			k_emsg_gcsystem_message = 0xfa1,
			k_emsg_gcreplicate_con_vars = 0xfa2,
			k_emsg_gccon_var_updated = 0xfa3,
			k_emsg_gcin_queue = 0xfa8,
			k_emsg_gcinvite_to_party = 0x1195,
			k_emsg_gcinvitation_created = 0x1196,
			k_emsg_gcparty_invite_response = 0x1197,
			k_emsg_gckick_from_party = 0x1198,
			k_emsg_gcleave_party = 0x1199,
			k_emsg_gcserver_available = 0x119a,
			k_emsg_gcclient_connect_to_server = 0x119b,
			k_emsg_gcgame_server_info = 0x119c,
			k_emsg_gcerror = 0x119d,
			k_emsg_gcreplay_uploaded_to_you_tube = 0x119e,
			k_emsg_gclanserver_available = 0x119f,
		}; // enum class egcbase_msg : uint32_t

		enum class egcbase_proto_object_types : uint32_t
		{
			k_eproto_object_party_invite = 0x3e9,
			k_eproto_object_lobby_invite = 0x3ea,
		}; // enum class egcbase_proto_object_types : uint32_t

		enum class gc_banned_word_type : uint32_t
		{
			gc_banned_word_disable_word = 0x0,
			gc_banned_word_enable_word = 0x1,
		}; // enum class gc_banned_word_type : uint32_t

		struct cgcstore_purchase_init_line_item : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t item_def_id;
			uint32_t quantity;
			uint32_t cost_in_local_currency;
			uint32_t purchase_type;
		}; // struct cgcstore_purchase_init_line_item : message_t

		struct cmsg_gcstore_purchase_init : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cgcstore_purchase_init_line_item> line_items;
			std::string* country;
			int language;
			int currency;
		}; // struct cmsg_gcstore_purchase_init : message_t

		struct cmsg_gcstore_purchase_init_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t item_ids;
			std::string* url;
			int result;
			uint64_t txn_id;
		}; // struct cmsg_gcstore_purchase_init_response : message_t

		struct csoparty_invite : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* sender_name;
			uint64_t group_id;
			uint64_t sender_id;
		}; // struct csoparty_invite : message_t

		struct csolobby_invite : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* sender_name;
			uint64_t group_id;
			uint64_t sender_id;
		}; // struct csolobby_invite : message_t

		struct cmsg_system_broadcast : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* message;
		}; // struct cmsg_system_broadcast : message_t

		struct cmsg_invite_to_party : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t steam_id;
			uint32_t client_version;
			uint32_t team_invite;
		}; // struct cmsg_invite_to_party : message_t

		struct cmsg_invitation_created : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t group_id;
			uint64_t steam_id;
		}; // struct cmsg_invitation_created : message_t

		struct cmsg_party_invite_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t party_id;
			bool accept;
			uint32_t client_version;
			uint32_t team_invite;
		}; // struct cmsg_party_invite_response : message_t

		struct cmsg_kick_from_party : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t steam_id;
		}; // struct cmsg_kick_from_party : message_t

		struct cmsg_leave_party : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

		}; // struct cmsg_leave_party : message_t

		struct cmsg_server_available : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

		}; // struct cmsg_server_available : message_t

		struct cmsg_lanserver_available : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t lobby_id;
		}; // struct cmsg_lanserver_available : message_t

		struct csoecon_game_account_client : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t additional_backpack_slots;
			uint32_t bonus_xp_timestamp_refresh;
			uint32_t bonus_xp_usedflags;
			uint32_t elevated_state;
			uint32_t elevated_timestamp;
		}; // struct csoecon_game_account_client : message_t

		struct csoitem_criteria_condition : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* field;
			std::string* string_value;
			int op;
			bool required;
			float float_value;
		}; // struct csoitem_criteria_condition : message_t

		struct csoitem_criteria : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<csoitem_criteria_condition> conditions;
			uint32_t item_level;
			int item_quality;
			bool item_level_set;
			bool item_quality_set;
			uint32_t initial_inventory;
			uint32_t initial_quantity;
			bool ignore_enabled_flag;
			int item_rarity;
			bool item_rarity_set;
			bool recent_only;
		}; // struct csoitem_criteria : message_t

		struct csoitem_recipe : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<csoitem_criteria> input_items_criteria;
			repeated_ptr_t<csoitem_criteria> output_items_criteria;
			uint32_t input_item_dupe_counts;
			std::string* name;
			std::string* n_a;
			std::string* desc_inputs;
			std::string* desc_outputs;
			std::string* di_a;
			std::string* di_b;
			std::string* di_c;
			std::string* do_a;
			std::string* do_b;
			std::string* do_c;
			uint32_t def_index;
			bool requires_all_same_class;
			bool requires_all_same_slot;
			int class_usage_for_output;
			int slot_usage_for_output;
			int set_for_output;
		}; // struct csoitem_recipe : message_t

		struct cmsg_dev_new_item_request : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			csoitem_criteria *criteria;
			uint64_t receiver;
		}; // struct cmsg_dev_new_item_request : message_t

		struct cmsg_increment_kill_count_attribute : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t killer_account_id;
			uint32_t victim_account_id;
			uint64_t item_id;
			uint32_t event_type;
			uint32_t amount;
		}; // struct cmsg_increment_kill_count_attribute : message_t

		struct cmsg_apply_sticker : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t sticker_item_id;
			uint64_t item_item_id;
			uint32_t sticker_slot;
			uint32_t baseitem_defidx;
			float sticker_wear;
		}; // struct cmsg_apply_sticker : message_t

		struct cmsg_modify_item_attribute : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t item_id;
			uint32_t attr_defidx;
			uint32_t attr_value;
		}; // struct cmsg_modify_item_attribute : message_t

		struct cmsg_apply_stat_trak_swap : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t tool_item_id;
			uint64_t item_1_item_id;
			uint64_t item_2_item_id;
		}; // struct cmsg_apply_stat_trak_swap : message_t

		struct cmsg_apply_strange_part : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t strange_part_item_id;
			uint64_t item_item_id;
		}; // struct cmsg_apply_strange_part : message_t

		struct cmsg_apply_pennant_upgrade : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t upgrade_item_id;
			uint64_t pennant_item_id;
		}; // struct cmsg_apply_pennant_upgrade : message_t

		struct cmsg_apply_egg_essence : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t essence_item_id;
			uint64_t egg_item_id;
		}; // struct cmsg_apply_egg_essence : message_t

		struct csoecon_item_attribute : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* value_bytes;
			uint32_t def_index;
			uint32_t value;
		}; // struct csoecon_item_attribute : message_t

		struct csoecon_item_equipped : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t new_class;
			uint32_t new_slot;
		}; // struct csoecon_item_equipped : message_t

		struct csoecon_item : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<csoecon_item_attribute> attribute;
			repeated_ptr_t<csoecon_item_equipped> equipped_state;
			std::string* custom_name;
			std::string* custom_desc;
			csoecon_item *interior_item;
			uint64_t id;
			uint32_t account_id;
			uint32_t inventory;
			uint32_t def_index;
			uint32_t quantity;
			uint32_t level;
			uint32_t quality;
			uint32_t flags;
			uint32_t origin;
			bool in_use;
			uint32_t style;
			uint64_t original_id;
			uint32_t rarity;
		}; // struct csoecon_item : message_t

		struct cmsg_adjust_item_equipped_state : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t item_id;
			uint32_t new_class;
			uint32_t new_slot;
			bool swap;
		}; // struct cmsg_adjust_item_equipped_state : message_t

		struct cmsg_adjust_item_equipped_state_multi : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t t_equips;
			uint64_t ct_equips;
			uint64_t noteam_equips;
		}; // struct cmsg_adjust_item_equipped_state_multi : message_t

		struct cmsg_sort_items : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t sort_type;
		}; // struct cmsg_sort_items : message_t

		struct csoecon_claim_code : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* code;
			uint32_t account_id;
			uint32_t code_type;
			uint32_t time_acquired;
		}; // struct csoecon_claim_code : message_t

		struct cmsg_store_get_user_data : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t price_sheet_version;
			int currency;
		}; // struct cmsg_store_get_user_data : message_t

		struct cmsg_store_get_user_data_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* country_deprecated;
			std::string* price_sheet;
			int result;
			int currency_deprecated;
			uint32_t price_sheet_version;
		}; // struct cmsg_store_get_user_data_response : message_t

		struct cmsg_update_item_schema : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* items_game;
			std::string* items_game_url;
			uint32_t item_schema_version;
		}; // struct cmsg_update_item_schema : message_t

		struct cmsg_gcerror : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* error_text;
		}; // struct cmsg_gcerror : message_t

		struct cmsg_request_inventory_refresh : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

		}; // struct cmsg_request_inventory_refresh : message_t

		struct cmsg_con_var_value : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* name;
			std::string* value;
		}; // struct cmsg_con_var_value : message_t

		struct cmsg_replicate_con_vars : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cmsg_con_var_value> convars;
		}; // struct cmsg_replicate_con_vars : message_t

		struct cmsg_use_item : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t gift__potential_targets;
			uint64_t item_id;
			uint64_t target_steam_id;
			uint32_t duel__class_lock;
			uint64_t initiator_steam_id;
		}; // struct cmsg_use_item : message_t

		struct cmsg_replay_uploaded_to_you_tube : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* youtube_url;
			std::string* youtube_account_name;
			uint64_t session_id;
		}; // struct cmsg_replay_uploaded_to_you_tube : message_t

		struct cmsg_consumable_exhausted : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			int item_def_id;
		}; // struct cmsg_consumable_exhausted : message_t

		struct cmsg_item_acknowledged__deprecated : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t account_id;
			uint32_t inventory;
			uint32_t def_index;
			uint32_t quality;
			uint32_t rarity;
			uint32_t origin;
			uint64_t item_id;
		}; // struct cmsg_item_acknowledged__deprecated : message_t

		struct cmsg_set_item_positions : message_t
		{
			struct item_position : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				uint32_t legacy_item_id;
				uint32_t position;
				uint64_t item_id;
			}; // struct item_position : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cmsg_set_item_positions::item_position> item_positions;
		}; // struct cmsg_set_item_positions : message_t

		struct cmsg_gcreport_abuse : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* description;
			uint64_t target_steam_id;
			uint64_t gid;
			uint32_t abuse_type;
			uint32_t content_type;
			uint32_t target_game_server_ip;
			uint32_t target_game_server_port;
		}; // struct cmsg_gcreport_abuse : message_t

		struct cmsg_gcreport_abuse_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* error_message;
			uint64_t target_steam_id;
			uint32_t result;
		}; // struct cmsg_gcreport_abuse_response : message_t

		struct cmsg_gcname_item_notification : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* item_name_custom;
			uint64_t player_steamid;
			uint32_t item_def_index;
		}; // struct cmsg_gcname_item_notification : message_t

		struct cmsg_gcclient_display_notification : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* body_substring_keys;
			std::string* body_substring_values;
			std::string* notification_title_localization_key;
			std::string* notification_body_localization_key;
		}; // struct cmsg_gcclient_display_notification : message_t

		struct cmsg_gcshow_items_picked_up : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t player_steamid;
		}; // struct cmsg_gcshow_items_picked_up : message_t

		struct cmsg_gcincrement_kill_count_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t killer_account_id;
			uint32_t num_kills;
			uint32_t item_def;
			uint32_t level_type;
		}; // struct cmsg_gcincrement_kill_count_response : message_t

		struct csoecon_item_drop_rate_bonus : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t account_id;
			uint32_t expiration_date;
			float bonus;
			uint32_t bonus_count;
			uint64_t item_id;
			uint32_t def_index;
		}; // struct csoecon_item_drop_rate_bonus : message_t

		struct csoecon_item_league_view_pass : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t account_id;
			uint32_t league_id;
			uint32_t admin;
			uint32_t itemindex;
		}; // struct csoecon_item_league_view_pass : message_t

		struct csoecon_item_event_ticket : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t account_id;
			uint32_t event_id;
			uint64_t item_id;
		}; // struct csoecon_item_event_ticket : message_t

		struct cmsg_gcitem_preview_item_bought_notification : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t item_def_index;
		}; // struct cmsg_gcitem_preview_item_bought_notification : message_t

		struct cmsg_gcstore_purchase_cancel : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t txn_id;
		}; // struct cmsg_gcstore_purchase_cancel : message_t

		struct cmsg_gcstore_purchase_cancel_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t result;
		}; // struct cmsg_gcstore_purchase_cancel_response : message_t

		struct cmsg_gcstore_purchase_finalize : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t txn_id;
		}; // struct cmsg_gcstore_purchase_finalize : message_t

		struct cmsg_gcstore_purchase_finalize_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t item_ids;
			uint32_t result;
		}; // struct cmsg_gcstore_purchase_finalize_response : message_t

		struct cmsg_gcbanned_word_list_request : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t ban_list_group_id;
			uint32_t word_id;
		}; // struct cmsg_gcbanned_word_list_request : message_t

		struct cmsg_gcrequest_announcements : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

		}; // struct cmsg_gcrequest_announcements : message_t

		struct cmsg_gcrequest_announcements_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* announcement_title;
			std::string* announcement;
			std::string* nextmatch_title;
			std::string* nextmatch;
		}; // struct cmsg_gcrequest_announcements_response : message_t

		struct cmsg_gcbanned_word : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* word;
			gc_banned_word_type *word_type;
			uint32_t word_id;
		}; // struct cmsg_gcbanned_word : message_t

		struct cmsg_gcbanned_word_list_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cmsg_gcbanned_word> word_list;
			uint32_t ban_list_group_id;
		}; // struct cmsg_gcbanned_word_list_response : message_t

		struct cmsg_gcto_gcbanned_word_list_broadcast : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cmsg_gcbanned_word_list_response *broadcast;
		}; // struct cmsg_gcto_gcbanned_word_list_broadcast : message_t

		struct cmsg_gcto_gcbanned_word_list_updated : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t group_id;
		}; // struct cmsg_gcto_gcbanned_word_list_updated : message_t

		struct csoecon_default_equipped_definition_instance_client : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t account_id;
			uint32_t item_definition;
			uint32_t class_id;
			uint32_t slot_id;
		}; // struct csoecon_default_equipped_definition_instance_client : message_t

		struct cmsg_gcto_gcdirty_sdocache : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t sdo_type;
			uint64_t key_uint64;
		}; // struct cmsg_gcto_gcdirty_sdocache : message_t

		struct cmsg_gcto_gcdirty_multiple_sdocache : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t key_uint64;
			uint32_t sdo_type;
		}; // struct cmsg_gcto_gcdirty_multiple_sdocache : message_t

		struct cmsg_gccollect_item : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t collection_item_id;
			uint64_t subject_item_id;
		}; // struct cmsg_gccollect_item : message_t

		struct cmsg_sdono_memcached : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

		}; // struct cmsg_sdono_memcached : message_t

		struct cmsg_gcto_gcupdate_sqlkey_value : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* key_name;
		}; // struct cmsg_gcto_gcupdate_sqlkey_value : message_t

		struct cmsg_gcto_gcis_trusted_server : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t steam_id;
		}; // struct cmsg_gcto_gcis_trusted_server : message_t

		struct cmsg_gcto_gcis_trusted_server_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			bool is_trusted;
		}; // struct cmsg_gcto_gcis_trusted_server_response : message_t

		struct cmsg_gcto_gcbroadcast_console_command : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* con_command;
		}; // struct cmsg_gcto_gcbroadcast_console_command : message_t

		struct cmsg_gcserver_version_updated : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t server_version;
		}; // struct cmsg_gcserver_version_updated : message_t

		struct cmsg_gcclient_version_updated : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t client_version;
		}; // struct cmsg_gcclient_version_updated : message_t

		struct cmsg_gcto_gcweb_apiaccount_changed : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

		}; // struct cmsg_gcto_gcweb_apiaccount_changed : message_t

		struct cmsg_gcto_gcrequest_passport_item_grant : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t steam_id;
			uint32_t league_id;
			int reward_flag;
		}; // struct cmsg_gcto_gcrequest_passport_item_grant : message_t

		struct cmsg_game_server_info : message_t
		{
			enum class server_type : uint32_t
			{
				unspecified = 0x0,
				game = 0x1,
				proxy = 0x2,
			}; // enum class server_type : uint32_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* server_key;
			cmsg_game_server_info::server_type *server_type;
			uint32_t server_public_ip_addr;
			uint32_t server_private_ip_addr;
			uint32_t server_port;
			uint32_t server_tv_port;
			bool server_hibernation;
			uint32_t server_region;
			float server_loadavg;
			float server_tv_broadcast_time;
			float server_game_time;
			uint64_t server_relay_connected_steam_id;
			uint32_t relay_slots_max;
			int relays_connected;
			int relay_clients_connected;
			uint64_t relayed_game_server_steam_id;
			uint32_t parent_relay_count;
			uint64_t tv_secret_code;
		}; // struct cmsg_game_server_info : message_t

		struct csoecon_equip_slot : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t account_id;
			uint32_t class_id;
			uint32_t slot_id;
			uint64_t item_id;
			uint32_t item_definition;
		}; // struct csoecon_equip_slot : message_t

		struct cmsg_adjust_equip_slot : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t class_id;
			uint32_t slot_id;
			uint64_t item_id;
		}; // struct cmsg_adjust_equip_slot : message_t

		struct cmsg_adjust_equip_slots : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cmsg_adjust_equip_slot> slots;
		}; // struct cmsg_adjust_equip_slots : message_t

		enum class gcclient_launcher_type : uint32_t
		{
			gcclient_launcher_type_default = 0x0,
			gcclient_launcher_type_perfectworld = 0x1,
			gcclient_launcher_type_steamchina = 0x2,
		}; // enum class gcclient_launcher_type : uint32_t

		enum class gcconnection_status : uint32_t
		{
			gcconnection_status_have_session = 0x0,
			gcconnection_status_gc_going_down = 0x1,
			gcconnection_status_no_session = 0x2,
			gcconnection_status_no_session_in_logon_queue = 0x3,
			gcconnection_status_no_steam = 0x4,
		}; // enum class gcconnection_status : uint32_t

		struct cmsg_soidowner : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t type;
			uint64_t id;
		}; // struct cmsg_soidowner : message_t

		struct cmsg_sosingle_object : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* object_data;
			cmsg_soidowner *owner_soid;
			int type_id;
			uint64_t version;
		}; // struct cmsg_sosingle_object : message_t

		struct cmsg_somultiple_objects : message_t
		{
			struct single_object : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				std::string* object_data;
				int type_id;
			}; // struct single_object : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cmsg_somultiple_objects::single_object> objects_modified;
			cmsg_soidowner *owner_soid;
			uint64_t version;
		}; // struct cmsg_somultiple_objects : message_t

		struct cmsg_socache_subscribed : message_t
		{
			struct subscribed_type : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				std::string* object_data;
				int type_id;
			}; // struct subscribed_type : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cmsg_socache_subscribed::subscribed_type> objects;
			cmsg_soidowner *owner_soid;
			uint64_t version;
		}; // struct cmsg_socache_subscribed : message_t

		struct cmsg_socache_unsubscribed : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cmsg_soidowner *owner_soid;
		}; // struct cmsg_socache_unsubscribed : message_t

		struct cmsg_socache_subscription_check : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cmsg_soidowner *owner_soid;
			uint64_t version;
		}; // struct cmsg_socache_subscription_check : message_t

		struct cmsg_socache_subscription_refresh : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cmsg_soidowner *owner_soid;
		}; // struct cmsg_socache_subscription_refresh : message_t

		struct cmsg_socache_version : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t version;
		}; // struct cmsg_socache_version : message_t

		struct cmsg_account_details : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* account_name;
			bool valid;
			bool public_profile;
			bool public_inventory;
			bool vac_banned;
			bool cyber_cafe;
			bool school_account;
			bool free_trial_account;
			bool subscribed;
			bool low_violence;
			bool limited;
			bool trusted;
			uint32_t package;
			uint32_t time_cached;
			bool account_locked;
			bool community_banned;
			bool trade_banned;
			bool eligible_for_community_market;
		}; // struct cmsg_account_details : message_t

		struct cmsg_gcmultiplex_message : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t steamids;
			std::string* payload;
			uint32_t msgtype;
			bool replytogc;
		}; // struct cmsg_gcmultiplex_message : message_t

		struct cmsg_gcmultiplex_message_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t msgtype;
		}; // struct cmsg_gcmultiplex_message_response : message_t

		struct cgcto_gcmsg_master_ack : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t dir_index;
			uint32_t gc_type;
		}; // struct cgcto_gcmsg_master_ack : message_t

		struct cgcto_gcmsg_master_ack_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			int eresult;
		}; // struct cgcto_gcmsg_master_ack_response : message_t

		struct cgcto_gcmsg_master_startup_complete : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

		}; // struct cgcto_gcmsg_master_startup_complete : message_t

		struct cgcto_gcmsg_routed : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* net_message;
			uint32_t msg_type;
			uint64_t sender_id;
			uint32_t ip;
		}; // struct cgcto_gcmsg_routed : message_t

		struct cgcto_gcmsg_routed_reply : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* net_message;
			uint32_t msg_type;
		}; // struct cgcto_gcmsg_routed_reply : message_t

		struct cmsg_gcupdate_session_ip : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t steamid;
			uint32_t ip;
		}; // struct cmsg_gcupdate_session_ip : message_t

		struct cmsg_gcrequest_session_ip : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t steamid;
		}; // struct cmsg_gcrequest_session_ip : message_t

		struct cmsg_gcrequest_session_ipresponse : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t ip;
		}; // struct cmsg_gcrequest_session_ipresponse : message_t

		struct cmsg_socache_have_version : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cmsg_soidowner *soid;
			uint64_t version;
		}; // struct cmsg_socache_have_version : message_t

		struct cmsg_client_hello : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cmsg_socache_have_version> socache_have_versions;
			uint32_t version;
			uint32_t client_session_need;
			uint32_t client_launcher;
			uint32_t partner_srcid;
			uint32_t partner_accountid;
			uint32_t partner_accountflags;
			uint32_t partner_accountbalance;
			uint32_t steam_launcher;
		}; // struct cmsg_client_hello : message_t

		struct cmsg_server_hello : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cmsg_socache_have_version> socache_have_versions;
			std::string* legacy_steamdatagram_routing;
			std::string* steamdatagram_login;
			uint32_t version;
			uint32_t legacy_client_session_need;
			uint32_t client_launcher;
			uint32_t required_internal_addr;
		}; // struct cmsg_server_hello : message_t

		struct cmsg_client_welcome : message_t
		{
			struct location : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				std::string* country;
				float latitude;
				float longitude;
			}; // struct location : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cmsg_socache_subscribed> outofdate_subscribed_caches;
			repeated_ptr_t<cmsg_socache_subscription_check> uptodate_subscribed_caches;
			std::string* game_data;
			std::string* game_data2;
			std::string* balance_url;
			std::string* txn_country_code;
			cmsg_client_welcome::location *location;
			uint32_t version;
			uint32_t rtime32_gc_welcome_timestamp;
			uint32_t currency;
			uint32_t balance;
		}; // struct cmsg_client_welcome : message_t

		struct cmsg_connection_status : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			gcconnection_status *status;
			uint32_t client_session_need;
			int queue_position;
			int queue_size;
			int wait_seconds;
			int estimated_wait_seconds_remaining;
		}; // struct cmsg_connection_status : message_t

		struct cworkshop_populate_item_descriptions_request : message_t
		{
			struct single_item_description : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				std::string* item_description;
				uint32_t gameitemid;
				bool one_per_account;
			}; // struct single_item_description : message_t

			struct item_descriptions_language_block : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				repeated_ptr_t<cworkshop_populate_item_descriptions_request::single_item_description> descriptions;
				std::string* language;
			}; // struct item_descriptions_language_block : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cworkshop_populate_item_descriptions_request::item_descriptions_language_block> languages;
			uint32_t appid;
		}; // struct cworkshop_populate_item_descriptions_request : message_t

		struct cworkshop_get_contributors_request : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t appid;
			uint32_t gameitemid;
		}; // struct cworkshop_get_contributors_request : message_t

		struct cworkshop_get_contributors_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t contributors;
		}; // struct cworkshop_get_contributors_response : message_t

		struct cworkshop_set_item_payment_rules_request : message_t
		{
			struct workshop_item_payment_rule : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				std::string* rule_description;
				uint64_t workshop_file_id;
				float revenue_percentage;
				uint32_t rule_type;
			}; // struct workshop_item_payment_rule : message_t

			struct workshop_direct_payment_rule : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				std::string* rule_description;
				uint64_t workshop_file_id;
			}; // struct workshop_direct_payment_rule : message_t

			struct partner_item_payment_rule : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				std::string* rule_description;
				uint32_t account_id;
				float revenue_percentage;
			}; // struct partner_item_payment_rule : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cworkshop_set_item_payment_rules_request::workshop_item_payment_rule> associated_workshop_files;
			repeated_ptr_t<cworkshop_set_item_payment_rules_request::partner_item_payment_rule> partner_accounts;
			cworkshop_set_item_payment_rules_request::workshop_direct_payment_rule *associated_workshop_file_for_direct_payments;
			uint32_t appid;
			uint32_t gameitemid;
			bool validate_only;
			bool make_workshop_files_subscribable;
		}; // struct cworkshop_set_item_payment_rules_request : message_t

		struct cworkshop_set_item_payment_rules_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

		}; // struct cworkshop_set_item_payment_rules_response : message_t

		struct cgame_servers_aggregation_query_request : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* group_fields;
			std::string* filter;
		}; // struct cgame_servers_aggregation_query_request : message_t

		struct cgame_servers_aggregation_query_response : message_t
		{
			struct group : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				std::string* group_values;
				uint32_t servers_empty;
				uint32_t servers_full;
				uint32_t servers_total;
				uint32_t players_humans;
				uint32_t players_bots;
				uint32_t player_capacity;
			}; // struct group : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cgame_servers_aggregation_query_response::group> groups;
		}; // struct cgame_servers_aggregation_query_response : message_t

		struct cworkshop_add_special_payment_request : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* date;
			uint32_t appid;
			uint32_t gameitemid;
			uint64_t payment_us_usd;
			uint64_t payment_row_usd;
		}; // struct cworkshop_add_special_payment_request : message_t

		struct cworkshop_add_special_payment_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

		}; // struct cworkshop_add_special_payment_response : message_t

		struct cproduct_info_set_rich_presence_localization_request : message_t
		{
			struct token : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				std::string* token;
				std::string* value;
			}; // struct token : message_t

			struct language_section : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				repeated_ptr_t<cproduct_info_set_rich_presence_localization_request::token> tokens;
				std::string* language;
			}; // struct language_section : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cproduct_info_set_rich_presence_localization_request::language_section> languages;
			uint32_t appid;
			uint64_t steamid;
		}; // struct cproduct_info_set_rich_presence_localization_request : message_t

		struct cproduct_info_set_rich_presence_localization_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

		}; // struct cproduct_info_set_rich_presence_localization_response : message_t

		struct cmsg_serialized_socache : message_t
		{
			struct type_cache : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				std::string* objects;
				uint32_t type;
				uint32_t service_id;
			}; // struct type_cache : message_t

			struct cache : message_t
			{
				struct version : message_t
				{
					template <typename T> T *as() { return reinterpret_cast<T *>(this); }

					uint32_t service;
					uint64_t version;
				}; // struct version : message_t

				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				repeated_ptr_t<cmsg_serialized_socache::cache::version> versions;
				repeated_ptr_t<cmsg_serialized_socache::type_cache> type_caches;
				uint32_t type;
				uint64_t id;
			}; // struct cache : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cmsg_serialized_socache::cache> caches;
			uint32_t file_version;
			uint32_t gc_socache_file_version;
		}; // struct cmsg_serialized_socache : message_t

		enum class enotification_setting : uint32_t
		{
			k_enotification_setting_notify_use_default = 0x0,
			k_enotification_setting_always = 0x1,
			k_enotification_setting_never = 0x2,
		}; // enum class enotification_setting : uint32_t

		struct cplayer_get_mutual_friends_for_incoming_invites_request : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

		}; // struct cplayer_get_mutual_friends_for_incoming_invites_request : message_t

		struct cplayer_incoming_invite_mutual_friend_list : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t mutual_friend_account_ids;
			uint64_t steamid;
		}; // struct cplayer_incoming_invite_mutual_friend_list : message_t

		struct cplayer_get_mutual_friends_for_incoming_invites_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cplayer_incoming_invite_mutual_friend_list> incoming_invite_mutual_friends_lists;
		}; // struct cplayer_get_mutual_friends_for_incoming_invites_response : message_t

		struct cplayer_get_friends_gameplay_info_request : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t appid;
		}; // struct cplayer_get_friends_gameplay_info_request : message_t

		struct cplayer_get_friends_gameplay_info_response : message_t
		{
			struct friends_gameplay_info : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				uint64_t steamid;
				uint32_t minutes_played;
				uint32_t minutes_played_forever;
			}; // struct friends_gameplay_info : message_t

			struct own_gameplay_info : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				uint64_t steamid;
				uint32_t minutes_played;
				uint32_t minutes_played_forever;
				bool in_wishlist;
				bool owned;
			}; // struct own_gameplay_info : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cplayer_get_friends_gameplay_info_response::friends_gameplay_info> in_game;
			repeated_ptr_t<cplayer_get_friends_gameplay_info_response::friends_gameplay_info> played_recently;
			repeated_ptr_t<cplayer_get_friends_gameplay_info_response::friends_gameplay_info> played_ever;
			repeated_ptr_t<cplayer_get_friends_gameplay_info_response::friends_gameplay_info> owns;
			repeated_ptr_t<cplayer_get_friends_gameplay_info_response::friends_gameplay_info> in_wishlist;
			cplayer_get_friends_gameplay_info_response::own_gameplay_info *your_info;
		}; // struct cplayer_get_friends_gameplay_info_response : message_t

		struct cplayer_get_game_badge_levels_request : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t appid;
		}; // struct cplayer_get_game_badge_levels_request : message_t

		struct cplayer_get_game_badge_levels_response : message_t
		{
			struct badge : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				int level;
				int series;
				uint32_t border_color;
			}; // struct badge : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cplayer_get_game_badge_levels_response::badge> badges;
			uint32_t player_level;
		}; // struct cplayer_get_game_badge_levels_response : message_t

		struct cplayer_get_last_played_times_request : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t min_last_played;
		}; // struct cplayer_get_last_played_times_request : message_t

		struct cplayer_get_last_played_times_response : message_t
		{
			struct game : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				int appid;
				uint32_t last_playtime;
				int playtime_2weeks;
				int playtime_forever;
				uint32_t first_playtime;
			}; // struct game : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cplayer_get_last_played_times_response::game> games;
		}; // struct cplayer_get_last_played_times_response : message_t

		struct cplayer_accept_ssa_request : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

		}; // struct cplayer_accept_ssa_request : message_t

		struct cplayer_accept_ssa_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

		}; // struct cplayer_accept_ssa_response : message_t

		struct cplayer_get_nickname_list_request : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

		}; // struct cplayer_get_nickname_list_request : message_t

		struct cplayer_get_nickname_list_response : message_t
		{
			struct player_nickname : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				std::string* nickname;
				uint32_t accountid;
			}; // struct player_nickname : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cplayer_get_nickname_list_response::player_nickname> nicknames;
		}; // struct cplayer_get_nickname_list_response : message_t

		struct cplayer_get_per_friend_preferences_request : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

		}; // struct cplayer_get_per_friend_preferences_request : message_t

		struct per_friend_preferences : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* nickname;
			enotification_setting *notifications_showingame;
			enotification_setting *notifications_showonline;
			enotification_setting *notifications_showmessages;
			enotification_setting *sounds_showingame;
			enotification_setting *sounds_showonline;
			enotification_setting *sounds_showmessages;
			enotification_setting *notifications_sendmobile;
			uint32_t accountid;
		}; // struct per_friend_preferences : message_t

		struct cplayer_get_per_friend_preferences_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<per_friend_preferences> preferences;
		}; // struct cplayer_get_per_friend_preferences_response : message_t

		struct cplayer_set_per_friend_preferences_request : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			per_friend_preferences *preferences;
		}; // struct cplayer_set_per_friend_preferences_request : message_t

		struct cplayer_set_per_friend_preferences_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

		}; // struct cplayer_set_per_friend_preferences_response : message_t

		struct cplayer_add_friend_request : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t steamid;
		}; // struct cplayer_add_friend_request : message_t

		struct cplayer_add_friend_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			bool invite_sent;
			uint32_t friend_relationship;
		}; // struct cplayer_add_friend_response : message_t

		struct cplayer_remove_friend_request : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t steamid;
		}; // struct cplayer_remove_friend_request : message_t

		struct cplayer_remove_friend_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t friend_relationship;
		}; // struct cplayer_remove_friend_response : message_t

		struct cplayer_ignore_friend_request : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t steamid;
			bool unignore;
		}; // struct cplayer_ignore_friend_request : message_t

		struct cplayer_ignore_friend_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t friend_relationship;
		}; // struct cplayer_ignore_friend_response : message_t

		struct cplayer_get_community_preferences_request : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

		}; // struct cplayer_get_community_preferences_request : message_t

		struct cplayer_community_preferences : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			bool hide_adult_content_violence;
			bool hide_adult_content_sex;
			bool parenthesize_nicknames;
			uint32_t timestamp_updated;
		}; // struct cplayer_community_preferences : message_t

		struct cplayer_get_community_preferences_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cplayer_community_preferences *preferences;
		}; // struct cplayer_get_community_preferences_response : message_t

		struct cplayer_set_community_preferences_request : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cplayer_community_preferences *preferences;
		}; // struct cplayer_set_community_preferences_request : message_t

		struct cplayer_set_community_preferences_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

		}; // struct cplayer_set_community_preferences_response : message_t

		struct cplayer_get_new_steam_announcement_state_request : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			int language;
		}; // struct cplayer_get_new_steam_announcement_state_request : message_t

		struct cplayer_get_new_steam_announcement_state_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* announcement_headline;
			std::string* announcement_url;
			int state;
			uint32_t time_posted;
			uint64_t announcement_gid;
		}; // struct cplayer_get_new_steam_announcement_state_response : message_t

		struct cplayer_update_steam_announcement_last_read_request : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t announcement_gid;
			uint32_t time_posted;
		}; // struct cplayer_update_steam_announcement_last_read_request : message_t

		struct cplayer_update_steam_announcement_last_read_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

		}; // struct cplayer_update_steam_announcement_last_read_response : message_t

		struct ccloud_get_upload_server_info_request : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t appid;
		}; // struct ccloud_get_upload_server_info_request : message_t

		struct ccloud_get_upload_server_info_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* server_url;
		}; // struct ccloud_get_upload_server_info_response : message_t

		struct ccloud_get_file_details_request : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t ugcid;
			uint32_t appid;
		}; // struct ccloud_get_file_details_request : message_t

		struct ccloud_user_file : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* filename;
			std::string* url;
			uint32_t appid;
			uint64_t ugcid;
			uint64_t timestamp;
			uint32_t file_size;
			uint64_t steamid_creator;
		}; // struct ccloud_user_file : message_t

		struct ccloud_get_file_details_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			ccloud_user_file *details;
		}; // struct ccloud_get_file_details_response : message_t

		struct ccloud_enumerate_user_files_request : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t appid;
			bool extended_details;
			uint32_t count;
			uint32_t start_index;
		}; // struct ccloud_enumerate_user_files_request : message_t

		struct ccloud_enumerate_user_files_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<ccloud_user_file> files;
			uint32_t total_files;
		}; // struct ccloud_enumerate_user_files_response : message_t

		struct ccloud_delete_request : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* filename;
			uint32_t appid;
		}; // struct ccloud_delete_request : message_t

		struct ccloud_delete_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

		}; // struct ccloud_delete_response : message_t

		struct chelp_request_logs_upload_user_application_log_request : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* log_type;
			std::string* version_string;
			std::string* log_contents;
			uint32_t appid;
		}; // struct chelp_request_logs_upload_user_application_log_request : message_t

		struct chelp_request_logs_upload_user_application_log_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t id;
		}; // struct chelp_request_logs_upload_user_application_log_response : message_t

		struct cpublished_file_subscribe_request : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t publishedfileid;
			uint32_t list_type;
			int appid;
			bool notify_client;
		}; // struct cpublished_file_subscribe_request : message_t

		struct cpublished_file_subscribe_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

		}; // struct cpublished_file_subscribe_response : message_t

		struct cpublished_file_unsubscribe_request : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t publishedfileid;
			uint32_t list_type;
			int appid;
			bool notify_client;
		}; // struct cpublished_file_unsubscribe_request : message_t

		struct cpublished_file_unsubscribe_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

		}; // struct cpublished_file_unsubscribe_response : message_t

		struct cpublished_file_publish_request : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* tags;
			std::string* cloudfilename;
			std::string* preview_cloudfilename;
			std::string* title;
			std::string* file_description;
			std::string* consumer_shortcut_name;
			std::string* youtube_username;
			std::string* youtube_videoid;
			std::string* redirect_uri;
			std::string* collection_type;
			std::string* game_type;
			std::string* url;
			uint32_t appid;
			uint32_t consumer_appid;
			uint32_t file_type;
			uint32_t visibility;
		}; // struct cpublished_file_publish_request : message_t

		struct cpublished_file_publish_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* redirect_uri;
			uint64_t publishedfileid;
		}; // struct cpublished_file_publish_response : message_t

		struct cpublished_file_get_details_request : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t publishedfileids;
			bool includetags;
			bool includeadditionalpreviews;
			bool includechildren;
			bool includekvtags;
			bool includevotes;
			bool short_description;
		}; // struct cpublished_file_get_details_request : message_t

		struct published_file_details : message_t
		{
			struct tag : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				std::string* tag;
				bool adminonly;
			}; // struct tag : message_t

			struct preview : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				std::string* url;
				std::string* filename;
				std::string* youtubevideoid;
				uint64_t previewid;
				uint32_t sortorder;
				uint32_t size;
			}; // struct preview : message_t

			struct child : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				uint64_t publishedfileid;
				uint32_t sortorder;
				uint32_t file_type;
			}; // struct child : message_t

			struct kvtag : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				std::string* key;
				std::string* value;
			}; // struct kvtag : message_t

			struct vote_data : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				float score;
				uint32_t votes_up;
				uint32_t votes_down;
			}; // struct vote_data : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<published_file_details::preview> previews;
			repeated_ptr_t<published_file_details::tag> tags;
			repeated_ptr_t<published_file_details::child> children;
			repeated_ptr_t<published_file_details::kvtag> kvtags;
			std::string* filename;
			std::string* file_url;
			std::string* preview_url;
			std::string* youtubevideoid;
			std::string* url;
			std::string* title;
			std::string* file_description;
			std::string* short_description;
			std::string* ban_reason;
			std::string* app_name;
			std::string* image_url;
			std::string* shortcutname;
			published_file_details::vote_data *vote_data;
			uint32_t result;
			uint64_t publishedfileid;
			uint64_t creator;
			uint32_t creator_appid;
			uint32_t consumer_appid;
			uint32_t consumer_shortcutid;
			uint64_t file_size;
			uint64_t preview_file_size;
			uint64_t hcontent_file;
			uint64_t hcontent_preview;
			uint32_t time_created;
			uint32_t time_updated;
			uint32_t visibility;
			uint32_t flags;
			bool workshop_file;
			bool workshop_accepted;
			bool show_subscribe_all;
			int num_comments_developer;
			int num_comments_public;
			bool banned;
			uint64_t banner;
			bool can_be_deleted;
			bool incompatible;
			uint32_t file_type;
			bool can_subscribe;
			uint32_t subscriptions;
			uint32_t favorited;
			uint32_t followers;
			uint32_t lifetime_subscriptions;
			uint32_t lifetime_favorited;
			uint32_t lifetime_followers;
			uint32_t views;
			uint32_t image_width;
			uint32_t image_height;
			bool spoiler_tag;
			uint32_t shortcutid;
			uint32_t num_children;
			uint32_t num_reports;
			uint32_t time_subscribed;
		}; // struct published_file_details : message_t

		struct cpublished_file_get_details_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<published_file_details> publishedfiledetails;
		}; // struct cpublished_file_get_details_response : message_t

		struct cpublished_file_get_user_files_request : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* requiredtags;
			std::string* excludedtags;
			std::string* sortmethod;
			uint32_t appid;
			uint32_t page;
			uint32_t numperpage;
			bool totalonly;
			uint32_t privacy;
			bool ids_only;
		}; // struct cpublished_file_get_user_files_request : message_t

		struct cpublished_file_get_user_files_response : message_t
		{
			struct app : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				std::string* name;
				uint32_t appid;
				uint32_t shortcutid;
				bool private_;
			}; // struct app : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<published_file_details> publishedfiledetails;
			repeated_ptr_t<cpublished_file_get_user_files_response::app> apps;
			uint32_t total;
			uint32_t startindex;
		}; // struct cpublished_file_get_user_files_response : message_t

		struct cpublished_file_update_request : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* tags;
			std::string* title;
			std::string* file_description;
			std::string* filename;
			std::string* preview_filename;
			uint32_t appid;
			uint64_t publishedfileid;
			uint32_t visibility;
		}; // struct cpublished_file_update_request : message_t

		struct cpublished_file_update_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

		}; // struct cpublished_file_update_response : message_t

		struct cpublished_file_refresh_voting_queue_request : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* tags;
			std::string* excluded_tags;
			uint32_t appid;
			uint32_t matching_file_type;
			bool match_all_tags;
			uint32_t desired_queue_size;
		}; // struct cpublished_file_refresh_voting_queue_request : message_t

		struct cpublished_file_refresh_voting_queue_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

		}; // struct cpublished_file_refresh_voting_queue_response : message_t

		struct coauth_token_implicit_grant_no_prompt_request : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* clientid;
		}; // struct coauth_token_implicit_grant_no_prompt_request : message_t

		struct coauth_token_implicit_grant_no_prompt_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* access_token;
			std::string* redirect_uri;
		}; // struct coauth_token_implicit_grant_no_prompt_response : message_t

		enum class clc_messages : uint32_t
		{
			clc_client_info = 0x14,
			clc_move = 0x15,
			clc_voice_data = 0x16,
			clc_baseline_ack = 0x17,
			clc_listen_events = 0x18,
			clc_respond_cvar_value = 0x19,
			clc_file_crccheck = 0x1a,
			clc_loading_progress = 0x1b,
			clc_split_player_connect = 0x1c,
			clc_client_message = 0x1d,
			clc_split_player_disconnect = 0x1e,
			clc_server_status = 0x1f,
			clc_server_ping = 0x20,
			clc_request_pause = 0x21,
			clc_cmd_key_values = 0x22,
			clc_rcon_server_details = 0x23,
			clc_hltv_replay = 0x24,
		}; // enum class clc_messages : uint32_t

		enum class svc_messages : uint32_t
		{
			svc_server_info = 0x28,
			svc_flattened_serializer = 0x29,
			svc_class_info = 0x2a,
			svc_set_pause = 0x2b,
			svc_create_string_table = 0x2c,
			svc_update_string_table = 0x2d,
			svc_voice_init = 0x2e,
			svc_voice_data = 0x2f,
			svc_print = 0x30,
			svc_sounds = 0x31,
			svc_set_view = 0x32,
			svc_clear_all_string_tables = 0x33,
			svc_cmd_key_values = 0x34,
			svc_bspdecal = 0x35,
			svc_split_screen = 0x36,
			svc_packet_entities = 0x37,
			svc_prefetch = 0x38,
			svc_menu = 0x39,
			svc_get_cvar_value = 0x3a,
			svc_stop_sound = 0x3b,
			svc_peer_list = 0x3c,
			svc_packet_reliable = 0x3d,
			svc_hltvstatus = 0x3e,
			svc_server_steam_id = 0x3f,
			svc_full_frame_split = 0x46,
			svc_rcon_server_details = 0x47,
			svc_user_message = 0x48,
			svc_hltv_replay = 0x49,
			svc_broadcast_command = 0x4a,
			svc_hltv_fixup_operator_status = 0x4b,
		}; // enum class svc_messages : uint32_t

		enum class voice_data_format_t : uint32_t
		{
			voicedata_format_steam = 0x0,
			voicedata_format_engine = 0x1,
		}; // enum class voice_data_format_t : uint32_t

		enum class request_pause_t : uint32_t
		{
			rp_pause = 0x0,
			rp_unpause = 0x1,
			rp_togglepause = 0x2,
		}; // enum class request_pause_t : uint32_t

		enum class prefetch_type : uint32_t
		{
			pft_sound = 0x0,
		}; // enum class prefetch_type : uint32_t

		enum class esplit_screen_message_type : uint32_t
		{
			msg_splitscreen_adduser = 0x0,
			msg_splitscreen_removeuser = 0x1,
		}; // enum class esplit_screen_message_type : uint32_t

		enum class equery_cvar_value_status : uint32_t
		{
			e_query_cvar_value_status_value_intact = 0x0,
			e_query_cvar_value_status_cvar_not_found = 0x1,
			e_query_cvar_value_status_not_acvar = 0x2,
			e_query_cvar_value_status_cvar_protected = 0x3,
		}; // enum class equery_cvar_value_status : uint32_t

		enum class dialog_type : uint32_t
		{
			dialog_msg = 0x0,
			dialog_menu = 0x1,
			dialog_text = 0x2,
			dialog_entry = 0x3,
			dialog_askconnect = 0x4,
		}; // enum class dialog_type : uint32_t

		enum class svc_messages_low_frequency : uint32_t
		{
			svc_dummy = 0x258,
		}; // enum class svc_messages_low_frequency : uint32_t

		enum class bidirectional_messages : uint32_t
		{
			bi_rebroadcast_game_event = 0x10,
			bi_rebroadcast_source = 0x11,
			bi_game_event = 0x12,
		}; // enum class bidirectional_messages : uint32_t

		enum class bidirectional_messages_low_frequency : uint32_t
		{
			bi_relay_info = 0x2bc,
			bi_relay_packet = 0x2bd,
		}; // enum class bidirectional_messages_low_frequency : uint32_t

		enum class replay_event_type_t : uint32_t
		{
			replay_event_cancel = 0x0,
			replay_event_death = 0x1,
			replay_event_generic = 0x2,
			replay_event_stuck_need_full_update = 0x3,
			replay_event_victory = 0x4,
		}; // enum class replay_event_type_t : uint32_t

		struct cclcmsg_client_info : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* friends_name;
			uint32_t send_table_crc;
			uint32_t server_count;
			bool is_hltv;
			uint32_t friends_id;
		}; // struct cclcmsg_client_info : message_t

		struct cclcmsg_move : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* data;
			uint32_t command_number;
			uint32_t num_commands;
		}; // struct cclcmsg_move : message_t

		struct cmsg_voice_audio : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* voice_data;
			voice_data_format_t *format;
			int sequence_bytes;
			uint32_t section_number;
			uint32_t sample_rate;
			uint32_t uncompressed_sample_offset;
		}; // struct cmsg_voice_audio : message_t

		struct cclcmsg_voice_data : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cmsg_voice_audio *audio;
			uint64_t xuid;
			uint32_t tick;
		}; // struct cclcmsg_voice_data : message_t

		struct cclcmsg_baseline_ack : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			int baseline_tick;
			int baseline_nr;
		}; // struct cclcmsg_baseline_ack : message_t

		struct cclcmsg_listen_events : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t event_mask;
		}; // struct cclcmsg_listen_events : message_t

		struct cclcmsg_respond_cvar_value : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* name;
			std::string* value;
			int cookie;
			int status_code;
		}; // struct cclcmsg_respond_cvar_value : message_t

		struct cclcmsg_file_crccheck : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* path;
			std::string* filename;
			int code_path;
			int code_filename;
			uint32_t crc;
		}; // struct cclcmsg_file_crccheck : message_t

		struct cclcmsg_loading_progress : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			int progress;
		}; // struct cclcmsg_loading_progress : message_t

		struct cclcmsg_split_player_connect : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* playername;
		}; // struct cclcmsg_split_player_connect : message_t

		struct cclcmsg_client_message : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* data;
			int msg_type;
		}; // struct cclcmsg_client_message : message_t

		struct cclcmsg_split_player_disconnect : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			int slot;
		}; // struct cclcmsg_split_player_disconnect : message_t

		struct cclcmsg_server_status : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			bool simplified;
		}; // struct cclcmsg_server_status : message_t

		struct cclcmsg_request_pause : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			request_pause_t *pause_type;
			int pause_group;
		}; // struct cclcmsg_request_pause : message_t

		struct cclcmsg_cmd_key_values : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* data;
		}; // struct cclcmsg_cmd_key_values : message_t

		struct cclcmsg_rcon_server_details : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* token;
		}; // struct cclcmsg_rcon_server_details : message_t

		struct csvcmsg_server_info : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* game_dir;
			std::string* map_name;
			std::string* sky_name;
			std::string* host_name;
			std::string* addon_name;
			std::string* game_session_manifest;
			csvcmsg_game_session_configuration *game_session_config;
			int protocol;
			int server_count;
			bool is_dedicated;
			bool is_hltv;
			int c_os;
			int max_clients;
			int max_classes;
			int player_slot;
			float tick_interval;
		}; // struct csvcmsg_server_info : message_t

		struct csvcmsg_class_info : message_t
		{
			struct class_t : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				std::string* class_name;
				int class_id;
			}; // struct class_t : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<csvcmsg_class_info::class_t> classes;
			bool create_on_client;
		}; // struct csvcmsg_class_info : message_t

		struct csvcmsg_set_pause : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			bool paused;
		}; // struct csvcmsg_set_pause : message_t

		struct csvcmsg_voice_init : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* codec;
			int quality;
			int version;
		}; // struct csvcmsg_voice_init : message_t

		struct csvcmsg_print : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* text;
		}; // struct csvcmsg_print : message_t

		struct csvcmsg_sounds : message_t
		{
			struct sounddata_t : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				int origin_x;
				int origin_y;
				int origin_z;
				uint32_t volume;
				float delay_value;
				int sequence_number;
				int entity_index;
				int channel;
				int pitch;
				int flags;
				uint32_t sound_num;
				uint32_t sound_num_handle;
				int speaker_entity;
				int random_seed;
				int sound_level;
				bool is_sentence;
				bool is_ambient;
				uint32_t guid;
				uint64_t sound_resource_id;
			}; // struct sounddata_t : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<csvcmsg_sounds::sounddata_t> sounds;
			bool reliable_sound;
		}; // struct csvcmsg_sounds : message_t

		struct csvcmsg_prefetch : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			prefetch_type *resource_type;
			int sound_index;
		}; // struct csvcmsg_prefetch : message_t

		struct csvcmsg_set_view : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			int entity_index;
			int slot;
		}; // struct csvcmsg_set_view : message_t

		struct csvcmsg_fix_angle : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cmsg_qangle *angle;
			bool relative;
		}; // struct csvcmsg_fix_angle : message_t

		struct csvcmsg_crosshair_angle : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cmsg_qangle *angle;
		}; // struct csvcmsg_crosshair_angle : message_t

		struct csvcmsg_bspdecal : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cmsg_vector *pos;
			int decal_texture_index;
			int entity_index;
			int model_index;
			bool low_priority;
		}; // struct csvcmsg_bspdecal : message_t

		struct csvcmsg_split_screen : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			esplit_screen_message_type *type;
			int slot;
			int player_index;
		}; // struct csvcmsg_split_screen : message_t

		struct csvcmsg_get_cvar_value : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* cvar_name;
			int cookie;
		}; // struct csvcmsg_get_cvar_value : message_t

		struct csvcmsg_menu : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* menu_key_values;
			int dialog_type;
		}; // struct csvcmsg_menu : message_t

		struct csvcmsg_user_message : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* msg_data;
			int msg_type;
			int passthrough;
		}; // struct csvcmsg_user_message : message_t

		struct csvcmsg_send_table : message_t
		{
			struct sendprop_t : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				std::string* var_name;
				std::string* dt_name;
				int type;
				int flags;
				int priority;
				int num_elements;
				float low_value;
				float high_value;
				int num_bits;
			}; // struct sendprop_t : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<csvcmsg_send_table::sendprop_t> props;
			std::string* net_table_name;
			bool is_end;
			bool needs_decoder;
		}; // struct csvcmsg_send_table : message_t

		struct csvcmsg_game_event_list : message_t
		{
			struct key_t : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				std::string* name;
				int type;
			}; // struct key_t : message_t

			struct descriptor_t : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				repeated_ptr_t<csvcmsg_game_event_list::key_t> keys;
				std::string* name;
				int eventid;
			}; // struct descriptor_t : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<csvcmsg_game_event_list::descriptor_t> descriptors;
		}; // struct csvcmsg_game_event_list : message_t

		struct csvcmsg_packet_entities : message_t
		{
			struct command_queue_info_t : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				uint32_t commands_queued;
				uint32_t command_queue_desired_size;
				uint32_t starved_command_ticks;
				float time_dilation_percent;
				uint32_t discarded_command_ticks;
			}; // struct command_queue_info_t : message_t

			struct alternate_baseline_t : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				int entity_index;
				int baseline_index;
			}; // struct alternate_baseline_t : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<csvcmsg_packet_entities::alternate_baseline_t> alternate_baselines;
			std::string* entity_data;
			std::string* serialized_entities;
			csvcmsg_packet_entities::command_queue_info_t *command_queue_info;
			int max_entries;
			int updated_entries;
			bool is_delta;
			bool update_baseline;
			int baseline;
			int delta_from;
			bool pending_full_frame;
			uint32_t active_spawngroup_handle;
			uint32_t max_spawngroup_creationsequence;
			uint32_t last_cmd_number;
			uint32_t server_tick;
		}; // struct csvcmsg_packet_entities : message_t

		struct csvcmsg_temp_entities : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* entity_data;
			bool reliable;
			int num_entries;
		}; // struct csvcmsg_temp_entities : message_t

		struct csvcmsg_create_string_table : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* name;
			std::string* string_data;
			int num_entries;
			bool user_data_fixed_size;
			int user_data_size;
			int user_data_size_bits;
			int flags;
			int uncompressed_size;
			bool data_compressed;
			bool using_varint_bitcounts;
		}; // struct csvcmsg_create_string_table : message_t

		struct csvcmsg_update_string_table : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* string_data;
			int table_id;
			int num_changed_entries;
		}; // struct csvcmsg_update_string_table : message_t

		struct csvcmsg_voice_data : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cmsg_voice_audio *audio;
			int client;
			bool proximity;
			uint64_t xuid;
			int audible_mask;
			uint32_t tick;
			int passthrough;
		}; // struct csvcmsg_voice_data : message_t

		struct csvcmsg_packet_reliable : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			int tick;
			int messagessize;
			bool state;
		}; // struct csvcmsg_packet_reliable : message_t

		struct csvcmsg_full_frame_split : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* data;
			int tick;
			int section;
			int total;
		}; // struct csvcmsg_full_frame_split : message_t

		struct csvcmsg_hltvstatus : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* master;
			int clients;
			int slots;
			int proxies;
		}; // struct csvcmsg_hltvstatus : message_t

		struct csvcmsg_server_steam_id : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t steam_id;
		}; // struct csvcmsg_server_steam_id : message_t

		struct csvcmsg_cmd_key_values : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* data;
		}; // struct csvcmsg_cmd_key_values : message_t

		struct csvcmsg_rcon_server_details : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* token;
			std::string* details;
		}; // struct csvcmsg_rcon_server_details : message_t

		struct cmsg_ipcaddress : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t computer_guid;
			uint32_t process_id;
		}; // struct cmsg_ipcaddress : message_t

		struct cmsg_server_peer : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cmsg_ipcaddress *ipc;
			int player_slot;
			uint64_t steamid;
			bool they_hear_you;
			bool you_hear_them;
			bool is_listenserver_host;
		}; // struct cmsg_server_peer : message_t

		struct csvcmsg_peer_list : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cmsg_server_peer> peer;
		}; // struct csvcmsg_peer_list : message_t

		struct csvcmsg_clear_all_string_tables : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* mapname;
			bool create_tables_skipped;
		}; // struct csvcmsg_clear_all_string_tables : message_t

		struct proto_flattened_serializer_field_t : message_t
		{
			struct polymorphic_field_t : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				int polymorphic_field_serializer_name_sym;
				int polymorphic_field_serializer_version;
			}; // struct polymorphic_field_t : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<proto_flattened_serializer_field_t::polymorphic_field_t> polymorphic_types;
			int var_type_sym;
			int var_name_sym;
			int bit_count;
			float low_value;
			float high_value;
			int encode_flags;
			int field_serializer_name_sym;
			int field_serializer_version;
			int send_node_sym;
			int var_encoder_sym;
		}; // struct proto_flattened_serializer_field_t : message_t

		struct proto_flattened_serializer_t : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			int fields_index;
			int serializer_name_sym;
			int serializer_version;
		}; // struct proto_flattened_serializer_t : message_t

		struct csvcmsg_flattened_serializer : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<proto_flattened_serializer_t> serializers;
			std::string* symbols;
			repeated_ptr_t<proto_flattened_serializer_field_t> fields;
		}; // struct csvcmsg_flattened_serializer : message_t

		struct csvcmsg_stop_sound : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t guid;
		}; // struct csvcmsg_stop_sound : message_t

		struct cbidir_msg_rebroadcast_game_event : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			bool posttoserver;
			int buftype;
			uint32_t clientbitcount;
			uint64_t receivingclients;
		}; // struct cbidir_msg_rebroadcast_game_event : message_t

		struct cbidir_msg_rebroadcast_source : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			int eventsource;
		}; // struct cbidir_msg_rebroadcast_source : message_t

		struct cmsg_server_network_stats : message_t
		{
			struct port : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				std::string* name;
				int port;
			}; // struct port : message_t

			struct player : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				std::string* remote_addr;
				uint64_t steamid;
				int ping_avg_ms;
				float packet_loss_pct;
				bool is_bot;
				float loss_in;
				float loss_out;
				int engine_latency_ms;
			}; // struct player : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cmsg_server_network_stats::port> ports;
			repeated_ptr_t<cmsg_server_network_stats::player> players;
			bool dedicated;
			int cpu_usage;
			int memory_used_mb;
			int memory_free_mb;
			int uptime;
			int spawn_count;
			int num_clients;
			int num_bots;
			int num_spectators;
			int num_tv_relays;
			float fps;
			float avg_ping_ms;
			float avg_engine_latency_out;
			float avg_packets_out;
			float avg_packets_in;
			float avg_loss_out;
			float avg_loss_in;
			float avg_data_out;
			float avg_data_in;
			uint64_t total_data_in;
			uint64_t total_packets_in;
			uint64_t total_data_out;
			uint64_t total_packets_out;
		}; // struct cmsg_server_network_stats : message_t

		struct csvcmsg_hltv_replay : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			int delay;
			int primary_target;
			int replay_stop_at;
			int replay_start_at;
			int replay_slowdown_begin;
			int replay_slowdown_end;
			float replay_slowdown_rate;
			int reason;
		}; // struct csvcmsg_hltv_replay : message_t

		struct cclcmsg_hltv_replay : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			int request;
			float slowdown_length;
			float slowdown_rate;
			int primary_target;
			float event_time;
		}; // struct cclcmsg_hltv_replay : message_t

		struct csvcmsg_broadcast_command : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* cmd;
		}; // struct csvcmsg_broadcast_command : message_t

		struct cclcmsg_hltv_fixup_operator_tick : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* props_data;
			cmsg_vector *origin;
			cmsg_qangle *eye_angles;
			cmsg_vector *view_offset;
			int tick;
			int observer_mode;
			bool cameraman_scoreboard;
			int observer_target;
		}; // struct cclcmsg_hltv_fixup_operator_tick : message_t

		struct csvcmsg_hltv_fixup_operator_status : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* override_operator_name;
			uint32_t mode;
		}; // struct csvcmsg_hltv_fixup_operator_status : message_t

		struct cin_button_state_pb : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t buttonstate1;
			uint64_t buttonstate2;
			uint64_t buttonstate3;
		}; // struct cin_button_state_pb : message_t

		struct csubtick_move_step : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t button;
			bool pressed;
			float when;
		}; // struct csubtick_move_step : message_t

		struct cbase_user_cmd_pb : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			PAD(8)
			repeated_ptr_t<csubtick_move_step> subtick_moves;
			std::string* move_crc;
			cin_button_state_pb *buttons_pb;
			cmsg_qangle *viewangles;
			int command_number;
			int tick_count;
			float forwardmove;
			float leftmove;
			float upmove;
			int impulse;
			int weaponselect;
			int random_seed;
			int mousedx;
			int mousedy;
			uint32_t pawn_entity_handle;
			uint32_t consumed_server_angle_changes;
			int cmd_flags;
		}; // struct cbase_user_cmd_pb : message_t

		struct cuser_cmd_base_pb : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cbase_user_cmd_pb *base;
		}; // struct cuser_cmd_base_pb : message_t

		enum class ecsgo_game_events : uint32_t
		{
			ge_player_anim_event_id = 0x1c2,
			ge_radio_icon_event_id = 0x1c3,
			ge_fire_bullets_id = 0x1c4,
		}; // enum class ecsgo_game_events : uint32_t

		struct cmsg_teplayer_anim_event : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t player;
			uint32_t event;
			int data;
		}; // struct cmsg_teplayer_anim_event : message_t

		struct cmsg_teradio_icon : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t player;
		}; // struct cmsg_teradio_icon : message_t

		struct cmsg_tefire_bullets : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cmsg_vector *origin;
			cmsg_qangle *angles;
			cmsg_vector *ent_origin;
			uint32_t weapon_id;
			uint32_t mode;
			uint32_t seed;
			uint32_t player;
			float inaccuracy;
			float recoil_index;
			float spread;
			int sound_type;
			uint32_t item_def_index;
			uint32_t sound_dsp_effect;
			uint32_t num_bullets_remaining;
			uint32_t attack_type;
		}; // struct cmsg_tefire_bullets : message_t

		enum class ehit_group : uint32_t
		{
			ehg_generic = 0x0,
			ehg_head = 0x1,
			ehg_chest = 0x2,
			ehg_stomach = 0x3,
			ehg_left_arm = 0x4,
			ehg_right_arm = 0x5,
			ehg_left_leg = 0x6,
			ehg_right_leg = 0x7,
			ehg_gear = 0x8,
			ehg_miss = 0x9,
		}; // enum class ehit_group : uint32_t

		enum class eteam : uint32_t
		{
			et_unknown = 0x0,
			et_spectator = 0x1,
			et_terrorist = 0x2,
			et_ct = 0x3,
		}; // enum class eteam : uint32_t

		enum class eweapon_type : uint32_t
		{
			ewt_knife = 0x0,
			ewt_pistol = 0x1,
			ewt_sub_machine_gun = 0x2,
			ewt_rifle = 0x3,
			ewt_shotgun = 0x4,
			ewt_sniper_rifle = 0x5,
			ewt_machine_gun = 0x6,
			ewt_c4 = 0x7,
			ewt_grenade = 0x8,
			ewt_equipment = 0x9,
			ewt_stackable_item = 0xa,
			ewt_unknown = 0xb,
		}; // enum class eweapon_type : uint32_t

		struct mldict : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* key;
			std::string* val_string;
			int val_int;
			float val_float;
		}; // struct mldict : message_t

		struct mlevent : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<mldict> data;
			std::string* event_name;
		}; // struct mlevent : message_t

		struct mlmatch_state : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* game_mode;
			std::string* phase;
			int round;
			int score_ct;
			int score_t;
		}; // struct mlmatch_state : message_t

		struct mlround_state : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* phase;
			std::string* bomb_state;
			eteam *win_team;
		}; // struct mlround_state : message_t

		struct mlweapon_state : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* name;
			std::string* state;
			eweapon_type *type;
			int index;
			int ammo_clip;
			int ammo_clip_max;
			int ammo_reserve;
			float recoil_index;
		}; // struct mlweapon_state : message_t

		struct mlplayer_state : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<mlweapon_state> weapons;
			std::string* name;
			std::string* clan;
			eteam *team;
			cmsg_vector *abspos;
			cmsg_qangle *eyeangle;
			cmsg_vector *eyeangle_fwd;
			int account_id;
			int player_slot;
			int entindex;
			int health;
			int armor;
			float flashed;
			float smoked;
			int money;
			int round_kills;
			int round_killhs;
			float burning;
			bool helmet;
			bool defuse_kit;
		}; // struct mlplayer_state : message_t

		struct mlgame_state : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<mlplayer_state> players;
			mlmatch_state *match;
			mlround_state *round;
		}; // struct mlgame_state : message_t

		struct mldemo_header : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* map_name;
			int tick_rate;
			uint32_t version;
			uint32_t steam_universe;
		}; // struct mldemo_header : message_t

		struct mltick : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<mlevent> events;
			mlgame_state *state;
			int tick_count;
		}; // struct mltick : message_t

		struct vac_net_shot : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			float delta_yaw_window;
			float delta_pitch_window;
			uint64_t steamid_player;
			int round_number;
			int hit_type;
			int weapon_type;
			float distance_to_hurt_target;
		}; // struct vac_net_shot : message_t

		enum class ecsgo_gcmsg : uint32_t
		{
			k_emsg_gccstrike15_v2_base = 0x238c,
			k_emsg_gccstrike15_v2_matchmaking_start = 0x238d,
			k_emsg_gccstrike15_v2_matchmaking_stop = 0x238e,
			k_emsg_gccstrike15_v2_matchmaking_client2_server_ping = 0x238f,
			k_emsg_gccstrike15_v2_matchmaking_gc2_client_update = 0x2390,
			k_emsg_gccstrike15_v2_matchmaking_server_reservation_response = 0x2392,
			k_emsg_gccstrike15_v2_matchmaking_gc2_client_reserve = 0x2393,
			k_emsg_gccstrike15_v2_matchmaking_client2_gchello = 0x2395,
			k_emsg_gccstrike15_v2_matchmaking_gc2_client_hello = 0x2396,
			k_emsg_gccstrike15_v2_matchmaking_gc2_client_abandon = 0x2398,
			k_emsg_gccstrike15_v2_matchmaking_operator2_gcblog_update = 0x239d,
			k_emsg_gccstrike15_v2_server_notification_for_user_penalty = 0x239e,
			k_emsg_gccstrike15_v2_client_report_player = 0x239f,
			k_emsg_gccstrike15_v2_client_report_server = 0x23a0,
			k_emsg_gccstrike15_v2_client_commend_player = 0x23a1,
			k_emsg_gccstrike15_v2_client_report_response = 0x23a2,
			k_emsg_gccstrike15_v2_client_commend_player_query = 0x23a3,
			k_emsg_gccstrike15_v2_client_commend_player_query_response = 0x23a4,
			k_emsg_gccstrike15_v2_watch_info_users = 0x23a6,
			k_emsg_gccstrike15_v2_client_request_players_profile = 0x23a7,
			k_emsg_gccstrike15_v2_players_profile = 0x23a8,
			k_emsg_gccstrike15_v2_player_overwatch_case_update = 0x23ab,
			k_emsg_gccstrike15_v2_player_overwatch_case_assignment = 0x23ac,
			k_emsg_gccstrike15_v2_player_overwatch_case_status = 0x23ad,
			k_emsg_gccstrike15_v2_gc2_client_text_msg = 0x23ae,
			k_emsg_gccstrike15_v2_client2_gctext_msg = 0x23af,
			k_emsg_gccstrike15_v2_match_end_run_reward_drops = 0x23b0,
			k_emsg_gccstrike15_v2_match_end_reward_drops_notification = 0x23b1,
			k_emsg_gccstrike15_v2_client_request_watch_info_friends2 = 0x23b2,
			k_emsg_gccstrike15_v2_match_list = 0x23b3,
			k_emsg_gccstrike15_v2_match_list_request_current_live_games = 0x23b4,
			k_emsg_gccstrike15_v2_match_list_request_recent_user_games = 0x23b5,
			k_emsg_gccstrike15_v2_gc2_server_reservation_update = 0x23b6,
			k_emsg_gccstrike15_v2_client_var_value_notification_info = 0x23b8,
			k_emsg_gccstrike15_v2_match_list_request_tournament_games = 0x23ba,
			k_emsg_gccstrike15_v2_match_list_request_full_game_info = 0x23bb,
			k_emsg_gccstrike15_v2_gifts_leaderboard_request = 0x23bc,
			k_emsg_gccstrike15_v2_gifts_leaderboard_response = 0x23bd,
			k_emsg_gccstrike15_v2_server_var_value_notification_info = 0x23be,
			k_emsg_gccstrike15_v2_client_submit_survey_vote = 0x23c0,
			k_emsg_gccstrike15_v2_server2_gcclient_validate = 0x23c1,
			k_emsg_gccstrike15_v2_match_list_request_live_game_for_user = 0x23c2,
			k_emsg_gccstrike15_v2_client2_gcecon_preview_data_block_request = 0x23c4,
			k_emsg_gccstrike15_v2_client2_gcecon_preview_data_block_response = 0x23c5,
			k_emsg_gccstrike15_v2_account_privacy_settings = 0x23c6,
			k_emsg_gccstrike15_v2_set_my_activity_info = 0x23c7,
			k_emsg_gccstrike15_v2_match_list_request_tournament_predictions = 0x23c8,
			k_emsg_gccstrike15_v2_match_list_upload_tournament_predictions = 0x23c9,
			k_emsg_gccstrike15_v2_draft_summary = 0x23ca,
			k_emsg_gccstrike15_v2_client_request_join_friend_data = 0x23cb,
			k_emsg_gccstrike15_v2_client_request_join_server_data = 0x23cc,
			k_emsg_gccstrike15_v2_client_request_new_mission = 0x23cd,
			k_emsg_gccstrike15_v2_gc2_client_tournament_info = 0x23cf,
			k_emsg_gc_global_game_subscribe = 0x23d0,
			k_emsg_gc_global_game_unsubscribe = 0x23d1,
			k_emsg_gc_global_game_play = 0x23d2,
			k_emsg_gccstrike15_v2_acknowledge_penalty = 0x23d3,
			k_emsg_gccstrike15_v2_client2_gcrequest_prestige_coin = 0x23d4,
			k_emsg_gccstrike15_v2_gc2_client_global_stats = 0x23d5,
			k_emsg_gccstrike15_v2_client2_gcstream_unlock = 0x23d6,
			k_emsg_gccstrike15_v2_fantasy_request_client_data = 0x23d7,
			k_emsg_gccstrike15_v2_fantasy_update_client_data = 0x23d8,
			k_emsg_gccstrike15_v2_gcto_client_steamdatagram_ticket = 0x23d9,
			k_emsg_gccstrike15_v2_client_to_gcrequest_ticket = 0x23da,
			k_emsg_gccstrike15_v2_client_to_gcrequest_elevate = 0x23db,
			k_emsg_gccstrike15_v2_global_chat = 0x23dc,
			k_emsg_gccstrike15_v2_global_chat_subscribe = 0x23dd,
			k_emsg_gccstrike15_v2_global_chat_unsubscribe = 0x23de,
			k_emsg_gccstrike15_v2_client_auth_key_code = 0x23df,
			k_emsg_gccstrike15_v2_gotv_sync_packet = 0x23e0,
			k_emsg_gccstrike15_v2_client_player_decal_sign = 0x23e1,
			k_emsg_gccstrike15_v2_client_logon_fatal_error = 0x23e3,
			k_emsg_gccstrike15_v2_client_poll_state = 0x23e4,
			k_emsg_gccstrike15_v2_party_register = 0x23e5,
			k_emsg_gccstrike15_v2_party_unregister = 0x23e6,
			k_emsg_gccstrike15_v2_party_search = 0x23e7,
			k_emsg_gccstrike15_v2_party_invite = 0x23e8,
			k_emsg_gccstrike15_v2_account_request_co_plays = 0x23e9,
			k_emsg_gccstrike15_v2_client_gcrank_update = 0x23ea,
			k_emsg_gccstrike15_v2_client_request_offers = 0x23eb,
			k_emsg_gccstrike15_v2_client_account_balance = 0x23ec,
			k_emsg_gccstrike15_v2_client_party_join_relay = 0x23ed,
			k_emsg_gccstrike15_v2_client_party_warning = 0x23ee,
			k_emsg_gccstrike15_v2_set_event_favorite = 0x23f0,
			k_emsg_gccstrike15_v2_get_event_favorites_request = 0x23f1,
			k_emsg_gccstrike15_v2_client_perf_report = 0x23f2,
			k_emsg_gccstrike15_v2_get_event_favorites_response = 0x23f3,
			k_emsg_gccstrike15_v2_client_request_souvenir = 0x23f4,
			k_emsg_gccstrike15_v2_client_report_validation = 0x23f5,
			k_emsg_gccstrike15_v2_gc2_client_refuse_secure_mode = 0x23f6,
			k_emsg_gccstrike15_v2_gc2_client_request_validation = 0x23f7,
			k_emsg_gccstrike15_v2_client_redeem_mission_reward = 0x23f9,
			k_emsg_gccstrike15_client_deep_stats = 0x23fa,
			k_emsg_gccstrike15_start_agreement_session_in_game = 0x23fb,
			k_emsg_gccstrike15_v2_gc2_client_init_system = 0x23fc,
			k_emsg_gccstrike15_v2_gc2_client_init_system_response = 0x23fd,
			k_emsg_gccstrike15_v2_private_queues = 0x23fe,
			k_emsg_gccstrike15_v2_match_list_tournament_operator_mgmt = 0x23ff,
			k_emsg_gccstrike15_v2_set_player_leaderboard_safe_name = 0x2402,
			k_emsg_gccstrike15_v2_client_redeem_free_reward = 0x2403,
			k_emsg_gccstrike15_v2_client_network_config = 0x2404,
		}; // enum class ecsgo_gcmsg : uint32_t

		enum class ecsgo_steam_user_stat : uint32_t
		{
			k_ecsgo_steam_user_stat_xp_earned_games = 0x1,
			k_ecsgo_steam_user_stat_match_wins_competitive = 0x2,
			k_ecsgo_steam_user_stat_survived_danger_zone = 0x3,
		}; // enum class ecsgo_steam_user_stat : uint32_t

		enum class eclient_reporting_version : uint32_t
		{
			k_eclient_reporting_version_old_version = 0x0,
			k_eclient_reporting_version_beta_version = 0x1,
			k_eclient_reporting_version_supports_trusted_mode = 0x2,
		}; // enum class eclient_reporting_version : uint32_t

		enum class einit_system_result : uint32_t
		{
			k_einit_system_result_invalid = 0x0,
			k_einit_system_result_success = 0x1,
			k_einit_system_result_none = 0x2,
			k_einit_system_result_not_found = 0x3,
			k_einit_system_result_existing = 0x4,
			k_einit_system_result_failed_open = 0x5,
			k_einit_system_result_mismatch = 0x6,
			k_einit_system_result_failed_init = 0x7,
			k_einit_system_result_max = 0x8,
		}; // enum class einit_system_result : uint32_t

		struct game_server_ping : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			int ping;
			uint32_t ip;
			uint32_t instances;
		}; // struct game_server_ping : message_t

		struct data_center_ping : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t data_center_id;
			int ping;
		}; // struct data_center_ping : message_t

		struct detailed_search_statistic : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t game_type;
			uint32_t search_time_avg;
			uint32_t players_searching;
		}; // struct detailed_search_statistic : message_t

		struct tournament_player : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* player_nick;
			std::string* player_name;
			std::string* player_flag;
			std::string* player_location;
			std::string* player_desc;
			uint32_t account_id;
			uint32_t player_dob;
		}; // struct tournament_player : message_t

		struct tournament_team : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<tournament_player> players;
			std::string* team_tag;
			std::string* team_flag;
			std::string* team_name;
			int team_id;
		}; // struct tournament_team : message_t

		struct tournament_event : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* event_tag;
			std::string* event_name;
			std::string* event_stage_name;
			int event_id;
			uint32_t event_time_start;
			uint32_t event_time_end;
			int event_public;
			int event_stage_id;
			uint32_t active_section_id;
		}; // struct tournament_event : message_t

		struct global_statistics : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<detailed_search_statistic> search_statistics;
			std::string* main_post_url;
			uint32_t players_online;
			uint32_t servers_online;
			uint32_t players_searching;
			uint32_t servers_available;
			uint32_t ongoing_matches;
			uint32_t search_time_avg;
			uint32_t required_appid_version;
			uint32_t pricesheet_version;
			uint32_t twitch_streams_version;
			uint32_t active_tournament_eventid;
			uint32_t active_survey_id;
			uint32_t rtime32_cur;
			uint32_t rtime32_event_start;
			uint32_t required_appid_version2;
		}; // struct global_statistics : message_t

		struct operational_statistic_description : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* name;
			uint32_t idkey;
		}; // struct operational_statistic_description : message_t

		struct operational_statistic_element : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			int values;
			uint32_t idkey;
		}; // struct operational_statistic_element : message_t

		struct operational_statistics_packet : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<operational_statistic_element> values;
			int packetid;
			int mstimestamp;
		}; // struct operational_statistics_packet : message_t

		struct operational_var_value : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* name;
			std::string* svalue;
			int ivalue;
			float fvalue;
		}; // struct operational_var_value : message_t

		struct player_ranking_info : message_t
		{
			struct per_map_rank : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				uint32_t map_id;
				uint32_t rank_id;
				uint32_t wins;
			}; // struct per_map_rank : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<player_ranking_info::per_map_rank> per_map_rank;
			std::string* leaderboard_name;
			uint32_t account_id;
			uint32_t rank_id;
			uint32_t wins;
			float rank_change;
			uint32_t rank_type_id;
			uint32_t tv_control;
			uint64_t rank_window_stats;
			uint32_t rank_if_win;
			uint32_t rank_if_lose;
			uint32_t rank_if_tie;
			uint32_t leaderboard_name_status;
		}; // struct player_ranking_info : message_t

		struct player_commendation_info : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t cmd_friendly;
			uint32_t cmd_teaching;
			uint32_t cmd_leader;
		}; // struct player_commendation_info : message_t

		struct player_medals_info : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t display_items_defidx;
			uint32_t featured_display_item_defidx;
		}; // struct player_medals_info : message_t

		struct account_activity : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t activity;
			uint32_t mode;
			uint32_t map;
			uint64_t matchid;
		}; // struct account_activity : message_t

		struct tournament_match_setup : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			int event_id;
			int team_id_ct;
			int team_id_t;
			int event_stage_id;
		}; // struct tournament_match_setup : message_t

		struct server_hltv_info : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* game_mapgroup;
			std::string* game_map;
			uint32_t tv_udp_port;
			uint64_t tv_watch_key;
			uint32_t tv_slots;
			uint32_t tv_clients;
			uint32_t tv_proxies;
			uint32_t tv_time;
			uint32_t game_type;
			uint64_t tv_master_steamid;
			uint32_t tv_local_slots;
			uint32_t tv_local_clients;
			uint32_t tv_local_proxies;
			uint32_t tv_relay_slots;
			uint32_t tv_relay_clients;
			uint32_t tv_relay_proxies;
			uint32_t tv_relay_address;
			uint32_t tv_relay_port;
			uint64_t tv_relay_steamid;
			uint32_t flags;
		}; // struct server_hltv_info : message_t

		struct ip_address_mask : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t a;
			uint32_t b;
			uint32_t c;
			uint32_t d;
			uint32_t bits;
			uint32_t token;
		}; // struct ip_address_mask : message_t

		struct cmsg_csgo_steam_user_stat_change : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			int ecsgosteamuserstat;
			int delta;
			bool absolute;
		}; // struct cmsg_csgo_steam_user_stat_change : message_t

		struct xp_progress_data : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t xp_points;
			int xp_category;
		}; // struct xp_progress_data : message_t

		struct match_end_item_updates : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t item_id;
			uint32_t item_attr_defidx;
			uint32_t item_attr_delta_value;
		}; // struct match_end_item_updates : message_t

		struct score_leaderboard_data : message_t
		{
			struct entry : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				uint32_t tag;
				uint32_t val;
			}; // struct entry : message_t

			struct account_entries : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				repeated_ptr_t<score_leaderboard_data::entry> entries;
				uint32_t accountid;
			}; // struct account_entries : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<score_leaderboard_data::account_entries> accountentries;
			repeated_ptr_t<score_leaderboard_data::entry> matchentries;
			std::string* leaderboard_name;
			uint64_t quest_id;
			uint32_t score;
		}; // struct score_leaderboard_data : message_t

		struct player_quest_data : message_t
		{
			struct quest_item_data : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				uint64_t quest_id;
				int quest_normal_points_earned;
				int quest_bonus_points_earned;
			}; // struct quest_item_data : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<player_quest_data::quest_item_data> quest_item_data;
			repeated_ptr_t<xp_progress_data> xp_progress_data;
			repeated_ptr_t<match_end_item_updates> item_updates;
			repeated_ptr_t<cmsg_csgo_steam_user_stat_change> userstatchanges;
			uint32_t quester_account_id;
			uint32_t time_played;
			uint32_t mm_game_mode;
			bool operation_points_eligible;
		}; // struct player_quest_data : message_t

		struct deep_player_stats_entry : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t mates;
			uint32_t accountid;
			uint64_t match_id;
			uint32_t mm_game_mode;
			uint32_t mapid;
			bool b_starting_ct;
			uint32_t match_outcome;
			uint32_t rounds_won;
			uint32_t rounds_lost;
			uint32_t stat_score;
			uint32_t stat_deaths;
			uint32_t stat_mvps;
			uint32_t enemy_kills;
			uint32_t enemy_headshots;
			uint32_t enemy_2ks;
			uint32_t enemy_3ks;
			uint32_t enemy_4ks;
			uint32_t total_damage;
			uint32_t engagements_entry_count;
			uint32_t engagements_entry_wins;
			uint32_t engagements_1v1_count;
			uint32_t engagements_1v1_wins;
			uint32_t engagements_1v2_count;
			uint32_t engagements_1v2_wins;
			uint32_t utility_count;
			uint32_t utility_success;
			uint32_t flash_count;
			uint32_t flash_success;
		}; // struct deep_player_stats_entry : message_t

		struct deep_player_match_event : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t accountid;
			uint64_t match_id;
			uint32_t event_id;
			uint32_t event_type;
			bool b_playing_ct;
			int user_pos_x;
			int user_pos_y;
			int user_pos_z;
			uint32_t user_defidx;
			int other_pos_x;
			int other_pos_y;
			int other_pos_z;
			uint32_t other_defidx;
			int event_data;
		}; // struct deep_player_match_event : message_t

		struct cmsg_gc_server_quest_update_data : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<player_quest_data> player_quest_data;
			std::string* binary_data;
			score_leaderboard_data *missionlbsdata;
			uint32_t mm_game_mode;
		}; // struct cmsg_gc_server_quest_update_data : message_t

		struct cmsg_gccstrike15_v2_matchmaking_gc2_server_confirm : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t token;
			uint32_t stamp;
			uint64_t exchange;
			uint32_t retry;
		}; // struct cmsg_gccstrike15_v2_matchmaking_gc2_server_confirm : message_t

		struct cmsg_gccstrike15_v2_gc2_server_reservation_update : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t viewers_external_total;
			uint32_t viewers_external_steam;
		}; // struct cmsg_gccstrike15_v2_gc2_server_reservation_update : message_t

		struct cmsg_gccstrike15_v2_matchmaking_start : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t account_ids;
			std::string* ticket_data;
			tournament_match_setup *tournament_match;
			uint32_t game_type;
			uint32_t client_version;
			bool prime_only;
			uint32_t tv_control;
			uint64_t lobby_id;
		}; // struct cmsg_gccstrike15_v2_matchmaking_start : message_t

		struct cmsg_gccstrike15_v2_matchmaking_stop : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			int abandon;
		}; // struct cmsg_gccstrike15_v2_matchmaking_stop : message_t

		struct cmsg_gccstrike15_v2_matchmaking_gc2_client_update_note : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			int type;
			int region_id;
			float region_r;
			float distance;
		}; // struct cmsg_gccstrike15_v2_matchmaking_gc2_client_update_note : message_t

		struct cmsg_gccstrike15_v2_matchmaking_client2_server_ping : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<game_server_ping> gameserverpings;
			repeated_ptr_t<data_center_ping> data_center_pings;
			repeated_ptr_t<cmsg_gccstrike15_v2_matchmaking_gc2_client_update_note> notes;
			std::string* search_key;
			std::string* debug_message;
			int offset_index;
			int final_batch;
			uint32_t max_ping;
			uint32_t test_token;
		}; // struct cmsg_gccstrike15_v2_matchmaking_client2_server_ping : message_t

		struct cmsg_gccstrike15_v2_matchmaking_gc2_client_update : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cmsg_gccstrike15_v2_matchmaking_gc2_client_update_note> notes;
			uint32_t waiting_account_id_sessions;
			uint32_t ongoingmatch_account_id_sessions;
			uint32_t failping_account_id_sessions;
			uint32_t penalty_account_id_sessions;
			uint32_t failready_account_id_sessions;
			uint32_t vacbanned_account_id_sessions;
			uint32_t penalty_account_id_sessions_green;
			uint32_t insufficientlevel_sessions;
			uint32_t vsncheck_account_id_sessions;
			uint32_t launcher_mismatch_sessions;
			uint32_t insecure_account_id_sessions;
			std::string* error;
			global_statistics *global_stats;
			ip_address_mask *server_ipaddress_mask;
			int matchmaking;
		}; // struct cmsg_gccstrike15_v2_matchmaking_gc2_client_update : message_t

		struct cdata_gccstrike15_v2_tournament_match_draft : message_t
		{
			struct entry : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				int mapid;
				int team_id_ct;
			}; // struct entry : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cdata_gccstrike15_v2_tournament_match_draft::entry> drafts;
			int vote_mapid_0;
			int vote_mapid_1;
			int vote_mapid_2;
			int vote_mapid_3;
			int vote_mapid_4;
			int vote_mapid_5;
			int vote_starting_side;
			int event_id;
			int event_stage_id;
			int team_id_0;
			int team_id_1;
			int maps_count;
			int maps_current;
			int team_id_start;
			int team_id_veto1;
			int team_id_pickn;
			int vote_phase;
			float vote_phase_start;
			float vote_phase_length;
		}; // struct cdata_gccstrike15_v2_tournament_match_draft : message_t

		struct cpre_match_info_data : message_t
		{
			struct team_stats : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				std::string* match_info_teams;
				std::string* match_info_txt;
				int match_info_idxtxt;
			}; // struct team_stats : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cpre_match_info_data::team_stats> stats;
			int wins;
			cdata_gccstrike15_v2_tournament_match_draft *draft;
			int predictions_pct;
		}; // struct cpre_match_info_data : message_t

		struct cmsg_gccstrike15_v2_matchmaking_gc2_server_reserve : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<player_ranking_info> rankings;
			repeated_ptr_t<ip_address_mask> whitelist;
			repeated_ptr_t<tournament_team> tournament_teams;
			repeated_ptr_t<operational_var_value> op_var_values;
			uint32_t account_ids;
			uint32_t party_ids;
			uint32_t tournament_casters_account_ids;
			tournament_event *tournament_event;
			cpre_match_info_data *pre_match_data;
			uint32_t game_type;
			uint64_t match_id;
			uint32_t server_version;
			uint32_t flags;
			uint64_t encryption_key;
			uint64_t encryption_key_pub;
			uint64_t tv_master_steamid;
			uint64_t tv_relay_steamid;
			uint32_t rtime32_event_start;
			uint32_t tv_control;
		}; // struct cmsg_gccstrike15_v2_matchmaking_gc2_server_reserve : message_t

		struct cmsg_gccstrike15_v2_matchmaking_server_reservation_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t reward_player_accounts;
			uint32_t idle_player_accounts;
			std::string* map;
			std::string* tournament_tag;
			cmsg_gccstrike15_v2_matchmaking_gc2_server_reserve *reservation;
			server_hltv_info *tv_info;
			uint64_t reservationid;
			uint64_t gc_reservation_sent;
			uint32_t server_version;
			uint32_t reward_item_attr_def_idx;
			uint32_t reward_item_attr_value;
			uint32_t reward_item_attr_reward_idx;
			uint32_t reward_drop_list;
			uint32_t legacy_steamdatagram_port;
			uint32_t steamdatagram_routing;
			uint32_t test_token;
			uint32_t flags;
		}; // struct cmsg_gccstrike15_v2_matchmaking_server_reservation_response : message_t

		struct cmsg_gccstrike15_v2_matchmaking_gc2_client_reserve : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* map;
			std::string* server_address;
			cmsg_gccstrike15_v2_matchmaking_gc2_server_reserve *reservation;
			data_center_ping *gs_ping;
			uint64_t serverid;
			uint32_t direct_udp_ip;
			uint32_t direct_udp_port;
			uint64_t reservationid;
			uint32_t gs_location_id;
		}; // struct cmsg_gccstrike15_v2_matchmaking_gc2_client_reserve : message_t

		struct cmsg_gccstrike15_v2_matchmaking_server_round_stats : message_t
		{
			struct drop_info : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				uint32_t account_mvp;
			}; // struct drop_info : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			int kills;
			int assists;
			int deaths;
			int scores;
			int pings;
			int team_scores;
			int enemy_kills;
			int enemy_headshots;
			int enemy_3ks;
			int enemy_4ks;
			int enemy_5ks;
			int mvps;
			int enemy_kills_agg;
			int enemy_2ks;
			int player_spawned;
			int team_spawn_count;
			std::string* map;
			cmsg_gccstrike15_v2_matchmaking_gc2_server_reserve *reservation;
			cmsg_gccstrike15_v2_matchmaking_gc2_server_confirm *confirm;
			cmsg_gccstrike15_v2_matchmaking_server_round_stats::drop_info *drop_info;
			uint64_t reservationid;
			int round;
			int round_result;
			int match_result;
			int reservation_stage;
			int match_duration;
			uint32_t spectators_count;
			uint32_t spectators_count_tv;
			uint32_t spectators_count_lnk;
			bool b_switched_teams;
			uint32_t max_rounds;
		}; // struct cmsg_gccstrike15_v2_matchmaking_server_round_stats : message_t

		struct cmsg_gccstrike15_v2_matchmaking_client2_gchello : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

		}; // struct cmsg_gccstrike15_v2_matchmaking_client2_gchello : message_t

		struct cmsg_gccstrike15_v2_matchmaking_gc2_client_hello : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<tournament_team> my_current_event_teams;
			repeated_ptr_t<tournament_event> my_current_event_stages;
			repeated_ptr_t<player_ranking_info> rankings;
			cmsg_gccstrike15_v2_matchmaking_gc2_client_reserve *ongoingmatch;
			global_statistics *global_stats;
			player_ranking_info *ranking;
			player_commendation_info *commendation;
			player_medals_info *medals;
			tournament_event *my_current_event;
			tournament_team *my_current_team;
			account_activity *activity;
			uint32_t account_id;
			uint32_t penalty_seconds;
			uint32_t penalty_reason;
			int vac_banned;
			uint32_t survey_vote;
			int player_level;
			int player_cur_xp;
			int player_xp_bonus_flags;
		}; // struct cmsg_gccstrike15_v2_matchmaking_gc2_client_hello : message_t

		struct cmsg_gccstrike15_v2_account_privacy_settings : message_t
		{
			struct setting : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				uint32_t setting_type;
				uint32_t setting_value;
			}; // struct setting : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cmsg_gccstrike15_v2_account_privacy_settings::setting> settings;
		}; // struct cmsg_gccstrike15_v2_account_privacy_settings : message_t

		struct cmsg_gccstrike15_v2_matchmaking_gc2_client_abandon : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cmsg_gccstrike15_v2_matchmaking_gc2_client_reserve *abandoned_match;
			uint32_t account_id;
			uint32_t penalty_seconds;
			uint32_t penalty_reason;
		}; // struct cmsg_gccstrike15_v2_matchmaking_gc2_client_abandon : message_t

		struct cmsg_gccstrike15_v2_client_gcrank_update : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<player_ranking_info> rankings;
		}; // struct cmsg_gccstrike15_v2_client_gcrank_update : message_t

		struct cmsg_gccstrike15_v2_matchmaking_operator2_gcblog_update : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* main_post_url;
		}; // struct cmsg_gccstrike15_v2_matchmaking_operator2_gcblog_update : message_t

		struct cmsg_gccstrike15_v2_server_notification_for_user_penalty : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t account_id;
			uint32_t reason;
			uint32_t seconds;
			bool communication_cooldown;
		}; // struct cmsg_gccstrike15_v2_server_notification_for_user_penalty : message_t

		struct cmsg_gccstrike15_v2_client_report_player : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t account_id;
			uint32_t rpt_aimbot;
			uint32_t rpt_wallhack;
			uint32_t rpt_speedhack;
			uint32_t rpt_teamharm;
			uint32_t rpt_textabuse;
			uint32_t rpt_voiceabuse;
			uint64_t match_id;
			bool report_from_demo;
		}; // struct cmsg_gccstrike15_v2_client_report_player : message_t

		struct cmsg_gccstrike15_v2_client_commend_player : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			player_commendation_info *commendation;
			uint32_t account_id;
			uint64_t match_id;
			uint32_t tokens;
		}; // struct cmsg_gccstrike15_v2_client_commend_player : message_t

		struct cmsg_gccstrike15_v2_client_report_server : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t rpt_poorperf;
			uint32_t rpt_abusivemodels;
			uint32_t rpt_badmotd;
			uint32_t rpt_listingabuse;
			uint32_t rpt_inventoryabuse;
			uint64_t match_id;
		}; // struct cmsg_gccstrike15_v2_client_report_server : message_t

		struct cmsg_gccstrike15_v2_client_report_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t confirmation_id;
			uint32_t account_id;
			uint32_t server_ip;
			uint32_t response_type;
			uint32_t response_result;
			uint32_t tokens;
		}; // struct cmsg_gccstrike15_v2_client_report_response : message_t

		struct cmsg_gccstrike15_v2_client_request_watch_info_friends : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<data_center_ping> data_center_pings;
			uint32_t account_ids;
			uint32_t request_id;
			uint64_t serverid;
			uint64_t matchid;
			uint32_t client_launcher;
		}; // struct cmsg_gccstrike15_v2_client_request_watch_info_friends : message_t

		struct watchable_match_info : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* tv_watch_password;
			std::string* game_mapgroup;
			std::string* game_map;
			uint32_t server_ip;
			uint32_t tv_port;
			uint32_t tv_spectators;
			uint32_t tv_time;
			uint64_t cl_decryptdata_key;
			uint64_t cl_decryptdata_key_pub;
			uint32_t game_type;
			uint64_t server_id;
			uint64_t match_id;
			uint64_t reservation_id;
		}; // struct watchable_match_info : message_t

		struct cmsg_gccstrike15_v2_client_request_join_friend_data : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* errormsg;
			cmsg_gccstrike15_v2_matchmaking_gc2_client_reserve *res;
			uint32_t version;
			uint32_t account_id;
			uint32_t join_token;
			uint32_t join_ipp;
		}; // struct cmsg_gccstrike15_v2_client_request_join_friend_data : message_t

		struct cmsg_gccstrike15_v2_client_request_join_server_data : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* errormsg;
			cmsg_gccstrike15_v2_matchmaking_gc2_client_reserve *res;
			uint32_t version;
			uint32_t account_id;
			uint64_t serverid;
			uint32_t server_ip;
			uint32_t server_port;
		}; // struct cmsg_gccstrike15_v2_client_request_join_server_data : message_t

		struct cmsg_gccstrike15_v2_client_request_new_mission : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t mission_id;
			uint32_t campaign_id;
		}; // struct cmsg_gccstrike15_v2_client_request_new_mission : message_t

		struct cmsg_gccstrike15_v2_client_redeem_mission_reward : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t campaign_id;
			uint32_t redeem_id;
			uint32_t redeemable_balance;
			uint32_t expected_cost;
		}; // struct cmsg_gccstrike15_v2_client_redeem_mission_reward : message_t

		struct cmsg_gccstrike15_v2_client_redeem_free_reward : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t items;
			uint32_t generation_time;
			uint32_t redeemable_balance;
		}; // struct cmsg_gccstrike15_v2_client_redeem_free_reward : message_t

		struct cmsg_gccstrike15_v2_gc2_server_notify_xprewarded : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<xp_progress_data> xp_progress_data;
			uint32_t account_id;
			uint32_t current_xp;
			uint32_t current_level;
			uint32_t upgraded_defidx;
			uint32_t operation_points_awarded;
			uint32_t free_rewards;
		}; // struct cmsg_gccstrike15_v2_gc2_server_notify_xprewarded : message_t

		struct cmsg_gccstrike15_v2_client_network_config : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* data;
		}; // struct cmsg_gccstrike15_v2_client_network_config : message_t

		struct cmsg_gccstrike15_client_deep_stats : message_t
		{
			struct deep_stats_range : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				uint32_t begin;
				uint32_t end;
				bool frozen;
			}; // struct deep_stats_range : message_t

			struct deep_stats_match : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				repeated_ptr_t<deep_player_match_event> events;
				deep_player_stats_entry *player;
			}; // struct deep_stats_match : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cmsg_gccstrike15_client_deep_stats::deep_stats_match> matches;
			cmsg_gccstrike15_client_deep_stats::deep_stats_range *range;
			uint32_t account_id;
		}; // struct cmsg_gccstrike15_client_deep_stats : message_t

		struct cmsg_gccstrike15_v2_watch_info_users : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<watchable_match_info> watchable_match_infos;
			uint32_t account_ids;
			uint32_t request_id;
			uint32_t extended_timeout;
		}; // struct cmsg_gccstrike15_v2_watch_info_users : message_t

		struct cmsg_gccstrike15_v2_client_request_players_profile : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t account_ids__deprecated;
			uint32_t request_id__deprecated;
			uint32_t account_id;
			uint32_t request_level;
		}; // struct cmsg_gccstrike15_v2_client_request_players_profile : message_t

		struct cmsg_gccstrike15_v2_players_profile : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cmsg_gccstrike15_v2_matchmaking_gc2_client_hello> account_profiles;
			uint32_t request_id;
		}; // struct cmsg_gccstrike15_v2_players_profile : message_t

		struct cmsg_gccstrike15_v2_player_overwatch_case_update : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t caseid;
			uint32_t suspectid;
			uint32_t fractionid;
			uint32_t rpt_aimbot;
			uint32_t rpt_wallhack;
			uint32_t rpt_speedhack;
			uint32_t rpt_teamharm;
			uint32_t reason;
		}; // struct cmsg_gccstrike15_v2_player_overwatch_case_update : message_t

		struct cmsg_gccstrike15_v2_player_overwatch_case_assignment : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* caseurl;
			uint64_t caseid;
			uint32_t verdict;
			uint32_t timestamp;
			uint32_t throttleseconds;
			uint32_t suspectid;
			uint32_t fractionid;
			uint32_t numrounds;
			uint32_t fractionrounds;
			int streakconvictions;
			uint32_t reason;
		}; // struct cmsg_gccstrike15_v2_player_overwatch_case_assignment : message_t

		struct cmsg_gccstrike15_v2_player_overwatch_case_status : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t caseid;
			uint32_t statusid;
		}; // struct cmsg_gccstrike15_v2_player_overwatch_case_status : message_t

		struct cclient_header_overwatch_evidence : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t accountid;
			uint64_t caseid;
		}; // struct cclient_header_overwatch_evidence : message_t

		struct cmsg_gccstrike15_v2_gc2_client_text_msg : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* payload;
			uint32_t id;
			uint32_t type;
		}; // struct cmsg_gccstrike15_v2_gc2_client_text_msg : message_t

		struct cmsg_gccstrike15_v2_client2_gctext_msg : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* args;
			uint32_t id;
		}; // struct cmsg_gccstrike15_v2_client2_gctext_msg : message_t

		struct cmsg_gccstrike15_v2_match_end_run_reward_drops : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cmsg_gccstrike15_v2_matchmaking_server_reservation_response *serverinfo;
			cmsg_gc_server_quest_update_data *match_end_quest_data;
		}; // struct cmsg_gccstrike15_v2_match_end_run_reward_drops : message_t

		struct cecon_item_preview_data_block : message_t
		{
			struct sticker : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				uint32_t slot;
				uint32_t sticker_id;
				float wear;
				float scale;
				float rotation;
				uint32_t tint_id;
			}; // struct sticker : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cecon_item_preview_data_block::sticker> stickers;
			std::string* customname;
			uint32_t accountid;
			uint64_t itemid;
			uint32_t defindex;
			uint32_t paintindex;
			uint32_t rarity;
			uint32_t quality;
			uint32_t paintwear;
			uint32_t paintseed;
			uint32_t killeaterscoretype;
			uint32_t killeatervalue;
			uint32_t inventory;
			uint32_t origin;
			uint32_t questid;
			uint32_t dropreason;
			uint32_t musicindex;
			int entindex;
		}; // struct cecon_item_preview_data_block : message_t

		struct cmsg_gccstrike15_v2_match_end_reward_drops_notification : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cecon_item_preview_data_block *iteminfo;
		}; // struct cmsg_gccstrike15_v2_match_end_reward_drops_notification : message_t

		struct cmsg_item_acknowledged : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cecon_item_preview_data_block *iteminfo;
		}; // struct cmsg_item_acknowledged : message_t

		struct cmsg_gccstrike15_v2_client2_gcecon_preview_data_block_request : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t param_s;
			uint64_t param_a;
			uint64_t param_d;
			uint64_t param_m;
		}; // struct cmsg_gccstrike15_v2_client2_gcecon_preview_data_block_request : message_t

		struct cmsg_gccstrike15_v2_client2_gcecon_preview_data_block_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cecon_item_preview_data_block *iteminfo;
		}; // struct cmsg_gccstrike15_v2_client2_gcecon_preview_data_block_response : message_t

		struct cmsg_gccstrike15_v2_match_list_request_current_live_games : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

		}; // struct cmsg_gccstrike15_v2_match_list_request_current_live_games : message_t

		struct cmsg_gccstrike15_v2_match_list_request_live_game_for_user : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t accountid;
		}; // struct cmsg_gccstrike15_v2_match_list_request_live_game_for_user : message_t

		struct cmsg_gccstrike15_v2_match_list_request_recent_user_games : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t accountid;
		}; // struct cmsg_gccstrike15_v2_match_list_request_recent_user_games : message_t

		struct cmsg_gccstrike15_v2_match_list_request_tournament_games : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			int eventid;
		}; // struct cmsg_gccstrike15_v2_match_list_request_tournament_games : message_t

		struct cmsg_gccstrike15_v2_match_list_request_full_game_info : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t matchid;
			uint64_t outcomeid;
			uint32_t token;
		}; // struct cmsg_gccstrike15_v2_match_list_request_full_game_info : message_t

		struct cdata_gccstrike15_v2_match_info : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cmsg_gccstrike15_v2_matchmaking_server_round_stats> roundstatsall;
			watchable_match_info *watchablematchinfo;
			cmsg_gccstrike15_v2_matchmaking_server_round_stats *roundstats_legacy;
			uint64_t matchid;
			uint32_t matchtime;
		}; // struct cdata_gccstrike15_v2_match_info : message_t

		struct cdata_gccstrike15_v2_tournament_group_team : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			int team_id;
			int score;
			bool correctpick;
		}; // struct cdata_gccstrike15_v2_tournament_group_team : message_t

		struct cdata_gccstrike15_v2_tournament_group : message_t
		{
			struct picks : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				int pickids;
			}; // struct picks : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cdata_gccstrike15_v2_tournament_group_team> teams;
			repeated_ptr_t<cdata_gccstrike15_v2_tournament_group::picks> picks;
			int stage_ids;
			std::string* name;
			std::string* desc;
			uint32_t groupid;
			uint32_t picks__deprecated;
			uint32_t picklockuntiltime;
			uint32_t pickableteams;
			uint32_t points_per_pick;
		}; // struct cdata_gccstrike15_v2_tournament_group : message_t

		struct cdata_gccstrike15_v2_tournament_section : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cdata_gccstrike15_v2_tournament_group> groups;
			std::string* name;
			std::string* desc;
			uint32_t sectionid;
		}; // struct cdata_gccstrike15_v2_tournament_section : message_t

		struct cdata_gccstrike15_v2_tournament_info : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cdata_gccstrike15_v2_tournament_section> sections;
			repeated_ptr_t<tournament_team> tournament_teams;
			tournament_event *tournament_event;
		}; // struct cdata_gccstrike15_v2_tournament_info : message_t

		struct cmsg_gccstrike15_v2_match_list : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cdata_gccstrike15_v2_match_info> matches;
			repeated_ptr_t<tournament_team> streams;
			cdata_gccstrike15_v2_tournament_info *tournamentinfo;
			uint32_t msgrequestid;
			uint32_t accountid;
			uint32_t servertime;
		}; // struct cmsg_gccstrike15_v2_match_list : message_t

		struct cmsg_gccstrike15_v2_match_list_tournament_operator_mgmt : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cdata_gccstrike15_v2_match_info> matches;
			int eventid;
			uint32_t accountid;
		}; // struct cmsg_gccstrike15_v2_match_list_tournament_operator_mgmt : message_t

		struct cmsg_gccstrike15_v2_predictions : message_t
		{
			struct group_match_team_pick : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				int sectionid;
				int groupid;
				int index;
				int teamid;
				uint64_t itemid;
			}; // struct group_match_team_pick : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cmsg_gccstrike15_v2_predictions::group_match_team_pick> group_match_team_picks;
			uint32_t event_id;
		}; // struct cmsg_gccstrike15_v2_predictions : message_t

		struct cmsg_gccstrike15_v2_fantasy : message_t
		{
			struct fantasy_slot : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				int type;
				int pick;
				uint64_t itemid;
			}; // struct fantasy_slot : message_t

			struct fantasy_team : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				repeated_ptr_t<cmsg_gccstrike15_v2_fantasy::fantasy_slot> slots;
				int sectionid;
			}; // struct fantasy_team : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cmsg_gccstrike15_v2_fantasy::fantasy_team> teams;
			uint32_t event_id;
		}; // struct cmsg_gccstrike15_v2_fantasy : message_t

		struct cmsg_legacy_source1_client_welcome : message_t
		{
			struct location : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				std::string* country;
				float latitude;
				float longitude;
			}; // struct location : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cmsg_socache_subscribed> outofdate_subscribed_caches;
			repeated_ptr_t<cmsg_socache_subscription_check> uptodate_subscribed_caches;
			std::string* game_data;
			std::string* game_data2;
			std::string* balance_url;
			std::string* txn_country_code;
			cmsg_legacy_source1_client_welcome::location *location;
			uint32_t version;
			uint32_t rtime32_gc_welcome_timestamp;
			uint32_t currency;
			uint32_t balance;
		}; // struct cmsg_legacy_source1_client_welcome : message_t

		struct cmsg_cstrike15_welcome : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t store_item_hash;
			uint32_t timeplayedconsecutively;
			uint32_t time_first_played;
			uint32_t last_time_played;
			uint32_t last_ip_address;
			uint64_t gscookieid;
			uint64_t uniqueid;
		}; // struct cmsg_cstrike15_welcome : message_t

		struct cmsg_gccstrike15_v2_client_var_value_notification_info : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* choked_blocks;
			std::string* value_name;
			int value_int;
			uint32_t server_addr;
			uint32_t server_port;
		}; // struct cmsg_gccstrike15_v2_client_var_value_notification_info : message_t

		struct cmsg_gccstrike15_v2_server_var_value_notification_info : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t viewangles;
			uint32_t userdata;
			uint32_t accountid;
			uint32_t type;
		}; // struct cmsg_gccstrike15_v2_server_var_value_notification_info : message_t

		struct cmsg_gccstrike15_v2_gifts_leaderboard_request : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

		}; // struct cmsg_gccstrike15_v2_gifts_leaderboard_request : message_t

		struct cmsg_gccstrike15_v2_gifts_leaderboard_response : message_t
		{
			struct gift_leaderboard_entry : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				uint32_t accountid;
				uint32_t gifts;
			}; // struct gift_leaderboard_entry : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cmsg_gccstrike15_v2_gifts_leaderboard_response::gift_leaderboard_entry> entries;
			uint32_t servertime;
			uint32_t time_period_seconds;
			uint32_t total_gifts_given;
			uint32_t total_givers;
		}; // struct cmsg_gccstrike15_v2_gifts_leaderboard_response : message_t

		struct cmsg_gccstrike15_v2_client_submit_survey_vote : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t survey_id;
			uint32_t vote;
		}; // struct cmsg_gccstrike15_v2_client_submit_survey_vote : message_t

		struct cmsg_gccstrike15_v2_server2_gcclient_validate : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t accountid;
		}; // struct cmsg_gccstrike15_v2_server2_gcclient_validate : message_t

		struct cmsg_gccstrike15_v2_gc2_client_tournament_info : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t teamids;
			uint32_t eventid;
			uint32_t stageid;
			uint32_t game_type;
		}; // struct cmsg_gccstrike15_v2_gc2_client_tournament_info : message_t

		struct csoecon_coupon : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t entryid;
			uint32_t defidx;
			uint32_t expiration_date;
		}; // struct csoecon_coupon : message_t

		struct csoaccount_item_personal_store : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t items;
			uint32_t generation_time;
			uint32_t redeemable_balance;
		}; // struct csoaccount_item_personal_store : message_t

		struct csoquest_progress : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t questid;
			uint32_t points_remaining;
			uint32_t bonus_points;
		}; // struct csoquest_progress : message_t

		struct csoaccount_seasonal_operation : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t season_value;
			uint32_t tier_unlocked;
			uint32_t premium_tiers;
			uint32_t mission_id;
			uint32_t missions_completed;
			uint32_t redeemable_balance;
			uint32_t season_pass_time;
		}; // struct csoaccount_seasonal_operation : message_t

		struct csoaccount_recurring_subscription : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t time_next_cycle;
			uint32_t time_initiated;
		}; // struct csoaccount_recurring_subscription : message_t

		struct csopersona_data_public : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			player_commendation_info *commendation;
			int player_level;
			bool elevated_state;
		}; // struct csopersona_data_public : message_t

		struct cmsg_gc_global_game_subscribe : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t ticket;
		}; // struct cmsg_gc_global_game_subscribe : message_t

		struct cmsg_gc_global_game_unsubscribe : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			int timeleft;
		}; // struct cmsg_gc_global_game_unsubscribe : message_t

		struct cmsg_gc_global_game_play : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t ticket;
			uint32_t gametimems;
			uint32_t msperpoint;
		}; // struct cmsg_gc_global_game_play : message_t

		struct cmsg_gccstrike15_v2_acknowledge_penalty : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			int acknowledged;
		}; // struct cmsg_gccstrike15_v2_acknowledge_penalty : message_t

		struct cmsg_gccstrike15_v2_client2_gcrequest_prestige_coin : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t defindex;
			uint64_t upgradeid;
			uint32_t hours;
			uint32_t prestigetime;
		}; // struct cmsg_gccstrike15_v2_client2_gcrequest_prestige_coin : message_t

		struct cmsg_gccstrike15_v2_client2_gcstream_unlock : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t ticket;
			int os;
		}; // struct cmsg_gccstrike15_v2_client2_gcstream_unlock : message_t

		struct cmsg_gccstrike15_v2_client_to_gcrequest_elevate : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t stage;
		}; // struct cmsg_gccstrike15_v2_client_to_gcrequest_elevate : message_t

		struct cmsg_gccstrike15_v2_client_to_gcchat : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* text;
			uint64_t match_id;
		}; // struct cmsg_gccstrike15_v2_client_to_gcchat : message_t

		struct cmsg_gccstrike15_v2_gcto_client_chat : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* text;
			uint32_t account_id;
		}; // struct cmsg_gccstrike15_v2_gcto_client_chat : message_t

		struct cmsg_gccstrike15_v2_client_auth_key_code : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* code;
			uint32_t eventid;
		}; // struct cmsg_gccstrike15_v2_client_auth_key_code : message_t

		struct cmsg_gccstrike15_gotv_sync_packet : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cengine_gotv_sync_packet *data;
		}; // struct cmsg_gccstrike15_gotv_sync_packet : message_t

		struct player_decal_digital_signature : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			float endpos;
			float startpos;
			float left;
			float normal;
			std::string* signature;
			uint32_t accountid;
			uint32_t rtime;
			uint32_t tx_defidx;
			int entindex;
			uint32_t hitbox;
			float creationtime;
			uint32_t equipslot;
			uint32_t trace_id;
			uint32_t tint_id;
		}; // struct player_decal_digital_signature : message_t

		struct cmsg_gccstrike15_v2_client_player_decal_sign : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			player_decal_digital_signature *data;
			uint64_t itemid;
		}; // struct cmsg_gccstrike15_v2_client_player_decal_sign : message_t

		struct cmsg_gccstrike15_v2_client_logon_fatal_error : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* message;
			std::string* country;
			uint32_t errorcode;
		}; // struct cmsg_gccstrike15_v2_client_logon_fatal_error : message_t

		struct cmsg_gccstrike15_v2_client_poll_state : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* names;
			int values;
			uint32_t pollid;
		}; // struct cmsg_gccstrike15_v2_client_poll_state : message_t

		struct cmsg_gccstrike15_v2_party_register : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t id;
			uint32_t ver;
			uint32_t apr;
			uint32_t ark;
			uint32_t nby;
			uint32_t grp;
			uint32_t slots;
			uint32_t launcher;
			uint32_t game_type;
		}; // struct cmsg_gccstrike15_v2_party_register : message_t

		struct cmsg_gccstrike15_v2_party_search : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t grps;
			uint32_t ver;
			uint32_t apr;
			uint32_t ark;
			uint32_t launcher;
			uint32_t game_type;
		}; // struct cmsg_gccstrike15_v2_party_search : message_t

		struct cmsg_gccstrike15_v2_party_search_results : message_t
		{
			struct entry : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				uint32_t id;
				uint32_t grp;
				uint32_t game_type;
				uint32_t apr;
				uint32_t ark;
				uint32_t loc;
				uint32_t accountid;
			}; // struct entry : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cmsg_gccstrike15_v2_party_search_results::entry> entries;
		}; // struct cmsg_gccstrike15_v2_party_search_results : message_t

		struct cmsg_gccstrike15_v2_party_invite : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t accountid;
			uint32_t lobbyid;
		}; // struct cmsg_gccstrike15_v2_party_invite : message_t

		struct cmsg_gccstrike15_v2_account_request_co_plays : message_t
		{
			struct player : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				uint32_t accountid;
				uint32_t rtcoplay;
				bool online;
			}; // struct player : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cmsg_gccstrike15_v2_account_request_co_plays::player> players;
			uint32_t servertime;
		}; // struct cmsg_gccstrike15_v2_account_request_co_plays : message_t

		struct cmsg_gccstrike15_v2_client_to_gcrequest_ticket : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* gameserver_sdr_routing;
			uint64_t authorized_steam_id;
			uint32_t authorized_public_ip;
			uint64_t gameserver_steam_id;
		}; // struct cmsg_gccstrike15_v2_client_to_gcrequest_ticket : message_t

		struct cmsg_gcto_client_steam_datagram_ticket : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* serialized_ticket;
		}; // struct cmsg_gcto_client_steam_datagram_ticket : message_t

		struct cmsg_gccstrike15_v2_client_request_offers : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

		}; // struct cmsg_gccstrike15_v2_client_request_offers : message_t

		struct cmsg_gccstrike15_v2_client_request_souvenir : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t itemid;
			uint64_t matchid;
			int eventid;
		}; // struct cmsg_gccstrike15_v2_client_request_souvenir : message_t

		struct cmsg_gccstrike15_v2_client_account_balance : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* url;
			uint64_t amount;
		}; // struct cmsg_gccstrike15_v2_client_account_balance : message_t

		struct cmsg_gccstrike15_v2_client_party_join_relay : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t accountid;
			uint64_t lobbyid;
		}; // struct cmsg_gccstrike15_v2_client_party_join_relay : message_t

		struct cmsg_gccstrike15_v2_client_party_warning : message_t
		{
			struct entry : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				uint32_t accountid;
				uint32_t warntype;
			}; // struct entry : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cmsg_gccstrike15_v2_client_party_warning::entry> entries;
		}; // struct cmsg_gccstrike15_v2_client_party_warning : message_t

		struct cmsg_gccstrike15_v2_set_event_favorite : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t eventid;
			bool is_favorite;
		}; // struct cmsg_gccstrike15_v2_set_event_favorite : message_t

		struct cmsg_gccstrike15_v2_get_event_favorites_request : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			bool all_events;
		}; // struct cmsg_gccstrike15_v2_get_event_favorites_request : message_t

		struct cmsg_gccstrike15_v2_get_event_favorites_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* json_favorites;
			std::string* json_featured;
			bool all_events;
		}; // struct cmsg_gccstrike15_v2_get_event_favorites_response : message_t

		struct cmsg_gccstrike15_v2_client_perf_report : message_t
		{
			struct entry : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				std::string* reference;
				std::string* actual;
				uint32_t perfcounter;
				uint32_t length;
				uint32_t sourceid;
				uint32_t status;
			}; // struct entry : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cmsg_gccstrike15_v2_client_perf_report::entry> entries;
		}; // struct cmsg_gccstrike15_v2_client_perf_report : message_t

		struct cvdiagnostic : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* string_value;
			uint32_t id;
			uint32_t extended;
			uint64_t value;
		}; // struct cvdiagnostic : message_t

		struct cmsg_gccstrike15_v2_client_report_validation : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cvdiagnostic> diagnostics;
			std::string* file_report;
			std::string* command_line;
			std::string* last_launch_data;
			uint32_t total_files;
			uint32_t internal_error;
			uint32_t trust_time;
			uint32_t count_pending;
			uint32_t count_completed;
			uint32_t process_id;
			int osversion;
			uint32_t clientreportversion;
			uint32_t status_id;
			uint32_t diagnostic1;
			uint64_t diagnostic2;
			uint64_t diagnostic3;
			uint32_t report_count;
			uint64_t client_time;
			uint64_t diagnostic4;
			uint64_t diagnostic5;
		}; // struct cmsg_gccstrike15_v2_client_report_validation : message_t

		struct cmsg_gccstrike15_v2_gc2_client_refuse_secure_mode : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* file_report;
			std::string* files_prevented_trusted;
			bool offer_insecure_mode;
			bool offer_secure_mode;
			bool show_unsigned_ui;
			bool kick_user;
			bool show_trusted_ui;
			bool show_warning_not_trusted;
			bool show_warning_not_trusted_2;
		}; // struct cmsg_gccstrike15_v2_gc2_client_refuse_secure_mode : message_t

		struct cmsg_gccstrike15_v2_gc2_client_request_validation : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* module;
			bool full_report;
		}; // struct cmsg_gccstrike15_v2_gc2_client_request_validation : message_t

		struct cmsg_gccstrike15_v2_gc2_client_init_system : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* name;
			std::string* outputname;
			std::string* key_data;
			std::string* sha_hash;
			std::string* manifest;
			std::string* system_package;
			bool load;
			int cookie;
			bool load_system;
		}; // struct cmsg_gccstrike15_v2_gc2_client_init_system : message_t

		struct cmsg_gccstrike15_v2_gc2_client_init_system_response : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* diagnostic;
			std::string* sha_hash;
			einit_system_result *einit_result;
			bool success;
			int response;
			int error_code1;
			int error_code2;
			int64_t handle;
			int aux_system1;
			int aux_system2;
		}; // struct cmsg_gccstrike15_v2_gc2_client_init_system_response : message_t

		struct cmsg_gccstrike15_v2_set_player_leaderboard_safe_name : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* leaderboard_safe_name;
		}; // struct cmsg_gccstrike15_v2_set_player_leaderboard_safe_name : message_t

		enum class ebase_game_events : uint32_t
		{
			ge_vdebug_game_session_idevent = 0xc8,
			ge_place_decal_event = 0xc9,
			ge_clear_world_decals_event = 0xca,
			ge_clear_entity_decals_event = 0xcb,
			ge_clear_decals_for_skeleton_instance_event = 0xcc,
			ge_source1_legacy_game_event_list = 0xcd,
			ge_source1_legacy_listen_events = 0xce,
			ge_source1_legacy_game_event = 0xcf,
			ge_sos_start_sound_event = 0xd0,
			ge_sos_stop_sound_event = 0xd1,
			ge_sos_set_sound_event_params = 0xd2,
			ge_sos_set_library_stack_fields = 0xd3,
			ge_sos_stop_sound_event_hash = 0xd4,
		}; // enum class ebase_game_events : uint32_t

		struct cmsg_vdebug_game_session_idevent : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* gamesessionid;
			int clientid;
		}; // struct cmsg_vdebug_game_session_idevent : message_t

		struct cmsg_place_decal_event : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cmsg_vector *position;
			cmsg_vector *normal;
			cmsg_vector *saxis;
			uint32_t decalmaterialindex;
			uint32_t flags;
			uint32_t color;
			float width;
			float height;
			float depth;
			uint32_t entityhandleindex;
			uint32_t skeletoninstancehash;
			int boneindex;
			bool translucenthit;
			bool is_adjacent;
		}; // struct cmsg_place_decal_event : message_t

		struct cmsg_clear_world_decals_event : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t flagstoclear;
		}; // struct cmsg_clear_world_decals_event : message_t

		struct cmsg_clear_entity_decals_event : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t flagstoclear;
		}; // struct cmsg_clear_entity_decals_event : message_t

		struct cmsg_clear_decals_for_skeleton_instance_event : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t flagstoclear;
			uint32_t entityhandleindex;
			uint32_t skeletoninstancehash;
		}; // struct cmsg_clear_decals_for_skeleton_instance_event : message_t

		struct cmsg_source1_legacy_game_event_list : message_t
		{
			struct key_t : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				std::string* name;
				int type;
			}; // struct key_t : message_t

			struct descriptor_t : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				repeated_ptr_t<cmsg_source1_legacy_game_event_list::key_t> keys;
				std::string* name;
				int eventid;
			}; // struct descriptor_t : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cmsg_source1_legacy_game_event_list::descriptor_t> descriptors;
		}; // struct cmsg_source1_legacy_game_event_list : message_t

		struct cmsg_source1_legacy_listen_events : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t eventarraybits;
			int playerslot;
		}; // struct cmsg_source1_legacy_listen_events : message_t

		struct cmsg_source1_legacy_game_event : message_t
		{
			struct key_t : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				std::string* val_string;
				int type;
				float val_float;
				int val_long;
				int val_short;
				int val_byte;
				bool val_bool;
				uint64_t val_uint64;
			}; // struct key_t : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cmsg_source1_legacy_game_event::key_t> keys;
			std::string* event_name;
			int eventid;
			int server_tick;
			int passthrough;
		}; // struct cmsg_source1_legacy_game_event : message_t

		struct cmsg_sos_start_sound_event : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* packed_params;
			int soundevent_guid;
			uint32_t soundevent_hash;
			int source_entity_index;
			int seed;
			float start_time;
		}; // struct cmsg_sos_start_sound_event : message_t

		struct cmsg_sos_stop_sound_event : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			int soundevent_guid;
		}; // struct cmsg_sos_stop_sound_event : message_t

		struct cmsg_sos_stop_sound_event_hash : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t soundevent_hash;
			int source_entity_index;
		}; // struct cmsg_sos_stop_sound_event_hash : message_t

		struct cmsg_sos_set_sound_event_params : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* packed_params;
			int soundevent_guid;
		}; // struct cmsg_sos_set_sound_event_params : message_t

		struct cmsg_sos_set_library_stack_fields : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* packed_fields;
			uint32_t stack_hash;
		}; // struct cmsg_sos_set_library_stack_fields : message_t

		enum class ebase_user_messages : uint32_t
		{
			um_achievement_event = 0x65,
			um_close_caption = 0x66,
			um_close_caption_direct = 0x67,
			um_current_timescale = 0x68,
			um_desired_timescale = 0x69,
			um_fade = 0x6a,
			um_game_title = 0x6b,
			um_hud_msg = 0x6e,
			um_hud_text = 0x6f,
			um_colored_text = 0x71,
			um_request_state = 0x72,
			um_reset_hud = 0x73,
			um_rumble = 0x74,
			um_say_text = 0x75,
			um_say_text2 = 0x76,
			um_say_text_channel = 0x77,
			um_shake = 0x78,
			um_shake_dir = 0x79,
			um_text_msg = 0x7c,
			um_screen_tilt = 0x7d,
			um_voice_mask = 0x80,
			um_send_audio = 0x82,
			um_item_pickup = 0x83,
			um_ammo_denied = 0x84,
			um_show_menu = 0x86,
			um_credits_msg = 0x87,
			um_close_caption_placeholder = 0x8e,
			um_camera_transition = 0x8f,
			um_audio_parameter = 0x90,
			um_particle_manager = 0x91,
			um_hud_error = 0x92,
			um_custom_game_event = 0x94,
			um_anim_graph_update = 0x95,
			um_haptics_manager_pulse = 0x96,
			um_haptics_manager_effect = 0x97,
			um_command_queue_state = 0x98,
			um_update_css_classes = 0x99,
			um_server_frame_time = 0x9a,
			um_lag_compensation_error = 0x9b,
			um_request_dll_status = 0x9c,
			um_request_util_action = 0x9d,
			um_util_action_response = 0x9e,
			um_dll_status_response = 0x9f,
			um_request_inventory = 0xa0,
			um_inventory_response = 0xa1,
			um_request_diagnostic = 0xa2,
			um_diagnostic_response = 0xa3,
			um_extra_user_data = 0xa4,
			um_max_base = 0xc8,
		}; // enum class ebase_user_messages : uint32_t

		enum class ebase_entity_messages : uint32_t
		{
			em_play_jingle = 0x88,
			em_screen_overlay = 0x89,
			em_remove_all_decals = 0x8a,
			em_propagate_force = 0x8b,
			em_do_spark = 0x8c,
			em_fix_angle = 0x8d,
		}; // enum class ebase_entity_messages : uint32_t

		enum class e_roll_type : uint32_t
		{
			roll_none = 0xffffffff,
			roll_stats = 0x0,
			roll_credits = 0x1,
			roll_late_join_logo = 0x2,
			roll_outtro = 0x3,
		}; // enum class e_roll_type : uint32_t

		enum class particle_message : uint32_t
		{
			game_particle_manager_event_create = 0x0,
			game_particle_manager_event_update = 0x1,
			game_particle_manager_event_update_forward = 0x2,
			game_particle_manager_event_update_orientation = 0x3,
			game_particle_manager_event_update_fallback = 0x4,
			game_particle_manager_event_update_ent = 0x5,
			game_particle_manager_event_update_offset = 0x6,
			game_particle_manager_event_destroy = 0x7,
			game_particle_manager_event_destroy_involving = 0x8,
			game_particle_manager_event_release = 0x9,
			game_particle_manager_event_latency = 0xa,
			game_particle_manager_event_should_draw = 0xb,
			game_particle_manager_event_frozen = 0xc,
			game_particle_manager_event_change_control_point_attachment = 0xd,
			game_particle_manager_event_update_entity_position = 0xe,
			game_particle_manager_event_set_fow_properties = 0xf,
			game_particle_manager_event_set_text = 0x10,
			game_particle_manager_event_set_should_check_fow = 0x11,
			game_particle_manager_event_set_control_point_model = 0x12,
			game_particle_manager_event_set_control_point_snapshot = 0x13,
			game_particle_manager_event_set_texture_attribute = 0x14,
			game_particle_manager_event_set_scene_object_generic_flag = 0x15,
			game_particle_manager_event_set_scene_object_tint_and_desat = 0x16,
			game_particle_manager_event_destroy_named = 0x17,
			game_particle_manager_event_skip_to_time = 0x18,
			game_particle_manager_event_can_freeze = 0x19,
			game_particle_manager_event_set_named_value_context = 0x1a,
			game_particle_manager_event_update_transform = 0x1b,
			game_particle_manager_event_freeze_transition_override = 0x1c,
			game_particle_manager_event_freeze_involving = 0x1d,
		}; // enum class particle_message : uint32_t

		enum class ehaptic_pulse_type : uint32_t
		{
			vr_hand_haptic_pulse_light = 0x0,
			vr_hand_haptic_pulse_medium = 0x1,
			vr_hand_haptic_pulse_strong = 0x2,
		}; // enum class ehaptic_pulse_type : uint32_t

		struct cuser_message_achievement_event : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t achievement;
		}; // struct cuser_message_achievement_event : message_t

		struct cuser_message_close_caption : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t hash;
			float duration;
			bool from_player;
			int ent_index;
		}; // struct cuser_message_close_caption : message_t

		struct cuser_message_close_caption_direct : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t hash;
			float duration;
			bool from_player;
			int ent_index;
		}; // struct cuser_message_close_caption_direct : message_t

		struct cuser_message_close_caption_placeholder : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* string;
			float duration;
			bool from_player;
			int ent_index;
		}; // struct cuser_message_close_caption_placeholder : message_t

		struct cuser_message_current_timescale : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			float current;
		}; // struct cuser_message_current_timescale : message_t

		struct cuser_message_desired_timescale : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			float desired;
			float acceleration;
			float minblendrate;
			float blenddeltamultiplier;
		}; // struct cuser_message_desired_timescale : message_t

		struct cuser_message_fade : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t duration;
			uint32_t hold_time;
			uint32_t flags;
			uint32_t color;
		}; // struct cuser_message_fade : message_t

		struct cuser_message_shake : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t command;
			float amplitude;
			float frequency;
			float duration;
		}; // struct cuser_message_shake : message_t

		struct cuser_message_shake_dir : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cuser_message_shake *shake;
			cmsg_vector *direction;
		}; // struct cuser_message_shake_dir : message_t

		struct cuser_message_screen_tilt : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cmsg_vector *angle;
			uint32_t command;
			bool ease_in_out;
			float duration;
			float time;
		}; // struct cuser_message_screen_tilt : message_t

		struct cuser_message_say_text : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* text;
			int playerindex;
			bool chat;
		}; // struct cuser_message_say_text : message_t

		struct cuser_message_say_text2 : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* messagename;
			std::string* param1;
			std::string* param2;
			std::string* param3;
			std::string* param4;
			int entityindex;
			bool chat;
		}; // struct cuser_message_say_text2 : message_t

		struct cuser_message_hud_msg : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* message;
			uint32_t channel;
			float x;
			float y;
			uint32_t color1;
			uint32_t color2;
			uint32_t effect;
		}; // struct cuser_message_hud_msg : message_t

		struct cuser_message_hud_text : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* message;
		}; // struct cuser_message_hud_text : message_t

		struct cuser_message_text_msg : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* param;
			uint32_t dest;
		}; // struct cuser_message_text_msg : message_t

		struct cuser_message_game_title : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

		}; // struct cuser_message_game_title : message_t

		struct cuser_message_reset_hud : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

		}; // struct cuser_message_reset_hud : message_t

		struct cuser_message_send_audio : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* soundname;
			bool stop;
		}; // struct cuser_message_send_audio : message_t

		struct cuser_message_audio_parameter : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t parameter_type;
			uint32_t name_hash_code;
			float value;
			uint32_t int_value;
		}; // struct cuser_message_audio_parameter : message_t

		struct cuser_message_voice_mask : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t gamerules_masks;
			uint32_t ban_masks;
			bool mod_enable;
		}; // struct cuser_message_voice_mask : message_t

		struct cuser_message_request_state : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

		}; // struct cuser_message_request_state : message_t

		struct cuser_message_rumble : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			int index;
			int data;
			int flags;
		}; // struct cuser_message_rumble : message_t

		struct cuser_message_say_text_channel : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* text;
			int player;
			int channel;
		}; // struct cuser_message_say_text_channel : message_t

		struct cuser_message_colored_text : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* text;
			uint32_t color;
			bool reset;
			int context_player_slot;
			int context_value;
			int context_team_id;
		}; // struct cuser_message_colored_text : message_t

		struct cuser_message_item_pickup : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* itemname;
		}; // struct cuser_message_item_pickup : message_t

		struct cuser_message_ammo_denied : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t ammo_id;
		}; // struct cuser_message_ammo_denied : message_t

		struct cuser_message_show_menu : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* menustring;
			uint32_t validslots;
			uint32_t displaytime;
			bool needmore;
		}; // struct cuser_message_show_menu : message_t

		struct cuser_message_credits_msg : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			e_roll_type *rolltype;
			float logo_length;
		}; // struct cuser_message_credits_msg : message_t

		struct centity_message_play_jingle : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			centity_msg *entity_msg;
		}; // struct centity_message_play_jingle : message_t

		struct centity_message_screen_overlay : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			centity_msg *entity_msg;
			bool start_effect;
		}; // struct centity_message_screen_overlay : message_t

		struct centity_message_remove_all_decals : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			centity_msg *entity_msg;
			bool remove_decals;
		}; // struct centity_message_remove_all_decals : message_t

		struct centity_message_propagate_force : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cmsg_vector *impulse;
			centity_msg *entity_msg;
		}; // struct centity_message_propagate_force : message_t

		struct centity_message_do_spark : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cmsg_vector *origin;
			centity_msg *entity_msg;
			int entityindex;
			float radius;
			uint32_t color;
			uint32_t beams;
			float thick;
			float duration;
		}; // struct centity_message_do_spark : message_t

		struct centity_message_fix_angle : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cmsg_qangle *angle;
			centity_msg *entity_msg;
			bool relative;
		}; // struct centity_message_fix_angle : message_t

		struct cuser_message_camera_transition : message_t
		{
			struct transition_data_driven : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				std::string* filename;
				int attach_ent_index;
				float duration;
			}; // struct transition_data_driven : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cuser_message_camera_transition::transition_data_driven *params_data_driven;
			uint32_t camera_type;
			float duration;
		}; // struct cuser_message_camera_transition : message_t

		struct cuser_msg_particle_manager : message_t
		{
			struct release_particle_index : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			}; // struct release_particle_index : message_t

			struct create_particle : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				std::string* control_point_configuration;
				uint64_t particle_name_index;
				int attach_type;
				uint32_t entity_handle;
				uint32_t entity_handle_for_modifiers;
				bool apply_voice_ban_rules;
				int team_behavior;
			}; // struct create_particle : message_t

			struct destroy_particle : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				bool destroy_immediately;
			}; // struct destroy_particle : message_t

			struct destroy_particle_involving : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				bool destroy_immediately;
				uint32_t entity_handle;
			}; // struct destroy_particle_involving : message_t

			struct destroy_particle_named : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				uint64_t particle_name_index;
				uint32_t entity_handle;
				bool destroy_immediately;
				bool play_endcap;
			}; // struct destroy_particle_named : message_t

			struct update_particle_obsolete : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				cmsg_vector *position;
				int control_point;
			}; // struct update_particle_obsolete : message_t

			struct update_particle_fwd_obsolete : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				cmsg_vector *forward;
				int control_point;
			}; // struct update_particle_fwd_obsolete : message_t

			struct update_particle_orient_obsolete : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				cmsg_vector *forward;
				cmsg_vector *deprecated_right;
				cmsg_vector *up;
				cmsg_vector *left;
				int control_point;
			}; // struct update_particle_orient_obsolete : message_t

			struct update_particle_transform : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				cmsg_vector *position;
				cmsg_quaternion *orientation;
				int control_point;
				float interpolation_interval;
			}; // struct update_particle_transform : message_t

			struct update_particle_fallback : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				cmsg_vector *position;
				int control_point;
			}; // struct update_particle_fallback : message_t

			struct update_particle_offset : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				cmsg_vector *origin_offset;
				cmsg_qangle *angle_offset;
				int control_point;
			}; // struct update_particle_offset : message_t

			struct update_particle_ent : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				cmsg_vector *fallback_position;
				cmsg_vector *offset_position;
				cmsg_qangle *offset_angles;
				int control_point;
				uint32_t entity_handle;
				int attach_type;
				int attachment;
				bool include_wearables;
			}; // struct update_particle_ent : message_t

			struct update_particle_set_frozen : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				bool set_frozen;
				float transition_duration;
			}; // struct update_particle_set_frozen : message_t

			struct update_particle_should_draw : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				bool should_draw;
			}; // struct update_particle_should_draw : message_t

			struct change_control_point_attachment : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				int attachment_old;
				int attachment_new;
				uint32_t entity_handle;
			}; // struct change_control_point_attachment : message_t

			struct update_entity_position : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				cmsg_vector *position;
				uint32_t entity_handle;
			}; // struct update_entity_position : message_t

			struct set_particle_fo_wproperties : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				int fow_control_point;
				int fow_control_point2;
				float fow_radius;
			}; // struct set_particle_fo_wproperties : message_t

			struct set_particle_should_check_fo_w : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				bool check_fow;
			}; // struct set_particle_should_check_fo_w : message_t

			struct set_control_point_model : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				std::string* model_name;
				int control_point;
			}; // struct set_control_point_model : message_t

			struct set_control_point_snapshot : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				std::string* snapshot_name;
				int control_point;
			}; // struct set_control_point_snapshot : message_t

			struct set_particle_text : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				std::string* text;
			}; // struct set_particle_text : message_t

			struct set_texture_attribute : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				std::string* attribute_name;
				std::string* texture_name;
			}; // struct set_texture_attribute : message_t

			struct set_scene_object_generic_flag : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				bool flag_value;
			}; // struct set_scene_object_generic_flag : message_t

			struct set_scene_object_tint_and_desat : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				uint32_t tint;
				float desat;
			}; // struct set_scene_object_tint_and_desat : message_t

			struct particle_skip_to_time : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				float skip_to_time;
			}; // struct particle_skip_to_time : message_t

			struct particle_can_freeze : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				bool can_freeze;
			}; // struct particle_can_freeze : message_t

			struct particle_freeze_transition_override : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				float freeze_transition_override;
			}; // struct particle_freeze_transition_override : message_t

			struct freeze_particle_involving : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				bool set_frozen;
				float transition_duration;
				uint32_t entity_handle;
			}; // struct freeze_particle_involving : message_t

			struct set_particle_named_value_context : message_t
			{
				struct float_context_value : message_t
				{
					template <typename T> T *as() { return reinterpret_cast<T *>(this); }

					uint32_t value_name_hash;
					float value;
				}; // struct float_context_value : message_t

				struct vector_context_value : message_t
				{
					template <typename T> T *as() { return reinterpret_cast<T *>(this); }

					cmsg_vector *value;
					uint32_t value_name_hash;
				}; // struct vector_context_value : message_t

				struct transform_context_value : message_t
				{
					template <typename T> T *as() { return reinterpret_cast<T *>(this); }

					cmsg_qangle *angles;
					cmsg_vector *translation;
					uint32_t value_name_hash;
				}; // struct transform_context_value : message_t

				struct ehandle_context : message_t
				{
					template <typename T> T *as() { return reinterpret_cast<T *>(this); }

					uint32_t value_name_hash;
					uint32_t ent_index;
				}; // struct ehandle_context : message_t

				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				repeated_ptr_t<cuser_msg_particle_manager::set_particle_named_value_context::float_context_value> float_values;
				repeated_ptr_t<cuser_msg_particle_manager::set_particle_named_value_context::vector_context_value> vector_values;
				repeated_ptr_t<cuser_msg_particle_manager::set_particle_named_value_context::transform_context_value> transform_values;
				repeated_ptr_t<cuser_msg_particle_manager::set_particle_named_value_context::ehandle_context> ehandle_values;
			}; // struct set_particle_named_value_context : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			particle_message *type;
			cuser_msg_particle_manager::release_particle_index *release_particle_index;
			cuser_msg_particle_manager::create_particle *create_particle;
			cuser_msg_particle_manager::destroy_particle *destroy_particle;
			cuser_msg_particle_manager::destroy_particle_involving *destroy_particle_involving;
			cuser_msg_particle_manager::update_particle_obsolete *update_particle;
			cuser_msg_particle_manager::update_particle_fwd_obsolete *update_particle_fwd;
			cuser_msg_particle_manager::update_particle_orient_obsolete *update_particle_orient;
			cuser_msg_particle_manager::update_particle_fallback *update_particle_fallback;
			cuser_msg_particle_manager::update_particle_offset *update_particle_offset;
			cuser_msg_particle_manager::update_particle_ent *update_particle_ent;
			cuser_msg_particle_manager::update_particle_should_draw *update_particle_should_draw;
			cuser_msg_particle_manager::update_particle_set_frozen *update_particle_set_frozen;
			cuser_msg_particle_manager::change_control_point_attachment *change_control_point_attachment;
			cuser_msg_particle_manager::update_entity_position *update_entity_position;
			cuser_msg_particle_manager::set_particle_fo_wproperties *set_particle_fow_properties;
			cuser_msg_particle_manager::set_particle_text *set_particle_text;
			cuser_msg_particle_manager::set_particle_should_check_fo_w *set_particle_should_check_fow;
			cuser_msg_particle_manager::set_control_point_model *set_control_point_model;
			cuser_msg_particle_manager::set_control_point_snapshot *set_control_point_snapshot;
			cuser_msg_particle_manager::set_texture_attribute *set_texture_attribute;
			cuser_msg_particle_manager::set_scene_object_generic_flag *set_scene_object_generic_flag;
			cuser_msg_particle_manager::set_scene_object_tint_and_desat *set_scene_object_tint_and_desat;
			cuser_msg_particle_manager::destroy_particle_named *destroy_particle_named;
			cuser_msg_particle_manager::particle_skip_to_time *particle_skip_to_time;
			cuser_msg_particle_manager::particle_can_freeze *particle_can_freeze;
			cuser_msg_particle_manager::set_particle_named_value_context *set_named_value_context;
			cuser_msg_particle_manager::update_particle_transform *update_particle_transform;
			cuser_msg_particle_manager::particle_freeze_transition_override *particle_freeze_transition_override;
			cuser_msg_particle_manager::freeze_particle_involving *freeze_particle_involving;
			uint32_t index;
		}; // struct cuser_msg_particle_manager : message_t

		struct cuser_msg_hud_error : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			int order_id;
		}; // struct cuser_msg_hud_error : message_t

		struct cuser_msg_custom_game_event : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* event_name;
			std::string* data;
		}; // struct cuser_msg_custom_game_event : message_t

		struct cuser_message_haptics_manager_pulse : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			int hand_id;
			float effect_amplitude;
			float effect_frequency;
			float effect_duration;
		}; // struct cuser_message_haptics_manager_pulse : message_t

		struct cuser_message_haptics_manager_effect : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			int hand_id;
			uint32_t effect_name_hash_code;
			float effect_scale;
		}; // struct cuser_message_haptics_manager_effect : message_t

		struct cuser_message_anim_state_graph_state : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* data;
			int entity_index;
		}; // struct cuser_message_anim_state_graph_state : message_t

		struct cuser_message_command_queue_state : message_t
		{
			struct command_queue_info_t : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				uint32_t commands_queued;
				uint32_t command_queue_desired_size;
				uint32_t starved_command_ticks;
				int time_dilation_percent;
			}; // struct command_queue_info_t : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cuser_message_command_queue_state::command_queue_info_t *command_queue_info;
			int player_slot;
		}; // struct cuser_message_command_queue_state : message_t

		struct cuser_message_update_css_classes : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* css_classes;
			int target_world_panel;
			bool is_add;
		}; // struct cuser_message_update_css_classes : message_t

		struct cuser_message_server_frame_time : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			float frame_time;
		}; // struct cuser_message_server_frame_time : message_t

		struct cuser_message_lag_compensation_error : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			float distance;
		}; // struct cuser_message_lag_compensation_error : message_t

		struct cuser_message_request_dll_status : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* dll_action;
			bool full_report;
		}; // struct cuser_message_request_dll_status : message_t

		struct cuser_message_request_util_action : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			int util1;
			int util2;
			int util3;
			int util4;
			int util5;
		}; // struct cuser_message_request_util_action : message_t

		struct cuser_message_util_msg_response : message_t
		{
			struct item_detail : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				std::string* name;
				int index;
				int hash;
				int crc;
			}; // struct item_detail : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cuser_message_util_msg_response::item_detail> itemdetails;
			int crc_part;
			int crc_part2;
			uint32_t crc;
			int item_count;
			uint32_t crc2;
			int item_count2;
			int client_timestamp;
			int platform;
			int itemgroup;
			int total_count;
			int total_count2;
		}; // struct cuser_message_util_msg_response : message_t

		struct cuser_message_dll_status : message_t
		{
			struct cvdiagnostic : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				std::string* string_value;
				uint32_t id;
				uint32_t extended;
				uint64_t value;
			}; // struct cvdiagnostic : message_t

			struct cmodule : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				std::string* name;
				uint64_t base_addr;
				uint32_t size;
				uint32_t timestamp;
			}; // struct cmodule : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cuser_message_dll_status::cvdiagnostic> diagnostics;
			repeated_ptr_t<cuser_message_dll_status::cmodule> modules;
			std::string* file_report;
			std::string* command_line;
			uint32_t total_files;
			uint32_t process_id;
			int osversion;
			uint64_t client_time;
		}; // struct cuser_message_dll_status : message_t

		struct cuser_message_request_inventory : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			int inventory;
			int offset;
			int options;
		}; // struct cuser_message_request_inventory : message_t

		struct cuser_message_inventory_response : message_t
		{
			struct inventory_detail : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				std::string* name;
				std::string* base_name;
				int index;
				int64_t primary;
				int64_t offset;
				int64_t first;
				int64_t base;
				int base_detail;
				int base_time;
				int base_hash;
			}; // struct inventory_detail : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cuser_message_inventory_response::inventory_detail> inventories;
			repeated_ptr_t<cuser_message_inventory_response::inventory_detail> inventories2;
			repeated_ptr_t<cuser_message_inventory_response::inventory_detail> inventories3;
			uint32_t crc;
			int item_count;
			int osversion;
			int perf_time;
			int client_timestamp;
			int platform;
			int inv_type;
			int build_version;
			int instance;
			int64_t start_time;
		}; // struct cuser_message_inventory_response : message_t

		struct cuser_message_request_diagnostic : message_t
		{
			struct diagnostic : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				std::string* name;
				std::string* alias;
				std::string* vardetail;
				int index;
				int64_t offset;
				int param;
				int length;
				int type;
				int64_t base;
				int64_t range;
				int64_t extent;
				int64_t detail;
				int context;
			}; // struct diagnostic : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cuser_message_request_diagnostic::diagnostic> diagnostics;
		}; // struct cuser_message_request_diagnostic : message_t

		struct cuser_message_diagnostic_response : message_t
		{
			struct diagnostic : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				std::string* detail;
				std::string* name;
				std::string* alias;
				std::string* backup;
				int index;
				int64_t offset;
				int param;
				int length;
				int64_t base;
				int64_t range;
				int type;
				int context;
				int64_t control;
				int64_t augment;
				int64_t placebo;
			}; // struct diagnostic : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cuser_message_diagnostic_response::diagnostic> diagnostics;
			int build_version;
			int instance;
			int64_t start_time;
			int osversion;
			int platform;
		}; // struct cuser_message_diagnostic_response : message_t

		struct cuser_message_extra_user_data : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* detail1;
			std::string* detail2;
			int item;
			int64_t value1;
			int64_t value2;
		}; // struct cuser_message_extra_user_data : message_t

		enum class eteprotobuf_ids : uint32_t
		{
			te_effect_dispatch_id = 0x190,
			te_armor_ricochet_id = 0x191,
			te_beam_ent_point_id = 0x192,
			te_beam_ents_id = 0x193,
			te_beam_points_id = 0x194,
			te_beam_ring_id = 0x195,
			te_bspdecal_id = 0x197,
			te_bubbles_id = 0x198,
			te_bubble_trail_id = 0x199,
			te_decal_id = 0x19a,
			te_world_decal_id = 0x19b,
			te_energy_splash_id = 0x19c,
			te_fizz_id = 0x19d,
			te_shatter_surface_id = 0x19e,
			te_glow_sprite_id = 0x19f,
			te_impact_id = 0x1a0,
			te_muzzle_flash_id = 0x1a1,
			te_blood_stream_id = 0x1a2,
			te_explosion_id = 0x1a3,
			te_dust_id = 0x1a4,
			te_large_funnel_id = 0x1a5,
			te_sparks_id = 0x1a6,
			te_physics_prop_id = 0x1a7,
			te_player_decal_id = 0x1a8,
			te_projected_decal_id = 0x1a9,
			te_smoke_id = 0x1aa,
		}; // enum class eteprotobuf_ids : uint32_t

		struct cmsg_tearmor_ricochet : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cmsg_vector *pos;
			cmsg_vector *dir;
		}; // struct cmsg_tearmor_ricochet : message_t

		struct cmsg_tebase_beam : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t modelindex;
			uint64_t haloindex;
			uint32_t startframe;
			uint32_t framerate;
			float life;
			float width;
			float endwidth;
			uint32_t fadelength;
			float amplitude;
			uint32_t color;
			uint32_t speed;
			uint32_t flags;
		}; // struct cmsg_tebase_beam : message_t

		struct cmsg_tebeam_ent_point : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cmsg_tebase_beam *base;
			cmsg_vector *start;
			cmsg_vector *end;
			uint32_t startentity;
			uint32_t endentity;
		}; // struct cmsg_tebeam_ent_point : message_t

		struct cmsg_tebeam_ents : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cmsg_tebase_beam *base;
			uint32_t startentity;
			uint32_t endentity;
		}; // struct cmsg_tebeam_ents : message_t

		struct cmsg_tebeam_points : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cmsg_tebase_beam *base;
			cmsg_vector *start;
			cmsg_vector *end;
		}; // struct cmsg_tebeam_points : message_t

		struct cmsg_tebeam_ring : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cmsg_tebase_beam *base;
			uint32_t startentity;
			uint32_t endentity;
		}; // struct cmsg_tebeam_ring : message_t

		struct cmsg_tebspdecal : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cmsg_vector *origin;
			cmsg_vector *normal;
			cmsg_vector *saxis;
			int entity;
			uint32_t index;
		}; // struct cmsg_tebspdecal : message_t

		struct cmsg_tebubbles : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cmsg_vector *mins;
			cmsg_vector *maxs;
			float height;
			uint32_t count;
			float speed;
		}; // struct cmsg_tebubbles : message_t

		struct cmsg_tebubble_trail : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cmsg_vector *mins;
			cmsg_vector *maxs;
			float waterz;
			uint32_t count;
			float speed;
		}; // struct cmsg_tebubble_trail : message_t

		struct cmsg_tedecal : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cmsg_vector *origin;
			cmsg_vector *start;
			int entity;
			uint32_t hitbox;
			uint32_t index;
		}; // struct cmsg_tedecal : message_t

		struct cmsg_effect_data : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cmsg_vector *origin;
			cmsg_vector *start;
			cmsg_vector *normal;
			cmsg_qangle *angles;
			uint32_t entity;
			uint32_t otherentity;
			float scale;
			float magnitude;
			float radius;
			uint32_t surfaceprop;
			uint64_t effectindex;
			uint32_t damagetype;
			uint32_t material;
			uint32_t hitbox;
			uint32_t color;
			uint32_t flags;
			int attachmentindex;
			uint32_t effectname;
			uint32_t attachmentname;
		}; // struct cmsg_effect_data : message_t

		struct cmsg_teeffect_dispatch : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cmsg_effect_data *effectdata;
		}; // struct cmsg_teeffect_dispatch : message_t

		struct cmsg_teenergy_splash : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cmsg_vector *pos;
			cmsg_vector *dir;
			bool explosive;
		}; // struct cmsg_teenergy_splash : message_t

		struct cmsg_tefizz : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			int entity;
			uint32_t density;
			int current;
		}; // struct cmsg_tefizz : message_t

		struct cmsg_teshatter_surface : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cmsg_vector *origin;
			cmsg_qangle *angles;
			cmsg_vector *force;
			cmsg_vector *forcepos;
			float width;
			float height;
			float shardsize;
			uint32_t surfacetype;
			uint32_t frontcolor;
			uint32_t backcolor;
		}; // struct cmsg_teshatter_surface : message_t

		struct cmsg_teglow_sprite : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cmsg_vector *origin;
			float scale;
			float life;
			uint32_t brightness;
		}; // struct cmsg_teglow_sprite : message_t

		struct cmsg_teimpact : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cmsg_vector *origin;
			cmsg_vector *normal;
			uint32_t type;
		}; // struct cmsg_teimpact : message_t

		struct cmsg_temuzzle_flash : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cmsg_vector *origin;
			cmsg_qangle *angles;
			float scale;
			uint32_t type;
		}; // struct cmsg_temuzzle_flash : message_t

		struct cmsg_teblood_stream : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cmsg_vector *origin;
			cmsg_vector *direction;
			uint32_t color;
			uint32_t amount;
		}; // struct cmsg_teblood_stream : message_t

		struct cmsg_teexplosion : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* effect_name;
			cmsg_vector *origin;
			cmsg_vector *normal;
			uint32_t framerate;
			uint32_t flags;
			uint32_t materialtype;
			uint32_t radius;
			uint32_t magnitude;
			float scale;
			bool affect_ragdolls;
			uint32_t explosion_type;
		}; // struct cmsg_teexplosion : message_t

		struct cmsg_tedust : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cmsg_vector *origin;
			cmsg_vector *direction;
			float size;
			float speed;
		}; // struct cmsg_tedust : message_t

		struct cmsg_telarge_funnel : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cmsg_vector *origin;
			uint32_t reversed;
		}; // struct cmsg_telarge_funnel : message_t

		struct cmsg_tesparks : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cmsg_vector *origin;
			cmsg_vector *direction;
			uint32_t magnitude;
			uint32_t length;
		}; // struct cmsg_tesparks : message_t

		struct cmsg_tephysics_prop : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cmsg_vector *origin;
			cmsg_vector *velocity;
			cmsg_qangle *angles;
			cmsg_vector *dmgpos;
			cmsg_vector *dmgdir;
			uint32_t skin;
			uint32_t flags;
			uint32_t effects;
			uint32_t color;
			uint64_t modelindex;
			uint32_t unused_breakmodelsnottomake;
			float scale;
			int dmgtype;
		}; // struct cmsg_tephysics_prop : message_t

		struct cmsg_teplayer_decal : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cmsg_vector *origin;
			int player;
			int entity;
		}; // struct cmsg_teplayer_decal : message_t

		struct cmsg_teprojected_decal : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cmsg_vector *origin;
			cmsg_qangle *angles;
			uint32_t index;
			float distance;
		}; // struct cmsg_teprojected_decal : message_t

		struct cmsg_tesmoke : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cmsg_vector *origin;
			float scale;
		}; // struct cmsg_tesmoke : message_t

		struct cmsg_teworld_decal : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cmsg_vector *origin;
			cmsg_vector *normal;
			uint32_t index;
		}; // struct cmsg_teworld_decal : message_t

		enum class p2_p_messages : uint32_t
		{
			p2p_text_message = 0x100,
			p2p_voice = 0x101,
			p2p_ping = 0x102,
			p2p_vravatar_position = 0x103,
			p2p_watch_synchronization = 0x104,
		}; // enum class p2_p_messages : uint32_t

		struct cp2_p_text_message : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* text;
		}; // struct cp2_p_text_message : message_t

		struct csteam_voice_encoding : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* voice_data;
		}; // struct csteam_voice_encoding : message_t

		struct cp2_p_voice : message_t
		{
			enum class handler_flags : uint32_t
			{
				played_audio = 0x1,
			}; // enum class handler_flags : uint32_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cmsg_voice_audio *audio;
			uint32_t broadcast_group;
		}; // struct cp2_p_voice : message_t

		struct cp2_p_ping : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t send_time;
			bool is_reply;
		}; // struct cp2_p_ping : message_t

		struct cp2_p_vravatar_position : message_t
		{
			struct corientation : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				cmsg_vector *pos;
				cmsg_qangle *ang;
			}; // struct corientation : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cp2_p_vravatar_position::corientation> body_parts;
			int hat_id;
			int scene_id;
			int world_scale;
		}; // struct cp2_p_vravatar_position : message_t

		struct cp2_p_watch_synchronization : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			int demo_tick;
			bool paused;
			uint64_t tv_listen_voice_indices;
			int dota_spectator_mode;
			bool dota_spectator_watching_broadcaster;
			int dota_spectator_hero_index;
			int dota_spectator_autospeed;
			int dota_replay_speed;
		}; // struct cp2_p_watch_synchronization : message_t

		enum class ecstrike15_user_messages : uint32_t
		{
			cs_um_vguimenu = 0x12d,
			cs_um_geiger = 0x12e,
			cs_um_train = 0x12f,
			cs_um_hud_text = 0x130,
			cs_um_say_text = 0x131,
			cs_um_say_text2 = 0x132,
			cs_um_text_msg = 0x133,
			cs_um_hud_msg = 0x134,
			cs_um_reset_hud = 0x135,
			cs_um_game_title = 0x136,
			cs_um_shake = 0x138,
			cs_um_fade = 0x139,
			cs_um_rumble = 0x13a,
			cs_um_close_caption = 0x13b,
			cs_um_close_caption_direct = 0x13c,
			cs_um_send_audio = 0x13d,
			cs_um_raw_audio = 0x13e,
			cs_um_voice_mask = 0x13f,
			cs_um_request_state = 0x140,
			cs_um_damage = 0x141,
			cs_um_radio_text = 0x142,
			cs_um_hint_text = 0x143,
			cs_um_key_hint_text = 0x144,
			cs_um_process_spotted_entity_update = 0x145,
			cs_um_reload_effect = 0x146,
			cs_um_adjust_money = 0x147,
			cs_um_update_team_money = 0x148,
			cs_um_stop_spectator_mode = 0x149,
			cs_um_kill_cam = 0x14a,
			cs_um_desired_timescale = 0x14b,
			cs_um_current_timescale = 0x14c,
			cs_um_achievement_event = 0x14d,
			cs_um_match_end_conditions = 0x14e,
			cs_um_disconnect_to_lobby = 0x14f,
			cs_um_player_stats_update = 0x150,
			cs_um_warmup_has_ended = 0x152,
			cs_um_client_info = 0x153,
			cs_um_xrank_get = 0x154,
			cs_um_xrank_upd = 0x155,
			cs_um_call_vote_failed = 0x159,
			cs_um_vote_start = 0x15a,
			cs_um_vote_pass = 0x15b,
			cs_um_vote_failed = 0x15c,
			cs_um_vote_setup = 0x15d,
			cs_um_server_rank_reveal_all = 0x15e,
			cs_um_send_last_killer_damage_to_client = 0x15f,
			cs_um_server_rank_update = 0x160,
			cs_um_item_pickup = 0x161,
			cs_um_show_menu = 0x162,
			cs_um_bar_time = 0x163,
			cs_um_ammo_denied = 0x164,
			cs_um_mark_achievement = 0x165,
			cs_um_match_stats_update = 0x166,
			cs_um_item_drop = 0x167,
			cs_um_glow_prop_turn_off = 0x168,
			cs_um_send_player_item_drops = 0x169,
			cs_um_round_backup_filenames = 0x16a,
			cs_um_send_player_item_found = 0x16b,
			cs_um_report_hit = 0x16c,
			cs_um_xp_update = 0x16d,
			cs_um_quest_progress = 0x16e,
			cs_um_score_leaderboard_data = 0x16f,
			cs_um_player_decal_digital_signature = 0x170,
			cs_um_weapon_sound = 0x171,
			cs_um_update_screen_health_bar = 0x172,
			cs_um_entity_outline_highlight = 0x173,
			cs_um_ssui = 0x174,
			cs_um_survival_stats = 0x175,
			cs_um_disconnect_to_lobby2 = 0x176,
			cs_um_end_of_match_all_players_data = 0x177,
			cs_um_post_round_damage_report = 0x178,
			cs_um_round_end_report_data = 0x17b,
			cs_um_current_round_odds = 0x17c,
			cs_um_deep_stats = 0x17d,
			cs_um_util_msg = 0x17e,
			cs_um_shoot_info = 0x17f,
		}; // enum class ecstrike15_user_messages : uint32_t

		enum class ecsusr_msg_disconnect_to_lobby_action : uint32_t
		{
			k_ecsusr_msg_disconnect_to_lobby_action_default = 0x0,
			k_ecsusr_msg_disconnect_to_lobby_action_go_queue = 0x1,
		}; // enum class ecsusr_msg_disconnect_to_lobby_action : uint32_t

		struct ccsusr_msg_vguimenu : message_t
		{
			struct keys : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				std::string* name;
				std::string* value;
			}; // struct keys : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<ccsusr_msg_vguimenu::keys> keys;
			std::string* name;
			bool show;
		}; // struct ccsusr_msg_vguimenu : message_t

		struct ccsusr_msg_geiger : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			int range;
		}; // struct ccsusr_msg_geiger : message_t

		struct ccsusr_msg_train : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			int train;
		}; // struct ccsusr_msg_train : message_t

		struct ccsusr_msg_hud_text : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* text;
		}; // struct ccsusr_msg_hud_text : message_t

		struct ccsusr_msg_hud_msg : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* text;
			cmsg_vector2d *pos;
			cmsg_rgba *clr1;
			cmsg_rgba *clr2;
			int channel;
			int effect;
			float fade_in_time;
			float fade_out_time;
			float hold_time;
			float fx_time;
		}; // struct ccsusr_msg_hud_msg : message_t

		struct ccsusr_msg_shake : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			int command;
			float local_amplitude;
			float frequency;
			float duration;
		}; // struct ccsusr_msg_shake : message_t

		struct ccsusr_msg_fade : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cmsg_rgba *clr;
			int duration;
			int hold_time;
			int flags;
		}; // struct ccsusr_msg_fade : message_t

		struct ccsusr_msg_rumble : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			int index;
			int data;
			int flags;
		}; // struct ccsusr_msg_rumble : message_t

		struct ccsusr_msg_close_caption : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* cctoken;
			uint32_t hash;
			int duration;
			bool from_player;
		}; // struct ccsusr_msg_close_caption : message_t

		struct ccsusr_msg_close_caption_direct : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t hash;
			int duration;
			bool from_player;
		}; // struct ccsusr_msg_close_caption_direct : message_t

		struct ccsusr_msg_send_audio : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* radio_sound;
		}; // struct ccsusr_msg_send_audio : message_t

		struct ccsusr_msg_raw_audio : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* voice_filename;
			int pitch;
			int entidx;
			float duration;
		}; // struct ccsusr_msg_raw_audio : message_t

		struct ccsusr_msg_voice_mask : message_t
		{
			struct player_mask : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				int game_rules_mask;
				int ban_masks;
			}; // struct player_mask : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<ccsusr_msg_voice_mask::player_mask> player_masks;
			bool player_mod_enable;
		}; // struct ccsusr_msg_voice_mask : message_t

		struct ccsusr_msg_damage : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cmsg_vector *inflictor_world_pos;
			int amount;
			int victim_entindex;
		}; // struct ccsusr_msg_damage : message_t

		struct ccsusr_msg_radio_text : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* params;
			std::string* msg_name;
			int msg_dst;
			int client;
		}; // struct ccsusr_msg_radio_text : message_t

		struct ccsusr_msg_hint_text : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* message;
		}; // struct ccsusr_msg_hint_text : message_t

		struct ccsusr_msg_key_hint_text : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* messages;
		}; // struct ccsusr_msg_key_hint_text : message_t

		struct ccsusr_msg_process_spotted_entity_update : message_t
		{
			struct spotted_entity_update : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				int entity_idx;
				int class_id;
				int origin_x;
				int origin_y;
				int origin_z;
				int angle_y;
				bool defuser;
				bool player_has_defuser;
				bool player_has_c4;
			}; // struct spotted_entity_update : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<ccsusr_msg_process_spotted_entity_update::spotted_entity_update> entity_updates;
			bool new_update;
		}; // struct ccsusr_msg_process_spotted_entity_update : message_t

		struct ccsusr_msg_send_player_item_drops : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cecon_item_preview_data_block> entity_updates;
		}; // struct ccsusr_msg_send_player_item_drops : message_t

		struct ccsusr_msg_send_player_item_found : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cecon_item_preview_data_block *iteminfo;
			int playerslot;
		}; // struct ccsusr_msg_send_player_item_found : message_t

		struct ccsusr_msg_reload_effect : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			int entidx;
			int actanim;
			float origin_x;
			float origin_y;
			float origin_z;
		}; // struct ccsusr_msg_reload_effect : message_t

		struct ccsusr_msg_weapon_sound : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* sound;
			int entidx;
			float origin_x;
			float origin_y;
			float origin_z;
			float game_timestamp;
			uint32_t source_soundscapeid;
		}; // struct ccsusr_msg_weapon_sound : message_t

		struct ccsusr_msg_update_screen_health_bar : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			int entidx;
			float healthratio_old;
			float healthratio_new;
			int style;
		}; // struct ccsusr_msg_update_screen_health_bar : message_t

		struct ccsusr_msg_entity_outline_highlight : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			int entidx;
			bool removehighlight;
		}; // struct ccsusr_msg_entity_outline_highlight : message_t

		struct ccsusr_msg_adjust_money : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			int amount;
		}; // struct ccsusr_msg_adjust_money : message_t

		struct ccsusr_msg_report_hit : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			float pos_x;
			float pos_y;
			float timestamp;
			float pos_z;
		}; // struct ccsusr_msg_report_hit : message_t

		struct ccsusr_msg_kill_cam : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			int obs_mode;
			int first_target;
			int second_target;
		}; // struct ccsusr_msg_kill_cam : message_t

		struct ccsusr_msg_desired_timescale : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			float desired_timescale;
			float duration_realtime_sec;
			int interpolator_type;
			float start_blend_time;
		}; // struct ccsusr_msg_desired_timescale : message_t

		struct ccsusr_msg_current_timescale : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			float cur_timescale;
		}; // struct ccsusr_msg_current_timescale : message_t

		struct ccsusr_msg_achievement_event : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			int achievement;
			int count;
			int user_id;
		}; // struct ccsusr_msg_achievement_event : message_t

		struct ccsusr_msg_match_end_conditions : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			int fraglimit;
			int mp_maxrounds;
			int mp_winlimit;
			float mp_timelimit;
		}; // struct ccsusr_msg_match_end_conditions : message_t

		struct ccsusr_msg_player_stats_update : message_t
		{
			struct stat : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				int idx;
				int delta;
			}; // struct stat : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<ccsusr_msg_player_stats_update::stat> stats;
			int version;
			uint32_t ehandle;
			int crc;
		}; // struct ccsusr_msg_player_stats_update : message_t

		struct ccsusr_msg_quest_progress : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint32_t quest_id;
			uint32_t normal_points;
			uint32_t bonus_points;
			bool is_event_quest;
		}; // struct ccsusr_msg_quest_progress : message_t

		struct ccsusr_msg_score_leaderboard_data : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			score_leaderboard_data *data;
		}; // struct ccsusr_msg_score_leaderboard_data : message_t

		struct ccsusr_msg_player_decal_digital_signature : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			player_decal_digital_signature *data;
		}; // struct ccsusr_msg_player_decal_digital_signature : message_t

		struct ccsusr_msg_xrank_get : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			int mode_idx;
			int controller;
		}; // struct ccsusr_msg_xrank_get : message_t

		struct ccsusr_msg_xrank_upd : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			int mode_idx;
			int controller;
			int ranking;
		}; // struct ccsusr_msg_xrank_upd : message_t

		struct ccsusr_msg_call_vote_failed : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			int reason;
			int time;
		}; // struct ccsusr_msg_call_vote_failed : message_t

		struct ccsusr_msg_vote_start : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* disp_str;
			std::string* details_str;
			std::string* other_team_str;
			int team;
			int player_slot;
			int vote_type;
			bool is_yes_no_vote;
			int player_slot_target;
		}; // struct ccsusr_msg_vote_start : message_t

		struct ccsusr_msg_vote_pass : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* disp_str;
			std::string* details_str;
			int team;
			int vote_type;
		}; // struct ccsusr_msg_vote_pass : message_t

		struct ccsusr_msg_vote_failed : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			int team;
			int reason;
		}; // struct ccsusr_msg_vote_failed : message_t

		struct ccsusr_msg_vote_setup : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* potential_issues;
		}; // struct ccsusr_msg_vote_setup : message_t

		struct ccsusr_msg_send_last_killer_damage_to_client : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			int num_hits_given;
			int damage_given;
			int num_hits_taken;
			int damage_taken;
			int actual_damage_given;
			int actual_damage_taken;
		}; // struct ccsusr_msg_send_last_killer_damage_to_client : message_t

		struct ccsusr_msg_server_rank_update : message_t
		{
			struct rank_update : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				int account_id;
				int rank_old;
				int rank_new;
				int num_wins;
				float rank_change;
				int rank_type_id;
			}; // struct rank_update : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<ccsusr_msg_server_rank_update::rank_update> rank_update;
		}; // struct ccsusr_msg_server_rank_update : message_t

		struct ccsusr_msg_xp_update : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cmsg_gccstrike15_v2_gc2_server_notify_xprewarded *data;
		}; // struct ccsusr_msg_xp_update : message_t

		struct ccsusr_msg_item_pickup : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* item;
		}; // struct ccsusr_msg_item_pickup : message_t

		struct ccsusr_msg_show_menu : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* menu_string;
			int bits_valid_slots;
			int display_time;
		}; // struct ccsusr_msg_show_menu : message_t

		struct ccsusr_msg_bar_time : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* time;
		}; // struct ccsusr_msg_bar_time : message_t

		struct ccsusr_msg_ammo_denied : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			int ammoidx;
		}; // struct ccsusr_msg_ammo_denied : message_t

		struct ccsusr_msg_mark_achievement : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* achievement;
		}; // struct ccsusr_msg_mark_achievement : message_t

		struct ccsusr_msg_match_stats_update : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* update;
		}; // struct ccsusr_msg_match_stats_update : message_t

		struct ccsusr_msg_item_drop : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			int64_t itemid;
			bool death;
		}; // struct ccsusr_msg_item_drop : message_t

		struct ccsusr_msg_glow_prop_turn_off : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			int entidx;
		}; // struct ccsusr_msg_glow_prop_turn_off : message_t

		struct ccsusr_msg_round_backup_filenames : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* filename;
			std::string* nicename;
			int count;
			int index;
		}; // struct ccsusr_msg_round_backup_filenames : message_t

		struct ccsusr_msg_ssui : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			bool show;
			float start_time;
			float end_time;
		}; // struct ccsusr_msg_ssui : message_t

		struct ccsusr_msg_survival_stats : message_t
		{
			struct fact : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				int type;
				int display;
				int value;
				float interestingness;
			}; // struct fact : message_t

			struct placement : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				uint64_t xuid;
				int teamnumber;
				int placement;
			}; // struct placement : message_t

			struct damage : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				uint64_t xuid;
				int to;
				int to_hits;
				int from;
				int from_hits;
			}; // struct damage : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<ccsusr_msg_survival_stats::fact> facts;
			repeated_ptr_t<ccsusr_msg_survival_stats::placement> users;
			repeated_ptr_t<ccsusr_msg_survival_stats::damage> damages;
			uint64_t xuid;
			int ticknumber;
		}; // struct ccsusr_msg_survival_stats : message_t

		struct ccsusr_msg_end_of_match_all_players_data : message_t
		{
			struct accolade : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				int eaccolade;
				float value;
				int position;
			}; // struct accolade : message_t

			struct player_data : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				repeated_ptr_t<cecon_item_preview_data_block> items;
				std::string* name;
				ccsusr_msg_end_of_match_all_players_data::accolade *nomination;
				int slot;
				uint64_t xuid;
				int teamnumber;
				int playercolor;
				bool isbot;
			}; // struct player_data : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<ccsusr_msg_end_of_match_all_players_data::player_data> allplayerdata;
			int scene;
		}; // struct ccsusr_msg_end_of_match_all_players_data : message_t

		struct ccsusr_msg_round_end_report_data : message_t
		{
			struct rer_event : message_t
			{
				struct victim : message_t
				{
					template <typename T> T *as() { return reinterpret_cast<T *>(this); }

					int team_number;
					int playerslot;
					uint64_t xuid;
					int color;
					bool is_bot;
					bool is_dead;
				}; // struct victim : message_t

				struct objective : message_t
				{
					template <typename T> T *as() { return reinterpret_cast<T *>(this); }

					int type;
				}; // struct objective : message_t

				struct damage : message_t
				{
					template <typename T> T *as() { return reinterpret_cast<T *>(this); }

					int other_playerslot;
					uint64_t other_xuid;
					int health_removed;
					int num_hits;
					int return_health_removed;
					int return_num_hits;
				}; // struct damage : message_t

				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				repeated_ptr_t<ccsusr_msg_round_end_report_data::rer_event::damage> all_damage_data;
				ccsusr_msg_round_end_report_data::rer_event::victim *victim_data;
				ccsusr_msg_round_end_report_data::rer_event::objective *objective_data;
				float timestamp;
				int terrorist_odds;
				int ct_alive;
				int t_alive;
			}; // struct rer_event : message_t

			struct initial_conditions : message_t
			{
				template <typename T> T *as() { return reinterpret_cast<T *>(this); }

				int ct_equip_value;
				int t_equip_value;
				int terrorist_odds;
			}; // struct initial_conditions : message_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<ccsusr_msg_round_end_report_data::rer_event> all_rer_event_data;
			ccsusr_msg_round_end_report_data::initial_conditions *init_conditions;
		}; // struct ccsusr_msg_round_end_report_data : message_t

		struct ccsusr_msg_post_round_damage_report : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			uint64_t other_xuid;
			int given_kill_type;
			int given_health_removed;
			int given_num_hits;
			int taken_kill_type;
			int taken_health_removed;
			int taken_num_hits;
		}; // struct ccsusr_msg_post_round_damage_report : message_t

		struct ccsusr_msg_current_round_odds : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			int odds;
		}; // struct ccsusr_msg_current_round_odds : message_t

		struct ccsusr_msg_deep_stats : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cmsg_gccstrike15_client_deep_stats *stats;
		}; // struct ccsusr_msg_deep_stats : message_t

		struct ccsusr_msg_shoot_info : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cmsg_transform> hitbox_transforms;
			cmsg_vector *shoot_pos;
			cmsg_qangle *shoot_dir;
			int frame_number;
		}; // struct ccsusr_msg_shoot_info : message_t

		struct ccsusr_msg_reset_hud : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			bool reset;
		}; // struct ccsusr_msg_reset_hud : message_t

		struct ccsusr_msg_game_title : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			int dummy;
		}; // struct ccsusr_msg_game_title : message_t

		struct ccsusr_msg_request_state : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			int dummy;
		}; // struct ccsusr_msg_request_state : message_t

		struct ccsusr_msg_stop_spectator_mode : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			int dummy;
		}; // struct ccsusr_msg_stop_spectator_mode : message_t

		struct ccsusr_msg_disconnect_to_lobby : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			int dummy;
		}; // struct ccsusr_msg_disconnect_to_lobby : message_t

		struct ccsusr_msg_warmup_has_ended : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			int dummy;
		}; // struct ccsusr_msg_warmup_has_ended : message_t

		struct ccsusr_msg_client_info : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			int dummy;
		}; // struct ccsusr_msg_client_info : message_t

		struct ccsusr_msg_server_rank_reveal_all : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cmsg_gccstrike15_v2_matchmaking_gc2_server_reserve *reservation;
			int seconds_till_shutdown;
		}; // struct ccsusr_msg_server_rank_reveal_all : message_t

		struct ccsusr_msg_pre_match_say_text : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* text;
			uint32_t account_id;
			bool all_chat;
		}; // struct ccsusr_msg_pre_match_say_text : message_t

		struct csgointerpolation_info_pb : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			int src_tick;
			int dst_tick;
			float frac;
		}; // struct csgointerpolation_info_pb : message_t

		struct csgoinput_history_entry_pb : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			cmsg_qangle *view_angles;
			cmsg_vector *shoot_position;
			cmsg_vector *target_head_pos_check;
			cmsg_vector *target_abs_pos_check;
			cmsg_qangle *target_abs_ang_check;
			csgointerpolation_info_pb *cl_interp;
			csgointerpolation_info_pb *sv_interp0;
			csgointerpolation_info_pb *sv_interp1;
			csgointerpolation_info_pb *player_interp;
			int render_tick_count;
			float render_tick_fraction;
			int player_tick_count;
			float player_tick_fraction;
			int frame_number;
			int target_ent_index;
		}; // struct csgoinput_history_entry_pb : message_t

		struct csgouser_cmd_pb : message_t
		{
			enum class eweapon_decision : uint32_t
			{
				k_e_none = 0x0,
				k_e_primary_attack = 0x1,
				k_e_secondary_attack = 0x2,
				k_e_zoom = 0x3,
				k_e_reload = 0x4,
				k_e_grenade_throw = 0x5,
				k_e_grenade_hold = 0x6,
				k_e_grenade_hold_then_throw = 0x7,
			}; // enum class eweapon_decision : uint32_t

			enum class egrenade_strength : uint32_t
			{
				k_e_low = 0x0,
				k_e_mid = 0x1,
				k_e_high = 0x2,
			}; // enum class egrenade_strength : uint32_t

			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			PAD(8)
			repeated_ptr_t<csgoinput_history_entry_pb> input_history;
			cbase_user_cmd_pb *base;
			csgouser_cmd_pb::eweapon_decision *weapon_decision;
			csgouser_cmd_pb::egrenade_strength *target_grenade_strength;
			int attack1_start_history_index;
			int attack2_start_history_index;
			int attack3_start_history_index;
			int weapon_decision_weapon;
		}; // struct csgouser_cmd_pb : message_t

		struct c2_s_connect_message : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			repeated_ptr_t<cclcmsg_split_player_connect> splitplayers;
			std::string* encrypted_password;
			std::string* auth_steam;
			std::string* challenge_context;
			uint32_t host_version;
			uint32_t auth_protocol;
			uint32_t challenge_number;
			uint64_t reservation_cookie;
			bool low_violence;
		}; // struct c2_s_connect_message : message_t

		struct c2_s_connection_message : message_t
		{
			template <typename T> T *as() { return reinterpret_cast<T *>(this); }

			std::string* addon_name;
		}; // struct c2_s_connection_message : message_t

	} // namespace proto

} // namespace sdk

#endif // SDK_PROTO_H
