// generated on: 11/6/2023

#ifndef SDK_OFFSETS_H
#define SDK_OFFSETS_H

#include <cstdint>

namespace sdk
{
	namespace offsets
	{
		namespace interfaces
		{
			namespace tier0
			{
				constexpr auto vprocess_utils002 = 0x3558c0;
				constexpr auto vstring_token_system001 = 0x355ab0;
				constexpr auto test_script_mgr001 = 0x3559b0;
				constexpr auto vengine_cvar007 = 0x369040;
			} // namespace tier0

			namespace animationsystem
			{
				constexpr auto animation_system_utils_001 = 0x512238;
				constexpr auto animation_system_001 = 0x50a170;
			} // namespace animationsystem

			namespace assetsystem
			{
				constexpr auto asset_system001 = 0x4ff540;
				constexpr auto asset_system_test001 = 0x4a6118;
			} // namespace assetsystem

			namespace filesystem_stdio
			{
				constexpr auto vfile_system017 = 0x211660;
				constexpr auto vasync_file_system2_001 = 0x20c360;
			} // namespace filesystem_stdio

			namespace imemanager
			{
				constexpr auto imemanager001 = 0x2e8e0;
			} // namespace imemanager

			namespace inputsystem
			{
				constexpr auto input_system_version001 = 0x35760;
				constexpr auto input_stack_system_version001 = 0x33b10;
			} // namespace inputsystem

			namespace localize
			{
				constexpr auto localize_001 = 0x3ba40;
			} // namespace localize

			namespace materialsystem2
			{
				constexpr auto vmaterial_system2_001 = 0x10a930;
				constexpr auto post_processing_system_001 = 0x106370;
				constexpr auto material_utils_001 = 0x106470;
				constexpr auto text_layout_001 = 0x106400;
				constexpr auto font_manager_001 = 0x10b2b0;
			} // namespace materialsystem2

			namespace meshsystem
			{
				constexpr auto mesh_system001 = 0x107050;
			} // namespace meshsystem

			namespace navsystem
			{
				constexpr auto nav_system001 = 0xadbd0;
			} // namespace navsystem

			namespace particles
			{
				constexpr auto particle_system_mgr003 = 0x512de0;
			} // namespace particles

			namespace physicsbuilder
			{
				constexpr auto physics_builder_mgr001 = 0x909c20;
			} // namespace physicsbuilder

			namespace resourcesystem
			{
				constexpr auto resource_system013 = 0x69d10;
			} // namespace resourcesystem

			namespace scenefilecache
			{
				constexpr auto scene_file_cache002 = 0x68250;
				constexpr auto response_rules_cache001 = 0x680d0;
			} // namespace scenefilecache

			namespace scenesystem
			{
				constexpr auto scene_utils_001 = 0x5441b0;
				constexpr auto scene_system_002 = 0x589160;
				constexpr auto rendering_pipelines_001 = 0x543800;
			} // namespace scenesystem

			namespace schemasystem
			{
				constexpr auto schema_system_001 = 0x5b730;
			} // namespace schemasystem

			namespace soundsystem
			{
				constexpr auto sound_op_system001 = 0x273350;
				constexpr auto sound_op_system_edit001 = 0x273220;
				constexpr auto sound_system001 = 0x272e30;
				constexpr auto vmix_edit_tool001_callback = 0x71740;
			} // namespace soundsystem

			namespace steamaudio
			{
				constexpr auto steam_audio001 = 0x514c0;
			} // namespace steamaudio

			namespace vphysics2
			{
				constexpr auto vphysics2_handle_interface_001 = 0x37e6f0;
				constexpr auto vphysics2_interface_001 = 0x37e730;
			} // namespace vphysics2

			namespace vscript
			{
				constexpr auto vscript_manager010 = 0x128600;
			} // namespace vscript

			namespace worldrenderer
			{
				constexpr auto world_renderer_mgr001 = 0x1574a0;
			} // namespace worldrenderer

			namespace client
			{
				constexpr auto source2_client002 = 0x1815c90;
				constexpr auto legacy_game_ui001 = 0x16d65f0;
				constexpr auto empty_world_service001_client = 0x167a620;
				constexpr auto source2_client_ui001 = 0x16d53d0;
				constexpr auto source2_client_prediction001 = 0x16c29e0;
				constexpr auto client_tools_info_001 = 0x16bb0f8;
				constexpr auto source2_client_config001 = 0x17b5c60;
				constexpr auto game_client_exports001 = 0x16b7f20;
			} // namespace client

			namespace engine2
			{
				constexpr auto engine_game_ui001 = 0x48e0d0;
				constexpr auto game_event_system_client_v001 = 0x53f390;
				constexpr auto simple_engine_loop_service_001 = 0x490a40;
				constexpr auto game_resource_service_client_v001 = 0x17FA10;;
				constexpr auto client_server_engine_loop_service_001 = 0x490910;
				constexpr auto game_resource_service_server_v001 = 0x48fde0;
				constexpr auto key_value_cache001 = 0x4908b0;
				constexpr auto vprof_service_001 = 0x490620;
				constexpr auto host_state_mgr001 = 0x490800;
				constexpr auto game_event_system_server_v001 = 0x53f550;
				constexpr auto engine_service_mgr001 = 0x53f060;
				constexpr auto inetsupport_001 = 0x489bf0;
				constexpr auto tool_service_001 = 0x4905e0;
				constexpr auto stats_service_001 = 0x53e610;
				constexpr auto split_screen_service_001 = 0x490440;
				constexpr auto sound_service_001 = 0x53e340;
				constexpr auto screenshot_service001 = 0x53e130;
				constexpr auto game_uiservice_001 = 0x4fe5d0;
				constexpr auto render_service_001 = 0x53de80;
				constexpr auto network_service_001 = 0x490200;
				constexpr auto network_server_service_001 = 0x53dc20;
				constexpr auto source2_engine_to_client_string_table001 = 0x48d730;
				constexpr auto network_p2_pservice_001 = 0x490080;
				constexpr auto network_client_service_001 = 0x53d870;
				constexpr auto map_list_service_001 = 0x53d6e0;
				constexpr auto input_service_001 = 0x4fe8b0;
				constexpr auto bug_service001 = 0x4fe2e0;
				constexpr auto benchmark_service001 = 0x48fc80;
				constexpr auto vengine_gameuifuncs_version005 = 0x48e160;
				constexpr auto source2_engine_to_server_string_table001 = 0x48d7f0;
				constexpr auto source2_engine_to_server001 = 0x48d7c8;
				constexpr auto source2_engine_to_client001 = 0x48d2d0;
			} // namespace engine2

			namespace panorama
			{
				constexpr auto panorama_uiengine001 = 0x499a80;
			} // namespace panorama

		} // namespace interfaces

		namespace functions
		{
			constexpr auto con_msg = 0x74630;
			constexpr auto con_color_msg = 0x74550;
			constexpr auto load_text_file = 0x72ff10;

			namespace mem_alloc
			{
				constexpr auto str_dup_func = 0x109eb0;
			} // namespace mem_alloc

			namespace client
			{
				constexpr auto frame_stage_notify = 0x71a620;
				constexpr auto get_weapon_data = 0x4a7f40;
				constexpr auto override_view = 0x7515d0;
				constexpr auto get_camera = 0x841a70;
				constexpr auto view_render = 0x732450;
				constexpr auto on_render_start = 0x7b4060;
			} // namespace client

			namespace sdl3
			{
				constexpr auto set_relative_mouse_mode = 0x20030;
				constexpr auto set_window_grab = 0x20210;
				constexpr auto warp_mouse_in_window = 0x20690;
			} // namespace sdl3

			namespace gameoverlayrenderer
			{
				constexpr auto present = 0x8b2a0;
			} // namespace gameoverlayrenderer

			namespace cgame_entity_system
			{
				constexpr auto get_entity_by_index = 0x60afe0;
			} // namespace cgame_entity_system

			namespace input
			{
				constexpr auto get_view_angles = 0x74bd10;
				constexpr auto set_view_angles = 0x756060;
				constexpr auto mouse_input_enabled = 0x878390;
				constexpr auto csgoinput_create_move = 0x740e50;
			} // namespace input

			namespace inputsystem
			{
				constexpr auto vk_to_button_code = 0x3d50;
				constexpr auto wnd_proc = 0x34a0;
				constexpr auto set_cursor_pos = 0x54e0;
			} // namespace inputsystem

			namespace cgame_ui_funcs
			{
				constexpr auto get_binding_for_button_code = 0x118030;
			} // namespace cgame_ui_funcs

			namespace utlbuffer
			{
				constexpr auto ctor = 0x180550;
			} // namespace utlbuffer

			namespace panorama
			{
				constexpr auto load_svg = 0x107810;
			} // namespace panorama

			namespace baseentity
			{
				constexpr auto get_abs_origin = 0x149f60;
			} // namespace baseentity

			namespace cameramanager
			{
				constexpr auto set_fov = 0x5136a0;
			} // namespace cameramanager

			namespace proto
			{
				constexpr auto repeated_ptr_field_push = 0xc6b000;
				constexpr auto subtick_movestep_ctor = 0x25f890;
			} // namespace proto

			namespace logging_system
			{
				constexpr auto set_channel_verbosity = 0x106900;
				constexpr auto log_direct = 0x106db0;
				constexpr auto register_logging_channel = 0x105bb0;
				constexpr auto find_channel = 0x106580;
			} // namespace logging_system

		} // namespace functions

		namespace globals
		{
			constexpr auto mem_alloc = 0x368d98;
			constexpr auto global_vars = 0x16b7be0;
			constexpr auto ccsgo_input = 0x16d4838;
			constexpr auto game_entity_system = 0x17bb5b0;
			constexpr auto local_player_controller = 0x180aa20;
			constexpr auto screen_transform = 0x181a550;
			constexpr auto view_render = 0x181a5c0;
			constexpr auto panorama_ui = 0x18f1c40;
			constexpr auto ui_event_with_priority_vtable = 0x130c350;
		} // namespace globals

		namespace cgame_resource_service
		{
			constexpr auto game_entity_system = 0x58;
		} // namespace cgame_resource_service

		namespace cgame_entity_system
		{
			constexpr auto last_entity_index = 0x1510;
		} // namespace cgame_entity_system

		namespace cinput_system
		{
			constexpr auto relative_mouse_mode = 0x4f;
			constexpr auto sdl_window = 0x2670;
		} // namespace cinput_system

		namespace ccsgo_input
		{
			constexpr auto current_command = 0x6034;
			constexpr auto frame_command = 0x61e0;
			constexpr auto input_msg_frame_slots = 0x6330;
		} // namespace ccsgo_input

	} // namespace offsets

} // namespace sdk

#endif // SDK_OFFSETS_H
