// generated on: 11/6/2023

#ifndef SDK_SCHEMA_OFFSETS_H
#define SDK_SCHEMA_OFFSETS_H

#include <cstdint>

namespace sdk
{
	namespace offsets
	{
		namespace schema
		{
			namespace cexample_schema_vdata_monomorphic
			{
				constexpr auto example1 = 0x0;
				constexpr auto example2 = 0x4;
			} // namespace cexample_schema_vdata_monomorphic

			namespace resource_id_t
			{
				constexpr auto value = 0x0;
			} // namespace resource_id_t

			namespace cexample_schema_vdata_polymorphic_base
			{
				constexpr auto base = 0x8;
			} // namespace cexample_schema_vdata_polymorphic_base

			namespace cexample_schema_vdata_polymorphic_derivedb
			{
				constexpr auto derivedb = 0x10;
			} // namespace cexample_schema_vdata_polymorphic_derivedb

			namespace cexample_schema_vdata_polymorphic_derived_a
			{
				constexpr auto derived_a = 0x10;
			} // namespace cexample_schema_vdata_polymorphic_derived_a

			namespace cschema_system_internal_registration
			{
				constexpr auto vector2d = 0x0;
				constexpr auto vector = 0x8;
				constexpr auto vector_aligned = 0x20;
				constexpr auto quaternion = 0x30;
				constexpr auto qangle = 0x40;
				constexpr auto rotation_vector = 0x4c;
				constexpr auto radian_euler = 0x58;
				constexpr auto degree_euler = 0x64;
				constexpr auto quaternion_storage = 0x70;
				constexpr auto matrix3x4_t = 0x80;
				constexpr auto matrix3x4a_t = 0xb0;
				constexpr auto color = 0xe0;
				constexpr auto vector4d = 0xe4;
				constexpr auto ctransform = 0x100;
				constexpr auto key_values_ptr = 0x120;
				constexpr auto cutl_binary_block = 0x128;
				constexpr auto cutl_string = 0x140;
				constexpr auto cutl_symbol = 0x148;
				constexpr auto string_token = 0x14c;
				constexpr auto string_token_with_storage = 0x150;
				constexpr auto resource_types = 0x168;
				constexpr auto kv3 = 0x170;
			} // namespace cschema_system_internal_registration

			namespace manifest_test_resource_t
			{
				constexpr auto name = 0x0;
				constexpr auto child = 0x8;
			} // namespace manifest_test_resource_t

			namespace fuse_variable_index_t
			{
				constexpr auto value = 0x0;
			} // namespace fuse_variable_index_t

			namespace fuse_function_index_t
			{
				constexpr auto value = 0x0;
			} // namespace fuse_function_index_t

			namespace cfuse_program
			{
				constexpr auto program_buffer = 0x0;
				constexpr auto variables_read = 0x18;
				constexpr auto variables_written = 0x30;
				constexpr auto max_temp_vars_used = 0x48;
			} // namespace cfuse_program

			namespace four_quaternions
			{
				constexpr auto x = 0x0;
				constexpr auto y = 0x10;
				constexpr auto z = 0x20;
				constexpr auto w = 0x30;
			} // namespace four_quaternions

			namespace variable_info_t
			{
				constexpr auto name = 0x0;
				constexpr auto name_token = 0x8;
				constexpr auto index = 0xc;
				constexpr auto num_components = 0xe;
				constexpr auto e_var_type = 0xf;
				constexpr auto e_access = 0x10;
			} // namespace variable_info_t

			namespace aabb_t
			{
				constexpr auto v_min_bounds = 0x0;
				constexpr auto v_max_bounds = 0xc;
			} // namespace aabb_t

			namespace test_resource_t
			{
				constexpr auto name = 0x0;
			} // namespace test_resource_t

			namespace cfuse_symbol_table
			{
				constexpr auto constants = 0x0;
				constexpr auto variables = 0x18;
				constexpr auto functions = 0x30;
				constexpr auto constant_map = 0x48;
				constexpr auto variable_map = 0x68;
				constexpr auto function_map = 0x88;
			} // namespace cfuse_symbol_table

			namespace function_info_t
			{
				constexpr auto name = 0x8;
				constexpr auto name_token = 0x10;
				constexpr auto param_count = 0x14;
				constexpr auto index = 0x18;
				constexpr auto is_pure = 0x1a;
			} // namespace function_info_t

			namespace constant_info_t
			{
				constexpr auto name = 0x0;
				constexpr auto name_token = 0x8;
				constexpr auto value = 0xc;
			} // namespace constant_info_t

			namespace packed_aabb_t
			{
				constexpr auto packed_min = 0x0;
				constexpr auto packed_max = 0x4;
			} // namespace packed_aabb_t

			namespace render_input_layout_field_t
			{
				constexpr auto semantic_name_arr = 0x0;
				constexpr auto semantic_index = 0x20;
				constexpr auto format = 0x24;
				constexpr auto offset = 0x28;
				constexpr auto slot = 0x2c;
				constexpr auto slot_type = 0x30;
				constexpr auto instance_step_rate = 0x34;
			} // namespace render_input_layout_field_t

			namespace vs_input_signature_t
			{
				constexpr auto elems = 0x0;
			} // namespace vs_input_signature_t

			namespace vs_input_signature_element_t
			{
				constexpr auto name_arr = 0x0;
				constexpr auto semantic_arr = 0x40;
				constexpr auto d3_dsemantic_name_arr = 0x80;
				constexpr auto d3_dsemantic_index = 0xc0;
			} // namespace vs_input_signature_element_t

			namespace engine_loop_state_t
			{
				constexpr auto plat_window_width = 0x18;
				constexpr auto plat_window_height = 0x1c;
				constexpr auto render_width = 0x20;
				constexpr auto render_height = 0x24;
			} // namespace engine_loop_state_t

			namespace event_simulate_t
			{
				constexpr auto loop_state = 0x0;
				constexpr auto first_tick = 0x28;
				constexpr auto last_tick = 0x29;
			} // namespace event_simulate_t

			namespace event_client_poll_networking_t
			{
				constexpr auto tick_count = 0x0;
			} // namespace event_client_poll_networking_t

			namespace event_client_process_input_t
			{
				constexpr auto loop_state = 0x0;
				constexpr auto real_time = 0x28;
				constexpr auto tick_interval = 0x2c;
				constexpr auto tick_start_time = 0x30;
			} // namespace event_client_process_input_t

			namespace ent_component_info_t
			{
				constexpr auto name_ptr = 0x0;
				constexpr auto cppclassname_ptr = 0x8;
				constexpr auto network_data_referenced_description_ptr = 0x10;
				constexpr auto network_data_referenced_ptr_prop_description_ptr = 0x18;
				constexpr auto runtime_index = 0x20;
				constexpr auto flags = 0x24;
				constexpr auto base_class_component_helper_ptr = 0x60;
			} // namespace ent_component_info_t

			namespace event_set_time_t
			{
				constexpr auto loop_state = 0x0;
				constexpr auto client_output_frames = 0x28;
				constexpr auto real_time = 0x30;
				constexpr auto render_time = 0x38;
				constexpr auto render_frame_time = 0x40;
				constexpr auto render_frame_time_unbounded = 0x48;
				constexpr auto render_frame_time_unscaled = 0x50;
				constexpr auto tick_remainder = 0x58;
			} // namespace event_set_time_t

			namespace event_advance_tick_t
			{
				constexpr auto current_tick = 0x30;
				constexpr auto current_tick_this_frame = 0x34;
				constexpr auto total_ticks_this_frame = 0x38;
				constexpr auto total_ticks = 0x3c;
			} // namespace event_advance_tick_t

			namespace event_client_send_input_t
			{
				constexpr auto final_client_command_tick = 0x0;
				constexpr auto additional_client_commands_to_create = 0x4;
			} // namespace event_client_send_input_t

			namespace event_client_frame_simulate_t
			{
				constexpr auto loop_state = 0x0;
				constexpr auto real_time = 0x28;
				constexpr auto frame_time = 0x2c;
			} // namespace event_client_frame_simulate_t

			namespace event_client_pre_output_t
			{
				constexpr auto loop_state = 0x0;
				constexpr auto render_time = 0x28;
				constexpr auto render_frame_time = 0x30;
				constexpr auto render_frame_time_unbounded = 0x38;
				constexpr auto real_time = 0x40;
				constexpr auto render_only = 0x44;
			} // namespace event_client_pre_output_t

			namespace event_post_advance_tick_t
			{
				constexpr auto current_tick = 0x30;
				constexpr auto current_tick_this_frame = 0x34;
				constexpr auto total_ticks_this_frame = 0x38;
				constexpr auto total_ticks = 0x3c;
			} // namespace event_post_advance_tick_t

			namespace event_post_data_update_t
			{
				constexpr auto count = 0x0;
			} // namespace event_post_data_update_t

			namespace event_profile_storage_available_t
			{
				constexpr auto split_screen_slot = 0x0;
			} // namespace event_profile_storage_available_t

			namespace event_app_shutdown_t
			{
				constexpr auto dummy0 = 0x0;
			} // namespace event_app_shutdown_t

			namespace event_frame_boundary_t
			{
				constexpr auto frame_time = 0x0;
			} // namespace event_frame_boundary_t

			namespace event_client_process_game_input_t
			{
				constexpr auto loop_state = 0x0;
				constexpr auto real_time = 0x28;
				constexpr auto frame_time = 0x2c;
			} // namespace event_client_process_game_input_t

			namespace event_pre_data_update_t
			{
				constexpr auto count = 0x0;
			} // namespace event_pre_data_update_t

			namespace event_client_poll_input_t
			{
				constexpr auto loop_state = 0x0;
				constexpr auto real_time = 0x28;
			} // namespace event_client_poll_input_t

			namespace event_client_post_output_t
			{
				constexpr auto loop_state = 0x0;
				constexpr auto render_time = 0x28;
				constexpr auto render_frame_time = 0x30;
				constexpr auto render_frame_time_unbounded = 0x34;
				constexpr auto render_only = 0x38;
			} // namespace event_client_post_output_t

			namespace change_accessor_field_path_index_t
			{
				constexpr auto value = 0x0;
			} // namespace change_accessor_field_path_index_t

			namespace centity_component_helper
			{
				constexpr auto flags = 0x8;
				constexpr auto info_ptr = 0x10;
				constexpr auto priority = 0x18;
				constexpr auto next_ptr = 0x20;
			} // namespace centity_component_helper

			namespace event_client_output_t
			{
				constexpr auto loop_state = 0x0;
				constexpr auto render_time = 0x28;
				constexpr auto real_time = 0x2c;
				constexpr auto render_frame_time_unbounded = 0x30;
				constexpr auto render_only = 0x34;
			} // namespace event_client_output_t

			namespace event_client_scene_system_thread_state_change_t
			{
				constexpr auto threads_active = 0x0;
			} // namespace event_client_scene_system_thread_state_change_t

			namespace centity_iooutput
			{
				constexpr auto value = 0x18;
			} // namespace centity_iooutput

			namespace event_simple_loop_frame_update_t
			{
				constexpr auto loop_state = 0x0;
				constexpr auto real_time = 0x28;
				constexpr auto frame_time = 0x2c;
			} // namespace event_simple_loop_frame_update_t

			namespace material_param_t
			{
				constexpr auto name = 0x0;
			} // namespace material_param_t

			namespace material_param_float_t
			{
				constexpr auto value = 0x8;
			} // namespace material_param_float_t

			namespace post_processing_bloom_parameters_t
			{
				constexpr auto blend_mode = 0x0;
				constexpr auto bloom_strength = 0x4;
				constexpr auto screen_bloom_strength = 0x8;
				constexpr auto blur_bloom_strength = 0xc;
				constexpr auto bloom_threshold = 0x10;
				constexpr auto bloom_threshold_width = 0x14;
				constexpr auto skybox_bloom_strength = 0x18;
				constexpr auto bloom_start_value = 0x1c;
				constexpr auto blur_weight_arr = 0x20;
				constexpr auto v_blur_tint_arr = 0x34;
			} // namespace post_processing_bloom_parameters_t

			namespace material_resource_data_t
			{
				constexpr auto material_name = 0x0;
				constexpr auto shader_name = 0x8;
				constexpr auto int_params = 0x10;
				constexpr auto float_params = 0x28;
				constexpr auto vector_params = 0x40;
				constexpr auto texture_params = 0x58;
				constexpr auto dynamic_params = 0x70;
				constexpr auto dynamic_texture_params = 0x88;
				constexpr auto int_attributes = 0xa0;
				constexpr auto float_attributes = 0xb8;
				constexpr auto vector_attributes = 0xd0;
				constexpr auto texture_attributes = 0xe8;
				constexpr auto string_attributes = 0x100;
				constexpr auto render_attributes_used = 0x118;
			} // namespace material_resource_data_t

			namespace material_param_buffer_t
			{
				constexpr auto value = 0x8;
			} // namespace material_param_buffer_t

			namespace post_processing_tonemap_parameters_t
			{
				constexpr auto exposure_bias = 0x0;
				constexpr auto shoulder_strength = 0x4;
				constexpr auto linear_strength = 0x8;
				constexpr auto linear_angle = 0xc;
				constexpr auto toe_strength = 0x10;
				constexpr auto toe_num = 0x14;
				constexpr auto toe_denom = 0x18;
				constexpr auto white_point = 0x1c;
				constexpr auto luminance_source = 0x20;
				constexpr auto exposure_bias_shadows = 0x24;
				constexpr auto exposure_bias_highlights = 0x28;
				constexpr auto min_shadow_lum = 0x2c;
				constexpr auto max_shadow_lum = 0x30;
				constexpr auto min_highlight_lum = 0x34;
				constexpr auto max_highlight_lum = 0x38;
			} // namespace post_processing_tonemap_parameters_t

			namespace post_processing_local_contrast_parameters_t
			{
				constexpr auto local_contrast_strength = 0x0;
				constexpr auto local_contrast_edge_strength = 0x4;
				constexpr auto local_contrast_vignette_start = 0x8;
				constexpr auto local_contrast_vignette_end = 0xc;
				constexpr auto local_contrast_vignette_blur = 0x10;
			} // namespace post_processing_local_contrast_parameters_t

			namespace post_processing_vignette_parameters_t
			{
				constexpr auto vignette_strength = 0x0;
				constexpr auto v_center = 0x4;
				constexpr auto radius = 0xc;
				constexpr auto roundness = 0x10;
				constexpr auto feather = 0x14;
				constexpr auto v_color_tint = 0x18;
			} // namespace post_processing_vignette_parameters_t

			namespace material_param_int_t
			{
				constexpr auto value = 0x8;
			} // namespace material_param_int_t

			namespace post_processing_resource_t
			{
				constexpr auto has_tonemap_params = 0x0;
				constexpr auto tone_map_params = 0x4;
				constexpr auto has_bloom_params = 0x40;
				constexpr auto bloom_params = 0x44;
				constexpr auto has_vignette_params = 0xb4;
				constexpr auto vignette_params = 0xb8;
				constexpr auto has_local_contrast_params = 0xdc;
				constexpr auto local_constrast_params = 0xe0;
				constexpr auto color_correction_volume_dim = 0xf4;
				constexpr auto color_correction_volume_data = 0xf8;
				constexpr auto has_color_correction = 0x110;
			} // namespace post_processing_resource_t

			namespace material_param_string_t
			{
				constexpr auto value = 0x8;
			} // namespace material_param_string_t

			namespace material_param_vector_t
			{
				constexpr auto value = 0x8;
			} // namespace material_param_vector_t

			namespace material_param_texture_t
			{
				constexpr auto value = 0x8;
			} // namespace material_param_texture_t

			namespace cnetwork_var_chainer
			{
				constexpr auto path_index = 0x20;
			} // namespace cnetwork_var_chainer

			namespace canim_tag_manager_updater
			{
				constexpr auto tags = 0x18;
			} // namespace canim_tag_manager_updater

			namespace cmodel_config_element
			{
				constexpr auto element_name = 0x8;
				constexpr auto nested_elements = 0x10;
			} // namespace cmodel_config_element

			namespace cmood_vdata
			{
				constexpr auto s_model_name = 0x0;
				constexpr auto mood_type = 0xe0;
				constexpr auto animation_layers = 0xe8;
			} // namespace cmood_vdata

			namespace canim_node_path
			{
				constexpr auto path_arr = 0x0;
				constexpr auto count = 0x2c;
			} // namespace canim_node_path

			namespace canim_update_node_ref
			{
				constexpr auto node_index = 0x8;
			} // namespace canim_update_node_ref

			namespace cproduct_quantizer
			{
				constexpr auto sub_quantizers = 0x0;
				constexpr auto dimensions = 0x18;
			} // namespace cproduct_quantizer

			namespace foot_fixed_data_t
			{
				constexpr auto v_toe_offset = 0x0;
				constexpr auto v_heel_offset = 0x10;
				constexpr auto target_bone_index = 0x20;
				constexpr auto ankle_bone_index = 0x24;
				constexpr auto ikanchor_bone_index = 0x28;
				constexpr auto ik_chain_index = 0x2c;
				constexpr auto max_iklength = 0x30;
				constexpr auto foot_index = 0x34;
				constexpr auto tag_index = 0x38;
				constexpr auto max_rotation_left = 0x3c;
				constexpr auto max_rotation_right = 0x40;
			} // namespace foot_fixed_data_t

			namespace canim_morph_difference
			{
				constexpr auto name = 0x0;
			} // namespace canim_morph_difference

			namespace attachment_handle_t
			{
				constexpr auto value = 0x0;
			} // namespace attachment_handle_t

			namespace canim_key_data
			{
				constexpr auto name = 0x0;
				constexpr auto bone_array = 0x10;
				constexpr auto user_array = 0x28;
				constexpr auto morph_array = 0x40;
				constexpr auto channel_elements = 0x58;
				constexpr auto data_channel_array = 0x60;
			} // namespace canim_key_data

			namespace canim_update_node_base
			{
				constexpr auto node_path = 0x18;
				constexpr auto network_mode = 0x48;
				constexpr auto name = 0x50;
			} // namespace canim_update_node_base

			namespace cfinger_bone
			{
				constexpr auto bone_name = 0x0;
				constexpr auto hinge_axis = 0x8;
				constexpr auto v_capsule_pos1 = 0x14;
				constexpr auto v_capsule_pos2 = 0x20;
				constexpr auto min_angle = 0x2c;
				constexpr auto max_angle = 0x30;
				constexpr auto radius = 0x34;
			} // namespace cfinger_bone

			namespace iksolver_settings_t
			{
				constexpr auto solver_type = 0x0;
				constexpr auto num_iterations = 0x4;
			} // namespace iksolver_settings_t

			namespace canim_data
			{
				constexpr auto name = 0x10;
				constexpr auto anim_array = 0x20;
				constexpr auto decoder_array = 0x38;
				constexpr auto max_unique_frame_index = 0x50;
				constexpr auto segment_array = 0x58;
			} // namespace canim_data

			namespace anim_component_id
			{
				constexpr auto id = 0x0;
			} // namespace anim_component_id

			namespace canim_sequence_params
			{
				constexpr auto fade_in_time = 0x0;
				constexpr auto fade_out_time = 0x4;
			} // namespace canim_sequence_params

			namespace phys_softbody_desc_t
			{
				constexpr auto particle_bone_hash = 0x0;
				constexpr auto particles = 0x18;
				constexpr auto springs = 0x30;
				constexpr auto capsules = 0x48;
				constexpr auto init_pose = 0x60;
				constexpr auto particle_bone_name = 0x78;
			} // namespace phys_softbody_desc_t

			namespace cseq_auto_layer_flag
			{
				constexpr auto post = 0x0;
				constexpr auto spline = 0x1;
				constexpr auto xfade = 0x2;
				constexpr auto no_blend = 0x3;
				constexpr auto local = 0x4;
				constexpr auto pose = 0x5;
				constexpr auto fetch_frame = 0x6;
				constexpr auto subtract = 0x7;
			} // namespace cseq_auto_layer_flag

			namespace cphys_surface_properties_audio
			{
				constexpr auto reflectivity = 0x0;
				constexpr auto hardness_factor = 0x4;
				constexpr auto roughness_factor = 0x8;
				constexpr auto rough_threshold = 0xc;
				constexpr auto hard_threshold = 0x10;
				constexpr auto hard_velocity_threshold = 0x14;
				constexpr auto static_impact_volume = 0x18;
				constexpr auto occlusion_factor = 0x1c;
			} // namespace cphys_surface_properties_audio

			namespace anim_tag_id
			{
				constexpr auto id = 0x0;
			} // namespace anim_tag_id

			namespace canim_motor_updater_base
			{
				constexpr auto name = 0x10;
				constexpr auto default_ = 0x18;
			} // namespace canim_motor_updater_base

			namespace cunary_update_node
			{
				constexpr auto child_node = 0x58;
			} // namespace cunary_update_node

			namespace anim_script_handle
			{
				constexpr auto id = 0x0;
			} // namespace anim_script_handle

			namespace canim_attachment
			{
				constexpr auto influence_rotations_arr = 0x0;
				constexpr auto influence_offsets_arr = 0x30;
				constexpr auto influence_indices_arr = 0x60;
				constexpr auto influence_weights_arr = 0x6c;
				constexpr auto num_influences = 0x78;
			} // namespace canim_attachment

			namespace canim_input_damping
			{
				constexpr auto speed_function = 0x8;
				constexpr auto speed_scale = 0xc;
			} // namespace canim_input_damping

			namespace vphysics2_shape_def_t
			{
				constexpr auto spheres = 0x0;
				constexpr auto capsules = 0x18;
				constexpr auto hulls = 0x30;
				constexpr auto meshes = 0x48;
				constexpr auto collision_attribute_indices = 0x60;
			} // namespace vphysics2_shape_def_t

			namespace canim_param_handle
			{
				constexpr auto type = 0x0;
				constexpr auto index = 0x1;
			} // namespace canim_param_handle

			namespace skeleton_bone_bounds_t
			{
				constexpr auto vec_center = 0x0;
				constexpr auto vec_size = 0xc;
			} // namespace skeleton_bone_bounds_t

			namespace anim_node_id
			{
				constexpr auto id = 0x0;
			} // namespace anim_node_id

			namespace cvector_quantizer
			{
				constexpr auto centroid_vectors = 0x0;
				constexpr auto centroids = 0x18;
				constexpr auto dimensions = 0x1c;
			} // namespace cvector_quantizer

			namespace cmodel_config_element_set_render_color
			{
				constexpr auto color = 0x48;
			} // namespace cmodel_config_element_set_render_color

			namespace finger_bone_t
			{
				constexpr auto bone_index = 0x0;
				constexpr auto hinge_axis = 0x4;
				constexpr auto v_capsule_pos1 = 0x10;
				constexpr auto v_capsule_pos2 = 0x1c;
				constexpr auto min_angle = 0x28;
				constexpr auto max_angle = 0x2c;
				constexpr auto radius = 0x30;
			} // namespace finger_bone_t

			namespace anim_param_id
			{
				constexpr auto id = 0x0;
			} // namespace anim_param_id

			namespace cfoot_step_trigger_update_node
			{
				constexpr auto triggers = 0x68;
				constexpr auto tolerance = 0x84;
			} // namespace cfoot_step_trigger_update_node

			namespace param_span_t
			{
				constexpr auto samples = 0x0;
				constexpr auto h_param = 0x18;
				constexpr auto e_param_type = 0x1a;
				constexpr auto start_cycle = 0x1c;
				constexpr auto end_cycle = 0x20;
			} // namespace param_span_t

			namespace cset_facing_update_node
			{
				constexpr auto facing_mode = 0x68;
				constexpr auto reset_child = 0x6c;
			} // namespace cset_facing_update_node

			namespace cseq_scale_set
			{
				constexpr auto s_name = 0x0;
				constexpr auto root_offset = 0x10;
				constexpr auto v_root_offset = 0x14;
				constexpr auto local_bone_array = 0x20;
				constexpr auto bone_scale_array = 0x38;
			} // namespace cseq_scale_set

			namespace animation_decode_debug_dump_t
			{
				constexpr auto processing_type = 0x0;
				constexpr auto elems = 0x8;
			} // namespace animation_decode_debug_dump_t

			namespace ikbone_name_and_index_t
			{
				constexpr auto name = 0x0;
			} // namespace ikbone_name_and_index_t

			namespace canim_tag_base
			{
				constexpr auto name = 0x18;
				constexpr auto group = 0x20;
				constexpr auto tag_id = 0x28;
				constexpr auto is_referenced = 0x2c;
			} // namespace canim_tag_base

			namespace cmotion_node
			{
				constexpr auto name = 0x18;
				constexpr auto id = 0x20;
			} // namespace cmotion_node

			namespace cragdoll_anim_tag
			{
				constexpr auto pose_control = 0x38;
				constexpr auto frequency = 0x3c;
				constexpr auto damping_ratio = 0x40;
				constexpr auto decay_duration = 0x44;
				constexpr auto decay_bias = 0x48;
				constexpr auto destroy = 0x4c;
			} // namespace cragdoll_anim_tag

			namespace canim_parameter_base
			{
				constexpr auto name = 0x18;
				constexpr auto group = 0x20;
				constexpr auto id = 0x28;
				constexpr auto component_name = 0x40;
				constexpr auto networking_requested = 0x4c;
				constexpr auto is_referenced = 0x4d;
			} // namespace canim_parameter_base

			namespace cparam_span_updater
			{
				constexpr auto spans = 0x0;
			} // namespace cparam_span_updater

			namespace cfoot_trajectories
			{
				constexpr auto trajectories = 0x0;
			} // namespace cfoot_trajectories

			namespace aim_matrix_op_fixed_settings_t
			{
				constexpr auto attachment = 0x0;
				constexpr auto damping = 0x80;
				constexpr auto pose_cache_handles_arr = 0x90;
				constexpr auto e_blend_mode = 0xb8;
				constexpr auto angle_increment = 0xbc;
				constexpr auto sequence_max_frame = 0xc0;
				constexpr auto bone_mask_index = 0xc4;
				constexpr auto target_is_position = 0xc8;
			} // namespace aim_matrix_op_fixed_settings_t

			namespace canim_graph_settings_manager
			{
				constexpr auto settings_groups = 0x18;
			} // namespace canim_graph_settings_manager

			namespace two_bone_iksettings_t
			{
				constexpr auto end_effector_type = 0x0;
				constexpr auto end_effector_attachment = 0x10;
				constexpr auto target_type = 0x90;
				constexpr auto target_attachment = 0xa0;
				constexpr auto target_bone_index = 0x120;
				constexpr auto h_position_param = 0x124;
				constexpr auto h_rotation_param = 0x126;
				constexpr auto always_use_fallback_hinge = 0x128;
				constexpr auto v_ls_fallback_hinge_axis = 0x130;
				constexpr auto fixed_bone_index = 0x140;
				constexpr auto middle_bone_index = 0x144;
				constexpr auto end_bone_index = 0x148;
				constexpr auto match_target_orientation = 0x14c;
				constexpr auto constrain_twist = 0x14d;
				constexpr auto max_twist = 0x150;
			} // namespace two_bone_iksettings_t

			namespace solve_ikchain_pose_op_fixed_settings_t
			{
				constexpr auto chains_to_solve_data = 0x0;
				constexpr auto match_target_orientation = 0x18;
			} // namespace solve_ikchain_pose_op_fixed_settings_t

			namespace cragdoll_update_node
			{
				constexpr auto weight_list_index = 0x68;
				constexpr auto pose_control_method = 0x6c;
			} // namespace cragdoll_update_node

			namespace cseq_transition
			{
				constexpr auto fade_in_time = 0x0;
				constexpr auto fade_out_time = 0x4;
			} // namespace cseq_transition

			namespace csolve_ikchain_update_node
			{
				constexpr auto target_handles = 0x68;
				constexpr auto op_fixed_data = 0x80;
			} // namespace csolve_ikchain_update_node

			namespace cpose_handle
			{
				constexpr auto index = 0x0;
				constexpr auto e_type = 0x2;
			} // namespace cpose_handle

			namespace cbinary_update_node
			{
				constexpr auto child1 = 0x58;
				constexpr auto child2 = 0x68;
				constexpr auto timing_behavior = 0x78;
				constexpr auto timing_blend = 0x7c;
				constexpr auto reset_child1 = 0x80;
				constexpr auto reset_child2 = 0x81;
			} // namespace cbinary_update_node

			namespace jiggle_bone_settings_list_t
			{
				constexpr auto bone_settings = 0x0;
			} // namespace jiggle_bone_settings_list_t

			namespace cpath_anim_motor_updater_base
			{
				constexpr auto lock_to_path = 0x20;
			} // namespace cpath_anim_motor_updater_base

			namespace cmover_update_node
			{
				constexpr auto damping = 0x70;
				constexpr auto facing_target = 0x80;
				constexpr auto h_move_vec_param = 0x84;
				constexpr auto h_move_heading_param = 0x86;
				constexpr auto h_turn_to_face_param = 0x88;
				constexpr auto turn_to_face_offset = 0x8c;
				constexpr auto turn_to_face_limit = 0x90;
				constexpr auto additive = 0x94;
				constexpr auto apply_movement = 0x95;
				constexpr auto orient_movement = 0x96;
				constexpr auto apply_rotation = 0x97;
				constexpr auto limit_only = 0x98;
			} // namespace cmover_update_node

			namespace cbase_constraint
			{
				constexpr auto name = 0x28;
				constexpr auto v_up_vector = 0x30;
				constexpr auto slaves = 0x40;
				constexpr auto targets = 0x58;
			} // namespace cbase_constraint

			namespace anim_state_id
			{
				constexpr auto id = 0x0;
			} // namespace anim_state_id

			namespace wrist_bone_t
			{
				constexpr auto x_offset_transform_ms = 0x0;
				constexpr auto bone_index = 0x20;
			} // namespace wrist_bone_t

			namespace vphys_xconstraint_params_t
			{
				constexpr auto type = 0x0;
				constexpr auto translate_motion = 0x1;
				constexpr auto rotate_motion = 0x2;
				constexpr auto flags = 0x3;
				constexpr auto anchor_arr = 0x4;
				constexpr auto axes_arr = 0x1c;
				constexpr auto max_force = 0x3c;
				constexpr auto max_torque = 0x40;
				constexpr auto linear_limit_value = 0x44;
				constexpr auto linear_limit_restitution = 0x48;
				constexpr auto linear_limit_spring = 0x4c;
				constexpr auto linear_limit_damping = 0x50;
				constexpr auto twist_low_limit_value = 0x54;
				constexpr auto twist_low_limit_restitution = 0x58;
				constexpr auto twist_low_limit_spring = 0x5c;
				constexpr auto twist_low_limit_damping = 0x60;
				constexpr auto twist_high_limit_value = 0x64;
				constexpr auto twist_high_limit_restitution = 0x68;
				constexpr auto twist_high_limit_spring = 0x6c;
				constexpr auto twist_high_limit_damping = 0x70;
				constexpr auto swing1_limit_value = 0x74;
				constexpr auto swing1_limit_restitution = 0x78;
				constexpr auto swing1_limit_spring = 0x7c;
				constexpr auto swing1_limit_damping = 0x80;
				constexpr auto swing2_limit_value = 0x84;
				constexpr auto swing2_limit_restitution = 0x88;
				constexpr auto swing2_limit_spring = 0x8c;
				constexpr auto swing2_limit_damping = 0x90;
				constexpr auto goal_position = 0x94;
				constexpr auto goal_orientation = 0xa0;
				constexpr auto goal_angular_velocity = 0xb0;
				constexpr auto drive_spring_x = 0xbc;
				constexpr auto drive_spring_y = 0xc0;
				constexpr auto drive_spring_z = 0xc4;
				constexpr auto drive_damping_x = 0xc8;
				constexpr auto drive_damping_y = 0xcc;
				constexpr auto drive_damping_z = 0xd0;
				constexpr auto drive_spring_twist = 0xd4;
				constexpr auto drive_spring_swing = 0xd8;
				constexpr auto drive_spring_slerp = 0xdc;
				constexpr auto drive_damping_twist = 0xe0;
				constexpr auto drive_damping_swing = 0xe4;
				constexpr auto drive_damping_slerp = 0xe8;
				constexpr auto solver_iteration_count = 0xec;
				constexpr auto projection_linear_tolerance = 0xf0;
				constexpr auto projection_angular_tolerance = 0xf4;
			} // namespace vphys_xconstraint_params_t

			namespace param_span_sample_t
			{
				constexpr auto value = 0x0;
				constexpr auto cycle = 0x14;
			} // namespace param_span_sample_t

			namespace trace_settings_t
			{
				constexpr auto trace_height = 0x0;
				constexpr auto trace_radius = 0x4;
			} // namespace trace_settings_t

			namespace cmotion_metric_evaluator
			{
				constexpr auto means = 0x18;
				constexpr auto standard_deviations = 0x30;
				constexpr auto weight = 0x48;
				constexpr auto dimension_start_index = 0x4c;
			} // namespace cmotion_metric_evaluator

			namespace cbone_constraint_dot_to_morph
			{
				constexpr auto s_bone_name = 0x28;
				constexpr auto s_target_bone_name = 0x30;
				constexpr auto s_morph_channel_name = 0x38;
				constexpr auto remap_arr = 0x40;
			} // namespace cbone_constraint_dot_to_morph

			namespace canimation_graph_visualizer_primitive_base
			{
				constexpr auto type = 0x8;
				constexpr auto owning_anim_node_paths_arr = 0xc;
				constexpr auto owning_anim_node_path_count = 0x38;
			} // namespace canimation_graph_visualizer_primitive_base

			namespace cphys_surface_properties_physics
			{
				constexpr auto friction = 0x0;
				constexpr auto elasticity = 0x4;
				constexpr auto density = 0x8;
				constexpr auto thickness = 0xc;
				constexpr auto soft_contact_frequency = 0x10;
				constexpr auto soft_contact_damping_ratio = 0x14;
				constexpr auto wheel_drag = 0x18;
			} // namespace cphys_surface_properties_physics

			namespace canim_desc_flag
			{
				constexpr auto looping = 0x0;
				constexpr auto all_zeros = 0x1;
				constexpr auto hidden = 0x2;
				constexpr auto delta = 0x3;
				constexpr auto legacy_worldspace = 0x4;
				constexpr auto model_doc = 0x5;
				constexpr auto implicit_seq_ignore_delta = 0x6;
				constexpr auto anim_graph_additive = 0x7;
			} // namespace canim_desc_flag

			namespace canim_param_handle_map
			{
				constexpr auto list = 0x0;
			} // namespace canim_param_handle_map

			namespace cseq_iklock
			{
				constexpr auto pos_weight = 0x0;
				constexpr auto angle_weight = 0x4;
				constexpr auto local_bone = 0x8;
				constexpr auto bones_oriented_along_positive_x = 0xa;
			} // namespace cseq_iklock

			namespace crender_skeleton
			{
				constexpr auto bones = 0x0;
				constexpr auto bone_parents = 0x30;
				constexpr auto bone_weight_count = 0x48;
			} // namespace crender_skeleton

			namespace cplayer_input_anim_motor_updater
			{
				constexpr auto sample_times = 0x20;
				constexpr auto spring_constant = 0x3c;
				constexpr auto anticipation_distance = 0x40;
				constexpr auto h_anticipation_pos_param = 0x44;
				constexpr auto h_anticipation_heading_param = 0x46;
				constexpr auto use_acceleration = 0x48;
			} // namespace cplayer_input_anim_motor_updater

			namespace cstate_action_updater
			{
				constexpr auto action = 0x0;
				constexpr auto e_behavior = 0x8;
			} // namespace cstate_action_updater

			namespace cconcrete_anim_parameter
			{
				constexpr auto preview_button = 0x50;
				constexpr auto e_network_setting = 0x54;
				constexpr auto use_most_recent_value = 0x58;
				constexpr auto auto_reset = 0x59;
				constexpr auto game_writable = 0x5a;
				constexpr auto graph_writable = 0x5b;
			} // namespace cconcrete_anim_parameter

			namespace cbone_constraint_pose_space_morph
			{
				constexpr auto s_bone_name = 0x28;
				constexpr auto s_attachment_name = 0x30;
				constexpr auto output_morph = 0x38;
				constexpr auto input_list = 0x50;
				constexpr auto clamp = 0x68;
			} // namespace cbone_constraint_pose_space_morph

			namespace motion_blend_item
			{
				constexpr auto child = 0x0;
				constexpr auto key_value = 0x8;
			} // namespace motion_blend_item

			namespace cbone_constraint_pose_space_bone
			{
				constexpr auto input_list = 0x70;
			} // namespace cbone_constraint_pose_space_bone

			namespace canim_graph_model_binding
			{
				constexpr auto model_name = 0x8;
				constexpr auto shared_data = 0x10;
			} // namespace canim_graph_model_binding

			namespace canim_update_shared_data
			{
				constexpr auto nodes = 0x10;
				constexpr auto node_index_map = 0x28;
				constexpr auto components = 0x48;
				constexpr auto param_list_updater = 0x60;
				constexpr auto tag_manager_updater = 0x68;
				constexpr auto script_manager = 0x70;
				constexpr auto settings = 0x78;
				constexpr auto static_pose_cache = 0xa8;
				constexpr auto skeleton = 0xb0;
				constexpr auto root_node_path = 0xb8;
			} // namespace canim_update_shared_data

			namespace look_at_op_fixed_settings_t
			{
				constexpr auto attachment = 0x0;
				constexpr auto damping = 0x80;
				constexpr auto bones = 0x90;
				constexpr auto yaw_limit = 0xa8;
				constexpr auto pitch_limit = 0xac;
				constexpr auto hysteresis_inner_angle = 0xb0;
				constexpr auto hysteresis_outer_angle = 0xb4;
				constexpr auto rotate_yaw_forward = 0xb8;
				constexpr auto maintain_up_direction = 0xb9;
				constexpr auto target_is_position = 0xba;
				constexpr auto use_hysteresis = 0xbb;
			} // namespace look_at_op_fixed_settings_t

			namespace cstatic_pose_cache
			{
				constexpr auto poses = 0x10;
				constexpr auto bone_count = 0x28;
				constexpr auto morph_count = 0x2c;
			} // namespace cstatic_pose_cache

			namespace hsequence
			{
				constexpr auto value = 0x0;
			} // namespace hsequence

			namespace cvphys_xsurface_properties_list
			{
				constexpr auto surface_properties_list = 0x0;
			} // namespace cvphys_xsurface_properties_list

			namespace ctilt_twist_constraint
			{
				constexpr auto target_axis = 0x70;
				constexpr auto slave_axis = 0x74;
			} // namespace ctilt_twist_constraint

			namespace script_info_t
			{
				constexpr auto code = 0x0;
				constexpr auto params_modified = 0x8;
				constexpr auto proxy_read_params = 0x20;
				constexpr auto proxy_write_params = 0x38;
				constexpr auto e_script_type = 0x50;
			} // namespace script_info_t

			namespace cflex_rule
			{
				constexpr auto flex = 0x0;
				constexpr auto flex_ops = 0x8;
			} // namespace cflex_rule

			namespace cdirect_playback_update_node
			{
				constexpr auto finish_early = 0x6c;
				constexpr auto reset_on_finish = 0x6d;
				constexpr auto all_tags = 0x70;
			} // namespace cdirect_playback_update_node

			namespace cdistance_remaining_metric_evaluator
			{
				constexpr auto max_distance = 0x50;
				constexpr auto min_distance = 0x54;
				constexpr auto start_goal_filter_distance = 0x58;
				constexpr auto max_goal_overshoot_scale = 0x5c;
				constexpr auto filter_fixed_min_distance = 0x60;
				constexpr auto filter_goal_distance = 0x61;
				constexpr auto filter_goal_overshoot = 0x62;
			} // namespace cdistance_remaining_metric_evaluator

			namespace render_skeleton_bone_t
			{
				constexpr auto bone_name = 0x0;
				constexpr auto parent_name = 0x8;
				constexpr auto inv_bind_pose = 0x10;
				constexpr auto bbox = 0x40;
				constexpr auto sphere_radius = 0x58;
			} // namespace render_skeleton_bone_t

			namespace foot_pinning_pose_op_fixed_data_t
			{
				constexpr auto foot_info = 0x0;
				constexpr auto blend_time = 0x18;
				constexpr auto lock_break_distance = 0x1c;
				constexpr auto max_leg_twist = 0x20;
				constexpr auto hip_bone_index = 0x24;
				constexpr auto apply_leg_twist_limits = 0x28;
				constexpr auto apply_foot_rotation_limits = 0x29;
			} // namespace foot_pinning_pose_op_fixed_data_t

			namespace cseq_cmd_layer
			{
				constexpr auto cmd = 0x0;
				constexpr auto local_reference = 0x2;
				constexpr auto local_bonemask = 0x4;
				constexpr auto dst_result = 0x6;
				constexpr auto src_result = 0x8;
				constexpr auto spline = 0xa;
				constexpr auto var1 = 0xc;
				constexpr auto var2 = 0x10;
				constexpr auto line_number = 0x14;
			} // namespace cseq_cmd_layer

			namespace model_bone_flex_driver_control_t
			{
				constexpr auto bone_component = 0x0;
				constexpr auto flex_controller = 0x8;
				constexpr auto flex_controller_token = 0x10;
				constexpr auto min = 0x14;
				constexpr auto max = 0x18;
			} // namespace model_bone_flex_driver_control_t

			namespace ctwist_constraint
			{
				constexpr auto inverse = 0x70;
				constexpr auto q_parent_bind_rotation = 0x80;
				constexpr auto q_child_bind_rotation = 0x90;
			} // namespace ctwist_constraint

			namespace canimation_graph_visualizer_axis
			{
				constexpr auto x_ws_transform = 0x40;
				constexpr auto axis_size = 0x60;
			} // namespace canimation_graph_visualizer_axis

			namespace vphys_xbody_part_t
			{
				constexpr auto flags = 0x0;
				constexpr auto mass = 0x4;
				constexpr auto rn_shape = 0x8;
				constexpr auto collision_attribute_index = 0x80;
				constexpr auto reserved = 0x82;
				constexpr auto inertia_scale = 0x84;
				constexpr auto linear_damping = 0x88;
				constexpr auto angular_damping = 0x8c;
				constexpr auto override_mass_center = 0x90;
				constexpr auto v_mass_center_override = 0x94;
			} // namespace vphys_xbody_part_t

			namespace canim_skeleton
			{
				constexpr auto local_space_transforms = 0x10;
				constexpr auto model_space_transforms = 0x28;
				constexpr auto bone_names = 0x40;
				constexpr auto children = 0x58;
				constexpr auto parents = 0x70;
				constexpr auto feet = 0x88;
				constexpr auto morph_names = 0xa0;
				constexpr auto lod_bone_counts = 0xb8;
			} // namespace canim_skeleton

			namespace crender_mesh
			{
				constexpr auto scene_objects = 0x10;
				constexpr auto constraints = 0xa0;
				constexpr auto skeleton = 0xb8;
			} // namespace crender_mesh

			namespace cflex_desc
			{
				constexpr auto facs = 0x0;
			} // namespace cflex_desc

			namespace cwrist_bone
			{
				constexpr auto name = 0x0;
				constexpr auto v_forward_ls = 0x8;
				constexpr auto v_up_ls = 0x14;
				constexpr auto v_offset = 0x20;
			} // namespace cwrist_bone

			namespace cmotion_node_sequence
			{
				constexpr auto tags = 0x28;
				constexpr auto h_sequence = 0x40;
				constexpr auto playback_speed = 0x44;
			} // namespace cmotion_node_sequence

			namespace cfinger_source
			{
				constexpr auto finger_index = 0x0;
				constexpr auto finger_weight = 0x4;
			} // namespace cfinger_source

			namespace cflex_controller
			{
				constexpr auto name = 0x0;
				constexpr auto type = 0x8;
				constexpr auto min = 0x10;
				constexpr auto max = 0x14;
			} // namespace cflex_controller

			namespace cseq_multi_fetch_flag
			{
				constexpr auto realtime = 0x0;
				constexpr auto cylepose = 0x1;
				constexpr auto b0_d = 0x2;
				constexpr auto b1_d = 0x3;
				constexpr auto b2d = 0x4;
				constexpr auto b2_d_tri = 0x5;
			} // namespace cseq_multi_fetch_flag

			namespace cblend_curve
			{
				constexpr auto control_point1 = 0x0;
				constexpr auto control_point2 = 0x4;
			} // namespace cblend_curve

			namespace cfoot_trajectory
			{
				constexpr auto v_offset = 0x0;
				constexpr auto rotation_offset = 0xc;
				constexpr auto progression = 0x10;
			} // namespace cfoot_trajectory

			namespace canimation_graph_visualizer_text
			{
				constexpr auto v_ws_position = 0x40;
				constexpr auto color = 0x50;
				constexpr auto text = 0x58;
			} // namespace canimation_graph_visualizer_text

			namespace canimation_graph_visualizer_pie
			{
				constexpr auto v_ws_center = 0x40;
				constexpr auto v_ws_start = 0x50;
				constexpr auto v_ws_end = 0x60;
				constexpr auto color = 0x70;
			} // namespace canimation_graph_visualizer_pie

			namespace canimation_group
			{
				constexpr auto flags = 0x10;
				constexpr auto name = 0x18;
				constexpr auto local_hanim_array_handle = 0x60;
				constexpr auto included_group_array_handle = 0x78;
				constexpr auto direct_hseq_group_handle = 0x90;
				constexpr auto decode_key = 0x98;
				constexpr auto scripts = 0x110;
			} // namespace canimation_group

			namespace cturn_helper_update_node
			{
				constexpr auto facing_target = 0x6c;
				constexpr auto turn_start_time_offset = 0x70;
				constexpr auto turn_duration = 0x74;
				constexpr auto match_child_duration = 0x78;
				constexpr auto manual_turn_offset = 0x7c;
				constexpr auto use_manual_turn_offset = 0x80;
			} // namespace cturn_helper_update_node

			namespace caudio_anim_tag
			{
				constexpr auto clip_name = 0x38;
				constexpr auto attachment_name = 0x40;
				constexpr auto volume = 0x48;
				constexpr auto stop_when_tag_ends = 0x4c;
				constexpr auto stop_when_graph_ends = 0x4d;
				constexpr auto play_on_server = 0x4e;
				constexpr auto play_on_client = 0x4f;
			} // namespace caudio_anim_tag

			namespace cphys_surface_properties_sound_names
			{
				constexpr auto impact_soft = 0x0;
				constexpr auto impact_hard = 0x8;
				constexpr auto scrape_smooth = 0x10;
				constexpr auto scrape_rough = 0x18;
				constexpr auto bullet_impact = 0x20;
				constexpr auto rolling = 0x28;
				constexpr auto break_ = 0x30;
				constexpr auto strain = 0x38;
			} // namespace cphys_surface_properties_sound_names

			namespace cseq_multi_fetch
			{
				constexpr auto flags = 0x0;
				constexpr auto local_reference_array = 0x8;
				constexpr auto group_size_arr = 0x20;
				constexpr auto local_pose_arr = 0x28;
				constexpr auto pose_key_array0 = 0x30;
				constexpr auto pose_key_array1 = 0x48;
				constexpr auto local_cycle_pose_parameter = 0x60;
				constexpr auto calculate_pose_parameters = 0x64;
			} // namespace cseq_multi_fetch

			namespace cbone_constraint_pose_space_bone__input_t
			{
				constexpr auto input_value = 0x0;
				constexpr auto output_transform_list = 0x10;
			} // namespace cbone_constraint_pose_space_bone__input_t

			namespace skeletal_input_op_fixed_settings_t
			{
				constexpr auto wrist_bones = 0x0;
				constexpr auto fingers = 0x18;
				constexpr auto outer_knuckle1 = 0x30;
				constexpr auto outer_knuckle2 = 0x34;
				constexpr auto e_hand = 0x38;
				constexpr auto e_motion_range = 0x3c;
				constexpr auto e_transform_source = 0x40;
				constexpr auto enable_ik = 0x44;
				constexpr auto enable_collision = 0x45;
			} // namespace skeletal_input_op_fixed_settings_t

			namespace cfinger_chain
			{
				constexpr auto targets = 0x0;
				constexpr auto bones = 0x18;
				constexpr auto name = 0x30;
				constexpr auto tip_parent_bone_name = 0x38;
				constexpr auto v_tip_offset = 0x40;
				constexpr auto metacarpal_bone_name = 0x50;
				constexpr auto v_splay_hinge_axis = 0x58;
				constexpr auto splay_min_angle = 0x64;
				constexpr auto splay_max_angle = 0x68;
				constexpr auto finger_scale_ratio = 0x6c;
			} // namespace cfinger_chain

			namespace ctransition_update_data
			{
				constexpr auto src_state_index = 0x0;
				constexpr auto dest_state_index = 0x1;
				constexpr auto disabled = 0x5;
			} // namespace ctransition_update_data

			namespace canim_user_difference
			{
				constexpr auto name = 0x0;
				constexpr auto type = 0x10;
			} // namespace canim_user_difference

			namespace canimation_graph_visualizer_sphere
			{
				constexpr auto v_ws_position = 0x40;
				constexpr auto radius = 0x50;
				constexpr auto color = 0x54;
			} // namespace canimation_graph_visualizer_sphere

			namespace cmotion_data_set
			{
				constexpr auto groups = 0x0;
				constexpr auto dimension_count = 0x18;
			} // namespace cmotion_data_set

			namespace canim_encode_difference
			{
				constexpr auto bone_array = 0x0;
				constexpr auto morph_array = 0x18;
				constexpr auto user_array = 0x30;
				constexpr auto has_rotation_bit_array = 0x48;
				constexpr auto has_movement_bit_array = 0x60;
				constexpr auto has_morph_bit_array = 0x78;
				constexpr auto has_user_bit_array = 0x90;
			} // namespace canim_encode_difference

			namespace ccloth_settings_anim_tag
			{
				constexpr auto stiffness = 0x38;
				constexpr auto ease_in = 0x3c;
				constexpr auto ease_out = 0x40;
				constexpr auto vertex_set = 0x48;
			} // namespace ccloth_settings_anim_tag

			namespace cmorph_constraint
			{
				constexpr auto s_target_morph = 0x70;
				constexpr auto slave_channel = 0x78;
				constexpr auto min = 0x7c;
				constexpr auto max = 0x80;
			} // namespace cmorph_constraint

			namespace cmorph_set_data
			{
				constexpr auto width = 0x10;
				constexpr auto height = 0x14;
				constexpr auto bundle_types = 0x18;
				constexpr auto morph_datas = 0x30;
				constexpr auto texture_atlas = 0x48;
				constexpr auto flex_desc = 0x50;
				constexpr auto flex_controllers = 0x68;
				constexpr auto flex_rules = 0x80;
			} // namespace cmorph_set_data

			namespace cdraw_culling_data
			{
				constexpr auto v_cone_apex = 0x0;
				constexpr auto cone_axis_arr = 0xc;
				constexpr auto cone_cutoff = 0xf;
			} // namespace cdraw_culling_data

			namespace crender_buffer_binding
			{
				constexpr auto h_buffer = 0x0;
				constexpr auto bind_offset_bytes = 0x10;
			} // namespace crender_buffer_binding

			namespace cbone_position_metric_evaluator
			{
				constexpr auto bone_index = 0x50;
			} // namespace cbone_position_metric_evaluator

			namespace cset_parameter_action_updater
			{
				constexpr auto h_param = 0x18;
				constexpr auto value = 0x1a;
			} // namespace cset_parameter_action_updater

			namespace cbone_mask_update_node
			{
				constexpr auto weight_list_index = 0x8c;
				constexpr auto root_motion_blend = 0x90;
				constexpr auto blend_space = 0x94;
				constexpr auto foot_motion_timing = 0x98;
				constexpr auto use_blend_scale = 0x9c;
				constexpr auto blend_value_source = 0xa0;
				constexpr auto h_blend_parameter = 0xa4;
			} // namespace cbone_mask_update_node

			namespace cfuture_velocity_metric_evaluator
			{
				constexpr auto distance = 0x50;
				constexpr auto stopping_distance = 0x54;
				constexpr auto target_speed = 0x58;
				constexpr auto e_mode = 0x5c;
			} // namespace cfuture_velocity_metric_evaluator

			namespace cmovement_mode
			{
				constexpr auto name = 0x0;
				constexpr auto speed = 0x8;
			} // namespace cmovement_mode

			namespace cvirtual_anim_parameter
			{
				constexpr auto expression_string = 0x50;
				constexpr auto e_param_type = 0x58;
			} // namespace cvirtual_anim_parameter

			namespace ccycle_base
			{
				constexpr auto cycle = 0x0;
			} // namespace ccycle_base

			namespace cconstraint_slave
			{
				constexpr auto q_base_orientation = 0x0;
				constexpr auto v_base_position = 0x10;
				constexpr auto bone_hash = 0x1c;
				constexpr auto weight = 0x20;
				constexpr auto s_name = 0x28;
			} // namespace cconstraint_slave

			namespace iktarget_settings_t
			{
				constexpr auto target_source = 0x0;
				constexpr auto bone = 0x8;
				constexpr auto animgraph_parameter_name_position = 0x18;
				constexpr auto animgraph_parameter_name_orientation = 0x1c;
				constexpr auto target_coord_system = 0x20;
			} // namespace iktarget_settings_t

			namespace chit_box_set
			{
				constexpr auto name = 0x0;
				constexpr auto name_hash = 0x8;
				constexpr auto hit_boxes = 0x10;
				constexpr auto source_filename = 0x28;
			} // namespace chit_box_set

			namespace cfollow_path_update_node
			{
				constexpr auto blend_out_time = 0x6c;
				constexpr auto block_non_path_movement = 0x70;
				constexpr auto stop_feet_at_goal = 0x71;
				constexpr auto scale_speed = 0x72;
				constexpr auto scale = 0x74;
				constexpr auto min_angle = 0x78;
				constexpr auto max_angle = 0x7c;
				constexpr auto speed_scale_blending = 0x80;
				constexpr auto turn_damping = 0x88;
				constexpr auto facing_target = 0x98;
				constexpr auto h_param = 0x9c;
				constexpr auto turn_to_face_offset = 0xa0;
				constexpr auto turn_to_face = 0xa4;
			} // namespace cfollow_path_update_node

			namespace canim_component_updater
			{
				constexpr auto name = 0x18;
				constexpr auto id = 0x20;
				constexpr auto network_mode = 0x24;
				constexpr auto start_enabled = 0x28;
			} // namespace canim_component_updater

			namespace canim_frame_segment
			{
				constexpr auto unique_frame_index = 0x0;
				constexpr auto local_element_masks = 0x4;
				constexpr auto local_channel = 0x8;
				constexpr auto container = 0x10;
			} // namespace canim_frame_segment

			namespace cbody_group_anim_tag
			{
				constexpr auto priority = 0x38;
				constexpr auto body_group_settings = 0x40;
			} // namespace cbody_group_anim_tag

			namespace cvr_skeletal_input_settings
			{
				constexpr auto wrist_bones = 0x0;
				constexpr auto fingers = 0x18;
				constexpr auto name = 0x30;
				constexpr auto outer_knuckle1 = 0x38;
				constexpr auto outer_knuckle2 = 0x40;
				constexpr auto e_hand = 0x48;
			} // namespace cvr_skeletal_input_settings

			namespace cenum_anim_parameter
			{
				constexpr auto default_value = 0x68;
				constexpr auto enum_options = 0x70;
			} // namespace cenum_anim_parameter

			namespace cfootstep_landed_anim_tag
			{
				constexpr auto footstep_type = 0x38;
				constexpr auto override_sound_name = 0x40;
				constexpr auto debug_anim_source_string = 0x48;
				constexpr auto bone_name = 0x50;
			} // namespace cfootstep_landed_anim_tag

			namespace cstate_node_state_data
			{
				constexpr auto child = 0x0;
				constexpr auto exclusive_root_motion = 0x10;
			} // namespace cstate_node_state_data

			namespace canim_decoder
			{
				constexpr auto name = 0x0;
				constexpr auto version = 0x10;
				constexpr auto type = 0x14;
			} // namespace canim_decoder

			namespace canim_demo_capture_settings
			{
				constexpr auto range_bone_chain_length = 0x0;
				constexpr auto range_max_spline_error_rotation = 0x8;
				constexpr auto max_spline_error_translation = 0x10;
				constexpr auto max_spline_error_scale = 0x14;
				constexpr auto ik_rotation_max_spline_error = 0x18;
				constexpr auto ik_translation_max_spline_error = 0x1c;
				constexpr auto max_quantization_error_rotation = 0x20;
				constexpr auto max_quantization_error_translation = 0x24;
				constexpr auto max_quantization_error_scale = 0x28;
				constexpr auto ik_rotation_max_quantization_error = 0x2c;
				constexpr auto ik_translation_max_quantization_error = 0x30;
				constexpr auto base_sequence = 0x38;
				constexpr auto base_sequence_frame = 0x40;
				constexpr auto bone_selection_mode = 0x44;
				constexpr auto bones = 0x48;
				constexpr auto ik_chains = 0x60;
			} // namespace canim_demo_capture_settings

			namespace canim_enum
			{
				constexpr auto value = 0x0;
			} // namespace canim_enum

			namespace cadd_update_node
			{
				constexpr auto foot_motion_timing = 0x8c;
				constexpr auto apply_to_foot_motion = 0x90;
				constexpr auto apply_channels_separately = 0x91;
				constexpr auto use_model_space = 0x92;
			} // namespace cadd_update_node

			namespace cfuture_facing_metric_evaluator
			{
				constexpr auto distance = 0x50;
				constexpr auto time = 0x54;
			} // namespace cfuture_facing_metric_evaluator

			namespace cmodel_config_element_set_material_group
			{
				constexpr auto material_group_name = 0x48;
			} // namespace cmodel_config_element_set_material_group

			namespace cmovement_component_updater
			{
				constexpr auto movement_modes = 0x30;
				constexpr auto motors = 0x48;
				constexpr auto facing_damping = 0x60;
				constexpr auto e_default_facing_mode = 0x70;
				constexpr auto default_motor_index = 0x7c;
				constexpr auto move_vars_disabled = 0x80;
				constexpr auto network_path = 0x81;
				constexpr auto network_facing = 0x82;
				constexpr auto param_handles_arr = 0x83;
			} // namespace cmovement_component_updater

			namespace follow_attachment_settings_t
			{
				constexpr auto attachment = 0x0;
				constexpr auto bone_index = 0x80;
				constexpr auto match_translation = 0x84;
				constexpr auto match_rotation = 0x85;
			} // namespace follow_attachment_settings_t

			namespace canim_replay_frame
			{
				constexpr auto input_data_blocks = 0x10;
				constexpr auto instance_data = 0x28;
				constexpr auto starting_local_to_world_transform = 0x40;
				constexpr auto local_to_world_transform = 0x60;
				constexpr auto time_stamp = 0x80;
			} // namespace canim_replay_frame

			namespace cmodel_config_element_set_bodygroup_on_attached_models
			{
				constexpr auto group_name = 0x48;
				constexpr auto choice = 0x50;
			} // namespace cmodel_config_element_set_bodygroup_on_attached_models

			namespace cspeed_scale_update_node
			{
				constexpr auto param_index = 0x68;
			} // namespace cspeed_scale_update_node

			namespace crange_float
			{
				constexpr auto value_arr = 0x0;
			} // namespace crange_float

			namespace cbone_constraint_pose_space_morph__input_t
			{
				constexpr auto input_value = 0x0;
				constexpr auto output_weight_list = 0x10;
			} // namespace cbone_constraint_pose_space_morph__input_t

			namespace bone_demo_capture_settings_t
			{
				constexpr auto bone_name = 0x0;
				constexpr auto chain_length = 0x8;
			} // namespace bone_demo_capture_settings_t

			namespace canim_parameter_manager_updater
			{
				constexpr auto parameters = 0x18;
				constexpr auto id_to_index_map = 0x30;
				constexpr auto name_to_index_map = 0x50;
				constexpr auto index_to_handle = 0x70;
				constexpr auto auto_reset_params = 0x88;
				constexpr auto auto_reset_map = 0xa0;
			} // namespace canim_parameter_manager_updater

			namespace canim_bone
			{
				constexpr auto name = 0x0;
				constexpr auto parent = 0x10;
				constexpr auto pos = 0x14;
				constexpr auto quat = 0x20;
				constexpr auto scale = 0x30;
				constexpr auto q_alignment = 0x34;
				constexpr auto flags = 0x44;
			} // namespace canim_bone

			namespace clook_at_update_node
			{
				constexpr auto op_fixed_settings = 0x70;
				constexpr auto target = 0x138;
				constexpr auto param_index = 0x13c;
				constexpr auto weight_param_index = 0x13e;
				constexpr auto reset_child = 0x140;
				constexpr auto lock_when_waning = 0x141;
			} // namespace clook_at_update_node

			namespace hit_react_fixed_settings_t
			{
				constexpr auto weight_list_index = 0x0;
				constexpr auto effected_bone_count = 0x4;
				constexpr auto max_impact_force = 0x8;
				constexpr auto min_impact_force = 0xc;
				constexpr auto whip_impact_scale = 0x10;
				constexpr auto counter_rotation_scale = 0x14;
				constexpr auto distance_fade_scale = 0x18;
				constexpr auto propagation_scale = 0x1c;
				constexpr auto whip_delay = 0x20;
				constexpr auto spring_strength = 0x24;
				constexpr auto whip_spring_strength = 0x28;
				constexpr auto max_angle_radians = 0x2c;
				constexpr auto hip_bone_index = 0x30;
				constexpr auto hip_bone_translation_scale = 0x34;
				constexpr auto hip_dip_spring_strength = 0x38;
				constexpr auto hip_dip_impact_scale = 0x3c;
				constexpr auto hip_dip_delay = 0x40;
			} // namespace hit_react_fixed_settings_t

			namespace cskeletal_input_update_node
			{
				constexpr auto fixed_op_data = 0x58;
			} // namespace cskeletal_input_update_node

			namespace cflex_op
			{
				constexpr auto op_code = 0x0;
				constexpr auto data = 0x4;
			} // namespace cflex_op

			namespace canim_script_component_updater
			{
				constexpr auto h_script = 0x30;
			} // namespace canim_script_component_updater

			namespace canim_event_definition
			{
				constexpr auto frame = 0x8;
				constexpr auto cycle = 0xc;
				constexpr auto event_data = 0x10;
				constexpr auto s_legacy_options = 0x20;
				constexpr auto s_event_name = 0x30;
			} // namespace canim_event_definition

			namespace cmodel_config_element_command
			{
				constexpr auto command = 0x48;
				constexpr auto args = 0x50;
			} // namespace cmodel_config_element_command

			namespace caim_matrix_update_node
			{
				constexpr auto op_fixed_settings = 0x70;
				constexpr auto target = 0x148;
				constexpr auto param_index = 0x14c;
				constexpr auto h_sequence = 0x150;
				constexpr auto reset_child = 0x154;
				constexpr auto lock_when_waning = 0x155;
			} // namespace caim_matrix_update_node

			namespace canim_state_machine_updater
			{
				constexpr auto states = 0x8;
				constexpr auto transitions = 0x20;
				constexpr auto start_state_index = 0x50;
			} // namespace canim_state_machine_updater

			namespace csequence_group_data
			{
				constexpr auto s_name = 0x10;
				constexpr auto flags = 0x20;
				constexpr auto local_sequence_name_array = 0x28;
				constexpr auto local_s1_seq_desc_array = 0x40;
				constexpr auto local_multi_seq_desc_array = 0x58;
				constexpr auto local_synth_anim_desc_array = 0x70;
				constexpr auto local_cmd_seq_desc_array = 0x88;
				constexpr auto local_bone_mask_array = 0xa0;
				constexpr auto local_scale_set_array = 0xb8;
				constexpr auto local_bone_name_array = 0xd0;
				constexpr auto local_node_name = 0xe8;
				constexpr auto local_pose_param_array = 0xf8;
				constexpr auto key_values = 0x110;
				constexpr auto local_ikautoplay_lock_array = 0x120;
			} // namespace csequence_group_data

			namespace model_skeleton_data_t
			{
				constexpr auto bone_name = 0x0;
				constexpr auto parent = 0x18;
				constexpr auto bone_sphere = 0x30;
				constexpr auto flag = 0x48;
				constexpr auto bone_pos_parent = 0x60;
				constexpr auto bone_rot_parent = 0x78;
				constexpr auto bone_scale_parent = 0x90;
			} // namespace model_skeleton_data_t

			namespace cquaternion_anim_parameter
			{
				constexpr auto default_value = 0x60;
				constexpr auto interpolate = 0x70;
			} // namespace cquaternion_anim_parameter

			namespace cvrinput_component_updater
			{
				constexpr auto finger_curl_thumb = 0x34;
				constexpr auto finger_curl_index = 0x36;
				constexpr auto finger_curl_middle = 0x38;
				constexpr auto finger_curl_ring = 0x3a;
				constexpr auto finger_curl_pinky = 0x3c;
				constexpr auto finger_splay_thumb_index = 0x3e;
				constexpr auto finger_splay_index_middle = 0x40;
				constexpr auto finger_splay_middle_ring = 0x42;
				constexpr auto finger_splay_ring_pinky = 0x44;
			} // namespace cvrinput_component_updater

			namespace cblend_update_node
			{
				constexpr auto children = 0x60;
				constexpr auto sorted_order = 0x78;
				constexpr auto target_values = 0x90;
				constexpr auto blend_value_source = 0xac;
				constexpr auto param_index = 0xb0;
				constexpr auto damping = 0xb8;
				constexpr auto blend_key_type = 0xc8;
				constexpr auto lock_blend_on_reset = 0xcc;
				constexpr auto sync_cycles = 0xcd;
				constexpr auto loop = 0xce;
				constexpr auto lock_when_waning = 0xcf;
			} // namespace cblend_update_node

			namespace canim_local_hierarchy
			{
				constexpr auto s_bone = 0x0;
				constexpr auto s_new_parent = 0x10;
				constexpr auto start_frame = 0x20;
				constexpr auto peak_frame = 0x24;
				constexpr auto tail_frame = 0x28;
				constexpr auto end_frame = 0x2c;
			} // namespace canim_local_hierarchy

			namespace cdamped_value_update_item
			{
				constexpr auto damping = 0x0;
				constexpr auto h_param_in = 0x18;
				constexpr auto h_param_out = 0x1a;
			} // namespace cdamped_value_update_item

			namespace ccycle_control_clip_update_node
			{
				constexpr auto tags = 0x60;
				constexpr auto h_sequence = 0x7c;
				constexpr auto duration = 0x80;
				constexpr auto value_source = 0x84;
				constexpr auto param_index = 0x88;
			} // namespace ccycle_control_clip_update_node

			namespace cfoot_position_metric_evaluator
			{
				constexpr auto foot_indices = 0x50;
				constexpr auto ignore_slope = 0x68;
			} // namespace cfoot_position_metric_evaluator

			namespace canim_foot
			{
				constexpr auto name = 0x0;
				constexpr auto v_ball_offset = 0x8;
				constexpr auto v_heel_offset = 0x14;
				constexpr auto ankle_bone_index = 0x20;
				constexpr auto toe_bone_index = 0x24;
			} // namespace canim_foot

			namespace cmorph_rect_data
			{
				constexpr auto xleft_dst = 0x0;
				constexpr auto ytop_dst = 0x2;
				constexpr auto uwidth_src = 0x4;
				constexpr auto vheight_src = 0x8;
				constexpr auto bundle_datas = 0x10;
			} // namespace cmorph_rect_data

			namespace canim_data_channel_desc
			{
				constexpr auto channel_class = 0x0;
				constexpr auto variable_name = 0x10;
				constexpr auto flags = 0x20;
				constexpr auto type = 0x24;
				constexpr auto grouping = 0x28;
				constexpr auto description = 0x38;
				constexpr auto element_name_array = 0x48;
				constexpr auto element_index_array = 0x60;
				constexpr auto element_mask_array = 0x78;
			} // namespace canim_data_channel_desc

			namespace clodcomponent_updater
			{
				constexpr auto server_lod = 0x30;
			} // namespace clodcomponent_updater

			namespace mood_animation_t
			{
				constexpr auto s_name = 0x0;
				constexpr auto weight = 0x8;
			} // namespace mood_animation_t

			namespace cjiggle_bone_update_node
			{
				constexpr auto op_fixed_data = 0x68;
			} // namespace cjiggle_bone_update_node

			namespace cfoot_motion
			{
				constexpr auto strides = 0x0;
				constexpr auto name = 0x18;
				constexpr auto additive = 0x20;
			} // namespace cfoot_motion

			namespace cmodel_config_element_random_color
			{
				constexpr auto gradient = 0x48;
			} // namespace cmodel_config_element_random_color

			namespace cbone_velocity_metric_evaluator
			{
				constexpr auto bone_index = 0x50;
			} // namespace cbone_velocity_metric_evaluator

			namespace foot_lock_pose_op_fixed_settings
			{
				constexpr auto foot_info = 0x0;
				constexpr auto hip_damping_settings = 0x18;
				constexpr auto hip_bone_index = 0x28;
				constexpr auto ik_solver_type = 0x2c;
				constexpr auto apply_tilt = 0x30;
				constexpr auto apply_hip_drop = 0x31;
				constexpr auto always_use_fallback_hinge = 0x32;
				constexpr auto apply_foot_rotation_limits = 0x33;
				constexpr auto apply_leg_twist_limits = 0x34;
				constexpr auto max_foot_height = 0x38;
				constexpr auto extension_scale = 0x3c;
				constexpr auto max_leg_twist = 0x40;
				constexpr auto enable_lock_breaking = 0x44;
				constexpr auto lock_break_tolerance = 0x48;
				constexpr auto lock_blend_time = 0x4c;
				constexpr auto enable_stretching = 0x50;
				constexpr auto max_stretch_amount = 0x54;
				constexpr auto stretch_extension_scale = 0x58;
			} // namespace foot_lock_pose_op_fixed_settings

			namespace csequence_update_node
			{
				constexpr auto param_spans = 0x60;
				constexpr auto tags = 0x78;
				constexpr auto h_sequence = 0x94;
				constexpr auto playback_speed = 0x98;
				constexpr auto duration = 0x9c;
				constexpr auto loop = 0xa0;
			} // namespace csequence_update_node

			namespace finger_source_t
			{
				constexpr auto finger_index = 0x0;
				constexpr auto finger_weight = 0x4;
			} // namespace finger_source_t

			namespace jiggle_bone_settings_t
			{
				constexpr auto bone_index = 0x0;
				constexpr auto spring_strength = 0x4;
				constexpr auto max_time_step = 0x8;
				constexpr auto damping = 0xc;
				constexpr auto v_bounds_max_ls = 0x10;
				constexpr auto v_bounds_min_ls = 0x1c;
				constexpr auto e_sim_space = 0x28;
			} // namespace jiggle_bone_settings_t

			namespace cfoot_lock_update_node
			{
				constexpr auto op_fixed_settings = 0x68;
				constexpr auto foot_settings = 0xd0;
				constexpr auto hip_shift_damping = 0xe8;
				constexpr auto root_height_damping = 0xf8;
				constexpr auto stride_curve_scale = 0x108;
				constexpr auto stride_curve_limit_scale = 0x10c;
				constexpr auto step_height_increase_scale = 0x110;
				constexpr auto step_height_decrease_scale = 0x114;
				constexpr auto hip_shift_scale = 0x118;
				constexpr auto blend_time = 0x11c;
				constexpr auto max_root_height_offset = 0x120;
				constexpr auto min_root_height_offset = 0x124;
				constexpr auto tilt_plane_pitch_spring_strength = 0x128;
				constexpr auto tilt_plane_roll_spring_strength = 0x12c;
				constexpr auto apply_foot_rotation_limits = 0x130;
				constexpr auto apply_hip_shift = 0x131;
				constexpr auto modulate_step_height = 0x132;
				constexpr auto reset_child = 0x133;
				constexpr auto enable_vertical_curved_paths = 0x134;
				constexpr auto enable_root_height_damping = 0x135;
			} // namespace cfoot_lock_update_node

			namespace cpath_metric_evaluator
			{
				constexpr auto path_time_samples = 0x50;
				constexpr auto distance = 0x68;
				constexpr auto extrapolate_movement = 0x6c;
				constexpr auto min_extrapolation_speed = 0x70;
			} // namespace cpath_metric_evaluator

			namespace foot_step_trigger
			{
				constexpr auto tags = 0x0;
				constexpr auto foot_index = 0x18;
				constexpr auto trigger_phase = 0x1c;
			} // namespace foot_step_trigger

			namespace canim_movement
			{
				constexpr auto endframe = 0x0;
				constexpr auto motionflags = 0x4;
				constexpr auto v0 = 0x8;
				constexpr auto v1 = 0xc;
				constexpr auto angle = 0x10;
				constexpr auto vector = 0x14;
				constexpr auto position = 0x20;
			} // namespace canim_movement

			namespace finger_chain_t
			{
				constexpr auto targets = 0x0;
				constexpr auto bones = 0x18;
				constexpr auto v_tip_offset = 0x30;
				constexpr auto v_splay_hinge_axis = 0x3c;
				constexpr auto tip_parent_bone_index = 0x48;
				constexpr auto metacarpal_bone_index = 0x4c;
				constexpr auto splay_min_angle = 0x50;
				constexpr auto splay_max_angle = 0x54;
				constexpr auto finger_scale_ratio = 0x58;
			} // namespace finger_chain_t

			namespace cmodel_config_element_set_bodygroup
			{
				constexpr auto group_name = 0x48;
				constexpr auto choice = 0x50;
			} // namespace cmodel_config_element_set_bodygroup

			namespace cseq_pose_param_desc
			{
				constexpr auto s_name = 0x0;
				constexpr auto start = 0x10;
				constexpr auto end = 0x14;
				constexpr auto loop = 0x18;
				constexpr auto looping = 0x1c;
			} // namespace cseq_pose_param_desc

			namespace cphys_surface_properties
			{
				constexpr auto name = 0x0;
				constexpr auto name_hash = 0x8;
				constexpr auto base_name_hash = 0xc;
				constexpr auto hidden = 0x18;
				constexpr auto description = 0x20;
				constexpr auto physics = 0x28;
				constexpr auto audio_sounds = 0x48;
				constexpr auto audio_params = 0x88;
			} // namespace cphys_surface_properties

			namespace csubtract_update_node
			{
				constexpr auto foot_motion_timing = 0x8c;
				constexpr auto apply_to_foot_motion = 0x90;
				constexpr auto apply_channels_separately = 0x91;
				constexpr auto use_model_space = 0x92;
			} // namespace csubtract_update_node

			namespace cstate_machine_component_updater
			{
				constexpr auto state_machine = 0x30;
			} // namespace cstate_machine_component_updater

			namespace cselector_update_node
			{
				constexpr auto children = 0x58;
				constexpr auto tags = 0x70;
				constexpr auto blend_curve = 0x8c;
				constexpr auto blend_time = 0x94;
				constexpr auto h_parameter = 0x9c;
				constexpr auto e_tag_behavior = 0xa0;
				constexpr auto reset_on_change = 0xa4;
				constexpr auto sync_cycles_on_change = 0xa5;
			} // namespace cselector_update_node

			namespace ccompressor_group
			{
				constexpr auto total_element_count = 0x0;
				constexpr auto channel_class = 0x8;
				constexpr auto variable_name = 0x20;
				constexpr auto type = 0x38;
				constexpr auto flags = 0x50;
				constexpr auto grouping = 0x68;
				constexpr auto compressor_index = 0x80;
				constexpr auto element_names = 0x98;
				constexpr auto element_unique_id = 0xb0;
				constexpr auto element_mask = 0xc8;
				constexpr auto vector_compressor = 0xf8;
				constexpr auto quaternion_compressor = 0x110;
				constexpr auto int_compressor = 0x128;
				constexpr auto bool_compressor = 0x140;
				constexpr auto color_compressor = 0x158;
				constexpr auto vector2_dcompressor = 0x170;
				constexpr auto vector4_dcompressor = 0x188;
			} // namespace ccompressor_group

			namespace cway_point_helper_update_node
			{
				constexpr auto start_cycle = 0x6c;
				constexpr auto end_cycle = 0x70;
				constexpr auto only_goals = 0x74;
				constexpr auto prevent_overshoot = 0x75;
				constexpr auto prevent_undershoot = 0x76;
			} // namespace cway_point_helper_update_node

			namespace cstate_machine_update_node
			{
				constexpr auto state_machine = 0x68;
				constexpr auto state_data = 0xc0;
				constexpr auto transition_data = 0xd8;
				constexpr auto block_waning_tags = 0xf4;
				constexpr auto lock_state_when_waning = 0xf5;
			} // namespace cstate_machine_update_node

			namespace cemit_tag_action_updater
			{
				constexpr auto tag_index = 0x18;
				constexpr auto is_zero_duration = 0x1c;
			} // namespace cemit_tag_action_updater

			namespace animation_decode_debug_dump_element_t
			{
				constexpr auto entity_index = 0x0;
				constexpr auto model_name = 0x8;
				constexpr auto pose_params = 0x10;
				constexpr auto decode_ops = 0x28;
				constexpr auto internal_ops = 0x40;
				constexpr auto decoded_anims = 0x58;
			} // namespace animation_decode_debug_dump_element_t

			namespace cparticle_anim_tag
			{
				constexpr auto h_particle_system = 0x38;
				constexpr auto particle_system_name = 0x40;
				constexpr auto config_name = 0x48;
				constexpr auto detach_from_owner = 0x50;
				constexpr auto stop_when_tag_ends = 0x51;
				constexpr auto tag_end_stop_is_instant = 0x52;
				constexpr auto attachment_name = 0x58;
				constexpr auto attachment_type = 0x60;
				constexpr auto attachment_cp1_name = 0x68;
				constexpr auto attachment_cp1_type = 0x70;
			} // namespace cparticle_anim_tag

			namespace ctoggle_component_action_updater
			{
				constexpr auto component_id = 0x18;
				constexpr auto set_enabled = 0x1c;
			} // namespace ctoggle_component_action_updater

			namespace cmotion_graph
			{
				constexpr auto param_spans = 0x10;
				constexpr auto tags = 0x28;
				constexpr auto root_node = 0x40;
				constexpr auto parameter_count = 0x48;
				constexpr auto config_start_index = 0x4c;
				constexpr auto config_count = 0x50;
				constexpr auto loop = 0x54;
			} // namespace cmotion_graph

			namespace cdirect_playback_tag_data
			{
				constexpr auto sequence_name = 0x0;
				constexpr auto tags = 0x8;
			} // namespace cdirect_playback_tag_data

			namespace motion_dbindex
			{
				constexpr auto index = 0x0;
			} // namespace motion_dbindex

			namespace chit_box_set_list
			{
				constexpr auto hit_box_sets = 0x0;
			} // namespace chit_box_set_list

			namespace clean_matrix_update_node
			{
				constexpr auto frame_corners_arr = 0x5c;
				constexpr auto poses_arr = 0x80;
				constexpr auto damping = 0xa8;
				constexpr auto blend_source = 0xb8;
				constexpr auto param_index = 0xbc;
				constexpr auto vertical_axis = 0xc0;
				constexpr auto horizontal_axis = 0xcc;
				constexpr auto h_sequence = 0xd8;
				constexpr auto max_value = 0xdc;
				constexpr auto sequence_max_frame = 0xe0;
			} // namespace clean_matrix_update_node

			namespace perm_model_ext_part_t
			{
				constexpr auto transform = 0x0;
				constexpr auto name = 0x20;
				constexpr auto parent = 0x28;
				constexpr auto ref_model = 0x30;
			} // namespace perm_model_ext_part_t

			namespace cblend2_dupdate_node
			{
				constexpr auto items = 0x60;
				constexpr auto tags = 0x78;
				constexpr auto param_spans = 0x90;
				constexpr auto node_item_indices = 0xa8;
				constexpr auto damping = 0xc0;
				constexpr auto blend_source_x = 0xd0;
				constexpr auto param_x = 0xd4;
				constexpr auto blend_source_y = 0xd8;
				constexpr auto param_y = 0xdc;
				constexpr auto e_blend_mode = 0xe0;
				constexpr auto playback_speed = 0xe4;
				constexpr auto loop = 0xe8;
				constexpr auto lock_blend_on_reset = 0xe9;
				constexpr auto lock_when_waning = 0xea;
				constexpr auto anim_events_and_tags_on_most_weighted_only = 0xeb;
			} // namespace cblend2_dupdate_node

			namespace ccppscript_component_updater
			{
				constexpr auto scripts_to_run = 0x30;
			} // namespace ccppscript_component_updater

			namespace cseq_seq_desc_flag
			{
				constexpr auto looping = 0x0;
				constexpr auto snap = 0x1;
				constexpr auto autoplay = 0x2;
				constexpr auto post = 0x3;
				constexpr auto hidden = 0x4;
				constexpr auto multi = 0x5;
				constexpr auto legacy_delta = 0x6;
				constexpr auto legacy_worldspace = 0x7;
				constexpr auto legacy_cyclepose = 0x8;
				constexpr auto legacy_realtime = 0x9;
				constexpr auto model_doc = 0xa;
			} // namespace cseq_seq_desc_flag

			namespace cfoot_definition
			{
				constexpr auto name = 0x0;
				constexpr auto ankle_bone_name = 0x8;
				constexpr auto toe_bone_name = 0x10;
				constexpr auto v_ball_offset = 0x18;
				constexpr auto v_heel_offset = 0x24;
				constexpr auto foot_length = 0x30;
				constexpr auto bind_pose_direction_ms = 0x34;
				constexpr auto trace_height = 0x38;
				constexpr auto trace_radius = 0x3c;
			} // namespace cfoot_definition

			namespace cragdoll_component_updater
			{
				constexpr auto ragdoll_node_paths = 0x30;
				constexpr auto bone_indices = 0x48;
				constexpr auto bone_names = 0x60;
				constexpr auto weight_lists = 0x78;
				constexpr auto spring_frequency_min = 0x90;
				constexpr auto spring_frequency_max = 0x94;
				constexpr auto max_stretch = 0x98;
			} // namespace cragdoll_component_updater

			namespace canim_user
			{
				constexpr auto name = 0x0;
				constexpr auto type = 0x10;
			} // namespace canim_user

			namespace cconstraint_target
			{
				constexpr auto q_offset = 0x20;
				constexpr auto v_offset = 0x30;
				constexpr auto bone_hash = 0x3c;
				constexpr auto s_name = 0x40;
				constexpr auto weight = 0x48;
				constexpr auto is_attachment = 0x59;
			} // namespace cconstraint_target

			namespace vphys_xconstraint2_t
			{
				constexpr auto flags = 0x0;
				constexpr auto parent = 0x4;
				constexpr auto child = 0x6;
				constexpr auto params = 0x8;
			} // namespace vphys_xconstraint2_t

			namespace cmodel_config_element_random_pick
			{
				constexpr auto choices = 0x48;
				constexpr auto choice_weights = 0x60;
			} // namespace cmodel_config_element_random_pick

			namespace cbool_anim_parameter
			{
				constexpr auto default_value = 0x60;
			} // namespace cbool_anim_parameter

			namespace blend_item_t
			{
				constexpr auto tags = 0x0;
				constexpr auto child = 0x18;
				constexpr auto h_sequence = 0x28;
				constexpr auto v_pos = 0x2c;
				constexpr auto duration = 0x34;
				constexpr auto use_custom_duration = 0x38;
			} // namespace blend_item_t

			namespace cdamped_value_component_updater
			{
				constexpr auto items = 0x30;
			} // namespace cdamped_value_component_updater

			namespace ccycle_control_update_node
			{
				constexpr auto value_source = 0x68;
				constexpr auto param_index = 0x6c;
			} // namespace ccycle_control_update_node

			namespace canimation_graph_visualizer_line
			{
				constexpr auto v_ws_position_start = 0x40;
				constexpr auto v_ws_position_end = 0x50;
				constexpr auto color = 0x60;
			} // namespace canimation_graph_visualizer_line

			namespace cexpression_action_updater
			{
				constexpr auto h_param = 0x18;
				constexpr auto e_param_type = 0x1a;
				constexpr auto h_script = 0x1c;
			} // namespace cexpression_action_updater

			namespace cchoice_update_node
			{
				constexpr auto children = 0x58;
				constexpr auto weights = 0x70;
				constexpr auto blend_times = 0x88;
				constexpr auto choice_method = 0xa0;
				constexpr auto choice_change_method = 0xa4;
				constexpr auto blend_method = 0xa8;
				constexpr auto blend_time = 0xac;
				constexpr auto cross_fade = 0xb0;
				constexpr auto reset_chosen = 0xb1;
				constexpr auto dont_reset_same_selection = 0xb2;
			} // namespace cchoice_update_node

			namespace cmotion_search_node
			{
				constexpr auto children = 0x0;
				constexpr auto quantizer = 0x18;
				constexpr auto sample_codes = 0x38;
				constexpr auto sample_indices = 0x50;
				constexpr auto selectable_samples = 0x68;
			} // namespace cmotion_search_node

			namespace cmotion_matching_update_node
			{
				constexpr auto data_set = 0x58;
				constexpr auto metrics = 0x78;
				constexpr auto weights = 0x90;
				constexpr auto search_every_tick = 0xe0;
				constexpr auto search_interval = 0xe4;
				constexpr auto search_when_clip_ends = 0xe8;
				constexpr auto search_when_goal_changes = 0xe9;
				constexpr auto blend_curve = 0xec;
				constexpr auto sample_rate = 0xf4;
				constexpr auto blend_time = 0xf8;
				constexpr auto lock_clip_when_waning = 0xfc;
				constexpr auto selection_threshold = 0x100;
				constexpr auto reselection_time_window = 0x104;
				constexpr auto enable_rotation_correction = 0x108;
				constexpr auto goal_assist = 0x109;
				constexpr auto goal_assist_distance = 0x10c;
				constexpr auto goal_assist_tolerance = 0x110;
				constexpr auto distance_scale_damping = 0x118;
				constexpr auto distance_scale_outer_radius = 0x128;
				constexpr auto distance_scale_inner_radius = 0x12c;
				constexpr auto distance_scale_max_scale = 0x130;
				constexpr auto distance_scale_min_scale = 0x134;
				constexpr auto enable_distance_scaling = 0x138;
			} // namespace cmotion_matching_update_node

			namespace perm_model_data_animated_material_attribute_t
			{
				constexpr auto attribute_name = 0x0;
				constexpr auto num_channels = 0x8;
			} // namespace perm_model_data_animated_material_attribute_t

			namespace tag_span_t
			{
				constexpr auto tag_index = 0x0;
				constexpr auto start_cycle = 0x4;
				constexpr auto end_cycle = 0x8;
			} // namespace tag_span_t

			namespace perm_model_info_t
			{
				constexpr auto flags = 0x0;
				constexpr auto v_hull_min = 0x4;
				constexpr auto v_hull_max = 0x10;
				constexpr auto v_view_min = 0x1c;
				constexpr auto v_view_max = 0x28;
				constexpr auto mass = 0x34;
				constexpr auto v_eye_position = 0x38;
				constexpr auto max_eye_deflection = 0x44;
				constexpr auto s_surface_property = 0x48;
				constexpr auto key_value_text = 0x50;
			} // namespace perm_model_info_t

			namespace chit_box
			{
				constexpr auto name = 0x0;
				constexpr auto s_surface_property = 0x8;
				constexpr auto s_bone_name = 0x10;
				constexpr auto v_min_bounds = 0x18;
				constexpr auto v_max_bounds = 0x24;
				constexpr auto shape_radius = 0x30;
				constexpr auto bone_name_hash = 0x34;
				constexpr auto group_id = 0x38;
				constexpr auto shape_type = 0x3c;
				constexpr auto translation_only = 0x3d;
				constexpr auto crc = 0x40;
				constexpr auto c_render_color = 0x44;
				constexpr auto hit_box_index = 0x48;
			} // namespace chit_box

			namespace cfoot_cycle_metric_evaluator
			{
				constexpr auto foot_indices = 0x50;
			} // namespace cfoot_cycle_metric_evaluator

			namespace cmotion_search_db
			{
				constexpr auto root_node = 0x0;
				constexpr auto residual_quantizer = 0x80;
				constexpr auto code_indices = 0xa0;
			} // namespace cmotion_search_db

			namespace cbody_group_setting
			{
				constexpr auto body_group_name = 0x0;
				constexpr auto body_group_option = 0x8;
			} // namespace cbody_group_setting

			namespace csteps_remaining_metric_evaluator
			{
				constexpr auto foot_indices = 0x50;
				constexpr auto min_steps_remaining = 0x68;
			} // namespace csteps_remaining_metric_evaluator

			namespace cmaterial_draw_descriptor
			{
				constexpr auto primitive_type = 0x0;
				constexpr auto base_vertex = 0x4;
				constexpr auto vertex_count = 0x8;
				constexpr auto start_index = 0xc;
				constexpr auto index_count = 0x10;
				constexpr auto uv_density = 0x14;
				constexpr auto v_tint_color = 0x18;
				constexpr auto alpha = 0x24;
				constexpr auto first_meshlet = 0x2c;
				constexpr auto num_meshlets = 0x30;
				constexpr auto index_buffer = 0xb8;
				constexpr auto material = 0xe0;
			} // namespace cmaterial_draw_descriptor

			namespace cfoot_fall_anim_tag
			{
				constexpr auto foot = 0x38;
			} // namespace cfoot_fall_anim_tag

			namespace caim_constraint
			{
				constexpr auto q_aim_offset = 0x70;
				constexpr auto up_type = 0x80;
			} // namespace caim_constraint

			namespace cfoot_adjustment_update_node
			{
				constexpr auto clips = 0x70;
				constexpr auto h_base_pose_cache_handle = 0x88;
				constexpr auto facing_target = 0x8c;
				constexpr auto turn_time_min = 0x90;
				constexpr auto turn_time_max = 0x94;
				constexpr auto step_height_max = 0x98;
				constexpr auto step_height_max_angle = 0x9c;
				constexpr auto reset_child = 0xa0;
				constexpr auto animation_driven = 0xa1;
			} // namespace cfoot_adjustment_update_node

			namespace csolve_iktarget_handle_t
			{
				constexpr auto position_handle = 0x0;
				constexpr auto orientation_handle = 0x2;
			} // namespace csolve_iktarget_handle_t

			namespace cmodel_config_element_user_pick
			{
				constexpr auto choices = 0x48;
			} // namespace cmodel_config_element_user_pick

			namespace cmorph_bundle_data
			{
				constexpr auto uleft_src = 0x0;
				constexpr auto vtop_src = 0x4;
				constexpr auto offsets = 0x8;
				constexpr auto ranges = 0x20;
			} // namespace cmorph_bundle_data

			namespace material_group_t
			{
				constexpr auto name = 0x0;
				constexpr auto materials = 0x8;
			} // namespace material_group_t

			namespace cpath_helper_update_node
			{
				constexpr auto stopping_radius = 0x68;
				constexpr auto stopping_speed_scale = 0x6c;
			} // namespace cpath_helper_update_node

			namespace cmodel_config_element_set_material_group_on_attached_models
			{
				constexpr auto material_group_name = 0x48;
			} // namespace cmodel_config_element_set_material_group_on_attached_models

			namespace cdamped_path_anim_motor_updater
			{
				constexpr auto anticipation_time = 0x2c;
				constexpr auto min_speed_scale = 0x30;
				constexpr auto h_anticipation_pos_param = 0x34;
				constexpr auto h_anticipation_heading_param = 0x36;
				constexpr auto spring_constant = 0x38;
				constexpr auto min_spring_tension = 0x3c;
				constexpr auto max_spring_tension = 0x40;
			} // namespace cdamped_path_anim_motor_updater

			namespace caction_component_updater
			{
				constexpr auto actions = 0x30;
			} // namespace caction_component_updater

			namespace cfoot_cycle_definition
			{
				constexpr auto v_stance_position_ms = 0x0;
				constexpr auto v_midpoint_position_ms = 0xc;
				constexpr auto stance_direction_ms = 0x18;
				constexpr auto v_to_stride_start_pos = 0x1c;
				constexpr auto stance_cycle = 0x28;
				constexpr auto foot_lift_cycle = 0x2c;
				constexpr auto foot_off_cycle = 0x30;
				constexpr auto foot_strike_cycle = 0x34;
				constexpr auto foot_land_cycle = 0x38;
			} // namespace cfoot_cycle_definition

			namespace canim_bone_difference
			{
				constexpr auto name = 0x0;
				constexpr auto parent = 0x10;
				constexpr auto pos_error = 0x20;
				constexpr auto has_rotation = 0x2c;
				constexpr auto has_movement = 0x2d;
			} // namespace canim_bone_difference

			namespace cstop_at_goal_update_node
			{
				constexpr auto outer_radius = 0x6c;
				constexpr auto inner_radius = 0x70;
				constexpr auto max_scale = 0x74;
				constexpr auto min_scale = 0x78;
				constexpr auto damping = 0x80;
			} // namespace cstop_at_goal_update_node

			namespace vphys_xrange_t
			{
				constexpr auto min = 0x0;
				constexpr auto max = 0x4;
			} // namespace vphys_xrange_t

			namespace cseq_s1_seq_desc
			{
				constexpr auto s_name = 0x0;
				constexpr auto flags = 0x10;
				constexpr auto fetch = 0x20;
				constexpr auto local_weightlist = 0x88;
				constexpr auto auto_layer_array = 0x90;
				constexpr auto iklock_array = 0xa8;
				constexpr auto transition = 0xc0;
				constexpr auto sequence_keys = 0xc8;
				constexpr auto legacy_key_value_text = 0xd8;
				constexpr auto activity_array = 0xe8;
				constexpr auto foot_motion = 0x100;
			} // namespace cseq_s1_seq_desc

			namespace ikdemo_capture_settings_t
			{
				constexpr auto parent_bone_name = 0x0;
				constexpr auto e_mode = 0x8;
				constexpr auto ik_chain_name = 0x10;
				constexpr auto one_bone_start = 0x18;
				constexpr auto one_bone_end = 0x20;
			} // namespace ikdemo_capture_settings_t

			namespace cdemo_settings_component_updater
			{
				constexpr auto settings = 0x30;
			} // namespace cdemo_settings_component_updater

			namespace vphys_xaggregate_data_t
			{
				constexpr auto flags = 0x0;
				constexpr auto ref_counter = 0x2;
				constexpr auto bones_hash = 0x8;
				constexpr auto bone_names = 0x20;
				constexpr auto index_names = 0x38;
				constexpr auto index_hash = 0x50;
				constexpr auto bind_pose = 0x68;
				constexpr auto parts = 0x80;
				constexpr auto constraints2 = 0x98;
				constexpr auto joints = 0xb0;
				constexpr auto fe_model_ptr = 0xc8;
				constexpr auto bone_parents = 0xd0;
				constexpr auto surface_property_hashes = 0xe8;
				constexpr auto collision_attributes = 0x100;
				constexpr auto debug_part_names = 0x118;
				constexpr auto embedded_keyvalues = 0x130;
			} // namespace vphys_xaggregate_data_t

			namespace cslope_component_updater
			{
				constexpr auto trace_distance = 0x34;
				constexpr auto h_slope_angle = 0x38;
				constexpr auto h_slope_angle_front = 0x3a;
				constexpr auto h_slope_angle_side = 0x3c;
				constexpr auto h_slope_heading = 0x3e;
				constexpr auto h_slope_normal = 0x40;
				constexpr auto h_slope_normal_world_space = 0x42;
			} // namespace cslope_component_updater

			namespace cmodel_config
			{
				constexpr auto config_name = 0x0;
				constexpr auto elements = 0x8;
				constexpr auto top_level = 0x20;
			} // namespace cmodel_config

			namespace foot_fixed_settings
			{
				constexpr auto trace_settings = 0x0;
				constexpr auto v_foot_base_bind_pose_position_ms = 0x10;
				constexpr auto foot_base_length = 0x20;
				constexpr auto max_rotation_left = 0x24;
				constexpr auto max_rotation_right = 0x28;
				constexpr auto footstep_landed_tag_index = 0x2c;
				constexpr auto enable_tracing = 0x30;
				constexpr auto trace_angle_blend = 0x34;
				constexpr auto disable_tag_index = 0x38;
				constexpr auto foot_index = 0x3c;
			} // namespace foot_fixed_settings

			namespace cmodel_config_element_attached_model
			{
				constexpr auto instance_name = 0x48;
				constexpr auto entity_class = 0x50;
				constexpr auto h_model = 0x58;
				constexpr auto v_offset = 0x60;
				constexpr auto a_ang_offset = 0x6c;
				constexpr auto attachment_name = 0x78;
				constexpr auto local_attachment_offset_name = 0x80;
				constexpr auto attachment_type = 0x88;
				constexpr auto bone_merge_flex = 0x8c;
				constexpr auto user_specified_color = 0x8d;
				constexpr auto user_specified_material_group = 0x8e;
				constexpr auto accept_parent_material_driven_decals = 0x8f;
				constexpr auto bodygroup_on_other_models = 0x90;
				constexpr auto material_group_on_other_models = 0x98;
			} // namespace cmodel_config_element_attached_model

			namespace ctime_remaining_metric_evaluator
			{
				constexpr auto match_by_time_remaining = 0x50;
				constexpr auto max_time_remaining = 0x54;
				constexpr auto filter_by_time_remaining = 0x58;
				constexpr auto min_time_remaining = 0x5c;
			} // namespace ctime_remaining_metric_evaluator

			namespace cstate_node_transition_data
			{
				constexpr auto curve = 0x0;
				constexpr auto blend_duration = 0x8;
				constexpr auto reset_cycle_value = 0x10;
				constexpr auto reset = 0x18;
				constexpr auto reset_cycle_option = 0x18;
			} // namespace cstate_node_transition_data

			namespace vphys_xjoint_t
			{
				constexpr auto type = 0x0;
				constexpr auto body1 = 0x2;
				constexpr auto body2 = 0x4;
				constexpr auto flags = 0x6;
				constexpr auto frame1 = 0x10;
				constexpr auto frame2 = 0x30;
				constexpr auto enable_collision = 0x50;
				constexpr auto enable_linear_limit = 0x51;
				constexpr auto linear_limit = 0x54;
				constexpr auto enable_linear_motor = 0x5c;
				constexpr auto v_linear_target_velocity = 0x60;
				constexpr auto max_force = 0x6c;
				constexpr auto enable_swing_limit = 0x70;
				constexpr auto swing_limit = 0x74;
				constexpr auto enable_twist_limit = 0x7c;
				constexpr auto twist_limit = 0x80;
				constexpr auto enable_angular_motor = 0x88;
				constexpr auto v_angular_target_velocity = 0x8c;
				constexpr auto max_torque = 0x98;
				constexpr auto linear_frequency = 0x9c;
				constexpr auto linear_damping_ratio = 0xa0;
				constexpr auto angular_frequency = 0xa4;
				constexpr auto angular_damping_ratio = 0xa8;
				constexpr auto friction = 0xac;
			} // namespace vphys_xjoint_t

			namespace cmeshlet_descriptor
			{
				constexpr auto packed_aabb = 0x0;
				constexpr auto culling_data = 0x8;
			} // namespace cmeshlet_descriptor

			namespace cattachment
			{
				constexpr auto name = 0x0;
				constexpr auto influence_names_arr = 0x8;
				constexpr auto v_influence_rotations_arr = 0x20;
				constexpr auto v_influence_offsets_arr = 0x50;
				constexpr auto influence_weights_arr = 0x74;
				constexpr auto influence_root_transform_arr = 0x80;
				constexpr auto influences = 0x83;
				constexpr auto ignore_rotation = 0x84;
			} // namespace cattachment

			namespace cseq_pose_setting
			{
				constexpr auto s_pose_parameter = 0x0;
				constexpr auto s_attachment = 0x10;
				constexpr auto s_reference_sequence = 0x20;
				constexpr auto value = 0x30;
				constexpr auto x = 0x34;
				constexpr auto y = 0x35;
				constexpr auto z = 0x36;
				constexpr auto e_type = 0x38;
			} // namespace cseq_pose_setting

			namespace cfoot_pinning_update_node
			{
				constexpr auto pose_op_fixed_data = 0x70;
				constexpr auto e_timing_source = 0xa0;
				constexpr auto params = 0xa8;
				constexpr auto reset_child = 0xc0;
			} // namespace cfoot_pinning_update_node

			namespace cmorph_data
			{
				constexpr auto name = 0x0;
				constexpr auto morph_rect_datas = 0x8;
			} // namespace cmorph_data

			namespace model_bone_flex_driver_t
			{
				constexpr auto bone_name = 0x0;
				constexpr auto bone_name_token = 0x8;
				constexpr auto controls = 0x10;
			} // namespace model_bone_flex_driver_t

			namespace cstate_update_data
			{
				constexpr auto name = 0x0;
				constexpr auto h_script = 0x8;
				constexpr auto transition_indices = 0x10;
				constexpr auto actions = 0x28;
				constexpr auto state_id = 0x40;
				constexpr auto is_start_state = 0x44;
				constexpr auto is_end_state = 0x44;
				constexpr auto is_passthrough = 0x44;
			} // namespace cstate_update_data

			namespace cseq_auto_layer
			{
				constexpr auto local_reference = 0x0;
				constexpr auto local_pose = 0x2;
				constexpr auto flags = 0x4;
				constexpr auto start = 0xc;
				constexpr auto peak = 0x10;
				constexpr auto tail = 0x14;
				constexpr auto end = 0x18;
			} // namespace cseq_auto_layer

			namespace cmodel_config_list
			{
				constexpr auto hide_material_group_in_tools = 0x0;
				constexpr auto hide_render_color_in_tools = 0x1;
				constexpr auto configs = 0x8;
			} // namespace cmodel_config_list

			namespace csingle_frame_update_node
			{
				constexpr auto actions = 0x58;
				constexpr auto h_pose_cache_handle = 0x70;
				constexpr auto h_sequence = 0x74;
				constexpr auto cycle = 0x78;
			} // namespace csingle_frame_update_node

			namespace clook_component_updater
			{
				constexpr auto h_look_heading = 0x34;
				constexpr auto h_look_heading_velocity = 0x36;
				constexpr auto h_look_pitch = 0x38;
				constexpr auto h_look_distance = 0x3a;
				constexpr auto h_look_direction = 0x3c;
				constexpr auto h_look_target = 0x3e;
				constexpr auto h_look_target_world_space = 0x40;
				constexpr auto network_look_target = 0x42;
			} // namespace clook_component_updater

			namespace cmotion_node_blend1_d
			{
				constexpr auto blend_items = 0x28;
				constexpr auto param_index = 0x40;
			} // namespace cmotion_node_blend1_d

			namespace cfollow_attachment_update_node
			{
				constexpr auto op_fixed_data = 0x70;
			} // namespace cfollow_attachment_update_node

			namespace motion_index
			{
				constexpr auto group = 0x0;
				constexpr auto motion = 0x2;
			} // namespace motion_index

			namespace weight_list
			{
				constexpr auto name = 0x0;
				constexpr auto weights = 0x8;
			} // namespace weight_list

			namespace ctwo_bone_ikupdate_node
			{
				constexpr auto op_fixed_data = 0x70;
			} // namespace ctwo_bone_ikupdate_node

			namespace cmotion_graph_update_node
			{
				constexpr auto motion_graph = 0x58;
			} // namespace cmotion_graph_update_node

			namespace canim_encoded_frames
			{
				constexpr auto file_name = 0x0;
				constexpr auto frames = 0x10;
				constexpr auto frames_per_block = 0x14;
				constexpr auto frameblock_array = 0x18;
				constexpr auto usage_differences = 0x30;
			} // namespace canim_encoded_frames

			namespace look_at_bone_t
			{
				constexpr auto index = 0x0;
				constexpr auto weight = 0x4;
			} // namespace look_at_bone_t

			namespace cstance_override_update_node
			{
				constexpr auto foot_stance_info = 0x68;
				constexpr auto stance_source_node = 0x80;
				constexpr auto h_parameter = 0x90;
				constexpr auto e_mode = 0x94;
			} // namespace cstance_override_update_node

			namespace cvector_anim_parameter
			{
				constexpr auto default_value = 0x60;
				constexpr auto interpolate = 0x6c;
			} // namespace cvector_anim_parameter

			namespace canim_graph_debug_replay
			{
				constexpr auto anim_graph_file_name = 0x40;
				constexpr auto frame_list = 0x48;
				constexpr auto start_index = 0x60;
				constexpr auto write_index = 0x64;
				constexpr auto frame_count = 0x68;
			} // namespace canim_graph_debug_replay

			namespace canim_graph_network_settings
			{
				constexpr auto networking_enabled = 0x20;
			} // namespace canim_graph_network_settings

			namespace cseq_cmd_seq_desc
			{
				constexpr auto s_name = 0x0;
				constexpr auto flags = 0x10;
				constexpr auto transition = 0x1c;
				constexpr auto frame_range_sequence = 0x24;
				constexpr auto frame_count = 0x26;
				constexpr auto fps = 0x28;
				constexpr auto sub_cycles = 0x2c;
				constexpr auto num_local_results = 0x2e;
				constexpr auto cmd_layer_array = 0x30;
				constexpr auto event_array = 0x48;
				constexpr auto activity_array = 0x60;
				constexpr auto pose_setting_array = 0x78;
			} // namespace cseq_cmd_seq_desc

			namespace animation_snapshot_base_t
			{
				constexpr auto real_time = 0x0;
				constexpr auto root_to_world = 0x10;
				constexpr auto bones_in_world_space = 0x40;
				constexpr auto bone_setup_mask = 0x48;
				constexpr auto bone_transforms = 0x60;
				constexpr auto flex_controllers = 0x78;
				constexpr auto snapshot_type = 0x90;
				constexpr auto has_decode_dump = 0x94;
				constexpr auto decode_dump = 0x98;
			} // namespace animation_snapshot_base_t

			namespace cmaterial_attribute_anim_tag
			{
				constexpr auto attribute_name = 0x38;
				constexpr auto attribute_type = 0x40;
				constexpr auto value = 0x44;
				constexpr auto color = 0x48;
			} // namespace cmaterial_attribute_anim_tag

			namespace chit_react_update_node
			{
				constexpr auto op_fixed_settings = 0x68;
				constexpr auto trigger_param = 0xb4;
				constexpr auto hit_bone_param = 0xb6;
				constexpr auto hit_offset_param = 0xb8;
				constexpr auto hit_direction_param = 0xba;
				constexpr auto hit_strength_param = 0xbc;
				constexpr auto min_delay_between_hits = 0xc0;
				constexpr auto reset_child = 0xc4;
			} // namespace chit_react_update_node

			namespace cstance_scale_update_node
			{
				constexpr auto h_param = 0x68;
			} // namespace cstance_scale_update_node

			namespace chain_to_solve_data_t
			{
				constexpr auto chain_index = 0x0;
				constexpr auto solver_settings = 0x4;
				constexpr auto target_settings = 0x10;
				constexpr auto debug_setting = 0x38;
				constexpr auto debug_normalized_value = 0x3c;
				constexpr auto v_debug_offset = 0x40;
			} // namespace chain_to_solve_data_t

			namespace stance_info_t
			{
				constexpr auto v_position = 0x0;
				constexpr auto direction = 0xc;
			} // namespace stance_info_t

			namespace perm_model_data_t
			{
				constexpr auto name = 0x0;
				constexpr auto model_info = 0x8;
				constexpr auto ext_parts = 0x60;
				constexpr auto ref_meshes = 0x78;
				constexpr auto ref_mesh_group_masks = 0x90;
				constexpr auto ref_phys_group_masks = 0xa8;
				constexpr auto ref_lodgroup_masks = 0xc0;
				constexpr auto lod_group_switch_distances = 0xd8;
				constexpr auto ref_physics_data = 0xf0;
				constexpr auto ref_physics_hitbox_data = 0x108;
				constexpr auto ref_anim_groups = 0x120;
				constexpr auto ref_sequence_groups = 0x138;
				constexpr auto mesh_groups = 0x150;
				constexpr auto material_groups = 0x168;
				constexpr auto default_mesh_group_mask = 0x180;
				constexpr auto model_skeleton = 0x188;
				constexpr auto remapping_table = 0x230;
				constexpr auto remapping_table_starts = 0x248;
				constexpr auto bone_flex_drivers = 0x260;
				constexpr auto model_config_list_ptr = 0x278;
				constexpr auto body_groups_hidden_in_tools = 0x280;
				constexpr auto ref_anim_include_models = 0x298;
				constexpr auto animated_material_attributes = 0x2b0;
			} // namespace perm_model_data_t

			namespace cseq_synth_anim_desc
			{
				constexpr auto s_name = 0x0;
				constexpr auto flags = 0x10;
				constexpr auto transition = 0x1c;
				constexpr auto local_base_reference = 0x24;
				constexpr auto local_bone_mask = 0x26;
				constexpr auto activity_array = 0x28;
			} // namespace cseq_synth_anim_desc

			namespace cjump_helper_update_node
			{
				constexpr auto h_target_param = 0xa8;
				constexpr auto original_jump_movement = 0xac;
				constexpr auto original_jump_duration = 0xb8;
				constexpr auto jump_start_cycle = 0xbc;
				constexpr auto jump_end_cycle = 0xc0;
				constexpr auto e_correction_method = 0xc4;
				constexpr auto translation_axis_arr = 0xc8;
				constexpr auto scale_speed = 0xcb;
			} // namespace cjump_helper_update_node

			namespace vphys_xcollision_attributes_t
			{
				constexpr auto collision_group = 0x0;
				constexpr auto interact_as = 0x8;
				constexpr auto interact_with = 0x20;
				constexpr auto interact_exclude = 0x38;
				constexpr auto collision_group_string = 0x50;
				constexpr auto interact_as_strings = 0x58;
				constexpr auto interact_with_strings = 0x70;
				constexpr auto interact_exclude_strings = 0x88;
			} // namespace vphys_xcollision_attributes_t

			namespace config_index
			{
				constexpr auto group = 0x0;
				constexpr auto config = 0x2;
			} // namespace config_index

			namespace animation_snapshot_t
			{
				constexpr auto ent_index = 0x110;
				constexpr auto model_name = 0x118;
			} // namespace animation_snapshot_t

			namespace canim_script_manager
			{
				constexpr auto script_info = 0x10;
			} // namespace canim_script_manager

			namespace canim_activity
			{
				constexpr auto name = 0x0;
				constexpr auto activity = 0x10;
				constexpr auto flags = 0x14;
				constexpr auto weight = 0x18;
			} // namespace canim_activity

			namespace cmotion_graph_group
			{
				constexpr auto search_db = 0x0;
				constexpr auto motion_graphs = 0xb8;
				constexpr auto motion_graph_configs = 0xd0;
				constexpr auto sample_to_config = 0xe8;
				constexpr auto h_is_active_script = 0x100;
			} // namespace cmotion_graph_group

			namespace cmotion_graph_config
			{
				constexpr auto param_values_arr = 0x0;
				constexpr auto duration = 0x10;
				constexpr auto motion_index = 0x14;
				constexpr auto sample_start = 0x18;
				constexpr auto sample_count = 0x1c;
			} // namespace cmotion_graph_config

			namespace ccached_pose
			{
				constexpr auto transforms = 0x8;
				constexpr auto morph_weights = 0x20;
				constexpr auto h_sequence = 0x38;
				constexpr auto cycle = 0x3c;
			} // namespace ccached_pose

			namespace sample_code
			{
				constexpr auto sub_code_arr = 0x0;
			} // namespace sample_code

			namespace canim_desc
			{
				constexpr auto name = 0x0;
				constexpr auto flags = 0x10;
				constexpr auto fps = 0x18;
				constexpr auto data = 0x20;
				constexpr auto movement_array = 0xf8;
				constexpr auto event_array = 0x110;
				constexpr auto activity_array = 0x128;
				constexpr auto hierarchy_array = 0x140;
				constexpr auto framestalltime = 0x158;
				constexpr auto vec_root_min = 0x15c;
				constexpr auto vec_root_max = 0x168;
				constexpr auto vec_bone_world_min = 0x178;
				constexpr auto vec_bone_world_max = 0x190;
				constexpr auto sequence_params = 0x1a8;
			} // namespace canim_desc

			namespace cseq_bone_mask_list
			{
				constexpr auto s_name = 0x0;
				constexpr auto local_bone_array = 0x10;
				constexpr auto bone_weight_array = 0x28;
				constexpr auto default_morph_ctrl_weight = 0x40;
				constexpr auto morph_ctrl_weight_array = 0x48;
			} // namespace cseq_bone_mask_list

			namespace anim_node_output_id
			{
				constexpr auto id = 0x0;
			} // namespace anim_node_output_id

			namespace cdirectional_blend_update_node
			{
				constexpr auto h_sequences_arr = 0x5c;
				constexpr auto damping = 0x80;
				constexpr auto blend_value_source = 0x90;
				constexpr auto param_index = 0x94;
				constexpr auto playback_speed = 0x98;
				constexpr auto duration = 0x9c;
				constexpr auto loop = 0xa0;
				constexpr auto lock_blend_on_reset = 0xa1;
			} // namespace cdirectional_blend_update_node

			namespace cint_anim_parameter
			{
				constexpr auto default_value = 0x60;
				constexpr auto min_value = 0x64;
				constexpr auto max_value = 0x68;
			} // namespace cint_anim_parameter

			namespace cfoot_stride
			{
				constexpr auto definition = 0x0;
				constexpr auto trajectories = 0x40;
			} // namespace cfoot_stride

			namespace cscene_object_data
			{
				constexpr auto v_min_bounds = 0x0;
				constexpr auto v_max_bounds = 0xc;
				constexpr auto draw_calls = 0x18;
				constexpr auto draw_bounds = 0x30;
				constexpr auto meshlets = 0x48;
				constexpr auto v_tint_color = 0x60;
			} // namespace cscene_object_data

			namespace csequence_finished_anim_tag
			{
				constexpr auto sequence_name = 0x38;
			} // namespace csequence_finished_anim_tag

			namespace cfloat_anim_parameter
			{
				constexpr auto default_value = 0x60;
				constexpr auto min_value = 0x64;
				constexpr auto max_value = 0x68;
				constexpr auto interpolate = 0x6c;
			} // namespace cfloat_anim_parameter

			namespace cslow_down_on_slopes_update_node
			{
				constexpr auto slow_down_strength = 0x68;
			} // namespace cslow_down_on_slopes_update_node

			namespace canim_frame_block_anim
			{
				constexpr auto start_frame = 0x0;
				constexpr auto end_frame = 0x4;
				constexpr auto segment_index_array = 0x8;
			} // namespace canim_frame_block_anim

			namespace fe_fit_influence_t
			{
				constexpr auto n_vertex_node = 0x0;
				constexpr auto fl_weight = 0x4;
				constexpr auto n_matrix_node = 0x8;
			} // namespace fe_fit_influence_t

			namespace vertex_position_color_t
			{
				constexpr auto v_position = 0x0;
			} // namespace vertex_position_color_t

			namespace four_vectors2d
			{
				constexpr auto x = 0x0;
				constexpr auto y = 0x10;
			} // namespace four_vectors2d

			namespace rn_half_edge_t
			{
				constexpr auto next = 0x0;
				constexpr auto twin = 0x1;
				constexpr auto origin = 0x2;
				constexpr auto face = 0x3;
			} // namespace rn_half_edge_t

			namespace fe_fit_weight_t
			{
				constexpr auto fl_weight = 0x0;
				constexpr auto n_node = 0x4;
				constexpr auto n_dummy = 0x6;
			} // namespace fe_fit_weight_t

			namespace fe_rod_constraint_t
			{
				constexpr auto n_node_arr = 0x0;
				constexpr auto fl_max_dist = 0x4;
				constexpr auto fl_min_dist = 0x8;
				constexpr auto fl_weight0 = 0xc;
				constexpr auto fl_relaxation_factor = 0x10;
			} // namespace fe_rod_constraint_t

			namespace fe_tree_children_t
			{
				constexpr auto n_child_arr = 0x0;
			} // namespace fe_tree_children_t

			namespace rn_shape_desc_t
			{
				constexpr auto collision_attribute_index = 0x0;
				constexpr auto surface_property_index = 0x4;
				constexpr auto user_friendly_name = 0x8;
			} // namespace rn_shape_desc_t

			namespace fe_soft_parent_t
			{
				constexpr auto n_parent = 0x0;
				constexpr auto fl_alpha = 0x4;
			} // namespace fe_soft_parent_t

			namespace fe_tapered_capsule_rigid_t
			{
				constexpr auto v_sphere_arr = 0x0;
				constexpr auto n_node = 0x20;
				constexpr auto n_collision_mask = 0x22;
				constexpr auto n_vertex_map_index = 0x24;
				constexpr auto n_flags = 0x26;
			} // namespace fe_tapered_capsule_rigid_t

			namespace fe_sphere_rigid_t
			{
				constexpr auto v_sphere = 0x0;
				constexpr auto n_node = 0x10;
				constexpr auto n_collision_mask = 0x12;
				constexpr auto n_vertex_map_index = 0x14;
				constexpr auto n_flags = 0x16;
			} // namespace fe_sphere_rigid_t

			namespace constraint_breakableparams_t
			{
				constexpr auto strength = 0x0;
				constexpr auto force_limit = 0x4;
				constexpr auto torque_limit = 0x8;
				constexpr auto body_mass_scale_arr = 0xc;
				constexpr auto is_active = 0x14;
			} // namespace constraint_breakableparams_t

			namespace four_cov_matrices3
			{
				constexpr auto v_diag = 0x0;
				constexpr auto xy = 0x30;
				constexpr auto xz = 0x40;
				constexpr auto yz = 0x50;
			} // namespace four_cov_matrices3

			namespace fe_axial_edge_bend_t
			{
				constexpr auto te = 0x0;
				constexpr auto tv = 0x4;
				constexpr auto fl_dist = 0x8;
				constexpr auto fl_weight_arr = 0xc;
				constexpr auto n_node_arr = 0x1c;
			} // namespace fe_axial_edge_bend_t

			namespace fe_node_wind_base_t
			{
				constexpr auto n_node_x0 = 0x0;
				constexpr auto n_node_x1 = 0x2;
				constexpr auto n_node_y0 = 0x4;
				constexpr auto n_node_y1 = 0x6;
			} // namespace fe_node_wind_base_t

			namespace fe_twist_constraint_t
			{
				constexpr auto n_node_orient = 0x0;
				constexpr auto n_node_end = 0x2;
				constexpr auto fl_twist_relax = 0x4;
				constexpr auto fl_swing_relax = 0x8;
			} // namespace fe_twist_constraint_t

			namespace fe_source_edge_t
			{
				constexpr auto n_node_arr = 0x0;
			} // namespace fe_source_edge_t

			namespace fe_ctrl_os_offset_t
			{
				constexpr auto n_ctrl_parent = 0x0;
				constexpr auto n_ctrl_child = 0x2;
			} // namespace fe_ctrl_os_offset_t

			namespace rn_face_t
			{
				constexpr auto edge = 0x0;
			} // namespace rn_face_t

			namespace dop26_t
			{
				constexpr auto support_arr = 0x0;
			} // namespace dop26_t

			namespace rn_vertex_t
			{
				constexpr auto edge = 0x0;
			} // namespace rn_vertex_t

			namespace cov_matrix3
			{
				constexpr auto v_diag = 0x0;
				constexpr auto xy = 0xc;
				constexpr auto xz = 0x10;
				constexpr auto yz = 0x14;
			} // namespace cov_matrix3

			namespace rn_hull_t
			{
				constexpr auto v_centroid = 0x0;
				constexpr auto max_angular_radius = 0xc;
				constexpr auto bounds = 0x10;
				constexpr auto v_orthographic_areas = 0x28;
				constexpr auto mass_properties = 0x34;
				constexpr auto volume = 0x64;
				constexpr auto vertices = 0x68;
				constexpr auto vertex_positions = 0x80;
				constexpr auto edges = 0x98;
				constexpr auto faces = 0xb0;
				constexpr auto face_planes = 0xc8;
				constexpr auto flags = 0xe0;
				constexpr auto region_svm_ptr = 0xe8;
			} // namespace rn_hull_t

			namespace fe_tri_t
			{
				constexpr auto n_node_arr = 0x0;
				constexpr auto w1 = 0x8;
				constexpr auto w2 = 0xc;
				constexpr auto v1x = 0x10;
				constexpr auto v2 = 0x14;
			} // namespace fe_tri_t

			namespace cfe_vertex_map_build_array
			{
				constexpr auto array = 0x0;
			} // namespace cfe_vertex_map_build_array

			namespace fe_vertex_map_build_t
			{
				constexpr auto vertex_map_name = 0x0;
				constexpr auto name_hash = 0x8;
				constexpr auto color = 0xc;
				constexpr auto volumetric_solve_strength = 0x10;
				constexpr auto scale_source_node = 0x14;
				constexpr auto weights = 0x18;
			} // namespace fe_vertex_map_build_t

			namespace fe_node_base_t
			{
				constexpr auto n_node = 0x0;
				constexpr auto n_dummy_arr = 0x2;
				constexpr auto n_node_x0 = 0x8;
				constexpr auto n_node_x1 = 0xa;
				constexpr auto n_node_y0 = 0xc;
				constexpr auto n_node_y1 = 0xe;
				constexpr auto q_adjust = 0x10;
			} // namespace fe_node_base_t

			namespace fe_ctrl_offset_t
			{
				constexpr auto v_offset = 0x0;
				constexpr auto n_ctrl_parent = 0xc;
				constexpr auto n_ctrl_child = 0xe;
			} // namespace fe_ctrl_offset_t

			namespace fe_morph_layer_depr_t
			{
				constexpr auto name = 0x0;
				constexpr auto name_hash = 0x8;
				constexpr auto nodes = 0x10;
				constexpr auto init_pos = 0x28;
				constexpr auto gravity = 0x40;
				constexpr auto goal_strength = 0x58;
				constexpr auto goal_damping = 0x70;
				constexpr auto flags = 0x88;
			} // namespace fe_morph_layer_depr_t

			namespace fe_box_rigid_t
			{
				constexpr auto tm_frame2 = 0x0;
				constexpr auto n_node = 0x20;
				constexpr auto n_collision_mask = 0x22;
				constexpr auto v_size = 0x24;
				constexpr auto n_vertex_map_index = 0x30;
				constexpr auto n_flags = 0x32;
			} // namespace fe_box_rigid_t

			namespace fe_stiff_hinge_build_t
			{
				constexpr auto fl_max_angle = 0x0;
				constexpr auto fl_strength = 0x4;
				constexpr auto fl_motion_bias_arr = 0x8;
				constexpr auto n_node_arr = 0x14;
			} // namespace fe_stiff_hinge_build_t

			namespace rn_plane_t
			{
				constexpr auto v_normal = 0x0;
				constexpr auto offset = 0xc;
			} // namespace rn_plane_t

			namespace fe_rigid_collider_indices_t
			{
				constexpr auto tapered_capsule_rigid_index = 0x0;
				constexpr auto sphere_rigid_index = 0x2;
				constexpr auto box_rigid_index = 0x4;
				constexpr auto collision_plane_index = 0x6;
			} // namespace fe_rigid_collider_indices_t

			namespace cast_sphere_satparams_t
			{
				constexpr auto v_ray_start = 0x0;
				constexpr auto v_ray_delta = 0xc;
				constexpr auto radius = 0x18;
				constexpr auto max_fraction = 0x1c;
				constexpr auto scale = 0x20;
				constexpr auto hull_ptr = 0x28;
			} // namespace cast_sphere_satparams_t

			namespace fe_kelager_bend2_t
			{
				constexpr auto fl_weight_arr = 0x0;
				constexpr auto fl_height0 = 0xc;
				constexpr auto n_node_arr = 0x10;
				constexpr auto n_reserved = 0x16;
			} // namespace fe_kelager_bend2_t

			namespace fe_simd_tri_t
			{
				constexpr auto n_node_arr = 0x0;
				constexpr auto w1 = 0x30;
				constexpr auto w2 = 0x40;
				constexpr auto v1x = 0x50;
				constexpr auto v2 = 0x60;
			} // namespace fe_simd_tri_t

			namespace fe_spring_integrator_t
			{
				constexpr auto n_node_arr = 0x0;
				constexpr auto fl_spring_rest_length = 0x4;
				constexpr auto fl_spring_constant = 0x8;
				constexpr auto fl_spring_damping = 0xc;
				constexpr auto fl_node_weight0 = 0x10;
			} // namespace fe_spring_integrator_t

			namespace fe_effect_desc_t
			{
				constexpr auto s_name = 0x0;
				constexpr auto n_name_hash = 0x8;
				constexpr auto n_type = 0xc;
				constexpr auto params = 0x10;
			} // namespace fe_effect_desc_t

			namespace fe_weighted_node_t
			{
				constexpr auto n_node = 0x0;
				constexpr auto n_weight = 0x2;
			} // namespace fe_weighted_node_t

			namespace rn_wing_t
			{
				constexpr auto index_arr = 0x0;
			} // namespace rn_wing_t

			namespace fe_quad_t
			{
				constexpr auto n_node_arr = 0x0;
				constexpr auto fl_slack = 0x8;
				constexpr auto v_shape_arr = 0xc;
			} // namespace fe_quad_t

			namespace fe_simd_node_base_t
			{
				constexpr auto n_node_arr = 0x0;
				constexpr auto n_node_x0_arr = 0x8;
				constexpr auto n_node_x1_arr = 0x10;
				constexpr auto n_node_y0_arr = 0x18;
				constexpr auto n_node_y1_arr = 0x20;
				constexpr auto n_dummy_arr = 0x28;
				constexpr auto q_adjust = 0x30;
			} // namespace fe_simd_node_base_t

			namespace fe_simd_spring_integrator_t
			{
				constexpr auto n_node_arr = 0x0;
				constexpr auto fl_spring_rest_length = 0x10;
				constexpr auto fl_spring_constant = 0x20;
				constexpr auto fl_spring_damping = 0x30;
				constexpr auto fl_node_weight0 = 0x40;
			} // namespace fe_simd_spring_integrator_t

			namespace fe_simd_quad_t
			{
				constexpr auto n_node_arr = 0x0;
				constexpr auto f4_slack = 0x20;
				constexpr auto v_shape_arr = 0x30;
				constexpr auto f4_weights_arr = 0xf0;
			} // namespace fe_simd_quad_t

			namespace fe_fit_matrix_t
			{
				constexpr auto bone = 0x0;
				constexpr auto v_center = 0x20;
				constexpr auto n_end = 0x2c;
				constexpr auto n_node = 0x2e;
				constexpr auto n_begin_dynamic = 0x30;
			} // namespace fe_fit_matrix_t

			namespace rn_node_t
			{
				constexpr auto v_min = 0x0;
				constexpr auto children = 0xc;
				constexpr auto v_max = 0x10;
				constexpr auto triangle_offset = 0x1c;
			} // namespace rn_node_t

			namespace fe_world_collision_params_t
			{
				constexpr auto fl_world_friction = 0x0;
				constexpr auto fl_ground_friction = 0x4;
				constexpr auto n_list_begin = 0x8;
				constexpr auto n_list_end = 0xa;
			} // namespace fe_world_collision_params_t

			namespace cregion_svm
			{
				constexpr auto planes = 0x0;
				constexpr auto nodes = 0x18;
			} // namespace cregion_svm

			namespace cfe_jiggle_bone
			{
				constexpr auto flags = 0x0;
				constexpr auto length = 0x4;
				constexpr auto tip_mass = 0x8;
				constexpr auto yaw_stiffness = 0xc;
				constexpr auto yaw_damping = 0x10;
				constexpr auto pitch_stiffness = 0x14;
				constexpr auto pitch_damping = 0x18;
				constexpr auto along_stiffness = 0x1c;
				constexpr auto along_damping = 0x20;
				constexpr auto angle_limit = 0x24;
				constexpr auto min_yaw = 0x28;
				constexpr auto max_yaw = 0x2c;
				constexpr auto yaw_friction = 0x30;
				constexpr auto yaw_bounce = 0x34;
				constexpr auto min_pitch = 0x38;
				constexpr auto max_pitch = 0x3c;
				constexpr auto pitch_friction = 0x40;
				constexpr auto pitch_bounce = 0x44;
				constexpr auto base_mass = 0x48;
				constexpr auto base_stiffness = 0x4c;
				constexpr auto base_damping = 0x50;
				constexpr auto base_min_left = 0x54;
				constexpr auto base_max_left = 0x58;
				constexpr auto base_left_friction = 0x5c;
				constexpr auto base_min_up = 0x60;
				constexpr auto base_max_up = 0x64;
				constexpr auto base_up_friction = 0x68;
				constexpr auto base_min_forward = 0x6c;
				constexpr auto base_max_forward = 0x70;
				constexpr auto base_forward_friction = 0x74;
				constexpr auto radius0 = 0x78;
				constexpr auto radius1 = 0x7c;
				constexpr auto v_point0 = 0x80;
				constexpr auto v_point1 = 0x8c;
				constexpr auto collision_mask = 0x98;
			} // namespace cfe_jiggle_bone

			namespace fe_collision_plane_t
			{
				constexpr auto n_ctrl_parent = 0x0;
				constexpr auto n_child_node = 0x2;
				constexpr auto plane = 0x4;
				constexpr auto fl_strength = 0x14;
			} // namespace fe_collision_plane_t

			namespace fe_node_reverse_offset_t
			{
				constexpr auto v_offset = 0x0;
				constexpr auto n_bone_ctrl = 0xc;
				constexpr auto n_target_node = 0xe;
			} // namespace fe_node_reverse_offset_t

			namespace fe_edge_desc_t
			{
				constexpr auto n_edge_arr = 0x0;
				constexpr auto n_side_arr = 0x4;
				constexpr auto n_virt_elem_arr = 0xc;
			} // namespace fe_edge_desc_t

			namespace fe_anim_stray_radius_t
			{
				constexpr auto n_node_arr = 0x0;
				constexpr auto fl_max_dist = 0x4;
				constexpr auto fl_relaxation_factor = 0x8;
			} // namespace fe_anim_stray_radius_t

			namespace fe_build_tapered_capsule_rigid_t
			{
				constexpr auto priority = 0x30;
				constexpr auto vertex_map_hash = 0x34;
			} // namespace fe_build_tapered_capsule_rigid_t

			namespace fe_vertex_map_desc_t
			{
				constexpr auto s_name = 0x0;
				constexpr auto n_name_hash = 0x8;
				constexpr auto n_color = 0xc;
				constexpr auto n_flags = 0x10;
				constexpr auto n_vertex_base = 0x14;
				constexpr auto n_vertex_count = 0x16;
				constexpr auto n_map_offset = 0x18;
				constexpr auto n_node_list_offset = 0x1c;
				constexpr auto v_center_of_mass = 0x20;
				constexpr auto fl_volumetric_solve_strength = 0x2c;
				constexpr auto n_scale_source_node = 0x30;
				constexpr auto n_node_list_count = 0x32;
			} // namespace fe_vertex_map_desc_t

			namespace fe_ctrl_soft_offset_t
			{
				constexpr auto n_ctrl_parent = 0x0;
				constexpr auto n_ctrl_child = 0x2;
				constexpr auto v_offset = 0x4;
				constexpr auto fl_alpha = 0x10;
			} // namespace fe_ctrl_soft_offset_t

			namespace cfe_morph_layer
			{
				constexpr auto name = 0x0;
				constexpr auto name_hash = 0x8;
				constexpr auto nodes = 0x10;
				constexpr auto init_pos = 0x28;
				constexpr auto gravity = 0x40;
				constexpr auto goal_strength = 0x58;
				constexpr auto goal_damping = 0x70;
			} // namespace cfe_morph_layer

			namespace rn_blend_vertex_t
			{
				constexpr auto weight0 = 0x0;
				constexpr auto index0 = 0x2;
				constexpr auto weight1 = 0x4;
				constexpr auto index1 = 0x6;
				constexpr auto weight2 = 0x8;
				constexpr auto index2 = 0xa;
				constexpr auto flags = 0xc;
				constexpr auto target_index = 0xe;
			} // namespace rn_blend_vertex_t

			namespace vertex_position_normal_t
			{
				constexpr auto v_position = 0x0;
				constexpr auto v_normal = 0xc;
			} // namespace vertex_position_normal_t

			namespace rn_mesh_t
			{
				constexpr auto v_min = 0x0;
				constexpr auto v_max = 0xc;
				constexpr auto nodes = 0x18;
				constexpr auto vertices = 0x30;
				constexpr auto triangles = 0x48;
				constexpr auto wings = 0x60;
				constexpr auto materials = 0x78;
				constexpr auto v_orthographic_areas = 0x90;
				constexpr auto flags = 0x9c;
				constexpr auto debug_flags = 0xa0;
			} // namespace rn_mesh_t

			namespace fe_follow_node_t
			{
				constexpr auto n_parent_node = 0x0;
				constexpr auto n_child_node = 0x2;
				constexpr auto fl_weight = 0x4;
			} // namespace fe_follow_node_t

			namespace old_fe_edge_t
			{
				constexpr auto k_arr = 0x0;
				constexpr auto inv_a = 0xc;
				constexpr auto t = 0x10;
				constexpr auto fl_theta_relaxed = 0x14;
				constexpr auto fl_theta_factor = 0x18;
				constexpr auto c01 = 0x1c;
				constexpr auto c02 = 0x20;
				constexpr auto c03 = 0x24;
				constexpr auto c04 = 0x28;
				constexpr auto fl_axial_model_dist = 0x2c;
				constexpr auto fl_axial_model_weights_arr = 0x30;
				constexpr auto node_arr = 0x40;
			} // namespace old_fe_edge_t

			namespace rn_body_desc_t
			{
				constexpr auto s_debug_name = 0x0;
				constexpr auto v_position = 0x8;
				constexpr auto q_orientation = 0x14;
				constexpr auto v_linear_velocity = 0x24;
				constexpr auto v_angular_velocity = 0x30;
				constexpr auto v_local_mass_center = 0x3c;
				constexpr auto local_inertia_inv_arr = 0x48;
				constexpr auto mass_inv = 0x6c;
				constexpr auto game_mass = 0x70;
				constexpr auto inertia_scale_inv = 0x74;
				constexpr auto linear_damping = 0x78;
				constexpr auto angular_damping = 0x7c;
				constexpr auto linear_drag = 0x80;
				constexpr auto angular_drag = 0x84;
				constexpr auto linear_buoyancy_drag = 0x88;
				constexpr auto angular_buoyancy_drag = 0x8c;
				constexpr auto v_last_awake_force_accum = 0x90;
				constexpr auto v_last_awake_torque_accum = 0x9c;
				constexpr auto buoyancy_factor = 0xa8;
				constexpr auto gravity_scale = 0xac;
				constexpr auto time_scale = 0xb0;
				constexpr auto body_type = 0xb4;
				constexpr auto game_index = 0xb8;
				constexpr auto game_flags = 0xbc;
				constexpr auto min_velocity_iterations = 0xc0;
				constexpr auto min_position_iterations = 0xc1;
				constexpr auto mass_priority = 0xc2;
				constexpr auto enabled = 0xc3;
				constexpr auto sleeping = 0xc4;
				constexpr auto is_continuous_enabled = 0xc5;
				constexpr auto drag_enabled = 0xc6;
				constexpr auto buoyancy_drag_enabled = 0xc7;
				constexpr auto gravity_disabled = 0xc8;
				constexpr auto speculative_enabled = 0xc9;
				constexpr auto has_shadow_controller = 0xca;
			} // namespace rn_body_desc_t

			namespace cfe_named_jiggle_bone
			{
				constexpr auto str_parent_bone = 0x0;
				constexpr auto transform = 0x10;
				constexpr auto jiggle_parent = 0x30;
				constexpr auto jiggle_bone = 0x34;
			} // namespace cfe_named_jiggle_bone

			namespace rn_capsule_t
			{
				constexpr auto v_center_arr = 0x0;
				constexpr auto radius = 0x18;
			} // namespace rn_capsule_t

			namespace fe_node_integrator_t
			{
				constexpr auto fl_point_damping = 0x0;
				constexpr auto fl_animation_force_attraction = 0x4;
				constexpr auto fl_animation_vertex_attraction = 0x8;
				constexpr auto fl_gravity = 0xc;
			} // namespace fe_node_integrator_t

			namespace fe_proxy_vertex_map_t
			{
				constexpr auto name = 0x0;
				constexpr auto weight = 0x8;
			} // namespace fe_proxy_vertex_map_t

			namespace rn_triangle_t
			{
				constexpr auto index_arr = 0x0;
			} // namespace rn_triangle_t

			namespace fe_simd_anim_stray_radius_t
			{
				constexpr auto n_node_arr = 0x0;
				constexpr auto fl_max_dist = 0x10;
				constexpr auto fl_relaxation_factor = 0x20;
			} // namespace fe_simd_anim_stray_radius_t

			namespace fe_build_sphere_rigid_t
			{
				constexpr auto priority = 0x20;
				constexpr auto vertex_map_hash = 0x24;
			} // namespace fe_build_sphere_rigid_t

			namespace rn_sphere_t
			{
				constexpr auto v_center = 0x0;
				constexpr auto radius = 0xc;
			} // namespace rn_sphere_t

			namespace constraint_axislimit_t
			{
				constexpr auto fl_min_rotation = 0x0;
				constexpr auto fl_max_rotation = 0x4;
				constexpr auto fl_motor_target_ang_speed = 0x8;
				constexpr auto fl_motor_max_torque = 0xc;
			} // namespace constraint_axislimit_t

			namespace fe_simd_rod_constraint_t
			{
				constexpr auto n_node_arr = 0x0;
				constexpr auto f4_max_dist = 0x10;
				constexpr auto f4_min_dist = 0x20;
				constexpr auto f4_weight0 = 0x30;
				constexpr auto f4_relaxation_factor = 0x40;
			} // namespace fe_simd_rod_constraint_t

			namespace constraint_hingeparams_t
			{
				constexpr auto world_position = 0x0;
				constexpr auto world_axis_direction = 0xc;
				constexpr auto hinge_axis = 0x18;
				constexpr auto constraint = 0x28;
			} // namespace constraint_hingeparams_t

			namespace fe_tapered_capsule_stretch_t
			{
				constexpr auto n_node_arr = 0x0;
				constexpr auto n_collision_mask = 0x4;
				constexpr auto n_dummy = 0x6;
				constexpr auto fl_radius_arr = 0x8;
			} // namespace fe_tapered_capsule_stretch_t

			namespace fe_band_bend_limit_t
			{
				constexpr auto fl_dist_min = 0x0;
				constexpr auto fl_dist_max = 0x4;
				constexpr auto n_node_arr = 0x8;
			} // namespace fe_band_bend_limit_t

			namespace cfe_indexed_jiggle_bone
			{
				constexpr auto node = 0x0;
				constexpr auto jiggle_parent = 0x4;
				constexpr auto jiggle_bone = 0x8;
			} // namespace cfe_indexed_jiggle_bone

			namespace fe_build_box_rigid_t
			{
				constexpr auto priority = 0x40;
				constexpr auto vertex_map_hash = 0x44;
			} // namespace fe_build_box_rigid_t

			namespace vphysics_save_cphysicsbody_t
			{
				constexpr auto old_pointer = 0xd0;
			} // namespace vphysics_save_cphysicsbody_t

			namespace phys_fe_model_desc_t
			{
				constexpr auto ctrl_hash = 0x0;
				constexpr auto ctrl_name = 0x18;
				constexpr auto static_node_flags = 0x30;
				constexpr auto dynamic_node_flags = 0x34;
				constexpr auto local_force = 0x38;
				constexpr auto local_rotation = 0x3c;
				constexpr auto node_count = 0x40;
				constexpr auto static_nodes = 0x42;
				constexpr auto rot_lock_static_nodes = 0x44;
				constexpr auto first_position_driven_node = 0x46;
				constexpr auto simd_tri_count1 = 0x48;
				constexpr auto simd_tri_count2 = 0x4a;
				constexpr auto simd_quad_count1 = 0x4c;
				constexpr auto simd_quad_count2 = 0x4e;
				constexpr auto quad_count1 = 0x50;
				constexpr auto quad_count2 = 0x52;
				constexpr auto tree_depth = 0x54;
				constexpr auto node_base_jigglebone_depends_count = 0x56;
				constexpr auto rope_count = 0x58;
				constexpr auto ropes = 0x60;
				constexpr auto node_bases = 0x78;
				constexpr auto simd_node_bases = 0x90;
				constexpr auto quads = 0xa8;
				constexpr auto simd_quads = 0xc0;
				constexpr auto simd_tris = 0xd8;
				constexpr auto simd_rods = 0xf0;
				constexpr auto init_pose = 0x108;
				constexpr auto rods = 0x120;
				constexpr auto twists = 0x138;
				constexpr auto axial_edges = 0x150;
				constexpr auto node_inv_masses = 0x168;
				constexpr auto ctrl_offsets = 0x180;
				constexpr auto ctrl_os_offsets = 0x198;
				constexpr auto follow_nodes = 0x1b0;
				constexpr auto collision_planes = 0x1c8;
				constexpr auto node_integrator = 0x1e0;
				constexpr auto spring_integrator = 0x1f8;
				constexpr auto simd_spring_integrator = 0x210;
				constexpr auto world_collision_params = 0x228;
				constexpr auto legacy_stretch_force = 0x240;
				constexpr auto node_collision_radii = 0x258;
				constexpr auto dyn_node_friction = 0x270;
				constexpr auto local_rotation_1 = 0x288;
				constexpr auto local_force_1 = 0x2a0;
				constexpr auto tapered_capsule_stretches = 0x2b8;
				constexpr auto tapered_capsule_rigids = 0x2d0;
				constexpr auto sphere_rigids = 0x2e8;
				constexpr auto world_collision_nodes = 0x300;
				constexpr auto tree_parents = 0x318;
				constexpr auto tree_collision_masks = 0x330;
				constexpr auto tree_children = 0x348;
				constexpr auto free_nodes = 0x360;
				constexpr auto fit_matrices = 0x378;
				constexpr auto fit_weights = 0x390;
				constexpr auto reverse_offsets = 0x3a8;
				constexpr auto anim_stray_radii = 0x3c0;
				constexpr auto simd_anim_stray_radii = 0x3d8;
				constexpr auto kelager_bends = 0x3f0;
				constexpr auto ctrl_soft_offsets = 0x408;
				constexpr auto jiggle_bones = 0x420;
				constexpr auto source_elems = 0x438;
				constexpr auto goal_damped_spring_integrators = 0x450;
				constexpr auto tris = 0x468;
				constexpr auto tri_count1 = 0x480;
				constexpr auto tri_count2 = 0x482;
				constexpr auto reserved_uint8 = 0x484;
				constexpr auto extra_pressure_iterations = 0x485;
				constexpr auto extra_goal_iterations = 0x486;
				constexpr auto extra_iterations = 0x487;
				constexpr auto box_rigids = 0x488;
				constexpr auto dyn_node_vertex_set = 0x4a0;
				constexpr auto vertex_set_names = 0x4b8;
				constexpr auto rigid_collider_priorities = 0x4d0;
				constexpr auto morph_layers = 0x4e8;
				constexpr auto morph_set_data = 0x500;
				constexpr auto vertex_maps = 0x518;
				constexpr auto vertex_map_values = 0x530;
				constexpr auto effects = 0x548;
				constexpr auto lock_to_parent = 0x560;
				constexpr auto lock_to_goal = 0x578;
				constexpr auto dyn_node_wind_bases = 0x590;
				constexpr auto internal_pressure = 0x5a8;
				constexpr auto default_time_dilation = 0x5ac;
				constexpr auto windage = 0x5b0;
				constexpr auto wind_drag = 0x5b4;
				constexpr auto default_surface_stretch = 0x5b8;
				constexpr auto default_thread_stretch = 0x5bc;
				constexpr auto default_gravity_scale = 0x5c0;
				constexpr auto default_vel_air_drag = 0x5c4;
				constexpr auto default_exp_air_drag = 0x5c8;
				constexpr auto default_vel_quad_air_drag = 0x5cc;
				constexpr auto default_exp_quad_air_drag = 0x5d0;
				constexpr auto rod_velocity_smooth_rate = 0x5d4;
				constexpr auto quad_velocity_smooth_rate = 0x5d8;
				constexpr auto add_world_collision_radius = 0x5dc;
				constexpr auto default_volumetric_solve_amount = 0x5e0;
				constexpr auto rod_velocity_smooth_iterations = 0x5e4;
				constexpr auto quad_velocity_smooth_iterations = 0x5e6;
			} // namespace phys_fe_model_desc_t

			namespace rn_mesh_desc_t
			{
				constexpr auto mesh = 0x10;
			} // namespace rn_mesh_desc_t

			namespace rn_sphere_desc_t
			{
				constexpr auto sphere = 0x10;
			} // namespace rn_sphere_desc_t

			namespace rn_capsule_desc_t
			{
				constexpr auto capsule = 0x10;
			} // namespace rn_capsule_desc_t

			namespace rn_softbody_capsule_t
			{
				constexpr auto v_center_arr = 0x0;
				constexpr auto radius = 0x18;
				constexpr auto particle_arr = 0x1c;
			} // namespace rn_softbody_capsule_t

			namespace rn_hull_desc_t
			{
				constexpr auto hull = 0x10;
			} // namespace rn_hull_desc_t

			namespace rn_softbody_particle_t
			{
				constexpr auto mass_inv = 0x0;
			} // namespace rn_softbody_particle_t

			namespace rn_softbody_spring_t
			{
				constexpr auto particle_arr = 0x0;
				constexpr auto length = 0x4;
			} // namespace rn_softbody_spring_t

			namespace vmix_dynamics_desc_t
			{
				constexpr auto fldb_gain = 0x0;
				constexpr auto fldb_noise_gate_threshold = 0x4;
				constexpr auto fldb_compression_threshold = 0x8;
				constexpr auto fldb_limiter_threshold = 0xc;
				constexpr auto fldb_knee_width = 0x10;
				constexpr auto ratio = 0x14;
				constexpr auto limiter_ratio = 0x18;
				constexpr auto attack_time_ms = 0x1c;
				constexpr auto release_time_ms = 0x20;
				constexpr auto rmstime_ms = 0x24;
				constexpr auto wet_mix = 0x28;
				constexpr auto peak_mode = 0x2c;
			} // namespace vmix_dynamics_desc_t

			namespace vmix_osc_desc_t
			{
				constexpr auto osc_type = 0x0;
				constexpr auto freq = 0x4;
				constexpr auto phase = 0x8;
			} // namespace vmix_osc_desc_t

			namespace vmix_filter_desc_t
			{
				constexpr auto filter_type = 0x0;
				constexpr auto filter_slope = 0x2;
				constexpr auto enabled = 0x3;
				constexpr auto fldb_gain = 0x4;
				constexpr auto cutoff_freq = 0x8;
				constexpr auto q = 0xc;
			} // namespace vmix_filter_desc_t

			namespace vmix_utility_desc_t
			{
				constexpr auto op = 0x0;
				constexpr auto input_pan = 0x4;
				constexpr auto output_balance = 0x8;
				constexpr auto fldb_output_gain = 0xc;
				constexpr auto bass_mono = 0x10;
				constexpr auto bass_freq = 0x14;
			} // namespace vmix_utility_desc_t

			namespace vmix_vocoder_desc_t
			{
				constexpr auto band_count = 0x0;
				constexpr auto bandwidth = 0x4;
				constexpr auto fld_bmod_gain = 0x8;
				constexpr auto freq_range_start = 0xc;
				constexpr auto freq_range_end = 0x10;
				constexpr auto fld_bunvoiced_gain = 0x14;
				constexpr auto attack_time_ms = 0x18;
				constexpr auto release_time_ms = 0x1c;
				constexpr auto debug_band = 0x20;
				constexpr auto peak_mode = 0x24;
			} // namespace vmix_vocoder_desc_t

			namespace csos_group_action_schema
			{
				constexpr auto name = 0x8;
				constexpr auto action_type = 0x10;
				constexpr auto action_instance_type = 0x14;
			} // namespace csos_group_action_schema

			namespace vmix_effect_chain_desc_t
			{
				constexpr auto crossfade_time = 0x0;
			} // namespace vmix_effect_chain_desc_t

			namespace vmix_dynamics_band_t
			{
				constexpr auto fldb_gain_input = 0x0;
				constexpr auto fldb_gain_output = 0x4;
				constexpr auto fldb_threshold_below = 0x8;
				constexpr auto fldb_threshold_above = 0xc;
				constexpr auto ratio_below = 0x10;
				constexpr auto ratio_above = 0x14;
				constexpr auto attack_time_ms = 0x18;
				constexpr auto release_time_ms = 0x1c;
				constexpr auto enable = 0x20;
				constexpr auto solo = 0x21;
			} // namespace vmix_dynamics_band_t

			namespace vmix_auto_filter_desc_t
			{
				constexpr auto envelope_amount = 0x0;
				constexpr auto attack_time_ms = 0x4;
				constexpr auto release_time_ms = 0x8;
				constexpr auto filter = 0xc;
				constexpr auto lfoamount = 0x1c;
				constexpr auto lforate = 0x20;
				constexpr auto phase = 0x24;
				constexpr auto lfoshape = 0x28;
			} // namespace vmix_auto_filter_desc_t

			namespace csos_group_action_limit_schema
			{
				constexpr auto max_count = 0x18;
				constexpr auto stop_type = 0x1c;
				constexpr auto sort_type = 0x20;
			} // namespace csos_group_action_limit_schema

			namespace vmix_envelope_desc_t
			{
				constexpr auto attack_time_ms = 0x0;
				constexpr auto hold_time_ms = 0x4;
				constexpr auto release_time_ms = 0x8;
			} // namespace vmix_envelope_desc_t

			namespace vmix_shaper_desc_t
			{
				constexpr auto shape = 0x0;
				constexpr auto fldb_drive = 0x4;
				constexpr auto fldb_output_gain = 0x8;
				constexpr auto wet_mix = 0xc;
				constexpr auto oversample_factor = 0x10;
			} // namespace vmix_shaper_desc_t

			namespace vmix_dynamics_compressor_desc_t
			{
				constexpr auto fldb_output_gain = 0x0;
				constexpr auto fldb_compression_threshold = 0x4;
				constexpr auto fldb_knee_width = 0x8;
				constexpr auto compression_ratio = 0xc;
				constexpr auto attack_time_ms = 0x10;
				constexpr auto release_time_ms = 0x14;
				constexpr auto rmstime_ms = 0x18;
				constexpr auto wet_mix = 0x1c;
				constexpr auto peak_mode = 0x20;
			} // namespace vmix_dynamics_compressor_desc_t

			namespace vmix_diffusor_desc_t
			{
				constexpr auto size = 0x0;
				constexpr auto complexity = 0x4;
				constexpr auto feedback = 0x8;
				constexpr auto output_gain = 0xc;
			} // namespace vmix_diffusor_desc_t

			namespace vmix_plateverb_desc_t
			{
				constexpr auto prefilter = 0x0;
				constexpr auto input_diffusion1 = 0x4;
				constexpr auto input_diffusion2 = 0x8;
				constexpr auto decay = 0xc;
				constexpr auto damp = 0x10;
				constexpr auto feedback_diffusion1 = 0x14;
				constexpr auto feedback_diffusion2 = 0x18;
			} // namespace vmix_plateverb_desc_t

			namespace sos_edit_item_info_t
			{
				constexpr auto item_type = 0x0;
				constexpr auto item_name = 0x8;
				constexpr auto item_type_name = 0x10;
				constexpr auto item_kvstring = 0x20;
				constexpr auto item_pos = 0x28;
			} // namespace sos_edit_item_info_t

			namespace csos_group_branch_pattern
			{
				constexpr auto match_event_name = 0x8;
				constexpr auto match_event_sub_string = 0x9;
				constexpr auto match_ent_index = 0xa;
				constexpr auto match_opvar = 0xb;
			} // namespace csos_group_branch_pattern

			namespace csos_sound_event_group_list_schema
			{
				constexpr auto group_list = 0x0;
			} // namespace csos_sound_event_group_list_schema

			namespace vmix_convolution_desc_t
			{
				constexpr auto fldb_gain = 0x0;
				constexpr auto pre_delay_ms = 0x4;
				constexpr auto wet_mix = 0x8;
				constexpr auto fldb_low = 0xc;
				constexpr auto fldb_mid = 0x10;
				constexpr auto fldb_high = 0x14;
				constexpr auto low_cutoff_freq = 0x18;
				constexpr auto high_cutoff_freq = 0x1c;
			} // namespace vmix_convolution_desc_t

			namespace vmix_pitch_shift_desc_t
			{
				constexpr auto grain_sample_count = 0x0;
				constexpr auto pitch_shift = 0x4;
				constexpr auto quality = 0x8;
				constexpr auto proc_type = 0xc;
			} // namespace vmix_pitch_shift_desc_t

			namespace csound_event_meta_data
			{
				constexpr auto sound_event_vmix = 0x0;
			} // namespace csound_event_meta_data

			namespace vmix_eq8_desc_t
			{
				constexpr auto stages_arr = 0x0;
			} // namespace vmix_eq8_desc_t

			namespace vmix_delay_desc_t
			{
				constexpr auto feedback_filter = 0x0;
				constexpr auto enable_filter = 0x10;
				constexpr auto delay = 0x14;
				constexpr auto direct_gain = 0x18;
				constexpr auto delay_gain = 0x1c;
				constexpr auto feedback_gain = 0x20;
				constexpr auto width = 0x24;
			} // namespace vmix_delay_desc_t

			namespace cdsp_preset_modifier_list
			{
				constexpr auto dsp_name = 0x0;
				constexpr auto modifiers = 0x8;
			} // namespace cdsp_preset_modifier_list

			namespace cdspmixgroup_modifier
			{
				constexpr auto mixgroup = 0x0;
				constexpr auto modifier = 0x8;
				constexpr auto modifier_min = 0xc;
				constexpr auto source_modifier = 0x10;
				constexpr auto source_modifier_min = 0x14;
				constexpr auto listener_reverb_modifier_when_source_reverb_is_active = 0x18;
			} // namespace cdspmixgroup_modifier

			namespace vmix_dynamics3_band_desc_t
			{
				constexpr auto fldb_gain_output = 0x0;
				constexpr auto rmstime_ms = 0x4;
				constexpr auto fldb_knee_width = 0x8;
				constexpr auto depth = 0xc;
				constexpr auto wet_mix = 0x10;
				constexpr auto time_scale = 0x14;
				constexpr auto low_cutoff_freq = 0x18;
				constexpr auto high_cutoff_freq = 0x1c;
				constexpr auto peak_mode = 0x20;
				constexpr auto band_desc_arr = 0x24;
			} // namespace vmix_dynamics3_band_desc_t

			namespace csos_group_match_pattern
			{
				constexpr auto match_sound_event_name = 0x10;
				constexpr auto match_sound_event_sub_string = 0x18;
				constexpr auto ent_index = 0x20;
				constexpr auto opvar = 0x24;
			} // namespace csos_group_match_pattern

			namespace csos_sound_event_group_schema
			{
				constexpr auto name = 0x0;
				constexpr auto type = 0x8;
				constexpr auto is_blocking = 0xc;
				constexpr auto block_max_count = 0x10;
				constexpr auto invert_match = 0x14;
				constexpr auto match_pattern = 0x18;
				constexpr auto branch_pattern = 0x40;
				constexpr auto v_actions_arr_ptr = 0xb0;
			} // namespace csos_sound_event_group_schema

			namespace csos_group_action_time_limit_schema
			{
				constexpr auto max_duration = 0x18;
			} // namespace csos_group_action_time_limit_schema

			namespace vmix_boxverb_desc_t
			{
				constexpr auto size_max = 0x0;
				constexpr auto size_min = 0x4;
				constexpr auto complexity = 0x8;
				constexpr auto diffusion = 0xc;
				constexpr auto mod_depth = 0x10;
				constexpr auto mod_rate = 0x14;
				constexpr auto parallel = 0x18;
				constexpr auto filter_type = 0x1c;
				constexpr auto width = 0x2c;
				constexpr auto height = 0x30;
				constexpr auto depth = 0x34;
				constexpr auto feedback_scale = 0x38;
				constexpr auto feedback_width = 0x3c;
				constexpr auto feedback_height = 0x40;
				constexpr auto feedback_depth = 0x44;
				constexpr auto output_gain = 0x48;
				constexpr auto taps = 0x4c;
			} // namespace vmix_boxverb_desc_t

			namespace vmix_mod_delay_desc_t
			{
				constexpr auto feedback_filter = 0x0;
				constexpr auto phase_invert = 0x10;
				constexpr auto glide_time = 0x14;
				constexpr auto delay = 0x18;
				constexpr auto output_gain = 0x1c;
				constexpr auto feedback_gain = 0x20;
				constexpr auto mod_rate = 0x24;
				constexpr auto mod_depth = 0x28;
				constexpr auto apply_antialiasing = 0x2c;
			} // namespace vmix_mod_delay_desc_t

			namespace selected_edit_item_info_t
			{
				constexpr auto edit_items = 0x0;
			} // namespace selected_edit_item_info_t

			namespace vmix_panner_desc_t
			{
				constexpr auto type = 0x0;
				constexpr auto strength = 0x4;
			} // namespace vmix_panner_desc_t

			namespace vmix_subgraph_switch_desc_t
			{
				constexpr auto interpolation_mode = 0x0;
				constexpr auto only_tails_on_fade_out = 0x4;
				constexpr auto interpolation_time = 0x8;
			} // namespace vmix_subgraph_switch_desc_t

			namespace csos_group_action_set_soundevent_parameter_schema
			{
				constexpr auto max_count = 0x18;
				constexpr auto min_value = 0x1c;
				constexpr auto max_value = 0x20;
				constexpr auto opvar_name = 0x28;
				constexpr auto sort_type = 0x30;
			} // namespace csos_group_action_set_soundevent_parameter_schema

			namespace cdsppreset_mixgroup_modifier_table
			{
				constexpr auto table = 0x0;
			} // namespace cdsppreset_mixgroup_modifier_table

			namespace vmix_freeverb_desc_t
			{
				constexpr auto room_size = 0x0;
				constexpr auto damp = 0x4;
				constexpr auto width = 0x8;
				constexpr auto late_reflections = 0xc;
			} // namespace vmix_freeverb_desc_t

			namespace cssdsmsg_end_frame
			{
				constexpr auto views = 0x0;
			} // namespace cssdsmsg_end_frame

			namespace scene_view_id_t
			{
				constexpr auto view_id = 0x0;
				constexpr auto frame_count = 0x8;
			} // namespace scene_view_id_t

			namespace cssdsmsg_view_target_list
			{
				constexpr auto view_id = 0x0;
				constexpr auto view_name = 0x10;
				constexpr auto targets = 0x18;
			} // namespace cssdsmsg_view_target_list

			namespace cssdsmsg_layer_base
			{
				constexpr auto view_id = 0x0;
				constexpr auto view_name = 0x10;
				constexpr auto layer_index = 0x18;
				constexpr auto layer_id = 0x20;
				constexpr auto layer_name = 0x28;
				constexpr auto display_text = 0x30;
			} // namespace cssdsmsg_layer_base

			namespace cssdsend_frame_view_info
			{
				constexpr auto view_id = 0x0;
				constexpr auto view_name = 0x8;
			} // namespace cssdsend_frame_view_info

			namespace cssdsmsg_view_render
			{
				constexpr auto view_id = 0x0;
				constexpr auto view_name = 0x10;
			} // namespace cssdsmsg_view_render

			namespace cssdsmsg_view_target
			{
				constexpr auto name = 0x0;
				constexpr auto texture_id = 0x8;
				constexpr auto width = 0x10;
				constexpr auto height = 0x14;
				constexpr auto requested_width = 0x18;
				constexpr auto requested_height = 0x1c;
				constexpr auto num_mip_levels = 0x20;
				constexpr auto depth = 0x24;
				constexpr auto multisample_num_samples = 0x28;
				constexpr auto format = 0x2c;
			} // namespace cssdsmsg_view_target

			namespace voxel_vis_block_offset_t
			{
				constexpr auto offset = 0x0;
				constexpr auto element_count = 0x4;
			} // namespace voxel_vis_block_offset_t

			namespace entity_key_value_data_t
			{
				constexpr auto connections = 0x8;
				constexpr auto key_values_data = 0x20;
			} // namespace entity_key_value_data_t

			namespace base_scene_object_override_t
			{
				constexpr auto scene_object_index = 0x0;
			} // namespace base_scene_object_override_t

			namespace info_overlay_data_t
			{
				constexpr auto transform = 0x0;
				constexpr auto width = 0x30;
				constexpr auto height = 0x34;
				constexpr auto depth = 0x38;
				constexpr auto v_uvstart = 0x3c;
				constexpr auto v_uvend = 0x44;
				constexpr auto material = 0x50;
				constexpr auto render_order = 0x58;
				constexpr auto v_tint_color = 0x5c;
				constexpr auto sequence_override = 0x6c;
			} // namespace info_overlay_data_t

			namespace baked_lighting_info_t
			{
				constexpr auto lightmap_version_number = 0x0;
				constexpr auto lightmap_game_version_number = 0x4;
				constexpr auto v_lightmap_uv_scale = 0x8;
				constexpr auto has_lightmaps = 0x10;
				constexpr auto light_maps = 0x18;
			} // namespace baked_lighting_info_t

			namespace aggregate_mesh_info_t
			{
				constexpr auto vis_cluster_member_offset = 0x0;
				constexpr auto vis_cluster_member_count = 0x4;
				constexpr auto has_transform = 0x5;
				constexpr auto draw_call_index = 0x6;
				constexpr auto lodsetup_index = 0x8;
				constexpr auto lodgroup_mask = 0xa;
				constexpr auto v_tint_color = 0xb;
				constexpr auto object_flags = 0x10;
				constexpr auto light_probe_volume_precomputed_handshake = 0x14;
			} // namespace aggregate_mesh_info_t

			namespace world_node_on_disk_buffer_data_t
			{
				constexpr auto element_count = 0x0;
				constexpr auto element_size_in_bytes = 0x4;
				constexpr auto input_layout_fields = 0x8;
				constexpr auto data = 0x20;
			} // namespace world_node_on_disk_buffer_data_t

			namespace cvoxel_visibility
			{
				constexpr auto base_cluster_count = 0x40;
				constexpr auto pvsbytes_per_cluster = 0x44;
				constexpr auto v_min_bounds = 0x48;
				constexpr auto v_max_bounds = 0x54;
				constexpr auto grid_size = 0x60;
				constexpr auto sky_visibility_cluster = 0x64;
				constexpr auto sun_visibility_cluster = 0x68;
				constexpr auto node_block = 0x6c;
				constexpr auto region_block = 0x74;
				constexpr auto enclosed_cluster_list_block = 0x7c;
				constexpr auto enclosed_clusters_block = 0x84;
				constexpr auto masks_block = 0x8c;
				constexpr auto vis_blocks = 0x94;
			} // namespace cvoxel_visibility

			namespace world_builder_params_t
			{
				constexpr auto min_draw_volume_size = 0x0;
				constexpr auto build_baked_lighting = 0x4;
				constexpr auto v_lightmap_uv_scale = 0x8;
				constexpr auto compile_timestamp = 0x10;
				constexpr auto compile_fingerprint = 0x18;
			} // namespace world_builder_params_t

			namespace entity_ioconnection_data_t
			{
				constexpr auto output_name = 0x0;
				constexpr auto target_type = 0x8;
				constexpr auto target_name = 0x10;
				constexpr auto input_name = 0x18;
				constexpr auto override_param = 0x20;
				constexpr auto delay = 0x28;
				constexpr auto times_to_fire = 0x2c;
			} // namespace entity_ioconnection_data_t

			namespace material_override_t
			{
				constexpr auto sub_scene_object = 0x4;
				constexpr auto draw_call_index = 0x8;
				constexpr auto material = 0x10;
			} // namespace material_override_t

			namespace world_node_t
			{
				constexpr auto scene_objects = 0x0;
				constexpr auto info_overlays = 0x18;
				constexpr auto vis_cluster_membership = 0x30;
				constexpr auto aggregate_scene_objects = 0x48;
				constexpr auto clutter_scene_objects = 0x60;
				constexpr auto extra_vertex_stream_overrides = 0x78;
				constexpr auto material_overrides = 0x90;
				constexpr auto extra_vertex_streams = 0xa8;
				constexpr auto layer_names = 0xc0;
				constexpr auto scene_object_layer_indices = 0xd8;
				constexpr auto overlay_layer_indices = 0xf0;
				constexpr auto grass_file_name = 0x108;
				constexpr auto node_lighting_info = 0x110;
			} // namespace world_node_t

			namespace perm_entity_lump_data_t
			{
				constexpr auto name = 0x8;
				constexpr auto hammer_unique_id = 0x10;
				constexpr auto child_lumps = 0x18;
				constexpr auto entity_key_values = 0x30;
			} // namespace perm_entity_lump_data_t

			namespace world_t
			{
				constexpr auto builder_params = 0x0;
				constexpr auto world_nodes = 0x20;
				constexpr auto world_lighting_info = 0x38;
				constexpr auto entity_lumps = 0x68;
			} // namespace world_t

			namespace clutter_scene_object_t
			{
				constexpr auto bounds = 0x0;
				constexpr auto flags = 0x18;
				constexpr auto layer = 0x1c;
				constexpr auto instance_positions = 0x20;
				constexpr auto instance_scales = 0x50;
				constexpr auto instance_tint_srgb = 0x68;
				constexpr auto tiles = 0x80;
				constexpr auto renderable_model = 0x98;
			} // namespace clutter_scene_object_t

			namespace node_data_t
			{
				constexpr auto parent = 0x0;
				constexpr auto v_origin = 0x4;
				constexpr auto v_min_bounds = 0x10;
				constexpr auto v_max_bounds = 0x1c;
				constexpr auto minimum_distance = 0x28;
				constexpr auto child_node_indices = 0x30;
				constexpr auto world_node_prefix = 0x48;
			} // namespace node_data_t

			namespace aggregate_scene_object_t
			{
				constexpr auto all_flags = 0x0;
				constexpr auto any_flags = 0x4;
				constexpr auto layer = 0x8;
				constexpr auto aggregate_meshes = 0x10;
				constexpr auto lod_setups = 0x28;
				constexpr auto vis_cluster_membership = 0x40;
				constexpr auto fragment_transforms = 0x58;
				constexpr auto renderable_model = 0x70;
			} // namespace aggregate_scene_object_t

			namespace clutter_tile_t
			{
				constexpr auto first_instance = 0x0;
				constexpr auto last_instance = 0x4;
				constexpr auto bounds_ws = 0x8;
			} // namespace clutter_tile_t

			namespace extra_vertex_stream_override_t
			{
				constexpr auto sub_scene_object = 0x4;
				constexpr auto draw_call_index = 0x8;
				constexpr auto additional_mesh_draw_primitive_flags = 0xc;
				constexpr auto extra_buffer_binding = 0x10;
			} // namespace extra_vertex_stream_override_t

			namespace aggregate_lodsetup_t
			{
				constexpr auto v_lodorigin = 0x0;
				constexpr auto max_object_scale = 0xc;
				constexpr auto switch_distances = 0x10;
			} // namespace aggregate_lodsetup_t

			namespace scene_object_t
			{
				constexpr auto object_id = 0x0;
				constexpr auto v_transform_arr = 0x4;
				constexpr auto fade_start_distance = 0x34;
				constexpr auto fade_end_distance = 0x38;
				constexpr auto v_tint_color = 0x3c;
				constexpr auto skin = 0x50;
				constexpr auto object_type_flags = 0x58;
				constexpr auto v_lighting_origin = 0x5c;
				constexpr auto overlay_render_order = 0x68;
				constexpr auto lodoverride = 0x6a;
				constexpr auto cube_map_precomputed_handshake = 0x6c;
				constexpr auto light_probe_volume_precomputed_handshake = 0x70;
				constexpr auto renderable_model = 0x78;
				constexpr auto renderable = 0x80;
			} // namespace scene_object_t

			namespace pulse_doc_node_id_t
			{
				constexpr auto value = 0x0;
			} // namespace pulse_doc_node_id_t

			namespace cpulse_cell_base
			{
				constexpr auto editor_node_id = 0x8;
			} // namespace cpulse_cell_base

			namespace pulse_runtime_state_offset_t
			{
				constexpr auto value = 0x0;
			} // namespace pulse_runtime_state_offset_t

			namespace cpulse_runtime_method_arg
			{
				constexpr auto name = 0x0;
				constexpr auto description = 0x38;
				constexpr auto type = 0x40;
			} // namespace cpulse_runtime_method_arg

			namespace pulse_runtime_chunk_index_t
			{
				constexpr auto value = 0x0;
			} // namespace pulse_runtime_chunk_index_t

			namespace cpulse_outflow_connection
			{
				constexpr auto source_outflow_name = 0x0;
				constexpr auto dest_chunk = 0x8;
				constexpr auto instruction = 0xc;
			} // namespace cpulse_outflow_connection

			namespace cpulse_cell_outflow_test_explicit_yes_no
			{
				constexpr auto yes = 0x48;
				constexpr auto no = 0x58;
			} // namespace cpulse_cell_outflow_test_explicit_yes_no

			namespace pulse_runtime_call_info_index_t
			{
				constexpr auto value = 0x0;
			} // namespace pulse_runtime_call_info_index_t

			namespace pulse_register_map_t
			{
				constexpr auto inparams = 0x0;
				constexpr auto outparams = 0x10;
			} // namespace pulse_register_map_t

			namespace cpulse_graph_def
			{
				constexpr auto domain_identifier = 0x8;
				constexpr auto parent_map_name = 0x10;
				constexpr auto chunks = 0x18;
				constexpr auto cells = 0x30;
				constexpr auto vars = 0x48;
				constexpr auto public_outputs = 0x60;
				constexpr auto invoke_bindings = 0x78;
				constexpr auto call_infos = 0x90;
				constexpr auto output_connections = 0xa8;
			} // namespace cpulse_graph_def

			namespace cpulse_cell_outflow_int_switch
			{
				constexpr auto default_case_outflow = 0x48;
				constexpr auto case_outflows = 0x58;
			} // namespace cpulse_cell_outflow_int_switch

			namespace cpulse_turtle_graphics_cursor
			{
				constexpr auto color = 0x188;
				constexpr auto v_pos = 0x18c;
				constexpr auto heading_deg = 0x194;
				constexpr auto pen_up = 0x198;
			} // namespace cpulse_turtle_graphics_cursor

			namespace pulse_runtime_cell_index_t
			{
				constexpr auto value = 0x0;
			} // namespace pulse_runtime_cell_index_t

			namespace pulse_runtime_register_index_t
			{
				constexpr auto value = 0x0;
			} // namespace pulse_runtime_register_index_t

			namespace cpulse_call_info
			{
				constexpr auto port_name = 0x0;
				constexpr auto editor_node_id = 0x8;
				constexpr auto register_map = 0x10;
				constexpr auto call_method_id = 0x30;
				constexpr auto src_chunk = 0x34;
				constexpr auto src_instruction = 0x38;
			} // namespace cpulse_call_info

			namespace cpulse_cell_inflow_base_entrypoint
			{
				constexpr auto entry_chunk = 0x48;
				constexpr auto register_map = 0x50;
			} // namespace cpulse_cell_inflow_base_entrypoint

			namespace cpulse_cell_step_test_domain_ent_fire
			{
				constexpr auto input = 0x48;
			} // namespace cpulse_cell_step_test_domain_ent_fire

			namespace pulse_runtime_output_index_t
			{
				constexpr auto value = 0x0;
			} // namespace pulse_runtime_output_index_t

			namespace cpulse_cell_outflow_cycle_shuffled
			{
				constexpr auto outputs = 0x48;
			} // namespace cpulse_cell_outflow_cycle_shuffled

			namespace cpulse_graph_instance_test_domain
			{
				constexpr auto is_running_unit_tests = 0xd0;
				constexpr auto explicit_time_stepping = 0xd1;
				constexpr auto expecting_to_destroy_with_yielded_cursors = 0xd2;
				constexpr auto next_validate_index = 0xd4;
				constexpr auto tracepoints = 0xd8;
				constexpr auto test_yes_or_no_path = 0xf0;
			} // namespace cpulse_graph_instance_test_domain

			namespace cpulse_cell_inflow_method
			{
				constexpr auto method_name = 0x70;
				constexpr auto description = 0x78;
				constexpr auto is_public = 0x80;
				constexpr auto return_type = 0x88;
				constexpr auto args = 0x98;
			} // namespace cpulse_cell_inflow_method

			namespace cpulse_variable
			{
				constexpr auto name = 0x0;
				constexpr auto description = 0x8;
				constexpr auto type = 0x10;
				constexpr auto default_value = 0x20;
				constexpr auto is_public = 0x32;
			} // namespace cpulse_variable

			namespace cpulse_invoke_binding
			{
				constexpr auto register_map = 0x0;
				constexpr auto func_name = 0x20;
				constexpr auto cell_index = 0x28;
				constexpr auto instance_type = 0x30;
				constexpr auto src_chunk = 0x40;
				constexpr auto src_instruction = 0x44;
			} // namespace cpulse_invoke_binding

			namespace pulse_runtime_invoke_index_t
			{
				constexpr auto value = 0x0;
			} // namespace pulse_runtime_invoke_index_t

			namespace pulse_test_ehandle_t
			{
				constexpr auto value = 0x0;
			} // namespace pulse_test_ehandle_t

			namespace cpulse_cell_outflow_simultaneous_parallel
			{
				constexpr auto outputs = 0x48;
			} // namespace cpulse_cell_outflow_simultaneous_parallel

			namespace cpulse_cell_step_call_external_method
			{
				constexpr auto method_name = 0x48;
				constexpr auto expected_args = 0x50;
			} // namespace cpulse_cell_step_call_external_method

			namespace cpulse_output_connection
			{
				constexpr auto source_output = 0x0;
				constexpr auto target_entity = 0x8;
				constexpr auto target_input = 0x10;
				constexpr auto param = 0x18;
			} // namespace cpulse_output_connection

			namespace cpulse_public_output
			{
				constexpr auto name = 0x0;
				constexpr auto description = 0x8;
				constexpr auto param_type = 0x10;
			} // namespace cpulse_public_output

			namespace cpulse_cell_inflow_event_handler
			{
				constexpr auto event_name = 0x70;
			} // namespace cpulse_cell_inflow_event_handler

			namespace cpulse_cell_outflow_cycle_random
			{
				constexpr auto outputs = 0x48;
			} // namespace cpulse_cell_outflow_cycle_random

			namespace cpulse_cell_outflow_cycle_shuffled__instance_state_t
			{
				constexpr auto shuffle = 0x0;
				constexpr auto next_shuffle = 0x20;
			} // namespace cpulse_cell_outflow_cycle_shuffled__instance_state_t

			namespace fake_entity_t
			{
				constexpr auto handle = 0x0;
				constexpr auto name = 0x8;
				constexpr auto class_ = 0x10;
				constexpr auto destroyed = 0x18;
				constexpr auto associated_graph_instance_ptr = 0x20;
				constexpr auto func_was_called = 0x28;
				constexpr auto value = 0x2c;
			} // namespace fake_entity_t

			namespace cpulse_cell_outflow_string_switch
			{
				constexpr auto default_case_outflow = 0x48;
				constexpr auto case_outflows = 0x58;
			} // namespace cpulse_cell_outflow_string_switch

			namespace cpulse_cell_inflow_ent_output_handler
			{
				constexpr auto source_entity = 0x70;
				constexpr auto source_output = 0x78;
				constexpr auto target_input = 0x80;
				constexpr auto expected_param_type = 0x88;
			} // namespace cpulse_cell_inflow_ent_output_handler

			namespace ctest_domain_derived_cursor
			{
				constexpr auto cursor_value_a = 0x188;
				constexpr auto cursor_value_b = 0x18c;
			} // namespace ctest_domain_derived_cursor

			namespace cpulse_cell_inflow_wait
			{
				constexpr auto wake_resume = 0x48;
			} // namespace cpulse_cell_inflow_wait

			namespace cpulse_cell_inflow_graph_hook
			{
				constexpr auto hook_name = 0x70;
			} // namespace cpulse_cell_inflow_graph_hook

			namespace cpulse_cell_inflow_yield
			{
				constexpr auto unyield_resume = 0x48;
			} // namespace cpulse_cell_inflow_yield

			namespace cpulse_cell_outflow_cycle_ordered
			{
				constexpr auto outputs = 0x48;
			} // namespace cpulse_cell_outflow_cycle_ordered

			namespace cpulse_graph_instance_test_domain_derived
			{
				constexpr auto instance_value_x = 0xf8;
			} // namespace cpulse_graph_instance_test_domain_derived

			namespace cpulse_cell_outflow_test_random_yes_no
			{
				constexpr auto yes = 0x48;
				constexpr auto no = 0x58;
			} // namespace cpulse_cell_outflow_test_random_yes_no

			namespace cpulse_register_info
			{
				constexpr auto reg = 0x0;
				constexpr auto type = 0x8;
				constexpr auto origin_name = 0x18;
				constexpr auto written_by_instruction = 0x50;
				constexpr auto last_read_by_instruction = 0x54;
			} // namespace cpulse_register_info

			namespace cpulse_cell_outflow_cycle_ordered__instance_state_t
			{
				constexpr auto next_index = 0x0;
			} // namespace cpulse_cell_outflow_cycle_ordered__instance_state_t

			namespace pulse_runtime_var_index_t
			{
				constexpr auto value = 0x0;
			} // namespace pulse_runtime_var_index_t

			namespace cpulse_chunk
			{
				constexpr auto instructions = 0x0;
				constexpr auto registers = 0x10;
				constexpr auto instruction_editor_ids = 0x20;
			} // namespace cpulse_chunk

			namespace pulse_runtime_entrypoint_index_t
			{
				constexpr auto value = 0x0;
			} // namespace pulse_runtime_entrypoint_index_t

			namespace pgdinstruction_t
			{
				constexpr auto code = 0x0;
				constexpr auto var = 0x4;
				constexpr auto reg0 = 0x8;
				constexpr auto reg1 = 0xa;
				constexpr auto reg2 = 0xc;
				constexpr auto invoke_binding_index = 0x10;
				constexpr auto chunk = 0x14;
				constexpr auto dest_instruction = 0x18;
				constexpr auto call_info_index = 0x1c;
				constexpr auto arg0_name = 0x20;
				constexpr auto arg1_name = 0x28;
				constexpr auto literal_bool = 0x30;
				constexpr auto literal_int = 0x34;
				constexpr auto literal_float = 0x38;
				constexpr auto literal_string = 0x40;
				constexpr auto v_literal_vec3 = 0x50;
			} // namespace pgdinstruction_t

			namespace cpulse_cell_step_public_output
			{
				constexpr auto output_index = 0x48;
			} // namespace cpulse_cell_step_public_output

			namespace particle_attribute_index_t
			{
				constexpr auto value = 0x0;
			} // namespace particle_attribute_index_t

			namespace cparticle_float_input
			{
				constexpr auto type = 0x10;
				constexpr auto map_type = 0x14;
				constexpr auto literal_value = 0x18;
				constexpr auto named_value = 0x20;
				constexpr auto control_point = 0x60;
				constexpr auto scalar_attribute = 0x64;
				constexpr auto vector_attribute = 0x68;
				constexpr auto vector_component = 0x6c;
				constexpr auto random_min = 0x70;
				constexpr auto random_max = 0x74;
				constexpr auto has_random_sign_flip = 0x78;
				constexpr auto random_seed = 0x7c;
				constexpr auto random_mode = 0x80;
				constexpr auto lod0 = 0x88;
				constexpr auto lod1 = 0x8c;
				constexpr auto lod2 = 0x90;
				constexpr auto lod3 = 0x94;
				constexpr auto noise_input_vector_attribute = 0x98;
				constexpr auto noise_output_min = 0x9c;
				constexpr auto noise_output_max = 0xa0;
				constexpr auto noise_scale = 0xa4;
				constexpr auto vec_noise_offset_rate = 0xa8;
				constexpr auto noise_offset = 0xb4;
				constexpr auto noise_octaves = 0xb8;
				constexpr auto noise_turbulence = 0xbc;
				constexpr auto noise_type = 0xc0;
				constexpr auto noise_modifier = 0xc4;
				constexpr auto noise_turbulence_scale = 0xc8;
				constexpr auto noise_turbulence_mix = 0xcc;
				constexpr auto noise_img_preview_scale = 0xd0;
				constexpr auto noise_img_preview_live = 0xd4;
				constexpr auto no_camera_fallback = 0xe0;
				constexpr auto use_bounds_center = 0xe4;
				constexpr auto input_mode = 0xe8;
				constexpr auto mult_factor = 0xec;
				constexpr auto input0 = 0xf0;
				constexpr auto input1 = 0xf4;
				constexpr auto output0 = 0xf8;
				constexpr auto output1 = 0xfc;
				constexpr auto notched_range_min = 0x100;
				constexpr auto notched_range_max = 0x104;
				constexpr auto notched_output_outside = 0x108;
				constexpr auto notched_output_inside = 0x10c;
				constexpr auto bias_type = 0x110;
				constexpr auto bias_parameter = 0x114;
				constexpr auto curve = 0x118;
			} // namespace cparticle_float_input

			namespace cparticle_function
			{
				constexpr auto op_strength = 0x8;
				constexpr auto op_end_cap_state = 0x160;
				constexpr auto op_start_fade_in_time = 0x164;
				constexpr auto op_end_fade_in_time = 0x168;
				constexpr auto op_start_fade_out_time = 0x16c;
				constexpr auto op_end_fade_out_time = 0x170;
				constexpr auto op_fade_oscillate_period = 0x174;
				constexpr auto normalize_to_stop_time = 0x178;
				constexpr auto op_time_offset_min = 0x17c;
				constexpr auto op_time_offset_max = 0x180;
				constexpr auto op_time_offset_seed = 0x184;
				constexpr auto op_time_scale_seed = 0x188;
				constexpr auto op_time_scale_min = 0x18c;
				constexpr auto op_time_scale_max = 0x190;
				constexpr auto disable_operator = 0x196;
				constexpr auto notes = 0x198;
			} // namespace cparticle_function

			namespace cparticle_function_initializer
			{
				constexpr auto associated_emitter_index = 0x1b8;
			} // namespace cparticle_function_initializer

			namespace init_remap_particle_count_to_scalar
			{
				constexpr auto field_output = 0x1c0;
				constexpr auto input_min = 0x1c4;
				constexpr auto input_max = 0x1c8;
				constexpr auto scale_control_point = 0x1cc;
				constexpr auto scale_control_point_field = 0x1d0;
				constexpr auto output_min = 0x1d4;
				constexpr auto output_max = 0x1d8;
				constexpr auto set_method = 0x1dc;
				constexpr auto active_range = 0x1e0;
				constexpr auto invert = 0x1e1;
				constexpr auto wrap = 0x1e2;
				constexpr auto remap_bias = 0x1e4;
			} // namespace init_remap_particle_count_to_scalar

			namespace cparticle_vec_input
			{
				constexpr auto type = 0x10;
				constexpr auto v_literal_value = 0x14;
				constexpr auto literal_color = 0x20;
				constexpr auto named_value = 0x28;
				constexpr auto follow_named_value = 0x68;
				constexpr auto vector_attribute = 0x6c;
				constexpr auto v_vector_attribute_scale = 0x70;
				constexpr auto control_point = 0x7c;
				constexpr auto delta_control_point = 0x80;
				constexpr auto v_cpvalue_scale = 0x84;
				constexpr auto v_cprelative_position = 0x90;
				constexpr auto v_cprelative_dir = 0x9c;
				constexpr auto float_component_x = 0xa8;
				constexpr auto float_component_y = 0x200;
				constexpr auto float_component_z = 0x358;
				constexpr auto float_interp = 0x4b0;
				constexpr auto interp_input0 = 0x608;
				constexpr auto interp_input1 = 0x60c;
				constexpr auto v_interp_output0 = 0x610;
				constexpr auto v_interp_output1 = 0x61c;
				constexpr auto gradient = 0x628;
				constexpr auto v_random_min = 0x640;
				constexpr auto v_random_max = 0x64c;
			} // namespace cparticle_vec_input

			namespace cparticle_visibility_inputs
			{
				constexpr auto camera_bias = 0x0;
				constexpr auto cpin = 0x4;
				constexpr auto proxy_radius = 0x8;
				constexpr auto input_min = 0xc;
				constexpr auto input_max = 0x10;
				constexpr auto no_pixel_visibility_fallback = 0x14;
				constexpr auto distance_input_min = 0x18;
				constexpr auto distance_input_max = 0x1c;
				constexpr auto dot_input_min = 0x20;
				constexpr auto dot_input_max = 0x24;
				constexpr auto dot_cpangles = 0x28;
				constexpr auto dot_camera_angles = 0x29;
				constexpr auto alpha_scale_min = 0x2c;
				constexpr auto alpha_scale_max = 0x30;
				constexpr auto radius_scale_min = 0x34;
				constexpr auto radius_scale_max = 0x38;
				constexpr auto radius_scale_fovbase = 0x3c;
				constexpr auto right_eye = 0x40;
			} // namespace cparticle_visibility_inputs

			namespace op_cycle_scalar
			{
				constexpr auto dest_field = 0x1c0;
				constexpr auto start_value = 0x1c4;
				constexpr auto end_value = 0x1c8;
				constexpr auto cycle_time = 0x1cc;
				constexpr auto do_not_repeat_cycle = 0x1d0;
				constexpr auto synchronize_particles = 0x1d1;
				constexpr auto cpscale = 0x1d4;
				constexpr auto cpfield_min = 0x1d8;
				constexpr auto cpfield_max = 0x1dc;
				constexpr auto set_method = 0x1e0;
			} // namespace op_cycle_scalar

			namespace cparticle_function_renderer
			{
				constexpr auto visibility_inputs = 0x1b8;
				constexpr auto cannot_be_refracted = 0x1fc;
				constexpr auto skip_rendering_on_mobile = 0x1fd;
			} // namespace cparticle_function_renderer

			namespace op_set_per_child_control_point
			{
				constexpr auto child_group_id = 0x1c0;
				constexpr auto first_control_point = 0x1c4;
				constexpr auto num_control_points = 0x1c8;
				constexpr auto particle_increment = 0x1d0;
				constexpr auto first_source_point = 0x328;
				constexpr auto set_orientation = 0x480;
				constexpr auto orientation_field = 0x484;
				constexpr auto num_based_on_particle_count = 0x488;
			} // namespace op_set_per_child_control_point

			namespace cparticle_transform_input
			{
				constexpr auto type = 0x10;
				constexpr auto named_value = 0x18;
				constexpr auto follow_named_value = 0x58;
				constexpr auto supports_disabled = 0x59;
				constexpr auto use_orientation = 0x5a;
				constexpr auto control_point = 0x5c;
				constexpr auto control_point_range_max = 0x60;
				constexpr auto end_cpgrowth_time = 0x64;
			} // namespace cparticle_transform_input

			namespace init_model_cull
			{
				constexpr auto control_point_number = 0x1c0;
				constexpr auto bound_box = 0x1c4;
				constexpr auto cull_outside = 0x1c5;
				constexpr auto use_bones = 0x1c6;
				constexpr auto hitbox_set_name_arr = 0x1c7;
			} // namespace init_model_cull

			namespace point_definition_t
			{
				constexpr auto control_point = 0x0;
				constexpr auto local_coords = 0x4;
				constexpr auto v_offset = 0x8;
			} // namespace point_definition_t

			namespace cgeneral_spin
			{
				constexpr auto spin_rate_degrees = 0x1c0;
				constexpr auto spin_rate_min_degrees = 0x1c4;
				constexpr auto spin_rate_stop_time = 0x1cc;
			} // namespace cgeneral_spin

			namespace op_parent_vortices
			{
				constexpr auto force_scale = 0x1d0;
				constexpr auto vec_twist_axis = 0x1d4;
				constexpr auto flip_based_on_yaw = 0x1e0;
			} // namespace op_parent_vortices

			namespace particle_control_point_driver_t
			{
				constexpr auto control_point = 0x0;
				constexpr auto attach_type = 0x4;
				constexpr auto attachment_name = 0x8;
				constexpr auto vec_offset = 0x10;
				constexpr auto ang_offset = 0x1c;
				constexpr auto entity_name = 0x28;
			} // namespace particle_control_point_driver_t

			namespace op_set_to_cp
			{
				constexpr auto control_point_number = 0x1c0;
				constexpr auto vec_offset = 0x1c4;
				constexpr auto offset_local = 0x1d0;
			} // namespace op_set_to_cp

			namespace cparticle_function_pre_emission
			{
				constexpr auto run_once = 0x1c0;
			} // namespace cparticle_function_pre_emission

			namespace init_quantize_float
			{
				constexpr auto input_value = 0x1c0;
				constexpr auto output_field = 0x318;
			} // namespace init_quantize_float

			namespace op_remap_particle_count_to_scalar
			{
				constexpr auto field_output = 0x1c0;
				constexpr auto input_min = 0x1c8;
				constexpr auto input_max = 0x320;
				constexpr auto output_min = 0x478;
				constexpr auto output_max = 0x5d0;
				constexpr auto active_range = 0x728;
				constexpr auto set_method = 0x72c;
			} // namespace op_remap_particle_count_to_scalar

			namespace op_vector_noise
			{
				constexpr auto field_output = 0x1c0;
				constexpr auto vec_output_min = 0x1c4;
				constexpr auto vec_output_max = 0x1d0;
				constexpr auto fl4_noise_scale = 0x1dc;
				constexpr auto additive = 0x1e0;
				constexpr auto offset = 0x1e1;
				constexpr auto noise_animation_time_scale = 0x1e4;
			} // namespace op_vector_noise

			namespace op_force_control_point_stub
			{
				constexpr auto control_point = 0x1d0;
			} // namespace op_force_control_point_stub

			namespace init_position_warp_scalar
			{
				constexpr auto vec_warp_min = 0x1c0;
				constexpr auto vec_warp_max = 0x1cc;
				constexpr auto input_value = 0x1d8;
				constexpr auto prev_pos_scale = 0x330;
				constexpr auto scale_control_point_number = 0x334;
				constexpr auto control_point_number = 0x338;
			} // namespace init_position_warp_scalar

			namespace op_rope_spring_constraint
			{
				constexpr auto rest_length = 0x1c0;
				constexpr auto min_distance = 0x318;
				constexpr auto max_distance = 0x470;
				constexpr auto adjustment_scale = 0x5c8;
				constexpr auto initial_resting_length = 0x5d0;
			} // namespace op_rope_spring_constraint

			namespace op_set_control_point_orientation_to_cpvelocity
			{
				constexpr auto cpinput = 0x1d0;
				constexpr auto cpoutput = 0x1d4;
			} // namespace op_set_control_point_orientation_to_cpvelocity

			namespace init_remap_named_model_element_to_scalar
			{
				constexpr auto h_model = 0x1c0;
				constexpr auto names = 0x1c8;
				constexpr auto values = 0x1e0;
				constexpr auto field_input = 0x1f8;
				constexpr auto field_output = 0x1fc;
				constexpr auto set_method = 0x200;
				constexpr auto model_from_renderer = 0x204;
			} // namespace init_remap_named_model_element_to_scalar

			namespace cparticle_function_emitter
			{
				constexpr auto emitter_index = 0x1b8;
			} // namespace cparticle_function_emitter

			namespace op_remap_speed
			{
				constexpr auto field_output = 0x1c0;
				constexpr auto input_min = 0x1c4;
				constexpr auto input_max = 0x1c8;
				constexpr auto output_min = 0x1cc;
				constexpr auto output_max = 0x1d0;
				constexpr auto set_method = 0x1d4;
				constexpr auto ignore_delta = 0x1d8;
			} // namespace op_remap_speed

			namespace material_variable_t
			{
				constexpr auto str_variable = 0x0;
				constexpr auto variable_field = 0x8;
				constexpr auto scale = 0xc;
			} // namespace material_variable_t

			namespace init_set_rigid_attachment
			{
				constexpr auto control_point_number = 0x1c0;
				constexpr auto field_input = 0x1c4;
				constexpr auto field_output = 0x1c8;
				constexpr auto local_space = 0x1cc;
			} // namespace init_set_rigid_attachment

			namespace particle_preview_state_t
			{
				constexpr auto preview_model = 0x0;
				constexpr auto mod_specific_data = 0x8;
				constexpr auto ground_type = 0xc;
				constexpr auto sequence_name = 0x10;
				constexpr auto fire_particle_on_sequence_frame = 0x18;
				constexpr auto hitbox_set_name = 0x20;
				constexpr auto material_group_name = 0x28;
				constexpr auto vec_body_groups = 0x30;
				constexpr auto playback_speed = 0x48;
				constexpr auto particle_simulation_rate = 0x4c;
				constexpr auto should_draw_hitboxes = 0x50;
				constexpr auto should_draw_attachments = 0x51;
				constexpr auto should_draw_attachment_names = 0x52;
				constexpr auto should_draw_control_point_axes = 0x53;
				constexpr auto animation_non_looping = 0x54;
				constexpr auto vec_preview_gravity = 0x58;
			} // namespace particle_preview_state_t

			namespace op_remap_density_to_vector
			{
				constexpr auto radius_scale = 0x1c0;
				constexpr auto field_output = 0x1c4;
				constexpr auto density_min = 0x1c8;
				constexpr auto density_max = 0x1cc;
				constexpr auto vec_output_min = 0x1d0;
				constexpr auto vec_output_max = 0x1dc;
				constexpr auto use_parent_density = 0x1e8;
				constexpr auto voxel_grid_resolution = 0x1ec;
			} // namespace op_remap_density_to_vector

			namespace op_force_based_on_distance_to_plane
			{
				constexpr auto min_dist = 0x1d0;
				constexpr auto vec_force_at_min_dist = 0x1d4;
				constexpr auto max_dist = 0x1e0;
				constexpr auto vec_force_at_max_dist = 0x1e4;
				constexpr auto vec_plane_normal = 0x1f0;
				constexpr auto control_point_number = 0x1fc;
				constexpr auto exponent = 0x200;
			} // namespace op_force_based_on_distance_to_plane

			namespace init_distance_to_cpinit
			{
				constexpr auto field_output = 0x1c0;
				constexpr auto input_min = 0x1c8;
				constexpr auto input_max = 0x320;
				constexpr auto output_min = 0x478;
				constexpr auto output_max = 0x5d0;
				constexpr auto start_cp = 0x728;
				constexpr auto los = 0x72c;
				constexpr auto collision_group_name_arr = 0x72d;
				constexpr auto trace_set = 0x7b0;
				constexpr auto max_trace_length = 0x7b8;
				constexpr auto losscale = 0x910;
				constexpr auto set_method = 0x914;
				constexpr auto active_range = 0x918;
				constexpr auto vec_distance_scale = 0x91c;
				constexpr auto remap_bias = 0x928;
			} // namespace init_distance_to_cpinit

			namespace op_enable_children_from_parent_particle_count
			{
				constexpr auto child_group_id = 0x1d0;
				constexpr auto first_child = 0x1d4;
				constexpr auto num_children_to_enable = 0x1d8;
				constexpr auto disable_children = 0x330;
				constexpr auto play_endcap_on_stop = 0x331;
				constexpr auto destroy_immediately = 0x332;
			} // namespace op_enable_children_from_parent_particle_count

			namespace op_render_light_beam
			{
				constexpr auto v_color_blend = 0x200;
				constexpr auto color_blend_type = 0x858;
				constexpr auto brightness_lumens_per_meter = 0x860;
				constexpr auto cast_shadows = 0x9b8;
				constexpr auto skirt = 0x9c0;
				constexpr auto range = 0xb18;
				constexpr auto thickness = 0xc70;
			} // namespace op_render_light_beam

			namespace op_render_flatten_grass
			{
				constexpr auto flatten_strength = 0x200;
				constexpr auto strength_field_override = 0x204;
				constexpr auto radius_scale = 0x208;
			} // namespace op_render_flatten_grass

			namespace op_movement_rigid_attach_to_cp
			{
				constexpr auto control_point_number = 0x1c0;
				constexpr auto scale_control_point = 0x1c4;
				constexpr auto scale_cpfield = 0x1c8;
				constexpr auto field_input = 0x1cc;
				constexpr auto field_output = 0x1d0;
				constexpr auto offset_local = 0x1d4;
			} // namespace op_movement_rigid_attach_to_cp

			namespace init_chaotic_attractor
			{
				constexpr auto aparm = 0x1c0;
				constexpr auto bparm = 0x1c4;
				constexpr auto cparm = 0x1c8;
				constexpr auto dparm = 0x1cc;
				constexpr auto scale = 0x1d0;
				constexpr auto speed_min = 0x1d4;
				constexpr auto speed_max = 0x1d8;
				constexpr auto base_cp = 0x1dc;
				constexpr auto uniform_speed = 0x1e0;
			} // namespace init_chaotic_attractor

			namespace op_ramp_scalar_linear_simple
			{
				constexpr auto rate = 0x1c0;
				constexpr auto start_time = 0x1c4;
				constexpr auto end_time = 0x1c8;
				constexpr auto field = 0x1f0;
			} // namespace op_ramp_scalar_linear_simple

			namespace init_inherit_from_parent_particles
			{
				constexpr auto scale = 0x1c0;
				constexpr auto field_output = 0x1c4;
				constexpr auto increment = 0x1c8;
				constexpr auto random_distribution = 0x1cc;
				constexpr auto random_seed = 0x1d0;
			} // namespace init_inherit_from_parent_particles

			namespace init_remap_particle_count_to_named_model_element_scalar
			{
				constexpr auto h_model = 0x1f0;
				constexpr auto output_min_name = 0x1f8;
				constexpr auto output_max_name = 0x200;
				constexpr auto model_from_renderer = 0x208;
			} // namespace init_remap_particle_count_to_named_model_element_scalar

			namespace op_set_gravity_to_cp
			{
				constexpr auto cpinput = 0x1d0;
				constexpr auto cpoutput = 0x1d4;
				constexpr auto scale = 0x1d8;
				constexpr auto set_orientation = 0x330;
				constexpr auto set_zdown = 0x331;
			} // namespace op_set_gravity_to_cp

			namespace init_random_color
			{
				constexpr auto color_min = 0x1dc;
				constexpr auto color_max = 0x1e0;
				constexpr auto tint_min = 0x1e4;
				constexpr auto tint_max = 0x1e8;
				constexpr auto tint_perc = 0x1ec;
				constexpr auto update_threshold = 0x1f0;
				constexpr auto tint_cp = 0x1f4;
				constexpr auto field_output = 0x1f8;
				constexpr auto tint_blend_mode = 0x1fc;
				constexpr auto light_amplification = 0x200;
			} // namespace init_random_color

			namespace op_lerp_to_other_attribute
			{
				constexpr auto interpolation = 0x1c0;
				constexpr auto field_input_from = 0x318;
				constexpr auto field_input = 0x31c;
				constexpr auto field_output = 0x320;
			} // namespace op_lerp_to_other_attribute

			namespace init_point_list
			{
				constexpr auto field_output = 0x1c0;
				constexpr auto point_list = 0x1c8;
				constexpr auto place_along_path = 0x1e0;
				constexpr auto closed_loop = 0x1e1;
				constexpr auto num_points_along_path = 0x1e4;
			} // namespace init_point_list

			namespace op_set_attribute_to_scalar_expression
			{
				constexpr auto expression = 0x1c0;
				constexpr auto input1 = 0x1c8;
				constexpr auto input2 = 0x320;
				constexpr auto output_field = 0x478;
				constexpr auto set_method = 0x47c;
			} // namespace op_set_attribute_to_scalar_expression

			namespace cparticle_model_input
			{
				constexpr auto type = 0x10;
				constexpr auto named_value = 0x18;
				constexpr auto control_point = 0x58;
			} // namespace cparticle_model_input

			namespace init_scale_velocity
			{
				constexpr auto vec_scale = 0x1c0;
			} // namespace init_scale_velocity

			namespace op_remap_named_model_element_end_cap
			{
				constexpr auto h_model = 0x1c0;
				constexpr auto in_names = 0x1c8;
				constexpr auto out_names = 0x1e0;
				constexpr auto fallback_names = 0x1f8;
				constexpr auto model_from_renderer = 0x210;
				constexpr auto field_input = 0x214;
				constexpr auto field_output = 0x218;
			} // namespace op_remap_named_model_element_end_cap

			namespace op_cpvelocity_force
			{
				constexpr auto control_point_number = 0x1d0;
				constexpr auto scale = 0x1d8;
			} // namespace op_cpvelocity_force

			namespace init_create_spiral_sphere
			{
				constexpr auto control_point_number = 0x1c0;
				constexpr auto override_cp = 0x1c4;
				constexpr auto density = 0x1c8;
				constexpr auto initial_radius = 0x1cc;
				constexpr auto initial_speed_min = 0x1d0;
				constexpr auto initial_speed_max = 0x1d4;
				constexpr auto use_particle_count = 0x1d8;
			} // namespace init_create_spiral_sphere

			namespace op_lock_points
			{
				constexpr auto min_col = 0x1c0;
				constexpr auto max_col = 0x1c4;
				constexpr auto min_row = 0x1c8;
				constexpr auto max_row = 0x1cc;
				constexpr auto control_point = 0x1d0;
				constexpr auto blend_value = 0x1d4;
			} // namespace op_lock_points

			namespace init_create_from_cps
			{
				constexpr auto increment = 0x1c0;
				constexpr auto min_cp = 0x1c4;
				constexpr auto max_cp = 0x1c8;
				constexpr auto dynamic_cpcount = 0x1d0;
			} // namespace init_create_from_cps

			namespace op_planar_constraint
			{
				constexpr auto point_on_plane = 0x1c0;
				constexpr auto plane_normal = 0x1cc;
				constexpr auto control_point_number = 0x1d8;
				constexpr auto global_origin = 0x1dc;
				constexpr auto global_normal = 0x1dd;
				constexpr auto radius_scale = 0x1e0;
				constexpr auto maximum_distance_to_cp = 0x338;
			} // namespace op_planar_constraint

			namespace model_reference_t
			{
				constexpr auto model = 0x0;
				constexpr auto relative_probability_of_spawn = 0x8;
			} // namespace model_reference_t

			namespace op_selectively_enable_children
			{
				constexpr auto child_group_id = 0x1d0;
				constexpr auto first_child = 0x328;
				constexpr auto num_children_to_enable = 0x480;
				constexpr auto play_endcap_on_stop = 0x5d8;
				constexpr auto destroy_immediately = 0x5d9;
			} // namespace op_selectively_enable_children

			namespace init_sequence_from_cp
			{
				constexpr auto kill_unused = 0x1c0;
				constexpr auto radius_scale = 0x1c1;
				constexpr auto cp = 0x1c4;
				constexpr auto vec_offset = 0x1c8;
			} // namespace init_sequence_from_cp

			namespace op_noise_emitter
			{
				constexpr auto emission_duration = 0x1c0;
				constexpr auto start_time = 0x1c4;
				constexpr auto emission_scale = 0x1c8;
				constexpr auto scale_control_point = 0x1cc;
				constexpr auto scale_control_point_field = 0x1d0;
				constexpr auto world_noise_point = 0x1d4;
				constexpr auto abs_val = 0x1d8;
				constexpr auto abs_val_inv = 0x1d9;
				constexpr auto offset = 0x1dc;
				constexpr auto output_min = 0x1e0;
				constexpr auto output_max = 0x1e4;
				constexpr auto noise_scale = 0x1e8;
				constexpr auto world_noise_scale = 0x1ec;
				constexpr auto vec_offset_loc = 0x1f0;
				constexpr auto world_time_scale = 0x1fc;
			} // namespace op_noise_emitter

			namespace init_initial_sequence_from_model
			{
				constexpr auto control_point_number = 0x1c0;
				constexpr auto field_output = 0x1c4;
				constexpr auto field_output_anim = 0x1c8;
				constexpr auto input_min = 0x1cc;
				constexpr auto input_max = 0x1d0;
				constexpr auto output_min = 0x1d4;
				constexpr auto output_max = 0x1d8;
				constexpr auto set_method = 0x1dc;
			} // namespace init_initial_sequence_from_model

			namespace init_remap_scalar_to_vector
			{
				constexpr auto field_input = 0x1c0;
				constexpr auto field_output = 0x1c4;
				constexpr auto input_min = 0x1c8;
				constexpr auto input_max = 0x1cc;
				constexpr auto vec_output_min = 0x1d0;
				constexpr auto vec_output_max = 0x1dc;
				constexpr auto start_time = 0x1e8;
				constexpr auto end_time = 0x1ec;
				constexpr auto set_method = 0x1f0;
				constexpr auto control_point_number = 0x1f4;
				constexpr auto local_coords = 0x1f8;
				constexpr auto remap_bias = 0x1fc;
			} // namespace init_remap_scalar_to_vector

			namespace op_radius_decay
			{
				constexpr auto min_radius = 0x1c0;
			} // namespace op_radius_decay

			namespace init_create_within_sphere_transform
			{
				constexpr auto radius_min = 0x1c0;
				constexpr auto radius_max = 0x318;
				constexpr auto vec_distance_bias = 0x470;
				constexpr auto vec_distance_bias_abs = 0xac8;
				constexpr auto transform_input = 0xad8;
				constexpr auto speed_min = 0xb40;
				constexpr auto speed_max = 0xc98;
				constexpr auto speed_rand_exp = 0xdf0;
				constexpr auto local_coords = 0xdf4;
				constexpr auto end_cpgrowth_time = 0xdf8;
				constexpr auto local_coordinate_system_speed_min = 0xe00;
				constexpr auto local_coordinate_system_speed_max = 0x1458;
				constexpr auto field_output = 0x1ab0;
				constexpr auto field_velocity = 0x1ab4;
			} // namespace init_create_within_sphere_transform

			namespace op_snapshot_skin_to_bones
			{
				constexpr auto transform_normals = 0x1c0;
				constexpr auto transform_radii = 0x1c1;
				constexpr auto control_point_number = 0x1c4;
				constexpr auto life_time_fade_start = 0x1c8;
				constexpr auto life_time_fade_end = 0x1cc;
				constexpr auto jump_threshold = 0x1d0;
				constexpr auto prev_pos_scale = 0x1d4;
			} // namespace op_snapshot_skin_to_bones

			namespace op_set_cporientation_to_ground_normal
			{
				constexpr auto interp_rate = 0x1c0;
				constexpr auto max_trace_length = 0x1c4;
				constexpr auto tolerance = 0x1c8;
				constexpr auto trace_offset = 0x1cc;
				constexpr auto collision_group_name_arr = 0x1d0;
				constexpr auto trace_set = 0x250;
				constexpr auto input_cp = 0x254;
				constexpr auto output_cp = 0x258;
				constexpr auto include_water = 0x268;
			} // namespace op_set_cporientation_to_ground_normal

			namespace op_time_varying_force
			{
				constexpr auto start_lerp_time = 0x1d0;
				constexpr auto starting_force = 0x1d4;
				constexpr auto end_lerp_time = 0x1e0;
				constexpr auto ending_force = 0x1e4;
			} // namespace op_time_varying_force

			namespace texture_controls_t
			{
				constexpr auto final_texture_scale_u = 0x0;
				constexpr auto final_texture_scale_v = 0x158;
				constexpr auto final_texture_offset_u = 0x2b0;
				constexpr auto final_texture_offset_v = 0x408;
				constexpr auto final_texture_uvrotation = 0x560;
				constexpr auto zoom_scale = 0x6b8;
				constexpr auto distortion = 0x810;
				constexpr auto randomize_offsets = 0x968;
				constexpr auto clamp_uvs = 0x969;
				constexpr auto per_particle_blend = 0x96c;
				constexpr auto per_particle_scale = 0x970;
				constexpr auto per_particle_offset_u = 0x974;
				constexpr auto per_particle_offset_v = 0x978;
				constexpr auto per_particle_rotation = 0x97c;
				constexpr auto per_particle_zoom = 0x980;
				constexpr auto per_particle_distortion = 0x984;
			} // namespace texture_controls_t

			namespace op_set_control_point_field_to_water
			{
				constexpr auto source_cp = 0x1d0;
				constexpr auto dest_cp = 0x1d4;
				constexpr auto cpfield = 0x1d8;
			} // namespace op_set_control_point_field_to_water

			namespace op_lerp_vector
			{
				constexpr auto field_output = 0x1c0;
				constexpr auto vec_output = 0x1c4;
				constexpr auto start_time = 0x1d0;
				constexpr auto end_time = 0x1d4;
				constexpr auto set_method = 0x1d8;
			} // namespace op_lerp_vector

			namespace init_initial_velocity_from_hitbox
			{
				constexpr auto velocity_min = 0x1c0;
				constexpr auto velocity_max = 0x1c4;
				constexpr auto control_point_number = 0x1c8;
				constexpr auto hitbox_set_name_arr = 0x1cc;
				constexpr auto use_bones = 0x24c;
			} // namespace init_initial_velocity_from_hitbox

			namespace init_radius_from_cpobject
			{
				constexpr auto control_point = 0x1c0;
			} // namespace init_radius_from_cpobject

			namespace init_global_scale
			{
				constexpr auto scale = 0x1c0;
				constexpr auto scale_control_point_number = 0x1c4;
				constexpr auto control_point_number = 0x1c8;
				constexpr auto scale_radius = 0x1cc;
				constexpr auto scale_position = 0x1cd;
				constexpr auto scale_velocity = 0x1ce;
			} // namespace init_global_scale

			namespace op_hsvshift_to_cp
			{
				constexpr auto color_cp = 0x1d0;
				constexpr auto color_gem_enable_cp = 0x1d4;
				constexpr auto output_cp = 0x1d8;
				constexpr auto default_hsvcolor = 0x1dc;
			} // namespace op_hsvshift_to_cp

			namespace op_remap_bounding_volumeto_cp
			{
				constexpr auto out_control_point_number = 0x1d0;
				constexpr auto input_min = 0x1d4;
				constexpr auto input_max = 0x1d8;
				constexpr auto output_min = 0x1dc;
				constexpr auto output_max = 0x1e0;
			} // namespace op_remap_bounding_volumeto_cp

			namespace op_render_screen_shake
			{
				constexpr auto duration_scale = 0x200;
				constexpr auto radius_scale = 0x204;
				constexpr auto frequency_scale = 0x208;
				constexpr auto amplitude_scale = 0x20c;
				constexpr auto radius_field = 0x210;
				constexpr auto duration_field = 0x214;
				constexpr auto frequency_field = 0x218;
				constexpr auto amplitude_field = 0x21c;
				constexpr auto filter_cp = 0x220;
			} // namespace op_render_screen_shake

			namespace op_fade_in
			{
				constexpr auto fade_in_time_min = 0x1c0;
				constexpr auto fade_in_time_max = 0x1c4;
				constexpr auto fade_in_time_exp = 0x1c8;
				constexpr auto proportional = 0x1cc;
			} // namespace op_fade_in

			namespace op_set_simulation_rate
			{
				constexpr auto simulation_scale = 0x1d0;
			} // namespace op_set_simulation_rate

			namespace init_orient2_drel_to_cp
			{
				constexpr auto cp = 0x1c0;
				constexpr auto field_output = 0x1c4;
				constexpr auto rot_offset = 0x1c8;
			} // namespace init_orient2_drel_to_cp

			namespace op_curl_noise_force
			{
				constexpr auto noise_type = 0x1d0;
				constexpr auto vec_noise_freq = 0x1d8;
				constexpr auto vec_noise_scale = 0x830;
				constexpr auto vec_offset = 0xe88;
				constexpr auto vec_offset_rate = 0x14e0;
				constexpr auto worley_seed = 0x1b38;
				constexpr auto worley_jitter = 0x1c90;
			} // namespace op_curl_noise_force

			namespace op_set_control_point_rotation
			{
				constexpr auto vec_rot_axis = 0x1d0;
				constexpr auto rot_rate = 0x828;
				constexpr auto cp = 0x980;
				constexpr auto local_cp = 0x984;
			} // namespace op_set_control_point_rotation

			namespace op_remap_cpto_cp
			{
				constexpr auto input_control_point = 0x1d0;
				constexpr auto output_control_point = 0x1d4;
				constexpr auto input_field = 0x1d8;
				constexpr auto output_field = 0x1dc;
				constexpr auto input_min = 0x1e0;
				constexpr auto input_max = 0x1e4;
				constexpr auto output_min = 0x1e8;
				constexpr auto output_max = 0x1ec;
				constexpr auto derivative = 0x1f0;
				constexpr auto interp_rate = 0x1f4;
			} // namespace op_remap_cpto_cp

			namespace op_remap_dot_product_to_scalar
			{
				constexpr auto input_cp1 = 0x1c0;
				constexpr auto input_cp2 = 0x1c4;
				constexpr auto field_output = 0x1c8;
				constexpr auto input_min = 0x1cc;
				constexpr auto input_max = 0x1d0;
				constexpr auto output_min = 0x1d4;
				constexpr auto output_max = 0x1d8;
				constexpr auto use_particle_velocity = 0x1dc;
				constexpr auto set_method = 0x1e0;
				constexpr auto active_range = 0x1e4;
				constexpr auto use_particle_normal = 0x1e5;
			} // namespace op_remap_dot_product_to_scalar

			namespace op_remap_average_scalar_valueto_cp
			{
				constexpr auto out_control_point_number = 0x1d0;
				constexpr auto out_vector_field = 0x1d4;
				constexpr auto field = 0x1d8;
				constexpr auto input_min = 0x1dc;
				constexpr auto input_max = 0x1e0;
				constexpr auto output_min = 0x1e4;
				constexpr auto output_max = 0x1e8;
			} // namespace op_remap_average_scalar_valueto_cp

			namespace op_set_control_point_to_center
			{
				constexpr auto cp1 = 0x1d0;
				constexpr auto vec_cp1_pos = 0x1d4;
				constexpr auto set_parent = 0x1e0;
			} // namespace op_set_control_point_to_center

			namespace op_remap_control_point_orientation_to_rotation
			{
				constexpr auto cp = 0x1c0;
				constexpr auto field_output = 0x1c4;
				constexpr auto offset_rot = 0x1c8;
				constexpr auto component = 0x1cc;
			} // namespace op_remap_control_point_orientation_to_rotation

			namespace op_distance_to_transform
			{
				constexpr auto field_output = 0x1c0;
				constexpr auto input_min = 0x1c8;
				constexpr auto input_max = 0x320;
				constexpr auto output_min = 0x478;
				constexpr auto output_max = 0x5d0;
				constexpr auto transform_start = 0x728;
				constexpr auto los = 0x790;
				constexpr auto collision_group_name_arr = 0x791;
				constexpr auto trace_set = 0x814;
				constexpr auto max_trace_length = 0x818;
				constexpr auto losscale = 0x81c;
				constexpr auto set_method = 0x820;
				constexpr auto active_range = 0x824;
				constexpr auto additive = 0x825;
				constexpr auto vec_component_scale = 0x828;
			} // namespace op_distance_to_transform

			namespace op_render_standard_light
			{
				constexpr auto light_type = 0x200;
				constexpr auto vec_color_scale = 0x208;
				constexpr auto color_blend_type = 0x860;
				constexpr auto intensity = 0x868;
				constexpr auto cast_shadows = 0x9c0;
				constexpr auto theta = 0x9c8;
				constexpr auto phi = 0xb20;
				constexpr auto radius_multiplier = 0xc78;
				constexpr auto attenuation_style = 0xdd0;
				constexpr auto falloff_linearity = 0xdd8;
				constexpr auto fifty_percent_falloff = 0xf30;
				constexpr auto zero_percent_falloff = 0x1088;
				constexpr auto render_diffuse = 0x11e0;
				constexpr auto render_specular = 0x11e1;
				constexpr auto light_cookie = 0x11e8;
				constexpr auto priority = 0x11f0;
				constexpr auto fog_lighting_mode = 0x11f4;
				constexpr auto fog_contribution = 0x11f8;
				constexpr auto capsule_light_behavior = 0x1350;
				constexpr auto capsule_length = 0x1354;
				constexpr auto reverse_order = 0x1358;
				constexpr auto closed_loop = 0x1359;
				constexpr auto prev_pnt_source = 0x135c;
				constexpr auto max_length = 0x1360;
				constexpr auto min_length = 0x1364;
				constexpr auto ignore_dt = 0x1368;
				constexpr auto constrain_radius_to_length_ratio = 0x136c;
				constexpr auto length_scale = 0x1370;
				constexpr auto length_fade_in_time = 0x1374;
			} // namespace op_render_standard_light

			namespace cparticle_variable_ref
			{
				constexpr auto variable_name = 0x0;
				constexpr auto variable_type = 0x38;
			} // namespace cparticle_variable_ref

			namespace op_wind_force
			{
				constexpr auto v_force = 0x1d0;
			} // namespace op_wind_force

			namespace float_input_material_variable_t
			{
				constexpr auto str_variable = 0x0;
				constexpr auto input = 0x8;
			} // namespace float_input_material_variable_t

			namespace init_remap_cpto_scalar
			{
				constexpr auto cpinput = 0x1c0;
				constexpr auto field_output = 0x1c4;
				constexpr auto field = 0x1c8;
				constexpr auto input_min = 0x1cc;
				constexpr auto input_max = 0x1d0;
				constexpr auto output_min = 0x1d4;
				constexpr auto output_max = 0x1d8;
				constexpr auto start_time = 0x1dc;
				constexpr auto end_time = 0x1e0;
				constexpr auto set_method = 0x1e4;
				constexpr auto remap_bias = 0x1e8;
			} // namespace init_remap_cpto_scalar

			namespace op_render_status_effect_citadel
			{
				constexpr auto texture_color_warp = 0x200;
				constexpr auto texture_normal = 0x208;
				constexpr auto texture_metalness = 0x210;
				constexpr auto texture_roughness = 0x218;
				constexpr auto texture_self_illum = 0x220;
				constexpr auto texture_detail = 0x228;
			} // namespace op_render_status_effect_citadel

			namespace op_clamp_vector
			{
				constexpr auto field_output = 0x1c0;
				constexpr auto vec_output_min = 0x1c8;
				constexpr auto vec_output_max = 0x820;
			} // namespace op_clamp_vector

			namespace cpath_parameters
			{
				constexpr auto start_control_point_number = 0x0;
				constexpr auto end_control_point_number = 0x4;
				constexpr auto bulge_control = 0x8;
				constexpr auto bulge = 0xc;
				constexpr auto mid_point = 0x10;
				constexpr auto v_start_point_offset = 0x14;
				constexpr auto v_mid_point_offset = 0x20;
				constexpr auto v_end_offset = 0x2c;
			} // namespace cpath_parameters

			namespace op_stop_after_cpduration
			{
				constexpr auto duration = 0x1d0;
				constexpr auto destroy_immediately = 0x328;
				constexpr auto play_end_cap = 0x329;
			} // namespace op_stop_after_cpduration

			namespace op_maintain_sequential_path
			{
				constexpr auto max_distance = 0x1c0;
				constexpr auto num_to_assign = 0x1c4;
				constexpr auto cohesion_strength = 0x1c8;
				constexpr auto tolerance = 0x1cc;
				constexpr auto loop = 0x1d0;
				constexpr auto use_particle_count = 0x1d1;
				constexpr auto path_params = 0x1e0;
			} // namespace op_maintain_sequential_path

			namespace op_set_control_point_from_object_scale
			{
				constexpr auto cpinput = 0x1d0;
				constexpr auto cpoutput = 0x1d4;
			} // namespace op_set_control_point_from_object_scale

			namespace op_remap_named_model_element_once_timed
			{
				constexpr auto h_model = 0x1c0;
				constexpr auto in_names = 0x1c8;
				constexpr auto out_names = 0x1e0;
				constexpr auto fallback_names = 0x1f8;
				constexpr auto model_from_renderer = 0x210;
				constexpr auto proportional = 0x211;
				constexpr auto field_input = 0x214;
				constexpr auto field_output = 0x218;
				constexpr auto remap_time = 0x21c;
			} // namespace op_remap_named_model_element_once_timed

			namespace op_ramp_scalar_spline
			{
				constexpr auto rate_min = 0x1c0;
				constexpr auto rate_max = 0x1c4;
				constexpr auto start_time_min = 0x1c8;
				constexpr auto start_time_max = 0x1cc;
				constexpr auto end_time_min = 0x1d0;
				constexpr auto end_time_max = 0x1d4;
				constexpr auto bias = 0x1d8;
				constexpr auto field = 0x200;
				constexpr auto proportional_op = 0x204;
				constexpr auto ease_out = 0x205;
			} // namespace op_ramp_scalar_spline

			namespace op_color_interpolate
			{
				constexpr auto color_fade = 0x1c0;
				constexpr auto fade_start_time = 0x1d0;
				constexpr auto fade_end_time = 0x1d4;
				constexpr auto field_output = 0x1d8;
				constexpr auto ease_in_out = 0x1dc;
				constexpr auto use_new_code = 0x1dd;
			} // namespace op_color_interpolate

			namespace particle_world_handle__
			{
				constexpr auto unused = 0x0;
			} // namespace particle_world_handle__

			namespace op_fade_and_kill
			{
				constexpr auto start_fade_in_time = 0x1c0;
				constexpr auto end_fade_in_time = 0x1c4;
				constexpr auto start_fade_out_time = 0x1c8;
				constexpr auto end_fade_out_time = 0x1cc;
				constexpr auto start_alpha = 0x1d0;
				constexpr auto end_alpha = 0x1d4;
				constexpr auto force_preserve_particle_order = 0x1d8;
			} // namespace op_fade_and_kill

			namespace init_remap_initial_transform_direction_to_rotation
			{
				constexpr auto transform_input = 0x1c0;
				constexpr auto field_output = 0x228;
				constexpr auto offset_rot = 0x22c;
				constexpr auto component = 0x230;
			} // namespace init_remap_initial_transform_direction_to_rotation

			namespace init_position_offset_to_cp
			{
				constexpr auto control_point_number_start = 0x1c0;
				constexpr auto control_point_number_end = 0x1c4;
				constexpr auto local_coords = 0x1c8;
			} // namespace init_position_offset_to_cp

			namespace op_maintain_emitter
			{
				constexpr auto particles_to_maintain = 0x1c0;
				constexpr auto start_time = 0x318;
				constexpr auto emission_duration = 0x320;
				constexpr auto emission_rate = 0x478;
				constexpr auto snapshot_control_point = 0x47c;
				constexpr auto emit_instantaneously = 0x480;
				constexpr auto final_emit_on_stop = 0x481;
				constexpr auto scale = 0x488;
			} // namespace op_maintain_emitter

			namespace init_velocity_from_normal
			{
				constexpr auto speed_min = 0x1c0;
				constexpr auto speed_max = 0x1c4;
				constexpr auto ignore_dt = 0x1c8;
			} // namespace init_velocity_from_normal

			namespace op_max_velocity
			{
				constexpr auto max_velocity = 0x1c0;
				constexpr auto min_velocity = 0x1c4;
				constexpr auto override_cp = 0x1c8;
				constexpr auto override_cpfield = 0x1cc;
			} // namespace op_max_velocity

			namespace op_render_projected
			{
				constexpr auto project_character = 0x200;
				constexpr auto project_world = 0x201;
				constexpr auto project_water = 0x202;
				constexpr auto flip_horizontal = 0x203;
				constexpr auto enable_projected_depth_controls = 0x204;
				constexpr auto min_projection_depth = 0x208;
				constexpr auto max_projection_depth = 0x20c;
				constexpr auto h_projected_material = 0x210;
				constexpr auto animation_time_scale = 0x218;
				constexpr auto orient_to_normal = 0x21c;
				constexpr auto material_vars = 0x220;
			} // namespace op_render_projected

			namespace init_random_named_model_element
			{
				constexpr auto h_model = 0x1c0;
				constexpr auto names = 0x1c8;
				constexpr auto shuffle = 0x1e0;
				constexpr auto linear = 0x1e1;
				constexpr auto model_from_renderer = 0x1e2;
				constexpr auto field_output = 0x1e4;
			} // namespace init_random_named_model_element

			namespace op_per_particle_force
			{
				constexpr auto force_scale = 0x1d0;
				constexpr auto v_force = 0x328;
				constexpr auto cp = 0x980;
			} // namespace op_per_particle_force

			namespace op_inherit_from_peer_system
			{
				constexpr auto field_output = 0x1c0;
				constexpr auto field_input = 0x1c4;
				constexpr auto increment = 0x1c8;
				constexpr auto group_id = 0x1cc;
			} // namespace op_inherit_from_peer_system

			namespace init_create_on_model
			{
				constexpr auto model_input = 0x1c0;
				constexpr auto transform_input = 0x220;
				constexpr auto force_in_model = 0x288;
				constexpr auto desired_hitbox = 0x28c;
				constexpr auto hitbox_value_from_control_point_index = 0x290;
				constexpr auto vec_hit_box_scale = 0x298;
				constexpr auto bone_velocity = 0x8f0;
				constexpr auto max_bone_velocity = 0x8f4;
				constexpr auto vec_direction_bias = 0x8f8;
				constexpr auto hitbox_set_name_arr = 0xf50;
				constexpr auto local_coords = 0xfd0;
				constexpr auto use_bones = 0xfd1;
				constexpr auto shell_size = 0xfd8;
			} // namespace init_create_on_model

			namespace init_init_float
			{
				constexpr auto input_value = 0x1c0;
				constexpr auto output_field = 0x318;
				constexpr auto set_method = 0x31c;
				constexpr auto input_strength = 0x320;
			} // namespace init_init_float

			namespace op_movement_rotate_particle_around_axis
			{
				constexpr auto vec_rot_axis = 0x1c0;
				constexpr auto rot_rate = 0x818;
				constexpr auto transform_input = 0x970;
				constexpr auto local_space = 0x9d8;
			} // namespace op_movement_rotate_particle_around_axis

			namespace op_set_control_point_positions
			{
				constexpr auto use_world_location = 0x1d0;
				constexpr auto orient = 0x1d1;
				constexpr auto set_once = 0x1d2;
				constexpr auto cp1 = 0x1d4;
				constexpr auto cp2 = 0x1d8;
				constexpr auto cp3 = 0x1dc;
				constexpr auto cp4 = 0x1e0;
				constexpr auto vec_cp1_pos = 0x1e4;
				constexpr auto vec_cp2_pos = 0x1f0;
				constexpr auto vec_cp3_pos = 0x1fc;
				constexpr auto vec_cp4_pos = 0x208;
				constexpr auto head_location = 0x214;
			} // namespace op_set_control_point_positions

			namespace op_constrain_distance_to_user_specified_path
			{
				constexpr auto min_distance = 0x1c0;
				constexpr auto max_distance = 0x1c4;
				constexpr auto time_scale = 0x1c8;
				constexpr auto looped_path = 0x1cc;
				constexpr auto point_list = 0x1d0;
			} // namespace op_constrain_distance_to_user_specified_path

			namespace init_create_in_epitrochoid
			{
				constexpr auto component1 = 0x1c0;
				constexpr auto component2 = 0x1c4;
				constexpr auto transform_input = 0x1c8;
				constexpr auto particle_density = 0x230;
				constexpr auto offset = 0x388;
				constexpr auto radius1 = 0x4e0;
				constexpr auto radius2 = 0x638;
				constexpr auto use_count = 0x790;
				constexpr auto use_local_coords = 0x791;
				constexpr auto offset_existing_pos = 0x792;
			} // namespace init_create_in_epitrochoid

			namespace op_density_force
			{
				constexpr auto radius_scale = 0x1d0;
				constexpr auto force_scale = 0x1d4;
				constexpr auto target_density = 0x1d8;
			} // namespace op_density_force

			namespace init_create_particle_impulse
			{
				constexpr auto input_radius = 0x1c0;
				constexpr auto input_magnitude = 0x318;
				constexpr auto falloff_function = 0x470;
				constexpr auto input_falloff_exp = 0x478;
				constexpr auto impulse_type = 0x5d0;
			} // namespace init_create_particle_impulse

			namespace op_remap_cpto_vector
			{
				constexpr auto cpinput = 0x1c0;
				constexpr auto field_output = 0x1c4;
				constexpr auto local_space_cp = 0x1c8;
				constexpr auto v_input_min = 0x1cc;
				constexpr auto v_input_max = 0x1d8;
				constexpr auto v_output_min = 0x1e4;
				constexpr auto v_output_max = 0x1f0;
				constexpr auto start_time = 0x1fc;
				constexpr auto end_time = 0x200;
				constexpr auto interp_rate = 0x204;
				constexpr auto set_method = 0x208;
				constexpr auto offset = 0x20c;
				constexpr auto accelerate = 0x20d;
			} // namespace op_remap_cpto_vector

			namespace op_pin_particle_to_cp
			{
				constexpr auto control_point_number = 0x1c0;
				constexpr auto vec_offset = 0x1c8;
				constexpr auto offset_local = 0x820;
				constexpr auto particle_selection = 0x824;
				constexpr auto particle_number = 0x828;
				constexpr auto pin_break_type = 0x980;
				constexpr auto break_distance = 0x988;
				constexpr auto break_speed = 0xae0;
				constexpr auto age = 0xc38;
				constexpr auto break_control_point_number = 0xd90;
				constexpr auto break_control_point_number2 = 0xd94;
				constexpr auto break_value = 0xd98;
				constexpr auto interpolation = 0xef0;
			} // namespace op_pin_particle_to_cp

			namespace op_rt_env_cull
			{
				constexpr auto vec_test_dir = 0x1c0;
				constexpr auto vec_test_normal = 0x1cc;
				constexpr auto cull_on_miss = 0x1d8;
				constexpr auto stick_instead_of_cull = 0x1d9;
				constexpr auto rt_env_name_arr = 0x1da;
				constexpr auto rtenv_cp = 0x25c;
				constexpr auto component = 0x260;
			} // namespace op_rt_env_cull

			namespace op_drive_cpfrom_global_sound_float
			{
				constexpr auto output_control_point = 0x1d0;
				constexpr auto output_field = 0x1d4;
				constexpr auto input_min = 0x1d8;
				constexpr auto input_max = 0x1dc;
				constexpr auto output_min = 0x1e0;
				constexpr auto output_max = 0x1e4;
				constexpr auto stack_name = 0x1e8;
				constexpr auto operator_name = 0x1f0;
				constexpr auto field_name = 0x1f8;
			} // namespace op_drive_cpfrom_global_sound_float

			namespace op_remap_direction_to_cpto_vector
			{
				constexpr auto cp = 0x1c0;
				constexpr auto field_output = 0x1c4;
				constexpr auto scale = 0x1c8;
				constexpr auto offset_rot = 0x1cc;
				constexpr auto vec_offset_axis = 0x1d0;
				constexpr auto normalize = 0x1dc;
				constexpr auto field_strength = 0x1e0;
			} // namespace op_remap_direction_to_cpto_vector

			namespace op_chladni_wave
			{
				constexpr auto field_output = 0x1c0;
				constexpr auto input_min = 0x1c8;
				constexpr auto input_max = 0x320;
				constexpr auto output_min = 0x478;
				constexpr auto output_max = 0x5d0;
				constexpr auto vec_wave_length = 0x728;
				constexpr auto vec_harmonics = 0xd80;
				constexpr auto set_method = 0x13d8;
				constexpr auto local_space_control_point = 0x13dc;
				constexpr auto b3_d = 0x13e0;
			} // namespace op_chladni_wave

			namespace op_set_child_control_points
			{
				constexpr auto child_group_id = 0x1c0;
				constexpr auto first_control_point = 0x1c4;
				constexpr auto num_control_points = 0x1c8;
				constexpr auto first_source_point = 0x1d0;
				constexpr auto reverse = 0x328;
				constexpr auto set_orientation = 0x329;
			} // namespace op_set_child_control_points

			namespace op_shape_matching_constraint
			{
				constexpr auto shape_restoration_time = 0x1c0;
			} // namespace op_shape_matching_constraint

			namespace init_normal_align_to_cp
			{
				constexpr auto transform_input = 0x1c0;
				constexpr auto control_point_axis = 0x228;
			} // namespace init_normal_align_to_cp

			namespace crandom_number_generator_parameters
			{
				constexpr auto distribute_evenly = 0x0;
				constexpr auto seed = 0x4;
			} // namespace crandom_number_generator_parameters

			namespace op_set_control_point_to_water_surface
			{
				constexpr auto source_cp = 0x1d0;
				constexpr auto dest_cp = 0x1d4;
				constexpr auto flow_cp = 0x1d8;
				constexpr auto active_cp = 0x1dc;
				constexpr auto active_cpfield = 0x1e0;
				constexpr auto retest_rate = 0x1e8;
				constexpr auto adaptive_threshold = 0x340;
			} // namespace op_set_control_point_to_water_surface

			namespace init_inherit_velocity
			{
				constexpr auto control_point_number = 0x1c0;
				constexpr auto velocity_scale = 0x1c4;
			} // namespace init_inherit_velocity

			namespace op_render_cables
			{
				constexpr auto radius_scale = 0x200;
				constexpr auto alpha_scale = 0x358;
				constexpr auto vec_color_scale = 0x4b0;
				constexpr auto color_blend_type = 0xb08;
				constexpr auto h_material = 0xb10;
				constexpr auto texture_repetition_mode = 0xb18;
				constexpr auto texture_repeats_per_segment = 0xb20;
				constexpr auto texture_repeats_circumference = 0xc78;
				constexpr auto color_map_offset_v = 0xdd0;
				constexpr auto color_map_offset_u = 0xf28;
				constexpr auto normal_map_offset_v = 0x1080;
				constexpr auto normal_map_offset_u = 0x11d8;
				constexpr auto draw_cable_caps = 0x1330;
				constexpr auto cap_roundness = 0x1334;
				constexpr auto cap_offset_amount = 0x1338;
				constexpr auto tess_scale = 0x133c;
				constexpr auto min_tesselation = 0x1340;
				constexpr auto max_tesselation = 0x1344;
				constexpr auto roundness = 0x1348;
				constexpr auto lighting_transform = 0x1350;
				constexpr auto material_float_vars = 0x13b8;
				constexpr auto material_vec_vars = 0x13e8;
			} // namespace op_render_cables

			namespace init_init_from_cpsnapshot
			{
				constexpr auto control_point_number = 0x1c0;
				constexpr auto attribute_to_read = 0x1c4;
				constexpr auto attribute_to_write = 0x1c8;
				constexpr auto local_space_cp = 0x1cc;
				constexpr auto random = 0x1d0;
				constexpr auto reverse = 0x1d1;
				constexpr auto snap_shot_increment = 0x1d8;
				constexpr auto manual_snapshot_index = 0x330;
				constexpr auto random_seed = 0x488;
				constexpr auto local_space_angles = 0x48c;
			} // namespace init_init_from_cpsnapshot

			namespace init_plane_cull
			{
				constexpr auto control_point = 0x1c0;
				constexpr auto distance = 0x1c8;
				constexpr auto cull_inside = 0x320;
			} // namespace init_plane_cull

			namespace op_percentage_between_transforms
			{
				constexpr auto field_output = 0x1c0;
				constexpr auto input_min = 0x1c4;
				constexpr auto input_max = 0x1c8;
				constexpr auto output_min = 0x1cc;
				constexpr auto output_max = 0x1d0;
				constexpr auto transform_start = 0x1d8;
				constexpr auto transform_end = 0x240;
				constexpr auto set_method = 0x2a8;
				constexpr auto active_range = 0x2ac;
				constexpr auto radial_check = 0x2ad;
			} // namespace op_percentage_between_transforms

			namespace op_set_control_point_field_from_vector_expression
			{
				constexpr auto expression = 0x1d0;
				constexpr auto vec_input1 = 0x1d8;
				constexpr auto vec_input2 = 0x830;
				constexpr auto output_remap = 0xe88;
				constexpr auto output_cp = 0xfe0;
				constexpr auto out_vector_field = 0xfe4;
			} // namespace op_set_control_point_field_from_vector_expression

			namespace op_difference_previous_particle
			{
				constexpr auto field_input = 0x1c0;
				constexpr auto field_output = 0x1c4;
				constexpr auto input_min = 0x1c8;
				constexpr auto input_max = 0x1cc;
				constexpr auto output_min = 0x1d0;
				constexpr auto output_max = 0x1d4;
				constexpr auto set_method = 0x1d8;
				constexpr auto active_range = 0x1dc;
				constexpr auto set_previous_particle = 0x1dd;
			} // namespace op_difference_previous_particle

			namespace op_set_control_point_to_hmd
			{
				constexpr auto cp1 = 0x1d0;
				constexpr auto vec_cp1_pos = 0x1d4;
				constexpr auto orient_to_hmd = 0x1e0;
			} // namespace op_set_control_point_to_hmd

			namespace op_clamp_scalar
			{
				constexpr auto field_output = 0x1c0;
				constexpr auto output_min = 0x1c8;
				constexpr auto output_max = 0x320;
			} // namespace op_clamp_scalar

			namespace init_initial_repulsion_velocity
			{
				constexpr auto collision_group_name_arr = 0x1c0;
				constexpr auto trace_set = 0x240;
				constexpr auto vec_output_min = 0x244;
				constexpr auto vec_output_max = 0x250;
				constexpr auto control_point_number = 0x25c;
				constexpr auto per_particle = 0x260;
				constexpr auto translate = 0x261;
				constexpr auto proportional = 0x262;
				constexpr auto trace_length = 0x264;
				constexpr auto per_particle_tr = 0x268;
				constexpr auto inherit = 0x269;
				constexpr auto child_cp = 0x26c;
				constexpr auto child_group_id = 0x270;
			} // namespace init_initial_repulsion_velocity

			namespace op_lerp_scalar
			{
				constexpr auto field_output = 0x1c0;
				constexpr auto output = 0x1c8;
				constexpr auto start_time = 0x320;
				constexpr auto end_time = 0x324;
			} // namespace op_lerp_scalar

			namespace op_movement_move_along_skinned_cpsnapshot
			{
				constexpr auto control_point_number = 0x1c0;
				constexpr auto snapshot_control_point_number = 0x1c4;
				constexpr auto set_normal = 0x1c8;
				constexpr auto set_radius = 0x1c9;
				constexpr auto interpolation = 0x1d0;
				constexpr auto tvalue = 0x328;
			} // namespace op_movement_move_along_skinned_cpsnapshot

			namespace init_set_hitbox_to_model
			{
				constexpr auto control_point_number = 0x1c0;
				constexpr auto force_in_model = 0x1c4;
				constexpr auto desired_hitbox = 0x1c8;
				constexpr auto vec_hit_box_scale = 0x1d0;
				constexpr auto vec_direction_bias = 0x828;
				constexpr auto maintain_hitbox = 0x834;
				constexpr auto use_bones = 0x835;
				constexpr auto hitbox_set_name_arr = 0x836;
				constexpr auto shell_size = 0x8b8;
			} // namespace init_set_hitbox_to_model

			namespace init_init_vec
			{
				constexpr auto input_value = 0x1c0;
				constexpr auto output_field = 0x818;
				constexpr auto set_method = 0x81c;
				constexpr auto normalized_output = 0x820;
				constexpr auto write_previous_position = 0x821;
			} // namespace init_init_vec

			namespace op_remap_density_gradient_to_vector_attribute
			{
				constexpr auto radius_scale = 0x1c0;
				constexpr auto field_output = 0x1c4;
			} // namespace op_remap_density_gradient_to_vector_attribute

			namespace op_alpha_decay
			{
				constexpr auto min_alpha = 0x1c0;
			} // namespace op_alpha_decay

			namespace op_sequence_from_model
			{
				constexpr auto control_point_number = 0x1c0;
				constexpr auto field_output = 0x1c4;
				constexpr auto field_output_anim = 0x1c8;
				constexpr auto input_min = 0x1cc;
				constexpr auto input_max = 0x1d0;
				constexpr auto output_min = 0x1d4;
				constexpr auto output_max = 0x1d8;
				constexpr auto set_method = 0x1dc;
			} // namespace op_sequence_from_model

			namespace op_color_adjust_hsl
			{
				constexpr auto hue_adjust = 0x1c0;
				constexpr auto saturation_adjust = 0x318;
				constexpr auto lightness_adjust = 0x470;
			} // namespace op_color_adjust_hsl

			namespace op_fade_and_kill_for_tracers
			{
				constexpr auto start_fade_in_time = 0x1c0;
				constexpr auto end_fade_in_time = 0x1c4;
				constexpr auto start_fade_out_time = 0x1c8;
				constexpr auto end_fade_out_time = 0x1cc;
				constexpr auto start_alpha = 0x1d0;
				constexpr auto end_alpha = 0x1d4;
			} // namespace op_fade_and_kill_for_tracers

			namespace op_noise
			{
				constexpr auto field_output = 0x1c0;
				constexpr auto output_min = 0x1c4;
				constexpr auto output_max = 0x1c8;
				constexpr auto fl4_noise_scale = 0x1cc;
				constexpr auto additive = 0x1d0;
				constexpr auto noise_animation_time_scale = 0x1d4;
			} // namespace op_noise

			namespace op_collide_with_self
			{
				constexpr auto radius_scale = 0x1c0;
				constexpr auto minimum_speed = 0x318;
			} // namespace op_collide_with_self

			namespace op_lag_compensation
			{
				constexpr auto desired_velocity_cp = 0x1c0;
				constexpr auto latency_cp = 0x1c4;
				constexpr auto latency_cpfield = 0x1c8;
				constexpr auto desired_velocity_cpfield = 0x1cc;
			} // namespace op_lag_compensation

			namespace init_init_skinned_position_from_cpsnapshot
			{
				constexpr auto snapshot_control_point_number = 0x1c0;
				constexpr auto control_point_number = 0x1c4;
				constexpr auto random = 0x1c8;
				constexpr auto random_seed = 0x1cc;
				constexpr auto rigid = 0x1d0;
				constexpr auto set_normal = 0x1d1;
				constexpr auto ignore_dt = 0x1d2;
				constexpr auto min_normal_velocity = 0x1d4;
				constexpr auto max_normal_velocity = 0x1d8;
				constexpr auto increment = 0x1dc;
				constexpr auto full_loop_increment = 0x1e0;
				constexpr auto snap_shot_start_point = 0x1e4;
				constexpr auto bone_velocity = 0x1e8;
				constexpr auto bone_velocity_max = 0x1ec;
				constexpr auto copy_color = 0x1f0;
				constexpr auto copy_alpha = 0x1f1;
				constexpr auto set_radius = 0x1f2;
			} // namespace init_init_skinned_position_from_cpsnapshot

			namespace op_rotate_vector
			{
				constexpr auto field_output = 0x1c0;
				constexpr auto vec_rot_axis_min = 0x1c4;
				constexpr auto vec_rot_axis_max = 0x1d0;
				constexpr auto rot_rate_min = 0x1dc;
				constexpr auto rot_rate_max = 0x1e0;
				constexpr auto normalize = 0x1e4;
				constexpr auto scale = 0x1e8;
			} // namespace op_rotate_vector

			namespace op_connect_parent_particle_to_nearest
			{
				constexpr auto first_control_point = 0x1c0;
				constexpr auto second_control_point = 0x1c4;
			} // namespace op_connect_parent_particle_to_nearest

			namespace op_render_omni2_light
			{
				constexpr auto light_type = 0x200;
				constexpr auto v_color_blend = 0x208;
				constexpr auto color_blend_type = 0x860;
				constexpr auto brightness_unit = 0x864;
				constexpr auto brightness_lumens = 0x868;
				constexpr auto brightness_candelas = 0x9c0;
				constexpr auto cast_shadows = 0xb18;
				constexpr auto luminaire_radius = 0xb20;
				constexpr auto skirt = 0xc78;
				constexpr auto range = 0xdd0;
				constexpr auto inner_cone_angle = 0xf28;
				constexpr auto outer_cone_angle = 0x1080;
				constexpr auto h_light_cookie = 0x11d8;
				constexpr auto spherical_cookie = 0x11e0;
			} // namespace op_render_omni2_light

			namespace particle_ehandle__
			{
				constexpr auto unused = 0x0;
			} // namespace particle_ehandle__

			namespace init_create_from_parent_particles
			{
				constexpr auto velocity_scale = 0x1c0;
				constexpr auto increment = 0x1c4;
				constexpr auto random_distribution = 0x1c8;
				constexpr auto random_seed = 0x1cc;
				constexpr auto sub_frame = 0x1d0;
			} // namespace init_create_from_parent_particles

			namespace op_set_vec
			{
				constexpr auto input_value = 0x1c0;
				constexpr auto output_field = 0x818;
				constexpr auto set_method = 0x81c;
				constexpr auto lerp = 0x820;
				constexpr auto normalized_output = 0x978;
			} // namespace op_set_vec

			namespace op_movement_maintain_offset
			{
				constexpr auto vec_offset = 0x1c0;
				constexpr auto cp = 0x1cc;
				constexpr auto radius_scale = 0x1d0;
			} // namespace op_movement_maintain_offset

			namespace op_lock_to_bone
			{
				constexpr auto model_input = 0x1c0;
				constexpr auto transform_input = 0x220;
				constexpr auto life_time_fade_start = 0x288;
				constexpr auto life_time_fade_end = 0x28c;
				constexpr auto jump_threshold = 0x290;
				constexpr auto prev_pos_scale = 0x294;
				constexpr auto hitbox_set_name_arr = 0x298;
				constexpr auto rigid = 0x318;
				constexpr auto use_bones = 0x319;
				constexpr auto field_output = 0x31c;
				constexpr auto field_output_prev = 0x320;
				constexpr auto rotation_set_type = 0x324;
				constexpr auto rigid_rotation_lock = 0x328;
				constexpr auto vec_rotation = 0x330;
				constexpr auto rot_lerp = 0x988;
			} // namespace op_lock_to_bone

			namespace op_percentage_between_transform_lerp_cps
			{
				constexpr auto field_output = 0x1c0;
				constexpr auto input_min = 0x1c4;
				constexpr auto input_max = 0x1c8;
				constexpr auto transform_start = 0x1d0;
				constexpr auto transform_end = 0x238;
				constexpr auto output_start_cp = 0x2a0;
				constexpr auto output_start_field = 0x2a4;
				constexpr auto output_end_cp = 0x2a8;
				constexpr auto output_end_field = 0x2ac;
				constexpr auto set_method = 0x2b0;
				constexpr auto active_range = 0x2b4;
				constexpr auto radial_check = 0x2b5;
			} // namespace op_percentage_between_transform_lerp_cps

			namespace control_point_reference_t
			{
				constexpr auto control_point_name_string = 0x0;
				constexpr auto v_offset_from_control_point = 0x4;
				constexpr auto offset_in_local_space = 0x10;
			} // namespace control_point_reference_t

			namespace op_dampen_to_cp
			{
				constexpr auto control_point_number = 0x1c0;
				constexpr auto range = 0x1c4;
				constexpr auto scale = 0x1c8;
			} // namespace op_dampen_to_cp

			namespace op_distance_between_vecs
			{
				constexpr auto field_output = 0x1c0;
				constexpr auto vec_point1 = 0x1c8;
				constexpr auto vec_point2 = 0x820;
				constexpr auto input_min = 0xe78;
				constexpr auto input_max = 0xfd0;
				constexpr auto output_min = 0x1128;
				constexpr auto output_max = 0x1280;
				constexpr auto set_method = 0x13d8;
				constexpr auto delta_time = 0x13dc;
			} // namespace op_distance_between_vecs

			namespace cgeneral_random_rotation
			{
				constexpr auto field_output = 0x1c0;
				constexpr auto degrees = 0x1c4;
				constexpr auto degrees_min = 0x1c8;
				constexpr auto degrees_max = 0x1cc;
				constexpr auto rotation_rand_exponent = 0x1d0;
				constexpr auto randomly_flip_direction = 0x1d4;
			} // namespace cgeneral_random_rotation

			namespace op_remap_vector_component_to_scalar
			{
				constexpr auto field_input = 0x1c0;
				constexpr auto field_output = 0x1c4;
				constexpr auto component = 0x1c8;
			} // namespace op_remap_vector_component_to_scalar

			namespace init_age_noise
			{
				constexpr auto abs_val = 0x1c0;
				constexpr auto abs_val_inv = 0x1c1;
				constexpr auto offset = 0x1c4;
				constexpr auto age_min = 0x1c8;
				constexpr auto age_max = 0x1cc;
				constexpr auto noise_scale = 0x1d0;
				constexpr auto noise_scale_loc = 0x1d4;
				constexpr auto vec_offset_loc = 0x1d8;
			} // namespace init_age_noise

			namespace op_diffusion
			{
				constexpr auto radius_scale = 0x1c0;
				constexpr auto field_output = 0x1c4;
				constexpr auto voxel_grid_resolution = 0x1c8;
			} // namespace op_diffusion

			namespace op_set_control_point_position_to_random_active_cp
			{
				constexpr auto cp1 = 0x1d0;
				constexpr auto head_location_min = 0x1d4;
				constexpr auto head_location_max = 0x1d8;
				constexpr auto reset_rate = 0x1e0;
			} // namespace op_set_control_point_position_to_random_active_cp

			namespace point_definition_with_time_values_t
			{
				constexpr auto time_duration = 0x14;
			} // namespace point_definition_with_time_values_t

			namespace op_set_float_collection
			{
				constexpr auto input_value = 0x1c0;
				constexpr auto output_field = 0x318;
				constexpr auto set_method = 0x31c;
				constexpr auto lerp = 0x320;
			} // namespace op_set_float_collection

			namespace init_random_second_sequence
			{
				constexpr auto sequence_min = 0x1c0;
				constexpr auto sequence_max = 0x1c4;
			} // namespace init_random_second_sequence

			namespace op_inherit_from_parent_particles_v2
			{
				constexpr auto scale = 0x1c0;
				constexpr auto field_output = 0x1c4;
				constexpr auto increment = 0x1c8;
				constexpr auto random_distribution = 0x1cc;
				constexpr auto missing_parent_behavior = 0x1d0;
			} // namespace op_inherit_from_parent_particles_v2

			namespace op_remap_transform_orientation_to_rotations
			{
				constexpr auto transform_input = 0x1c0;
				constexpr auto vec_rotation = 0x228;
				constexpr auto use_quat = 0x234;
				constexpr auto write_normal = 0x235;
			} // namespace op_remap_transform_orientation_to_rotations

			namespace op_remap_cross_product_of_two_vectors_to_vector
			{
				constexpr auto input_vec1 = 0x1c0;
				constexpr auto input_vec2 = 0x818;
				constexpr auto field_output = 0xe70;
				constexpr auto normalize = 0xe74;
			} // namespace op_remap_cross_product_of_two_vectors_to_vector

			namespace op_set_cporientation_to_direction
			{
				constexpr auto input_control_point = 0x1c0;
				constexpr auto output_control_point = 0x1c4;
			} // namespace op_set_cporientation_to_direction

			namespace op_movement_place_on_ground
			{
				constexpr auto offset = 0x1c0;
				constexpr auto max_trace_length = 0x318;
				constexpr auto tolerance = 0x31c;
				constexpr auto trace_offset = 0x320;
				constexpr auto lerp_rate = 0x324;
				constexpr auto collision_group_name_arr = 0x328;
				constexpr auto trace_set = 0x3a8;
				constexpr auto ref_cp1 = 0x3ac;
				constexpr auto ref_cp2 = 0x3b0;
				constexpr auto lerp_cp = 0x3b4;
				constexpr auto trace_miss_behavior = 0x3c0;
				constexpr auto include_shot_hull = 0x3c4;
				constexpr auto include_water = 0x3c5;
				constexpr auto set_normal = 0x3c8;
				constexpr auto scale_offset = 0x3c9;
				constexpr auto preserve_offset_cp = 0x3cc;
				constexpr auto ignore_cp = 0x3d0;
			} // namespace op_movement_place_on_ground

			namespace op_lock_to_point_list
			{
				constexpr auto field_output = 0x1c0;
				constexpr auto point_list = 0x1c8;
				constexpr auto place_along_path = 0x1e0;
				constexpr auto closed_loop = 0x1e1;
				constexpr auto num_points_along_path = 0x1e4;
			} // namespace op_lock_to_point_list

			namespace op_set_cporientation_to_point_at_cp
			{
				constexpr auto input_cp = 0x1d0;
				constexpr auto output_cp = 0x1d4;
				constexpr auto interpolation = 0x1d8;
				constexpr auto b2_dorientation = 0x330;
				constexpr auto avoid_singularity = 0x331;
				constexpr auto point_away = 0x332;
			} // namespace op_set_cporientation_to_point_at_cp

			namespace op_velocity_decay
			{
				constexpr auto min_velocity = 0x1c0;
			} // namespace op_velocity_decay

			namespace op_lerp_end_cap_vector
			{
				constexpr auto field_output = 0x1c0;
				constexpr auto vec_output = 0x1c4;
				constexpr auto lerp_time = 0x1d0;
			} // namespace op_lerp_end_cap_vector

			namespace op_lerp_to_initial_position
			{
				constexpr auto control_point_number = 0x1c0;
				constexpr auto interpolation = 0x1c8;
				constexpr auto cache_field = 0x320;
				constexpr auto scale = 0x328;
				constexpr auto vec_scale = 0x480;
			} // namespace op_lerp_to_initial_position

			namespace op_render_text
			{
				constexpr auto outline_color = 0x200;
				constexpr auto default_text = 0x208;
			} // namespace op_render_text

			namespace op_read_from_neighboring_particle
			{
				constexpr auto field_input = 0x1c0;
				constexpr auto field_output = 0x1c4;
				constexpr auto increment = 0x1c8;
				constexpr auto distance_check = 0x1d0;
				constexpr auto interpolation = 0x328;
			} // namespace op_read_from_neighboring_particle

			namespace sequence_weighted_list_t
			{
				constexpr auto sequence = 0x0;
				constexpr auto relative_weight = 0x4;
			} // namespace sequence_weighted_list_t

			namespace op_remap_sdfgradient_to_vector_attribute
			{
				constexpr auto field_output = 0x1c0;
			} // namespace op_remap_sdfgradient_to_vector_attribute

			namespace init_random_yaw_flip
			{
				constexpr auto percent = 0x1c0;
			} // namespace init_random_yaw_flip

			namespace op_cull
			{
				constexpr auto cull_perc = 0x1c0;
				constexpr auto cull_start = 0x1c4;
				constexpr auto cull_end = 0x1c8;
				constexpr auto cull_exp = 0x1cc;
			} // namespace op_cull

			namespace init_remap_transform_orientation_to_rotations
			{
				constexpr auto transform_input = 0x1c0;
				constexpr auto vec_rotation = 0x228;
				constexpr auto use_quat = 0x234;
				constexpr auto write_normal = 0x235;
			} // namespace init_remap_transform_orientation_to_rotations

			namespace op_normal_lock
			{
				constexpr auto control_point_number = 0x1c0;
			} // namespace op_normal_lock

			namespace op_lock_to_saved_sequential_path_v2
			{
				constexpr auto fade_start = 0x1c0;
				constexpr auto fade_end = 0x1c4;
				constexpr auto cppairs = 0x1c8;
				constexpr auto path_params = 0x1d0;
			} // namespace op_lock_to_saved_sequential_path_v2

			namespace init_remap_initial_direction_to_transform_to_vector
			{
				constexpr auto transform_input = 0x1c0;
				constexpr auto field_output = 0x228;
				constexpr auto scale = 0x22c;
				constexpr auto offset_rot = 0x230;
				constexpr auto vec_offset_axis = 0x234;
				constexpr auto normalize = 0x240;
			} // namespace init_remap_initial_direction_to_transform_to_vector

			namespace vec_input_material_variable_t
			{
				constexpr auto str_variable = 0x0;
				constexpr auto vec_input = 0x8;
			} // namespace vec_input_material_variable_t

			namespace init_create_sequential_path_v2
			{
				constexpr auto max_distance = 0x1c0;
				constexpr auto num_to_assign = 0x318;
				constexpr auto loop = 0x470;
				constexpr auto cppairs = 0x471;
				constexpr auto save_offset = 0x472;
				constexpr auto path_params = 0x480;
			} // namespace init_create_sequential_path_v2

			namespace op_remap_visibility_scalar
			{
				constexpr auto field_input = 0x1c0;
				constexpr auto field_output = 0x1c4;
				constexpr auto input_min = 0x1c8;
				constexpr auto input_max = 0x1cc;
				constexpr auto output_min = 0x1d0;
				constexpr auto output_max = 0x1d4;
				constexpr auto radius_scale = 0x1d8;
			} // namespace op_remap_visibility_scalar

			namespace op_restart_after_duration
			{
				constexpr auto duration_min = 0x1c0;
				constexpr auto duration_max = 0x1c4;
				constexpr auto cp = 0x1c8;
				constexpr auto cpfield = 0x1cc;
				constexpr auto child_group_id = 0x1d0;
				constexpr auto only_children = 0x1d4;
			} // namespace op_restart_after_duration

			namespace op_set_variable
			{
				constexpr auto variable_reference = 0x1d0;
				constexpr auto transform_input = 0x210;
				constexpr auto position_offset = 0x278;
				constexpr auto rotation_offset = 0x284;
				constexpr auto vec_input = 0x290;
				constexpr auto float_input = 0x8e8;
			} // namespace op_set_variable

			namespace init_create_on_model_at_height
			{
				constexpr auto use_bones = 0x1c0;
				constexpr auto force_z = 0x1c1;
				constexpr auto control_point_number = 0x1c4;
				constexpr auto height_cp = 0x1c8;
				constexpr auto use_water_height = 0x1cc;
				constexpr auto desired_height = 0x1d0;
				constexpr auto vec_hit_box_scale = 0x328;
				constexpr auto vec_direction_bias = 0x980;
				constexpr auto bias_type = 0xfd8;
				constexpr auto local_coords = 0xfdc;
				constexpr auto prefer_moving_boxes = 0xfdd;
				constexpr auto hitbox_set_name_arr = 0xfde;
				constexpr auto hitbox_velocity_scale = 0x1060;
				constexpr auto max_bone_velocity = 0x11b8;
			} // namespace init_create_on_model_at_height

			namespace init_random_alpha_window_threshold
			{
				constexpr auto min = 0x1c0;
				constexpr auto max = 0x1c4;
				constexpr auto exponent = 0x1c8;
			} // namespace init_random_alpha_window_threshold

			namespace op_velocity_matching_force
			{
				constexpr auto dir_scale = 0x1c0;
				constexpr auto spd_scale = 0x1c4;
				constexpr auto cpbroadcast = 0x1c8;
			} // namespace op_velocity_matching_force

			namespace op_ramp_cplinear_random
			{
				constexpr auto out_control_point_number = 0x1d0;
				constexpr auto vec_rate_min = 0x1d4;
				constexpr auto vec_rate_max = 0x1e0;
			} // namespace op_ramp_cplinear_random

			namespace init_create_on_grid
			{
				constexpr auto xcount = 0x1c0;
				constexpr auto ycount = 0x318;
				constexpr auto zcount = 0x470;
				constexpr auto xspacing = 0x5c8;
				constexpr auto yspacing = 0x720;
				constexpr auto zspacing = 0x878;
				constexpr auto control_point_number = 0x9d0;
				constexpr auto local_space = 0x9d4;
				constexpr auto center = 0x9d5;
				constexpr auto hollow = 0x9d6;
			} // namespace init_create_on_grid

			namespace op_render_points
			{
				constexpr auto h_material = 0x200;
			} // namespace op_render_points

			namespace init_color_lit_per_particle
			{
				constexpr auto color_min = 0x1d8;
				constexpr auto color_max = 0x1dc;
				constexpr auto tint_min = 0x1e0;
				constexpr auto tint_max = 0x1e4;
				constexpr auto tint_perc = 0x1e8;
				constexpr auto tint_blend_mode = 0x1ec;
				constexpr auto light_amplification = 0x1f0;
			} // namespace init_color_lit_per_particle

			namespace init_position_offset
			{
				constexpr auto offset_min = 0x1c0;
				constexpr auto offset_max = 0x818;
				constexpr auto transform_input = 0xe70;
				constexpr auto local_coords = 0xed8;
				constexpr auto proportional = 0xed9;
				constexpr auto randomness_parameters = 0xedc;
			} // namespace init_position_offset

			namespace op_decay_clamp_count
			{
				constexpr auto count = 0x1c0;
			} // namespace op_decay_clamp_count

			namespace op_render_lights
			{
				constexpr auto animation_rate = 0x210;
				constexpr auto animation_type = 0x214;
				constexpr auto animate_in_fps = 0x218;
				constexpr auto min_size = 0x21c;
				constexpr auto max_size = 0x220;
				constexpr auto start_fade_size = 0x224;
				constexpr auto end_fade_size = 0x228;
			} // namespace op_render_lights

			namespace op_color_interpolate_random
			{
				constexpr auto color_fade_min = 0x1c0;
				constexpr auto color_fade_max = 0x1dc;
				constexpr auto fade_start_time = 0x1ec;
				constexpr auto fade_end_time = 0x1f0;
				constexpr auto field_output = 0x1f4;
				constexpr auto ease_in_out = 0x1f8;
			} // namespace op_color_interpolate_random

			namespace op_set_control_points_to_model_particles
			{
				constexpr auto hitbox_set_name_arr = 0x1c0;
				constexpr auto attachment_name_arr = 0x240;
				constexpr auto first_control_point = 0x2c0;
				constexpr auto num_control_points = 0x2c4;
				constexpr auto first_source_point = 0x2c8;
				constexpr auto skin = 0x2cc;
				constexpr auto attachment = 0x2cd;
			} // namespace op_set_control_points_to_model_particles

			namespace init_create_along_path
			{
				constexpr auto max_distance = 0x1c0;
				constexpr auto path_params = 0x1d0;
				constexpr auto use_random_cps = 0x210;
				constexpr auto v_end_offset = 0x214;
				constexpr auto save_offset = 0x220;
			} // namespace init_create_along_path

			namespace op_remap_sdfdistance_to_scalar_attribute
			{
				constexpr auto field_output = 0x1c0;
				constexpr auto vector_field_input = 0x1c4;
				constexpr auto min_distance = 0x1c8;
				constexpr auto max_distance = 0x320;
				constexpr auto value_below_min = 0x478;
				constexpr auto value_at_min = 0x5d0;
				constexpr auto value_at_max = 0x728;
				constexpr auto value_above_max = 0x880;
			} // namespace op_remap_sdfdistance_to_scalar_attribute

			namespace op_distance_cull
			{
				constexpr auto control_point = 0x1c0;
				constexpr auto vec_point_offset = 0x1c4;
				constexpr auto distance = 0x1d0;
				constexpr auto cull_inside = 0x1d4;
			} // namespace op_distance_cull

			namespace op_constrain_distance_to_path
			{
				constexpr auto min_distance = 0x1c0;
				constexpr auto max_distance0 = 0x1c4;
				constexpr auto max_distance_mid = 0x1c8;
				constexpr auto max_distance1 = 0x1cc;
				constexpr auto path_parameters = 0x1d0;
				constexpr auto travel_time = 0x210;
				constexpr auto field_scale = 0x214;
				constexpr auto manual_tfield = 0x218;
			} // namespace op_constrain_distance_to_path

			namespace op_set_control_point_to_hand
			{
				constexpr auto cp1 = 0x1d0;
				constexpr auto hand = 0x1d4;
				constexpr auto vec_cp1_pos = 0x1d8;
				constexpr auto orient_to_hand = 0x1e4;
			} // namespace op_set_control_point_to_hand

			namespace op_distance_between_cps_to_cp
			{
				constexpr auto start_cp = 0x1d0;
				constexpr auto end_cp = 0x1d4;
				constexpr auto output_cp = 0x1d8;
				constexpr auto output_cpfield = 0x1dc;
				constexpr auto set_once = 0x1e0;
				constexpr auto input_min = 0x1e4;
				constexpr auto input_max = 0x1e8;
				constexpr auto output_min = 0x1ec;
				constexpr auto output_max = 0x1f0;
				constexpr auto max_trace_length = 0x1f4;
				constexpr auto losscale = 0x1f8;
				constexpr auto los = 0x1fc;
				constexpr auto collision_group_name_arr = 0x1fd;
				constexpr auto trace_set = 0x280;
				constexpr auto set_parent = 0x284;
			} // namespace op_distance_between_cps_to_cp

			namespace op_set_from_cpsnapshot
			{
				constexpr auto control_point_number = 0x1c0;
				constexpr auto attribute_to_read = 0x1c4;
				constexpr auto attribute_to_write = 0x1c8;
				constexpr auto local_space_cp = 0x1cc;
				constexpr auto random = 0x1d0;
				constexpr auto reverse = 0x1d1;
				constexpr auto random_seed = 0x1d4;
				constexpr auto snap_shot_start_point = 0x1d8;
				constexpr auto snap_shot_increment = 0x330;
				constexpr auto interpolation = 0x488;
				constexpr auto sub_sample = 0x5e0;
			} // namespace op_set_from_cpsnapshot

			namespace op_remap_vectorto_cp
			{
				constexpr auto out_control_point_number = 0x1c0;
				constexpr auto field_input = 0x1c4;
				constexpr auto particle_number = 0x1c8;
			} // namespace op_remap_vectorto_cp

			namespace op_set_float_attribute_to_vector_expression
			{
				constexpr auto expression = 0x1c0;
				constexpr auto v_input1 = 0x1c8;
				constexpr auto v_input2 = 0x820;
				constexpr auto output_remap = 0xe78;
				constexpr auto output_field = 0xfd0;
				constexpr auto set_method = 0xfd4;
			} // namespace op_set_float_attribute_to_vector_expression

			namespace op_remap_distance_to_line_segment_base
			{
				constexpr auto cp0 = 0x1c0;
				constexpr auto cp1 = 0x1c4;
				constexpr auto min_input_value = 0x1c8;
				constexpr auto max_input_value = 0x1cc;
				constexpr auto infinite_line = 0x1d0;
			} // namespace op_remap_distance_to_line_segment_base

			namespace op_sdflighting
			{
				constexpr auto v_lighting_dir = 0x1c0;
				constexpr auto v_tint_0 = 0x1cc;
				constexpr auto v_tint_1 = 0x1d8;
			} // namespace op_sdflighting

			namespace init_remap_transform_to_vector
			{
				constexpr auto field_output = 0x1c0;
				constexpr auto v_input_min = 0x1c4;
				constexpr auto v_input_max = 0x1d0;
				constexpr auto v_output_min = 0x1dc;
				constexpr auto v_output_max = 0x1e8;
				constexpr auto transform_input = 0x1f8;
				constexpr auto local_space_transform = 0x260;
				constexpr auto start_time = 0x2c8;
				constexpr auto end_time = 0x2cc;
				constexpr auto set_method = 0x2d0;
				constexpr auto offset = 0x2d4;
				constexpr auto accelerate = 0x2d5;
				constexpr auto remap_bias = 0x2d8;
			} // namespace init_remap_transform_to_vector

			namespace op_set_float
			{
				constexpr auto input_value = 0x1c0;
				constexpr auto output_field = 0x318;
				constexpr auto set_method = 0x31c;
				constexpr auto lerp = 0x320;
				constexpr auto use_new_code = 0x478;
			} // namespace op_set_float

			namespace op_model_cull
			{
				constexpr auto control_point_number = 0x1c0;
				constexpr auto bound_box = 0x1c4;
				constexpr auto cull_outside = 0x1c5;
				constexpr auto use_bones = 0x1c6;
				constexpr auto hitbox_set_name_arr = 0x1c7;
			} // namespace op_model_cull

			namespace op_local_acceleration_force
			{
				constexpr auto cp = 0x1d0;
				constexpr auto scale_cp = 0x1d4;
				constexpr auto vec_accel = 0x1d8;
			} // namespace op_local_acceleration_force

			namespace particle_control_point_configuration_t
			{
				constexpr auto name = 0x0;
				constexpr auto drivers = 0x8;
				constexpr auto preview_state = 0x20;
			} // namespace particle_control_point_configuration_t

			namespace op_remap_particle_count_on_scalar_end_cap
			{
				constexpr auto field_output = 0x1c0;
				constexpr auto input_min = 0x1c4;
				constexpr auto input_max = 0x1c8;
				constexpr auto output_min = 0x1cc;
				constexpr auto output_max = 0x1d0;
				constexpr auto backwards = 0x1d4;
				constexpr auto set_method = 0x1d8;
			} // namespace op_remap_particle_count_on_scalar_end_cap

			namespace op_random_force
			{
				constexpr auto min_force = 0x1d0;
				constexpr auto max_force = 0x1dc;
			} // namespace op_random_force

			namespace op_render_status_effect
			{
				constexpr auto texture_color_warp = 0x200;
				constexpr auto texture_detail2 = 0x208;
				constexpr auto texture_diffuse_warp = 0x210;
				constexpr auto texture_fresnel_color_warp = 0x218;
				constexpr auto texture_fresnel_warp = 0x220;
				constexpr auto texture_specular_warp = 0x228;
				constexpr auto texture_env_map = 0x230;
			} // namespace op_render_status_effect

			namespace op_remap_transform_orientation_to_yaw
			{
				constexpr auto transform_input = 0x1c0;
				constexpr auto field_output = 0x228;
				constexpr auto rot_offset = 0x22c;
				constexpr auto spin_strength = 0x230;
			} // namespace op_remap_transform_orientation_to_yaw

			namespace init_remap_initial_visibility_scalar
			{
				constexpr auto field_output = 0x1c4;
				constexpr auto input_min = 0x1c8;
				constexpr auto input_max = 0x1cc;
				constexpr auto output_min = 0x1d0;
				constexpr auto output_max = 0x1d4;
			} // namespace init_remap_initial_visibility_scalar

			namespace init_add_vector_to_vector
			{
				constexpr auto vec_scale = 0x1c0;
				constexpr auto field_output = 0x1cc;
				constexpr auto field_input = 0x1d0;
				constexpr auto v_offset_min = 0x1d4;
				constexpr auto v_offset_max = 0x1e0;
				constexpr auto randomness_parameters = 0x1ec;
			} // namespace init_add_vector_to_vector

			namespace op_particle_physics
			{
				constexpr auto gravity = 0x1c0;
				constexpr auto drag = 0x818;
				constexpr auto max_constraint_passes = 0x970;
			} // namespace op_particle_physics

			namespace op_set_vector_attribute_to_vector_expression
			{
				constexpr auto expression = 0x1c0;
				constexpr auto v_input1 = 0x1c8;
				constexpr auto v_input2 = 0x820;
				constexpr auto output_field = 0xe78;
				constexpr auto set_method = 0xe7c;
				constexpr auto normalized_output = 0xe80;
			} // namespace op_set_vector_attribute_to_vector_expression

			namespace init_init_from_vector_field_snapshot
			{
				constexpr auto control_point_number = 0x1c0;
				constexpr auto local_space_cp = 0x1c4;
				constexpr auto weight_update_cp = 0x1c8;
				constexpr auto use_vertical_velocity = 0x1cc;
				constexpr auto vec_scale = 0x1d0;
			} // namespace init_init_from_vector_field_snapshot

			namespace op_collide_with_parent_particles
			{
				constexpr auto parent_radius_scale = 0x1c0;
				constexpr auto radius_scale = 0x318;
			} // namespace op_collide_with_parent_particles

			namespace init_distance_cull
			{
				constexpr auto control_point = 0x1c0;
				constexpr auto distance = 0x1c8;
				constexpr auto cull_inside = 0x320;
			} // namespace init_distance_cull

			namespace op_ramp_scalar_spline_simple
			{
				constexpr auto rate = 0x1c0;
				constexpr auto start_time = 0x1c4;
				constexpr auto end_time = 0x1c8;
				constexpr auto field = 0x1f0;
				constexpr auto ease_out = 0x1f4;
			} // namespace op_ramp_scalar_spline_simple

			namespace init_random_sequence
			{
				constexpr auto sequence_min = 0x1c0;
				constexpr auto sequence_max = 0x1c4;
				constexpr auto shuffle = 0x1c8;
				constexpr auto linear = 0x1c9;
				constexpr auto weighted_list = 0x1d0;
			} // namespace init_random_sequence

			namespace op_fade_out
			{
				constexpr auto fade_out_time_min = 0x1c0;
				constexpr auto fade_out_time_max = 0x1c4;
				constexpr auto fade_out_time_exp = 0x1c8;
				constexpr auto fade_bias = 0x1cc;
				constexpr auto proportional = 0x200;
				constexpr auto ease_in_and_out = 0x201;
			} // namespace op_fade_out

			namespace op_oscillate_scalar
			{
				constexpr auto rate_min = 0x1c0;
				constexpr auto rate_max = 0x1c4;
				constexpr auto frequency_min = 0x1c8;
				constexpr auto frequency_max = 0x1cc;
				constexpr auto field = 0x1d0;
				constexpr auto proportional = 0x1d4;
				constexpr auto proportional_op = 0x1d5;
				constexpr auto start_time_min = 0x1d8;
				constexpr auto start_time_max = 0x1dc;
				constexpr auto end_time_min = 0x1e0;
				constexpr auto end_time_max = 0x1e4;
				constexpr auto osc_mult = 0x1e8;
				constexpr auto osc_add = 0x1ec;
			} // namespace op_oscillate_scalar

			namespace op_render_blobs
			{
				constexpr auto cube_width = 0x200;
				constexpr auto cutoff_radius = 0x358;
				constexpr auto render_radius = 0x4b0;
				constexpr auto scale_cp = 0x608;
				constexpr auto material_vars = 0x610;
				constexpr auto h_material = 0x640;
			} // namespace op_render_blobs

			namespace init_init_vec_collection
			{
				constexpr auto input_value = 0x1c0;
				constexpr auto output_field = 0x818;
			} // namespace init_init_vec_collection

			namespace op_world_trace_constraint
			{
				constexpr auto cp = 0x1c0;
				constexpr auto vec_cp_offset = 0x1c4;
				constexpr auto collision_mode = 0x1d0;
				constexpr auto collision_mode_min = 0x1d4;
				constexpr auto trace_set = 0x1d8;
				constexpr auto collision_group_name_arr = 0x1dc;
				constexpr auto world_only = 0x25c;
				constexpr auto brush_only = 0x25d;
				constexpr auto include_water = 0x25e;
				constexpr auto ignore_cp = 0x260;
				constexpr auto cp_movement_tolerance = 0x264;
				constexpr auto retest_rate = 0x268;
				constexpr auto trace_tolerance = 0x26c;
				constexpr auto collision_confirmation_speed = 0x270;
				constexpr auto max_traces_per_frame = 0x274;
				constexpr auto radius_scale = 0x278;
				constexpr auto bounce_amount = 0x3d0;
				constexpr auto slide_amount = 0x528;
				constexpr auto random_dir_scale = 0x680;
				constexpr auto decay_bounce = 0x7d8;
				constexpr auto killon_contact = 0x7d9;
				constexpr auto min_speed = 0x7dc;
				constexpr auto set_normal = 0x7e0;
				constexpr auto stick_on_collision_field = 0x7e4;
				constexpr auto stop_speed = 0x7e8;
				constexpr auto entity_stick_data_field = 0x940;
				constexpr auto entity_stick_normal_field = 0x944;
			} // namespace op_world_trace_constraint

			namespace op_render_post_processing
			{
				constexpr auto post_process_strength = 0x200;
				constexpr auto h_post_texture = 0x358;
				constexpr auto priority = 0x360;
			} // namespace op_render_post_processing

			namespace init_random_scalar
			{
				constexpr auto min = 0x1c0;
				constexpr auto max = 0x1c4;
				constexpr auto exponent = 0x1c8;
				constexpr auto field_output = 0x1cc;
			} // namespace init_random_scalar

			namespace init_position_place_on_ground
			{
				constexpr auto offset = 0x1c0;
				constexpr auto max_trace_length = 0x318;
				constexpr auto collision_group_name_arr = 0x470;
				constexpr auto trace_set = 0x4f0;
				constexpr auto trace_miss_behavior = 0x500;
				constexpr auto include_water = 0x504;
				constexpr auto set_normal = 0x505;
				constexpr auto set_pxyzonly = 0x506;
				constexpr auto trace_along_normal = 0x507;
				constexpr auto offseton_col_only = 0x508;
				constexpr auto offset_by_radius_factor = 0x50c;
				constexpr auto preserve_offset_cp = 0x510;
				constexpr auto ignore_cp = 0x514;
			} // namespace init_position_place_on_ground

			namespace op_cylindrical_distance_to_transform
			{
				constexpr auto field_output = 0x1c0;
				constexpr auto input_min = 0x1c8;
				constexpr auto input_max = 0x320;
				constexpr auto output_min = 0x478;
				constexpr auto output_max = 0x5d0;
				constexpr auto transform_start = 0x728;
				constexpr auto transform_end = 0x790;
				constexpr auto set_method = 0x7f8;
				constexpr auto active_range = 0x7fc;
				constexpr auto additive = 0x7fd;
				constexpr auto capsule = 0x7fe;
			} // namespace op_cylindrical_distance_to_transform

			namespace op_vector_field_snapshot
			{
				constexpr auto control_point_number = 0x1c0;
				constexpr auto attribute_to_write = 0x1c4;
				constexpr auto local_space_cp = 0x1c8;
				constexpr auto interpolation = 0x1d0;
				constexpr auto vec_scale = 0x328;
				constexpr auto boundary_dampening = 0x980;
				constexpr auto set_velocity = 0x984;
				constexpr auto lock_to_surface = 0x985;
				constexpr auto grid_spacing = 0x988;
			} // namespace op_vector_field_snapshot

			namespace op_controlpoint_light
			{
				constexpr auto scale = 0x1c0;
				constexpr auto control_point1 = 0x650;
				constexpr auto control_point2 = 0x654;
				constexpr auto control_point3 = 0x658;
				constexpr auto control_point4 = 0x65c;
				constexpr auto vec_cpoffset1 = 0x660;
				constexpr auto vec_cpoffset2 = 0x66c;
				constexpr auto vec_cpoffset3 = 0x678;
				constexpr auto vec_cpoffset4 = 0x684;
				constexpr auto light_fifty_dist1 = 0x690;
				constexpr auto light_zero_dist1 = 0x694;
				constexpr auto light_fifty_dist2 = 0x698;
				constexpr auto light_zero_dist2 = 0x69c;
				constexpr auto light_fifty_dist3 = 0x6a0;
				constexpr auto light_zero_dist3 = 0x6a4;
				constexpr auto light_fifty_dist4 = 0x6a8;
				constexpr auto light_zero_dist4 = 0x6ac;
				constexpr auto light_color1 = 0x6b0;
				constexpr auto light_color2 = 0x6b4;
				constexpr auto light_color3 = 0x6b8;
				constexpr auto light_color4 = 0x6bc;
				constexpr auto light_type1 = 0x6c0;
				constexpr auto light_type2 = 0x6c1;
				constexpr auto light_type3 = 0x6c2;
				constexpr auto light_type4 = 0x6c3;
				constexpr auto light_dynamic1 = 0x6c4;
				constexpr auto light_dynamic2 = 0x6c5;
				constexpr auto light_dynamic3 = 0x6c6;
				constexpr auto light_dynamic4 = 0x6c7;
				constexpr auto use_normal = 0x6c8;
				constexpr auto use_hlambert = 0x6c9;
				constexpr auto clamp_lower_range = 0x6ce;
				constexpr auto clamp_upper_range = 0x6cf;
			} // namespace op_controlpoint_light

			namespace op_choose_random_children_in_group
			{
				constexpr auto child_group_id = 0x1d0;
				constexpr auto number_of_children = 0x1d8;
			} // namespace op_choose_random_children_in_group

			namespace init_create_within_box
			{
				constexpr auto vec_min = 0x1c0;
				constexpr auto vec_max = 0x818;
				constexpr auto control_point_number = 0xe70;
				constexpr auto local_space = 0xe74;
				constexpr auto randomness_parameters = 0xe78;
			} // namespace init_create_within_box

			namespace op_update_light_source
			{
				constexpr auto v_color_tint = 0x1c0;
				constexpr auto brightness_scale = 0x1c4;
				constexpr auto radius_scale = 0x1c8;
				constexpr auto minimum_lighting_radius = 0x1cc;
				constexpr auto maximum_lighting_radius = 0x1d0;
				constexpr auto position_damping_constant = 0x1d4;
			} // namespace op_update_light_source

			namespace op_render_screen_velocity_rotate
			{
				constexpr auto rotate_rate_degrees = 0x200;
				constexpr auto forward_degrees = 0x204;
			} // namespace op_render_screen_velocity_rotate

			namespace op_percentage_between_transforms_vector
			{
				constexpr auto field_output = 0x1c0;
				constexpr auto input_min = 0x1c4;
				constexpr auto input_max = 0x1c8;
				constexpr auto vec_output_min = 0x1cc;
				constexpr auto vec_output_max = 0x1d8;
				constexpr auto transform_start = 0x1e8;
				constexpr auto transform_end = 0x250;
				constexpr auto set_method = 0x2b8;
				constexpr auto active_range = 0x2bc;
				constexpr auto radial_check = 0x2bd;
			} // namespace op_percentage_between_transforms_vector

			namespace cparticle_system_definition
			{
				constexpr auto behavior_version = 0x8;
				constexpr auto pre_emission_operators = 0x10;
				constexpr auto emitters = 0x28;
				constexpr auto initializers = 0x40;
				constexpr auto operators = 0x58;
				constexpr auto force_generators = 0x70;
				constexpr auto constraints = 0x88;
				constexpr auto renderers = 0xa0;
				constexpr auto children = 0xb8;
				constexpr auto first_multiple_override_backward_compat = 0x178;
				constexpr auto initial_particles = 0x210;
				constexpr auto max_particles = 0x214;
				constexpr auto group_id = 0x218;
				constexpr auto bounding_box_min = 0x21c;
				constexpr auto bounding_box_max = 0x228;
				constexpr auto depth_sort_bias = 0x234;
				constexpr auto sort_override_position_cp = 0x238;
				constexpr auto infinite_bounds = 0x23c;
				constexpr auto enable_named_values = 0x23d;
				constexpr auto named_value_domain = 0x240;
				constexpr auto named_value_locals = 0x248;
				constexpr auto constant_color = 0x260;
				constexpr auto constant_normal = 0x264;
				constexpr auto constant_radius = 0x270;
				constexpr auto constant_rotation = 0x274;
				constexpr auto constant_rotation_speed = 0x278;
				constexpr auto constant_lifespan = 0x27c;
				constexpr auto constant_sequence_number = 0x280;
				constexpr auto constant_sequence_number1 = 0x284;
				constexpr auto snapshot_control_point = 0x288;
				constexpr auto h_snapshot = 0x290;
				constexpr auto psz_cull_replacement_name = 0x298;
				constexpr auto cull_radius = 0x2a0;
				constexpr auto cull_fill_cost = 0x2a4;
				constexpr auto cull_control_point = 0x2a8;
				constexpr auto h_fallback = 0x2b0;
				constexpr auto fallback_max_count = 0x2b8;
				constexpr auto h_low_violence_def = 0x2c0;
				constexpr auto h_reference_replacement = 0x2c8;
				constexpr auto pre_simulation_time = 0x2d0;
				constexpr auto stop_simulation_after_time = 0x2d4;
				constexpr auto maximum_time_step = 0x2d8;
				constexpr auto maximum_sim_time = 0x2dc;
				constexpr auto minimum_sim_time = 0x2e0;
				constexpr auto minimum_time_step = 0x2e4;
				constexpr auto minimum_frames = 0x2e8;
				constexpr auto min_cpulevel = 0x2ec;
				constexpr auto min_gpulevel = 0x2f0;
				constexpr auto no_draw_time_to_go_to_sleep = 0x2f4;
				constexpr auto max_draw_distance = 0x2f8;
				constexpr auto start_fade_distance = 0x2fc;
				constexpr auto max_creation_distance = 0x300;
				constexpr auto aggregation_min_available_particles = 0x304;
				constexpr auto aggregate_radius = 0x308;
				constexpr auto should_batch = 0x30c;
				constexpr auto should_hitboxes_fallback_to_render_bounds = 0x30d;
				constexpr auto should_hitboxes_fallback_to_snapshot = 0x30e;
				constexpr auto view_model_effect = 0x310;
				constexpr auto screen_space_effect = 0x314;
				constexpr auto psz_target_layer_id = 0x318;
				constexpr auto skip_render_control_point = 0x320;
				constexpr auto allow_render_control_point = 0x324;
				constexpr auto should_sort = 0x328;
				constexpr auto control_point_configurations = 0x370;
			} // namespace cparticle_system_definition

			namespace op_render_material_proxy
			{
				constexpr auto material_control_point = 0x200;
				constexpr auto proxy_type = 0x204;
				constexpr auto material_vars = 0x208;
				constexpr auto h_override_material = 0x220;
				constexpr auto material_override_enabled = 0x228;
				constexpr auto vec_color_scale = 0x380;
				constexpr auto alpha = 0x9d8;
				constexpr auto color_blend_type = 0xb30;
			} // namespace op_render_material_proxy

			namespace op_remap_cpto_scalar
			{
				constexpr auto cpinput = 0x1c0;
				constexpr auto field_output = 0x1c4;
				constexpr auto field = 0x1c8;
				constexpr auto input_min = 0x1cc;
				constexpr auto input_max = 0x1d0;
				constexpr auto output_min = 0x1d4;
				constexpr auto output_max = 0x1d8;
				constexpr auto start_time = 0x1dc;
				constexpr auto end_time = 0x1e0;
				constexpr auto interp_rate = 0x1e4;
				constexpr auto set_method = 0x1e8;
			} // namespace op_remap_cpto_scalar

			namespace init_distance_to_neighbor_cull
			{
				constexpr auto distance = 0x1c0;
			} // namespace init_distance_to_neighbor_cull

			namespace op_set_single_control_point_position
			{
				constexpr auto set_once = 0x1d0;
				constexpr auto cp1 = 0x1d4;
				constexpr auto vec_cp1_pos = 0x1d8;
				constexpr auto transform_input = 0x830;
			} // namespace op_set_single_control_point_position

			namespace op_snapshot_rigid_skin_to_bones
			{
				constexpr auto transform_normals = 0x1c0;
				constexpr auto transform_radii = 0x1c1;
				constexpr auto control_point_number = 0x1c4;
			} // namespace op_snapshot_rigid_skin_to_bones

			namespace particle_named_value_configuration_t
			{
				constexpr auto config_name = 0x0;
				constexpr auto config_value = 0x8;
				constexpr auto attach_type = 0x18;
				constexpr auto bound_entity_path = 0x20;
				constexpr auto str_entity_scope = 0x28;
				constexpr auto str_attachment_name = 0x30;
			} // namespace particle_named_value_configuration_t

			namespace op_set_cpto_vector
			{
				constexpr auto cpinput = 0x1c0;
				constexpr auto field_output = 0x1c4;
			} // namespace op_set_cpto_vector

			namespace op_drag_relative_to_plane
			{
				constexpr auto drag_at_plane = 0x1c0;
				constexpr auto falloff = 0x318;
				constexpr auto directional = 0x470;
				constexpr auto vec_plane_normal = 0x478;
				constexpr auto control_point_number = 0xad0;
			} // namespace op_drag_relative_to_plane

			namespace op_lerp_end_cap_scalar
			{
				constexpr auto field_output = 0x1c0;
				constexpr auto output = 0x1c4;
				constexpr auto lerp_time = 0x1c8;
			} // namespace op_lerp_end_cap_scalar

			namespace op_remap_control_point_direction_to_vector
			{
				constexpr auto field_output = 0x1c0;
				constexpr auto scale = 0x1c4;
				constexpr auto control_point_number = 0x1c8;
			} // namespace op_remap_control_point_direction_to_vector

			namespace op_remap_transform_visibility_to_scalar
			{
				constexpr auto set_method = 0x1c0;
				constexpr auto transform_input = 0x1c8;
				constexpr auto field_output = 0x230;
				constexpr auto input_min = 0x234;
				constexpr auto input_max = 0x238;
				constexpr auto output_min = 0x23c;
				constexpr auto output_max = 0x240;
				constexpr auto radius = 0x244;
			} // namespace op_remap_transform_visibility_to_scalar

			namespace op_set_random_control_point_position
			{
				constexpr auto use_world_location = 0x1d0;
				constexpr auto orient = 0x1d1;
				constexpr auto cp1 = 0x1d4;
				constexpr auto head_location = 0x1d8;
				constexpr auto re_random_rate = 0x1e0;
				constexpr auto vec_cpmin_pos = 0x338;
				constexpr auto vec_cpmax_pos = 0x344;
				constexpr auto interpolation = 0x350;
			} // namespace op_set_random_control_point_position

			namespace cnew_particle_effect
			{
				constexpr auto next_ptr = 0x10;
				constexpr auto prev_ptr = 0x18;
				constexpr auto particles_ptr = 0x20;
				constexpr auto debug_name_ptr = 0x28;
				constexpr auto dont_remove = 0x30;
				constexpr auto remove = 0x30;
				constexpr auto needs_bbox_update = 0x30;
				constexpr auto is_first_frame = 0x30;
				constexpr auto auto_update_bbox = 0x30;
				constexpr auto allocated = 0x30;
				constexpr auto simulate = 0x30;
				constexpr auto should_perform_cull_check = 0x30;
				constexpr auto force_no_draw = 0x30;
				constexpr auto should_save = 0x30;
				constexpr auto disable_aggregation = 0x30;
				constexpr auto should_simulate_during_game_paused = 0x30;
				constexpr auto should_check_fo_w = 0x30;
				constexpr auto v_sort_origin = 0x40;
				constexpr auto scale = 0x4c;
				constexpr auto h_owner_ptr = 0x50;
				constexpr auto owning_particle_property_ptr = 0x58;
				constexpr auto freeze_transition_start = 0x70;
				constexpr auto freeze_transition_duration = 0x74;
				constexpr auto freeze_transition_override = 0x78;
				constexpr auto freeze_transition_active = 0x7c;
				constexpr auto freeze_target_state = 0x7d;
				constexpr auto can_freeze = 0x7e;
				constexpr auto last_min = 0x80;
				constexpr auto last_max = 0x8c;
				constexpr auto split_screen_user = 0x98;
				constexpr auto vec_aggregation_center = 0x9c;
				constexpr auto ref_count = 0xc0;
			} // namespace cnew_particle_effect

			namespace op_render_gpu_implicit
			{
				constexpr auto use_per_particle_radius = 0x200;
				constexpr auto grid_size = 0x208;
				constexpr auto radius_scale = 0x360;
				constexpr auto isosurface_threshold = 0x4b8;
				constexpr auto scale_cp = 0x610;
				constexpr auto h_material = 0x618;
			} // namespace op_render_gpu_implicit

			namespace op_end_cap_timed_freeze
			{
				constexpr auto freeze_time = 0x1c0;
			} // namespace op_end_cap_timed_freeze

			namespace op_set_control_point_to_player
			{
				constexpr auto cp1 = 0x1d0;
				constexpr auto vec_cp1_pos = 0x1d4;
				constexpr auto orient_to_eyes = 0x1e0;
			} // namespace op_set_control_point_to_player

			namespace op_turbulence_force
			{
				constexpr auto noise_coord_scale0 = 0x1d0;
				constexpr auto noise_coord_scale1 = 0x1d4;
				constexpr auto noise_coord_scale2 = 0x1d8;
				constexpr auto noise_coord_scale3 = 0x1dc;
				constexpr auto vec_noise_amount0 = 0x1e0;
				constexpr auto vec_noise_amount1 = 0x1ec;
				constexpr auto vec_noise_amount2 = 0x1f8;
				constexpr auto vec_noise_amount3 = 0x204;
			} // namespace op_turbulence_force

			namespace op_reinitialize_scalar_end_cap
			{
				constexpr auto field_output = 0x1c0;
				constexpr auto output_min = 0x1c4;
				constexpr auto output_max = 0x1c8;
			} // namespace op_reinitialize_scalar_end_cap

			namespace op_ramp_scalar_linear
			{
				constexpr auto rate_min = 0x1c0;
				constexpr auto rate_max = 0x1c4;
				constexpr auto start_time_min = 0x1c8;
				constexpr auto start_time_max = 0x1cc;
				constexpr auto end_time_min = 0x1d0;
				constexpr auto end_time_max = 0x1d4;
				constexpr auto field = 0x200;
				constexpr auto proportional_op = 0x204;
			} // namespace op_ramp_scalar_linear

			namespace op_interpolate_radius
			{
				constexpr auto start_time = 0x1c0;
				constexpr auto end_time = 0x1c4;
				constexpr auto start_scale = 0x1c8;
				constexpr auto end_scale = 0x1cc;
				constexpr auto ease_in_and_out = 0x1d0;
				constexpr auto bias = 0x1d4;
			} // namespace op_interpolate_radius

			namespace op_set_control_point_to_impact_point
			{
				constexpr auto cpout = 0x1d0;
				constexpr auto cpin = 0x1d4;
				constexpr auto update_rate = 0x1d8;
				constexpr auto trace_length = 0x1e0;
				constexpr auto start_offset = 0x338;
				constexpr auto offset = 0x33c;
				constexpr auto vec_trace_dir = 0x340;
				constexpr auto collision_group_name_arr = 0x34c;
				constexpr auto trace_set = 0x3cc;
				constexpr auto set_to_endpoint = 0x3d0;
				constexpr auto trace_to_closest_surface = 0x3d1;
				constexpr auto include_water = 0x3d2;
			} // namespace op_set_control_point_to_impact_point

			namespace op_render_vrhaptic_event
			{
				constexpr auto hand = 0x200;
				constexpr auto output_hand_cp = 0x204;
				constexpr auto output_field = 0x208;
				constexpr auto amplitude = 0x210;
			} // namespace op_render_vrhaptic_event

			namespace op_position_lock
			{
				constexpr auto transform_input = 0x1c0;
				constexpr auto start_time_min = 0x228;
				constexpr auto start_time_max = 0x22c;
				constexpr auto start_time_exp = 0x230;
				constexpr auto end_time_min = 0x234;
				constexpr auto end_time_max = 0x238;
				constexpr auto end_time_exp = 0x23c;
				constexpr auto range = 0x240;
				constexpr auto range_bias = 0x248;
				constexpr auto jump_threshold = 0x3a0;
				constexpr auto prev_pos_scale = 0x3a4;
				constexpr auto lock_rot = 0x3a8;
				constexpr auto vec_scale = 0x3b0;
				constexpr auto field_output = 0xa08;
				constexpr auto field_output_prev = 0xa0c;
			} // namespace op_position_lock

			namespace op_oscillate_vector
			{
				constexpr auto rate_min = 0x1c0;
				constexpr auto rate_max = 0x1cc;
				constexpr auto frequency_min = 0x1d8;
				constexpr auto frequency_max = 0x1e4;
				constexpr auto field = 0x1f0;
				constexpr auto proportional = 0x1f4;
				constexpr auto proportional_op = 0x1f5;
				constexpr auto offset = 0x1f6;
				constexpr auto start_time_min = 0x1f8;
				constexpr auto start_time_max = 0x1fc;
				constexpr auto end_time_min = 0x200;
				constexpr auto end_time_max = 0x204;
				constexpr auto osc_mult = 0x208;
				constexpr auto osc_add = 0x360;
				constexpr auto rate_scale = 0x4b8;
			} // namespace op_oscillate_vector

			namespace op_movement_skinned_position_from_cpsnapshot
			{
				constexpr auto snapshot_control_point_number = 0x1c0;
				constexpr auto control_point_number = 0x1c4;
				constexpr auto random = 0x1c8;
				constexpr auto random_seed = 0x1cc;
				constexpr auto set_normal = 0x1d0;
				constexpr auto set_radius = 0x1d1;
				constexpr auto increment = 0x1d8;
				constexpr auto full_loop_increment = 0x330;
				constexpr auto snap_shot_start_point = 0x488;
				constexpr auto interpolation = 0x5e0;
			} // namespace op_movement_skinned_position_from_cpsnapshot

			namespace op_set_control_point_orientation
			{
				constexpr auto use_world_location = 0x1d0;
				constexpr auto randomize = 0x1d2;
				constexpr auto set_once = 0x1d3;
				constexpr auto cp = 0x1d4;
				constexpr auto head_location = 0x1d8;
				constexpr auto vec_rotation = 0x1dc;
				constexpr auto vec_rotation_b = 0x1e8;
				constexpr auto interpolation = 0x1f8;
			} // namespace op_set_control_point_orientation

			namespace init_velocity_from_cp
			{
				constexpr auto velocity_input = 0x1c0;
				constexpr auto transform_input = 0x818;
				constexpr auto velocity_scale = 0x880;
				constexpr auto direction_only = 0x884;
			} // namespace init_velocity_from_cp

			namespace cbase_renderer_source2
			{
				constexpr auto radius_scale = 0x200;
				constexpr auto alpha_scale = 0x358;
				constexpr auto roll_scale = 0x4b0;
				constexpr auto alpha2_field = 0x608;
				constexpr auto vec_color_scale = 0x610;
				constexpr auto color_blend_type = 0xc68;
				constexpr auto shader_type = 0xc6c;
				constexpr auto str_shader_override = 0xc70;
				constexpr auto center_xoffset = 0xc78;
				constexpr auto center_yoffset = 0xdd0;
				constexpr auto bump_strength = 0xf28;
				constexpr auto crop_texture_override = 0xf2c;
				constexpr auto vec_textures_input = 0xf30;
				constexpr auto animation_rate = 0xf48;
				constexpr auto animation_type = 0xf4c;
				constexpr auto animate_in_fps = 0xf50;
				constexpr auto self_illum_amount = 0xf58;
				constexpr auto diffuse_amount = 0x10b0;
				constexpr auto lighting_control_point = 0x1208;
				constexpr auto self_illum_per_particle = 0x120c;
				constexpr auto output_blend_mode = 0x1210;
				constexpr auto gamma_correct_vertex_colors = 0x1214;
				constexpr auto saturate_color_pre_alpha_blend = 0x1215;
				constexpr auto add_self_amount = 0x1218;
				constexpr auto desaturation = 0x1370;
				constexpr auto overbright_factor = 0x14c8;
				constexpr auto hsvshift_control_point = 0x1620;
				constexpr auto fog_type = 0x1624;
				constexpr auto fog_amount = 0x1628;
				constexpr auto tint_by_fow = 0x1780;
				constexpr auto tint_by_global_light = 0x1781;
				constexpr auto per_particle_alpha_reference = 0x1784;
				constexpr auto per_particle_alpha_ref_window = 0x1788;
				constexpr auto alpha_reference_type = 0x178c;
				constexpr auto alpha_reference_softness = 0x1790;
				constexpr auto source_alpha_value_to_map_to_zero = 0x18e8;
				constexpr auto source_alpha_value_to_map_to_one = 0x1a40;
				constexpr auto refract = 0x1b98;
				constexpr auto refract_solid = 0x1b99;
				constexpr auto refract_amount = 0x1ba0;
				constexpr auto refract_blur_radius = 0x1cf8;
				constexpr auto refract_blur_type = 0x1cfc;
				constexpr auto only_render_in_effects_bloom_pass = 0x1d00;
				constexpr auto only_render_in_effects_water_pass = 0x1d01;
				constexpr auto use_mixed_resolution_rendering = 0x1d02;
				constexpr auto only_render_in_effecs_game_overlay = 0x1d03;
				constexpr auto stencil_test_id_arr = 0x1d04;
				constexpr auto stencil_test_exclude = 0x1d84;
				constexpr auto stencil_write_id_arr = 0x1d85;
				constexpr auto write_stencil_on_depth_pass = 0x1e05;
				constexpr auto write_stencil_on_depth_fail = 0x1e06;
				constexpr auto reverse_zbuffering = 0x1e07;
				constexpr auto disable_zbuffering = 0x1e08;
				constexpr auto feathering_mode = 0x1e0c;
				constexpr auto feathering_min_dist = 0x1e10;
				constexpr auto feathering_max_dist = 0x1f68;
				constexpr auto feathering_filter = 0x20c0;
				constexpr auto depth_bias = 0x2218;
				constexpr auto sort_method = 0x221c;
				constexpr auto blend_frames_seq0 = 0x2220;
				constexpr auto max_luminance_blending_sequence0 = 0x2221;
			} // namespace cbase_renderer_source2

			namespace init_lifespan_from_velocity
			{
				constexpr auto vec_component_scale = 0x1c0;
				constexpr auto trace_offset = 0x1cc;
				constexpr auto max_trace_length = 0x1d0;
				constexpr auto trace_tolerance = 0x1d4;
				constexpr auto max_planes = 0x1d8;
				constexpr auto collision_group_name_arr = 0x1e0;
				constexpr auto trace_set = 0x260;
				constexpr auto include_water = 0x270;
			} // namespace init_lifespan_from_velocity

			namespace op_constrain_line_length
			{
				constexpr auto min_distance = 0x1c0;
				constexpr auto max_distance = 0x1c4;
			} // namespace op_constrain_line_length

			namespace op_instantaneous_emitter
			{
				constexpr auto particles_to_emit = 0x1c0;
				constexpr auto start_time = 0x318;
				constexpr auto init_from_killed_parent_particles = 0x470;
				constexpr auto parent_particle_scale = 0x478;
				constexpr auto max_emitted_per_frame = 0x5d0;
				constexpr auto snapshot_control_point = 0x5d4;
			} // namespace op_instantaneous_emitter

			namespace cbase_trail_renderer
			{
				constexpr auto orientation_type = 0x2470;
				constexpr auto orientation_control_point = 0x2474;
				constexpr auto min_size = 0x2478;
				constexpr auto max_size = 0x247c;
				constexpr auto start_fade_size = 0x2480;
				constexpr auto end_fade_size = 0x25d8;
				constexpr auto clamp_v = 0x2730;
			} // namespace cbase_trail_renderer

			namespace particle_named_value_source_t
			{
				constexpr auto name = 0x0;
				constexpr auto is_public = 0x8;
				constexpr auto value_type = 0xc;
				constexpr auto default_config = 0x10;
				constexpr auto named_configs = 0x48;
			} // namespace particle_named_value_source_t

			namespace init_creation_noise
			{
				constexpr auto field_output = 0x1c0;
				constexpr auto abs_val = 0x1c4;
				constexpr auto abs_val_inv = 0x1c5;
				constexpr auto offset = 0x1c8;
				constexpr auto output_min = 0x1cc;
				constexpr auto output_max = 0x1d0;
				constexpr auto noise_scale = 0x1d4;
				constexpr auto noise_scale_loc = 0x1d8;
				constexpr auto vec_offset_loc = 0x1dc;
				constexpr auto world_time_scale = 0x1e8;
			} // namespace init_creation_noise

			namespace op_render_as_models
			{
				constexpr auto model_list = 0x200;
				constexpr auto model_scale = 0x21c;
				constexpr auto fit_to_model_size = 0x220;
				constexpr auto non_uniform_scaling = 0x221;
				constexpr auto xaxis_scaling_attribute = 0x224;
				constexpr auto yaxis_scaling_attribute = 0x228;
				constexpr auto zaxis_scaling_attribute = 0x22c;
				constexpr auto size_cull_bloat = 0x230;
			} // namespace op_render_as_models

			namespace op_remap_distance_to_line_segment_to_vector
			{
				constexpr auto field_output = 0x1e0;
				constexpr auto v_min_output_value = 0x1e4;
				constexpr auto v_max_output_value = 0x1f0;
			} // namespace op_remap_distance_to_line_segment_to_vector

			namespace init_normal_offset
			{
				constexpr auto offset_min = 0x1c0;
				constexpr auto offset_max = 0x1cc;
				constexpr auto control_point_number = 0x1d8;
				constexpr auto local_coords = 0x1dc;
				constexpr auto normalize = 0x1dd;
			} // namespace init_normal_offset

			namespace op_control_point_to_radial_screen_space
			{
				constexpr auto cpin = 0x1d0;
				constexpr auto vec_cp1_pos = 0x1d4;
				constexpr auto cpout = 0x1e0;
				constexpr auto cpout_field = 0x1e4;
				constexpr auto cpsspos_out = 0x1e8;
			} // namespace op_control_point_to_radial_screen_space

			namespace init_create_from_plane_cache
			{
				constexpr auto vec_offset_min = 0x1c0;
				constexpr auto vec_offset_max = 0x1cc;
				constexpr auto use_normal = 0x1d9;
			} // namespace init_create_from_plane_cache

			namespace op_remap_scalar_end_cap
			{
				constexpr auto field_input = 0x1c0;
				constexpr auto field_output = 0x1c4;
				constexpr auto input_min = 0x1c8;
				constexpr auto input_max = 0x1cc;
				constexpr auto output_min = 0x1d0;
				constexpr auto output_max = 0x1d4;
			} // namespace op_remap_scalar_end_cap

			namespace op_lock_to_saved_sequential_path
			{
				constexpr auto fade_start = 0x1c4;
				constexpr auto fade_end = 0x1c8;
				constexpr auto cppairs = 0x1cc;
				constexpr auto path_params = 0x1d0;
			} // namespace op_lock_to_saved_sequential_path

			namespace init_init_float_collection
			{
				constexpr auto input_value = 0x1c0;
				constexpr auto output_field = 0x318;
			} // namespace init_init_float_collection

			namespace op_play_end_cap_when_finished
			{
				constexpr auto fire_on_emission_end = 0x1d0;
				constexpr auto include_children = 0x1d1;
			} // namespace op_play_end_cap_when_finished

			namespace op_quantize_cpcomponent
			{
				constexpr auto input_value = 0x1d0;
				constexpr auto cpoutput = 0x328;
				constexpr auto out_vector_field = 0x32c;
				constexpr auto quantize_value = 0x330;
			} // namespace op_quantize_cpcomponent

			namespace op_movement_loop_inside_sphere
			{
				constexpr auto cp = 0x1c0;
				constexpr auto distance = 0x1c8;
				constexpr auto vec_scale = 0x320;
				constexpr auto dist_sqr_attr = 0x978;
			} // namespace op_movement_loop_inside_sphere

			namespace op_direction_between_vecs_to_vec
			{
				constexpr auto field_output = 0x1c0;
				constexpr auto vec_point1 = 0x1c8;
				constexpr auto vec_point2 = 0x820;
			} // namespace op_direction_between_vecs_to_vec

			namespace op_remap_transform_visibility_to_vector
			{
				constexpr auto set_method = 0x1c0;
				constexpr auto transform_input = 0x1c8;
				constexpr auto field_output = 0x230;
				constexpr auto input_min = 0x234;
				constexpr auto input_max = 0x238;
				constexpr auto vec_output_min = 0x23c;
				constexpr auto vec_output_max = 0x248;
				constexpr auto radius = 0x254;
			} // namespace op_remap_transform_visibility_to_vector

			namespace init_set_vector_attribute_to_vector_expression
			{
				constexpr auto expression = 0x1c0;
				constexpr auto v_input1 = 0x1c8;
				constexpr auto v_input2 = 0x820;
				constexpr auto output_field = 0xe78;
				constexpr auto set_method = 0xe7c;
				constexpr auto normalized_output = 0xe80;
			} // namespace init_set_vector_attribute_to_vector_expression

			namespace op_inherit_from_parent_particles
			{
				constexpr auto scale = 0x1c0;
				constexpr auto field_output = 0x1c4;
				constexpr auto increment = 0x1c8;
				constexpr auto random_distribution = 0x1cc;
			} // namespace op_inherit_from_parent_particles

			namespace init_random_vector_component
			{
				constexpr auto min = 0x1c0;
				constexpr auto max = 0x1c4;
				constexpr auto field_output = 0x1c8;
				constexpr auto component = 0x1cc;
			} // namespace init_random_vector_component

			namespace op_external_wind_force
			{
				constexpr auto vec_sample_position = 0x1d0;
				constexpr auto vec_scale = 0x828;
				constexpr auto sample_wind = 0xe80;
				constexpr auto sample_water = 0xe81;
				constexpr auto dampen_near_water_plane = 0xe82;
				constexpr auto sample_gravity = 0xe83;
				constexpr auto vec_gravity_force = 0xe88;
				constexpr auto use_basic_movement_gravity = 0x14e0;
				constexpr auto local_gravity_scale = 0x14e8;
				constexpr auto local_buoyancy_scale = 0x1640;
				constexpr auto vec_buoyancy_force = 0x1798;
			} // namespace op_external_wind_force

			namespace op_set_control_point_field_to_scalar_expression
			{
				constexpr auto expression = 0x1d0;
				constexpr auto input1 = 0x1d8;
				constexpr auto input2 = 0x330;
				constexpr auto output_remap = 0x488;
				constexpr auto output_cp = 0x5e0;
				constexpr auto out_vector_field = 0x5e4;
			} // namespace op_set_control_point_field_to_scalar_expression

			namespace op_sdfconstraint
			{
				constexpr auto min_dist = 0x1c0;
				constexpr auto max_dist = 0x318;
				constexpr auto max_iterations = 0x470;
			} // namespace op_sdfconstraint

			namespace init_position_warp
			{
				constexpr auto vec_warp_min = 0x1c0;
				constexpr auto vec_warp_max = 0x818;
				constexpr auto scale_control_point_number = 0xe70;
				constexpr auto control_point_number = 0xe74;
				constexpr auto radius_component = 0xe78;
				constexpr auto warp_time = 0xe7c;
				constexpr auto warp_start_time = 0xe80;
				constexpr auto prev_pos_scale = 0xe84;
				constexpr auto invert_warp = 0xe88;
				constexpr auto use_count = 0xe89;
			} // namespace init_position_warp

			namespace init_remap_qangles_to_rotation
			{
				constexpr auto transform_input = 0x1c0;
			} // namespace init_remap_qangles_to_rotation

			namespace init_remap_speed_to_scalar
			{
				constexpr auto field_output = 0x1c0;
				constexpr auto control_point_number = 0x1c4;
				constexpr auto start_time = 0x1c8;
				constexpr auto end_time = 0x1cc;
				constexpr auto input_min = 0x1d0;
				constexpr auto input_max = 0x1d4;
				constexpr auto output_min = 0x1d8;
				constexpr auto output_max = 0x1dc;
				constexpr auto set_method = 0x1e0;
				constexpr auto per_particle = 0x1e4;
			} // namespace init_remap_speed_to_scalar

			namespace op_set_control_point_to_cpvelocity
			{
				constexpr auto cpinput = 0x1d0;
				constexpr auto cpoutput_vel = 0x1d4;
				constexpr auto normalize = 0x1d8;
				constexpr auto cpoutput_mag = 0x1dc;
				constexpr auto cpfield = 0x1e0;
				constexpr auto vec_comparison_velocity = 0x1e8;
			} // namespace op_set_control_point_to_cpvelocity

			namespace op_lightning_snapshot_generator
			{
				constexpr auto cpsnapshot = 0x1d0;
				constexpr auto cpstart_pnt = 0x1d4;
				constexpr auto cpend_pnt = 0x1d8;
				constexpr auto segments = 0x1e0;
				constexpr auto offset = 0x338;
				constexpr auto offset_decay = 0x490;
				constexpr auto recalc_rate = 0x5e8;
				constexpr auto uvscale = 0x740;
				constexpr auto uvoffset = 0x898;
				constexpr auto split_rate = 0x9f0;
				constexpr auto branch_twist = 0xb48;
				constexpr auto branch_behavior = 0xca0;
				constexpr auto radius_start = 0xca8;
				constexpr auto radius_end = 0xe00;
				constexpr auto dedicated_pool = 0xf58;
			} // namespace op_lightning_snapshot_generator

			namespace op_set_control_point_to_vector_expression
			{
				constexpr auto expression = 0x1d0;
				constexpr auto output_cp = 0x1d4;
				constexpr auto v_input1 = 0x1d8;
				constexpr auto v_input2 = 0x830;
				constexpr auto normalized_output = 0xe88;
			} // namespace op_set_control_point_to_vector_expression

			namespace op_calculate_vector_attribute
			{
				constexpr auto v_start_value = 0x1c0;
				constexpr auto field_input1 = 0x1cc;
				constexpr auto input_scale1 = 0x1d0;
				constexpr auto field_input2 = 0x1d4;
				constexpr auto input_scale2 = 0x1d8;
				constexpr auto control_point_input1 = 0x1dc;
				constexpr auto control_point_scale1 = 0x1f0;
				constexpr auto control_point_input2 = 0x1f4;
				constexpr auto control_point_scale2 = 0x208;
				constexpr auto field_output = 0x20c;
				constexpr auto v_final_output_scale = 0x210;
			} // namespace op_calculate_vector_attribute

			namespace texture_group_t
			{
				constexpr auto enabled = 0x0;
				constexpr auto replace_texture_with_gradient = 0x1;
				constexpr auto h_texture = 0x8;
				constexpr auto gradient = 0x10;
				constexpr auto texture_type = 0x28;
				constexpr auto texture_channels = 0x2c;
				constexpr auto texture_blend_mode = 0x30;
				constexpr auto texture_blend = 0x38;
				constexpr auto texture_controls = 0x190;
			} // namespace texture_group_t

			namespace op_orient2_drel_to_cp
			{
				constexpr auto rot_offset = 0x1c0;
				constexpr auto spin_strength = 0x1c4;
				constexpr auto cp = 0x1c8;
				constexpr auto field_output = 0x1cc;
			} // namespace op_orient2_drel_to_cp

			namespace init_random_radius
			{
				constexpr auto radius_min = 0x1c0;
				constexpr auto radius_max = 0x1c4;
				constexpr auto radius_rand_exponent = 0x1c8;
			} // namespace init_random_radius

			namespace init_velocity_radial_random
			{
				constexpr auto control_point_number = 0x1c0;
				constexpr auto speed_min = 0x1c4;
				constexpr auto speed_max = 0x1c8;
				constexpr auto vec_local_coordinate_system_speed_scale = 0x1cc;
				constexpr auto ignore_delta = 0x1d9;
			} // namespace init_velocity_radial_random

			namespace init_random_life_time
			{
				constexpr auto lifetime_min = 0x1c0;
				constexpr auto lifetime_max = 0x1c4;
				constexpr auto lifetime_rand_exponent = 0x1c8;
			} // namespace init_random_life_time

			namespace op_attract_to_control_point
			{
				constexpr auto vec_component_scale = 0x1d0;
				constexpr auto force_amount = 0x1e0;
				constexpr auto falloff_power = 0x338;
				constexpr auto transform_input = 0x340;
				constexpr auto force_amount_min = 0x3a8;
				constexpr auto apply_min_force = 0x500;
			} // namespace op_attract_to_control_point

			namespace init_create_phyllotaxis
			{
				constexpr auto control_point_number = 0x1c0;
				constexpr auto scale_cp = 0x1c4;
				constexpr auto component = 0x1c8;
				constexpr auto rad_cent_core = 0x1cc;
				constexpr auto rad_per_point = 0x1d0;
				constexpr auto rad_per_point_to = 0x1d4;
				constexpr auto fpoint_angle = 0x1d8;
				constexpr auto fsize_overall = 0x1dc;
				constexpr auto rad_bias = 0x1e0;
				constexpr auto min_rad = 0x1e4;
				constexpr auto dist_bias = 0x1e8;
				constexpr auto use_local_coords = 0x1ec;
				constexpr auto use_with_cont_emit = 0x1ed;
				constexpr auto use_orig_radius = 0x1ee;
			} // namespace init_create_phyllotaxis

			namespace op_box_constraint
			{
				constexpr auto vec_min = 0x1c0;
				constexpr auto vec_max = 0x818;
				constexpr auto cp = 0xe70;
				constexpr auto local_space = 0xe74;
				constexpr auto account_for_radius = 0xe75;
			} // namespace op_box_constraint

			namespace op_sdfforce
			{
				constexpr auto force_scale = 0x1d0;
			} // namespace op_sdfforce

			namespace op_set_parent_control_points_to_child_cp
			{
				constexpr auto child_group_id = 0x1d0;
				constexpr auto child_control_point = 0x1d4;
				constexpr auto num_control_points = 0x1d8;
				constexpr auto first_source_point = 0x1dc;
				constexpr auto set_orientation = 0x1e0;
			} // namespace op_set_parent_control_points_to_child_cp

			namespace op_set_per_child_control_point_from_attribute
			{
				constexpr auto child_group_id = 0x1c0;
				constexpr auto first_control_point = 0x1c4;
				constexpr auto num_control_points = 0x1c8;
				constexpr auto particle_increment = 0x1cc;
				constexpr auto first_source_point = 0x1d0;
				constexpr auto num_based_on_particle_count = 0x1d4;
				constexpr auto attribute_to_read = 0x1d8;
				constexpr auto cpfield = 0x1dc;
			} // namespace op_set_per_child_control_point_from_attribute

			namespace init_offset_vector_to_vector
			{
				constexpr auto field_input = 0x1c0;
				constexpr auto field_output = 0x1c4;
				constexpr auto vec_output_min = 0x1c8;
				constexpr auto vec_output_max = 0x1d4;
				constexpr auto randomness_parameters = 0x1e0;
			} // namespace init_offset_vector_to_vector

			namespace op_global_light
			{
				constexpr auto scale = 0x1c0;
				constexpr auto clamp_lower_range = 0x1c4;
				constexpr auto clamp_upper_range = 0x1c5;
			} // namespace op_global_light

			namespace op_cpoffset_to_percentage_between_cps
			{
				constexpr auto input_min = 0x1c0;
				constexpr auto input_max = 0x1c4;
				constexpr auto input_bias = 0x1c8;
				constexpr auto start_cp = 0x1cc;
				constexpr auto end_cp = 0x1d0;
				constexpr auto offset_cp = 0x1d4;
				constexpr auto ouput_cp = 0x1d8;
				constexpr auto input_cp = 0x1dc;
				constexpr auto radial_check = 0x1e0;
				constexpr auto scale_offset = 0x1e1;
				constexpr auto vec_offset = 0x1e4;
			} // namespace op_cpoffset_to_percentage_between_cps

			namespace init_init_from_parent_killed
			{
				constexpr auto attribute_to_copy = 0x1c0;
			} // namespace init_init_from_parent_killed

			namespace op_basic_movement
			{
				constexpr auto gravity = 0x1c0;
				constexpr auto drag = 0x818;
				constexpr auto max_constraint_passes = 0x970;
			} // namespace op_basic_movement

			namespace op_quantize_float
			{
				constexpr auto input_value = 0x1c0;
				constexpr auto output_field = 0x318;
			} // namespace op_quantize_float

			namespace init_remap_scalar
			{
				constexpr auto field_input = 0x1c0;
				constexpr auto field_output = 0x1c4;
				constexpr auto input_min = 0x1c8;
				constexpr auto input_max = 0x1cc;
				constexpr auto output_min = 0x1d0;
				constexpr auto output_max = 0x1d4;
				constexpr auto start_time = 0x1d8;
				constexpr auto end_time = 0x1dc;
				constexpr auto set_method = 0x1e0;
				constexpr auto active_range = 0x1e4;
				constexpr auto remap_bias = 0x1e8;
			} // namespace init_remap_scalar

			namespace init_move_between_points
			{
				constexpr auto speed_min = 0x1c0;
				constexpr auto speed_max = 0x318;
				constexpr auto end_spread = 0x470;
				constexpr auto start_offset = 0x5c8;
				constexpr auto end_offset = 0x720;
				constexpr auto end_control_point_number = 0x878;
				constexpr auto trail_bias = 0x87c;
			} // namespace init_move_between_points

			namespace init_sequence_life_time
			{
				constexpr auto framerate = 0x1c0;
			} // namespace init_sequence_life_time

			namespace op_oscillate_vector_simple
			{
				constexpr auto rate = 0x1c0;
				constexpr auto frequency = 0x1cc;
				constexpr auto field = 0x1d8;
				constexpr auto osc_mult = 0x1dc;
				constexpr auto osc_add = 0x1e0;
				constexpr auto offset = 0x1e4;
			} // namespace op_oscillate_vector_simple

			namespace op_continuous_emitter
			{
				constexpr auto emission_duration = 0x1c0;
				constexpr auto start_time = 0x318;
				constexpr auto emit_rate = 0x470;
				constexpr auto emission_scale = 0x5c8;
				constexpr auto scale_per_parent_particle = 0x5cc;
				constexpr auto init_from_killed_parent_particles = 0x5d0;
				constexpr auto snapshot_control_point = 0x5d4;
				constexpr auto limit_per_update = 0x5d8;
				constexpr auto force_emit_on_first_update = 0x5dc;
				constexpr auto force_emit_on_last_update = 0x5dd;
			} // namespace op_continuous_emitter

			namespace op_remap_distance_to_line_segment_to_scalar
			{
				constexpr auto field_output = 0x1e0;
				constexpr auto min_output_value = 0x1e4;
				constexpr auto max_output_value = 0x1e8;
			} // namespace op_remap_distance_to_line_segment_to_scalar

			namespace op_end_cap_timed_decay
			{
				constexpr auto decay_time = 0x1c0;
			} // namespace op_end_cap_timed_decay

			namespace init_create_sequential_path
			{
				constexpr auto max_distance = 0x1c0;
				constexpr auto num_to_assign = 0x1c4;
				constexpr auto loop = 0x1c8;
				constexpr auto cppairs = 0x1c9;
				constexpr auto save_offset = 0x1ca;
				constexpr auto path_params = 0x1d0;
			} // namespace init_create_sequential_path

			namespace op_decay_offscreen
			{
				constexpr auto offscreen_time = 0x1c0;
			} // namespace op_decay_offscreen

			namespace op_distance_between_transforms
			{
				constexpr auto field_output = 0x1c0;
				constexpr auto transform_start = 0x1c8;
				constexpr auto transform_end = 0x230;
				constexpr auto input_min = 0x298;
				constexpr auto input_max = 0x3f0;
				constexpr auto output_min = 0x548;
				constexpr auto output_max = 0x6a0;
				constexpr auto max_trace_length = 0x7f8;
				constexpr auto losscale = 0x7fc;
				constexpr auto collision_group_name_arr = 0x800;
				constexpr auto trace_set = 0x880;
				constexpr auto los = 0x884;
				constexpr auto set_method = 0x888;
			} // namespace op_distance_between_transforms

			namespace op_remap_scalar
			{
				constexpr auto field_input = 0x1c0;
				constexpr auto field_output = 0x1c4;
				constexpr auto input_min = 0x1c8;
				constexpr auto input_max = 0x1cc;
				constexpr auto output_min = 0x1d0;
				constexpr auto output_max = 0x1d4;
				constexpr auto old_code = 0x1d8;
			} // namespace op_remap_scalar

			namespace init_random_trail_length
			{
				constexpr auto min_length = 0x1c0;
				constexpr auto max_length = 0x1c4;
				constexpr auto length_rand_exponent = 0x1c8;
			} // namespace init_random_trail_length

			namespace init_ring_wave
			{
				constexpr auto transform_input = 0x1c0;
				constexpr auto particles_per_orbit = 0x228;
				constexpr auto initial_radius = 0x380;
				constexpr auto thickness = 0x4d8;
				constexpr auto initial_speed_min = 0x630;
				constexpr auto initial_speed_max = 0x788;
				constexpr auto roll = 0x8e0;
				constexpr auto pitch = 0xa38;
				constexpr auto yaw = 0xb90;
				constexpr auto even_distribution = 0xce8;
				constexpr auto xyvelocity_only = 0xce9;
			} // namespace init_ring_wave

			namespace init_set_hitbox_to_closest
			{
				constexpr auto control_point_number = 0x1c0;
				constexpr auto desired_hitbox = 0x1c4;
				constexpr auto vec_hit_box_scale = 0x1c8;
				constexpr auto hitbox_set_name_arr = 0x820;
				constexpr auto use_bones = 0x8a0;
				constexpr auto use_closest_point_on_hitbox = 0x8a1;
				constexpr auto test_type = 0x8a4;
				constexpr auto hybrid_ratio = 0x8a8;
				constexpr auto update_position = 0xa00;
			} // namespace init_set_hitbox_to_closest

			namespace op_remap_velocity_to_vector
			{
				constexpr auto field_output = 0x1c0;
				constexpr auto scale = 0x1c4;
				constexpr auto normalize = 0x1c8;
			} // namespace op_remap_velocity_to_vector

			namespace op_render_tonemap_controller
			{
				constexpr auto tonemap_level = 0x200;
				constexpr auto tonemap_weight = 0x204;
				constexpr auto tonemap_level_field = 0x208;
				constexpr auto tonemap_weight_field = 0x20c;
			} // namespace op_render_tonemap_controller

			namespace op_repeated_trigger_child_group
			{
				constexpr auto child_group_id = 0x1d0;
				constexpr auto cluster_refire_time = 0x1d8;
				constexpr auto cluster_size = 0x330;
				constexpr auto cluster_cooldown = 0x488;
				constexpr auto limit_child_count = 0x5e0;
			} // namespace op_repeated_trigger_child_group

			namespace op_fade_in_simple
			{
				constexpr auto fade_in_time = 0x1c0;
				constexpr auto field_output = 0x1c4;
			} // namespace op_fade_in_simple

			namespace op_normalize_vector
			{
				constexpr auto field_output = 0x1c0;
				constexpr auto scale = 0x1c4;
			} // namespace op_normalize_vector

			namespace init_random_alpha
			{
				constexpr auto field_output = 0x1c0;
				constexpr auto alpha_min = 0x1c4;
				constexpr auto alpha_max = 0x1c8;
				constexpr auto alpha_rand_exponent = 0x1d4;
			} // namespace init_random_alpha

			namespace op_remap_average_hitbox_speedto_cp
			{
				constexpr auto in_control_point_number = 0x1d0;
				constexpr auto out_control_point_number = 0x1d4;
				constexpr auto field = 0x1d8;
				constexpr auto hitbox_data_type = 0x1dc;
				constexpr auto input_min = 0x1e0;
				constexpr auto input_max = 0x338;
				constexpr auto output_min = 0x490;
				constexpr auto output_max = 0x5e8;
				constexpr auto height_control_point_number = 0x740;
				constexpr auto vec_comparison_velocity = 0x748;
				constexpr auto hitbox_set_name_arr = 0xda0;
			} // namespace op_remap_average_hitbox_speedto_cp

			namespace op_external_game_impulse_force
			{
				constexpr auto force_scale = 0x1d0;
				constexpr auto ropes = 0x328;
				constexpr auto ropes_zonly = 0x329;
				constexpr auto explosions = 0x32a;
				constexpr auto particles = 0x32b;
			} // namespace op_external_game_impulse_force

			namespace op_render_models
			{
				constexpr auto only_render_in_effects_bloom_pass = 0x200;
				constexpr auto only_render_in_effects_water_pass = 0x201;
				constexpr auto use_mixed_resolution_rendering = 0x202;
				constexpr auto only_render_in_effecs_game_overlay = 0x203;
				constexpr auto model_list = 0x208;
				constexpr auto body_group_field = 0x224;
				constexpr auto sub_model_field = 0x228;
				constexpr auto ignore_normal = 0x22c;
				constexpr auto orient_z = 0x22d;
				constexpr auto center_offset = 0x22e;
				constexpr auto vec_local_offset = 0x230;
				constexpr auto vec_local_rotation = 0x888;
				constexpr auto ignore_radius = 0xee0;
				constexpr auto model_scale_cp = 0xee4;
				constexpr auto vec_component_scale = 0xee8;
				constexpr auto local_scale = 0x1540;
				constexpr auto size_cull_bloat = 0x1544;
				constexpr auto animated = 0x1548;
				constexpr auto animation_rate = 0x154c;
				constexpr auto scale_animation_rate = 0x1550;
				constexpr auto force_looping_animation = 0x1551;
				constexpr auto reset_anim_on_stop = 0x1552;
				constexpr auto manual_anim_frame = 0x1553;
				constexpr auto animation_scale_field = 0x1554;
				constexpr auto animation_field = 0x1558;
				constexpr auto manual_frame_field = 0x155c;
				constexpr auto activity_name_arr = 0x1560;
				constexpr auto sequence_name_arr = 0x1660;
				constexpr auto enable_cloth_simulation = 0x1760;
				constexpr auto h_override_material = 0x1768;
				constexpr auto override_translucent_materials = 0x1770;
				constexpr auto skin = 0x1778;
				constexpr auto material_vars = 0x18d0;
				constexpr auto model_input = 0x18e8;
				constexpr auto lod = 0x1948;
				constexpr auto econ_slot_name_arr = 0x194c;
				constexpr auto original_model = 0x1a4c;
				constexpr auto suppress_tint = 0x1a4d;
				constexpr auto use_raw_mesh_group = 0x1a4e;
				constexpr auto disable_shadows = 0x1a4f;
				constexpr auto accepts_decals = 0x1a50;
				constexpr auto force_draw_interleved_with_siblings = 0x1a51;
				constexpr auto do_not_draw_in_particle_pass = 0x1a52;
				constexpr auto render_attribute_arr = 0x1a53;
				constexpr auto radius_scale = 0x1b58;
				constexpr auto alpha_scale = 0x1cb0;
				constexpr auto roll_scale = 0x1e08;
				constexpr auto alpha2_field = 0x1f60;
				constexpr auto vec_color_scale = 0x1f68;
				constexpr auto color_blend_type = 0x25c0;
			} // namespace op_render_models

			namespace init_random_model_sequence
			{
				constexpr auto activity_name_arr = 0x1c0;
				constexpr auto sequence_name_arr = 0x2c0;
				constexpr auto h_model = 0x3c0;
			} // namespace init_random_model_sequence

			namespace op_decay_maintain_count
			{
				constexpr auto particles_to_maintain = 0x1c0;
				constexpr auto decay_delay = 0x1c4;
				constexpr auto snapshot_control_point = 0x1c8;
				constexpr auto lifespan_decay = 0x1cc;
				constexpr auto scale = 0x1d0;
				constexpr auto kill_newest = 0x328;
			} // namespace op_decay_maintain_count

			namespace op_set_control_point_position_to_time_of_day_value
			{
				constexpr auto control_point_number = 0x1d0;
				constexpr auto psz_time_of_day_parameter_arr = 0x1d4;
				constexpr auto vec_default_value = 0x254;
			} // namespace op_set_control_point_position_to_time_of_day_value

			namespace op_render_trails
			{
				constexpr auto enable_fading_and_clamping = 0x2740;
				constexpr auto start_fade_dot = 0x2744;
				constexpr auto end_fade_dot = 0x2748;
				constexpr auto prev_pnt_source = 0x274c;
				constexpr auto max_length = 0x2750;
				constexpr auto min_length = 0x2754;
				constexpr auto ignore_dt = 0x2758;
				constexpr auto constrain_radius_to_length_ratio = 0x275c;
				constexpr auto length_scale = 0x2760;
				constexpr auto length_fade_in_time = 0x2764;
				constexpr auto radius_head_taper = 0x2768;
				constexpr auto vec_head_color_scale = 0x28c0;
				constexpr auto head_alpha_scale = 0x2f18;
				constexpr auto radius_taper = 0x3070;
				constexpr auto vec_tail_color_scale = 0x31c8;
				constexpr auto tail_alpha_scale = 0x3820;
				constexpr auto horiz_crop_field = 0x3978;
				constexpr auto vert_crop_field = 0x397c;
				constexpr auto forward_shift = 0x3980;
				constexpr auto flip_uvbased_on_pitch_yaw = 0x3984;
			} // namespace op_render_trails

			namespace op_remap_dot_product_to_cp
			{
				constexpr auto input_cp1 = 0x1d0;
				constexpr auto input_cp2 = 0x1d4;
				constexpr auto output_cp = 0x1d8;
				constexpr auto out_vector_field = 0x1dc;
				constexpr auto input_min = 0x1e0;
				constexpr auto input_max = 0x338;
				constexpr auto output_min = 0x490;
				constexpr auto output_max = 0x5e8;
			} // namespace op_remap_dot_product_to_cp

			namespace op_orient_to2d_direction
			{
				constexpr auto rot_offset = 0x1c0;
				constexpr auto spin_strength = 0x1c4;
				constexpr auto field_output = 0x1c8;
			} // namespace op_orient_to2d_direction

			namespace op_render_sprites
			{
				constexpr auto sequence_override = 0x2470;
				constexpr auto orientation_type = 0x25c8;
				constexpr auto orientation_control_point = 0x25cc;
				constexpr auto use_yaw_with_normal_aligned = 0x25d0;
				constexpr auto min_size = 0x25d4;
				constexpr auto max_size = 0x25d8;
				constexpr auto alpha_adjust_with_size_adjust = 0x25dc;
				constexpr auto start_fade_size = 0x25e0;
				constexpr auto end_fade_size = 0x2738;
				constexpr auto start_fade_dot = 0x2890;
				constexpr auto end_fade_dot = 0x2894;
				constexpr auto distance_alpha = 0x2898;
				constexpr auto soft_edges = 0x2899;
				constexpr auto edge_softness_start = 0x289c;
				constexpr auto edge_softness_end = 0x28a0;
				constexpr auto outline = 0x28a4;
				constexpr auto outline_color = 0x28a5;
				constexpr auto outline_alpha = 0x28ac;
				constexpr auto outline_start0 = 0x28b0;
				constexpr auto outline_start1 = 0x28b4;
				constexpr auto outline_end0 = 0x28b8;
				constexpr auto outline_end1 = 0x28bc;
				constexpr auto lighting_mode = 0x28c0;
				constexpr auto lighting_tessellation = 0x28c8;
				constexpr auto lighting_directionality = 0x2a20;
				constexpr auto particle_shadows = 0x2b78;
				constexpr auto shadow_density = 0x2b7c;
			} // namespace op_render_sprites

			namespace op_remap_external_wind_to_cp
			{
				constexpr auto cp = 0x1d0;
				constexpr auto cpoutput = 0x1d4;
				constexpr auto vec_scale = 0x1d8;
				constexpr auto set_magnitude = 0x830;
				constexpr auto out_vector_field = 0x834;
			} // namespace op_remap_external_wind_to_cp

			namespace op_teleport_beam
			{
				constexpr auto cpposition = 0x1c0;
				constexpr auto cpvelocity = 0x1c4;
				constexpr auto cpmisc = 0x1c8;
				constexpr auto cpcolor = 0x1cc;
				constexpr auto cpinvalid_color = 0x1d0;
				constexpr auto cpextra_arc_data = 0x1d4;
				constexpr auto v_gravity = 0x1d8;
				constexpr auto arc_max_duration = 0x1e4;
				constexpr auto segment_break = 0x1e8;
				constexpr auto arc_speed = 0x1ec;
				constexpr auto alpha = 0x1f0;
			} // namespace op_teleport_beam

			namespace op_twist_around_axis
			{
				constexpr auto force_amount = 0x1d0;
				constexpr auto twist_axis = 0x1d4;
				constexpr auto local_space = 0x1e0;
				constexpr auto control_point_number = 0x1e4;
			} // namespace op_twist_around_axis

			namespace op_model_dampen_movement
			{
				constexpr auto control_point_number = 0x1c0;
				constexpr auto bound_box = 0x1c4;
				constexpr auto outside = 0x1c5;
				constexpr auto use_bones = 0x1c6;
				constexpr auto hitbox_set_name_arr = 0x1c7;
				constexpr auto vec_pos_offset = 0x248;
				constexpr auto drag = 0x8a0;
			} // namespace op_model_dampen_movement

			namespace init_velocity_random
			{
				constexpr auto control_point_number = 0x1c0;
				constexpr auto speed_min = 0x1c8;
				constexpr auto speed_max = 0x320;
				constexpr auto local_coordinate_system_speed_min = 0x478;
				constexpr auto local_coordinate_system_speed_max = 0xad0;
				constexpr auto ignore_dt = 0x1128;
				constexpr auto randomness_parameters = 0x112c;
			} // namespace init_velocity_random

			namespace op_plane_cull
			{
				constexpr auto plane_control_point = 0x1c0;
				constexpr auto vec_plane_direction = 0x1c4;
				constexpr auto local_space = 0x1d0;
				constexpr auto plane_offset = 0x1d4;
			} // namespace op_plane_cull

			namespace op_remap_scalar_once_timed
			{
				constexpr auto proportional = 0x1c0;
				constexpr auto field_input = 0x1c4;
				constexpr auto field_output = 0x1c8;
				constexpr auto input_min = 0x1cc;
				constexpr auto input_max = 0x1d0;
				constexpr auto output_min = 0x1d4;
				constexpr auto output_max = 0x1d8;
				constexpr auto remap_time = 0x1dc;
			} // namespace op_remap_scalar_once_timed

			namespace particle_children_info_t
			{
				constexpr auto child_ref = 0x0;
				constexpr auto delay = 0x8;
				constexpr auto end_cap = 0xc;
				constexpr auto disable_child = 0xd;
				constexpr auto detail_level = 0x10;
			} // namespace particle_children_info_t

			namespace init_initial_velocity_noise
			{
				constexpr auto vec_abs_val = 0x1c0;
				constexpr auto vec_abs_val_inv = 0x1cc;
				constexpr auto vec_offset_loc = 0x1d8;
				constexpr auto offset = 0x830;
				constexpr auto vec_output_min = 0x988;
				constexpr auto vec_output_max = 0xfe0;
				constexpr auto noise_scale = 0x1638;
				constexpr auto noise_scale_loc = 0x1790;
				constexpr auto transform_input = 0x18e8;
				constexpr auto ignore_dt = 0x1950;
			} // namespace init_initial_velocity_noise

			namespace init_random_vector
			{
				constexpr auto vec_min = 0x1c0;
				constexpr auto vec_max = 0x1cc;
				constexpr auto field_output = 0x1d8;
				constexpr auto randomness_parameters = 0x1dc;
			} // namespace init_random_vector

			namespace op_constrain_distance
			{
				constexpr auto min_distance = 0x1c0;
				constexpr auto max_distance = 0x318;
				constexpr auto control_point_number = 0x470;
				constexpr auto center_offset = 0x474;
				constexpr auto global_center = 0x480;
			} // namespace op_constrain_distance

			namespace init_rt_env_cull
			{
				constexpr auto vec_test_dir = 0x1c0;
				constexpr auto vec_test_normal = 0x1cc;
				constexpr auto use_velocity = 0x1d8;
				constexpr auto cull_on_miss = 0x1d9;
				constexpr auto life_adjust = 0x1da;
				constexpr auto rt_env_name_arr = 0x1db;
				constexpr auto rtenv_cp = 0x25c;
				constexpr auto component = 0x260;
			} // namespace init_rt_env_cull

			namespace init_status_effect
			{
				constexpr auto detail2_combo = 0x1c0;
				constexpr auto detail2_rotation = 0x1c4;
				constexpr auto detail2_scale = 0x1c8;
				constexpr auto detail2_blend_factor = 0x1cc;
				constexpr auto color_warp_intensity = 0x1d0;
				constexpr auto diffuse_warp_blend_to_full = 0x1d4;
				constexpr auto env_map_intensity = 0x1d8;
				constexpr auto ambient_scale = 0x1dc;
				constexpr auto specular_color = 0x1e0;
				constexpr auto specular_scale = 0x1e4;
				constexpr auto specular_exponent = 0x1e8;
				constexpr auto specular_exponent_blend_to_full = 0x1ec;
				constexpr auto specular_blend_to_full = 0x1f0;
				constexpr auto rim_light_color = 0x1f4;
				constexpr auto rim_light_scale = 0x1f8;
				constexpr auto reflections_tint_by_base_blend_to_none = 0x1fc;
				constexpr auto metalness_blend_to_full = 0x200;
				constexpr auto self_illum_blend_to_full = 0x204;
			} // namespace init_status_effect

			namespace op_oscillate_scalar_simple
			{
				constexpr auto rate = 0x1c0;
				constexpr auto frequency = 0x1c4;
				constexpr auto field = 0x1c8;
				constexpr auto osc_mult = 0x1cc;
				constexpr auto osc_add = 0x1d0;
			} // namespace op_oscillate_scalar_simple

			namespace particle_preview_body_group_t
			{
				constexpr auto body_group_name = 0x0;
				constexpr auto value = 0x8;
			} // namespace particle_preview_body_group_t

			namespace op_point_vector_at_next_particle
			{
				constexpr auto field_output = 0x1c0;
				constexpr auto interpolation = 0x1c8;
			} // namespace op_point_vector_at_next_particle

			namespace op_remap_cpvelocity_to_vector
			{
				constexpr auto control_point = 0x1c0;
				constexpr auto field_output = 0x1c4;
				constexpr auto scale = 0x1c8;
				constexpr auto normalize = 0x1cc;
			} // namespace op_remap_cpvelocity_to_vector

			namespace op_remap_sdfdistance_to_vector_attribute
			{
				constexpr auto vector_field_output = 0x1c0;
				constexpr auto vector_field_input = 0x1c4;
				constexpr auto min_distance = 0x1c8;
				constexpr auto max_distance = 0x320;
				constexpr auto v_value_below_min = 0x478;
				constexpr auto v_value_at_min = 0x484;
				constexpr auto v_value_at_max = 0x490;
				constexpr auto v_value_above_max = 0x49c;
			} // namespace op_remap_sdfdistance_to_vector_attribute

			namespace op_set_control_points_to_particle
			{
				constexpr auto child_group_id = 0x1c0;
				constexpr auto first_control_point = 0x1c4;
				constexpr auto num_control_points = 0x1c8;
				constexpr auto first_source_point = 0x1cc;
				constexpr auto set_orientation = 0x1d0;
				constexpr auto orientation_mode = 0x1d4;
				constexpr auto set_parent = 0x1d8;
			} // namespace op_set_control_points_to_particle

			namespace op_render_tree_shake
			{
				constexpr auto peak_strength = 0x200;
				constexpr auto peak_strength_field_override = 0x204;
				constexpr auto radius = 0x208;
				constexpr auto radius_field_override = 0x20c;
				constexpr auto shake_duration = 0x210;
				constexpr auto transition_time = 0x214;
				constexpr auto twist_amount = 0x218;
				constexpr auto radial_amount = 0x21c;
				constexpr auto control_point_orientation_amount = 0x220;
				constexpr auto control_point_for_linear_direction = 0x224;
			} // namespace op_render_tree_shake

			namespace op_render_sound
			{
				constexpr auto duration_scale = 0x200;
				constexpr auto snd_lvl_scale = 0x204;
				constexpr auto pitch_scale = 0x208;
				constexpr auto volume_scale = 0x20c;
				constexpr auto snd_lvl_field = 0x210;
				constexpr auto duration_field = 0x214;
				constexpr auto pitch_field = 0x218;
				constexpr auto volume_field = 0x21c;
				constexpr auto channel = 0x220;
				constexpr auto cpreference = 0x224;
				constexpr auto psz_sound_name_arr = 0x228;
				constexpr auto suppress_stop_sound_event = 0x328;
			} // namespace op_render_sound

			namespace init_status_effect_citadel
			{
				constexpr auto sfxcolor_warp_amount = 0x1c0;
				constexpr auto sfxnormal_amount = 0x1c4;
				constexpr auto sfxmetalness_amount = 0x1c8;
				constexpr auto sfxroughness_amount = 0x1cc;
				constexpr auto sfxself_illum_amount = 0x1d0;
				constexpr auto sfxsscale = 0x1d4;
				constexpr auto sfxsscroll_x = 0x1d8;
				constexpr auto sfxsscroll_y = 0x1dc;
				constexpr auto sfxsscroll_z = 0x1e0;
				constexpr auto sfxsoffset_x = 0x1e4;
				constexpr auto sfxsoffset_y = 0x1e8;
				constexpr auto sfxsoffset_z = 0x1ec;
				constexpr auto detail_combo = 0x1f0;
				constexpr auto sfxsdetail_amount = 0x1f4;
				constexpr auto sfxsdetail_scale = 0x1f8;
				constexpr auto sfxsdetail_scroll_x = 0x1fc;
				constexpr auto sfxsdetail_scroll_y = 0x200;
				constexpr auto sfxsdetail_scroll_z = 0x204;
				constexpr auto sfxsuse_model_uvs = 0x208;
			} // namespace init_status_effect_citadel

			namespace op_render_ropes
			{
				constexpr auto enable_fading_and_clamping = 0x2470;
				constexpr auto min_size = 0x2474;
				constexpr auto max_size = 0x2478;
				constexpr auto start_fade_size = 0x247c;
				constexpr auto end_fade_size = 0x2480;
				constexpr auto start_fade_dot = 0x2484;
				constexpr auto end_fade_dot = 0x2488;
				constexpr auto radius_taper = 0x248c;
				constexpr auto min_tesselation = 0x2490;
				constexpr auto max_tesselation = 0x2494;
				constexpr auto tess_scale = 0x2498;
				constexpr auto texture_vworld_size = 0x24a0;
				constexpr auto texture_vscroll_rate = 0x25f8;
				constexpr auto texture_voffset = 0x2750;
				constexpr auto texture_vparams_cp = 0x28a8;
				constexpr auto clamp_v = 0x28ac;
				constexpr auto scale_cp1 = 0x28b0;
				constexpr auto scale_cp2 = 0x28b4;
				constexpr auto scale_vsize_by_control_point_distance = 0x28b8;
				constexpr auto scale_vscroll_by_control_point_distance = 0x28bc;
				constexpr auto scale_voffset_by_control_point_distance = 0x28c0;
				constexpr auto use_scalar_for_texture_coordinate = 0x28c5;
				constexpr auto scalar_field_for_texture_coordinate = 0x28c8;
				constexpr auto scalar_attribute_texture_coord_scale = 0x28cc;
				constexpr auto reverse_order = 0x28d0;
				constexpr auto closed_loop = 0x28d1;
				constexpr auto orientation_type = 0x28d4;
				constexpr auto vector_field_for_orientation = 0x28d8;
				constexpr auto draw_as_opaque = 0x28dc;
				constexpr auto generate_normals = 0x28dd;
			} // namespace op_render_ropes

			namespace op_spring_to_vector_constraint
			{
				constexpr auto rest_length = 0x1c0;
				constexpr auto min_distance = 0x318;
				constexpr auto max_distance = 0x470;
				constexpr auto resting_length = 0x5c8;
				constexpr auto vec_anchor_vector = 0x720;
			} // namespace op_spring_to_vector_constraint

			namespace op_fade_out_simple
			{
				constexpr auto fade_out_time = 0x1c0;
				constexpr auto field_output = 0x1c4;
			} // namespace op_fade_out_simple

			namespace op_remap_model_volumeto_cp
			{
				constexpr auto bbox_type = 0x1d0;
				constexpr auto in_control_point_number = 0x1d4;
				constexpr auto out_control_point_number = 0x1d8;
				constexpr auto out_control_point_max_number = 0x1dc;
				constexpr auto field = 0x1e0;
				constexpr auto input_min = 0x1e4;
				constexpr auto input_max = 0x1e8;
				constexpr auto output_min = 0x1ec;
				constexpr auto output_max = 0x1f0;
			} // namespace op_remap_model_volumeto_cp

			namespace op_move_to_hitbox
			{
				constexpr auto model_input = 0x1c0;
				constexpr auto transform_input = 0x220;
				constexpr auto life_time_lerp_start = 0x28c;
				constexpr auto life_time_lerp_end = 0x290;
				constexpr auto prev_pos_scale = 0x294;
				constexpr auto hitbox_set_name_arr = 0x298;
				constexpr auto use_bones = 0x318;
				constexpr auto lerp_type = 0x31c;
				constexpr auto interpolation = 0x320;
			} // namespace op_move_to_hitbox

			namespace collision_group_context_t
			{
				constexpr auto collision_group_number = 0x0;
			} // namespace collision_group_context_t

			namespace op_remap_transform_to_velocity
			{
				constexpr auto transform_input = 0x1c0;
			} // namespace op_remap_transform_to_velocity

			namespace op_remap_speedto_cp
			{
				constexpr auto in_control_point_number = 0x1d0;
				constexpr auto out_control_point_number = 0x1d4;
				constexpr auto field = 0x1d8;
				constexpr auto input_min = 0x1dc;
				constexpr auto input_max = 0x1e0;
				constexpr auto output_min = 0x1e4;
				constexpr auto output_max = 0x1e8;
				constexpr auto use_delta_v = 0x1ec;
			} // namespace op_remap_speedto_cp

			namespace op_render_deferred_light
			{
				constexpr auto use_alpha_test_window = 0x200;
				constexpr auto use_texture = 0x201;
				constexpr auto radius_scale = 0x204;
				constexpr auto alpha_scale = 0x208;
				constexpr auto alpha2_field = 0x20c;
				constexpr auto vec_color_scale = 0x210;
				constexpr auto color_blend_type = 0x868;
				constexpr auto light_distance = 0x86c;
				constexpr auto start_falloff = 0x870;
				constexpr auto distance_falloff = 0x874;
				constexpr auto spot_fo_v = 0x878;
				constexpr auto alpha_test_point_field = 0x87c;
				constexpr auto alpha_test_range_field = 0x880;
				constexpr auto alpha_test_sharpness_field = 0x884;
				constexpr auto h_texture = 0x888;
				constexpr auto hsvshift_control_point = 0x890;
			} // namespace op_render_deferred_light

			namespace op_decay
			{
				constexpr auto rope_decay = 0x1c0;
				constexpr auto force_preserve_particle_order = 0x1c1;
			} // namespace op_decay

			namespace relationship_t
			{
				constexpr auto disposition = 0x0;
				constexpr auto priority = 0x4;
			} // namespace relationship_t

			namespace cnav_volume_vector
			{
				constexpr auto has_been_pre_filtered = 0x78;
			} // namespace cnav_volume_vector

			namespace cnetwork_velocity_vector
			{
				constexpr auto vec_x = 0x10;
				constexpr auto vec_y = 0x18;
				constexpr auto vec_z = 0x20;
			} // namespace cnetwork_velocity_vector

			namespace hudtextparms_t
			{
				constexpr auto color1 = 0x0;
				constexpr auto color2 = 0x4;
				constexpr auto effect = 0x8;
				constexpr auto channel = 0x9;
				constexpr auto x = 0xc;
				constexpr auto y = 0x10;
			} // namespace hudtextparms_t

			namespace csadditional_per_round_stats_t
			{
				constexpr auto num_chickens_killed = 0x0;
				constexpr auto kills_while_blind = 0x4;
				constexpr auto bomb_carrierkills = 0x8;
				constexpr auto burn_damage_inflicted = 0xc;
				constexpr auto dinks = 0x10;
			} // namespace csadditional_per_round_stats_t

			namespace dynpitchvol_base_t
			{
				constexpr auto preset = 0x0;
				constexpr auto pitchrun = 0x4;
				constexpr auto pitchstart = 0x8;
				constexpr auto spinup = 0xc;
				constexpr auto spindown = 0x10;
				constexpr auto volrun = 0x14;
				constexpr auto volstart = 0x18;
				constexpr auto fadein = 0x1c;
				constexpr auto fadeout = 0x20;
				constexpr auto lfotype = 0x24;
				constexpr auto lforate = 0x28;
				constexpr auto lfomodpitch = 0x2c;
				constexpr auto lfomodvol = 0x30;
				constexpr auto cspinup = 0x34;
				constexpr auto cspincount = 0x38;
				constexpr auto pitch = 0x3c;
				constexpr auto spinupsav = 0x40;
				constexpr auto spindownsav = 0x44;
				constexpr auto pitchfrac = 0x48;
				constexpr auto vol = 0x4c;
				constexpr auto fadeinsav = 0x50;
				constexpr auto fadeoutsav = 0x54;
				constexpr auto volfrac = 0x58;
				constexpr auto lfofrac = 0x5c;
				constexpr auto lfomult = 0x60;
			} // namespace dynpitchvol_base_t

			namespace cgame_rules
			{
				constexpr auto quest_name_arr = 0x8;
				constexpr auto quest_phase = 0x88;
			} // namespace cgame_rules

			namespace cbreakable_stage_helper
			{
				constexpr auto current_stage = 0x8;
				constexpr auto stage_count = 0xc;
			} // namespace cbreakable_stage_helper

			namespace model_config_handle_t
			{
				constexpr auto value = 0x0;
			} // namespace model_config_handle_t

			namespace csadditional_match_stats_t
			{
				constexpr auto num_rounds_survived = 0x14;
				constexpr auto max_num_rounds_survived = 0x18;
				constexpr auto num_rounds_survived_total = 0x1c;
				constexpr auto rounds_won_without_purchase = 0x20;
				constexpr auto rounds_won_without_purchase_total = 0x24;
				constexpr auto num_first_kills = 0x28;
				constexpr auto num_clutch_kills = 0x2c;
				constexpr auto num_pistol_kills = 0x30;
				constexpr auto num_sniper_kills = 0x34;
				constexpr auto num_suicides = 0x38;
				constexpr auto num_team_kills = 0x3c;
				constexpr auto team_damage = 0x40;
			} // namespace csadditional_match_stats_t

			namespace response_followup
			{
				constexpr auto followup_concept_ptr = 0x0;
				constexpr auto followup_contexts_ptr = 0x8;
				constexpr auto followup_delay = 0x10;
				constexpr auto followup_target_ptr = 0x14;
				constexpr auto followup_entityiotarget_ptr = 0x1c;
				constexpr auto followup_entityioinput_ptr = 0x24;
				constexpr auto followup_entityiodelay = 0x2c;
				constexpr auto b_fired = 0x30;
			} // namespace response_followup

			namespace cfiring_mode_int
			{
				constexpr auto values_arr = 0x0;
			} // namespace cfiring_mode_int

			namespace canim_graph_tag_ref
			{
				constexpr auto tag_index = 0x0;
				constexpr auto tag_name = 0x10;
			} // namespace canim_graph_tag_ref

			namespace cnav_volume_breadth_first_search
			{
				constexpr auto v_start_pos = 0xa0;
				constexpr auto search_dist = 0xac;
			} // namespace cnav_volume_breadth_first_search

			namespace cnav_hull_vdata
			{
				constexpr auto agent_enabled = 0x0;
				constexpr auto agent_radius = 0x4;
				constexpr auto agent_height = 0x8;
				constexpr auto agent_short_height_enabled = 0xc;
				constexpr auto agent_short_height = 0x10;
				constexpr auto agent_max_climb = 0x14;
				constexpr auto agent_max_slope = 0x18;
				constexpr auto agent_max_jump_down_dist = 0x1c;
				constexpr auto agent_max_jump_horiz_dist_base = 0x20;
				constexpr auto agent_max_jump_up_dist = 0x24;
				constexpr auto agent_border_erosion = 0x28;
			} // namespace cnav_hull_vdata

			namespace cin_button_state
			{
				constexpr auto button_states_arr = 0x8;
			} // namespace cin_button_state

			namespace ciron_sight_controller
			{
				constexpr auto iron_sight_available = 0x8;
				constexpr auto iron_sight_amount = 0xc;
				constexpr auto iron_sight_amount_gained = 0x10;
				constexpr auto iron_sight_amount_biased = 0x14;
			} // namespace ciron_sight_controller

			namespace ctake_damage_summary_scope_guard
			{
				constexpr auto vec_summaries = 0x8;
			} // namespace ctake_damage_summary_scope_guard

			namespace game_time_t
			{
				constexpr auto value = 0x0;
			} // namespace game_time_t

			namespace particle_index_t
			{
				constexpr auto value = 0x0;
			} // namespace particle_index_t

			namespace cpulse_cell_value_find_ent_by_name
			{
				constexpr auto entity_type = 0x48;
			} // namespace cpulse_cell_value_find_ent_by_name

			namespace cnav_volume_sphere
			{
				constexpr auto v_center = 0x70;
				constexpr auto radius = 0x7c;
			} // namespace cnav_volume_sphere

			namespace cai_expresser
			{
				constexpr auto stop_talk_time = 0x38;
				constexpr auto stop_talk_time_without_delay = 0x3c;
				constexpr auto blocked_talk_time = 0x40;
				constexpr auto voice_pitch = 0x44;
				constexpr auto last_time_accepted_speak = 0x48;
				constexpr auto allow_speaking_interrupts = 0x4c;
				constexpr auto consider_scene_involvement_as_speech = 0x4d;
				constexpr auto last_spoken_priority = 0x50;
				constexpr auto outer_ptr = 0x58;
			} // namespace cai_expresser

			namespace extent
			{
				constexpr auto lo = 0x0;
				constexpr auto hi = 0xc;
			} // namespace extent

			namespace csimple_sim_timer
			{
				constexpr auto next = 0x0;
				constexpr auto world_group_id = 0x4;
			} // namespace csimple_sim_timer

			namespace ammo_index_t
			{
				constexpr auto value = 0x0;
			} // namespace ammo_index_t

			namespace cconstant_force_controller
			{
				constexpr auto linear = 0xc;
				constexpr auto angular = 0x18;
				constexpr auto linear_save = 0x24;
				constexpr auto angular_save = 0x30;
			} // namespace cconstant_force_controller

			namespace animation_update_list_handle_t
			{
				constexpr auto value = 0x0;
			} // namespace animation_update_list_handle_t

			namespace response_params
			{
				constexpr auto odds = 0x10;
				constexpr auto flags = 0x12;
				constexpr auto followup_ptr = 0x18;
			} // namespace response_params

			namespace cpulse_cell_step_set_anim_graph_param
			{
				constexpr auto param_name = 0x48;
			} // namespace cpulse_cell_step_set_anim_graph_param

			namespace ctake_damage_result
			{
				constexpr auto health_lost = 0x0;
				constexpr auto damage_taken = 0x4;
			} // namespace ctake_damage_result

			namespace cbase_issue
			{
				constexpr auto type_string_arr = 0x20;
				constexpr auto details_string_arr = 0x60;
				constexpr auto num_yes_votes = 0x164;
				constexpr auto num_no_votes = 0x168;
				constexpr auto num_potential_votes = 0x16c;
				constexpr auto vote_controller_ptr = 0x170;
			} // namespace cbase_issue

			namespace csim_timer
			{
				constexpr auto interval = 0x8;
			} // namespace csim_timer

			namespace cmotor_controller
			{
				constexpr auto speed = 0x8;
				constexpr auto max_torque = 0xc;
				constexpr auto axis = 0x10;
				constexpr auto inertia_factor = 0x1c;
			} // namespace cmotor_controller

			namespace crange_int
			{
				constexpr auto value_arr = 0x0;
			} // namespace crange_int

			namespace hull_flags_t
			{
				constexpr auto hull_human = 0x0;
				constexpr auto hull_small_centered = 0x1;
				constexpr auto hull_wide_human = 0x2;
				constexpr auto hull_tiny = 0x3;
				constexpr auto hull_medium = 0x4;
				constexpr auto hull_tiny_centered = 0x5;
				constexpr auto hull_large = 0x6;
				constexpr auto hull_large_centered = 0x7;
				constexpr auto hull_medium_tall = 0x8;
				constexpr auto hull_small = 0x9;
			} // namespace hull_flags_t

			namespace cpulse_cell_step_ent_fire
			{
				constexpr auto input = 0x48;
			} // namespace cpulse_cell_step_ent_fire

			namespace ragdoll_t
			{
				constexpr auto list = 0x0;
				constexpr auto bone_index = 0x18;
				constexpr auto allow_stretch = 0x30;
				constexpr auto unused = 0x31;
			} // namespace ragdoll_t

			namespace csmooth_func
			{
				constexpr auto smooth_amplitude = 0x8;
				constexpr auto smooth_bias = 0xc;
				constexpr auto smooth_duration = 0x10;
				constexpr auto smooth_remaining_time = 0x14;
				constexpr auto smooth_dir = 0x18;
			} // namespace csmooth_func

			namespace ccopy_recipient_filter
			{
				constexpr auto flags = 0x8;
				constexpr auto recipients = 0x10;
			} // namespace ccopy_recipient_filter

			namespace cfiring_mode_float
			{
				constexpr auto values_arr = 0x0;
			} // namespace cfiring_mode_float

			namespace locksound_t
			{
				constexpr auto s_locked_sound = 0x8;
				constexpr auto s_unlocked_sound = 0x10;
				constexpr auto flwait_sound = 0x18;
			} // namespace locksound_t

			namespace cpulse_cell_outflow_play_vcd
			{
				constexpr auto vcd_filename = 0x48;
				constexpr auto on_finished = 0x50;
				constexpr auto triggers = 0x60;
			} // namespace cpulse_cell_outflow_play_vcd

			namespace csound_envelope
			{
				constexpr auto current = 0x0;
				constexpr auto target = 0x4;
				constexpr auto rate = 0x8;
				constexpr auto forceupdate = 0xc;
			} // namespace csound_envelope

			namespace cscene_event_info
			{
				constexpr auto layer = 0x0;
				constexpr auto priority = 0x4;
				constexpr auto h_sequence = 0x8;
				constexpr auto weight = 0xc;
				constexpr auto is_moving = 0x10;
				constexpr auto has_arrived = 0x11;
				constexpr auto initial_yaw = 0x14;
				constexpr auto target_yaw = 0x18;
				constexpr auto facing_yaw = 0x1c;
				constexpr auto type = 0x20;
				constexpr auto next = 0x24;
				constexpr auto is_gesture = 0x28;
				constexpr auto should_remove = 0x29;
				constexpr auto h_target = 0x54;
				constexpr auto scene_event_id = 0x58;
				constexpr auto client_side = 0x5c;
				constexpr auto started = 0x5d;
			} // namespace cscene_event_info

			namespace cskill_float
			{
				constexpr auto value_arr = 0x0;
			} // namespace cskill_float

			namespace cnav_hull_preset_vdata
			{
				constexpr auto vec_nav_hulls = 0x0;
			} // namespace cnav_hull_preset_vdata

			namespace game_tick_t
			{
				constexpr auto value = 0x0;
			} // namespace game_tick_t

			namespace cskill_int
			{
				constexpr auto value_arr = 0x0;
			} // namespace cskill_int

			namespace chint_message_queue
			{
				constexpr auto tm_message_end = 0x8;
				constexpr auto messages = 0x10;
				constexpr auto player_controller_ptr = 0x28;
			} // namespace chint_message_queue

			namespace csingleplay_rules
			{
				constexpr auto single_player_game_ending = 0x90;
			} // namespace csingleplay_rules

			namespace magnetted_objects_t
			{
				constexpr auto h_entity = 0x8;
			} // namespace magnetted_objects_t

			namespace cnetwork_origin_quantized_vector
			{
				constexpr auto vec_x = 0x10;
				constexpr auto vec_y = 0x18;
				constexpr auto vec_z = 0x20;
			} // namespace cnetwork_origin_quantized_vector

			namespace cnetwork_origin_cell_coord_quantized_vector
			{
				constexpr auto cell_x = 0x10;
				constexpr auto cell_y = 0x12;
				constexpr auto cell_z = 0x14;
				constexpr auto outside_world = 0x16;
				constexpr auto vec_x = 0x18;
				constexpr auto vec_y = 0x20;
				constexpr auto vec_z = 0x28;
			} // namespace cnetwork_origin_cell_coord_quantized_vector

			namespace ragdollelement_t
			{
				constexpr auto origin_parent_space = 0x0;
				constexpr auto parent_index = 0x20;
				constexpr auto radius = 0x24;
			} // namespace ragdollelement_t

			namespace command_tool_command_t
			{
				constexpr auto enabled = 0x0;
				constexpr auto opened = 0x1;
				constexpr auto internal_id = 0x4;
				constexpr auto short_name = 0x8;
				constexpr auto exec_mode = 0x10;
				constexpr auto spawn_group = 0x18;
				constexpr auto periodic_exec_delay = 0x20;
				constexpr auto spec_type = 0x24;
				constexpr auto entity_spec = 0x28;
				constexpr auto commands = 0x30;
				constexpr auto set_debug_bits = 0x38;
				constexpr auto clear_debug_bits = 0x40;
			} // namespace command_tool_command_t

			namespace cshatter_glass_shard
			{
				constexpr auto h_shard_handle = 0x8;
				constexpr auto vec_panel_vertices = 0x10;
				constexpr auto v_local_panel_space_origin = 0x28;
				constexpr auto h_model = 0x30;
				constexpr auto h_physics_entity = 0x38;
				constexpr auto h_parent_panel = 0x3c;
				constexpr auto h_parent_shard = 0x40;
				constexpr auto shatter_stress_type = 0x44;
				constexpr auto vec_stress_velocity = 0x48;
				constexpr auto created_model = 0x54;
				constexpr auto longest_edge = 0x58;
				constexpr auto shortest_edge = 0x5c;
				constexpr auto longest_across = 0x60;
				constexpr auto shortest_across = 0x64;
				constexpr auto sum_of_all_edges = 0x68;
				constexpr auto area = 0x6c;
				constexpr auto on_frame_edge = 0x70;
				constexpr auto parent_panels_nth_shard = 0x74;
				constexpr auto sub_shard_generation = 0x78;
				constexpr auto vec_average_vert_position = 0x7c;
				constexpr auto average_vert_position_is_valid = 0x84;
				constexpr auto vec_panel_space_stress_position_a = 0x88;
				constexpr auto vec_panel_space_stress_position_b = 0x90;
				constexpr auto stress_position_ais_valid = 0x98;
				constexpr auto stress_position_bis_valid = 0x99;
				constexpr auto flagged_for_removal = 0x9a;
				constexpr auto physics_entity_spawned_at_time = 0x9c;
				constexpr auto shatter_rate_limited = 0xa0;
				constexpr auto h_entity_hitting_me = 0xa4;
				constexpr auto vec_neighbors = 0xa8;
			} // namespace cshatter_glass_shard

			namespace cstopwatch_base
			{
				constexpr auto is_running = 0x8;
			} // namespace cstopwatch_base

			namespace crr_response
			{
				constexpr auto type = 0x0;
				constexpr auto response_name_arr = 0x1;
				constexpr auto matching_rule_arr = 0xc1;
				constexpr auto params = 0x148;
				constexpr auto match_score = 0x168;
				constexpr auto speaker_context_ptr = 0x170;
				constexpr auto world_context_ptr = 0x178;
				constexpr auto followup = 0x180;
				constexpr auto pch_criteria_names = 0x1b8;
				constexpr auto pch_criteria_values = 0x1d0;
			} // namespace crr_response

			namespace crand_stopwatch
			{
				constexpr auto min_interval = 0xc;
				constexpr auto max_interval = 0x10;
			} // namespace crand_stopwatch

			namespace ammo_type_info_t
			{
				constexpr auto max_carry = 0x10;
				constexpr auto splash_size = 0x1c;
				constexpr auto flags = 0x24;
				constexpr auto mass = 0x28;
				constexpr auto speed = 0x2c;
			} // namespace ammo_type_info_t

			namespace ragdoll_creation_params_t
			{
				constexpr auto v_force = 0x0;
				constexpr auto force_bone = 0xc;
			} // namespace ragdoll_creation_params_t

			namespace cnav_link_movement_vdata
			{
				constexpr auto is_interpolated = 0x0;
				constexpr auto un_recommended_distance = 0x4;
				constexpr auto vec_animgraph_vars = 0x8;
			} // namespace cnav_link_movement_vdata

			namespace cnetwork_transmit_component
			{
				constexpr auto transmit_state_owned_counter = 0x16c;
			} // namespace cnetwork_transmit_component

			namespace cnav_link_animgraph_var
			{
				constexpr auto str_animgraph_var = 0x0;
				constexpr auto un_alignment_degrees = 0x8;
			} // namespace cnav_link_animgraph_var

			namespace game_ammo_type_info_t
			{
				constexpr auto buy_size = 0x38;
				constexpr auto cost = 0x3c;
			} // namespace game_ammo_type_info_t

			namespace cresponse_criteria_set
			{
				constexpr auto num_prefixed_contexts = 0x28;
				constexpr auto override_on_append = 0x2c;
			} // namespace cresponse_criteria_set

			namespace ccommentary_system
			{
				constexpr auto commentary_convars_changing = 0x11;
				constexpr auto commentary_enabled_mid_game = 0x12;
				constexpr auto next_teleport_time = 0x14;
				constexpr auto teleport_stage = 0x18;
				constexpr auto cheat_state = 0x1c;
				constexpr auto is_first_spawn_group_to_load = 0x1d;
				constexpr auto h_current_node = 0x38;
				constexpr auto h_active_commentary_node = 0x3c;
				constexpr auto h_last_commentary_node = 0x40;
				constexpr auto vec_nodes = 0x48;
			} // namespace ccommentary_system

			namespace ctake_damage_info
			{
				constexpr auto vec_damage_force = 0x8;
				constexpr auto vec_damage_position = 0x14;
				constexpr auto vec_reported_position = 0x20;
				constexpr auto vec_damage_direction = 0x2c;
				constexpr auto h_inflictor = 0x38;
				constexpr auto h_attacker = 0x3c;
				constexpr auto h_ability = 0x40;
				constexpr auto damage = 0x44;
				constexpr auto bits_damage_type = 0x48;
				constexpr auto damage_custom = 0x4c;
				constexpr auto ammo_type = 0x50;
				constexpr auto original_damage = 0x60;
				constexpr auto should_bleed = 0x64;
				constexpr auto should_spark = 0x65;
				constexpr auto damage_flags = 0x70;
				constexpr auto num_objects_penetrated = 0x74;
				constexpr auto h_script_instance = 0x78;
				constexpr auto in_take_damage_flow = 0x94;
			} // namespace ctake_damage_info

			namespace velocity_sampler
			{
				constexpr auto prev_sample = 0x0;
				constexpr auto prev_sample_time = 0xc;
				constexpr auto ideal_sample_rate = 0x10;
			} // namespace velocity_sampler

			namespace cphysics_shake
			{
				constexpr auto force = 0x8;
			} // namespace cphysics_shake

			namespace cpulse_cell_inflow_game_event
			{
				constexpr auto event_name = 0x70;
			} // namespace cpulse_cell_inflow_game_event

			namespace csound_patch
			{
				constexpr auto pitch = 0x8;
				constexpr auto volume = 0x18;
				constexpr auto shutdown_time = 0x30;
				constexpr auto last_time = 0x34;
				constexpr auto isz_sound_script_name = 0x38;
				constexpr auto h_ent = 0x40;
				constexpr auto sound_entity_index = 0x44;
				constexpr auto sound_origin = 0x48;
				constexpr auto is_playing = 0x54;
				constexpr auto filter = 0x58;
				constexpr auto close_caption_duration = 0x80;
				constexpr auto updated_sound_origin = 0x84;
				constexpr auto isz_class_name = 0x88;
			} // namespace csound_patch

			namespace simple_constraint_sound_profile
			{
				constexpr auto e_keypoints = 0x8;
				constexpr auto key_points_arr = 0xc;
				constexpr auto reversal_sound_thresholds_arr = 0x14;
			} // namespace simple_constraint_sound_profile

			namespace thinkfunc_t
			{
				constexpr auto h_fn = 0x8;
				constexpr auto context = 0x10;
				constexpr auto next_think_tick = 0x14;
				constexpr auto last_think_tick = 0x18;
			} // namespace thinkfunc_t

			namespace concept_history_t
			{
				constexpr auto time_spoken = 0x0;
				constexpr auto response = 0x8;
			} // namespace concept_history_t

			namespace cstopwatch
			{
				constexpr auto interval = 0xc;
			} // namespace cstopwatch

			namespace cgame_choreo_services
			{
				constexpr auto h_owner = 0x8;
				constexpr auto h_scripted_sequence = 0xc;
				constexpr auto script_state = 0x10;
				constexpr auto choreo_state = 0x14;
				constexpr auto time_started_state = 0x18;
			} // namespace cgame_choreo_services

			namespace cai_expresser_with_followup
			{
				constexpr auto postponed_followup_ptr = 0x60;
			} // namespace cai_expresser_with_followup

			namespace cresponse_queue__cdeferred_response
			{
				constexpr auto contexts = 0x10;
				constexpr auto dispatch_time = 0x40;
				constexpr auto h_issuer = 0x44;
				constexpr auto response = 0x50;
				constexpr auto response_valid = 0x238;
			} // namespace cresponse_queue__cdeferred_response

			namespace cskeleton_animation_controller
			{
				constexpr auto skeleton_instance_ptr = 0x8;
			} // namespace cskeleton_animation_controller

			namespace cgame_scripted_move_data
			{
				constexpr auto v_dest = 0x0;
				constexpr auto v_src = 0xc;
				constexpr auto ang_src = 0x18;
				constexpr auto ang_dst = 0x24;
				constexpr auto ang_current = 0x30;
				constexpr auto ang_rate = 0x3c;
				constexpr auto duration = 0x40;
				constexpr auto start_time = 0x44;
				constexpr auto prev_move_type = 0x48;
				constexpr auto active = 0x49;
				constexpr auto teleport_on_end = 0x4a;
				constexpr auto end_on_destination_reached = 0x4b;
				constexpr auto ignore_rotation = 0x4c;
				constexpr auto type = 0x50;
				constexpr auto success = 0x54;
				constexpr auto forced_crouch_state = 0x58;
				constexpr auto ignore_collisions = 0x5c;
			} // namespace cgame_scripted_move_data

			namespace cplayer_pawn_component
			{
				constexpr auto _m_p_chain_entity = 0x8;
			} // namespace cplayer_pawn_component

			namespace cnav_volume_spherical_shell
			{
				constexpr auto radius_inner = 0x80;
			} // namespace cnav_volume_spherical_shell

			namespace response_context_t
			{
				constexpr auto isz_name = 0x0;
				constexpr auto isz_value = 0x8;
				constexpr auto expiration_time = 0x10;
			} // namespace response_context_t

			namespace summary_take_damage_info_t
			{
				constexpr auto n_summarised_count = 0x0;
				constexpr auto info = 0x8;
				constexpr auto result = 0xa0;
				constexpr auto h_target = 0xa8;
			} // namespace summary_take_damage_info_t

			namespace cnetwork_view_offset_vector
			{
				constexpr auto vec_x = 0x10;
				constexpr auto vec_y = 0x18;
				constexpr auto vec_z = 0x20;
			} // namespace cnetwork_view_offset_vector

			namespace cmultiplayer_expresser
			{
				constexpr auto allow_multiple_scenes = 0x70;
			} // namespace cmultiplayer_expresser

			namespace cskill_damage
			{
				constexpr auto damage = 0x0;
				constexpr auto physics_force_damage = 0x10;
			} // namespace cskill_damage

			namespace crand_sim_timer
			{
				constexpr auto min_interval = 0x8;
				constexpr auto max_interval = 0xc;
			} // namespace crand_sim_timer

			namespace constraint_sound_info
			{
				constexpr auto v_sampler = 0x8;
				constexpr auto sound_profile = 0x20;
				constexpr auto forward_axis = 0x40;
				constexpr auto isz_travel_sound_fwd = 0x50;
				constexpr auto isz_travel_sound_back = 0x58;
				constexpr auto isz_reversal_sounds_arr = 0x68;
				constexpr auto play_travel_sound = 0x80;
				constexpr auto play_reversal_sound = 0x81;
			} // namespace constraint_sound_info

			namespace lerpdata_t
			{
				constexpr auto h_ent = 0x0;
				constexpr auto move_type = 0x4;
				constexpr auto start_time = 0x8;
				constexpr auto vec_start_origin = 0xc;
				constexpr auto q_start_rot = 0x20;
				constexpr auto fxindex = 0x30;
			} // namespace lerpdata_t

			namespace cscript_uniform_random_stream
			{
				constexpr auto h_script_scope = 0x8;
				constexpr auto initial_seed = 0x9c;
			} // namespace cscript_uniform_random_stream

			namespace cpulse_cell_sound_event_start
			{
				constexpr auto type = 0x48;
			} // namespace cpulse_cell_sound_event_start

			namespace cresponse_queue
			{
				constexpr auto expresser_targets = 0x50;
			} // namespace cresponse_queue

			namespace csound
			{
				constexpr auto h_owner = 0x0;
				constexpr auto h_target = 0x4;
				constexpr auto volume = 0x8;
				constexpr auto occlusion_scale = 0xc;
				constexpr auto type = 0x10;
				constexpr auto next_audible = 0x14;
				constexpr auto expire_time = 0x18;
				constexpr auto next = 0x1c;
				constexpr auto no_expiration_time = 0x1e;
				constexpr auto owner_channel_index = 0x20;
				constexpr auto vec_origin = 0x24;
				constexpr auto has_owner = 0x30;
			} // namespace csound

			namespace cplayer_controller_component
			{
				constexpr auto _m_p_chain_entity = 0x8;
			} // namespace cplayer_controller_component

			namespace chint_message
			{
				constexpr auto hint_string_ptr = 0x8;
				constexpr auto args = 0x10;
				constexpr auto duration = 0x28;
			} // namespace chint_message

			namespace cremap_float
			{
				constexpr auto value_arr = 0x0;
			} // namespace cremap_float

			namespace relationship_override_t
			{
				constexpr auto entity = 0x8;
				constexpr auto class_type = 0xc;
			} // namespace relationship_override_t

			namespace mood_animation_layer_t
			{
				constexpr auto s_name = 0x0;
				constexpr auto active_listening = 0x8;
				constexpr auto active_talking = 0x9;
				constexpr auto layer_animations = 0x10;
				constexpr auto intensity = 0x28;
				constexpr auto duration_scale = 0x30;
				constexpr auto scale_with_ints = 0x38;
				constexpr auto next_start = 0x3c;
				constexpr auto start_offset = 0x44;
				constexpr auto end_offset = 0x4c;
				constexpr auto fade_in = 0x54;
				constexpr auto fade_out = 0x58;
			} // namespace mood_animation_layer_t

			namespace composite_material_t
			{
				constexpr auto target_kvs = 0x8;
				constexpr auto pre_generation_kvs = 0x18;
				constexpr auto final_kvs = 0x28;
				constexpr auto vec_generated_textures = 0x40;
			} // namespace composite_material_t

			namespace cglow_overlay
			{
				constexpr auto v_pos = 0x8;
				constexpr auto directional = 0x14;
				constexpr auto v_direction = 0x18;
				constexpr auto in_sky = 0x24;
				constexpr auto sky_obstruction_scale = 0x28;
				constexpr auto sprites_arr = 0x30;
				constexpr auto sprites = 0xb0;
				constexpr auto proxy_radius = 0xb4;
				constexpr auto hdrcolor_scale = 0xb8;
				constexpr auto glow_obstruction_scale = 0xbc;
				constexpr auto cache_glow_obstruction = 0xc0;
				constexpr auto cache_sky_obstruction = 0xc1;
				constexpr auto activated = 0xc2;
				constexpr auto list_index = 0xc4;
				constexpr auto query_handle = 0xc8;
			} // namespace cglow_overlay

			namespace composite_material_match_filter_t
			{
				constexpr auto composite_material_match_filter_type = 0x0;
				constexpr auto str_match_filter = 0x8;
				constexpr auto str_match_value = 0x10;
				constexpr auto pass_when_true = 0x18;
			} // namespace composite_material_match_filter_t

			namespace cglobal_light_base
			{
				constexpr auto spot_light = 0x10;
				constexpr auto spot_light_origin = 0x14;
				constexpr auto spot_light_angles = 0x20;
				constexpr auto shadow_direction = 0x2c;
				constexpr auto ambient_direction = 0x38;
				constexpr auto specular_direction = 0x44;
				constexpr auto inspector_specular_direction = 0x50;
				constexpr auto specular_power = 0x5c;
				constexpr auto specular_independence = 0x60;
				constexpr auto specular_color = 0x64;
				constexpr auto start_disabled = 0x68;
				constexpr auto enabled = 0x69;
				constexpr auto light_color = 0x6a;
				constexpr auto ambient_color1 = 0x6e;
				constexpr auto ambient_color2 = 0x72;
				constexpr auto ambient_color3 = 0x76;
				constexpr auto sun_distance = 0x7c;
				constexpr auto fov = 0x80;
				constexpr auto near_z = 0x84;
				constexpr auto far_z = 0x88;
				constexpr auto enable_shadows = 0x8c;
				constexpr auto old_enable_shadows = 0x8d;
				constexpr auto background_clear_not_required = 0x8e;
				constexpr auto cloud_scale = 0x90;
				constexpr auto cloud1_speed = 0x94;
				constexpr auto cloud1_direction = 0x98;
				constexpr auto cloud2_speed = 0x9c;
				constexpr auto cloud2_direction = 0xa0;
				constexpr auto ambient_scale1 = 0xb0;
				constexpr auto ambient_scale2 = 0xb4;
				constexpr auto ground_scale = 0xb8;
				constexpr auto light_scale = 0xbc;
				constexpr auto fo_wdarkness = 0xc0;
				constexpr auto enable_separate_skybox_fog = 0xc4;
				constexpr auto v_fow_color = 0xc8;
				constexpr auto view_origin = 0xd4;
				constexpr auto view_angles = 0xe0;
				constexpr auto view_fo_v = 0xec;
				constexpr auto world_points_arr = 0xf0;
				constexpr auto v_fog_offset_layer0 = 0x4a8;
				constexpr auto v_fog_offset_layer1 = 0x4b0;
				constexpr auto h_env_wind = 0x4b8;
				constexpr auto h_env_sky = 0x4bc;
			} // namespace cglobal_light_base

			namespace cclient_alpha_property
			{
				constexpr auto render_fx = 0x10;
				constexpr auto render_mode = 0x11;
				constexpr auto alpha_override = 0x15;
				constexpr auto shadow_alpha_override = 0x15;
				constexpr auto reserved = 0x15;
				constexpr auto alpha = 0x13;
				constexpr auto desync_offset = 0x14;
				constexpr auto reserved2 = 0x16;
				constexpr auto dist_fade_start = 0x18;
				constexpr auto dist_fade_end = 0x1a;
				constexpr auto fade_scale = 0x1c;
				constexpr auto render_fx_start_time = 0x20;
				constexpr auto render_fx_duration = 0x24;
			} // namespace cclient_alpha_property

			namespace ccomposite_material_editor_doc
			{
				constexpr auto version = 0x8;
				constexpr auto points = 0x10;
				constexpr auto kvthumbnail = 0x28;
			} // namespace ccomposite_material_editor_doc

			namespace ccomic_book
			{
				constexpr auto cover_image = 0x8;
				constexpr auto xml_file = 0x18;
			} // namespace ccomic_book

			namespace composite_material_input_loose_variable_t
			{
				constexpr auto str_name = 0x0;
				constexpr auto expose_externally = 0x8;
				constexpr auto str_exposed_friendly_name = 0x10;
				constexpr auto str_exposed_friendly_group_name = 0x18;
				constexpr auto exposed_variable_is_fixed_range = 0x20;
				constexpr auto str_exposed_visible_when_true = 0x28;
				constexpr auto str_exposed_hidden_when_true = 0x30;
				constexpr auto variable_type = 0x38;
				constexpr auto value_boolean = 0x3c;
				constexpr auto value_int_x = 0x40;
				constexpr auto value_int_y = 0x44;
				constexpr auto value_int_z = 0x48;
				constexpr auto value_int_w = 0x4c;
				constexpr auto has_float_bounds = 0x50;
				constexpr auto value_float_x = 0x54;
				constexpr auto value_float_x_min = 0x58;
				constexpr auto value_float_x_max = 0x5c;
				constexpr auto value_float_y = 0x60;
				constexpr auto value_float_y_min = 0x64;
				constexpr auto value_float_y_max = 0x68;
				constexpr auto value_float_z = 0x6c;
				constexpr auto value_float_z_min = 0x70;
				constexpr auto value_float_z_max = 0x74;
				constexpr auto value_float_w = 0x78;
				constexpr auto value_float_w_min = 0x7c;
				constexpr auto value_float_w_max = 0x80;
				constexpr auto c_value_color4 = 0x84;
				constexpr auto value_system_var = 0x88;
				constexpr auto str_resource_material = 0x90;
				constexpr auto str_texture_content_asset_path = 0x170;
				constexpr auto str_texture_runtime_resource_path = 0x178;
				constexpr auto str_texture_compilation_vtex_template = 0x258;
				constexpr auto texture_type = 0x260;
				constexpr auto str_string = 0x268;
			} // namespace composite_material_input_loose_variable_t

			namespace comp_mat_mutator_condition_t
			{
				constexpr auto mutator_condition = 0x0;
				constexpr auto str_mutator_condition_container_name = 0x8;
				constexpr auto str_mutator_condition_container_var_name = 0x10;
				constexpr auto str_mutator_condition_container_var_value = 0x18;
				constexpr auto pass_when_true = 0x20;
			} // namespace comp_mat_mutator_condition_t

			namespace cfire_overlay
			{
				constexpr auto owner_ptr = 0xd0;
				constexpr auto v_base_colors_arr = 0xd8;
				constexpr auto scale = 0x108;
				constexpr auto guid = 0x10c;
			} // namespace cfire_overlay

			namespace iron_sight_controller
			{
				constexpr auto iron_sight_available = 0x10;
				constexpr auto iron_sight_amount = 0x14;
				constexpr auto iron_sight_amount_gained = 0x18;
				constexpr auto iron_sight_amount_biased = 0x1c;
				constexpr auto iron_sight_amount_interpolated = 0x20;
				constexpr auto iron_sight_amount_gained_interpolated = 0x24;
				constexpr auto iron_sight_amount_biased_interpolated = 0x28;
				constexpr auto interpolation_last_updated = 0x2c;
				constexpr auto ang_delta_average_arr = 0x30;
				constexpr auto ang_view_last = 0x90;
				constexpr auto vec_dot_coords = 0x9c;
				constexpr auto dot_blur = 0xa4;
				constexpr auto speed_ratio = 0xa8;
			} // namespace iron_sight_controller

			namespace composite_material_editor_point_t
			{
				constexpr auto model_name = 0x0;
				constexpr auto sequence_index = 0xe0;
				constexpr auto cycle = 0xe4;
				constexpr auto kvmodel_state_choices = 0xe8;
				constexpr auto enable_child_model = 0xf8;
				constexpr auto child_model_name = 0x100;
				constexpr auto vec_composite_material_assembly_procedures = 0x1e0;
				constexpr auto vec_composite_materials = 0x1f8;
			} // namespace composite_material_editor_point_t

			namespace command_context
			{
				constexpr auto needsprocessing = 0x0;
				constexpr auto command_number = 0xa8;
			} // namespace command_context

			namespace cglow_sprite
			{
				constexpr auto v_color = 0x0;
				constexpr auto horz_size = 0xc;
				constexpr auto vert_size = 0x10;
				constexpr auto h_material = 0x18;
			} // namespace cglow_sprite

			namespace cflashlight_effect
			{
				constexpr auto is_on = 0x10;
				constexpr auto muzzle_flash_enabled = 0x20;
				constexpr auto muzzle_flash_brightness = 0x24;
				constexpr auto quat_muzzle_flash_orientation = 0x30;
				constexpr auto vec_muzzle_flash_origin = 0x40;
				constexpr auto fov = 0x4c;
				constexpr auto far_z = 0x50;
				constexpr auto linear_atten = 0x54;
				constexpr auto casts_shadows = 0x58;
				constexpr auto current_pull_back_dist = 0x5c;
				constexpr auto flashlight_texture = 0x60;
				constexpr auto muzzle_flash_texture = 0x68;
				constexpr auto texture_name_arr = 0x70;
			} // namespace cflashlight_effect

			namespace timed_event
			{
				constexpr auto time_between_events = 0x0;
				constexpr auto next_event = 0x4;
			} // namespace timed_event

			namespace cinterpolated_value
			{
				constexpr auto start_time = 0x0;
				constexpr auto end_time = 0x4;
				constexpr auto start_value = 0x8;
				constexpr auto end_value = 0xc;
				constexpr auto interp_type = 0x10;
			} // namespace cinterpolated_value

			namespace sun_glow_overlay
			{
				constexpr auto modulate_by_dot = 0xd0;
			} // namespace sun_glow_overlay

			namespace light_glow_overlay
			{
				constexpr auto vec_origin = 0xd0;
				constexpr auto vec_direction = 0xdc;
				constexpr auto min_dist = 0xe8;
				constexpr auto max_dist = 0xec;
				constexpr auto outer_max_dist = 0xf0;
				constexpr auto one_sided = 0xf4;
				constexpr auto modulate_by_dot = 0xf5;
			} // namespace light_glow_overlay

			namespace comp_mat_property_mutator_t
			{
				constexpr auto enabled = 0x0;
				constexpr auto mutator_command_type = 0x4;
				constexpr auto str_init_with_container = 0x8;
				constexpr auto str_copy_property_input_container_src = 0x10;
				constexpr auto str_copy_property_input_container_property = 0x18;
				constexpr auto str_copy_property_target_property = 0x20;
				constexpr auto str_random_roll_input_vars_seed_input_var = 0x28;
				constexpr auto vec_random_roll_input_vars_input_vars_to_roll = 0x30;
				constexpr auto str_copy_matching_keys_input_container_src = 0x48;
				constexpr auto str_copy_keys_with_suffix_input_container_src = 0x50;
				constexpr auto str_copy_keys_with_suffix_find_suffix = 0x58;
				constexpr auto str_copy_keys_with_suffix_replace_suffix = 0x60;
				constexpr auto set_value_value = 0x68;
				constexpr auto str_generate_texture_target_param = 0x2d8;
				constexpr auto str_generate_texture_initial_container = 0x2e0;
				constexpr auto resolution = 0x2e8;
				constexpr auto is_scratch_target = 0x2ec;
				constexpr auto splat_debug_info = 0x2ed;
				constexpr auto capture_in_render_doc = 0x2ee;
				constexpr auto vec_tex_gen_instructions = 0x2f0;
				constexpr auto vec_conditional_mutators = 0x308;
				constexpr auto str_pop_input_queue_container = 0x320;
				constexpr auto str_draw_text_input_container_src = 0x328;
				constexpr auto str_draw_text_input_container_property = 0x330;
				constexpr auto vec_draw_text_position = 0x338;
				constexpr auto col_draw_text_color = 0x340;
				constexpr auto str_draw_text_font = 0x348;
				constexpr auto vec_conditions = 0x350;
			} // namespace comp_mat_property_mutator_t

			namespace cdecal_info
			{
				constexpr auto animation_scale = 0x0;
				constexpr auto animation_life_span = 0x4;
				constexpr auto place_time = 0x8;
				constexpr auto fade_start_time = 0xc;
				constexpr auto fade_duration = 0x10;
				constexpr auto vbslot = 0x14;
				constexpr auto bone_index = 0x18;
				constexpr auto v_position = 0x28;
				constexpr auto bounding_radius_sqr = 0x34;
				constexpr auto next_ptr = 0x40;
				constexpr auto prev_ptr = 0x48;
				constexpr auto decal_material_index = 0xa8;
			} // namespace cdecal_info

			namespace composite_material_assembly_procedure_t
			{
				constexpr auto vec_comp_mat_includes = 0x0;
				constexpr auto vec_match_filters = 0x18;
				constexpr auto vec_composite_input_containers = 0x30;
				constexpr auto vec_property_mutators = 0x48;
			} // namespace composite_material_assembly_procedure_t

			namespace composite_material_input_container_t
			{
				constexpr auto enabled = 0x0;
				constexpr auto composite_material_input_container_source_type = 0x4;
				constexpr auto str_specific_container_material = 0x8;
				constexpr auto str_attr_name = 0xe8;
				constexpr auto str_alias = 0xf0;
				constexpr auto vec_loose_variables = 0xf8;
				constexpr auto str_attr_name_for_var = 0x110;
				constexpr auto expose_externally = 0x118;
			} // namespace composite_material_input_container_t

			namespace generated_texture_handle_t
			{
				constexpr auto str_bitmap_name = 0x0;
			} // namespace generated_texture_handle_t

			namespace canim_script_base
			{
				constexpr auto is_valid = 0x8;
			} // namespace canim_script_base

			namespace empty_test_script
			{
				constexpr auto h_test = 0x10;
			} // namespace empty_test_script

			namespace client
			{
				namespace centity_identity
				{
					constexpr auto name_stringable_index = 0x14;
					constexpr auto name = 0x18;
					constexpr auto designer_name = 0x20;
					constexpr auto flags = 0x30;
					constexpr auto world_group_id = 0x38;
					constexpr auto data_object_types = 0x3c;
					constexpr auto path_index = 0x40;
					constexpr auto prev_ptr = 0x58;
					constexpr auto next_ptr = 0x60;
					constexpr auto prev_by_class_ptr = 0x68;
					constexpr auto next_by_class_ptr = 0x70;
				} // namespace centity_identity

				namespace centity_instance
				{
					constexpr auto isz_private_vscripts = 0x8;
					constexpr auto entity_ptr = 0x10;
					constexpr auto cscript_component_ptr = 0x28;
				} // namespace centity_instance

				namespace cscript_component
				{
					constexpr auto script_class_name = 0x30;
				} // namespace cscript_component

				namespace cbody_component
				{
					constexpr auto scene_node_ptr = 0x8;
					constexpr auto _m_p_chain_entity = 0x20;
				} // namespace cbody_component

				namespace cgame_scene_node_handle
				{
					constexpr auto h_owner = 0x8;
					constexpr auto name = 0xc;
				} // namespace cgame_scene_node_handle

				namespace cgame_scene_node
				{
					constexpr auto node_to_world = 0x10;
					constexpr auto owner_ptr = 0x30;
					constexpr auto parent_ptr = 0x38;
					constexpr auto child_ptr = 0x40;
					constexpr auto next_sibling_ptr = 0x48;
					constexpr auto h_parent = 0x70;
					constexpr auto vec_origin = 0x80;
					constexpr auto ang_rotation = 0xb8;
					constexpr auto scale = 0xc4;
					constexpr auto vec_abs_origin = 0xc8;
					constexpr auto ang_abs_rotation = 0xd4;
					constexpr auto abs_scale = 0xe0;
					constexpr auto parent_attachment_or_bone = 0xe4;
					constexpr auto debug_abs_origin_changes = 0xe6;
					constexpr auto dormant = 0xe7;
					constexpr auto force_parent_to_be_networked = 0xe8;
					constexpr auto dirty_hierarchy = 0xec;
					constexpr auto dirty_bone_merge_info = 0xec;
					constexpr auto networked_position_changed = 0xec;
					constexpr auto networked_angles_changed = 0xec;
					constexpr auto networked_scale_changed = 0xec;
					constexpr auto will_be_calling_post_data_update = 0xec;
					constexpr auto notify_bone_transforms_changed = 0xec;
					constexpr auto bone_merge_flex = 0xec;
					constexpr auto latch_abs_origin = 0xec;
					constexpr auto dirty_bone_merge_bone_to_root = 0xec;
					constexpr auto hierarchical_depth = 0xeb;
					constexpr auto hierarchy_type = 0xec;
					constexpr auto do_not_set_anim_time_in_invalidate_physics_count = 0xed;
					constexpr auto name = 0xf0;
					constexpr auto hierarchy_attach_name = 0x130;
					constexpr auto zoffset = 0x134;
					constexpr auto v_render_origin = 0x138;
				} // namespace cgame_scene_node

				namespace chitbox_component
				{
					constexpr auto bv_disabled_hit_groups_arr = 0x24;
				} // namespace chitbox_component

				namespace clight_component
				{
					constexpr auto _m_p_chain_entity = 0x48;
					constexpr auto color = 0x85;
					constexpr auto secondary_color = 0x89;
					constexpr auto brightness = 0x90;
					constexpr auto brightness_scale = 0x94;
					constexpr auto brightness_mult = 0x98;
					constexpr auto range = 0x9c;
					constexpr auto falloff = 0xa0;
					constexpr auto attenuation0 = 0xa4;
					constexpr auto attenuation1 = 0xa8;
					constexpr auto attenuation2 = 0xac;
					constexpr auto theta = 0xb0;
					constexpr auto phi = 0xb4;
					constexpr auto h_light_cookie = 0xb8;
					constexpr auto cascades = 0xc0;
					constexpr auto cast_shadows = 0xc4;
					constexpr auto shadow_width = 0xc8;
					constexpr auto shadow_height = 0xcc;
					constexpr auto render_diffuse = 0xd0;
					constexpr auto render_specular = 0xd4;
					constexpr auto render_transmissive = 0xd8;
					constexpr auto ortho_light_width = 0xdc;
					constexpr auto ortho_light_height = 0xe0;
					constexpr auto style = 0xe4;
					constexpr auto pattern = 0xe8;
					constexpr auto cascade_render_static_objects = 0xf0;
					constexpr auto shadow_cascade_cross_fade = 0xf4;
					constexpr auto shadow_cascade_distance_fade = 0xf8;
					constexpr auto shadow_cascade_distance0 = 0xfc;
					constexpr auto shadow_cascade_distance1 = 0x100;
					constexpr auto shadow_cascade_distance2 = 0x104;
					constexpr auto shadow_cascade_distance3 = 0x108;
					constexpr auto shadow_cascade_resolution0 = 0x10c;
					constexpr auto shadow_cascade_resolution1 = 0x110;
					constexpr auto shadow_cascade_resolution2 = 0x114;
					constexpr auto shadow_cascade_resolution3 = 0x118;
					constexpr auto uses_baked_shadowing = 0x11c;
					constexpr auto shadow_priority = 0x120;
					constexpr auto baked_shadow_index = 0x124;
					constexpr auto render_to_cubemaps = 0x128;
					constexpr auto direct_light = 0x12c;
					constexpr auto indirect_light = 0x130;
					constexpr auto fade_min_dist = 0x134;
					constexpr auto fade_max_dist = 0x138;
					constexpr auto shadow_fade_min_dist = 0x13c;
					constexpr auto shadow_fade_max_dist = 0x140;
					constexpr auto enabled = 0x144;
					constexpr auto flicker = 0x145;
					constexpr auto precomputed_fields_valid = 0x146;
					constexpr auto v_precomputed_bounds_mins = 0x148;
					constexpr auto v_precomputed_bounds_maxs = 0x154;
					constexpr auto v_precomputed_obborigin = 0x160;
					constexpr auto v_precomputed_obbangles = 0x16c;
					constexpr auto v_precomputed_obbextent = 0x178;
					constexpr auto precomputed_max_range = 0x184;
					constexpr auto fog_lighting_mode = 0x188;
					constexpr auto fog_contribution_stength = 0x18c;
					constexpr auto near_clip_plane = 0x190;
					constexpr auto sky_color = 0x194;
					constexpr auto sky_intensity = 0x198;
					constexpr auto sky_ambient_bounce = 0x19c;
					constexpr auto use_secondary_color = 0x1a0;
					constexpr auto mixed_shadows = 0x1a1;
					constexpr auto light_style_start_time = 0x1a4;
					constexpr auto capsule_length = 0x1a8;
					constexpr auto min_roughness = 0x1ac;
				} // namespace clight_component

				namespace crender_component
				{
					constexpr auto _m_p_chain_entity = 0x10;
					constexpr auto is_rendering_with_view_models = 0x50;
					constexpr auto splitscreen_flags = 0x54;
					constexpr auto enable_rendering = 0x60;
					constexpr auto interpolation_ready_to_draw = 0xb0;
				} // namespace crender_component

				namespace cbuoyancy_helper
				{
					constexpr auto fluid_density = 0x18;
				} // namespace cbuoyancy_helper

				namespace view_angle_server_change_t
				{
					constexpr auto n_type = 0x30;
					constexpr auto q_angle = 0x34;
					constexpr auto n_index = 0x40;
				} // namespace view_angle_server_change_t

				namespace audioparams_t
				{
					constexpr auto local_sound_arr = 0x8;
					constexpr auto soundscape_index = 0x68;
					constexpr auto local_bits = 0x6c;
					constexpr auto soundscape_entity_list_index = 0x70;
					constexpr auto sound_event_hash = 0x74;
				} // namespace audioparams_t

				namespace fogparams_t
				{
					constexpr auto dir_primary = 0x8;
					constexpr auto color_primary = 0x14;
					constexpr auto color_secondary = 0x18;
					constexpr auto color_primary_lerp_to = 0x1c;
					constexpr auto color_secondary_lerp_to = 0x20;
					constexpr auto start = 0x24;
					constexpr auto end = 0x28;
					constexpr auto farz = 0x2c;
					constexpr auto maxdensity = 0x30;
					constexpr auto exponent = 0x34;
					constexpr auto hdrcolor_scale = 0x38;
					constexpr auto skybox_fog_factor = 0x3c;
					constexpr auto skybox_fog_factor_lerp_to = 0x40;
					constexpr auto start_lerp_to = 0x44;
					constexpr auto end_lerp_to = 0x48;
					constexpr auto maxdensity_lerp_to = 0x4c;
					constexpr auto lerptime = 0x50;
					constexpr auto duration = 0x54;
					constexpr auto blendtobackground = 0x58;
					constexpr auto scattering = 0x5c;
					constexpr auto locallightscale = 0x60;
					constexpr auto enable = 0x64;
					constexpr auto blend = 0x65;
					constexpr auto no_reflection_fog = 0x66;
					constexpr auto padding = 0x67;
				} // namespace fogparams_t

				namespace cplayer_movement_services
				{
					constexpr auto impulse = 0x40;
					constexpr auto buttons = 0x48;
					constexpr auto queued_button_down_mask = 0x68;
					constexpr auto queued_button_change_mask = 0x70;
					constexpr auto button_double_pressed = 0x78;
					constexpr auto button_pressed_cmd_number_arr = 0x80;
					constexpr auto last_command_number_processed = 0x180;
					constexpr auto toggle_button_down_mask = 0x188;
					constexpr auto maxspeed = 0x190;
					constexpr auto arr_force_subtick_move_when_arr = 0x194;
					constexpr auto forward_move = 0x1a4;
					constexpr auto left_move = 0x1a8;
					constexpr auto up_move = 0x1ac;
					constexpr auto vec_last_movement_impulses = 0x1b0;
					constexpr auto vec_old_view_angles = 0x1bc;
				} // namespace cplayer_movement_services

				namespace cplayer_movement_services_humanoid
				{
					constexpr auto step_sound_time = 0x1d0;
					constexpr auto fall_velocity = 0x1d4;
					constexpr auto in_crouch = 0x1d8;
					constexpr auto crouch_state = 0x1dc;
					constexpr auto crouch_transition_start_time = 0x1e0;
					constexpr auto ducked = 0x1e4;
					constexpr auto ducking = 0x1e5;
					constexpr auto in_duck_jump = 0x1e6;
					constexpr auto ground_normal = 0x1e8;
					constexpr auto surface_friction = 0x1f4;
					constexpr auto surface_props = 0x1f8;
					constexpr auto stepside = 0x208;
				} // namespace cplayer_movement_services_humanoid

				namespace cplayer_observer_services
				{
					constexpr auto observer_mode = 0x40;
					constexpr auto h_observer_target = 0x44;
					constexpr auto observer_last_mode = 0x48;
					constexpr auto forced_observer_mode = 0x4c;
					constexpr auto observer_chase_distance = 0x50;
					constexpr auto observer_chase_distance_calc_time = 0x54;
				} // namespace cplayer_observer_services

				namespace cplayer_weapon_services
				{
					constexpr auto allow_switch_to_no_weapon = 0x40;
					constexpr auto h_my_weapons = 0x40; 
					constexpr auto h_active_weapon = 0x58; 
					constexpr auto h_last_weapon = 0x5C; 
					constexpr auto ammo_arr = 0x60; 
				} // namespace cplayer_weapon_services

				namespace cmodel_state
				{
					constexpr auto h_model = 0xa0;
					constexpr auto model_name = 0xa8;
					constexpr auto client_cloth_creation_suppressed = 0xe8;
					constexpr auto mesh_group_mask = 0x180;
					constexpr auto ideal_motion_type = 0x222;
					constexpr auto force_lod = 0x223;
					constexpr auto cloth_update_flags = 0x224;
				} // namespace cmodel_state

				namespace entity_render_attribute_t
				{
					constexpr auto id = 0x30;
					constexpr auto values = 0x34;
				} // namespace entity_render_attribute_t

				namespace active_model_config_t
				{
					constexpr auto handle = 0x28;
					constexpr auto name = 0x30;
					constexpr auto associated_entities = 0x38;
					constexpr auto associated_entity_names = 0x50;
				} // namespace active_model_config_t

				namespace cskeleton_instance
				{
					constexpr auto model_state = 0x160;
					constexpr auto is_animation_enabled = 0x390;
					constexpr auto use_parent_render_bounds = 0x391;
					constexpr auto disable_solid_collisions_for_hierarchy = 0x392;
					constexpr auto dirty_motion_type = 0x396;
					constexpr auto is_generating_latched_parent_space_state = 0x396;
					constexpr auto material_group = 0x394;
					constexpr auto hitbox_set = 0x398;
				} // namespace cskeleton_instance

				namespace cbody_component_skeleton_instance
				{
					constexpr auto skeleton_instance = 0x50;
					constexpr auto _m_p_chain_entity = 0x450;
				} // namespace cbody_component_skeleton_instance

				namespace cbody_component_point
				{
					constexpr auto scene_node = 0x50;
					constexpr auto _m_p_chain_entity = 0x1a0;
				} // namespace cbody_component_point

				namespace cnetworked_sequence_operation
				{
					constexpr auto h_sequence = 0x8;
					constexpr auto prev_cycle = 0xc;
					constexpr auto cycle = 0x10;
					constexpr auto weight = 0x14;
					constexpr auto sequence_change_networked = 0x1c;
					constexpr auto discontinuity = 0x1d;
					constexpr auto prev_cycle_from_discontinuity = 0x20;
					constexpr auto prev_cycle_for_anim_event_detection = 0x24;
				} // namespace cnetworked_sequence_operation

				namespace cbody_component_base_model_entity
				{
					constexpr auto _m_p_chain_entity = 0x480;
				} // namespace cbody_component_base_model_entity

				namespace canim_graph_networked_variables
				{
					constexpr auto pred_net_bool_variables = 0x8;
					constexpr auto pred_net_byte_variables = 0x20;
					constexpr auto pred_net_uint16_variables = 0x38;
					constexpr auto pred_net_int_variables = 0x50;
					constexpr auto pred_net_uint32_variables = 0x68;
					constexpr auto pred_net_uint64_variables = 0x80;
					constexpr auto pred_net_float_variables = 0x98;
					constexpr auto pred_net_vector_variables = 0xb0;
					constexpr auto pred_net_quaternion_variables = 0xc8;
					constexpr auto owner_only_pred_net_bool_variables = 0xe0;
					constexpr auto owner_only_pred_net_byte_variables = 0xf8;
					constexpr auto owner_only_pred_net_uint16_variables = 0x110;
					constexpr auto owner_only_pred_net_int_variables = 0x128;
					constexpr auto owner_only_pred_net_uint32_variables = 0x140;
					constexpr auto owner_only_pred_net_uint64_variables = 0x158;
					constexpr auto owner_only_pred_net_float_variables = 0x170;
					constexpr auto owner_only_pred_net_vector_variables = 0x188;
					constexpr auto owner_only_pred_net_quaternion_variables = 0x1a0;
					constexpr auto bool_variables_count = 0x1b8;
					constexpr auto owner_only_bool_variables_count = 0x1bc;
					constexpr auto random_seed_offset = 0x1c0;
					constexpr auto last_teleport_time = 0x1c4;
				} // namespace canim_graph_networked_variables

				namespace interval_timer
				{
					constexpr auto timestamp = 0x8;
					constexpr auto world_group_id = 0xc;
				} // namespace interval_timer

				namespace countdown_timer
				{
					constexpr auto duration = 0x8;
					constexpr auto timestamp = 0xc;
					constexpr auto timescale = 0x10;
					constexpr auto world_group_id = 0x14;
				} // namespace countdown_timer

				namespace engine_countdown_timer
				{
					constexpr auto duration = 0x8;
					constexpr auto timestamp = 0xc;
					constexpr auto timescale = 0x10;
				} // namespace engine_countdown_timer

				namespace ctimeline
				{
					constexpr auto values_arr = 0x10;
					constexpr auto value_counts_arr = 0x110;
					constexpr auto bucket_count = 0x210;
					constexpr auto interval = 0x214;
					constexpr auto final_value = 0x218;
					constexpr auto compression_type = 0x21c;
					constexpr auto stopped = 0x220;
				} // namespace ctimeline

				namespace cbase_anim_graph_controller
				{
					constexpr auto base_layer = 0x18;
					constexpr auto anim_graph_networked_vars = 0x40;
					constexpr auto sequence_finished = 0x1320;
					constexpr auto last_event_cycle = 0x1324;
					constexpr auto last_event_anim_time = 0x1328;
					constexpr auto playback_rate = 0x132c;
					constexpr auto prev_anim_time = 0x1334;
					constexpr auto client_side_animation = 0x1338;
					constexpr auto networked_animation_inputs_changed = 0x1339;
					constexpr auto prev_new_sequence_parity = 0x133a;
					constexpr auto prev_reset_events_parity = 0x133b;
					constexpr auto new_sequence_parity = 0x133c;
					constexpr auto reset_events_parity = 0x1340;
					constexpr auto anim_loop_mode = 0x1344;
					constexpr auto h_animation_update = 0x13e4;
					constexpr auto h_last_anim_event_sequence = 0x13e8;
				} // namespace cbase_anim_graph_controller

				namespace base_entity
				{
					constexpr std::ptrdiff_t m_CBodyComponent = 0x38; // CBodyComponent*
					constexpr std::ptrdiff_t m_NetworkTransmitComponent = 0x40; // CNetworkTransmitComponent
					constexpr std::ptrdiff_t m_nLastThinkTick = 0x310; // GameTick_t
					constexpr std::ptrdiff_t m_pGameSceneNode = 0x318; // CGameSceneNode*
					constexpr std::ptrdiff_t m_pRenderComponent = 0x320; // CRenderComponent*
					constexpr std::ptrdiff_t m_pCollision = 0x328; // CCollisionProperty*
					constexpr std::ptrdiff_t m_iMaxHealth = 0x330; // int32_t
					constexpr std::ptrdiff_t m_iHealth = 0x334; // int32_t
					constexpr std::ptrdiff_t m_lifeState = 0x338; // uint8_t
					constexpr std::ptrdiff_t m_bTakesDamage = 0x339; // bool
					constexpr std::ptrdiff_t m_nTakeDamageFlags = 0x33C; // TakeDamageFlags_t
					constexpr std::ptrdiff_t m_bIsPlatform = 0x340; // bool
					constexpr std::ptrdiff_t m_ubInterpolationFrame = 0x341; // uint8_t
					constexpr std::ptrdiff_t m_hSceneObjectController = 0x344; // CHandle<C_BaseEntity>
					constexpr std::ptrdiff_t m_nNoInterpolationTick = 0x348; // int32_t
					constexpr std::ptrdiff_t m_nVisibilityNoInterpolationTick = 0x34C; // int32_t
					constexpr std::ptrdiff_t m_flProxyRandomValue = 0x350; // float
					constexpr std::ptrdiff_t m_iEFlags = 0x354; // int32_t
					constexpr std::ptrdiff_t m_nWaterType = 0x358; // uint8_t
					constexpr std::ptrdiff_t m_bInterpolateEvenWithNoModel = 0x359; // bool
					constexpr std::ptrdiff_t m_bPredictionEligible = 0x35A; // bool
					constexpr std::ptrdiff_t m_bApplyLayerMatchIDToModel = 0x35B; // bool
					constexpr std::ptrdiff_t m_tokLayerMatchID = 0x35C; // CUtlStringToken
					constexpr std::ptrdiff_t m_nSubclassID = 0x360; // CUtlStringToken
					constexpr std::ptrdiff_t m_nSimulationTick = 0x370; // int32_t
					constexpr std::ptrdiff_t m_iCurrentThinkContext = 0x374; // int32_t
					constexpr std::ptrdiff_t m_aThinkFunctions = 0x378; // CUtlVector<thinkfunc_t>
					constexpr std::ptrdiff_t m_nDisableContextThinkStartTick = 0x390; // GameTick_t
					constexpr std::ptrdiff_t m_flAnimTime = 0x394; // float
					constexpr std::ptrdiff_t m_flSimulationTime = 0x398; // float
					constexpr std::ptrdiff_t m_nSceneObjectOverrideFlags = 0x39C; // uint8_t
					constexpr std::ptrdiff_t m_bHasSuccessfullyInterpolated = 0x39D; // bool
					constexpr std::ptrdiff_t m_bHasAddedVarsToInterpolation = 0x39E; // bool
					constexpr std::ptrdiff_t m_bRenderEvenWhenNotSuccessfullyInterpolated = 0x39F; // bool
					constexpr std::ptrdiff_t m_nInterpolationLatchDirtyFlags = 0x3A0; // int32_t[2]
					constexpr std::ptrdiff_t m_ListEntry = 0x3A8; // uint16_t[11]
					constexpr std::ptrdiff_t m_flCreateTime = 0x3C0; // GameTime_t
					constexpr std::ptrdiff_t m_flSpeed = 0x3C4; // float
					constexpr std::ptrdiff_t m_EntClientFlags = 0x3C8; // uint16_t
					constexpr std::ptrdiff_t m_bClientSideRagdoll = 0x3CA; // bool
					constexpr std::ptrdiff_t m_iTeamNum = 0x3CB; // uint8_t
					constexpr std::ptrdiff_t m_spawnflags = 0x3CC; // uint32_t
					constexpr std::ptrdiff_t m_nNextThinkTick = 0x3D0; // GameTick_t
					constexpr std::ptrdiff_t m_fFlags = 0x3D4; // uint32_t
					constexpr std::ptrdiff_t m_vecAbsVelocity = 0x3D8; // Vector
					constexpr std::ptrdiff_t m_vecVelocity = 0x3E8; // CNetworkVelocityVector
					constexpr std::ptrdiff_t m_vecBaseVelocity = 0x418; // Vector
					constexpr std::ptrdiff_t m_hEffectEntity = 0x424; // CHandle<C_BaseEntity>
					constexpr std::ptrdiff_t m_hOwnerEntity = 0x428; // CHandle<C_BaseEntity>
					constexpr std::ptrdiff_t m_MoveCollide = 0x42C; // MoveCollide_t
					constexpr std::ptrdiff_t m_MoveType = 0x42D; // MoveType_t
					constexpr std::ptrdiff_t m_nActualMoveType = 0x42E; // MoveType_t
					constexpr std::ptrdiff_t m_flWaterLevel = 0x430; // float
					constexpr std::ptrdiff_t m_fEffects = 0x434; // uint32_t
					constexpr std::ptrdiff_t m_hGroundEntity = 0x438; // CHandle<C_BaseEntity>
					constexpr std::ptrdiff_t m_flFriction = 0x43C; // float
					constexpr std::ptrdiff_t m_flElasticity = 0x440; // float
					constexpr std::ptrdiff_t m_flGravityScale = 0x444; // float
					constexpr std::ptrdiff_t m_flTimeScale = 0x448; // float
					constexpr std::ptrdiff_t m_bAnimatedEveryTick = 0x44C; // bool
					constexpr std::ptrdiff_t m_flNavIgnoreUntilTime = 0x450; // GameTime_t
					constexpr std::ptrdiff_t m_hThink = 0x454; // uint16_t
					constexpr std::ptrdiff_t m_fBBoxVisFlags = 0x460; // uint8_t
					constexpr std::ptrdiff_t m_bPredictable = 0x461; // bool
					constexpr std::ptrdiff_t m_bRenderWithViewModels = 0x462; // bool
					constexpr std::ptrdiff_t m_nSplitUserPlayerPredictionSlot = 0x464; // CSplitScreenSlot
					constexpr std::ptrdiff_t m_nFirstPredictableCommand = 0x468; // int32_t
					constexpr std::ptrdiff_t m_nLastPredictableCommand = 0x46C; // int32_t
					constexpr std::ptrdiff_t m_hOldMoveParent = 0x470; // CHandle<C_BaseEntity>
					constexpr std::ptrdiff_t m_Particles = 0x478; // CParticleProperty
					constexpr std::ptrdiff_t m_vecPredictedScriptFloats = 0x4A0; // CUtlVector<float>
					constexpr std::ptrdiff_t m_vecPredictedScriptFloatIDs = 0x4B8; // CUtlVector<int32_t>
					constexpr std::ptrdiff_t m_nNextScriptVarRecordID = 0x4E8; // int32_t
					constexpr std::ptrdiff_t m_vecAngVelocity = 0x4F8; // QAngle
					constexpr std::ptrdiff_t m_DataChangeEventRef = 0x504; // int32_t
					constexpr std::ptrdiff_t m_dependencies = 0x508; // CUtlVector<CEntityHandle>
					constexpr std::ptrdiff_t m_nCreationTick = 0x520; // int32_t
					constexpr std::ptrdiff_t m_bAnimTimeChanged = 0x539; // bool
					constexpr std::ptrdiff_t m_bSimulationTimeChanged = 0x53A; // bool
					constexpr std::ptrdiff_t m_sUniqueHammerID = 0x548; // CUtlString
				} // namespace base_entity

				namespace base_flex__emphasized_phoneme
				{
					constexpr auto s_class_name = 0x0;
					constexpr auto amount = 0x18;
					constexpr auto required = 0x1c;
					constexpr auto basechecked = 0x1d;
					constexpr auto valid = 0x1e;
				} // namespace base_flex__emphasized_phoneme

				namespace color_correction
				{
					constexpr auto vec_origin = 0x540;
					constexpr auto min_falloff = 0x54c;
					constexpr auto max_falloff = 0x550;
					constexpr auto fade_in_duration = 0x554;
					constexpr auto fade_out_duration = 0x558;
					constexpr auto max_weight = 0x55c;
					constexpr auto cur_weight = 0x560;
					constexpr auto netlookup_filename_arr = 0x564;
					constexpr auto enabled = 0x764;
					constexpr auto master = 0x765;
					constexpr auto client_side = 0x766;
					constexpr auto exclusive = 0x767;
					constexpr auto enabled_on_client_arr = 0x768;
					constexpr auto cur_weight_on_client_arr = 0x76c;
					constexpr auto fading_in_arr = 0x770;
					constexpr auto fade_start_weight_arr = 0x774;
					constexpr auto fade_start_time_arr = 0x778;
					constexpr auto fade_duration_arr = 0x77c;
				} // namespace color_correction

				namespace env_wind_shared
				{
					constexpr auto start_time = 0x8;
					constexpr auto wind_seed = 0xc;
					constexpr auto min_wind = 0x10;
					constexpr auto max_wind = 0x12;
					constexpr auto wind_radius = 0x14;
					constexpr auto min_gust = 0x18;
					constexpr auto max_gust = 0x1a;
					constexpr auto min_gust_delay = 0x1c;
					constexpr auto max_gust_delay = 0x20;
					constexpr auto gust_duration = 0x24;
					constexpr auto gust_dir_change = 0x28;
					constexpr auto location = 0x2c;
					constexpr auto isz_gust_sound = 0x38;
					constexpr auto wind_dir = 0x3c;
					constexpr auto wind_speed = 0x40;
					constexpr auto current_wind_vector = 0x44;
					constexpr auto current_sway_vector = 0x50;
					constexpr auto prev_sway_vector = 0x5c;
					constexpr auto initial_wind_dir = 0x68;
					constexpr auto initial_wind_speed = 0x6c;
					constexpr auto variation_time = 0x70;
					constexpr auto sway_time = 0x74;
					constexpr auto sim_time = 0x78;
					constexpr auto switch_time = 0x7c;
					constexpr auto ave_wind_speed = 0x80;
					constexpr auto gusting = 0x84;
					constexpr auto wind_angle_variation = 0x88;
					constexpr auto wind_speed_variation = 0x8c;
					constexpr auto ent_index = 0x90;
				} // namespace env_wind_shared

				namespace entity_flame
				{
					constexpr auto h_ent_attached = 0x540;
					constexpr auto h_old_attached = 0x568;
					constexpr auto cheap_effect = 0x56c;
				} // namespace entity_flame

				namespace cprojected_texture_base
				{
					constexpr auto h_target_entity = 0xc;
					constexpr auto state = 0x10;
					constexpr auto always_update = 0x11;
					constexpr auto light_fov = 0x14;
					constexpr auto enable_shadows = 0x18;
					constexpr auto simple_projection = 0x19;
					constexpr auto light_only_target = 0x1a;
					constexpr auto light_world = 0x1b;
					constexpr auto camera_space = 0x1c;
					constexpr auto brightness_scale = 0x20;
					constexpr auto light_color = 0x24;
					constexpr auto intensity = 0x28;
					constexpr auto linear_attenuation = 0x2c;
					constexpr auto quadratic_attenuation = 0x30;
					constexpr auto volumetric = 0x34;
					constexpr auto volumetric_intensity = 0x38;
					constexpr auto noise_strength = 0x3c;
					constexpr auto flashlight_time = 0x40;
					constexpr auto num_planes = 0x44;
					constexpr auto plane_offset = 0x48;
					constexpr auto color_transition_time = 0x4c;
					constexpr auto ambient = 0x50;
					constexpr auto spotlight_texture_name_arr = 0x54;
					constexpr auto spotlight_texture_frame = 0x254;
					constexpr auto shadow_quality = 0x258;
					constexpr auto near_z = 0x25c;
					constexpr auto far_z = 0x260;
					constexpr auto projection_size = 0x264;
					constexpr auto rotation = 0x268;
					constexpr auto flip_horizontal = 0x26c;
				} // namespace cprojected_texture_base

				namespace base_fire
				{
					constexpr auto scale = 0x540;
					constexpr auto start_scale = 0x544;
					constexpr auto scale_time = 0x548;
					constexpr auto flags = 0x54c;
				} // namespace base_fire

				namespace rope_keyframe__cphysics_delegate
				{
					constexpr auto keyframe_ptr = 0x8;
				} // namespace rope_keyframe__cphysics_delegate

				namespace scene_entity__queued_events_t
				{
					constexpr auto starttime = 0x0;
				} // namespace scene_entity__queued_events_t

				namespace cskybox_reference
				{
					constexpr auto world_group_id = 0x540;
					constexpr auto h_sky_camera = 0x544;
				} // namespace cskybox_reference

				namespace sky3dparams_t
				{
					constexpr auto scale = 0x8;
					constexpr auto origin = 0xc;
					constexpr auto b_clip3_dsky_box_near_to_world_far = 0x18;
					constexpr auto fl_clip3_dsky_box_near_to_world_far_offset = 0x1c;
					constexpr auto fog = 0x20;
					constexpr auto world_group_id = 0x88;
				} // namespace sky3dparams_t

				namespace fire_smoke
				{
					constexpr auto flame_model_index = 0x550;
					constexpr auto flame_from_above_model_index = 0x554;
					constexpr auto scale_register = 0x558;
					constexpr auto scale_start = 0x55c;
					constexpr auto scale_end = 0x560;
					constexpr auto scale_time_start = 0x564;
					constexpr auto scale_time_end = 0x568;
					constexpr auto child_flame_spread = 0x56c;
					constexpr auto clip_perc = 0x580;
					constexpr auto clip_tested = 0x584;
					constexpr auto fading_out = 0x585;
					constexpr auto t_particle_spawn = 0x588;
					constexpr auto fire_overlay_ptr = 0x590;
				} // namespace fire_smoke

				namespace vphysics_collision_attribute_t
				{
					constexpr auto interacts_as = 0x8;
					constexpr auto interacts_with = 0x10;
					constexpr auto interacts_exclude = 0x18;
					constexpr auto entity_id = 0x20;
					constexpr auto owner_id = 0x24;
					constexpr auto hierarchy_id = 0x28;
					constexpr auto collision_group = 0x2a;
					constexpr auto collision_function_mask = 0x2b;
				} // namespace vphysics_collision_attribute_t

				namespace ccollision_property
				{
					constexpr auto collision_attribute = 0x10;
					constexpr auto vec_mins = 0x40;
					constexpr auto vec_maxs = 0x4c;
					constexpr auto us_solid_flags = 0x5a;
					constexpr auto solid_type = 0x5b;
					constexpr auto trigger_bloat = 0x5c;
					constexpr auto surround_type = 0x5d;
					constexpr auto collision_group = 0x5e;
					constexpr auto enable_physics = 0x5f;
					constexpr auto bounding_radius = 0x60;
					constexpr auto vec_specified_surrounding_mins = 0x64;
					constexpr auto vec_specified_surrounding_maxs = 0x70;
					constexpr auto vec_surrounding_maxs = 0x7c;
					constexpr auto vec_surrounding_mins = 0x88;
					constexpr auto v_capsule_center1 = 0x94;
					constexpr auto v_capsule_center2 = 0xa0;
					constexpr auto capsule_radius = 0xac;
				} // namespace ccollision_property

				namespace ceffect_data
				{
					constexpr auto v_origin = 0x8;
					constexpr auto v_start = 0x14;
					constexpr auto v_normal = 0x20;
					constexpr auto v_angles = 0x2c;
					constexpr auto h_entity = 0x38;
					constexpr auto h_other_entity = 0x3c;
					constexpr auto scale = 0x40;
					constexpr auto magnitude = 0x44;
					constexpr auto radius = 0x48;
					constexpr auto surface_prop = 0x4c;
					constexpr auto effect_index = 0x50;
					constexpr auto damage_type = 0x58;
					constexpr auto penetrate = 0x5c;
					constexpr auto material = 0x5e;
					constexpr auto hit_box = 0x60;
					constexpr auto color = 0x62;
					constexpr auto flags = 0x63;
					constexpr auto attachment_index = 0x64;
					constexpr auto attachment_name = 0x68;
					constexpr auto effect_name = 0x6c;
					constexpr auto explosion_type = 0x6e;
				} // namespace ceffect_data

				namespace env_detail_controller
				{
					constexpr auto fade_start_dist = 0x540;
					constexpr auto fade_end_dist = 0x544;
				} // namespace env_detail_controller

				namespace env_wind_clientside
				{
					constexpr auto env_wind_shared = 0x540;
				} // namespace env_wind_clientside

				namespace env_wind_shared__wind_ave_event_t
				{
					constexpr auto start_wind_speed = 0x0;
					constexpr auto ave_wind_speed = 0x4;
				} // namespace env_wind_shared__wind_ave_event_t

				namespace env_wind_shared__wind_variation_event_t
				{
					constexpr auto wind_angle_variation = 0x0;
					constexpr auto wind_speed_variation = 0x4;
				} // namespace env_wind_shared__wind_variation_event_t

				namespace shard_model_desc_t
				{
					constexpr auto model_id = 0x8;
					constexpr auto h_material = 0x10;
					constexpr auto solid = 0x18;
					constexpr auto shatter_panel_mode = 0x19;
					constexpr auto vec_panel_size = 0x1c;
					constexpr auto vec_stress_position_a = 0x24;
					constexpr auto vec_stress_position_b = 0x2c;
					constexpr auto vec_panel_vertices = 0x38;
					constexpr auto glass_half_thickness = 0x50;
					constexpr auto has_parent = 0x54;
					constexpr auto parent_frozen = 0x55;
					constexpr auto surface_prop_string_token = 0x58;
				} // namespace shard_model_desc_t

				namespace cglow_property
				{
					constexpr auto glow_color = 0x8;
					constexpr auto glow_type = 0x30;
					constexpr auto glow_team = 0x34;
					constexpr auto glow_range = 0x38;
					constexpr auto glow_range_min = 0x3c;
					constexpr auto glow_color_override = 0x40;
					constexpr auto flashing = 0x44;
					constexpr auto glow_time = 0x48;
					constexpr auto glow_start_time = 0x4c;
					constexpr auto eligible_for_screen_highlight = 0x50;
					constexpr auto glowing = 0x51;
				} // namespace cglow_property

				namespace fogplayerparams_t
				{
					constexpr auto h_ctrl = 0x8;
					constexpr auto transition_time = 0xc;
					constexpr auto old_color = 0x10;
					constexpr auto old_start = 0x14;
					constexpr auto old_end = 0x18;
					constexpr auto old_max_density = 0x1c;
					constexpr auto old_hdrcolor_scale = 0x20;
					constexpr auto old_far_z = 0x24;
					constexpr auto new_color = 0x28;
					constexpr auto new_start = 0x2c;
					constexpr auto new_end = 0x30;
					constexpr auto new_max_density = 0x34;
					constexpr auto new_hdrcolor_scale = 0x38;
					constexpr auto new_far_z = 0x3c;
				} // namespace fogplayerparams_t

				namespace cplayer_camera_services
				{
					constexpr auto vec_cs_view_punch_angle = 0x40;
					constexpr auto cs_view_punch_angle_tick = 0x4c;
					constexpr auto cs_view_punch_angle_tick_ratio = 0x50;
					constexpr auto player_fog = 0x58;
					constexpr auto h_color_correction_ctrl = 0x98;
					constexpr auto h_view_entity = 0x9c;
					constexpr auto h_tonemap_controller = 0xa0;
					constexpr auto audio = 0xa8;
					constexpr auto post_processing_volumes = 0x120;
					constexpr auto old_player_z = 0x138;
					constexpr auto old_player_view_offset_z = 0x13c;
					constexpr auto current_fog = 0x140;
					constexpr auto h_old_fog_controller = 0x1a8;
					constexpr auto override_fog_color_arr = 0x1ac;
					constexpr auto override_fog_color_arr_1 = 0x1b1;
					constexpr auto override_fog_start_end_arr = 0x1c5;
					constexpr auto override_fog_start_arr = 0x1cc;
					constexpr auto override_fog_end_arr = 0x1e0;
					constexpr auto h_active_post_processing_volume = 0x1f4;
					constexpr auto ang_demo_view_angles = 0x1f8;
				} // namespace cplayer_camera_services

				namespace sky_camera
				{
					constexpr auto skybox_data = 0x540;
					constexpr auto skybox_slot_token = 0x5d0;
					constexpr auto use_angles = 0x5d4;
					constexpr auto next_ptr = 0x5d8;
				} // namespace sky_camera

				namespace physics_ragdoll_pose_t
				{
					constexpr auto _m_p_chain_entity = 0x8;
					constexpr auto transforms = 0x30;
					constexpr auto h_owner = 0x48;
					constexpr auto dirty = 0x68;
				} // namespace physics_ragdoll_pose_t

				namespace sound_opvar_set_point_base
				{
					constexpr auto isz_stack_name = 0x540;
					constexpr auto isz_operator_name = 0x548;
					constexpr auto isz_opvar_name = 0x550;
					constexpr auto opvar_index = 0x558;
					constexpr auto use_auto_compare = 0x55c;
				} // namespace sound_opvar_set_point_base

				namespace team_round_timer
				{
					constexpr auto timer_paused = 0x540;
					constexpr auto time_remaining = 0x544;
					constexpr auto timer_end_time = 0x548;
					constexpr auto is_disabled = 0x54c;
					constexpr auto show_in_hud = 0x54d;
					constexpr auto timer_length = 0x550;
					constexpr auto timer_initial_length = 0x554;
					constexpr auto timer_max_length = 0x558;
					constexpr auto auto_countdown = 0x55c;
					constexpr auto setup_time_length = 0x560;
					constexpr auto state = 0x564;
					constexpr auto start_paused = 0x568;
					constexpr auto in_capture_watch_state = 0x569;
					constexpr auto total_time = 0x56c;
					constexpr auto stop_watch_timer = 0x570;
					constexpr auto fire_finished = 0x571;
					constexpr auto fire5_min_remain = 0x572;
					constexpr auto fire4_min_remain = 0x573;
					constexpr auto fire3_min_remain = 0x574;
					constexpr auto fire2_min_remain = 0x575;
					constexpr auto fire1_min_remain = 0x576;
					constexpr auto fire30_sec_remain = 0x577;
					constexpr auto fire10_sec_remain = 0x578;
					constexpr auto fire5_sec_remain = 0x579;
					constexpr auto fire4_sec_remain = 0x57a;
					constexpr auto fire3_sec_remain = 0x57b;
					constexpr auto fire2_sec_remain = 0x57c;
					constexpr auto fire1_sec_remain = 0x57d;
					constexpr auto old_timer_length = 0x580;
					constexpr auto old_timer_state = 0x584;
				} // namespace team_round_timer

				namespace cattribute_list
				{
					constexpr auto attributes = 0x8;
					constexpr auto manager_ptr = 0x58;
				} // namespace cattribute_list

				namespace cecon_item_attribute
				{
					constexpr auto attribute_definition_index = 0x30;
					constexpr auto value = 0x34;
					constexpr auto initial_value = 0x38;
					constexpr auto refundable_currency = 0x3c;
					constexpr auto set_bonus = 0x40;
				} // namespace cecon_item_attribute

				namespace cattribute_manager
				{
					constexpr auto providers = 0x8;
					constexpr auto reapply_provision_parity = 0x20;
					constexpr auto h_outer = 0x24;
					constexpr auto prevent_loopback = 0x28;
					constexpr auto provider_type = 0x2c;
					constexpr auto cached_results = 0x30;
				} // namespace cattribute_manager

				namespace cattribute_manager_cached_attribute_float_t
				{
					constexpr auto fl_in = 0x0;
					constexpr auto i_attrib_hook = 0x8;
					constexpr auto fl_out = 0x10;
				} // namespace cattribute_manager_cached_attribute_float_t

				namespace econ_item_view
				{
					constexpr auto inventory_image_rgba_requested = 0x60;
					constexpr auto inventory_image_tried_cache = 0x61;
					constexpr auto inventory_image_rgba_width = 0x80;
					constexpr auto inventory_image_rgba_height = 0x84;
					constexpr auto current_load_cached_file_name_arr = 0x88;
					constexpr auto restore_custom_material_after_precache = 0x1b8;
					constexpr auto item_definition_index = 0x1ba;
					constexpr auto entity_quality = 0x1bc;
					constexpr auto entity_level = 0x1c0;
					constexpr auto item_id = 0x1c8;
					constexpr auto item_idhigh = 0x1d0;
					constexpr auto item_idlow = 0x1d4;
					constexpr auto account_id = 0x1d8;
					constexpr auto inventory_position = 0x1dc;
					constexpr auto initialized = 0x1e8;
					constexpr auto is_store_item = 0x1e9;
					constexpr auto is_trade_item = 0x1ea;
					constexpr auto entity_quantity = 0x1ec;
					constexpr auto rarity_override = 0x1f0;
					constexpr auto quality_override = 0x1f4;
					constexpr auto un_client_flags = 0x1f8;
					constexpr auto un_override_style = 0x1f9;
					constexpr auto attribute_list = 0x210;
					constexpr auto networked_dynamic_attributes = 0x270;
					constexpr auto custom_name_arr = 0x2d0;
					constexpr auto custom_name_override_arr = 0x371;
					constexpr auto initialized_tags = 0x440;
				} // namespace econ_item_view

				namespace econ_entity__attached_model_data_t
				{
					constexpr auto model_display_flags = 0x0;
				} // namespace econ_entity__attached_model_data_t

				namespace entity_spotted_state_t
				{
					constexpr auto spotted = 0x8;
					constexpr auto spotted_by_mask_arr = 0xc;
				} // namespace entity_spotted_state_t

				namespace csgame_rules_proxy
				{
					constexpr auto game_rules_ptr = 0x540;
				} // namespace csgame_rules_proxy

				namespace retake_game_rules
				{
					constexpr auto match_seed = 0xf8;
					constexpr auto blockers_present = 0xfc;
					constexpr auto round_in_progress = 0xfd;
					constexpr auto first_second_half_round = 0x100;
					constexpr auto bomb_site = 0x104;
				} // namespace retake_game_rules

				namespace ccsgame_mode_rules
				{
					constexpr auto _m_p_chain_entity = 0x8;
				} // namespace ccsgame_mode_rules

				namespace ccsgame_mode_rules_deathmatch
				{
					constexpr auto first_think = 0x30;
					constexpr auto first_think_after_connected = 0x31;
					constexpr auto dmbonus_start_time = 0x34;
					constexpr auto dmbonus_time_length = 0x38;
					constexpr auto dmbonus_weapon_loadout_slot = 0x3c;
				} // namespace ccsgame_mode_rules_deathmatch

				namespace csgame_rules
				{
					constexpr auto _m_p_chain_entity = 0x8;
					constexpr auto freeze_period = 0x30;
					constexpr auto warmup_period = 0x31;
					constexpr auto warmup_period_end = 0x34;
					constexpr auto warmup_period_start = 0x38;
					constexpr auto total_paused_ticks = 0x3c;
					constexpr auto pause_start_tick = 0x40;
					constexpr auto server_paused = 0x44;
					constexpr auto game_paused = 0x45;
					constexpr auto terrorist_time_out_active = 0x46;
					constexpr auto cttime_out_active = 0x47;
					constexpr auto terrorist_time_out_remaining = 0x48;
					constexpr auto cttime_out_remaining = 0x4c;
					constexpr auto terrorist_time_outs = 0x50;
					constexpr auto cttime_outs = 0x54;
					constexpr auto technical_time_out = 0x58;
					constexpr auto match_waiting_for_resume = 0x59;
					constexpr auto round_time = 0x5c;
					constexpr auto match_start_time = 0x60;
					constexpr auto round_start_time = 0x64;
					constexpr auto restart_round_time = 0x68;
					constexpr auto game_restart = 0x6c;
					constexpr auto game_start_time = 0x70;
					constexpr auto time_until_next_phase_starts = 0x74;
					constexpr auto game_phase = 0x78;
					constexpr auto total_rounds_played = 0x7c;
					constexpr auto rounds_played_this_phase = 0x80;
					constexpr auto overtime_playing = 0x84;
					constexpr auto hostages_remaining = 0x88;
					constexpr auto any_hostage_reached = 0x8c;
					constexpr auto map_has_bomb_target = 0x8d;
					constexpr auto map_has_rescue_zone = 0x8e;
					constexpr auto map_has_buy_zone = 0x8f;
					constexpr auto is_queued_matchmaking = 0x90;
					constexpr auto queued_matchmaking_mode = 0x94;
					constexpr auto is_valve_ds = 0x98;
					constexpr auto logo_map = 0x99;
					constexpr auto play_all_step_sounds_on_server = 0x9a;
					constexpr auto spectator_slot_count = 0x9c;
					constexpr auto match_device = 0xa0;
					constexpr auto has_match_started = 0xa4;
					constexpr auto next_map_in_mapgroup = 0xa8;
					constexpr auto tournament_event_name_arr = 0xac;
					constexpr auto tournament_event_stage_arr = 0x2ac;
					constexpr auto match_stat_txt_arr = 0x4ac;
					constexpr auto tournament_predictions_txt_arr = 0x6ac;
					constexpr auto tournament_predictions_pct = 0x8ac;
					constexpr auto cmmitem_drop_reveal_start_time = 0x8b0;
					constexpr auto cmmitem_drop_reveal_end_time = 0x8b4;
					constexpr auto is_dropping_items = 0x8b8;
					constexpr auto is_quest_eligible = 0x8b9;
					constexpr auto is_hltv_active = 0x8ba;
					constexpr auto guardian_mode_wave_number = 0x8bc;
					constexpr auto guardian_mode_special_kills_remaining = 0x8c0;
					constexpr auto guardian_mode_special_weapon_needed = 0x8c4;
					constexpr auto guardian_grenades_to_give_bots = 0x8c8;
					constexpr auto num_heavies_to_spawn = 0x8cc;
					constexpr auto num_global_gifts_given = 0x8d0;
					constexpr auto num_global_gifters = 0x8d4;
					constexpr auto num_global_gifts_period_seconds = 0x8d8;
					constexpr auto arr_featured_gifters_accounts_arr = 0x8dc;
					constexpr auto arr_featured_gifters_gifts_arr = 0x8ec;
					constexpr auto arr_prohibited_item_indices_arr = 0x8fc;
					constexpr auto arr_tournament_active_caster_accounts_arr = 0x9c4;
					constexpr auto num_best_of_maps = 0x9d4;
					constexpr auto halloween_mask_list_seed = 0x9d8;
					constexpr auto bomb_dropped = 0x9dc;
					constexpr auto bomb_planted = 0x9dd;
					constexpr auto round_win_status = 0x9e0;
					constexpr auto e_round_win_reason = 0x9e4;
					constexpr auto tcant_buy = 0x9e8;
					constexpr auto ctcant_buy = 0x9e9;
					constexpr auto guardian_buy_until_time = 0x9ec;
					constexpr auto match_stats_round_results_arr = 0x9f0;
					constexpr auto match_stats_players_alive_ct_arr = 0xa68;
					constexpr auto match_stats_players_alive_t_arr = 0xae0;
					constexpr auto team_respawn_wave_times_arr = 0xb58;
					constexpr auto next_respawn_wave_arr = 0xbd8;
					constexpr auto server_quest_id = 0xc58;
					constexpr auto v_minimap_mins = 0xc5c;
					constexpr auto v_minimap_maxs = 0xc68;
					constexpr auto minimap_vertical_section_heights_arr = 0xc74;
					constexpr auto dont_increment_coop_wave = 0xc94;
					constexpr auto spawned_terror_hunt_heavy = 0xc95;
					constexpr auto end_match_map_group_vote_types_arr = 0xc98;
					constexpr auto end_match_map_group_vote_options_arr = 0xcc0;
					constexpr auto end_match_map_vote_winner = 0xce8;
					constexpr auto num_consecutive_ctloses = 0xcec;
					constexpr auto num_consecutive_terrorist_loses = 0xcf0;
					constexpr auto mark_client_stop_record_at_round_end = 0xd10;
					constexpr auto match_aborted_early_reason = 0xd68;
					constexpr auto has_triggered_round_start_music = 0xd6c;
					constexpr auto has_triggered_coop_spawn_reset = 0xd6d;
					constexpr auto switching_teams_at_round_reset = 0xd6e;
					constexpr auto game_mode_rules_ptr = 0xd88;
					constexpr auto retake_rules = 0xd90;
					constexpr auto match_end_count = 0xea8;
					constexpr auto tteam_intro_variant = 0xeac;
					constexpr auto ctteam_intro_variant = 0xeb0;
					constexpr auto team_intro_period = 0xeb4;
					constexpr auto last_perf_sample_time = 0x4ec0;
				} // namespace csgame_rules

				namespace csper_round_stats_t
				{
					constexpr auto kills = 0x30;
					constexpr auto deaths = 0x34;
					constexpr auto assists = 0x38;
					constexpr auto damage = 0x3c;
					constexpr auto equipment_value = 0x40;
					constexpr auto money_saved = 0x44;
					constexpr auto kill_reward = 0x48;
					constexpr auto live_time = 0x4c;
					constexpr auto head_shot_kills = 0x50;
					constexpr auto objective = 0x54;
					constexpr auto cash_earned = 0x58;
					constexpr auto utility_damage = 0x5c;
					constexpr auto enemies_flashed = 0x60;
				} // namespace csper_round_stats_t

				namespace csmatch_stats_t
				{
					constexpr auto enemy5_ks = 0x68;
					constexpr auto enemy4_ks = 0x6c;
					constexpr auto enemy3_ks = 0x70;
				} // namespace csmatch_stats_t

				namespace csgo_team_preview_character_position
				{
					constexpr auto variant = 0x540;
					constexpr auto random = 0x544;
					constexpr auto ordinal = 0x548;
					constexpr auto s_weapon_name = 0x550;
					constexpr auto xuid = 0x558;
					constexpr auto agent_item = 0x560;
					constexpr auto gloves_item = 0x9a8;
					constexpr auto weapon_item = 0xdf0;
				} // namespace csgo_team_preview_character_position

				namespace player_ping
				{
					constexpr auto h_player = 0x570;
					constexpr auto h_pinged_entity = 0x574;
					constexpr auto type = 0x578;
					constexpr auto urgent = 0x57c;
					constexpr auto place_name_arr = 0x57d;
				} // namespace player_ping

				namespace ccsplayer_ping_services
				{
					constexpr auto h_player_ping = 0x40;
				} // namespace ccsplayer_ping_services

				namespace csplayer_resource
				{
					constexpr auto hostage_alive_arr = 0x540;
					constexpr auto is_hostage_following_someone_arr = 0x54c;
					constexpr auto hostage_entity_ids_arr = 0x558;
					constexpr auto bombsite_center_a = 0x588;
					constexpr auto bombsite_center_b = 0x594;
					constexpr auto hostage_rescue_x_arr = 0x5a0;
					constexpr auto hostage_rescue_y_arr = 0x5b0;
					constexpr auto hostage_rescue_z_arr = 0x5c0;
					constexpr auto end_match_next_map_all_voted = 0x5d0;
					constexpr auto found_goal_positions = 0x5d1;
				} // namespace csplayer_resource

				namespace ccsplayer_base_camera_services
				{
					constexpr auto fov = 0x210;
					constexpr auto fovstart = 0x214;
					constexpr auto fovtime = 0x218;
					constexpr auto fovrate = 0x21c;
					constexpr auto h_zoom_owner = 0x220;
					constexpr auto last_shot_fov = 0x224;
				} // namespace ccsplayer_base_camera_services

				namespace weapon_purchase_count_t
				{
					constexpr auto item_def_index = 0x30;
					constexpr auto count = 0x32;
				} // namespace weapon_purchase_count_t

				namespace weapon_purchase_tracker_t
				{
					constexpr auto weapon_purchases = 0x8;
				} // namespace weapon_purchase_tracker_t

				namespace ccsplayer_action_tracking_services
				{
					constexpr auto h_last_weapon_before_c4_auto_switch = 0x40;
					constexpr auto is_rescuing = 0x44;
					constexpr auto weapon_purchases_this_match = 0x48;
					constexpr auto weapon_purchases_this_round = 0xa0;
				} // namespace ccsplayer_action_tracking_services

				namespace ccsplayer_bullet_services
				{
					constexpr auto total_hits_on_server = 0x40;
				} // namespace ccsplayer_bullet_services

				namespace sellback_purchase_entry_t
				{
					constexpr auto un_def_idx = 0x30;
					constexpr auto cost = 0x34;
					constexpr auto prev_armor = 0x38;
					constexpr auto prev_helmet = 0x3c;
					constexpr auto h_item = 0x40;
				} // namespace sellback_purchase_entry_t

				namespace ccsplayer_buy_services
				{
					constexpr auto vec_sellback_purchase_entries = 0x40;
				} // namespace ccsplayer_buy_services

				namespace ccsplayer_camera_services
				{
					constexpr auto death_cam_tilt = 0x228;
				} // namespace ccsplayer_camera_services

				namespace ccsplayer_hostage_services
				{
					constexpr auto h_carried_hostage = 0x40;
					constexpr auto h_carried_hostage_prop = 0x44;
				} // namespace ccsplayer_hostage_services

				namespace ccsplayer_item_services
				{
					constexpr auto has_defuser = 0x40;
					constexpr auto has_helmet = 0x41;
					constexpr auto has_heavy_armor = 0x42;
				} // namespace ccsplayer_item_services

				namespace ccsplayer_movement_services
				{
					constexpr auto max_fall_velocity = 0x210;
					constexpr auto vec_ladder_normal = 0x214;
					constexpr auto ladder_surface_prop_index = 0x220;
					constexpr auto duck_amount = 0x224;
					constexpr auto duck_speed = 0x228;
					constexpr auto duck_override = 0x22c;
					constexpr auto desires_duck = 0x22d;
					constexpr auto duck_offset = 0x230;
					constexpr auto duck_time_msecs = 0x234;
					constexpr auto duck_jump_time_msecs = 0x238;
					constexpr auto jump_time_msecs = 0x23c;
					constexpr auto last_duck_time = 0x240;
					constexpr auto vec_last_position_at_full_crouch_speed = 0x250;
					constexpr auto duck_until_on_ground = 0x258;
					constexpr auto has_walk_moved_since_last_jump = 0x259;
					constexpr auto in_stuck_test = 0x25a;
					constexpr auto stuck_check_time_arr = 0x268;
					constexpr auto trace_count = 0x468;
					constexpr auto stuck_last = 0x46c;
					constexpr auto speed_cropped = 0x470;
					constexpr auto old_water_level = 0x474;
					constexpr auto water_entry_time = 0x478;
					constexpr auto vec_forward = 0x47c;
					constexpr auto vec_left = 0x488;
					constexpr auto vec_up = 0x494;
					constexpr auto vec_previously_predicted_origin = 0x4a0;
					constexpr auto old_jump_pressed = 0x4ac;
					constexpr auto jump_pressed_time = 0x4b0;
					constexpr auto jump_until = 0x4b4;
					constexpr auto jump_vel = 0x4b8;
					constexpr auto stash_grenade_parameter_when = 0x4bc;
					constexpr auto button_down_mask_prev = 0x4c0;
					constexpr auto offset_tick_complete_time = 0x4c8;
					constexpr auto offset_tick_stashed_speed = 0x4cc;
					constexpr auto stamina = 0x4d0;
					constexpr auto update_predicted_origin_after_data_update = 0x4d4;
					constexpr auto height_at_jump_start = 0x4d8;
					constexpr auto max_jump_height_this_jump = 0x4dc;
				} // namespace ccsplayer_movement_services

				namespace ccsplayer_view_model_services
				{
					constexpr auto h_view_model_arr = 0x40;
				} // namespace ccsplayer_view_model_services

				namespace ccsplayer_water_services
				{
					constexpr auto water_jump_time = 0x40;
					constexpr auto vec_water_jump_vel = 0x44;
					constexpr auto swim_sound_time = 0x50;
				} // namespace ccsplayer_water_services

				namespace ccsplayer_weapon_services
				{
					constexpr auto next_attack = 0xc0;
					constexpr auto is_looking_at_weapon = 0xc4;
					constexpr auto is_holding_look_at_weapon = 0xc5;
				} // namespace ccsplayer_weapon_services

				namespace ccsobserver_observer_services
				{
					constexpr auto h_last_observer_target = 0x58;
					constexpr auto vec_observer_interpolate_offset = 0x5c;
					constexpr auto vec_observer_interp_start_pos = 0x68;
					constexpr auto obs_interp_path_length = 0x74;
					constexpr auto q_obs_interp_orientation_start = 0x80;
					constexpr auto q_obs_interp_orientation_travel_dir = 0x90;
					constexpr auto obs_interp_state = 0xa0;
					constexpr auto observer_interpolation_needs_deferred_setup = 0xa4;
				} // namespace ccsobserver_observer_services

				namespace ccsplayer_controller_action_tracking_services
				{
					constexpr auto per_round_stats = 0x40;
					constexpr auto match_stats = 0x90;
					constexpr auto num_round_kills = 0x108;
					constexpr auto num_round_kills_headshots = 0x10c;
					constexpr auto un_total_round_damage_dealt = 0x110;
				} // namespace ccsplayer_controller_action_tracking_services

				namespace cdamage_record
				{
					constexpr auto player_damager = 0x28;
					constexpr auto player_recipient = 0x2c;
					constexpr auto h_player_controller_damager = 0x30;
					constexpr auto h_player_controller_recipient = 0x34;
					constexpr auto player_damager_name = 0x38;
					constexpr auto player_recipient_name = 0x40;
					constexpr auto damager_xuid = 0x48;
					constexpr auto recipient_xuid = 0x50;
					constexpr auto damage = 0x58;
					constexpr auto actual_health_removed = 0x5c;
					constexpr auto num_hits = 0x60;
					constexpr auto last_bullet_update = 0x64;
					constexpr auto is_other_enemy = 0x68;
					constexpr auto kill_type = 0x69;
				} // namespace cdamage_record

				namespace ccsplayer_controller_damage_services
				{
					constexpr auto send_update = 0x40;
					constexpr auto damage_list = 0x48;
				} // namespace ccsplayer_controller_damage_services

				namespace ccsplayer_controller_in_game_money_services
				{
					constexpr auto account = 0x40;
					constexpr auto start_account = 0x44;
					constexpr auto total_cash_spent = 0x48;
					constexpr auto cash_spent_this_round = 0x4c;
					constexpr auto previous_account = 0x50;
				} // namespace ccsplayer_controller_in_game_money_services

				namespace server_authoritative_weapon_slot_t
				{
					constexpr auto un_class = 0x28;
					constexpr auto un_slot = 0x2a;
					constexpr auto un_item_def_idx = 0x2c;
				} // namespace server_authoritative_weapon_slot_t

				namespace ccsplayer_controller_inventory_services
				{
					constexpr auto un_music_id = 0x40;
					constexpr auto rank_arr = 0x44;
					constexpr auto persona_data_public_level = 0x5c;
					constexpr auto persona_data_public_commends_leader = 0x60;
					constexpr auto persona_data_public_commends_teacher = 0x64;
					constexpr auto persona_data_public_commends_friendly = 0x68;
					constexpr auto vec_server_authoritative_weapon_slots = 0x70;
				} // namespace ccsplayer_controller_inventory_services

				namespace global_light
				{
					constexpr auto wind_cloth_force_handle = 0xa00;
				} // namespace global_light

				namespace csgo_map_preview_camera_path_node
				{
					constexpr auto parent_path_unique_id = 0x540;
					constexpr auto path_index = 0x548;
					constexpr auto v_in_tangent_local = 0x54c;
					constexpr auto v_out_tangent_local = 0x558;
					constexpr auto fov = 0x564;
					constexpr auto speed = 0x568;
					constexpr auto ease_in = 0x56c;
					constexpr auto ease_out = 0x570;
					constexpr auto v_in_tangent_world = 0x574;
					constexpr auto v_out_tangent_world = 0x580;
				} // namespace csgo_map_preview_camera_path_node

				namespace csgo_map_preview_camera_path
				{
					constexpr auto zfar = 0x540;
					constexpr auto znear = 0x544;
					constexpr auto loop = 0x548;
					constexpr auto vertical_fov = 0x549;
					constexpr auto constant_speed = 0x54a;
					constexpr auto duration = 0x54c;
					constexpr auto path_length = 0x590;
					constexpr auto path_duration = 0x594;
				} // namespace csgo_map_preview_camera_path

				namespace vote_controller
				{
					constexpr auto active_issue_index = 0x550;
					constexpr auto only_team_to_vote = 0x554;
					constexpr auto vote_option_count_arr = 0x558;
					constexpr auto potential_votes = 0x56c;
					constexpr auto votes_dirty = 0x570;
					constexpr auto type_dirty = 0x571;
					constexpr auto is_yes_no_vote = 0x572;
				} // namespace vote_controller

				namespace map_veto_pick_controller
				{
					constexpr auto draft_type = 0x550;
					constexpr auto team_winning_coin_toss = 0x554;
					constexpr auto team_with_first_choice_arr = 0x558;
					constexpr auto vote_map_ids_list_arr = 0x658;
					constexpr auto account_ids_arr = 0x674;
					constexpr auto map_id0_arr = 0x774;
					constexpr auto map_id1_arr = 0x874;
					constexpr auto map_id2_arr = 0x974;
					constexpr auto map_id3_arr = 0xa74;
					constexpr auto map_id4_arr = 0xb74;
					constexpr auto map_id5_arr = 0xc74;
					constexpr auto starting_side0_arr = 0xd74;
					constexpr auto current_phase = 0xe74;
					constexpr auto phase_start_tick = 0xe78;
					constexpr auto phase_duration_ticks = 0xe7c;
					constexpr auto post_data_update_tick = 0xe80;
					constexpr auto disabled_hud = 0xe84;
				} // namespace map_veto_pick_controller

				namespace csgo_team_preview_camera
				{
					constexpr auto variant = 0x5a0;
					constexpr auto dof_enabled = 0x5a4;
					constexpr auto dof_near_blurry = 0x5a8;
					constexpr auto dof_near_crisp = 0x5ac;
					constexpr auto dof_far_crisp = 0x5b0;
					constexpr auto dof_far_blurry = 0x5b4;
					constexpr auto dof_tilt_to_ground = 0x5b8;
				} // namespace csgo_team_preview_camera

				namespace csm_fov_override
				{
					constexpr auto camera_name = 0x540;
					constexpr auto csm_fov_override_value = 0x548;
				} // namespace csm_fov_override

				namespace env_combined_light_probe_volume
				{
					constexpr auto color = 0x1598;
					constexpr auto brightness = 0x159c;
					constexpr auto h_cubemap_texture = 0x15a0;
					constexpr auto custom_cubemap_texture = 0x15a8;
					constexpr auto h_light_probe_texture = 0x15b0;
					constexpr auto h_light_probe_direct_light_indices_texture = 0x15b8;
					constexpr auto h_light_probe_direct_light_scalars_texture = 0x15c0;
					constexpr auto h_light_probe_direct_light_shadows_texture = 0x15c8;
					constexpr auto v_box_mins = 0x15d0;
					constexpr auto v_box_maxs = 0x15dc;
					constexpr auto moveable = 0x15e8;
					constexpr auto handshake = 0x15ec;
					constexpr auto env_cube_map_array_index = 0x15f0;
					constexpr auto priority = 0x15f4;
					constexpr auto start_disabled = 0x15f8;
					constexpr auto edge_fade_dist = 0x15fc;
					constexpr auto v_edge_fade_dists = 0x1600;
					constexpr auto light_probe_size_x = 0x160c;
					constexpr auto light_probe_size_y = 0x1610;
					constexpr auto light_probe_size_z = 0x1614;
					constexpr auto light_probe_atlas_x = 0x1618;
					constexpr auto light_probe_atlas_y = 0x161c;
					constexpr auto light_probe_atlas_z = 0x1620;
					constexpr auto enabled = 0x1639;
				} // namespace env_combined_light_probe_volume

				namespace env_cubemap
				{
					constexpr auto h_cubemap_texture = 0x5c0;
					constexpr auto custom_cubemap_texture = 0x5c8;
					constexpr auto influence_radius = 0x5cc;
					constexpr auto v_box_project_mins = 0x5d0;
					constexpr auto v_box_project_maxs = 0x5dc;
					constexpr auto moveable = 0x5e8;
					constexpr auto handshake = 0x5ec;
					constexpr auto env_cube_map_array_index = 0x5f0;
					constexpr auto priority = 0x5f4;
					constexpr auto edge_fade_dist = 0x5f8;
					constexpr auto v_edge_fade_dists = 0x5fc;
					constexpr auto diffuse_scale = 0x608;
					constexpr auto start_disabled = 0x60c;
					constexpr auto default_env_map = 0x60d;
					constexpr auto default_spec_env_map = 0x60e;
					constexpr auto indoor_cube_map = 0x60f;
					constexpr auto copy_diffuse_from_default_cubemap = 0x610;
					constexpr auto enabled = 0x620;
				} // namespace env_cubemap

				namespace env_cubemap_fog
				{
					constexpr auto end_distance = 0x540;
					constexpr auto start_distance = 0x544;
					constexpr auto fog_falloff_exponent = 0x548;
					constexpr auto height_fog_enabled = 0x54c;
					constexpr auto fog_height_width = 0x550;
					constexpr auto fog_height_end = 0x554;
					constexpr auto fog_height_start = 0x558;
					constexpr auto fog_height_exponent = 0x55c;
					constexpr auto lodbias = 0x560;
					constexpr auto active = 0x564;
					constexpr auto start_disabled = 0x565;
					constexpr auto fog_max_opacity = 0x568;
					constexpr auto cubemap_source_type = 0x56c;
					constexpr auto h_sky_material = 0x570;
					constexpr auto isz_sky_entity = 0x578;
					constexpr auto h_fog_cubemap_texture = 0x580;
					constexpr auto has_height_fog_end = 0x588;
					constexpr auto first_time = 0x589;
				} // namespace env_cubemap_fog

				namespace gradient_fog
				{
					constexpr auto h_gradient_fog_texture = 0x540;
					constexpr auto fog_start_distance = 0x548;
					constexpr auto fog_end_distance = 0x54c;
					constexpr auto height_fog_enabled = 0x550;
					constexpr auto fog_start_height = 0x554;
					constexpr auto fog_end_height = 0x558;
					constexpr auto far_z = 0x55c;
					constexpr auto fog_max_opacity = 0x560;
					constexpr auto fog_falloff_exponent = 0x564;
					constexpr auto fog_vertical_exponent = 0x568;
					constexpr auto fog_color = 0x56c;
					constexpr auto fog_strength = 0x570;
					constexpr auto fade_time = 0x574;
					constexpr auto start_disabled = 0x578;
					constexpr auto is_enabled = 0x579;
					constexpr auto gradient_fog_needs_textures = 0x57a;
				} // namespace gradient_fog

				namespace env_light_probe_volume
				{
					constexpr auto h_light_probe_texture = 0x1518;
					constexpr auto h_light_probe_direct_light_indices_texture = 0x1520;
					constexpr auto h_light_probe_direct_light_scalars_texture = 0x1528;
					constexpr auto h_light_probe_direct_light_shadows_texture = 0x1530;
					constexpr auto v_box_mins = 0x1538;
					constexpr auto v_box_maxs = 0x1544;
					constexpr auto moveable = 0x1550;
					constexpr auto handshake = 0x1554;
					constexpr auto priority = 0x1558;
					constexpr auto start_disabled = 0x155c;
					constexpr auto light_probe_size_x = 0x1560;
					constexpr auto light_probe_size_y = 0x1564;
					constexpr auto light_probe_size_z = 0x1568;
					constexpr auto light_probe_atlas_x = 0x156c;
					constexpr auto light_probe_atlas_y = 0x1570;
					constexpr auto light_probe_atlas_z = 0x1574;
					constexpr auto enabled = 0x1581;
				} // namespace env_light_probe_volume

				namespace player_visibility
				{
					constexpr auto visibility_strength = 0x540;
					constexpr auto fog_distance_multiplier = 0x544;
					constexpr auto fog_max_density_multiplier = 0x548;
					constexpr auto fade_time = 0x54c;
					constexpr auto start_disabled = 0x550;
					constexpr auto is_enabled = 0x551;
				} // namespace player_visibility

				namespace tonemap_controller2
				{
					constexpr auto auto_exposure_min = 0x540;
					constexpr auto auto_exposure_max = 0x544;
					constexpr auto tonemap_percent_target = 0x548;
					constexpr auto tonemap_percent_bright_pixels = 0x54c;
					constexpr auto tonemap_min_avg_lum = 0x550;
					constexpr auto exposure_adaptation_speed_up = 0x554;
					constexpr auto exposure_adaptation_speed_down = 0x558;
					constexpr auto tonemap_evsmoothing_range = 0x55c;
				} // namespace tonemap_controller2

				namespace env_volumetric_fog_controller
				{
					constexpr auto scattering = 0x540;
					constexpr auto anisotropy = 0x544;
					constexpr auto fade_speed = 0x548;
					constexpr auto draw_distance = 0x54c;
					constexpr auto fade_in_start = 0x550;
					constexpr auto fade_in_end = 0x554;
					constexpr auto indirect_strength = 0x558;
					constexpr auto indirect_texture_dim_x = 0x55c;
					constexpr auto indirect_texture_dim_y = 0x560;
					constexpr auto indirect_texture_dim_z = 0x564;
					constexpr auto v_box_mins = 0x568;
					constexpr auto v_box_maxs = 0x574;
					constexpr auto active = 0x580;
					constexpr auto start_aniso_time = 0x584;
					constexpr auto start_scatter_time = 0x588;
					constexpr auto start_draw_distance_time = 0x58c;
					constexpr auto start_anisotropy = 0x590;
					constexpr auto start_scattering = 0x594;
					constexpr auto start_draw_distance = 0x598;
					constexpr auto default_anisotropy = 0x59c;
					constexpr auto default_scattering = 0x5a0;
					constexpr auto default_draw_distance = 0x5a4;
					constexpr auto start_disabled = 0x5a8;
					constexpr auto enable_indirect = 0x5a9;
					constexpr auto is_master = 0x5aa;
					constexpr auto h_fog_indirect_texture = 0x5b0;
					constexpr auto force_refresh_count = 0x5b8;
					constexpr auto first_time = 0x5bc;
				} // namespace env_volumetric_fog_controller

				namespace env_volumetric_fog_volume
				{
					constexpr auto active = 0x540;
					constexpr auto v_box_mins = 0x544;
					constexpr auto v_box_maxs = 0x550;
					constexpr auto start_disabled = 0x55c;
					constexpr auto strength = 0x560;
					constexpr auto falloff_shape = 0x564;
					constexpr auto falloff_exponent = 0x568;
				} // namespace env_volumetric_fog_volume

				namespace fog_controller
				{
					constexpr auto fog = 0x540;
					constexpr auto use_angles = 0x5a8;
					constexpr auto changed_variables = 0x5ac;
				} // namespace fog_controller

				namespace info_visibility_box
				{
					constexpr auto mode = 0x544;
					constexpr auto v_box_size = 0x548;
					constexpr auto enabled = 0x554;
				} // namespace info_visibility_box

				namespace cinfo_world_layer
				{
					constexpr auto output_on_entities_spawned = 0x540;
					constexpr auto world_name = 0x568;
					constexpr auto layer_name = 0x570;
					constexpr auto world_layer_visible = 0x578;
					constexpr auto entities_spawned = 0x579;
					constexpr auto create_as_child_spawn_group = 0x57a;
					constexpr auto h_layer_spawn_group = 0x57c;
					constexpr auto world_layer_actually_visible = 0x580;
				} // namespace cinfo_world_layer

				namespace point_camera
				{
					constexpr auto fov = 0x540;
					constexpr auto resolution = 0x544;
					constexpr auto fog_enable = 0x548;
					constexpr auto fog_color = 0x549;
					constexpr auto fog_start = 0x550;
					constexpr auto fog_end = 0x554;
					constexpr auto fog_max_density = 0x558;
					constexpr auto active = 0x55c;
					constexpr auto use_screen_aspect_ratio = 0x55d;
					constexpr auto aspect_ratio = 0x560;
					constexpr auto no_sky = 0x564;
					constexpr auto brightness = 0x568;
					constexpr auto zfar = 0x56c;
					constexpr auto znear = 0x570;
					constexpr auto can_hltvuse = 0x574;
					constexpr auto dof_enabled = 0x575;
					constexpr auto dof_near_blurry = 0x578;
					constexpr auto dof_near_crisp = 0x57c;
					constexpr auto dof_far_crisp = 0x580;
					constexpr auto dof_far_blurry = 0x584;
					constexpr auto dof_tilt_to_ground = 0x588;
					constexpr auto target_fov = 0x58c;
					constexpr auto degrees_per_second = 0x590;
					constexpr auto is_on = 0x594;
					constexpr auto next_ptr = 0x598;
				} // namespace point_camera

				namespace point_camera_vfov
				{
					constexpr auto vertical_fov = 0x5a0;
				} // namespace point_camera_vfov

				namespace cpoint_template
				{
					constexpr auto isz_world_name = 0x540;
					constexpr auto isz_source2_entity_lump_name = 0x548;
					constexpr auto isz_entity_filter_name = 0x550;
					constexpr auto timeout_interval = 0x558;
					constexpr auto asynchronously_spawn_entities = 0x55c;
					constexpr auto output_on_spawned = 0x560;
					constexpr auto client_only_entity_behavior = 0x588;
					constexpr auto owner_spawn_group_type = 0x58c;
					constexpr auto created_spawn_group_handles = 0x590;
					constexpr auto spawned_entity_handles = 0x5a8;
					constexpr auto script_spawn_callback = 0x5c0;
					constexpr auto script_callback_scope = 0x5c8;
				} // namespace cpoint_template

				namespace sound_area_entity_base
				{
					constexpr auto disabled = 0x540;
					constexpr auto was_enabled = 0x548;
					constexpr auto isz_sound_area_type = 0x550;
					constexpr auto v_pos = 0x558;
				} // namespace sound_area_entity_base

				namespace sound_area_entity_sphere
				{
					constexpr auto radius = 0x568;
				} // namespace sound_area_entity_sphere

				namespace sound_area_entity_oriented_box
				{
					constexpr auto v_min = 0x568;
					constexpr auto v_max = 0x574;
				} // namespace sound_area_entity_oriented_box

				namespace team
				{
					constexpr auto a_player_controllers = 0x540;
					constexpr auto a_players = 0x558;
					constexpr auto score = 0x570;
					constexpr auto teamname_arr = 0x574;
				} // namespace team

				namespace cbase_player_controller
				{
					constexpr auto final_predicted_tick = 0x558; 
					constexpr auto command_context = 0x560; 
					constexpr auto in_buttons_which_are_toggles = 0x5F8; 
					constexpr auto tick_base = 0x600; 
					constexpr auto h_pawn = 0x604; 
					constexpr auto h_predicted_pawn = 0x608; 
					constexpr auto split_screen_slot = 0x60C; 
					constexpr auto h_split_owner = 0x610; 
					constexpr auto h_split_screen_players = 0x618; 
					constexpr auto is_hltv = 0x630; 
					constexpr auto connected = 0x634; 
					constexpr auto isz_player_name_arr = 0x638; 
					constexpr auto steam_id = 0x6C0; ;
					constexpr auto is_local_player_controller = 0x6C8; 
					constexpr auto desired_fov = 0x6CC; 
				} // namespace cbase_player_controller

				namespace cbase_player_vdata
				{
					constexpr auto s_model_name = 0x28;
					constexpr auto head_damage_multiplier = 0x108;
					constexpr auto chest_damage_multiplier = 0x118;
					constexpr auto stomach_damage_multiplier = 0x128;
					constexpr auto arm_damage_multiplier = 0x138;
					constexpr auto leg_damage_multiplier = 0x148;
					constexpr auto hold_breath_time = 0x158;
					constexpr auto drowning_damage_interval = 0x15c;
					constexpr auto drowning_damage_initial = 0x160;
					constexpr auto drowning_damage_max = 0x164;
					constexpr auto water_speed = 0x168;
					constexpr auto use_range = 0x16c;
					constexpr auto use_angle_tolerance = 0x170;
					constexpr auto crouch_time = 0x174;
				} // namespace cbase_player_vdata

				namespace cbase_player_weapon_vdata
				{
					constexpr auto world_model = 0x28;
					constexpr auto built_right_handed = 0x108;
					constexpr auto allow_flipping = 0x109;
					constexpr auto is_full_auto = 0x10a;
					constexpr auto num_bullets = 0x10c;
					constexpr auto s_muzzle_attachment = 0x110;
					constexpr auto muzzle_flash_particle = 0x118;
					constexpr auto flags = 0x1f8;
					constexpr auto primary_ammo_type = 0x1f9;
					constexpr auto secondary_ammo_type = 0x1fa;
					constexpr auto max_clip1 = 0x1fc;
					constexpr auto max_clip2 = 0x200;
					constexpr auto default_clip1 = 0x204;
					constexpr auto default_clip2 = 0x208;
					constexpr auto weight = 0x20c;
					constexpr auto auto_switch_to = 0x210;
					constexpr auto auto_switch_from = 0x211;
					constexpr auto rumble_effect = 0x214;
					constexpr auto a_shoot_sounds = 0x218;
					constexpr auto slot = 0x238;
					constexpr auto position = 0x23c;
				} // namespace cbase_player_weapon_vdata

				namespace cbody_component_base_anim_graph
				{
					constexpr auto animation_controller = 0x480;
					constexpr auto _m_p_chain_entity = 0x18c0;
				} // namespace cbody_component_base_anim_graph

				namespace base_model_entity
				{
					constexpr auto m_CRenderComponent = 0xA20; // CRenderComponent*
					constexpr auto m_CHitboxComponent = 0xA28; // CHitboxComponent
					constexpr auto m_bInitModelEffects = 0xA70; // bool
					constexpr auto m_bIsStaticProp = 0xA71; // bool
					constexpr auto m_nLastAddDecal = 0xA74; // int32_t
					constexpr auto m_nDecalsAdded = 0xA78; // int32_t
					constexpr auto m_iOldHealth = 0xA7C; // int32_t
					constexpr auto m_nRenderMode = 0xA80; // RenderMode_t
					constexpr auto m_nRenderFX = 0xA81; // RenderFx_t
					constexpr auto m_bAllowFadeInView = 0xA82; // bool
					constexpr auto m_clrRender = 0xA83; // Color
					constexpr auto m_vecRenderAttributes = 0xA88; // C_UtlVectorEmbeddedNetworkVar<EntityRenderAttribute_t>
					constexpr auto m_bRenderToCubemaps = 0xAF0; // bool
					constexpr auto m_Collision = 0xAF8; // CCollisionProperty
					constexpr auto m_Glow = 0xBA8; // CGlowProperty
					constexpr auto m_flGlowBackfaceMult = 0xC00; // float
					constexpr auto m_fadeMinDist = 0xC04; // float
					constexpr auto m_fadeMaxDist = 0xC08; // float
					constexpr auto m_flFadeScale = 0xC0C; // float
					constexpr auto m_flShadowStrength = 0xC10; // float
					constexpr auto m_nObjectCulling = 0xC14; // uint8_t
					constexpr auto m_nAddDecal = 0xC18; // int32_t
					constexpr auto m_vDecalPosition = 0xC1C; // Vector
					constexpr auto m_vDecalForwardAxis = 0xC28; // Vector
					constexpr auto m_flDecalHealBloodRate = 0xC34; // float
					constexpr auto m_flDecalHealHeightRate = 0xC38; // float
					constexpr auto m_ConfigEntitiesToPropagateMaterialDecalsTo = 0xC40; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
					constexpr auto m_vecViewOffset = 0xC58; // CNetworkViewOffsetVector
					constexpr auto m_pClientAlphaProperty = 0xC88; // CClientAlphaProperty*
					constexpr auto m_ClientOverrideTint = 0xC90; // Color
					constexpr auto m_bUseClientOverrideTint = 0xC94; // bool
				} // namespace base_model_entity

				namespace clogic_relay
				{
					constexpr auto on_trigger = 0x540;
					constexpr auto on_spawn = 0x568;
					constexpr auto disabled = 0x590;
					constexpr auto wait_for_refire = 0x591;
					constexpr auto trigger_once = 0x592;
					constexpr auto fast_retrigger = 0x593;
					constexpr auto passthough_caller = 0x594;
				} // namespace clogic_relay

				namespace particle_system
				{
					constexpr auto snapshot_file_name_arr = 0xcc0;
					constexpr auto active = 0xec0;
					constexpr auto frozen = 0xec1;
					constexpr auto freeze_transition_duration = 0xec4;
					constexpr auto stop_type = 0xec8;
					constexpr auto animate_during_gameplay_pause = 0xecc;
					constexpr auto effect_index = 0xed0;
					constexpr auto start_time = 0xed8;
					constexpr auto pre_sim_time = 0xedc;
					constexpr auto v_server_control_points_arr = 0xee0;
					constexpr auto server_control_point_assignments_arr = 0xf10;
					constexpr auto h_control_point_ents_arr = 0xf14;
					constexpr auto no_save = 0x1014;
					constexpr auto no_freeze = 0x1015;
					constexpr auto no_ramp = 0x1016;
					constexpr auto start_active = 0x1017;
					constexpr auto isz_effect_name = 0x1018;
					constexpr auto isz_control_point_names_arr = 0x1020;
					constexpr auto data_cp = 0x1220;
					constexpr auto vec_data_cpvalue = 0x1224;
					constexpr auto tint_cp = 0x1230;
					constexpr auto clr_tint = 0x1234;
					constexpr auto old_active = 0x1258;
					constexpr auto old_frozen = 0x1259;
				} // namespace particle_system

				namespace path_particle_rope
				{
					constexpr auto start_active = 0x540;
					constexpr auto max_simulation_time = 0x544;
					constexpr auto isz_effect_name = 0x548;
					constexpr auto path_nodes_name = 0x550;
					constexpr auto particle_spacing = 0x568;
					constexpr auto slack = 0x56c;
					constexpr auto radius = 0x570;
					constexpr auto color_tint = 0x574;
					constexpr auto effect_state = 0x578;
					constexpr auto effect_index = 0x580;
					constexpr auto path_nodes_position = 0x588;
					constexpr auto path_nodes_tangent_in = 0x5a0;
					constexpr auto path_nodes_tangent_out = 0x5b8;
					constexpr auto path_nodes_color = 0x5d0;
					constexpr auto path_nodes_pin_enabled = 0x5e8;
					constexpr auto path_nodes_radius_scale = 0x600;
				} // namespace path_particle_rope

				namespace dynamic_light
				{
					constexpr auto flags = 0xcc0;
					constexpr auto light_style = 0xcc1;
					constexpr auto radius = 0xcc4;
					constexpr auto exponent = 0xcc8;
					constexpr auto inner_angle = 0xccc;
					constexpr auto outer_angle = 0xcd0;
					constexpr auto spot_radius = 0xcd4;
				} // namespace dynamic_light

				namespace env_screen_overlay
				{
					constexpr auto isz_overlay_names_arr = 0x540;
					constexpr auto overlay_times_arr = 0x590;
					constexpr auto start_time = 0x5b8;
					constexpr auto desired_overlay = 0x5bc;
					constexpr auto is_active = 0x5c0;
					constexpr auto was_active = 0x5c1;
					constexpr auto cached_desired_overlay = 0x5c4;
					constexpr auto current_overlay = 0x5c8;
					constexpr auto current_overlay_time = 0x5cc;
				} // namespace env_screen_overlay

				namespace func_track_train
				{
					constexpr auto long_axis = 0xcc0;
					constexpr auto radius = 0xcc4;
					constexpr auto line_length = 0xcc8;
				} // namespace func_track_train

				namespace light_glow
				{
					constexpr auto horizontal_size = 0xcc0;
					constexpr auto vertical_size = 0xcc4;
					constexpr auto min_dist = 0xcc8;
					constexpr auto max_dist = 0xccc;
					constexpr auto outer_max_dist = 0xcd0;
					constexpr auto glow_proxy_size = 0xcd4;
					constexpr auto hdrcolor_scale = 0xcd8;
					constexpr auto glow = 0xce0;
				} // namespace light_glow

				namespace ragdoll_manager
				{
					constexpr auto current_max_ragdoll_count = 0x540;
				} // namespace ragdoll_manager

				namespace spotlight_end
				{
					constexpr auto light_scale = 0xcc0;
					constexpr auto radius = 0xcc4;
				} // namespace spotlight_end

				namespace point_value_remapper
				{
					constexpr auto disabled = 0x540;
					constexpr auto disabled_old = 0x541;
					constexpr auto update_on_client = 0x542;
					constexpr auto input_type = 0x544;
					constexpr auto h_remap_line_start = 0x548;
					constexpr auto h_remap_line_end = 0x54c;
					constexpr auto maximum_change_per_second = 0x550;
					constexpr auto disengage_distance = 0x554;
					constexpr auto engage_distance = 0x558;
					constexpr auto requires_use_key = 0x55c;
					constexpr auto output_type = 0x560;
					constexpr auto h_output_entities = 0x568;
					constexpr auto haptics_type = 0x580;
					constexpr auto momentum_type = 0x584;
					constexpr auto momentum_modifier = 0x588;
					constexpr auto snap_value = 0x58c;
					constexpr auto current_momentum = 0x590;
					constexpr auto ratchet_type = 0x594;
					constexpr auto ratchet_offset = 0x598;
					constexpr auto input_offset = 0x59c;
					constexpr auto engaged = 0x5a0;
					constexpr auto first_update = 0x5a1;
					constexpr auto previous_value = 0x5a4;
					constexpr auto previous_update_tick_time = 0x5a8;
					constexpr auto vec_previous_test_point = 0x5ac;
				} // namespace point_value_remapper

				namespace point_world_text
				{
					constexpr auto force_recreate_next_update = 0xcc8;
					constexpr auto message_text_arr = 0xcd8;
					constexpr auto font_name_arr = 0xed8;
					constexpr auto enabled = 0xf18;
					constexpr auto fullbright = 0xf19;
					constexpr auto world_units_per_px = 0xf1c;
					constexpr auto font_size = 0xf20;
					constexpr auto depth_offset = 0xf24;
					constexpr auto color = 0xf28;
					constexpr auto justify_horizontal = 0xf2c;
					constexpr auto justify_vertical = 0xf30;
					constexpr auto reorient_mode = 0xf34;
				} // namespace point_world_text

				namespace handle_test
				{
					constexpr auto handle = 0x540;
					constexpr auto send_handle = 0x544;
				} // namespace handle_test

				namespace env_wind
				{
					constexpr auto env_wind_shared = 0x540;
				} // namespace env_wind

				namespace base_button
				{
					constexpr auto glow_entity = 0xcc0;
					constexpr auto usable = 0xcc4;
					constexpr auto display_text = 0xcc8;
				} // namespace base_button

				namespace entity_dissolve
				{
					constexpr auto start_time = 0xcc8;
					constexpr auto fade_in_start = 0xccc;
					constexpr auto fade_in_length = 0xcd0;
					constexpr auto fade_out_model_start = 0xcd4;
					constexpr auto fade_out_model_length = 0xcd8;
					constexpr auto fade_out_start = 0xcdc;
					constexpr auto fade_out_length = 0xce0;
					constexpr auto next_spark_time = 0xce4;
					constexpr auto dissolve_type = 0xce8;
					constexpr auto v_dissolver_origin = 0xcec;
					constexpr auto magnitude = 0xcf8;
					constexpr auto core_explode = 0xcfc;
					constexpr auto linked_to_server_ent = 0xcfd;
				} // namespace entity_dissolve

				namespace env_decal
				{
					constexpr auto h_decal_material = 0xcc0;
					constexpr auto width = 0xcc8;
					constexpr auto height = 0xccc;
					constexpr auto depth = 0xcd0;
					constexpr auto render_order = 0xcd4;
					constexpr auto project_on_world = 0xcd8;
					constexpr auto project_on_characters = 0xcd9;
					constexpr auto project_on_water = 0xcda;
					constexpr auto depth_sort_bias = 0xcdc;
				} // namespace env_decal

				namespace func_electrified_volume
				{
					constexpr auto ambient_effect = 0xcc0;
					constexpr auto effect_name = 0xcc8;
					constexpr auto state = 0xcd0;
				} // namespace func_electrified_volume

				namespace rope_keyframe
				{
					constexpr auto links_touching_something = 0xcc8;
					constexpr auto links_touching_something_1 = 0xccc;
					constexpr auto apply_wind = 0xcd0;
					constexpr auto prev_locked_points = 0xcd4;
					constexpr auto force_point_move_counter = 0xcd8;
					constexpr auto prev_end_point_pos_arr = 0xcdc;
					constexpr auto v_prev_end_point_pos_arr = 0xce0;
					constexpr auto cur_scroll = 0xcf8;
					constexpr auto scroll_speed = 0xcfc;
					constexpr auto rope_flags = 0xd00;
					constexpr auto rope_material_model_index = 0xd08;
					constexpr auto light_values_arr = 0xf80;
					constexpr auto segments = 0xff8;
					constexpr auto h_start_point = 0xffc;
					constexpr auto h_end_point = 0x1000;
					constexpr auto start_attachment = 0x1004;
					constexpr auto end_attachment = 0x1005;
					constexpr auto subdiv = 0x1006;
					constexpr auto rope_length = 0x1008;
					constexpr auto slack = 0x100a;
					constexpr auto texture_scale = 0x100c;
					constexpr auto locked_points = 0x1010;
					constexpr auto change_count = 0x1011;
					constexpr auto width = 0x1014;
					constexpr auto physics_delegate = 0x1018;
					constexpr auto h_material = 0x1028;
					constexpr auto texture_height = 0x1030;
					constexpr auto vec_impulse = 0x1034;
					constexpr auto vec_previous_impulse = 0x1040;
					constexpr auto current_gust_timer = 0x104c;
					constexpr auto current_gust_lifetime = 0x1050;
					constexpr auto time_to_next_gust = 0x1054;
					constexpr auto v_wind_dir = 0x1058;
					constexpr auto v_color_mod = 0x1064;
					constexpr auto v_cached_end_point_attachment_pos_arr = 0x1070;
					constexpr auto v_cached_end_point_attachment_angle_arr = 0x1088;
					constexpr auto constrain_between_endpoints = 0x10a0;
					constexpr auto end_point_attachment_positions_dirty = 0x10a4;
					constexpr auto end_point_attachment_angles_dirty = 0x10a4;
					constexpr auto new_data_this_frame = 0x10a4;
					constexpr auto physics_initted = 0x10a4;
				} // namespace rope_keyframe

				namespace scene_entity
				{
					constexpr auto is_playing_back = 0x548;
					constexpr auto paused = 0x549;
					constexpr auto multiplayer = 0x54a;
					constexpr auto autogenerated = 0x54b;
					constexpr auto force_client_time = 0x54c;
					constexpr auto scene_string_index = 0x550;
					constexpr auto client_only = 0x552;
					constexpr auto h_owner = 0x554;
					constexpr auto h_actor_list = 0x558;
					constexpr auto was_playing = 0x570;
					constexpr auto queued_events = 0x580;
					constexpr auto current_time = 0x598;
				} // namespace scene_entity

				namespace sun
				{
					constexpr auto fx_sssun_flare_effect_index = 0xcc0;
					constexpr auto fx_sun_flare_effect_index = 0xcc4;
					constexpr auto fdist_normalize = 0xcc8;
					constexpr auto v_sun_pos = 0xccc;
					constexpr auto v_direction = 0xcd8;
					constexpr auto isz_effect_name = 0xce8;
					constexpr auto isz_sseffect_name = 0xcf0;
					constexpr auto clr_overlay = 0xcf8;
					constexpr auto on = 0xcfc;
					constexpr auto bmax_color = 0xcfd;
					constexpr auto size = 0xd00;
					constexpr auto haze_scale = 0xd04;
					constexpr auto rotation = 0xd08;
					constexpr auto hdrcolor_scale = 0xd0c;
					constexpr auto alpha_haze = 0xd10;
					constexpr auto alpha_scale = 0xd14;
					constexpr auto alpha_hdr = 0xd18;
					constexpr auto far_zscale = 0xd1c;
				} // namespace sun

				namespace base_trigger
				{
					constexpr auto disabled = 0xcc0;
					constexpr auto client_side_predicted = 0xcc1;
				} // namespace base_trigger

				namespace beam
				{
					constexpr auto frame_rate = 0xcc0;
					constexpr auto hdrcolor_scale = 0xcc4;
					constexpr auto fire_time = 0xcc8;
					constexpr auto damage = 0xccc;
					constexpr auto num_beam_ents = 0xcd0;
					constexpr auto query_handle_halo = 0xcd4;
					constexpr auto h_base_material = 0xcf8;
					constexpr auto halo_index = 0xd00;
					constexpr auto beam_type = 0xd08;
					constexpr auto beam_flags = 0xd0c;
					constexpr auto h_attach_entity_arr = 0xd10;
					constexpr auto attach_index_arr = 0xd38;
					constexpr auto width = 0xd44;
					constexpr auto end_width = 0xd48;
					constexpr auto fade_length = 0xd4c;
					constexpr auto halo_scale = 0xd50;
					constexpr auto amplitude = 0xd54;
					constexpr auto start_frame = 0xd58;
					constexpr auto speed = 0xd5c;
					constexpr auto frame = 0xd60;
					constexpr auto clip_style = 0xd64;
					constexpr auto turned_off = 0xd68;
					constexpr auto vec_end_pos = 0xd6c;
					constexpr auto h_end_entity = 0xd78;
				} // namespace beam

				namespace func_ladder
				{
					constexpr auto vec_ladder_dir = 0xcc0;
					constexpr auto dismounts = 0xcd0;
					constexpr auto vec_local_top = 0xce8;
					constexpr auto vec_player_mount_position_top = 0xcf4;
					constexpr auto vec_player_mount_position_bottom = 0xd00;
					constexpr auto auto_ride_speed = 0xd0c;
					constexpr auto disabled = 0xd10;
					constexpr auto fake_ladder = 0xd11;
					constexpr auto has_slack = 0xd12;
				} // namespace func_ladder

				namespace cprecipitation_vdata
				{
					constexpr auto particle_precipitation_effect = 0x28;
					constexpr auto inner_distance = 0x108;
					constexpr auto attach_type = 0x10c;
					constexpr auto batch_same_volume_type = 0x110;
					constexpr auto rtenv_cp = 0x114;
					constexpr auto rtenv_cpcomponent = 0x118;
					constexpr auto modifier = 0x120;
				} // namespace cprecipitation_vdata

				namespace sprite
				{
					constexpr auto h_sprite_material = 0xcd8;
					constexpr auto h_attached_to_entity = 0xce0;
					constexpr auto attachment = 0xce4;
					constexpr auto sprite_framerate = 0xce8;
					constexpr auto frame = 0xcec;
					constexpr auto die_time = 0xcf0;
					constexpr auto brightness = 0xd00;
					constexpr auto brightness_duration = 0xd04;
					constexpr auto sprite_scale = 0xd08;
					constexpr auto scale_duration = 0xd0c;
					constexpr auto world_space_scale = 0xd10;
					constexpr auto glow_proxy_size = 0xd14;
					constexpr auto hdrcolor_scale = 0xd18;
					constexpr auto last_time = 0xd1c;
					constexpr auto max_frame = 0xd20;
					constexpr auto start_scale = 0xd24;
					constexpr auto dest_scale = 0xd28;
					constexpr auto scale_time_start = 0xd2c;
					constexpr auto start_brightness = 0xd30;
					constexpr auto dest_brightness = 0xd34;
					constexpr auto brightness_time_start = 0xd38;
					constexpr auto h_old_sprite_material = 0xd40;
					constexpr auto sprite_width = 0xde8;
					constexpr auto sprite_height = 0xdec;
				} // namespace sprite

				namespace base_client_uientity
				{
					constexpr auto enabled = 0xcc8;
					constexpr auto dialog_xmlname = 0xcd0;
					constexpr auto panel_class_name = 0xcd8;
					constexpr auto panel_id = 0xce0;
				} // namespace base_client_uientity

				namespace point_client_uidialog
				{
					constexpr auto h_activator = 0xcf0;
					constexpr auto start_enabled = 0xcf4;
				} // namespace point_client_uidialog

				namespace point_client_uihud
				{
					constexpr auto check_cssclasses = 0xcf8;
					constexpr auto ignore_input = 0xe80;
					constexpr auto width = 0xe84;
					constexpr auto height = 0xe88;
					constexpr auto dpi = 0xe8c;
					constexpr auto interact_distance = 0xe90;
					constexpr auto depth_offset = 0xe94;
					constexpr auto un_owner_context = 0xe98;
					constexpr auto un_horizontal_align = 0xe9c;
					constexpr auto un_vertical_align = 0xea0;
					constexpr auto un_orientation = 0xea4;
					constexpr auto allow_interaction_from_all_scene_worlds = 0xea8;
					constexpr auto vec_cssclasses = 0xeb0;
				} // namespace point_client_uihud

				namespace point_client_uiworld_panel
				{
					constexpr auto force_recreate_next_update = 0xcf8;
					constexpr auto move_view_to_player_next_think = 0xcf9;
					constexpr auto check_cssclasses = 0xcfa;
					constexpr auto anchor_delta_transform = 0xd00;
					constexpr auto off_screen_indicator_ptr = 0xea0;
					constexpr auto ignore_input = 0xec8;
					constexpr auto lit = 0xec9;
					constexpr auto follow_player_across_teleport = 0xeca;
					constexpr auto width = 0xecc;
					constexpr auto height = 0xed0;
					constexpr auto dpi = 0xed4;
					constexpr auto interact_distance = 0xed8;
					constexpr auto depth_offset = 0xedc;
					constexpr auto un_owner_context = 0xee0;
					constexpr auto un_horizontal_align = 0xee4;
					constexpr auto un_vertical_align = 0xee8;
					constexpr auto un_orientation = 0xeec;
					constexpr auto allow_interaction_from_all_scene_worlds = 0xef0;
					constexpr auto vec_cssclasses = 0xef8;
					constexpr auto opaque = 0xf10;
					constexpr auto no_depth = 0xf11;
					constexpr auto render_backface = 0xf12;
					constexpr auto use_off_screen_indicator = 0xf13;
					constexpr auto exclude_from_save_games = 0xf14;
					constexpr auto grabbable = 0xf15;
					constexpr auto only_render_to_texture = 0xf16;
					constexpr auto disable_mip_gen = 0xf17;
					constexpr auto explicit_image_layout = 0xf18;
				} // namespace point_client_uiworld_panel

				namespace cpoint_off_screen_indicator_ui
				{
					constexpr auto been_enabled = 0xf20;
					constexpr auto hide = 0xf21;
					constexpr auto seen_target_time = 0xf24;
					constexpr auto target_panel_ptr = 0xf28;
				} // namespace cpoint_off_screen_indicator_ui

				namespace point_client_uiworld_text_panel
				{
					constexpr auto message_text_arr = 0xf20;
				} // namespace point_client_uiworld_text_panel

				namespace cinfo_offscreen_panorama_texture
				{
					constexpr auto disabled = 0x540;
					constexpr auto resolution_x = 0x544;
					constexpr auto resolution_y = 0x548;
					constexpr auto layout_file_name = 0x550;
					constexpr auto render_attr_name = 0x558;
					constexpr auto target_entities = 0x560;
					constexpr auto target_change_count = 0x578;
					constexpr auto vec_cssclasses = 0x580;
					constexpr auto check_cssclasses = 0x6f8;
				} // namespace cinfo_offscreen_panorama_texture

				namespace attribute_container
				{
					constexpr auto item = 0x50;
					constexpr auto external_item_provider_registered_token = 0x498;
					constexpr auto ull_registered_as_item_id = 0x4a0;
				} // namespace attribute_container

				namespace cbomb_target
				{
					constexpr auto bomb_planted_here = 0xcc8;
				} // namespace cbomb_target

				namespace trigger_buoyancy
				{
					constexpr auto buoyancy_helper = 0xcc8;
					constexpr auto fluid_density = 0xce8;
				} // namespace trigger_buoyancy

				namespace cfunc_water
				{
					constexpr auto buoyancy_helper = 0xcc0;
				} // namespace cfunc_water

				namespace ccsplayer_controller
				{
					constexpr auto in_game_money_services_ptr = 0x6F8; // CCSPlayerController_InGameMoneyServices*
					constexpr auto inventory_services_ptr = 0x700; // CCSPlayerController_InventoryServices*
					constexpr auto action_tracking_services_ptr = 0x708; // CCSPlayerController_ActionTrackingServices*
					constexpr auto damage_services_ptr = 0x710; // CCSPlayerController_DamageServices*
					constexpr auto ping = 0x718; // uint32_t
					constexpr auto has_communication_abuse_mute = 0x71C; // bool
					constexpr auto crosshair_codes = 0x720; // CUtlSymbolLarge
					constexpr auto pending_team_num = 0x728; // uint8_t
					constexpr auto force_team_time = 0x72C; // GameTime_t
					constexpr auto comp_teammate_color = 0x730; // int32_t
					constexpr auto ever_played_on_team = 0x734; // bool
					constexpr auto previous_force_join_team_time = 0x738; // GameTime_t
					constexpr auto clan = 0x740; // CUtlSymbolLarge
					constexpr auto s_sanitized_player_name = 0x748; // CUtlString
					constexpr auto coaching_team = 0x750; // int32_t
					constexpr auto player_dominated = 0x758; // uint64_t
					constexpr auto player_dominating_me = 0x760; // uint64_t
					constexpr auto competitive_ranking = 0x768; // int32_t
					constexpr auto competitive_wins = 0x76C; // int32_t
					constexpr auto competitive_rank_type = 0x770; // int8_t
					constexpr auto competitive_ranking_predicted_win = 0x774; // int32_t
					constexpr auto competitive_ranking_predicted_loss = 0x778; // int32_t
					constexpr auto competitive_ranking_predicted_tie = 0x77C; // int32_t
					constexpr auto end_match_next_map_vote = 0x780; // int32_t
					constexpr auto un_active_quest_id = 0x784; // uint16_t
					constexpr auto quest_progress_reason = 0x788; // QuestProgress::Reason
					constexpr auto un_player_tv_control_flags = 0x78C; // uint32_t
					constexpr auto draft_index = 0x7B8; // int32_t
					constexpr auto ms_queued_mode_disconnection_timestamp = 0x7BC; // uint32_t
					constexpr auto ui_abandon_recorded_reason = 0x7C0; // uint32_t
					constexpr auto cannot_be_kicked = 0x7C4; // bool
					constexpr auto ever_fully_connected = 0x7C5; // bool
					constexpr auto abandon_allows_surrender = 0x7C6; // bool
					constexpr auto abandon_offers_instant_surrender = 0x7C7; // bool
					constexpr auto disconnection1_min_warning_printed = 0x7C8; // bool
					constexpr auto score_reported = 0x7C9; // bool
					constexpr auto disconnection_tick = 0x7CC; // int32_t
					constexpr auto controlling_bot = 0x7D8; // bool
					constexpr auto has_controlled_bot_this_round = 0x7D9; // bool
					constexpr auto has_been_controlled_by_player_this_round = 0x7DA; // bool
					constexpr auto bots_controlled_this_round = 0x7DC; // int32_t
					constexpr auto can_control_observed_bot = 0x7E0; // bool
					constexpr auto h_player_pawn = 0x7E4; // CHandle<C_CSPlayerPawn>
					constexpr auto h_observer_pawn = 0x7E8; // CHandle<C_CSObserverPawn>
					constexpr auto pawn_is_alive = 0x7EC; // bool
					constexpr auto pawn_health = 0x7F0; // uint32_t
					constexpr auto pawn_armor = 0x7F4; // int32_t
					constexpr auto pawn_has_defuser = 0x7F8; // bool
					constexpr auto pawn_has_helmet = 0x7F9; // bool
					constexpr auto pawn_character_def_index = 0x7FA; // uint16_t
					constexpr auto pawn_lifetime_start = 0x7FC; // int32_t
					constexpr auto pawn_lifetime_end = 0x800; // int32_t
					constexpr auto pawn_bot_difficulty = 0x804; // int32_t
					constexpr auto h_original_controller_of_current_pawn = 0x808; // CHandle
					constexpr auto score = 0x80C; // int32_t
					constexpr auto vec_kills = 0x810; // C_NetworkUtlVectorBase<EKillTypes_t>
					constexpr auto mvps = 0x830; // int32_t
					constexpr auto is_player_name_dirty = 0x834; // bool
				} // namespace ccsplayer_controller

				namespace footstep_control
				{
					constexpr auto source = 0xcc8;
					constexpr auto destination = 0xcd0;
				} // namespace footstep_control

				namespace ccsweapon_base_vdata
				{
					constexpr auto weapon_type = 0x240;
					constexpr auto weapon_category = 0x244;
					constexpr auto view_model = 0x248;
					constexpr auto player_model = 0x328;
					constexpr auto world_dropped_model = 0x408;
					constexpr auto aimsight_lens_mask_model = 0x4e8;
					constexpr auto magazine_model = 0x5c8;
					constexpr auto heat_effect = 0x6a8;
					constexpr auto eject_brass_effect = 0x788;
					constexpr auto muzzle_flash_particle_alt = 0x868;
					constexpr auto muzzle_flash_third_person_particle = 0x948;
					constexpr auto muzzle_flash_third_person_particle_alt = 0xa28;
					constexpr auto tracer_particle = 0xb08;
					constexpr auto gear_slot = 0xbe8;
					constexpr auto gear_slot_position = 0xbec;
					constexpr auto default_loadout_slot = 0xbf0;
					constexpr auto s_wrong_team_msg = 0xbf8;
					constexpr auto price = 0xc00;
					constexpr auto kill_award = 0xc04;
					constexpr auto primary_reserve_ammo_max = 0xc08;
					constexpr auto secondary_reserve_ammo_max = 0xc0c;
					constexpr auto melee_weapon = 0xc10;
					constexpr auto has_burst_mode = 0xc11;
					constexpr auto is_revolver = 0xc12;
					constexpr auto cannot_shoot_underwater = 0xc13;
					constexpr auto name = 0xc18;
					constexpr auto anim_extension = 0xc20;
					constexpr auto e_silencer_type = 0xc28;
					constexpr auto crosshair_min_distance = 0xc2c;
					constexpr auto crosshair_delta_distance = 0xc30;
					constexpr auto cycle_time = 0xc34;
					constexpr auto max_speed = 0xc3c;
					constexpr auto spread = 0xc44;
					constexpr auto inaccuracy_crouch = 0xc4c;
					constexpr auto inaccuracy_stand = 0xc54;
					constexpr auto inaccuracy_jump = 0xc5c;
					constexpr auto inaccuracy_land = 0xc64;
					constexpr auto inaccuracy_ladder = 0xc6c;
					constexpr auto inaccuracy_fire = 0xc74;
					constexpr auto inaccuracy_move = 0xc7c;
					constexpr auto recoil_angle = 0xc84;
					constexpr auto recoil_angle_variance = 0xc8c;
					constexpr auto recoil_magnitude = 0xc94;
					constexpr auto recoil_magnitude_variance = 0xc9c;
					constexpr auto tracer_frequency = 0xca4;
					constexpr auto inaccuracy_jump_initial = 0xcac;
					constexpr auto inaccuracy_jump_apex = 0xcb0;
					constexpr auto inaccuracy_reload = 0xcb4;
					constexpr auto recoil_seed = 0xcb8;
					constexpr auto spread_seed = 0xcbc;
					constexpr auto time_to_idle_after_fire = 0xcc0;
					constexpr auto idle_interval = 0xcc4;
					constexpr auto attack_movespeed_factor = 0xcc8;
					constexpr auto heat_per_shot = 0xccc;
					constexpr auto inaccuracy_pitch_shift = 0xcd0;
					constexpr auto inaccuracy_alt_sound_threshold = 0xcd4;
					constexpr auto bot_audible_range = 0xcd8;
					constexpr auto use_radio_subtitle = 0xce0;
					constexpr auto unzooms_after_shot = 0xce8;
					constexpr auto hide_view_model_when_zoomed = 0xce9;
					constexpr auto zoom_levels = 0xcec;
					constexpr auto zoom_fov1 = 0xcf0;
					constexpr auto zoom_fov2 = 0xcf4;
					constexpr auto zoom_time0 = 0xcf8;
					constexpr auto zoom_time1 = 0xcfc;
					constexpr auto zoom_time2 = 0xd00;
					constexpr auto iron_sight_pull_up_speed = 0xd04;
					constexpr auto iron_sight_put_down_speed = 0xd08;
					constexpr auto iron_sight_fov = 0xd0c;
					constexpr auto iron_sight_pivot_forward = 0xd10;
					constexpr auto iron_sight_looseness = 0xd14;
					constexpr auto ang_pivot_angle = 0xd18;
					constexpr auto vec_iron_sight_eye_pos = 0xd24;
					constexpr auto damage = 0xd30;
					constexpr auto headshot_multiplier = 0xd34;
					constexpr auto armor_ratio = 0xd38;
					constexpr auto penetration = 0xd3c;
					constexpr auto range = 0xd40;
					constexpr auto range_modifier = 0xd44;
					constexpr auto flinch_velocity_modifier_large = 0xd48;
					constexpr auto flinch_velocity_modifier_small = 0xd4c;
					constexpr auto recovery_time_crouch = 0xd50;
					constexpr auto recovery_time_stand = 0xd54;
					constexpr auto recovery_time_crouch_final = 0xd58;
					constexpr auto recovery_time_stand_final = 0xd5c;
					constexpr auto recovery_transition_start_bullet = 0xd60;
					constexpr auto recovery_transition_end_bullet = 0xd64;
					constexpr auto throw_velocity = 0xd68;
					constexpr auto v_smoke_color = 0xd6c;
					constexpr auto anim_class = 0xd78;
				} // namespace ccsweapon_base_vdata

				namespace player_spray_decal
				{
					constexpr auto unique_id = 0xcc0;
					constexpr auto un_account_id = 0xcc4;
					constexpr auto un_trace_id = 0xcc8;
					constexpr auto rt_gc_time = 0xccc;
					constexpr auto vec_end_pos = 0xcd0;
					constexpr auto vec_start = 0xcdc;
					constexpr auto vec_left = 0xce8;
					constexpr auto vec_normal = 0xcf4;
					constexpr auto player = 0xd00;
					constexpr auto entity = 0xd04;
					constexpr auto hitbox = 0xd08;
					constexpr auto creation_time = 0xd0c;
					constexpr auto tint_id = 0xd10;
					constexpr auto version = 0xd14;
					constexpr auto ub_signature_arr = 0xd15;
					constexpr auto spray_render_helper = 0xda0;
				} // namespace player_spray_decal

				namespace func_conveyor
				{
					constexpr auto vec_move_dir_entity_space = 0xcc8;
					constexpr auto target_speed = 0xcd4;
					constexpr auto transition_start_tick = 0xcd8;
					constexpr auto transition_duration_ticks = 0xcdc;
					constexpr auto transition_start_speed = 0xce0;
					constexpr auto h_conveyor_models = 0xce8;
					constexpr auto current_conveyor_offset = 0xd00;
					constexpr auto current_conveyor_speed = 0xd04;
				} // namespace func_conveyor

				namespace cgrenade_tracer
				{
					constexpr auto tracer_duration = 0xce0;
					constexpr auto type = 0xce4;
				} // namespace cgrenade_tracer

				namespace inferno
				{
					constexpr auto nfx_fire_damage_effect = 0xd00;
					constexpr auto fire_positions_arr = 0xd04;
					constexpr auto fire_parent_positions_arr = 0x1004;
					constexpr auto fire_is_burning_arr = 0x1304;
					constexpr auto burn_normal_arr = 0x1344;
					constexpr auto fire_count = 0x1644;
					constexpr auto inferno_type = 0x1648;
					constexpr auto fire_lifetime = 0x164c;
					constexpr auto in_post_effect_time = 0x1650;
					constexpr auto last_fire_count = 0x1654;
					constexpr auto fire_effect_tick_begin = 0x1658;
					constexpr auto drawable_count = 0x8260;
					constexpr auto blos_check = 0x8264;
					constexpr auto nlosperiod = 0x8268;
					constexpr auto max_fire_half_width = 0x826c;
					constexpr auto max_fire_height = 0x8270;
					constexpr auto min_bounds = 0x8274;
					constexpr auto max_bounds = 0x8280;
					constexpr auto last_grass_burn_think = 0x828c;
				} // namespace inferno

				namespace barn_light
				{
					constexpr auto enabled = 0xcc0;
					constexpr auto color_mode = 0xcc4;
					constexpr auto color = 0xcc8;
					constexpr auto color_temperature = 0xccc;
					constexpr auto brightness = 0xcd0;
					constexpr auto brightness_scale = 0xcd4;
					constexpr auto direct_light = 0xcd8;
					constexpr auto baked_shadow_index = 0xcdc;
					constexpr auto luminaire_shape = 0xce0;
					constexpr auto luminaire_size = 0xce4;
					constexpr auto luminaire_anisotropy = 0xce8;
					constexpr auto light_style_string = 0xcf0;
					constexpr auto light_style_start_time = 0xcf8;
					constexpr auto queued_light_style_strings = 0xd00;
					constexpr auto light_style_events = 0xd18;
					constexpr auto light_style_targets = 0xd30;
					constexpr auto style_event_arr = 0xd48;
					constexpr auto h_light_cookie = 0xde8;
					constexpr auto shape = 0xdf0;
					constexpr auto soft_x = 0xdf4;
					constexpr auto soft_y = 0xdf8;
					constexpr auto skirt = 0xdfc;
					constexpr auto skirt_near = 0xe00;
					constexpr auto v_size_params = 0xe04;
					constexpr auto range = 0xe10;
					constexpr auto v_shear = 0xe14;
					constexpr auto bake_specular_to_cubemaps = 0xe20;
					constexpr auto v_bake_specular_to_cubemaps_size = 0xe24;
					constexpr auto cast_shadows = 0xe30;
					constexpr auto shadow_map_size = 0xe34;
					constexpr auto shadow_priority = 0xe38;
					constexpr auto contact_shadow = 0xe3c;
					constexpr auto bounce_light = 0xe40;
					constexpr auto bounce_scale = 0xe44;
					constexpr auto min_roughness = 0xe48;
					constexpr auto v_alternate_color = 0xe4c;
					constexpr auto alternate_color_brightness = 0xe58;
					constexpr auto fog = 0xe5c;
					constexpr auto fog_strength = 0xe60;
					constexpr auto fog_shadows = 0xe64;
					constexpr auto fog_scale = 0xe68;
					constexpr auto fade_size_start = 0xe6c;
					constexpr auto fade_size_end = 0xe70;
					constexpr auto shadow_fade_size_start = 0xe74;
					constexpr auto shadow_fade_size_end = 0xe78;
					constexpr auto precomputed_fields_valid = 0xe7c;
					constexpr auto v_precomputed_bounds_mins = 0xe80;
					constexpr auto v_precomputed_bounds_maxs = 0xe8c;
					constexpr auto v_precomputed_obborigin = 0xe98;
					constexpr auto v_precomputed_obbangles = 0xea4;
					constexpr auto v_precomputed_obbextent = 0xeb0;
				} // namespace barn_light

				namespace rect_light
				{
					constexpr auto show_light = 0xf08;
				} // namespace rect_light

				namespace omni_light
				{
					constexpr auto inner_angle = 0xf08;
					constexpr auto outer_angle = 0xf0c;
					constexpr auto show_light = 0xf10;
				} // namespace omni_light

				namespace csteam
				{
					constexpr auto team_match_stat_arr = 0x5f8;
					constexpr auto num_map_victories = 0x7f8;
					constexpr auto surrendered = 0x7fc;
					constexpr auto score_first_half = 0x800;
					constexpr auto score_second_half = 0x804;
					constexpr auto score_overtime = 0x808;
					constexpr auto clan_teamname_arr = 0x80c;
					constexpr auto clan_id = 0x890;
					constexpr auto team_flag_image_arr = 0x894;
					constexpr auto team_logo_image_arr = 0x89c;
				} // namespace csteam

				namespace cinfo_dynamic_shadow_hint
				{
					constexpr auto disabled = 0x540;
					constexpr auto range = 0x544;
					constexpr auto importance = 0x548;
					constexpr auto light_choice = 0x54c;
					constexpr auto h_light = 0x550;
				} // namespace cinfo_dynamic_shadow_hint

				namespace cinfo_dynamic_shadow_hint_box
				{
					constexpr auto v_box_mins = 0x558;
					constexpr auto v_box_maxs = 0x564;
				} // namespace cinfo_dynamic_shadow_hint_box

				namespace env_sky
				{
					constexpr auto h_sky_material = 0xcc0;
					constexpr auto h_sky_material_lighting_only = 0xcc8;
					constexpr auto start_disabled = 0xcd0;
					constexpr auto v_tint_color = 0xcd1;
					constexpr auto v_tint_color_lighting_only = 0xcd5;
					constexpr auto brightness_scale = 0xcdc;
					constexpr auto fog_type = 0xce0;
					constexpr auto fog_min_start = 0xce4;
					constexpr auto fog_min_end = 0xce8;
					constexpr auto fog_max_start = 0xcec;
					constexpr auto fog_max_end = 0xcf0;
					constexpr auto enabled = 0xcf4;
				} // namespace env_sky

				namespace light_entity
				{
					constexpr auto clight_component_ptr = 0xcc0;
				} // namespace light_entity

				namespace post_processing_volume
				{
					constexpr auto h_post_settings = 0xcd8;
					constexpr auto fade_duration = 0xce0;
					constexpr auto min_log_exposure = 0xce4;
					constexpr auto max_log_exposure = 0xce8;
					constexpr auto min_exposure = 0xcec;
					constexpr auto max_exposure = 0xcf0;
					constexpr auto exposure_compensation = 0xcf4;
					constexpr auto exposure_fade_speed_up = 0xcf8;
					constexpr auto exposure_fade_speed_down = 0xcfc;
					constexpr auto tonemap_evsmoothing_range = 0xd00;
					constexpr auto master = 0xd04;
					constexpr auto exposure_control = 0xd05;
					constexpr auto rate = 0xd08;
					constexpr auto tonemap_percent_target = 0xd0c;
					constexpr auto tonemap_percent_bright_pixels = 0xd10;
					constexpr auto tonemap_min_avg_lum = 0xd14;
				} // namespace post_processing_volume

				namespace env_particle_glow
				{
					constexpr auto alpha_scale = 0x1270;
					constexpr auto radius_scale = 0x1274;
					constexpr auto self_illum_scale = 0x1278;
					constexpr auto color_tint = 0x127c;
					constexpr auto h_texture_override = 0x1280;
				} // namespace env_particle_glow

				namespace texture_based_animatable
				{
					constexpr auto loop = 0xcc0;
					constexpr auto fps = 0xcc4;
					constexpr auto h_position_keys = 0xcc8;
					constexpr auto h_rotation_keys = 0xcd0;
					constexpr auto v_animation_bounds_min = 0xcd8;
					constexpr auto v_animation_bounds_max = 0xce4;
					constexpr auto start_time = 0xcf0;
					constexpr auto start_frame = 0xcf4;
				} // namespace texture_based_animatable

				namespace cbase_anim_graph
				{
					constexpr auto initially_populate_interp_history = 0xcc0;
					constexpr auto should_animate_during_gameplay_pause = 0xcc1;
					constexpr auto suppress_anim_event_sounds = 0xcc3;
					constexpr auto anim_graph_update_enabled = 0xcd0;
					constexpr auto max_slope_distance = 0xcd4;
					constexpr auto v_last_slope_check_pos = 0xcd8;
					constexpr auto vec_force = 0xce8;
					constexpr auto force_bone = 0xcf4;
					constexpr auto clientside_ragdoll_ptr = 0xcf8;
					constexpr auto built_ragdoll = 0xd00;
					constexpr auto ragdoll_pose_ptr = 0xd18;
					constexpr auto client_ragdoll = 0xd20;
					constexpr auto has_animated_material_attributes = 0xd30;
				} // namespace cbase_anim_graph

				namespace cbase_prop
				{
					constexpr auto model_overrode_block_los = 0xe80;
					constexpr auto shape_type = 0xe84;
					constexpr auto conform_to_collision_bounds = 0xe88;
					constexpr auto m_preferred_catch_transform = 0xe8c;
				} // namespace cbase_prop

				namespace breakable_prop
				{
					constexpr auto on_break = 0xec8;
					constexpr auto on_health_changed = 0xef0;
					constexpr auto on_take_damage = 0xf18;
					constexpr auto impact_energy_scale = 0xf40;
					constexpr auto min_health_dmg = 0xf44;
					constexpr auto pressure_delay = 0xf48;
					constexpr auto h_breaker = 0xf4c;
					constexpr auto performance_mode = 0xf50;
					constexpr auto dmg_mod_bullet = 0xf54;
					constexpr auto dmg_mod_club = 0xf58;
					constexpr auto dmg_mod_explosive = 0xf5c;
					constexpr auto dmg_mod_fire = 0xf60;
					constexpr auto isz_physics_damage_table_name = 0xf68;
					constexpr auto isz_base_prop_data = 0xf70;
					constexpr auto interactions = 0xf78;
					constexpr auto prevent_damage_before_time = 0xf7c;
					constexpr auto has_break_pieces_or_commands = 0xf80;
					constexpr auto explode_damage = 0xf84;
					constexpr auto explode_radius = 0xf88;
					constexpr auto explosion_delay = 0xf90;
					constexpr auto explosion_buildup_sound = 0xf98;
					constexpr auto explosion_custom_effect = 0xfa0;
					constexpr auto explosion_custom_sound = 0xfa8;
					constexpr auto explosion_modifier = 0xfb0;
					constexpr auto h_physics_attacker = 0xfb8;
					constexpr auto last_physics_influence_time = 0xfbc;
					constexpr auto default_fade_scale = 0xfc0;
					constexpr auto h_last_attacker = 0xfc4;
					constexpr auto h_flare_ent = 0xfc8;
					constexpr auto no_ghost_collision = 0xfcc;
				} // namespace breakable_prop

				namespace dynamic_prop
				{
					constexpr auto use_hitboxes_for_render_box = 0xfd0;
					constexpr auto use_anim_graph = 0xfd1;
					constexpr auto output_anim_begun = 0xfd8;
					constexpr auto output_anim_over = 0x1000;
					constexpr auto output_anim_loop_cycle_over = 0x1028;
					constexpr auto on_anim_reached_start = 0x1050;
					constexpr auto on_anim_reached_end = 0x1078;
					constexpr auto isz_default_anim = 0x10a0;
					constexpr auto default_anim_loop_mode = 0x10a8;
					constexpr auto animate_on_server = 0x10ac;
					constexpr auto randomize_cycle = 0x10ad;
					constexpr auto start_disabled = 0x10ae;
					constexpr auto scripted_movement = 0x10af;
					constexpr auto fired_start_end_output = 0x10b0;
					constexpr auto force_npc_exclude = 0x10b1;
					constexpr auto create_non_solid = 0x10b2;
					constexpr auto is_override_prop = 0x10b3;
					constexpr auto initial_glow_state = 0x10b4;
					constexpr auto glow_range = 0x10b8;
					constexpr auto glow_range_min = 0x10bc;
					constexpr auto glow_color = 0x10c0;
					constexpr auto glow_team = 0x10c4;
					constexpr auto cached_frame_count = 0x10c8;
					constexpr auto vec_cached_render_mins = 0x10cc;
					constexpr auto vec_cached_render_maxs = 0x10d8;
				} // namespace dynamic_prop

				namespace color_correction_volume
				{
					constexpr auto last_enter_weight = 0xcc8;
					constexpr auto last_enter_time = 0xccc;
					constexpr auto last_exit_weight = 0xcd0;
					constexpr auto last_exit_time = 0xcd4;
					constexpr auto enabled = 0xcd8;
					constexpr auto max_weight = 0xcdc;
					constexpr auto fade_duration = 0xce0;
					constexpr auto weight = 0xce4;
					constexpr auto lookup_filename_arr = 0xce8;
				} // namespace color_correction_volume

				namespace func_monitor
				{
					constexpr auto target_camera = 0xcc0;
					constexpr auto resolution_enum = 0xcc8;
					constexpr auto render_shadows = 0xccc;
					constexpr auto use_unique_color_target = 0xccd;
					constexpr auto brush_model_name = 0xcd0;
					constexpr auto h_target_camera = 0xcd8;
					constexpr auto enabled = 0xcdc;
					constexpr auto draw3_dskybox = 0xcdd;
				} // namespace func_monitor

				namespace phys_magnet
				{
					constexpr auto a_attached_objects_from_server = 0xe80;
					constexpr auto a_attached_objects = 0xe98;
				} // namespace phys_magnet

				namespace point_commentary_node
				{
					constexpr auto active = 0xe88;
					constexpr auto was_active = 0xe89;
					constexpr auto end_time = 0xe8c;
					constexpr auto start_time = 0xe90;
					constexpr auto start_time_in_commentary = 0xe94;
					constexpr auto isz_commentary_file = 0xe98;
					constexpr auto isz_title = 0xea0;
					constexpr auto isz_speakers = 0xea8;
					constexpr auto node_number = 0xeb0;
					constexpr auto node_number_max = 0xeb4;
					constexpr auto listened_to = 0xeb8;
					constexpr auto h_view_position = 0xec8;
					constexpr auto restart_after_restore = 0xecc;
				} // namespace point_commentary_node

				namespace base_door
				{
					constexpr auto is_usable = 0xcc0;
				} // namespace base_door

				namespace base_flex
				{
					constexpr auto flex_weight = 0xe90;
					constexpr auto v_look_target_position = 0xea8;
					constexpr auto blinktoggle = 0xec0;
					constexpr auto last_flex_update_frame_count = 0xf20;
					constexpr auto cached_view_target = 0xf24;
					constexpr auto next_scene_event_id = 0xf30;
					constexpr auto blink = 0xf34;
					constexpr auto blinktime = 0xf38;
					constexpr auto prevblinktoggle = 0xf3c;
					constexpr auto jaw_open = 0xf40;
					constexpr auto jaw_open_amount = 0xf44;
					constexpr auto blink_amount = 0xf48;
					constexpr auto mouth_attachment = 0xf4c;
					constexpr auto eye_attachment = 0xf4d;
					constexpr auto reset_flex_weights_on_model_change = 0xf4e;
					constexpr auto eye_occlusion_renderer_bone = 0xf68;
					constexpr auto m_eye_occlusion_renderer_camera_to_bone_transform = 0xf6c;
					constexpr auto v_eye_occlusion_renderer_half_extent = 0xf9c;
					constexpr auto phoneme_classes_arr = 0xfb8;
				} // namespace base_flex

				namespace client_ragdoll
				{
					constexpr auto fade_out = 0xe80;
					constexpr auto important = 0xe81;
					constexpr auto effect_time = 0xe84;
					constexpr auto gib_despawn_time = 0xe88;
					constexpr auto current_friction = 0xe8c;
					constexpr auto min_friction = 0xe90;
					constexpr auto max_friction = 0xe94;
					constexpr auto friction_anim_state = 0xe98;
					constexpr auto release_ragdoll = 0xe9c;
					constexpr auto eye_attachment = 0xe9d;
					constexpr auto fading_out = 0xe9e;
					constexpr auto scale_end_arr = 0xea0;
					constexpr auto scale_time_start_arr = 0xec8;
					constexpr auto scale_time_end_arr = 0xef0;
				} // namespace client_ragdoll

				namespace precipitation
				{
					constexpr auto density = 0xcc8;
					constexpr auto particle_inner_dist = 0xcd8;
					constexpr auto particle_def_ptr = 0xce0;
					constexpr auto t_particle_precip_trace_timer_arr = 0xd08;
					constexpr auto active_particle_precip_emitter_arr = 0xd10;
					constexpr auto particle_precip_initialized = 0xd11;
					constexpr auto has_simulated_since_last_scene_object_update = 0xd12;
					constexpr auto available_sheet_sequences_max_index = 0xd14;
				} // namespace precipitation

				namespace fire_sprite
				{
					constexpr auto vec_move_dir = 0xdf0;
					constexpr auto fade_from_above = 0xdfc;
				} // namespace fire_sprite

				namespace fish
				{
					constexpr auto pos = 0xe80;
					constexpr auto vel = 0xe8c;
					constexpr auto angles = 0xe98;
					constexpr auto local_life_state = 0xea4;
					constexpr auto death_depth = 0xea8;
					constexpr auto death_angle = 0xeac;
					constexpr auto buoyancy = 0xeb0;
					constexpr auto wiggle_timer = 0xeb8;
					constexpr auto wiggle_phase = 0xed0;
					constexpr auto wiggle_rate = 0xed4;
					constexpr auto actual_pos = 0xed8;
					constexpr auto actual_angles = 0xee4;
					constexpr auto pool_origin = 0xef0;
					constexpr auto water_level = 0xefc;
					constexpr auto got_update = 0xf00;
					constexpr auto x = 0xf04;
					constexpr auto y = 0xf08;
					constexpr auto z = 0xf0c;
					constexpr auto angle = 0xf10;
					constexpr auto error_history_arr = 0xf14;
					constexpr auto error_history_index = 0xf64;
					constexpr auto error_history_count = 0xf68;
					constexpr auto average_error = 0xf6c;
				} // namespace fish

				namespace physics_prop
				{
					constexpr auto awake = 0xfd0;
				} // namespace physics_prop

				namespace base_prop_door
				{
					constexpr auto e_door_state = 0x10f8;
					constexpr auto model_changed = 0x10fc;
					constexpr auto locked = 0x10fd;
					constexpr auto closed_position = 0x1100;
					constexpr auto closed_angles = 0x110c;
					constexpr auto h_master = 0x1118;
					constexpr auto v_where_to_set_lighting_origin = 0x111c;
				} // namespace base_prop_door

				namespace phys_prop_clientside
				{
					constexpr auto touch_delta = 0xfd0;
					constexpr auto death_time = 0xfd4;
					constexpr auto impact_energy_scale = 0xfd8;
					constexpr auto inertia_scale = 0xfdc;
					constexpr auto dmg_mod_bullet = 0xfe0;
					constexpr auto dmg_mod_club = 0xfe4;
					constexpr auto dmg_mod_explosive = 0xfe8;
					constexpr auto dmg_mod_fire = 0xfec;
					constexpr auto isz_physics_damage_table_name = 0xff0;
					constexpr auto isz_base_prop_data = 0xff8;
					constexpr auto interactions = 0x1000;
					constexpr auto has_break_pieces_or_commands = 0x1004;
					constexpr auto vec_damage_position = 0x1008;
					constexpr auto vec_damage_direction = 0x1014;
					constexpr auto damage_type = 0x1020;
				} // namespace phys_prop_clientside

				namespace ragdoll_prop
				{
					constexpr auto rag_pos = 0xe88;
					constexpr auto rag_angles = 0xea0;
					constexpr auto blend_weight = 0xeb8;
					constexpr auto h_ragdoll_source = 0xebc;
					constexpr auto eye_attachment = 0xec0;
					constexpr auto blend_weight_current = 0xec4;
					constexpr auto parent_physics_bone_indices = 0xec8;
					constexpr auto world_space_bone_computation_order = 0xee0;
				} // namespace ragdoll_prop

				namespace local_temp_entity
				{
					constexpr auto flags = 0xe98;
					constexpr auto die = 0xe9c;
					constexpr auto frame_max = 0xea0;
					constexpr auto x = 0xea4;
					constexpr auto y = 0xea8;
					constexpr auto fade_speed = 0xeac;
					constexpr auto bounce_factor = 0xeb0;
					constexpr auto hit_sound = 0xeb4;
					constexpr auto priority = 0xeb8;
					constexpr auto tent_offset = 0xebc;
					constexpr auto vec_temp_ent_ang_velocity = 0xec8;
					constexpr auto tempent_renderamt = 0xed4;
					constexpr auto vec_normal = 0xed8;
					constexpr auto sprite_scale = 0xee4;
					constexpr auto flicker_frame = 0xee8;
					constexpr auto frame_rate = 0xeec;
					constexpr auto frame = 0xef0;
					constexpr auto psz_impact_effect_ptr = 0xef8;
					constexpr auto psz_particle_effect_ptr = 0xf00;
					constexpr auto particle_collision = 0xf08;
					constexpr auto last_collision_frame = 0xf0c;
					constexpr auto v_last_collision_origin = 0xf10;
					constexpr auto vec_temp_ent_velocity = 0xf1c;
					constexpr auto vec_prev_abs_origin = 0xf28;
					constexpr auto vec_temp_ent_acceleration = 0xf34;
				} // namespace local_temp_entity

				namespace shatter_glass_shard_physics
				{
					constexpr auto shard_desc = 0xfe0;
				} // namespace shatter_glass_shard_physics

				namespace econ_entity
				{
					constexpr auto flex_delay_time = 0x1028;
					constexpr auto flex_delayed_weight_ptr = 0x1030;
					constexpr auto attributes_initialized = 0x1038;
					constexpr auto attribute_manager = 0x1040;
					constexpr auto original_owner_xuid_low = 0x14e8;
					constexpr auto original_owner_xuid_high = 0x14ec;
					constexpr auto fallback_paint_kit = 0x14f0;
					constexpr auto fallback_seed = 0x14f4;
					constexpr auto fallback_wear = 0x14f8;
					constexpr auto fallback_stat_trak = 0x14fc;
					constexpr auto clientside = 0x1500;
					constexpr auto particle_systems_created = 0x1501;
					constexpr auto vec_attached_particles = 0x1508;
					constexpr auto h_viewmodel_attachment = 0x1520;
					constexpr auto old_team = 0x1524;
					constexpr auto attachment_dirty = 0x1528;
					constexpr auto unloaded_model_index = 0x152c;
					constexpr auto num_owner_validation_retries = 0x1530;
					constexpr auto h_old_providee = 0x1540;
					constexpr auto vec_attached_models = 0x1548;
				} // namespace econ_entity

				namespace econ_wearable
				{
					constexpr auto force_skin = 0x1560;
					constexpr auto always_allow = 0x1564;
				} // namespace econ_wearable

				namespace base_grenade
				{
					constexpr auto has_warned_ai = 0x1018;
					constexpr auto is_smoke_grenade = 0x1019;
					constexpr auto is_live = 0x101a;
					constexpr auto dmg_radius = 0x101c;
					constexpr auto detonate_time = 0x1020;
					constexpr auto warn_aitime = 0x1024;
					constexpr auto damage = 0x1028;
					constexpr auto isz_bounce_sound = 0x1030;
					constexpr auto explosion_sound = 0x1038;
					constexpr auto h_thrower = 0x1044;
					constexpr auto next_attack = 0x105c;
					constexpr auto h_original_thrower = 0x1060;
				} // namespace base_grenade

				namespace viewmodel_weapon
				{
					constexpr auto world_model_ptr = 0xe80;
				} // namespace viewmodel_weapon

				namespace base_view_model
				{
					constexpr auto vec_last_facing = 0xe88;
					constexpr auto view_model_index = 0xe94;
					constexpr auto animation_parity = 0xe98;
					constexpr auto animation_start_time = 0xe9c;
					constexpr auto h_weapon = 0xea0;
					constexpr auto s_vmname = 0xea8;
					constexpr auto s_animation_prefix = 0xeb0;
					constexpr auto h_weapon_model = 0xeb8;
					constexpr auto camera_attachment = 0xebc;
					constexpr auto vec_last_camera_angles = 0xec0;
					constexpr auto previous_elapsed_duration = 0xecc;
					constexpr auto previous_cycle = 0xed0;
					constexpr auto old_animation_parity = 0xed4;
					constexpr auto h_old_layer_sequence = 0xed8;
					constexpr auto old_layer = 0xedc;
					constexpr auto old_layer_start_time = 0xee0;
					constexpr auto h_control_panel = 0xee4;
				} // namespace base_view_model

				namespace predicted_view_model
				{
					constexpr auto lag_angles_history = 0xee8;
					constexpr auto v_predicted_offset = 0xf00;
				} // namespace predicted_view_model

				namespace base_csgrenade_projectile
				{
					constexpr auto v_initial_position = 0x1068;
					constexpr auto v_initial_velocity = 0x1074;
					constexpr auto bounces = 0x1080;
					constexpr auto explode_effect_index = 0x1088;
					constexpr auto explode_effect_tick_begin = 0x1090;
					constexpr auto vec_explode_effect_origin = 0x1094;
					constexpr auto spawn_time = 0x10a0;
					constexpr auto vec_last_trail_line_pos = 0x10a4;
					constexpr auto fl_next_trail_line_time = 0x10b0;
					constexpr auto explode_effect_began = 0x10b4;
					constexpr auto can_create_grenade_trail = 0x10b5;
					constexpr auto snapshot_trajectory_effect_index = 0x10b8;
					constexpr auto h_snapshot_trajectory_particle_snapshot = 0x10c0;
					constexpr auto arr_trajectory_trail_points = 0x10c8;
					constexpr auto arr_trajectory_trail_point_creation_times = 0x10e0;
					constexpr auto trajectory_trail_effect_creation_time = 0x10f8;
				} // namespace base_csgrenade_projectile

				namespace csgo_preview_model
				{
					constexpr auto animgraph = 0x1018;
					constexpr auto animgraph_character_mode_string = 0x1020;
					constexpr auto default_anim = 0x1028;
					constexpr auto default_anim_loop_mode = 0x1030;
					constexpr auto initial_model_scale = 0x1034;
				} // namespace csgo_preview_model

				namespace bullet_hit_model
				{
					constexpr auto mat_local = 0xe80;
					constexpr auto bone_index = 0xeb0;
					constexpr auto h_player_parent = 0xeb4;
					constexpr auto is_hit = 0xeb8;
					constexpr auto time_created = 0xebc;
					constexpr auto vec_start_pos = 0xec0;
				} // namespace bullet_hit_model

				namespace pick_up_model_slerper
				{
					constexpr auto h_player_parent = 0xe80;
					constexpr auto h_item = 0xe84;
					constexpr auto time_picked_up = 0xe88;
					constexpr auto ang_original = 0xe8c;
					constexpr auto vec_pos_original = 0xe98;
					constexpr auto ang_random = 0xea8;
				} // namespace pick_up_model_slerper

				namespace multimeter
				{
					constexpr auto h_target_c4 = 0xe88;
				} // namespace multimeter

				namespace planted_c4
				{
					constexpr auto bomb_ticking = 0xe80;
					constexpr auto bomb_site = 0xe84;
					constexpr auto source_soundscape_hash = 0xe88;
					constexpr auto entity_spotted_state = 0xe90;
					constexpr auto next_glow = 0xea8;
					constexpr auto next_beep = 0xeac;
					constexpr auto c4_blow = 0xeb0;
					constexpr auto cannot_be_defused = 0xeb4;
					constexpr auto has_exploded = 0xeb5;
					constexpr auto timer_length = 0xeb8;
					constexpr auto being_defused = 0xebc;
					constexpr auto trigger_warning = 0xec0;
					constexpr auto explode_warning = 0xec4;
					constexpr auto c4_activated = 0xec8;
					constexpr auto ten_sec_warning = 0xec9;
					constexpr auto defuse_length = 0xecc;
					constexpr auto defuse_count_down = 0xed0;
					constexpr auto bomb_defused = 0xed4;
					constexpr auto h_bomb_defuser = 0xed8;
					constexpr auto h_control_panel = 0xedc;
					constexpr auto h_defuser_multimeter = 0xee0;
					constexpr auto next_radar_flash_time = 0xee4;
					constexpr auto radar_flash = 0xee8;
					constexpr auto bomb_defuser = 0xeec;
					constexpr auto last_defuse_time = 0xef0;
					constexpr auto prediction_owner_ptr = 0xef8;
				} // namespace planted_c4

				namespace item
				{
					constexpr auto should_glow = 0x1560;
					constexpr auto reticle_hint_text_name_arr = 0x1561;
				} // namespace item

				namespace chicken
				{
					constexpr auto h_holiday_hat_addon = 0x10f0;
					constexpr auto jumped_this_frame = 0x10f4;
					constexpr auto leader = 0x10f8;
					constexpr auto attribute_manager = 0x1100;
					constexpr auto original_owner_xuid_low = 0x15a8;
					constexpr auto original_owner_xuid_high = 0x15ac;
					constexpr auto attributes_initialized = 0x15b0;
					constexpr auto h_water_wake_particles = 0x15b4;
				} // namespace chicken

				namespace base_player_weapon
				{
					constexpr auto next_primary_attack_tick = 0x15B8; 
					constexpr auto next_primary_attack_tick_ratio = 0x15BC; 
					constexpr auto next_secondary_attack_tick = 0x15C0; 
					constexpr auto next_secondary_attack_tick_ratio = 0x15C4; 
					constexpr auto clip1 = 0x15C8; 
					constexpr auto clip2 = 0x15CC; 
					constexpr auto reserve_ammo_arr = 0x15D0; 
				} // namespace base_player_weapon

				namespace ragdoll_prop_attached
				{
					constexpr auto bone_index_attached = 0xef8;
					constexpr auto ragdoll_attached_object_index = 0xefc;
					constexpr auto attachment_point_bone_space = 0xf00;
					constexpr auto attachment_point_ragdoll_space = 0xf0c;
					constexpr auto vec_offset = 0xf18;
					constexpr auto parent_time = 0xf24;
					constexpr auto has_parent = 0xf28;
				} // namespace ragdoll_prop_attached

				namespace base_combat_character
				{
					constexpr auto h_my_wearables = 0x1018;
					constexpr auto blood_color = 0x1030;
					constexpr auto left_foot_attachment = 0x1034;
					constexpr auto right_foot_attachment = 0x1035;
					constexpr auto water_wake_mode = 0x1038;
					constexpr auto water_world_z = 0x103c;
					constexpr auto water_next_trace_time = 0x1040;
					constexpr auto field_of_view = 0x1044;
				} // namespace base_combat_character

				namespace base_player_pawn
				{
					constexpr auto weapon_services_ptr = 0x1100; 
					constexpr auto item_services_ptr = 0x1108; 
					constexpr auto autoaim_services_ptr = 0x1110; 
					constexpr auto observer_services_ptr = 0x1118; 
					constexpr auto water_services_ptr = 0x1120; 
					constexpr auto use_services_ptr = 0x1128; 
					constexpr auto flashlight_services_ptr = 0x1130; 
					constexpr auto camera_services_ptr = 0x1138; 
					constexpr auto movement_services_ptr = 0x1140; 
					constexpr auto server_view_angle_changes = 0x1150; 
					constexpr auto highest_consumed_server_view_angle_change_index = 0x11A0; 
					constexpr auto v_angle = 0x11A4; 
					constexpr auto v_angle_previous = 0x11B0; 
					constexpr auto hide_hud = 0x11BC; 
					constexpr auto skybox3d = 0x11C0; 
					constexpr auto death_time = 0x1250; 
					constexpr auto vec_prediction_error = 0x1254;
					constexpr auto prediction_error_time = 0x1260; 
					constexpr auto vec_last_camera_setup_local_origin = 0x1264; 
					constexpr auto last_camera_setup_time = 0x1270; 
					constexpr auto fovsensitivity_adjust = 0x1274; 
					constexpr auto mouse_sensitivity = 0x1278; 
					constexpr auto v_old_origin = 0x127C; 
					constexpr auto old_simulation_time = 0x1288; 
					constexpr auto last_executed_command_number = 0x128C; 
					constexpr auto last_executed_command_tick = 0x1290; 
					constexpr auto h_controller = 0x1294; 
					constexpr auto is_swapping_to_predictable_controller = 0x1298;
				} // namespace base_player_pawn

				namespace csgoview_model
				{
					constexpr auto should_ignore_offset_and_accuracy = 0xf10;
					constexpr auto weapon_parity = 0xf14;
					constexpr auto old_weapon_parity = 0xf18;
					constexpr auto last_known_associated_weapon_ent_index = 0xf1c;
					constexpr auto need_to_queue_high_res_composite = 0xf20;
					constexpr auto v_lowered_weapon_offset = 0xf64;
				} // namespace csgoview_model

				namespace csweapon_base
				{
					constexpr auto fire_sequence_start_time = 0x15d4;
					constexpr auto fire_sequence_start_time_change = 0x15d8;
					constexpr auto fire_sequence_start_time_ack = 0x15dc;
					constexpr auto e_player_fire_event = 0x15e0;
					constexpr auto e_player_fire_event_attack_type = 0x15e4;
					constexpr auto seq_idle = 0x15e8;
					constexpr auto seq_fire_primary = 0x15ec;
					constexpr auto seq_fire_secondary = 0x15f0;
					constexpr auto third_person_fire_sequences = 0x15f8;
					constexpr auto h_current_third_person_sequence = 0x1610;
					constexpr auto silencer_bone_index = 0x1614;
					constexpr auto third_person_sequences_arr = 0x1618;
					constexpr auto client_previous_weapon_state = 0x1648;
					constexpr auto state = 0x164c;
					constexpr auto crosshair_distance = 0x1650;
					constexpr auto ammo_last_check = 0x1654;
					constexpr auto alpha = 0x1658;
					constexpr auto scope_texture_id = 0x165c;
					constexpr auto crosshair_texture_id = 0x1660;
					constexpr auto gun_accuracy_position = 0x1664;
					constexpr auto view_model_index = 0x1668;
					constexpr auto reloads_with_clips = 0x166c;
					constexpr auto time_weapon_idle = 0x1670;
					constexpr auto fire_on_empty = 0x1674;
					constexpr auto on_player_pickup = 0x1678;
					constexpr auto weapon_mode = 0x16a0;
					constexpr auto turning_inaccuracy_delta = 0x16a4;
					constexpr auto vec_turning_inaccuracy_eye_dir_last = 0x16a8;
					constexpr auto turning_inaccuracy = 0x16b4;
					constexpr auto accuracy_penalty = 0x16b8;
					constexpr auto last_accuracy_update_time = 0x16bc;
					constexpr auto accuracy_smoothed_for_zoom = 0x16c0;
					constexpr auto scope_zoom_end_time = 0x16c4;
					constexpr auto recoil_index = 0x16c8;
					constexpr auto recoil_index_1 = 0x16cc;
					constexpr auto burst_mode = 0x16d0;
					constexpr auto postpone_fire_ready_ticks = 0x16d4;
					constexpr auto postpone_fire_ready_frac = 0x16d8;
					constexpr auto in_reload = 0x16dc;
					constexpr auto reload_visually_complete = 0x16dd;
					constexpr auto dropped_at_time = 0x16e0;
					constexpr auto is_hauled_back = 0x16e4;
					constexpr auto silencer_on = 0x16e5;
					constexpr auto time_silencer_switch_complete = 0x16e8;
					constexpr auto original_team_number = 0x16ec;
					constexpr auto next_attack_render_time_offset = 0x16f0;
					constexpr auto visuals_data_set = 0x1778;
					constexpr auto old_first_person_spectated_state = 0x1779;
					constexpr auto h_our_ping = 0x177c;
					constexpr auto our_ping_index = 0x1780;
					constexpr auto vec_our_ping_pos = 0x1784;
					constexpr auto glow_for_ping = 0x1790;
					constexpr auto uiweapon = 0x1791;
					constexpr auto h_prev_owner = 0x17a0;
					constexpr auto drop_tick = 0x17a4;
					constexpr auto donated = 0x17c4;
					constexpr auto last_shot_time = 0x17c8;
					constexpr auto was_owned_by_ct = 0x17cc;
					constexpr auto was_owned_by_terrorist = 0x17cd;
					constexpr auto gun_heat = 0x17d0;
					constexpr auto smoke_attachments = 0x17d4;
					constexpr auto last_smoke_time = 0x17d8;
					constexpr auto next_client_fire_bullet_time = 0x17dc;
					constexpr auto next_client_fire_bullet_time_repredict = 0x17e0;
					constexpr auto iron_sight_controller = 0x18c0;
					constexpr auto iron_sight_mode = 0x1970;
					constexpr auto last_lostrace_failure_time = 0x1980;
					constexpr auto num_empty_attacks = 0x1984;
				} // namespace csweapon_base

				namespace csweapon_base_gun
				{
					constexpr auto zoom_level = 0x1a00;
					constexpr auto burst_shots_remaining = 0x1a04;
					constexpr auto silencer_bodygroup = 0x1a08;
					constexpr auto silenced_model_index = 0x1a18;
					constexpr auto in_precache = 0x1a1c;
					constexpr auto needs_bolt_action = 0x1a1d;
				} // namespace csweapon_base_gun

				namespace c4
				{
					constexpr auto screen_text_arr = 0x1a00;
					constexpr auto active_light_particle_index = 0x1a20;
					constexpr auto e_active_light_effect = 0x1a24;
					constexpr auto started_arming = 0x1a28;
					constexpr auto armed_time = 0x1a2c;
					constexpr auto bomb_placed_animation = 0x1a30;
					constexpr auto is_planting_via_use = 0x1a31;
					constexpr auto entity_spotted_state = 0x1a38;
					constexpr auto spot_rules = 0x1a50;
					constexpr auto played_arming_beeps_arr = 0x1a54;
					constexpr auto bomb_planted = 0x1a5b;
					constexpr auto dropped_from_death = 0x1a5c;
				} // namespace c4

				namespace weapon_taser
				{
					constexpr auto fire_time = 0x1a20;
				} // namespace weapon_taser

				namespace weapon_shield
				{
					constexpr auto display_health = 0x1a20;
				} // namespace weapon_shield

				namespace molotov_projectile
				{
					constexpr auto is_inc_grenade = 0x1100;
				} // namespace molotov_projectile

				namespace decoy_projectile
				{
					constexpr auto decoy_shot_tick = 0x1100;
					constexpr auto client_last_known_decoy_shot_tick = 0x1104;
					constexpr auto time_particle_effect_spawn = 0x1128;
				} // namespace decoy_projectile

				namespace smoke_grenade_projectile
				{
					constexpr auto smoke_effect_tick_begin = 0x1108;
					constexpr auto did_smoke_effect = 0x110c;
					constexpr auto random_seed = 0x1110;
					constexpr auto v_smoke_color = 0x1114;
					constexpr auto v_smoke_detonation_pos = 0x1120;
					constexpr auto voxel_frame_data = 0x1130;
					constexpr auto smoke_volume_data_received = 0x1148;
					constexpr auto smoke_effect_spawned = 0x1149;
				} // namespace smoke_grenade_projectile

				namespace base_csgrenade
				{
					constexpr auto client_predict_delete = 0x1a00;
					constexpr auto redraw = 0x1a01;
					constexpr auto is_held_by_player = 0x1a02;
					constexpr auto pin_pulled = 0x1a03;
					constexpr auto jump_throw = 0x1a04;
					constexpr auto e_throw_status = 0x1a08;
					constexpr auto throw_time = 0x1a0c;
					constexpr auto throw_strength = 0x1a10;
					constexpr auto throw_strength_approach = 0x1a14;
					constexpr auto drop_time = 0x1a18;
					constexpr auto next_hold_tick = 0x1a1c;
					constexpr auto next_hold_frac = 0x1a20;
					constexpr auto just_pulled_pin = 0x1a24;
					constexpr auto switch_weapon_after_throw = 0x1a25;
				} // namespace base_csgrenade

				namespace weapon_base_item
				{
					constexpr auto sequence_complete_timer = 0x1a00;
					constexpr auto redraw = 0x1a18;
				} // namespace weapon_base_item

				namespace item_dogtags
				{
					constexpr auto owning_player = 0x1668;
					constexpr auto killing_player = 0x166c;
				} // namespace item_dogtags

				namespace fists
				{
					constexpr auto playing_uninterruptable_act = 0x1a00;
					constexpr auto uninterruptable_activity = 0x1a04;
				} // namespace fists

				namespace csplayer_pawn_base
				{
					constexpr auto m_pPingServices = 0x12C0; // CCSPlayer_PingServices*
					constexpr auto m_pViewModelServices = 0x12C8; // CPlayer_ViewModelServices*
					constexpr auto m_fRenderingClipPlane = 0x12D8; // float[4]
					constexpr auto m_nLastClipPlaneSetupFrame = 0x12E8; // int32_t
					constexpr auto m_vecLastClipCameraPos = 0x12EC; // Vector
					constexpr auto m_vecLastClipCameraForward = 0x12F8; // Vector
					constexpr auto m_bClipHitStaticWorld = 0x1304; // bool
					constexpr auto m_bCachedPlaneIsValid = 0x1305; // bool
					constexpr auto m_pClippingWeapon = 0x1308; // C_CSWeaponBase*
					constexpr auto m_previousPlayerState = 0x1310; // CSPlayerState
					constexpr auto m_flLastCollisionCeiling = 0x1314; // float
					constexpr auto m_flLastCollisionCeilingChangeTime = 0x1318; // float
					constexpr auto m_grenadeParameterStashTime = 0x1338; // GameTime_t
					constexpr auto m_bGrenadeParametersStashed = 0x133C; // bool
					constexpr auto m_angStashedShootAngles = 0x1340; // QAngle
					constexpr auto m_vecStashedGrenadeThrowPosition = 0x134C; // Vector
					constexpr auto m_vecStashedVelocity = 0x1358; // Vector
					constexpr auto m_angShootAngleHistory = 0x1364; // QAngle[2]
					constexpr auto m_vecThrowPositionHistory = 0x137C; // Vector[2]
					constexpr auto m_vecVelocityHistory = 0x1394; // Vector[2]
					constexpr auto m_thirdPersonHeading = 0x13B0; // QAngle
					constexpr auto m_flSlopeDropOffset = 0x13C8; // float
					constexpr auto m_flSlopeDropHeight = 0x13D8; // float
					constexpr auto m_vHeadConstraintOffset = 0x13E8; // Vector
					constexpr auto m_bIsScoped = 0x1400; // bool
					constexpr auto m_bIsWalking = 0x1401; // bool
					constexpr auto m_bResumeZoom = 0x1402; // bool
					constexpr auto m_iPlayerState = 0x1404; // CSPlayerState
					constexpr auto m_bIsDefusing = 0x1408; // bool
					constexpr auto m_bIsGrabbingHostage = 0x1409; // bool
					constexpr auto m_iBlockingUseActionInProgress = 0x140C; // CSPlayerBlockingUseAction_t
					constexpr auto m_bIsRescuing = 0x1410; // bool
					constexpr auto m_fImmuneToGunGameDamageTime = 0x1414; // GameTime_t
					constexpr auto m_fImmuneToGunGameDamageTimeLast = 0x1418; // GameTime_t
					constexpr auto m_bGunGameImmunity = 0x141C; // bool
					constexpr auto m_GunGameImmunityColor = 0x141D; // Color
					constexpr auto m_bHasMovedSinceSpawn = 0x1421; // bool
					constexpr auto m_fMolotovUseTime = 0x1424; // float
					constexpr auto m_fMolotovDamageTime = 0x1428; // float
					constexpr auto m_nWhichBombZone = 0x142C; // int32_t
					constexpr auto m_bInNoDefuseArea = 0x1430; // bool
					constexpr auto m_iThrowGrenadeCounter = 0x1434; // int32_t
					constexpr auto m_bWaitForNoAttack = 0x1438; // bool
					constexpr auto m_flGuardianTooFarDistFrac = 0x143C; // float
					constexpr auto m_flDetectedByEnemySensorTime = 0x1440; // GameTime_t
					constexpr auto m_flNextGuardianTooFarWarning = 0x1444; // float
					constexpr auto m_bSuppressGuardianTooFarWarningAudio = 0x1448; // bool
					constexpr auto m_bKilledByTaser = 0x1449; // bool
					constexpr auto m_iMoveState = 0x144C; // int32_t
					constexpr auto m_bCanMoveDuringFreezePeriod = 0x1450; // bool
					constexpr auto m_flLowerBodyYawTarget = 0x1454; // float
					constexpr auto m_bStrafing = 0x1458; // bool
					constexpr auto m_flLastSpawnTimeIndex = 0x145C; // GameTime_t
					constexpr auto m_flEmitSoundTime = 0x1460; // GameTime_t
					constexpr auto m_iAddonBits = 0x1464; // int32_t
					constexpr auto m_iPrimaryAddon = 0x1468; // int32_t
					constexpr auto m_iSecondaryAddon = 0x146C; // int32_t
					constexpr auto m_iProgressBarDuration = 0x1470; // int32_t
					constexpr auto m_flProgressBarStartTime = 0x1474; // float
					constexpr auto m_iDirection = 0x1478; // int32_t
					constexpr auto m_iShotsFired = 0x147C; // int32_t
					constexpr auto m_bNightVisionOn = 0x1480; // bool
					constexpr auto m_bHasNightVision = 0x1481; // bool
					constexpr auto m_flVelocityModifier = 0x1484; // float
					constexpr auto m_flHitHeading = 0x1488; // float
					constexpr auto m_nHitBodyPart = 0x148C; // int32_t
					constexpr auto m_iStartAccount = 0x1490; // int32_t
					constexpr auto m_vecIntroStartEyePosition = 0x1494; // Vector
					constexpr auto m_vecIntroStartPlayerForward = 0x14A0; // Vector
					constexpr auto m_flClientDeathTime = 0x14AC; // GameTime_t
					constexpr auto m_flNightVisionAlpha = 0x14B0; // float
					constexpr auto m_bScreenTearFrameCaptured = 0x14B4; // bool
					constexpr auto m_flFlashBangTime = 0x14B8; // float
					constexpr auto m_flFlashScreenshotAlpha = 0x14BC; // float
					constexpr auto m_flFlashOverlayAlpha = 0x14C0; // float
					constexpr auto m_bFlashBuildUp = 0x14C4; // bool
					constexpr auto m_bFlashDspHasBeenCleared = 0x14C5; // bool
					constexpr auto m_bFlashScreenshotHasBeenGrabbed = 0x14C6; // bool
					constexpr auto m_flFlashMaxAlpha = 0x14C8; // float
					constexpr auto m_flFlashDuration = 0x14CC; // float
					constexpr auto m_lastStandingPos = 0x14D0; // Vector
					constexpr auto m_vecLastMuzzleFlashPos = 0x14DC; // Vector
					constexpr auto m_angLastMuzzleFlashAngle = 0x14E8; // QAngle
					constexpr auto m_hMuzzleFlashShape = 0x14F4; // CHandle<C_BaseEntity>
					constexpr auto m_iHealthBarRenderMaskIndex = 0x14F8; // int32_t
					constexpr auto m_flHealthFadeValue = 0x14FC; // float
					constexpr auto m_flHealthFadeAlpha = 0x1500; // float
					constexpr auto m_nMyCollisionGroup = 0x1504; // int32_t
					constexpr auto m_ignoreLadderJumpTime = 0x1508; // float
					constexpr auto m_ladderSurpressionTimer = 0x1510; // CountdownTimer
					constexpr auto m_lastLadderNormal = 0x1528; // Vector
					constexpr auto m_lastLadderPos = 0x1534; // Vector
					constexpr auto m_flDeathCCWeight = 0x1548; // float
					constexpr auto m_bOldIsScoped = 0x154C; // bool
					constexpr auto m_flPrevRoundEndTime = 0x1550; // float
					constexpr auto m_flPrevMatchEndTime = 0x1554; // float
					constexpr auto m_unCurrentEquipmentValue = 0x1558; // uint16_t
					constexpr auto m_unRoundStartEquipmentValue = 0x155A; // uint16_t
					constexpr auto m_unFreezetimeEndEquipmentValue = 0x155C; // uint16_t
					constexpr auto m_vecThirdPersonViewPositionOverride = 0x1560; // Vector
					constexpr auto m_nHeavyAssaultSuitCooldownRemaining = 0x156C; // int32_t
					constexpr auto m_ArmorValue = 0x1570; // int32_t
					constexpr auto m_angEyeAngles = 0x1578; // QAngle
					constexpr auto m_fNextThinkPushAway = 0x1590; // float
					constexpr auto m_bShouldAutobuyDMWeapons = 0x1594; // bool
					constexpr auto m_bShouldAutobuyNow = 0x1595; // bool
					constexpr auto m_bHud_MiniScoreHidden = 0x1596; // bool
					constexpr auto m_bHud_RadarHidden = 0x1597; // bool
					constexpr auto m_nLastKillerIndex = 0x1598; // CEntityIndex
					constexpr auto m_nLastConcurrentKilled = 0x159C; // int32_t
					constexpr auto m_nDeathCamMusic = 0x15A0; // int32_t
					constexpr auto m_iIDEntIndex = 0x15A4; // CEntityIndex
					constexpr auto m_delayTargetIDTimer = 0x15A8; // CountdownTimer
					constexpr auto m_iTargetedWeaponEntIndex = 0x15C0; // CEntityIndex
					constexpr auto m_iOldIDEntIndex = 0x15C4; // CEntityIndex
					constexpr auto m_holdTargetIDTimer = 0x15C8; // CountdownTimer
					constexpr auto m_flCurrentMusicStartTime = 0x15E4; // float
					constexpr auto m_flMusicRoundStartTime = 0x15E8; // float
					constexpr auto m_bDeferStartMusicOnWarmup = 0x15EC; // bool
					constexpr auto m_cycleLatch = 0x15F0; // int32_t
					constexpr auto m_serverIntendedCycle = 0x15F4; // float
					constexpr auto m_vecPlayerPatchEconIndices = 0x15F8; // uint32_t[5]
					constexpr auto m_bHideTargetID = 0x1614; // bool
					constexpr auto m_flLastSmokeOverlayAlpha = 0x1618; // float
					constexpr auto m_flLastSmokeAge = 0x161C; // float
					constexpr auto m_vLastSmokeOverlayColor = 0x1620; // Vector
					constexpr auto m_nPlayerSmokedFx = 0x162C; // ParticleIndex_t
					constexpr auto m_nPlayerInfernoBodyFx = 0x1630; // ParticleIndex_t
					constexpr auto m_nPlayerInfernoFootFx = 0x1634; // ParticleIndex_t
					constexpr auto m_flNextMagDropTime = 0x1638; // float
					constexpr auto m_nLastMagDropAttachmentIndex = 0x163C; // int32_t
					constexpr auto m_vecBulletHitModels = 0x1640; // CUtlVector<C_BulletHitModel*>
					constexpr auto m_vecPickupModelSlerpers = 0x1658; // CUtlVector<C_PickUpModelSlerper*>
					constexpr auto m_vecLastAliveLocalVelocity = 0x1670; // Vector
					constexpr auto m_entitySpottedState = 0x1698; // EntitySpottedState_t
					constexpr auto m_nSurvivalTeamNumber = 0x16B0; // int32_t
					constexpr auto m_bGuardianShouldSprayCustomXMark = 0x16B4; // bool
					constexpr auto m_bHasDeathInfo = 0x16B5; // bool
					constexpr auto m_flDeathInfoTime = 0x16B8; // float
					constexpr auto m_vecDeathInfoOrigin = 0x16BC; // Vector
					constexpr auto m_bKilledByHeadshot = 0x16C8; // bool
					constexpr auto m_hOriginalController = 0x16CC; // CHandle<CCSPlayerController>
				} // namespace csplayer_pawn_base

				namespace csobserver_pawn
				{
					constexpr auto h_detect_parent_change = 0x16b0;
				} // namespace csobserver_pawn

				namespace csplayer_pawn
				{
					constexpr auto bullet_services_ptr = 0x16b0;
					constexpr auto hostage_services_ptr = 0x16b8;
					constexpr auto buy_services_ptr = 0x16c0;
					constexpr auto glow_services_ptr = 0x16c8;
					constexpr auto action_tracking_services_ptr = 0x16d0;
					constexpr auto health_shot_boost_expiration_time = 0x16d8;
					constexpr auto last_fired_weapon_time = 0x16dc;
					constexpr auto has_female_voice = 0x16e0;
					constexpr auto landseconds = 0x16e4;
					constexpr auto old_fall_velocity = 0x16e8;
					constexpr auto last_place_name_arr = 0x16ec;
					constexpr auto prev_defuser = 0x16fe;
					constexpr auto prev_helmet = 0x16ff;
					constexpr auto prev_armor_val = 0x1700;
					constexpr auto prev_grenade_ammo_count = 0x1704;
					constexpr auto un_previous_weapon_hash = 0x1708;
					constexpr auto un_weapon_hash = 0x170c;
					constexpr auto in_buy_zone = 0x1710;
					constexpr auto previously_in_buy_zone = 0x1711;
					constexpr auto aim_punch_angle = 0x1714;
					constexpr auto aim_punch_angle_vel = 0x1720;
					constexpr auto aim_punch_tick_base = 0x172c;
					constexpr auto aim_punch_tick_fraction = 0x1730;
					constexpr auto aim_punch_cache = 0x1738;
					constexpr auto in_landing = 0x1758;
					constexpr auto landing_time = 0x175c;
					constexpr auto in_hostage_rescue_zone = 0x1760;
					constexpr auto in_bomb_zone = 0x1761;
					constexpr auto is_buy_menu_open = 0x1762;
					constexpr auto time_of_last_injury = 0x1764;
					constexpr auto next_spray_decal_time = 0x1768;
					constexpr auto retakes_offering = 0x1880;
					constexpr auto retakes_offering_card = 0x1884;
					constexpr auto retakes_has_defuse_kit = 0x1888;
					constexpr auto retakes_mvplast_round = 0x1889;
					constexpr auto retakes_mvpboost_item = 0x188c;
					constexpr auto retakes_mvpboost_extra_utility = 0x1890;
					constexpr auto need_to_re_apply_gloves = 0x18b0;
					constexpr auto econ_gloves = 0x18b8;
					constexpr auto must_sync_ragdoll_state = 0x1d00;
					constexpr auto ragdoll_damage_bone = 0x1d04;
					constexpr auto v_ragdoll_damage_force = 0x1d08;
					constexpr auto v_ragdoll_damage_position = 0x1d14;
					constexpr auto ragdoll_damage_weapon_name_arr = 0x1d20;
					constexpr auto ragdoll_damage_headshot = 0x1d60;
					constexpr auto v_ragdoll_server_origin = 0x1d64;
					constexpr auto last_head_bone_transform_is_valid = 0x2368;
					constexpr auto last_land_time = 0x236c;
					constexpr auto on_ground_last_tick = 0x2370;
					constexpr auto q_death_eye_angles = 0x238c;
					constexpr auto skip_one_head_constraint_update = 0x2398;
				} // namespace csplayer_pawn

				namespace hostage
				{
					constexpr auto entity_spotted_state = 0x10a8;
					constexpr auto leader = 0x10c0;
					constexpr auto reuse_timer = 0x10c8;
					constexpr auto vel = 0x10e0;
					constexpr auto is_rescued = 0x10ec;
					constexpr auto jumped_this_frame = 0x10ed;
					constexpr auto hostage_state = 0x10f0;
					constexpr auto hands_have_been_cut = 0x10f4;
					constexpr auto h_hostage_grabber = 0x10f8;
					constexpr auto last_grab_time = 0x10fc;
					constexpr auto vec_grabbed_pos = 0x1100;
					constexpr auto rescue_start_time = 0x110c;
					constexpr auto grab_success_time = 0x1110;
					constexpr auto drop_start_time = 0x1114;
					constexpr auto dead_or_rescued_time = 0x1118;
					constexpr auto blink_timer = 0x1120;
					constexpr auto look_at = 0x1138;
					constexpr auto look_around_timer = 0x1148;
					constexpr auto is_init = 0x1160;
					constexpr auto eye_attachment = 0x1161;
					constexpr auto chest_attachment = 0x1162;
					constexpr auto prediction_owner_ptr = 0x1168;
					constexpr auto newest_alpha_think_time = 0x1170;
				} // namespace hostage

				namespace csgo_preview_player
				{
					constexpr auto animgraph = 0x23a0;
					constexpr auto animgraph_character_mode_string = 0x23a8;
					constexpr auto initial_model_scale = 0x23b0;
				} // namespace csgo_preview_player

			} // namespace client

			namespace engine2
			{
				namespace centity_identity
				{
					constexpr auto name_stringable_index = 0x14;
					constexpr auto name = 0x18;
					constexpr auto designer_name = 0x20;
					constexpr auto flags = 0x30;
					constexpr auto world_group_id = 0x38;
					constexpr auto data_object_types = 0x3c;
					constexpr auto path_index = 0x40;
					constexpr auto prev_ptr = 0x58;
					constexpr auto next_ptr = 0x60;
					constexpr auto prev_by_class_ptr = 0x68;
					constexpr auto next_by_class_ptr = 0x70;
				} // namespace centity_identity

				namespace centity_instance
				{
					constexpr auto isz_private_vscripts = 0x8;
					constexpr auto entity_ptr = 0x10;
					constexpr auto cscript_component_ptr = 0x28;
				} // namespace centity_instance

				namespace cscript_component
				{
					constexpr auto script_class_name = 0x30;
				} // namespace cscript_component

			} // namespace engine2

			namespace particles
			{
			} // namespace particles

			namespace server
			{
				namespace centity_identity
				{
					constexpr auto name_stringable_index = 0x14;
					constexpr auto name = 0x18;
					constexpr auto designer_name = 0x20;
					constexpr auto flags = 0x30;
					constexpr auto world_group_id = 0x38;
					constexpr auto data_object_types = 0x3c;
					constexpr auto path_index = 0x40;
					constexpr auto prev_ptr = 0x58;
					constexpr auto next_ptr = 0x60;
					constexpr auto prev_by_class_ptr = 0x68;
					constexpr auto next_by_class_ptr = 0x70;
				} // namespace centity_identity

				namespace centity_instance
				{
					constexpr auto isz_private_vscripts = 0x8;
					constexpr auto entity_ptr = 0x10;
					constexpr auto cscript_component_ptr = 0x28;
				} // namespace centity_instance

				namespace cscript_component
				{
					constexpr auto script_class_name = 0x30;
				} // namespace cscript_component

				namespace cbody_component
				{
					constexpr auto scene_node_ptr = 0x8;
					constexpr auto _m_p_chain_entity = 0x20;
				} // namespace cbody_component

				namespace cgame_scene_node_handle
				{
					constexpr auto h_owner = 0x8;
					constexpr auto name = 0xc;
				} // namespace cgame_scene_node_handle

				namespace chitbox_component
				{
					constexpr auto bv_disabled_hit_groups_arr = 0x24;
				} // namespace chitbox_component

				namespace crender_component
				{
					constexpr auto _m_p_chain_entity = 0x10;
					constexpr auto is_rendering_with_view_models = 0x50;
					constexpr auto splitscreen_flags = 0x54;
					constexpr auto enable_rendering = 0x60;
					constexpr auto interpolation_ready_to_draw = 0xb0;
				} // namespace crender_component

				namespace cbuoyancy_helper
				{
					constexpr auto fluid_density = 0x18;
				} // namespace cbuoyancy_helper

				namespace view_angle_server_change_t
				{
					constexpr auto n_type = 0x30;
					constexpr auto q_angle = 0x34;
					constexpr auto n_index = 0x40;
				} // namespace view_angle_server_change_t

				namespace audioparams_t
				{
					constexpr auto local_sound_arr = 0x8;
					constexpr auto soundscape_index = 0x68;
					constexpr auto local_bits = 0x6c;
					constexpr auto soundscape_entity_list_index = 0x70;
					constexpr auto sound_event_hash = 0x74;
				} // namespace audioparams_t

				namespace cplayer_movement_services
				{
					constexpr auto impulse = 0x40;
					constexpr auto buttons = 0x48;
					constexpr auto queued_button_down_mask = 0x68;
					constexpr auto queued_button_change_mask = 0x70;
					constexpr auto button_double_pressed = 0x78;
					constexpr auto button_pressed_cmd_number_arr = 0x80;
					constexpr auto last_command_number_processed = 0x180;
					constexpr auto toggle_button_down_mask = 0x188;
					constexpr auto maxspeed = 0x190;
					constexpr auto arr_force_subtick_move_when_arr = 0x194;
					constexpr auto forward_move = 0x1a4;
					constexpr auto left_move = 0x1a8;
					constexpr auto up_move = 0x1ac;
					constexpr auto vec_last_movement_impulses = 0x1b0;
					constexpr auto vec_old_view_angles = 0x1bc;
				} // namespace cplayer_movement_services

				namespace cplayer_observer_services
				{
					constexpr auto observer_mode = 0x40;
					constexpr auto h_observer_target = 0x44;
					constexpr auto observer_last_mode = 0x48;
					constexpr auto forced_observer_mode = 0x4c;
				} // namespace cplayer_observer_services

				namespace cplayer_weapon_services
				{
					constexpr auto allow_switch_to_no_weapon = 0x40;
					constexpr auto h_my_weapons = 0x48;
					constexpr auto h_active_weapon = 0x60;
					constexpr auto h_last_weapon = 0x64;
					constexpr auto ammo_arr = 0x68;
					constexpr auto prevent_weapon_pickup = 0xa8;
				} // namespace cplayer_weapon_services

				namespace cgame_scene_node
				{
					constexpr auto node_to_world = 0x10;
					constexpr auto owner_ptr = 0x30;
					constexpr auto parent_ptr = 0x38;
					constexpr auto child_ptr = 0x40;
					constexpr auto next_sibling_ptr = 0x48;
					constexpr auto h_parent = 0x70;
					constexpr auto vec_origin = 0x80;
					constexpr auto ang_rotation = 0xb8;
					constexpr auto scale = 0xc4;
					constexpr auto vec_abs_origin = 0xC8;
					constexpr auto ang_abs_rotation = 0xd4;
					constexpr auto abs_scale = 0xe0;
					constexpr auto parent_attachment_or_bone = 0xe4;
					constexpr auto debug_abs_origin_changes = 0xe6;
					constexpr auto dormant = 0xe7;
					constexpr auto force_parent_to_be_networked = 0xe8;
					constexpr auto dirty_hierarchy = 0xec;
					constexpr auto dirty_bone_merge_info = 0xec;
					constexpr auto networked_position_changed = 0xec;
					constexpr auto networked_angles_changed = 0xec;
					constexpr auto networked_scale_changed = 0xec;
					constexpr auto will_be_calling_post_data_update = 0xec;
					constexpr auto notify_bone_transforms_changed = 0xec;
					constexpr auto bone_merge_flex = 0xec;
					constexpr auto latch_abs_origin = 0xec;
					constexpr auto dirty_bone_merge_bone_to_root = 0xec;
					constexpr auto hierarchical_depth = 0xeb;
					constexpr auto hierarchy_type = 0xec;
					constexpr auto do_not_set_anim_time_in_invalidate_physics_count = 0xed;
					constexpr auto name = 0xf0;
					constexpr auto hierarchy_attach_name = 0x130;
					constexpr auto zoffset = 0x134;
					constexpr auto v_render_origin = 0x138;
				} // namespace cgame_scene_node

				namespace entity_render_attribute_t
				{
					constexpr auto id = 0x30;
					constexpr auto values = 0x34;
				} // namespace entity_render_attribute_t

				namespace active_model_config_t
				{
					constexpr auto handle = 0x28;
					constexpr auto name = 0x30;
					constexpr auto associated_entities = 0x38;
					constexpr auto associated_entity_names = 0x50;
				} // namespace active_model_config_t

				namespace cmodel_state
				{
					constexpr auto h_model = 0xa0;
					constexpr auto model_name = 0xa8;
					constexpr auto client_cloth_creation_suppressed = 0xe8;
					constexpr auto mesh_group_mask = 0x180;
					constexpr auto ideal_motion_type = 0x222;
					constexpr auto force_lod = 0x223;
					constexpr auto cloth_update_flags = 0x224;
				} // namespace cmodel_state

				namespace cskeleton_instance
				{
					constexpr auto model_state = 0x160;
					constexpr auto is_animation_enabled = 0x390;
					constexpr auto use_parent_render_bounds = 0x391;
					constexpr auto disable_solid_collisions_for_hierarchy = 0x392;
					constexpr auto dirty_motion_type = 0x396;
					constexpr auto is_generating_latched_parent_space_state = 0x396;
					constexpr auto material_group = 0x394;
					constexpr auto hitbox_set = 0x398;
				} // namespace cskeleton_instance

				namespace clight_component
				{
					constexpr auto _m_p_chain_entity = 0x48;
					constexpr auto color = 0x85;
					constexpr auto secondary_color = 0x89;
					constexpr auto brightness = 0x90;
					constexpr auto brightness_scale = 0x94;
					constexpr auto brightness_mult = 0x98;
					constexpr auto range = 0x9c;
					constexpr auto falloff = 0xa0;
					constexpr auto attenuation0 = 0xa4;
					constexpr auto attenuation1 = 0xa8;
					constexpr auto attenuation2 = 0xac;
					constexpr auto theta = 0xb0;
					constexpr auto phi = 0xb4;
					constexpr auto h_light_cookie = 0xb8;
					constexpr auto cascades = 0xc0;
					constexpr auto cast_shadows = 0xc4;
					constexpr auto shadow_width = 0xc8;
					constexpr auto shadow_height = 0xcc;
					constexpr auto render_diffuse = 0xd0;
					constexpr auto render_specular = 0xd4;
					constexpr auto render_transmissive = 0xd8;
					constexpr auto ortho_light_width = 0xdc;
					constexpr auto ortho_light_height = 0xe0;
					constexpr auto style = 0xe4;
					constexpr auto pattern = 0xe8;
					constexpr auto cascade_render_static_objects = 0xf0;
					constexpr auto shadow_cascade_cross_fade = 0xf4;
					constexpr auto shadow_cascade_distance_fade = 0xf8;
					constexpr auto shadow_cascade_distance0 = 0xfc;
					constexpr auto shadow_cascade_distance1 = 0x100;
					constexpr auto shadow_cascade_distance2 = 0x104;
					constexpr auto shadow_cascade_distance3 = 0x108;
					constexpr auto shadow_cascade_resolution0 = 0x10c;
					constexpr auto shadow_cascade_resolution1 = 0x110;
					constexpr auto shadow_cascade_resolution2 = 0x114;
					constexpr auto shadow_cascade_resolution3 = 0x118;
					constexpr auto uses_baked_shadowing = 0x11c;
					constexpr auto shadow_priority = 0x120;
					constexpr auto baked_shadow_index = 0x124;
					constexpr auto render_to_cubemaps = 0x128;
					constexpr auto direct_light = 0x12c;
					constexpr auto indirect_light = 0x130;
					constexpr auto fade_min_dist = 0x134;
					constexpr auto fade_max_dist = 0x138;
					constexpr auto shadow_fade_min_dist = 0x13c;
					constexpr auto shadow_fade_max_dist = 0x140;
					constexpr auto enabled = 0x144;
					constexpr auto flicker = 0x145;
					constexpr auto precomputed_fields_valid = 0x146;
					constexpr auto v_precomputed_bounds_mins = 0x148;
					constexpr auto v_precomputed_bounds_maxs = 0x154;
					constexpr auto v_precomputed_obborigin = 0x160;
					constexpr auto v_precomputed_obbangles = 0x16c;
					constexpr auto v_precomputed_obbextent = 0x178;
					constexpr auto precomputed_max_range = 0x184;
					constexpr auto fog_lighting_mode = 0x188;
					constexpr auto fog_contribution_stength = 0x18c;
					constexpr auto near_clip_plane = 0x190;
					constexpr auto sky_color = 0x194;
					constexpr auto sky_intensity = 0x198;
					constexpr auto sky_ambient_bounce = 0x19c;
					constexpr auto use_secondary_color = 0x1a0;
					constexpr auto mixed_shadows = 0x1a1;
					constexpr auto light_style_start_time = 0x1a4;
					constexpr auto capsule_length = 0x1a8;
					constexpr auto min_roughness = 0x1ac;
					constexpr auto pvs_modify_entity = 0x1c0;
				} // namespace clight_component

				namespace fogplayerparams_t
				{
					constexpr auto h_ctrl = 0x8;
					constexpr auto transition_time = 0xc;
					constexpr auto old_color = 0x10;
					constexpr auto old_start = 0x14;
					constexpr auto old_end = 0x18;
					constexpr auto old_max_density = 0x1c;
					constexpr auto old_hdrcolor_scale = 0x20;
					constexpr auto old_far_z = 0x24;
					constexpr auto new_color = 0x28;
					constexpr auto new_start = 0x2c;
					constexpr auto new_end = 0x30;
					constexpr auto new_max_density = 0x34;
					constexpr auto new_hdrcolor_scale = 0x38;
					constexpr auto new_far_z = 0x3c;
				} // namespace fogplayerparams_t

				namespace cbody_component_skeleton_instance
				{
					constexpr auto skeleton_instance = 0x50;
					constexpr auto _m_p_chain_entity = 0x450;
				} // namespace cbody_component_skeleton_instance

				namespace cbody_component_point
				{
					constexpr auto scene_node = 0x50;
					constexpr auto _m_p_chain_entity = 0x1a0;
				} // namespace cbody_component_point

				namespace cplayer_movement_services_humanoid
				{
					constexpr auto step_sound_time = 0x1d0;
					constexpr auto fall_velocity = 0x1d4;
					constexpr auto in_crouch = 0x1d8;
					constexpr auto crouch_state = 0x1dc;
					constexpr auto crouch_transition_start_time = 0x1e0;
					constexpr auto ducked = 0x1e4;
					constexpr auto ducking = 0x1e5;
					constexpr auto in_duck_jump = 0x1e6;
					constexpr auto ground_normal = 0x1e8;
					constexpr auto surface_friction = 0x1f4;
					constexpr auto surface_props = 0x1f8;
					constexpr auto stepside = 0x208;
					constexpr auto target_volume = 0x20c;
					constexpr auto vec_smoothed_velocity = 0x210;
				} // namespace cplayer_movement_services_humanoid

				namespace cnetworked_sequence_operation
				{
					constexpr auto h_sequence = 0x8;
					constexpr auto prev_cycle = 0xc;
					constexpr auto cycle = 0x10;
					constexpr auto weight = 0x14;
					constexpr auto sequence_change_networked = 0x1c;
					constexpr auto discontinuity = 0x1d;
					constexpr auto prev_cycle_from_discontinuity = 0x20;
					constexpr auto prev_cycle_for_anim_event_detection = 0x24;
				} // namespace cnetworked_sequence_operation

				namespace cbody_component_base_model_entity
				{
					constexpr auto _m_p_chain_entity = 0x480;
				} // namespace cbody_component_base_model_entity

				namespace canim_graph_networked_variables
				{
					constexpr auto pred_net_bool_variables = 0x8;
					constexpr auto pred_net_byte_variables = 0x20;
					constexpr auto pred_net_uint16_variables = 0x38;
					constexpr auto pred_net_int_variables = 0x50;
					constexpr auto pred_net_uint32_variables = 0x68;
					constexpr auto pred_net_uint64_variables = 0x80;
					constexpr auto pred_net_float_variables = 0x98;
					constexpr auto pred_net_vector_variables = 0xb0;
					constexpr auto pred_net_quaternion_variables = 0xc8;
					constexpr auto owner_only_pred_net_bool_variables = 0xe0;
					constexpr auto owner_only_pred_net_byte_variables = 0xf8;
					constexpr auto owner_only_pred_net_uint16_variables = 0x110;
					constexpr auto owner_only_pred_net_int_variables = 0x128;
					constexpr auto owner_only_pred_net_uint32_variables = 0x140;
					constexpr auto owner_only_pred_net_uint64_variables = 0x158;
					constexpr auto owner_only_pred_net_float_variables = 0x170;
					constexpr auto owner_only_pred_net_vector_variables = 0x188;
					constexpr auto owner_only_pred_net_quaternion_variables = 0x1a0;
					constexpr auto bool_variables_count = 0x1b8;
					constexpr auto owner_only_bool_variables_count = 0x1bc;
					constexpr auto random_seed_offset = 0x1c0;
					constexpr auto last_teleport_time = 0x1c4;
				} // namespace canim_graph_networked_variables

				namespace interval_timer
				{
					constexpr auto timestamp = 0x8;
					constexpr auto world_group_id = 0xc;
				} // namespace interval_timer

				namespace countdown_timer
				{
					constexpr auto duration = 0x8;
					constexpr auto timestamp = 0xc;
					constexpr auto timescale = 0x10;
					constexpr auto world_group_id = 0x14;
				} // namespace countdown_timer

				namespace engine_countdown_timer
				{
					constexpr auto duration = 0x8;
					constexpr auto timestamp = 0xc;
					constexpr auto timescale = 0x10;
				} // namespace engine_countdown_timer

				namespace ctimeline
				{
					constexpr auto values_arr = 0x10;
					constexpr auto value_counts_arr = 0x110;
					constexpr auto bucket_count = 0x210;
					constexpr auto interval = 0x214;
					constexpr auto final_value = 0x218;
					constexpr auto compression_type = 0x21c;
					constexpr auto stopped = 0x220;
				} // namespace ctimeline

				namespace cbase_anim_graph_controller
				{
					constexpr auto base_layer = 0x18;
					constexpr auto anim_graph_networked_vars = 0x40;
					constexpr auto sequence_finished = 0x218;
					constexpr auto last_event_cycle = 0x21c;
					constexpr auto last_event_anim_time = 0x220;
					constexpr auto playback_rate = 0x224;
					constexpr auto prev_anim_time = 0x22c;
					constexpr auto client_side_animation = 0x230;
					constexpr auto networked_animation_inputs_changed = 0x231;
					constexpr auto new_sequence_parity = 0x234;
					constexpr auto reset_events_parity = 0x238;
					constexpr auto anim_loop_mode = 0x23c;
					constexpr auto h_animation_update = 0x2dc;
				} // namespace cbase_anim_graph_controller

				namespace cbase_entity
				{
					constexpr auto cbody_component_ptr = 0x30;
					constexpr auto network_transmit_component = 0x38;
					constexpr auto a_think_functions = 0x228;
					constexpr auto current_think_context = 0x240;
					constexpr auto last_think_tick = 0x244;
					constexpr auto is_steady_state = 0x250;
					constexpr auto last_network_change = 0x258;
					constexpr auto response_contexts = 0x268;
					constexpr auto isz_response_context = 0x280;
					constexpr auto health = 0x2a8;
					constexpr auto max_health = 0x2ac;
					constexpr auto life_state = 0x2b0;
					constexpr auto damage_accumulator = 0x2b4;
					constexpr auto takes_damage = 0x2b8;
					constexpr auto take_damage_flags = 0x2bc;
					constexpr auto move_collide = 0x2c1;
					constexpr auto move_type = 0x2c2;
					constexpr auto water_touch = 0x2c3;
					constexpr auto slime_touch = 0x2c4;
					constexpr auto restore_in_hierarchy = 0x2c5;
					constexpr auto target = 0x2c8;
					constexpr auto move_done_time = 0x2d0;
					constexpr auto h_damage_filter = 0x2d4;
					constexpr auto isz_damage_filter_name = 0x2d8;
					constexpr auto subclass_id = 0x2e0;
					constexpr auto anim_time = 0x2f0;
					constexpr auto simulation_time = 0x2f4;
					constexpr auto create_time = 0x2f8;
					constexpr auto client_side_ragdoll = 0x2fc;
					constexpr auto ub_interpolation_frame = 0x2fd;
					constexpr auto v_prev_vphysics_update_pos = 0x300;
					constexpr auto team_num = 0x30c;
					constexpr auto globalname = 0x310;
					constexpr auto sent_to_clients = 0x318;
					constexpr auto speed = 0x31c;
					constexpr auto s_unique_hammer_id = 0x320;
					constexpr auto spawnflags = 0x328;
					constexpr auto next_think_tick = 0x32c;
					constexpr auto simulation_tick = 0x330;
					constexpr auto on_killed = 0x338;
					constexpr auto flags = 0x360;
					constexpr auto vec_abs_velocity = 0x364;
					constexpr auto vec_velocity = 0x370;
					constexpr auto vec_base_velocity = 0x3a0;
					constexpr auto push_enum_count = 0x3ac;
					constexpr auto collision_ptr = 0x3b0;
					constexpr auto h_effect_entity = 0x3b8;
					constexpr auto h_owner_entity = 0x3bc;
					constexpr auto effects = 0x3c0;
					constexpr auto h_ground_entity = 0x3c4;
					constexpr auto friction = 0x3c8;
					constexpr auto elasticity = 0x3cc;
					constexpr auto gravity_scale = 0x3d0;
					constexpr auto time_scale = 0x3d4;
					constexpr auto water_level = 0x3d8;
					constexpr auto simulated_every_tick = 0x3dc;
					constexpr auto animated_every_tick = 0x3dd;
					constexpr auto disable_low_violence = 0x3de;
					constexpr auto water_type = 0x3df;
					constexpr auto eflags = 0x3e0;
					constexpr auto on_user1 = 0x3e8;
					constexpr auto on_user2 = 0x410;
					constexpr auto on_user3 = 0x438;
					constexpr auto on_user4 = 0x460;
					constexpr auto initial_team_num = 0x488;
					constexpr auto nav_ignore_until_time = 0x48c;
					constexpr auto vec_ang_velocity = 0x490;
					constexpr auto network_quantize_origin_and_angles = 0x49c;
					constexpr auto lag_compensate = 0x49d;
					constexpr auto overridden_friction = 0x4a0;
					constexpr auto blocker = 0x4a4;
					constexpr auto local_time = 0x4a8;
					constexpr auto vphysics_update_local_time = 0x4ac;
				} // namespace cbase_entity

				namespace ccolor_correction
				{
					constexpr auto fade_in_duration = 0x4b0;
					constexpr auto fade_out_duration = 0x4b4;
					constexpr auto start_fade_in_weight = 0x4b8;
					constexpr auto start_fade_out_weight = 0x4bc;
					constexpr auto time_start_fade_in = 0x4c0;
					constexpr auto time_start_fade_out = 0x4c4;
					constexpr auto max_weight = 0x4c8;
					constexpr auto start_disabled = 0x4cc;
					constexpr auto enabled = 0x4cd;
					constexpr auto master = 0x4ce;
					constexpr auto client_side = 0x4cf;
					constexpr auto exclusive = 0x4d0;
					constexpr auto min_falloff = 0x4d4;
					constexpr auto max_falloff = 0x4d8;
					constexpr auto cur_weight = 0x4dc;
					constexpr auto netlookup_filename_arr = 0x4e0;
					constexpr auto lookup_filename = 0x6e0;
				} // namespace ccolor_correction

				namespace centity_flame
				{
					constexpr auto h_ent_attached = 0x4b0;
					constexpr auto cheap_effect = 0x4b4;
					constexpr auto size = 0x4b8;
					constexpr auto use_hitboxes = 0x4bc;
					constexpr auto num_hitbox_fires = 0x4c0;
					constexpr auto hitbox_fire_scale = 0x4c4;
					constexpr auto lifetime = 0x4c8;
					constexpr auto h_attacker = 0x4cc;
					constexpr auto danger_sound = 0x4d0;
					constexpr auto direct_damage_per_second = 0x4d4;
					constexpr auto custom_damage_type = 0x4d8;
				} // namespace centity_flame

				namespace cbase_filter
				{
					constexpr auto negated = 0x4b0;
					constexpr auto on_pass = 0x4b8;
					constexpr auto on_fail = 0x4e0;
				} // namespace cbase_filter

				namespace cfilter_multiple
				{
					constexpr auto filter_type = 0x508;
					constexpr auto filter_name_arr = 0x510;
					constexpr auto h_filter_arr = 0x560;
					constexpr auto filter_count = 0x588;
				} // namespace cfilter_multiple

				namespace cfilter_proximity
				{
					constexpr auto radius = 0x508;
				} // namespace cfilter_proximity

				namespace cfilter_class
				{
					constexpr auto filter_class = 0x508;
				} // namespace cfilter_class

				namespace cbase_fire
				{
					constexpr auto scale = 0x4b0;
					constexpr auto start_scale = 0x4b4;
					constexpr auto scale_time = 0x4b8;
					constexpr auto flags = 0x4bc;
				} // namespace cbase_fire

				namespace cfire_smoke
				{
					constexpr auto flame_model_index = 0x4c0;
					constexpr auto flame_from_above_model_index = 0x4c4;
				} // namespace cfire_smoke

				namespace cfish_pool
				{
					constexpr auto fish_count = 0x4c0;
					constexpr auto max_range = 0x4c4;
					constexpr auto swim_depth = 0x4c8;
					constexpr auto water_level = 0x4cc;
					constexpr auto is_dormant = 0x4d0;
					constexpr auto fishes = 0x4d8;
					constexpr auto vis_timer = 0x4f0;
				} // namespace cfish_pool

				namespace clogic_branch
				{
					constexpr auto in_value = 0x4b0;
					constexpr auto listeners = 0x4b8;
					constexpr auto on_true = 0x4d0;
					constexpr auto on_false = 0x4f8;
				} // namespace clogic_branch

				namespace clogic_distance_check
				{
					constexpr auto isz_entity_a = 0x4b0;
					constexpr auto isz_entity_b = 0x4b8;
					constexpr auto zone1_distance = 0x4c0;
					constexpr auto zone2_distance = 0x4c4;
					constexpr auto in_zone1 = 0x4c8;
					constexpr auto in_zone2 = 0x4f0;
					constexpr auto in_zone3 = 0x518;
				} // namespace clogic_distance_check

				namespace cpoint_prefab
				{
					constexpr auto target_map_name = 0x4b0;
					constexpr auto force_world_group_id = 0x4b8;
					constexpr auto associated_relay_target_name = 0x4c0;
					constexpr auto fixup_names = 0x4c8;
					constexpr auto load_dynamic = 0x4c9;
					constexpr auto associated_relay_entity = 0x4cc;
				} // namespace cpoint_prefab

				namespace cskybox_reference
				{
					constexpr auto world_group_id = 0x4b0;
					constexpr auto h_sky_camera = 0x4b4;
				} // namespace cskybox_reference

				namespace fogparams_t
				{
					constexpr auto dir_primary = 0x8;
					constexpr auto color_primary = 0x14;
					constexpr auto color_secondary = 0x18;
					constexpr auto color_primary_lerp_to = 0x1c;
					constexpr auto color_secondary_lerp_to = 0x20;
					constexpr auto start = 0x24;
					constexpr auto end = 0x28;
					constexpr auto farz = 0x2c;
					constexpr auto maxdensity = 0x30;
					constexpr auto exponent = 0x34;
					constexpr auto hdrcolor_scale = 0x38;
					constexpr auto skybox_fog_factor = 0x3c;
					constexpr auto skybox_fog_factor_lerp_to = 0x40;
					constexpr auto start_lerp_to = 0x44;
					constexpr auto end_lerp_to = 0x48;
					constexpr auto maxdensity_lerp_to = 0x4c;
					constexpr auto lerptime = 0x50;
					constexpr auto duration = 0x54;
					constexpr auto blendtobackground = 0x58;
					constexpr auto scattering = 0x5c;
					constexpr auto locallightscale = 0x60;
					constexpr auto enable = 0x64;
					constexpr auto blend = 0x65;
					constexpr auto no_reflection_fog = 0x66;
					constexpr auto padding = 0x67;
				} // namespace fogparams_t

				namespace cenv_soundscape
				{
					constexpr auto on_play = 0x4b0;
					constexpr auto radius = 0x4d8;
					constexpr auto soundscape_name = 0x4e0;
					constexpr auto sound_event_name = 0x4e8;
					constexpr auto override_with_event = 0x4f0;
					constexpr auto soundscape_index = 0x4f4;
					constexpr auto soundscape_entity_list_id = 0x4f8;
					constexpr auto sound_event_hash = 0x4fc;
					constexpr auto position_names_arr = 0x500;
					constexpr auto h_proxy_soundscape = 0x540;
					constexpr auto disabled = 0x544;
				} // namespace cenv_soundscape

				namespace cenv_soundscape_proxy
				{
					constexpr auto main_soundscape_name = 0x548;
				} // namespace cenv_soundscape_proxy

				namespace vphysics_collision_attribute_t
				{
					constexpr auto interacts_as = 0x8;
					constexpr auto interacts_with = 0x10;
					constexpr auto interacts_exclude = 0x18;
					constexpr auto entity_id = 0x20;
					constexpr auto owner_id = 0x24;
					constexpr auto hierarchy_id = 0x28;
					constexpr auto collision_group = 0x2a;
					constexpr auto collision_function_mask = 0x2b;
				} // namespace vphysics_collision_attribute_t

				namespace ccollision_property
				{
					constexpr auto collision_attribute = 0x10;
					constexpr auto vec_mins = 0x40;
					constexpr auto vec_maxs = 0x4c;
					constexpr auto us_solid_flags = 0x5a;
					constexpr auto solid_type = 0x5b;
					constexpr auto trigger_bloat = 0x5c;
					constexpr auto surround_type = 0x5d;
					constexpr auto collision_group = 0x5e;
					constexpr auto enable_physics = 0x5f;
					constexpr auto bounding_radius = 0x60;
					constexpr auto vec_specified_surrounding_mins = 0x64;
					constexpr auto vec_specified_surrounding_maxs = 0x70;
					constexpr auto vec_surrounding_maxs = 0x7c;
					constexpr auto vec_surrounding_mins = 0x88;
					constexpr auto v_capsule_center1 = 0x94;
					constexpr auto v_capsule_center2 = 0xa0;
					constexpr auto capsule_radius = 0xac;
				} // namespace ccollision_property

				namespace ceffect_data
				{
					constexpr auto v_origin = 0x8;
					constexpr auto v_start = 0x14;
					constexpr auto v_normal = 0x20;
					constexpr auto v_angles = 0x2c;
					constexpr auto h_entity = 0x38;
					constexpr auto h_other_entity = 0x3c;
					constexpr auto scale = 0x40;
					constexpr auto magnitude = 0x44;
					constexpr auto radius = 0x48;
					constexpr auto surface_prop = 0x4c;
					constexpr auto effect_index = 0x50;
					constexpr auto damage_type = 0x58;
					constexpr auto penetrate = 0x5c;
					constexpr auto material = 0x5e;
					constexpr auto hit_box = 0x60;
					constexpr auto color = 0x62;
					constexpr auto flags = 0x63;
					constexpr auto attachment_index = 0x64;
					constexpr auto attachment_name = 0x68;
					constexpr auto effect_name = 0x6c;
					constexpr auto explosion_type = 0x6e;
				} // namespace ceffect_data

				namespace cenv_detail_controller
				{
					constexpr auto fade_start_dist = 0x4b0;
					constexpr auto fade_end_dist = 0x4b4;
				} // namespace cenv_detail_controller

				namespace cenv_wind_shared
				{
					constexpr auto start_time = 0x8;
					constexpr auto wind_seed = 0xc;
					constexpr auto min_wind = 0x10;
					constexpr auto max_wind = 0x12;
					constexpr auto wind_radius = 0x14;
					constexpr auto min_gust = 0x18;
					constexpr auto max_gust = 0x1a;
					constexpr auto min_gust_delay = 0x1c;
					constexpr auto max_gust_delay = 0x20;
					constexpr auto gust_duration = 0x24;
					constexpr auto gust_dir_change = 0x28;
					constexpr auto location = 0x2c;
					constexpr auto isz_gust_sound = 0x38;
					constexpr auto wind_dir = 0x3c;
					constexpr auto wind_speed = 0x40;
					constexpr auto current_wind_vector = 0x44;
					constexpr auto current_sway_vector = 0x50;
					constexpr auto prev_sway_vector = 0x5c;
					constexpr auto initial_wind_dir = 0x68;
					constexpr auto initial_wind_speed = 0x6c;
					constexpr auto on_gust_start = 0x70;
					constexpr auto on_gust_end = 0x98;
					constexpr auto variation_time = 0xc0;
					constexpr auto sway_time = 0xc4;
					constexpr auto sim_time = 0xc8;
					constexpr auto switch_time = 0xcc;
					constexpr auto ave_wind_speed = 0xd0;
					constexpr auto gusting = 0xd4;
					constexpr auto wind_angle_variation = 0xd8;
					constexpr auto wind_speed_variation = 0xdc;
					constexpr auto ent_index = 0xe0;
				} // namespace cenv_wind_shared

				namespace cenv_wind_shared__wind_ave_event_t
				{
					constexpr auto start_wind_speed = 0x0;
					constexpr auto ave_wind_speed = 0x4;
				} // namespace cenv_wind_shared__wind_ave_event_t

				namespace cenv_wind_shared__wind_variation_event_t
				{
					constexpr auto wind_angle_variation = 0x0;
					constexpr auto wind_speed_variation = 0x4;
				} // namespace cenv_wind_shared__wind_variation_event_t

				namespace shard_model_desc_t
				{
					constexpr auto model_id = 0x8;
					constexpr auto h_material = 0x10;
					constexpr auto solid = 0x18;
					constexpr auto shatter_panel_mode = 0x19;
					constexpr auto vec_panel_size = 0x1c;
					constexpr auto vec_stress_position_a = 0x24;
					constexpr auto vec_stress_position_b = 0x2c;
					constexpr auto vec_panel_vertices = 0x38;
					constexpr auto glass_half_thickness = 0x50;
					constexpr auto has_parent = 0x54;
					constexpr auto parent_frozen = 0x55;
					constexpr auto surface_prop_string_token = 0x58;
				} // namespace shard_model_desc_t

				namespace cglow_property
				{
					constexpr auto glow_color = 0x8;
					constexpr auto glow_type = 0x30;
					constexpr auto glow_team = 0x34;
					constexpr auto glow_range = 0x38;
					constexpr auto glow_range_min = 0x3c;
					constexpr auto glow_color_override = 0x40;
					constexpr auto flashing = 0x44;
					constexpr auto glow_time = 0x48;
					constexpr auto glow_start_time = 0x4c;
					constexpr auto eligible_for_screen_highlight = 0x50;
					constexpr auto glowing = 0x51;
				} // namespace cglow_property

				namespace sky3dparams_t
				{
					constexpr auto scale = 0x8;
					constexpr auto origin = 0xc;
					constexpr auto b_clip3_dsky_box_near_to_world_far = 0x18;
					constexpr auto fl_clip3_dsky_box_near_to_world_far_offset = 0x1c;
					constexpr auto fog = 0x20;
					constexpr auto world_group_id = 0x88;
				} // namespace sky3dparams_t

				namespace cplayer_camera_services
				{
					constexpr auto vec_cs_view_punch_angle = 0x40;
					constexpr auto cs_view_punch_angle_tick = 0x4c;
					constexpr auto cs_view_punch_angle_tick_ratio = 0x50;
					constexpr auto player_fog = 0x58;
					constexpr auto h_color_correction_ctrl = 0x98;
					constexpr auto h_view_entity = 0x9c;
					constexpr auto h_tonemap_controller = 0xa0;
					constexpr auto audio = 0xa8;
					constexpr auto post_processing_volumes = 0x120;
					constexpr auto old_player_z = 0x138;
					constexpr auto old_player_view_offset_z = 0x13c;
					constexpr auto h_trigger_soundscape_list = 0x158;
				} // namespace cplayer_camera_services

				namespace csky_camera
				{
					constexpr auto skybox_data = 0x4b0;
					constexpr auto skybox_slot_token = 0x540;
					constexpr auto use_angles = 0x544;
					constexpr auto next_ptr = 0x548;
				} // namespace csky_camera

				namespace physics_ragdoll_pose_t
				{
					constexpr auto _m_p_chain_entity = 0x8;
					constexpr auto transforms = 0x30;
					constexpr auto h_owner = 0x48;
				} // namespace physics_ragdoll_pose_t

				namespace csound_opvar_set_point_base
				{
					constexpr auto disabled = 0x4b0;
					constexpr auto h_source = 0x4b4;
					constexpr auto isz_source_entity_name = 0x4c0;
					constexpr auto v_last_position = 0x518;
					constexpr auto isz_stack_name = 0x528;
					constexpr auto isz_operator_name = 0x530;
					constexpr auto isz_opvar_name = 0x538;
					constexpr auto opvar_index = 0x540;
					constexpr auto use_auto_compare = 0x544;
				} // namespace csound_opvar_set_point_base

				namespace csound_opvar_set_point_entity
				{
					constexpr auto on_enter = 0x548;
					constexpr auto on_exit = 0x570;
					constexpr auto auto_disable = 0x598;
					constexpr auto distance_min = 0x5dc;
					constexpr auto distance_max = 0x5e0;
					constexpr auto distance_map_min = 0x5e4;
					constexpr auto distance_map_max = 0x5e8;
					constexpr auto occlusion_radius = 0x5ec;
					constexpr auto occlusion_min = 0x5f0;
					constexpr auto occlusion_max = 0x5f4;
					constexpr auto val_set_on_disable = 0x5f8;
					constexpr auto set_value_on_disable = 0x5fc;
					constexpr auto simulation_mode = 0x600;
					constexpr auto visibility_samples = 0x604;
					constexpr auto v_dynamic_proxy_point = 0x608;
					constexpr auto dynamic_maximum_occlusion = 0x614;
					constexpr auto h_dynamic_entity = 0x618;
					constexpr auto isz_dynamic_entity_name = 0x620;
					constexpr auto pathing_distance_norm_factor = 0x628;
					constexpr auto v_pathing_source_pos = 0x62c;
					constexpr auto v_pathing_listener_pos = 0x638;
					constexpr auto pathing_source_index = 0x644;
				} // namespace csound_opvar_set_point_entity

				namespace csound_opvar_set_aabbentity
				{
					constexpr auto v_distance_inner_mins = 0x648;
					constexpr auto v_distance_inner_maxs = 0x654;
					constexpr auto v_distance_outer_mins = 0x660;
					constexpr auto v_distance_outer_maxs = 0x66c;
					constexpr auto aabbdirection = 0x678;
					constexpr auto v_inner_mins = 0x67c;
					constexpr auto v_inner_maxs = 0x688;
					constexpr auto v_outer_mins = 0x694;
					constexpr auto v_outer_maxs = 0x6a0;
				} // namespace csound_opvar_set_aabbentity

				namespace csound_opvar_set_path_corner_entity
				{
					constexpr auto dist_min_sqr = 0x660;
					constexpr auto dist_max_sqr = 0x664;
					constexpr auto isz_path_corner_entity_name = 0x668;
				} // namespace csound_opvar_set_path_corner_entity

				namespace csound_opvar_set_obbwind_entity
				{
					constexpr auto v_mins = 0x548;
					constexpr auto v_maxs = 0x554;
					constexpr auto v_distance_mins = 0x560;
					constexpr auto v_distance_maxs = 0x56c;
					constexpr auto wind_min = 0x578;
					constexpr auto wind_max = 0x57c;
					constexpr auto wind_map_min = 0x580;
					constexpr auto wind_map_max = 0x584;
				} // namespace csound_opvar_set_obbwind_entity

				namespace cattribute_list
				{
					constexpr auto attributes = 0x8;
					constexpr auto manager_ptr = 0x58;
				} // namespace cattribute_list

				namespace cecon_item_attribute
				{
					constexpr auto attribute_definition_index = 0x30;
					constexpr auto value = 0x34;
					constexpr auto initial_value = 0x38;
					constexpr auto refundable_currency = 0x3c;
					constexpr auto set_bonus = 0x40;
				} // namespace cecon_item_attribute

				namespace cattribute_manager
				{
					constexpr auto providers = 0x8;
					constexpr auto reapply_provision_parity = 0x20;
					constexpr auto h_outer = 0x24;
					constexpr auto prevent_loopback = 0x28;
					constexpr auto provider_type = 0x2c;
					constexpr auto cached_results = 0x30;
				} // namespace cattribute_manager

				namespace cattribute_manager_cached_attribute_float_t
				{
					constexpr auto fl_in = 0x0;
					constexpr auto i_attrib_hook = 0x8;
					constexpr auto fl_out = 0x10;
				} // namespace cattribute_manager_cached_attribute_float_t

				namespace cecon_item_view
				{
					constexpr auto item_definition_index = 0x38;
					constexpr auto entity_quality = 0x3c;
					constexpr auto entity_level = 0x40;
					constexpr auto item_id = 0x48;
					constexpr auto item_idhigh = 0x50;
					constexpr auto item_idlow = 0x54;
					constexpr auto account_id = 0x58;
					constexpr auto inventory_position = 0x5c;
					constexpr auto initialized = 0x68;
					constexpr auto attribute_list = 0x70;
					constexpr auto networked_dynamic_attributes = 0xd0;
					constexpr auto custom_name_arr = 0x130;
					constexpr auto custom_name_override_arr = 0x1d1;
				} // namespace cecon_item_view

				namespace entity_spotted_state_t
				{
					constexpr auto spotted = 0x8;
					constexpr auto spotted_by_mask_arr = 0xc;
				} // namespace entity_spotted_state_t

				namespace spawn_point
				{
					constexpr auto priority = 0x4b0;
					constexpr auto enabled = 0x4b4;
					constexpr auto type = 0x4b8;
				} // namespace spawn_point

				namespace spawn_point_coop_enemy
				{
					constexpr auto weapons_to_give = 0x4c0;
					constexpr auto player_model_to_use = 0x4c8;
					constexpr auto armor_to_spawn_with = 0x4d0;
					constexpr auto default_behavior = 0x4d4;
					constexpr auto bot_difficulty = 0x4d8;
					constexpr auto is_agressive = 0x4dc;
					constexpr auto start_asleep = 0x4dd;
					constexpr auto hide_radius = 0x4e0;
					constexpr auto behavior_tree_file = 0x4f0;
				} // namespace spawn_point_coop_enemy

				namespace ccsgame_rules_proxy
				{
					constexpr auto game_rules_ptr = 0x4b0;
				} // namespace ccsgame_rules_proxy

				namespace cretake_game_rules
				{
					constexpr auto match_seed = 0xf8;
					constexpr auto blockers_present = 0xfc;
					constexpr auto round_in_progress = 0xfd;
					constexpr auto first_second_half_round = 0x100;
					constexpr auto bomb_site = 0x104;
				} // namespace cretake_game_rules

				namespace ccsgame_mode_rules
				{
					constexpr auto _m_p_chain_entity = 0x8;
				} // namespace ccsgame_mode_rules

				namespace ccsgame_mode_rules_deathmatch
				{
					constexpr auto first_think = 0x30;
					constexpr auto first_think_after_connected = 0x31;
					constexpr auto dmbonus_start_time = 0x34;
					constexpr auto dmbonus_time_length = 0x38;
					constexpr auto dmbonus_weapon_loadout_slot = 0x3c;
				} // namespace ccsgame_mode_rules_deathmatch

				namespace ccsgame_rules
				{
					constexpr auto _m_p_chain_entity = 0x98;
					constexpr auto coop_mission_manager = 0xc0;
					constexpr auto freeze_period = 0xc4;
					constexpr auto warmup_period = 0xc5;
					constexpr auto warmup_period_end = 0xc8;
					constexpr auto warmup_period_start = 0xcc;
					constexpr auto total_paused_ticks = 0xd0;
					constexpr auto pause_start_tick = 0xd4;
					constexpr auto server_paused = 0xd8;
					constexpr auto game_paused = 0xd9;
					constexpr auto terrorist_time_out_active = 0xda;
					constexpr auto cttime_out_active = 0xdb;
					constexpr auto terrorist_time_out_remaining = 0xdc;
					constexpr auto cttime_out_remaining = 0xe0;
					constexpr auto terrorist_time_outs = 0xe4;
					constexpr auto cttime_outs = 0xe8;
					constexpr auto technical_time_out = 0xec;
					constexpr auto match_waiting_for_resume = 0xed;
					constexpr auto round_time = 0xf0;
					constexpr auto match_start_time = 0xf4;
					constexpr auto round_start_time = 0xf8;
					constexpr auto restart_round_time = 0xfc;
					constexpr auto game_restart = 0x100;
					constexpr auto game_start_time = 0x104;
					constexpr auto time_until_next_phase_starts = 0x108;
					constexpr auto game_phase = 0x10c;
					constexpr auto total_rounds_played = 0x110;
					constexpr auto rounds_played_this_phase = 0x114;
					constexpr auto overtime_playing = 0x118;
					constexpr auto hostages_remaining = 0x11c;
					constexpr auto any_hostage_reached = 0x120;
					constexpr auto map_has_bomb_target = 0x121;
					constexpr auto map_has_rescue_zone = 0x122;
					constexpr auto map_has_buy_zone = 0x123;
					constexpr auto is_queued_matchmaking = 0x124;
					constexpr auto queued_matchmaking_mode = 0x128;
					constexpr auto is_valve_ds = 0x12c;
					constexpr auto logo_map = 0x12d;
					constexpr auto play_all_step_sounds_on_server = 0x12e;
					constexpr auto spectator_slot_count = 0x130;
					constexpr auto match_device = 0x134;
					constexpr auto has_match_started = 0x138;
					constexpr auto next_map_in_mapgroup = 0x13c;
					constexpr auto tournament_event_name_arr = 0x140;
					constexpr auto tournament_event_stage_arr = 0x340;
					constexpr auto match_stat_txt_arr = 0x540;
					constexpr auto tournament_predictions_txt_arr = 0x740;
					constexpr auto tournament_predictions_pct = 0x940;
					constexpr auto cmmitem_drop_reveal_start_time = 0x944;
					constexpr auto cmmitem_drop_reveal_end_time = 0x948;
					constexpr auto is_dropping_items = 0x94c;
					constexpr auto is_quest_eligible = 0x94d;
					constexpr auto is_hltv_active = 0x94e;
					constexpr auto guardian_mode_wave_number = 0x950;
					constexpr auto guardian_mode_special_kills_remaining = 0x954;
					constexpr auto guardian_mode_special_weapon_needed = 0x958;
					constexpr auto guardian_grenades_to_give_bots = 0x95c;
					constexpr auto num_heavies_to_spawn = 0x960;
					constexpr auto num_global_gifts_given = 0x964;
					constexpr auto num_global_gifters = 0x968;
					constexpr auto num_global_gifts_period_seconds = 0x96c;
					constexpr auto arr_featured_gifters_accounts_arr = 0x970;
					constexpr auto arr_featured_gifters_gifts_arr = 0x980;
					constexpr auto arr_prohibited_item_indices_arr = 0x990;
					constexpr auto arr_tournament_active_caster_accounts_arr = 0xa58;
					constexpr auto num_best_of_maps = 0xa68;
					constexpr auto halloween_mask_list_seed = 0xa6c;
					constexpr auto bomb_dropped = 0xa70;
					constexpr auto bomb_planted = 0xa71;
					constexpr auto round_win_status = 0xa74;
					constexpr auto e_round_win_reason = 0xa78;
					constexpr auto tcant_buy = 0xa7c;
					constexpr auto ctcant_buy = 0xa7d;
					constexpr auto guardian_buy_until_time = 0xa80;
					constexpr auto match_stats_round_results_arr = 0xa84;
					constexpr auto match_stats_players_alive_ct_arr = 0xafc;
					constexpr auto match_stats_players_alive_t_arr = 0xb74;
					constexpr auto team_respawn_wave_times_arr = 0xbec;
					constexpr auto next_respawn_wave_arr = 0xc6c;
					constexpr auto server_quest_id = 0xcec;
					constexpr auto v_minimap_mins = 0xcf0;
					constexpr auto v_minimap_maxs = 0xcfc;
					constexpr auto minimap_vertical_section_heights_arr = 0xd08;
					constexpr auto dont_increment_coop_wave = 0xd28;
					constexpr auto spawned_terror_hunt_heavy = 0xd29;
					constexpr auto end_match_map_group_vote_types_arr = 0xd2c;
					constexpr auto end_match_map_group_vote_options_arr = 0xd54;
					constexpr auto end_match_map_vote_winner = 0xd7c;
					constexpr auto num_consecutive_ctloses = 0xd80;
					constexpr auto num_consecutive_terrorist_loses = 0xd84;
					constexpr auto has_hostage_been_touched = 0xda0;
					constexpr auto intermission_start_time = 0xda4;
					constexpr auto intermission_end_time = 0xda8;
					constexpr auto level_initialized = 0xdac;
					constexpr auto total_rounds_played_1 = 0xdb0;
					constexpr auto un_balanced_rounds = 0xdb4;
					constexpr auto end_match_on_round_reset = 0xdb8;
					constexpr auto end_match_on_think = 0xdb9;
					constexpr auto freeze_time = 0xdbc;
					constexpr auto num_terrorist = 0xdc0;
					constexpr auto num_ct = 0xdc4;
					constexpr auto num_spawnable_terrorist = 0xdc8;
					constexpr auto num_spawnable_ct = 0xdcc;
					constexpr auto arr_selected_hostage_spawn_indices = 0xdd0;
					constexpr auto first_connected = 0xde8;
					constexpr auto complete_reset = 0xde9;
					constexpr auto pick_new_teams_on_reset = 0xdea;
					constexpr auto scramble_teams_on_restart = 0xdeb;
					constexpr auto swap_teams_on_restart = 0xdec;
					constexpr auto end_match_tied_votes = 0xdf8;
					constexpr auto need_to_ask_players_for_continue_vote = 0xe14;
					constexpr auto num_queued_matchmaking_accounts = 0xe18;
					constexpr auto queued_matchmaking_reservation_string_ptr = 0xe20;
					constexpr auto num_total_tournament_drops = 0xe28;
					constexpr auto num_spectators_count_max = 0xe2c;
					constexpr auto num_spectators_count_max_tv = 0xe30;
					constexpr auto num_spectators_count_max_lnk = 0xe34;
					constexpr auto force_team_change_silent = 0xe40;
					constexpr auto loading_round_backup_data = 0xe41;
					constexpr auto match_info_show_type = 0xe78;
					constexpr auto match_info_decided_time = 0xe7c;
					constexpr auto coop_respawn_and_heal_time = 0xe98;
					constexpr auto coop_bonus_coins_found = 0xe9c;
					constexpr auto coop_bonus_pistols_only = 0xea0;
					constexpr auto coop_players_in_deployment_zone = 0xea1;
					constexpr auto coop_mission_dead_player_respawn_enabled = 0xea2;
					constexpr auto m_team_dmlast_winning_team_number = 0xea4;
					constexpr auto m_team_dmlast_think_time = 0xea8;
					constexpr auto team_dmlast_announcement_time = 0xeac;
					constexpr auto account_terrorist = 0xeb0;
					constexpr auto account_ct = 0xeb4;
					constexpr auto spawn_point_count_terrorist = 0xeb8;
					constexpr auto spawn_point_count_ct = 0xebc;
					constexpr auto max_num_terrorists = 0xec0;
					constexpr auto max_num_cts = 0xec4;
					constexpr auto loser_bonus = 0xec8;
					constexpr auto loser_bonus_most_recent_team = 0xecc;
					constexpr auto tm_next_periodic_think = 0xed0;
					constexpr auto voice_won_match_brag_fired = 0xed4;
					constexpr auto warmup_next_chat_notice_time = 0xed8;
					constexpr auto hostages_rescued = 0xee0;
					constexpr auto hostages_touched = 0xee4;
					constexpr auto next_hostage_announcement = 0xee8;
					constexpr auto no_terrorists_killed = 0xeec;
					constexpr auto no_cts_killed = 0xeed;
					constexpr auto no_enemies_killed = 0xeee;
					constexpr auto can_donate_weapons = 0xeef;
					constexpr auto first_kill_time = 0xef4;
					constexpr auto first_blood_time = 0xefc;
					constexpr auto hostage_was_injured = 0xf18;
					constexpr auto hostage_was_killed = 0xf19;
					constexpr auto vote_called = 0xf28;
					constexpr auto server_vote_on_reset = 0xf29;
					constexpr auto vote_check_throttle = 0xf2c;
					constexpr auto buy_time_ended = 0xf30;
					constexpr auto last_freeze_end_beep = 0xf34;
					constexpr auto target_bombed = 0xf38;
					constexpr auto bomb_defused = 0xf39;
					constexpr auto map_has_bomb_zone = 0xf3a;
					constexpr auto vec_main_ctspawn_pos = 0xf58;
					constexpr auto ctspawn_points_master_list = 0xf68;
					constexpr auto terrorist_spawn_points_master_list = 0xf80;
					constexpr auto next_ctspawn_point = 0xf98;
					constexpr auto next_terrorist_spawn_point = 0xf9c;
					constexpr auto ctspawn_points = 0xfa0;
					constexpr auto terrorist_spawn_points = 0xfb8;
					constexpr auto is_unreserved_game_server = 0xfd0;
					constexpr auto autobalance_display_time = 0xfd4;
					constexpr auto allow_weapon_switch = 0x1240;
					constexpr auto round_time_warning_triggered = 0x1241;
					constexpr auto phase_change_announcement_time = 0x1244;
					constexpr auto next_update_team_clan_names_time = 0x1248;
					constexpr auto last_think_time = 0x124c;
					constexpr auto accumulated_round_off_damage = 0x1250;
					constexpr auto shorthanded_bonus_last_eval_round = 0x1254;
					constexpr auto match_aborted_early_reason = 0x14d0;
					constexpr auto has_triggered_round_start_music = 0x14d4;
					constexpr auto has_triggered_coop_spawn_reset = 0x14d5;
					constexpr auto switching_teams_at_round_reset = 0x14d6;
					constexpr auto game_mode_rules_ptr = 0x14f0;
					constexpr auto bt_global_blackboard = 0x14f8;
					constexpr auto h_player_resource = 0x1560;
					constexpr auto retake_rules = 0x1568;
					constexpr auto guardian_bot_skill_level_max = 0x174c;
					constexpr auto guardian_bot_skill_level_min = 0x1750;
					constexpr auto arr_team_unique_kill_weapons_match_arr = 0x1758;
					constexpr auto team_last_kill_used_unique_weapon_match_arr = 0x17b8;
					constexpr auto match_end_count = 0x17e0;
					constexpr auto tteam_intro_variant = 0x17e4;
					constexpr auto ctteam_intro_variant = 0x17e8;
					constexpr auto team_intro_period = 0x17ec;
					constexpr auto team_intro_period_end = 0x17f0;
					constexpr auto played_team_intro_vo = 0x17f4;
					constexpr auto last_perf_sample_time = 0x5800;
					constexpr auto skip_next_server_perf_sample = 0x5808;
				} // namespace ccsgame_rules

				namespace csper_round_stats_t
				{
					constexpr auto kills = 0x30;
					constexpr auto deaths = 0x34;
					constexpr auto assists = 0x38;
					constexpr auto damage = 0x3c;
					constexpr auto equipment_value = 0x40;
					constexpr auto money_saved = 0x44;
					constexpr auto kill_reward = 0x48;
					constexpr auto live_time = 0x4c;
					constexpr auto head_shot_kills = 0x50;
					constexpr auto objective = 0x54;
					constexpr auto cash_earned = 0x58;
					constexpr auto utility_damage = 0x5c;
					constexpr auto enemies_flashed = 0x60;
				} // namespace csper_round_stats_t

				namespace csmatch_stats_t
				{
					constexpr auto enemy5_ks = 0x68;
					constexpr auto enemy4_ks = 0x6c;
					constexpr auto enemy3_ks = 0x70;
					constexpr auto enemy2_ks = 0x74;
					constexpr auto utility_count = 0x78;
					constexpr auto utility_successes = 0x7c;
					constexpr auto utility_enemies = 0x80;
					constexpr auto flash_count = 0x84;
					constexpr auto flash_successes = 0x88;
					constexpr auto health_points_removed_total = 0x8c;
					constexpr auto health_points_dealt_total = 0x90;
					constexpr auto shots_fired_total = 0x94;
					constexpr auto shots_on_target_total = 0x98;
					constexpr auto i1v1_count = 0x9c;
					constexpr auto i1v1_wins = 0xa0;
					constexpr auto i1v2_count = 0xa4;
					constexpr auto i1v2_wins = 0xa8;
					constexpr auto entry_count = 0xac;
					constexpr auto entry_wins = 0xb0;
				} // namespace csmatch_stats_t

				namespace ccsgo_team_preview_character_position
				{
					constexpr auto variant = 0x4b0;
					constexpr auto random = 0x4b4;
					constexpr auto ordinal = 0x4b8;
					constexpr auto s_weapon_name = 0x4c0;
					constexpr auto xuid = 0x4c8;
					constexpr auto agent_item = 0x4d0;
					constexpr auto gloves_item = 0x748;
					constexpr auto weapon_item = 0x9c0;
				} // namespace ccsgo_team_preview_character_position

				namespace cplayer_ping
				{
					constexpr auto h_player = 0x4b8;
					constexpr auto h_pinged_entity = 0x4bc;
					constexpr auto type = 0x4c0;
					constexpr auto urgent = 0x4c4;
					constexpr auto place_name_arr = 0x4c5;
				} // namespace cplayer_ping

				namespace ccsplayer_ping_services
				{
					constexpr auto player_ping_tokens_arr = 0x40;
					constexpr auto h_player_ping = 0x54;
				} // namespace ccsplayer_ping_services

				namespace ccsplayer_resource
				{
					constexpr auto hostage_alive_arr = 0x4b0;
					constexpr auto is_hostage_following_someone_arr = 0x4bc;
					constexpr auto hostage_entity_ids_arr = 0x4c8;
					constexpr auto bombsite_center_a = 0x4f8;
					constexpr auto bombsite_center_b = 0x504;
					constexpr auto hostage_rescue_x_arr = 0x510;
					constexpr auto hostage_rescue_y_arr = 0x520;
					constexpr auto hostage_rescue_z_arr = 0x530;
					constexpr auto end_match_next_map_all_voted = 0x540;
					constexpr auto found_goal_positions = 0x541;
				} // namespace ccsplayer_resource

				namespace ccsplayer_base_camera_services
				{
					constexpr auto fov = 0x170;
					constexpr auto fovstart = 0x174;
					constexpr auto fovtime = 0x178;
					constexpr auto fovrate = 0x17c;
					constexpr auto h_zoom_owner = 0x180;
					constexpr auto h_trigger_fog_list = 0x188;
					constexpr auto h_last_fog_trigger = 0x1a0;
				} // namespace ccsplayer_base_camera_services

				namespace weapon_purchase_count_t
				{
					constexpr auto item_def_index = 0x30;
					constexpr auto count = 0x32;
				} // namespace weapon_purchase_count_t

				namespace weapon_purchase_tracker_t
				{
					constexpr auto weapon_purchases = 0x8;
				} // namespace weapon_purchase_tracker_t

				namespace ccsplayer_action_tracking_services
				{
					constexpr auto h_last_weapon_before_c4_auto_switch = 0x208;
					constexpr auto is_rescuing = 0x23c;
					constexpr auto weapon_purchases_this_match = 0x240;
					constexpr auto weapon_purchases_this_round = 0x298;
				} // namespace ccsplayer_action_tracking_services

				namespace ccsplayer_bullet_services
				{
					constexpr auto total_hits_on_server = 0x40;
				} // namespace ccsplayer_bullet_services

				namespace sellback_purchase_entry_t
				{
					constexpr auto un_def_idx = 0x30;
					constexpr auto cost = 0x34;
					constexpr auto prev_armor = 0x38;
					constexpr auto prev_helmet = 0x3c;
					constexpr auto h_item = 0x40;
				} // namespace sellback_purchase_entry_t

				namespace ccsplayer_buy_services
				{
					constexpr auto vec_sellback_purchase_entries = 0xc8;
				} // namespace ccsplayer_buy_services

				namespace ccsplayer_hostage_services
				{
					constexpr auto h_carried_hostage = 0x40;
					constexpr auto h_carried_hostage_prop = 0x44;
				} // namespace ccsplayer_hostage_services

				namespace ccsplayer_item_services
				{
					constexpr auto has_defuser = 0x40;
					constexpr auto has_helmet = 0x41;
					constexpr auto has_heavy_armor = 0x42;
				} // namespace ccsplayer_item_services

				namespace ccsplayer_movement_services
				{
					constexpr auto max_fall_velocity = 0x220;
					constexpr auto vec_ladder_normal = 0x224;
					constexpr auto ladder_surface_prop_index = 0x230;
					constexpr auto duck_amount = 0x234;
					constexpr auto duck_speed = 0x238;
					constexpr auto duck_override = 0x23c;
					constexpr auto desires_duck = 0x23d;
					constexpr auto duck_offset = 0x240;
					constexpr auto duck_time_msecs = 0x244;
					constexpr auto duck_jump_time_msecs = 0x248;
					constexpr auto jump_time_msecs = 0x24c;
					constexpr auto last_duck_time = 0x250;
					constexpr auto vec_last_position_at_full_crouch_speed = 0x260;
					constexpr auto duck_until_on_ground = 0x268;
					constexpr auto has_walk_moved_since_last_jump = 0x269;
					constexpr auto in_stuck_test = 0x26a;
					constexpr auto stuck_check_time_arr = 0x278;
					constexpr auto trace_count = 0x478;
					constexpr auto stuck_last = 0x47c;
					constexpr auto speed_cropped = 0x480;
					constexpr auto old_water_level = 0x484;
					constexpr auto water_entry_time = 0x488;
					constexpr auto vec_forward = 0x48c;
					constexpr auto vec_left = 0x498;
					constexpr auto vec_up = 0x4a4;
					constexpr auto vec_previously_predicted_origin = 0x4b0;
					constexpr auto made_footstep_noise = 0x4bc;
					constexpr auto footsteps = 0x4c0;
					constexpr auto old_jump_pressed = 0x4c4;
					constexpr auto jump_pressed_time = 0x4c8;
					constexpr auto jump_until = 0x4cc;
					constexpr auto jump_vel = 0x4d0;
					constexpr auto stash_grenade_parameter_when = 0x4d4;
					constexpr auto button_down_mask_prev = 0x4d8;
					constexpr auto offset_tick_complete_time = 0x4e0;
					constexpr auto offset_tick_stashed_speed = 0x4e4;
					constexpr auto stamina = 0x4e8;
					constexpr auto height_at_jump_start = 0x4ec;
					constexpr auto max_jump_height_this_jump = 0x4f0;
				} // namespace ccsplayer_movement_services

				namespace ccsplayer_use_services
				{
					constexpr auto h_last_known_use_entity = 0x40;
					constexpr auto last_use_time_stamp = 0x44;
					constexpr auto time_started_holding_use = 0x48;
					constexpr auto time_last_used_window = 0x4c;
				} // namespace ccsplayer_use_services

				namespace ccsplayer_view_model_services
				{
					constexpr auto h_view_model_arr = 0x40;
				} // namespace ccsplayer_view_model_services

				namespace ccsplayer_water_services
				{
					constexpr auto next_drown_damage_time = 0x40;
					constexpr auto drown_dmg_rate = 0x44;
					constexpr auto air_finished_time = 0x48;
					constexpr auto water_jump_time = 0x4c;
					constexpr auto vec_water_jump_vel = 0x50;
					constexpr auto swim_sound_time = 0x5c;
				} // namespace ccsplayer_water_services

				namespace ccsplayer_weapon_services
				{
					constexpr auto next_attack = 0xb0;
					constexpr auto is_looking_at_weapon = 0xb4;
					constexpr auto is_holding_look_at_weapon = 0xb5;
					constexpr auto h_saved_weapon = 0xb8;
					constexpr auto time_to_melee = 0xbc;
					constexpr auto time_to_secondary = 0xc0;
					constexpr auto time_to_primary = 0xc4;
					constexpr auto time_to_sniper_rifle = 0xc8;
					constexpr auto is_being_given_item = 0xcc;
					constexpr auto is_picking_up_item_with_use = 0xcd;
					constexpr auto picked_up_weapon = 0xce;
				} // namespace ccsplayer_weapon_services

				namespace ccsplayer_controller_action_tracking_services
				{
					constexpr auto per_round_stats = 0x40;
					constexpr auto match_stats = 0x90;
					constexpr auto num_round_kills = 0x148;
					constexpr auto num_round_kills_headshots = 0x14c;
					constexpr auto un_total_round_damage_dealt = 0x150;
				} // namespace ccsplayer_controller_action_tracking_services

				namespace cdamage_record
				{
					constexpr auto player_damager = 0x28;
					constexpr auto player_recipient = 0x2c;
					constexpr auto h_player_controller_damager = 0x30;
					constexpr auto h_player_controller_recipient = 0x34;
					constexpr auto player_damager_name = 0x38;
					constexpr auto player_recipient_name = 0x40;
					constexpr auto damager_xuid = 0x48;
					constexpr auto recipient_xuid = 0x50;
					constexpr auto damage = 0x58;
					constexpr auto actual_health_removed = 0x5c;
					constexpr auto num_hits = 0x60;
					constexpr auto last_bullet_update = 0x64;
					constexpr auto is_other_enemy = 0x68;
					constexpr auto kill_type = 0x69;
				} // namespace cdamage_record

				namespace ccsplayer_controller_damage_services
				{
					constexpr auto send_update = 0x40;
					constexpr auto damage_list = 0x48;
				} // namespace ccsplayer_controller_damage_services

				namespace ccsplayer_controller_in_game_money_services
				{
					constexpr auto receives_money_next_round = 0x40;
					constexpr auto account_money_earned_for_next_round = 0x44;
					constexpr auto account = 0x48;
					constexpr auto start_account = 0x4c;
					constexpr auto total_cash_spent = 0x50;
					constexpr auto cash_spent_this_round = 0x54;
				} // namespace ccsplayer_controller_in_game_money_services

				namespace server_authoritative_weapon_slot_t
				{
					constexpr auto un_class = 0x28;
					constexpr auto un_slot = 0x2a;
					constexpr auto un_item_def_idx = 0x2c;
				} // namespace server_authoritative_weapon_slot_t

				namespace ccsplayer_controller_inventory_services
				{
					constexpr auto un_music_id = 0x40;
					constexpr auto rank_arr = 0x44;
					constexpr auto persona_data_public_level = 0x5c;
					constexpr auto persona_data_public_commends_leader = 0x60;
					constexpr auto persona_data_public_commends_teacher = 0x64;
					constexpr auto persona_data_public_commends_friendly = 0x68;
					constexpr auto un_equipped_player_spray_ids_arr = 0xf48;
					constexpr auto vec_server_authoritative_weapon_slots = 0xf50;
				} // namespace ccsplayer_controller_inventory_services

				namespace ccsplayer_radio_services
				{
					constexpr auto got_hostage_talk_timer = 0x40;
					constexpr auto defusing_talk_timer = 0x44;
					constexpr auto c4_plant_talk_timer = 0x48;
					constexpr auto radio_token_slots_arr = 0x4c;
					constexpr auto ignore_radio = 0x58;
				} // namespace ccsplayer_radio_services

				namespace cvote_controller
				{
					constexpr auto active_issue_index = 0x4b0;
					constexpr auto only_team_to_vote = 0x4b4;
					constexpr auto vote_option_count_arr = 0x4b8;
					constexpr auto potential_votes = 0x4cc;
					constexpr auto is_yes_no_vote = 0x4d0;
					constexpr auto accepting_votes_timer = 0x4d8;
					constexpr auto execute_command_timer = 0x4f0;
					constexpr auto reset_vote_timer = 0x508;
					constexpr auto votes_cast_arr = 0x520;
					constexpr auto player_holding_vote = 0x620;
					constexpr auto player_override_for_vote = 0x624;
					constexpr auto highest_count_index = 0x628;
					constexpr auto potential_issues = 0x630;
					constexpr auto vote_options = 0x648;
				} // namespace cvote_controller

				namespace cmap_veto_pick_controller
				{
					constexpr auto played_intro_vcd = 0x4b0;
					constexpr auto need_to_play_five_seconds_remaining = 0x4b1;
					constexpr auto dbl_pre_match_draft_sequence_time = 0x4d0;
					constexpr auto pre_match_draft_state_changed = 0x4d8;
					constexpr auto draft_type = 0x4dc;
					constexpr auto team_winning_coin_toss = 0x4e0;
					constexpr auto team_with_first_choice_arr = 0x4e4;
					constexpr auto vote_map_ids_list_arr = 0x5e4;
					constexpr auto account_ids_arr = 0x600;
					constexpr auto map_id0_arr = 0x700;
					constexpr auto map_id1_arr = 0x800;
					constexpr auto map_id2_arr = 0x900;
					constexpr auto map_id3_arr = 0xa00;
					constexpr auto map_id4_arr = 0xb00;
					constexpr auto map_id5_arr = 0xc00;
					constexpr auto starting_side0_arr = 0xd00;
					constexpr auto current_phase = 0xe00;
					constexpr auto phase_start_tick = 0xe04;
					constexpr auto phase_duration_ticks = 0xe08;
					constexpr auto on_map_vetoed = 0xe10;
					constexpr auto on_map_picked = 0xe38;
					constexpr auto on_sides_picked = 0xe60;
					constexpr auto on_new_phase_started = 0xe88;
					constexpr auto on_level_transition = 0xeb0;
				} // namespace cmap_veto_pick_controller

				namespace clogic_event_listener
				{
					constexpr auto str_event_name = 0x4c0;
					constexpr auto is_enabled = 0x4c8;
					constexpr auto team = 0x4cc;
					constexpr auto on_event_fired = 0x4d0;
				} // namespace clogic_event_listener

				namespace cbot
				{
					constexpr auto controller_ptr = 0x10;
					constexpr auto player_ptr = 0x18;
					constexpr auto has_spawned = 0x20;
					constexpr auto id = 0x24;
					constexpr auto is_running = 0xb8;
					constexpr auto is_crouching = 0xb9;
					constexpr auto forward_speed = 0xbc;
					constexpr auto left_speed = 0xc0;
					constexpr auto vertical_speed = 0xc4;
					constexpr auto button_flags = 0xc8;
					constexpr auto jump_timestamp = 0xd0;
					constexpr auto view_forward = 0xd4;
					constexpr auto posture_stack_index = 0xf0;
				} // namespace cbot

				namespace cbt_action_aim
				{
					constexpr auto sensor_input_key = 0x68;
					constexpr auto aim_ready_key = 0x80;
					constexpr auto zoom_cooldown_timestamp = 0x88;
					constexpr auto done_aiming = 0x8c;
					constexpr auto lerp_start_time = 0x90;
					constexpr auto next_look_target_lerp_time = 0x94;
					constexpr auto penalty_reduction_ratio = 0x98;
					constexpr auto next_look_target = 0x9c;
					constexpr auto aim_timer = 0xa8;
					constexpr auto sniper_hold_timer = 0xc0;
					constexpr auto focus_interval_timer = 0xd8;
					constexpr auto acquired = 0xf0;
				} // namespace cbt_action_aim

				namespace cbt_action_combat_positioning
				{
					constexpr auto sensor_input_key = 0x68;
					constexpr auto is_attacking_key = 0x80;
					constexpr auto action_timer = 0x88;
					constexpr auto crouching = 0xa0;
				} // namespace cbt_action_combat_positioning

				namespace cbt_action_move_to
				{
					constexpr auto destination_input_key = 0x60;
					constexpr auto hiding_spot_input_key = 0x68;
					constexpr auto threat_input_key = 0x70;
					constexpr auto vec_destination = 0x78;
					constexpr auto auto_look_adjust = 0x84;
					constexpr auto compute_path = 0x85;
					constexpr auto damaging_areas_penalty_cost = 0x88;
					constexpr auto check_approximate_corners_timer = 0x90;
					constexpr auto check_high_priority_item = 0xa8;
					constexpr auto repath_timer = 0xc0;
					constexpr auto arrival_epsilon = 0xd8;
					constexpr auto additional_arrival_epsilon2d = 0xdc;
					constexpr auto hiding_spot_check_distance_threshold = 0xe0;
					constexpr auto nearest_area_distance_threshold = 0xe4;
				} // namespace cbt_action_move_to

				namespace cbt_action_parachute_positioning
				{
					constexpr auto action_timer = 0x58;
				} // namespace cbt_action_parachute_positioning

				namespace cbt_node_condition
				{
					constexpr auto negated = 0x58;
				} // namespace cbt_node_condition

				namespace cbt_node_condition_inactive
				{
					constexpr auto round_start_threshold_seconds = 0x78;
					constexpr auto sensor_inactivity_threshold_seconds = 0x7c;
					constexpr auto sensor_inactivity_timer = 0x80;
				} // namespace cbt_node_condition_inactive

				namespace cenv_combined_light_probe_volume
				{
					constexpr auto color = 0x1508;
					constexpr auto brightness = 0x150c;
					constexpr auto h_cubemap_texture = 0x1510;
					constexpr auto custom_cubemap_texture = 0x1518;
					constexpr auto h_light_probe_texture = 0x1520;
					constexpr auto h_light_probe_direct_light_indices_texture = 0x1528;
					constexpr auto h_light_probe_direct_light_scalars_texture = 0x1530;
					constexpr auto h_light_probe_direct_light_shadows_texture = 0x1538;
					constexpr auto v_box_mins = 0x1540;
					constexpr auto v_box_maxs = 0x154c;
					constexpr auto moveable = 0x1558;
					constexpr auto handshake = 0x155c;
					constexpr auto env_cube_map_array_index = 0x1560;
					constexpr auto priority = 0x1564;
					constexpr auto start_disabled = 0x1568;
					constexpr auto edge_fade_dist = 0x156c;
					constexpr auto v_edge_fade_dists = 0x1570;
					constexpr auto light_probe_size_x = 0x157c;
					constexpr auto light_probe_size_y = 0x1580;
					constexpr auto light_probe_size_z = 0x1584;
					constexpr auto light_probe_atlas_x = 0x1588;
					constexpr auto light_probe_atlas_y = 0x158c;
					constexpr auto light_probe_atlas_z = 0x1590;
					constexpr auto enabled = 0x15a9;
				} // namespace cenv_combined_light_probe_volume

				namespace cenv_cubemap
				{
					constexpr auto h_cubemap_texture = 0x530;
					constexpr auto custom_cubemap_texture = 0x538;
					constexpr auto influence_radius = 0x53c;
					constexpr auto v_box_project_mins = 0x540;
					constexpr auto v_box_project_maxs = 0x54c;
					constexpr auto moveable = 0x558;
					constexpr auto handshake = 0x55c;
					constexpr auto env_cube_map_array_index = 0x560;
					constexpr auto priority = 0x564;
					constexpr auto edge_fade_dist = 0x568;
					constexpr auto v_edge_fade_dists = 0x56c;
					constexpr auto diffuse_scale = 0x578;
					constexpr auto start_disabled = 0x57c;
					constexpr auto default_env_map = 0x57d;
					constexpr auto default_spec_env_map = 0x57e;
					constexpr auto indoor_cube_map = 0x57f;
					constexpr auto copy_diffuse_from_default_cubemap = 0x580;
					constexpr auto enabled = 0x590;
				} // namespace cenv_cubemap

				namespace cenv_cubemap_fog
				{
					constexpr auto end_distance = 0x4b0;
					constexpr auto start_distance = 0x4b4;
					constexpr auto fog_falloff_exponent = 0x4b8;
					constexpr auto height_fog_enabled = 0x4bc;
					constexpr auto fog_height_width = 0x4c0;
					constexpr auto fog_height_end = 0x4c4;
					constexpr auto fog_height_start = 0x4c8;
					constexpr auto fog_height_exponent = 0x4cc;
					constexpr auto lodbias = 0x4d0;
					constexpr auto active = 0x4d4;
					constexpr auto start_disabled = 0x4d5;
					constexpr auto fog_max_opacity = 0x4d8;
					constexpr auto cubemap_source_type = 0x4dc;
					constexpr auto h_sky_material = 0x4e0;
					constexpr auto isz_sky_entity = 0x4e8;
					constexpr auto h_fog_cubemap_texture = 0x4f0;
					constexpr auto has_height_fog_end = 0x4f8;
					constexpr auto first_time = 0x4f9;
				} // namespace cenv_cubemap_fog

				namespace cgradient_fog
				{
					constexpr auto h_gradient_fog_texture = 0x4b0;
					constexpr auto fog_start_distance = 0x4b8;
					constexpr auto fog_end_distance = 0x4bc;
					constexpr auto height_fog_enabled = 0x4c0;
					constexpr auto fog_start_height = 0x4c4;
					constexpr auto fog_end_height = 0x4c8;
					constexpr auto far_z = 0x4cc;
					constexpr auto fog_max_opacity = 0x4d0;
					constexpr auto fog_falloff_exponent = 0x4d4;
					constexpr auto fog_vertical_exponent = 0x4d8;
					constexpr auto fog_color = 0x4dc;
					constexpr auto fog_strength = 0x4e0;
					constexpr auto fade_time = 0x4e4;
					constexpr auto start_disabled = 0x4e8;
					constexpr auto is_enabled = 0x4e9;
					constexpr auto gradient_fog_needs_textures = 0x4ea;
				} // namespace cgradient_fog

				namespace cenv_light_probe_volume
				{
					constexpr auto h_light_probe_texture = 0x1488;
					constexpr auto h_light_probe_direct_light_indices_texture = 0x1490;
					constexpr auto h_light_probe_direct_light_scalars_texture = 0x1498;
					constexpr auto h_light_probe_direct_light_shadows_texture = 0x14a0;
					constexpr auto v_box_mins = 0x14a8;
					constexpr auto v_box_maxs = 0x14b4;
					constexpr auto moveable = 0x14c0;
					constexpr auto handshake = 0x14c4;
					constexpr auto priority = 0x14c8;
					constexpr auto start_disabled = 0x14cc;
					constexpr auto light_probe_size_x = 0x14d0;
					constexpr auto light_probe_size_y = 0x14d4;
					constexpr auto light_probe_size_z = 0x14d8;
					constexpr auto light_probe_atlas_x = 0x14dc;
					constexpr auto light_probe_atlas_y = 0x14e0;
					constexpr auto light_probe_atlas_z = 0x14e4;
					constexpr auto enabled = 0x14f1;
				} // namespace cenv_light_probe_volume

				namespace cplayer_visibility
				{
					constexpr auto visibility_strength = 0x4b0;
					constexpr auto fog_distance_multiplier = 0x4b4;
					constexpr auto fog_max_density_multiplier = 0x4b8;
					constexpr auto fade_time = 0x4bc;
					constexpr auto start_disabled = 0x4c0;
					constexpr auto is_enabled = 0x4c1;
				} // namespace cplayer_visibility

				namespace ctonemap_controller2
				{
					constexpr auto auto_exposure_min = 0x4b0;
					constexpr auto auto_exposure_max = 0x4b4;
					constexpr auto tonemap_percent_target = 0x4b8;
					constexpr auto tonemap_percent_bright_pixels = 0x4bc;
					constexpr auto tonemap_min_avg_lum = 0x4c0;
					constexpr auto exposure_adaptation_speed_up = 0x4c4;
					constexpr auto exposure_adaptation_speed_down = 0x4c8;
					constexpr auto tonemap_evsmoothing_range = 0x4cc;
				} // namespace ctonemap_controller2

				namespace cenv_volumetric_fog_controller
				{
					constexpr auto scattering = 0x4b0;
					constexpr auto anisotropy = 0x4b4;
					constexpr auto fade_speed = 0x4b8;
					constexpr auto draw_distance = 0x4bc;
					constexpr auto fade_in_start = 0x4c0;
					constexpr auto fade_in_end = 0x4c4;
					constexpr auto indirect_strength = 0x4c8;
					constexpr auto indirect_texture_dim_x = 0x4cc;
					constexpr auto indirect_texture_dim_y = 0x4d0;
					constexpr auto indirect_texture_dim_z = 0x4d4;
					constexpr auto v_box_mins = 0x4d8;
					constexpr auto v_box_maxs = 0x4e4;
					constexpr auto active = 0x4f0;
					constexpr auto start_aniso_time = 0x4f4;
					constexpr auto start_scatter_time = 0x4f8;
					constexpr auto start_draw_distance_time = 0x4fc;
					constexpr auto start_anisotropy = 0x500;
					constexpr auto start_scattering = 0x504;
					constexpr auto start_draw_distance = 0x508;
					constexpr auto default_anisotropy = 0x50c;
					constexpr auto default_scattering = 0x510;
					constexpr auto default_draw_distance = 0x514;
					constexpr auto start_disabled = 0x518;
					constexpr auto enable_indirect = 0x519;
					constexpr auto is_master = 0x51a;
					constexpr auto h_fog_indirect_texture = 0x520;
					constexpr auto force_refresh_count = 0x528;
					constexpr auto first_time = 0x52c;
				} // namespace cenv_volumetric_fog_controller

				namespace cenv_volumetric_fog_volume
				{
					constexpr auto active = 0x4b0;
					constexpr auto v_box_mins = 0x4b4;
					constexpr auto v_box_maxs = 0x4c0;
					constexpr auto start_disabled = 0x4cc;
					constexpr auto strength = 0x4d0;
					constexpr auto falloff_shape = 0x4d4;
					constexpr auto falloff_exponent = 0x4d8;
				} // namespace cenv_volumetric_fog_volume

				namespace cfog_controller
				{
					constexpr auto fog = 0x4b0;
					constexpr auto use_angles = 0x518;
					constexpr auto changed_variables = 0x51c;
				} // namespace cfog_controller

				namespace cinfo_visibility_box
				{
					constexpr auto mode = 0x4b4;
					constexpr auto v_box_size = 0x4b8;
					constexpr auto enabled = 0x4c4;
				} // namespace cinfo_visibility_box

				namespace cinfo_world_layer
				{
					constexpr auto output_on_entities_spawned = 0x4b0;
					constexpr auto world_name = 0x4d8;
					constexpr auto layer_name = 0x4e0;
					constexpr auto world_layer_visible = 0x4e8;
					constexpr auto entities_spawned = 0x4e9;
					constexpr auto create_as_child_spawn_group = 0x4ea;
					constexpr auto h_layer_spawn_group = 0x4ec;
				} // namespace cinfo_world_layer

				namespace cmulti_light_proxy
				{
					constexpr auto isz_light_name_filter = 0x4b0;
					constexpr auto isz_light_class_filter = 0x4b8;
					constexpr auto light_radius_filter = 0x4c0;
					constexpr auto brightness_delta = 0x4c4;
					constexpr auto perform_screen_fade = 0x4c8;
					constexpr auto target_brightness_multiplier = 0x4cc;
					constexpr auto current_brightness_multiplier = 0x4d0;
					constexpr auto vec_lights = 0x4d8;
				} // namespace cmulti_light_proxy

				namespace cpoint_camera
				{
					constexpr auto fov = 0x4b0;
					constexpr auto resolution = 0x4b4;
					constexpr auto fog_enable = 0x4b8;
					constexpr auto fog_color = 0x4b9;
					constexpr auto fog_start = 0x4c0;
					constexpr auto fog_end = 0x4c4;
					constexpr auto fog_max_density = 0x4c8;
					constexpr auto active = 0x4cc;
					constexpr auto use_screen_aspect_ratio = 0x4cd;
					constexpr auto aspect_ratio = 0x4d0;
					constexpr auto no_sky = 0x4d4;
					constexpr auto brightness = 0x4d8;
					constexpr auto zfar = 0x4dc;
					constexpr auto znear = 0x4e0;
					constexpr auto can_hltvuse = 0x4e4;
					constexpr auto dof_enabled = 0x4e5;
					constexpr auto dof_near_blurry = 0x4e8;
					constexpr auto dof_near_crisp = 0x4ec;
					constexpr auto dof_far_crisp = 0x4f0;
					constexpr auto dof_far_blurry = 0x4f4;
					constexpr auto dof_tilt_to_ground = 0x4f8;
					constexpr auto target_fov = 0x4fc;
					constexpr auto degrees_per_second = 0x500;
					constexpr auto is_on = 0x504;
					constexpr auto next_ptr = 0x508;
				} // namespace cpoint_camera

				namespace cpoint_camera_vfov
				{
					constexpr auto vertical_fov = 0x510;
				} // namespace cpoint_camera_vfov

				namespace cpoint_template
				{
					constexpr auto isz_world_name = 0x4b0;
					constexpr auto isz_source2_entity_lump_name = 0x4b8;
					constexpr auto isz_entity_filter_name = 0x4c0;
					constexpr auto timeout_interval = 0x4c8;
					constexpr auto asynchronously_spawn_entities = 0x4cc;
					constexpr auto output_on_spawned = 0x4d0;
					constexpr auto client_only_entity_behavior = 0x4f8;
					constexpr auto owner_spawn_group_type = 0x4fc;
					constexpr auto created_spawn_group_handles = 0x500;
					constexpr auto spawned_entity_handles = 0x518;
					constexpr auto script_spawn_callback = 0x530;
					constexpr auto script_callback_scope = 0x538;
				} // namespace cpoint_template

				namespace cgame_gib_manager
				{
					constexpr auto allow_new_gibs = 0x4d0;
					constexpr auto current_max_pieces = 0x4d4;
					constexpr auto max_pieces = 0x4d8;
					constexpr auto last_frame = 0x4dc;
				} // namespace cgame_gib_manager

				namespace csound_area_entity_base
				{
					constexpr auto disabled = 0x4b0;
					constexpr auto isz_sound_area_type = 0x4b8;
					constexpr auto v_pos = 0x4c0;
				} // namespace csound_area_entity_base

				namespace csound_area_entity_sphere
				{
					constexpr auto radius = 0x4d0;
				} // namespace csound_area_entity_sphere

				namespace csound_area_entity_oriented_box
				{
					constexpr auto v_min = 0x4d0;
					constexpr auto v_max = 0x4dc;
				} // namespace csound_area_entity_oriented_box

				namespace cteam
				{
					constexpr auto a_player_controllers = 0x4b0;
					constexpr auto a_players = 0x4c8;
					constexpr auto score = 0x4e0;
					constexpr auto teamname_arr = 0x4e4;
				} // namespace cteam

				namespace cbase_player_controller
				{
					constexpr auto in_buttons_which_are_toggles = 0x4b8;
					constexpr auto tick_base = 0x4c0;
					constexpr auto h_pawn = 0x4f0;
					constexpr auto split_screen_slot = 0x4f4;
					constexpr auto h_split_owner = 0x4f8;
					constexpr auto h_split_screen_players = 0x500;
					constexpr auto is_hltv = 0x518;
					constexpr auto connected = 0x51c;
					constexpr auto isz_player_name_arr = 0x520;
					constexpr auto network_idstring = 0x5a0;
					constexpr auto lerp_time = 0x5a8;
					constexpr auto lag_compensation = 0x5ac;
					constexpr auto predict = 0x5ad;
					constexpr auto auto_kick_disabled = 0x5ae;
					constexpr auto is_low_violence = 0x5af;
					constexpr auto game_paused = 0x5b0;
					constexpr auto usec_timestamp_last_user_cmd_received = 0x648;
					constexpr auto last_real_command_number_executed = 0x654;
					constexpr auto ignore_global_chat = 0x668;
					constexpr auto last_player_talk_time = 0x66c;
					constexpr auto last_entity_steady_state = 0x670;
					constexpr auto available_entity_steady_state = 0x674;
					constexpr auto has_any_steady_state_ents = 0x678;
					constexpr auto steam_id = 0x688;
					constexpr auto desired_fov = 0x690;
				} // namespace cbase_player_controller

				namespace cbase_player_vdata
				{
					constexpr auto s_model_name = 0x28;
					constexpr auto head_damage_multiplier = 0x108;
					constexpr auto chest_damage_multiplier = 0x118;
					constexpr auto stomach_damage_multiplier = 0x128;
					constexpr auto arm_damage_multiplier = 0x138;
					constexpr auto leg_damage_multiplier = 0x148;
					constexpr auto hold_breath_time = 0x158;
					constexpr auto drowning_damage_interval = 0x15c;
					constexpr auto drowning_damage_initial = 0x160;
					constexpr auto drowning_damage_max = 0x164;
					constexpr auto water_speed = 0x168;
					constexpr auto use_range = 0x16c;
					constexpr auto use_angle_tolerance = 0x170;
					constexpr auto crouch_time = 0x174;
				} // namespace cbase_player_vdata

				namespace cbase_player_weapon_vdata
				{
					constexpr auto world_model = 0x28;
					constexpr auto built_right_handed = 0x108;
					constexpr auto allow_flipping = 0x109;
					constexpr auto is_full_auto = 0x10a;
					constexpr auto num_bullets = 0x10c;
					constexpr auto s_muzzle_attachment = 0x110;
					constexpr auto muzzle_flash_particle = 0x118;
					constexpr auto flags = 0x1f8;
					constexpr auto primary_ammo_type = 0x1f9;
					constexpr auto secondary_ammo_type = 0x1fa;
					constexpr auto max_clip1 = 0x1fc;
					constexpr auto max_clip2 = 0x200;
					constexpr auto default_clip1 = 0x204;
					constexpr auto default_clip2 = 0x208;
					constexpr auto weight = 0x20c;
					constexpr auto auto_switch_to = 0x210;
					constexpr auto auto_switch_from = 0x211;
					constexpr auto rumble_effect = 0x214;
					constexpr auto a_shoot_sounds = 0x218;
					constexpr auto slot = 0x238;
					constexpr auto position = 0x23c;
				} // namespace cbase_player_weapon_vdata

				namespace cinfo_game_event_proxy
				{
					constexpr auto isz_event_name = 0x4b0;
					constexpr auto range = 0x4b8;
				} // namespace cinfo_game_event_proxy

				namespace cprojected_decal
				{
					constexpr auto texture = 0x4b0;
					constexpr auto distance = 0x4b4;
				} // namespace cprojected_decal

				namespace cbody_component_base_anim_graph
				{
					constexpr auto animation_controller = 0x480;
					constexpr auto _m_p_chain_entity = 0x760;
				} // namespace cbody_component_base_anim_graph

				namespace cbase_model_entity
				{
					constexpr auto crender_component_ptr = 0x4b0;
					constexpr auto chitbox_component = 0x4b8;
					constexpr auto dissolve_start_time = 0x4e0;
					constexpr auto on_ignite = 0x4e8;
					constexpr auto render_mode = 0x510;
					constexpr auto render_fx = 0x511;
					constexpr auto allow_fade_in_view = 0x512;
					constexpr auto clr_render = 0x513;
					constexpr auto vec_render_attributes = 0x518;
					constexpr auto render_to_cubemaps = 0x568;
					constexpr auto collision = 0x570;
					constexpr auto glow = 0x620;
					constexpr auto glow_backface_mult = 0x678;
					constexpr auto fade_min_dist = 0x67c;
					constexpr auto fade_max_dist = 0x680;
					constexpr auto fade_scale = 0x684;
					constexpr auto shadow_strength = 0x688;
					constexpr auto object_culling = 0x68c;
					constexpr auto add_decal = 0x690;
					constexpr auto v_decal_position = 0x694;
					constexpr auto v_decal_forward_axis = 0x6a0;
					constexpr auto decal_heal_blood_rate = 0x6ac;
					constexpr auto decal_heal_height_rate = 0x6b0;
					constexpr auto config_entities_to_propagate_material_decals_to = 0x6b8;
					constexpr auto vec_view_offset = 0x6d0;
				} // namespace cbase_model_entity

				namespace clogic_relay
				{
					constexpr auto on_trigger = 0x4b0;
					constexpr auto on_spawn = 0x4d8;
					constexpr auto disabled = 0x500;
					constexpr auto wait_for_refire = 0x501;
					constexpr auto trigger_once = 0x502;
					constexpr auto fast_retrigger = 0x503;
					constexpr auto passthough_caller = 0x504;
				} // namespace clogic_relay

				namespace cparticle_system
				{
					constexpr auto snapshot_file_name_arr = 0x700;
					constexpr auto active = 0x900;
					constexpr auto frozen = 0x901;
					constexpr auto freeze_transition_duration = 0x904;
					constexpr auto stop_type = 0x908;
					constexpr auto animate_during_gameplay_pause = 0x90c;
					constexpr auto effect_index = 0x910;
					constexpr auto start_time = 0x918;
					constexpr auto pre_sim_time = 0x91c;
					constexpr auto v_server_control_points_arr = 0x920;
					constexpr auto server_control_point_assignments_arr = 0x950;
					constexpr auto h_control_point_ents_arr = 0x954;
					constexpr auto no_save = 0xa54;
					constexpr auto no_freeze = 0xa55;
					constexpr auto no_ramp = 0xa56;
					constexpr auto start_active = 0xa57;
					constexpr auto isz_effect_name = 0xa58;
					constexpr auto isz_control_point_names_arr = 0xa60;
					constexpr auto data_cp = 0xc60;
					constexpr auto vec_data_cpvalue = 0xc64;
					constexpr auto tint_cp = 0xc70;
					constexpr auto clr_tint = 0xc74;
				} // namespace cparticle_system

				namespace cpath_particle_rope
				{
					constexpr auto start_active = 0x4b0;
					constexpr auto max_simulation_time = 0x4b4;
					constexpr auto isz_effect_name = 0x4b8;
					constexpr auto path_nodes_name = 0x4c0;
					constexpr auto particle_spacing = 0x4d8;
					constexpr auto slack = 0x4dc;
					constexpr auto radius = 0x4e0;
					constexpr auto color_tint = 0x4e4;
					constexpr auto effect_state = 0x4e8;
					constexpr auto effect_index = 0x4f0;
					constexpr auto path_nodes_position = 0x4f8;
					constexpr auto path_nodes_tangent_in = 0x510;
					constexpr auto path_nodes_tangent_out = 0x528;
					constexpr auto path_nodes_color = 0x540;
					constexpr auto path_nodes_pin_enabled = 0x558;
					constexpr auto path_nodes_radius_scale = 0x570;
				} // namespace cpath_particle_rope

				namespace cfunc_wall
				{
					constexpr auto state = 0x700;
				} // namespace cfunc_wall

				namespace cfunc_vphysics_clip
				{
					constexpr auto disabled = 0x700;
				} // namespace cfunc_vphysics_clip

				namespace cfunc_interaction_layer_clip
				{
					constexpr auto disabled = 0x700;
					constexpr auto isz_interacts_as = 0x708;
					constexpr auto isz_interacts_with = 0x710;
				} // namespace cfunc_interaction_layer_clip

				namespace ccommentary_auto
				{
					constexpr auto on_commentary_new_game = 0x4b0;
					constexpr auto on_commentary_mid_game = 0x4d8;
					constexpr auto on_commentary_multiplayer_spawn = 0x500;
				} // namespace ccommentary_auto

				namespace cdynamic_light
				{
					constexpr auto actual_flags = 0x700;
					constexpr auto flags = 0x701;
					constexpr auto light_style = 0x702;
					constexpr auto on = 0x703;
					constexpr auto radius = 0x704;
					constexpr auto exponent = 0x708;
					constexpr auto inner_angle = 0x70c;
					constexpr auto outer_angle = 0x710;
					constexpr auto spot_radius = 0x714;
				} // namespace cdynamic_light

				namespace cbubbling
				{
					constexpr auto density = 0x700;
					constexpr auto frequency = 0x704;
					constexpr auto state = 0x708;
				} // namespace cbubbling

				namespace cenv_tracer
				{
					constexpr auto vec_end = 0x4b0;
					constexpr auto delay = 0x4bc;
				} // namespace cenv_tracer

				namespace ctest_effect
				{
					constexpr auto loop = 0x4b0;
					constexpr auto beam = 0x4b4;
					constexpr auto beam_arr_ptr = 0x4b8;
					constexpr auto beam_time_arr = 0x578;
					constexpr auto start_time = 0x5d8;
				} // namespace ctest_effect

				namespace cblood
				{
					constexpr auto vec_spray_angles = 0x4b0;
					constexpr auto vec_spray_dir = 0x4bc;
					constexpr auto amount = 0x4c8;
					constexpr auto color = 0x4cc;
				} // namespace cblood

				namespace cenv_beverage
				{
					constexpr auto can_in_dispenser = 0x4b0;
					constexpr auto beverage_type = 0x4b4;
				} // namespace cenv_beverage

				namespace cenv_wind
				{
					constexpr auto env_wind_shared = 0x4b0;
				} // namespace cenv_wind

				namespace cphysics_wire
				{
					constexpr auto density = 0x4b0;
				} // namespace cphysics_wire

				namespace cenv_muzzle_flash
				{
					constexpr auto scale = 0x4b0;
					constexpr auto isz_parent_attachment = 0x4b8;
				} // namespace cenv_muzzle_flash

				namespace cenv_splash
				{
					constexpr auto scale = 0x4b0;
				} // namespace cenv_splash

				namespace cenv_view_punch
				{
					constexpr auto radius = 0x4b0;
					constexpr auto ang_view_punch = 0x4b4;
				} // namespace cenv_view_punch

				namespace cenv_entity_igniter
				{
					constexpr auto lifetime = 0x4b0;
				} // namespace cenv_entity_igniter

				namespace cdebug_history
				{
					constexpr auto npc_events = 0x1f44f0;
				} // namespace cdebug_history

				namespace cenv_entity_maker
				{
					constexpr auto vec_entity_mins = 0x4b0;
					constexpr auto vec_entity_maxs = 0x4bc;
					constexpr auto h_current_instance = 0x4c8;
					constexpr auto h_current_blocker = 0x4cc;
					constexpr auto vec_blocker_origin = 0x4d0;
					constexpr auto ang_post_spawn_direction = 0x4dc;
					constexpr auto post_spawn_direction_variance = 0x4e8;
					constexpr auto post_spawn_speed = 0x4ec;
					constexpr auto post_spawn_use_angles = 0x4f0;
					constexpr auto isz_template = 0x4f8;
					constexpr auto output_on_spawned = 0x500;
					constexpr auto output_on_failed_spawn = 0x528;
				} // namespace cenv_entity_maker

				namespace cenv_instructor_hint
				{
					constexpr auto isz_name = 0x4b0;
					constexpr auto isz_replace_key = 0x4b8;
					constexpr auto isz_hint_target_entity = 0x4c0;
					constexpr auto timeout = 0x4c8;
					constexpr auto display_limit = 0x4cc;
					constexpr auto isz_icon_onscreen = 0x4d0;
					constexpr auto isz_icon_offscreen = 0x4d8;
					constexpr auto isz_caption = 0x4e0;
					constexpr auto isz_activator_caption = 0x4e8;
					constexpr auto color = 0x4f0;
					constexpr auto icon_offset = 0x4f4;
					constexpr auto range = 0x4f8;
					constexpr auto pulse_option = 0x4fc;
					constexpr auto alpha_option = 0x4fd;
					constexpr auto shake_option = 0x4fe;
					constexpr auto static_ = 0x4ff;
					constexpr auto no_offscreen = 0x500;
					constexpr auto force_caption = 0x501;
					constexpr auto instance_type = 0x504;
					constexpr auto suppress_rest = 0x508;
					constexpr auto isz_binding = 0x510;
					constexpr auto allow_no_draw_target = 0x518;
					constexpr auto auto_start = 0x519;
					constexpr auto local_player_only = 0x51a;
				} // namespace cenv_instructor_hint

				namespace cenv_instructor_vrhint
				{
					constexpr auto isz_name = 0x4b0;
					constexpr auto isz_hint_target_entity = 0x4b8;
					constexpr auto timeout = 0x4c0;
					constexpr auto isz_caption = 0x4c8;
					constexpr auto isz_start_sound = 0x4d0;
					constexpr auto layout_file_type = 0x4d8;
					constexpr auto isz_custom_layout_file = 0x4e0;
					constexpr auto attach_type = 0x4e8;
					constexpr auto height_offset = 0x4ec;
				} // namespace cenv_instructor_vrhint

				namespace cinstructor_event_entity
				{
					constexpr auto isz_name = 0x4b0;
					constexpr auto isz_hint_target_entity = 0x4b8;
					constexpr auto h_target_player = 0x4c0;
				} // namespace cinstructor_event_entity

				namespace cenv_screen_overlay
				{
					constexpr auto isz_overlay_names_arr = 0x4b0;
					constexpr auto overlay_times_arr = 0x500;
					constexpr auto start_time = 0x528;
					constexpr auto desired_overlay = 0x52c;
					constexpr auto is_active = 0x530;
				} // namespace cenv_screen_overlay

				namespace cenv_fade
				{
					constexpr auto fade_color = 0x4b0;
					constexpr auto duration = 0x4b4;
					constexpr auto hold_duration = 0x4b8;
					constexpr auto on_begin_fade = 0x4c0;
				} // namespace cenv_fade

				namespace ccredits
				{
					constexpr auto on_credits_done = 0x4b0;
					constexpr auto rolled_outro_credits = 0x4d8;
					constexpr auto logo_length = 0x4dc;
				} // namespace ccredits

				namespace cenv_shake
				{
					constexpr auto limit_to_entity = 0x4b0;
					constexpr auto amplitude = 0x4b8;
					constexpr auto frequency = 0x4bc;
					constexpr auto duration = 0x4c0;
					constexpr auto radius = 0x4c4;
					constexpr auto stop_time = 0x4c8;
					constexpr auto next_shake = 0x4cc;
					constexpr auto current_amp = 0x4d0;
					constexpr auto max_force = 0x4d4;
					constexpr auto shake_callback = 0x4e8;
				} // namespace cenv_shake

				namespace cenv_tilt
				{
					constexpr auto duration = 0x4b0;
					constexpr auto radius = 0x4b4;
					constexpr auto tilt_time = 0x4b8;
					constexpr auto stop_time = 0x4bc;
				} // namespace cenv_tilt

				namespace cenv_spark
				{
					constexpr auto delay = 0x4b0;
					constexpr auto magnitude = 0x4b4;
					constexpr auto trail_length = 0x4b8;
					constexpr auto type = 0x4bc;
					constexpr auto on_spark = 0x4c0;
				} // namespace cenv_spark

				namespace cenv_explosion
				{
					constexpr auto magnitude = 0x700;
					constexpr auto player_damage = 0x704;
					constexpr auto radius_override = 0x708;
					constexpr auto inner_radius = 0x70c;
					constexpr auto sprite_scale = 0x710;
					constexpr auto damage_force = 0x714;
					constexpr auto h_inflictor = 0x718;
					constexpr auto custom_damage_type = 0x71c;
					constexpr auto isz_explosion_type = 0x728;
					constexpr auto isz_custom_effect_name = 0x730;
					constexpr auto isz_custom_sound_name = 0x738;
					constexpr auto class_ignore = 0x740;
					constexpr auto class_ignore2 = 0x744;
					constexpr auto isz_entity_ignore_name = 0x748;
					constexpr auto h_entity_ignore = 0x750;
				} // namespace cenv_explosion

				namespace cfilter_name
				{
					constexpr auto filter_name = 0x508;
				} // namespace cfilter_name

				namespace cfilter_model
				{
					constexpr auto filter_model = 0x508;
				} // namespace cfilter_model

				namespace cfilter_context
				{
					constexpr auto filter_context = 0x508;
				} // namespace cfilter_context

				namespace filter_team
				{
					constexpr auto filter_team = 0x508;
				} // namespace filter_team

				namespace cfilter_mass_greater
				{
					constexpr auto filter_mass = 0x508;
				} // namespace cfilter_mass_greater

				namespace filter_damage_type
				{
					constexpr auto damage_type = 0x508;
				} // namespace filter_damage_type

				namespace filter_health
				{
					constexpr auto adrenaline_active = 0x508;
					constexpr auto health_min = 0x50c;
					constexpr auto health_max = 0x510;
				} // namespace filter_health

				namespace cfilter_enemy
				{
					constexpr auto isz_enemy_name = 0x508;
					constexpr auto radius = 0x510;
					constexpr auto outer_radius = 0x514;
					constexpr auto max_squadmates_per_enemy = 0x518;
					constexpr auto isz_player_name = 0x520;
				} // namespace cfilter_enemy

				namespace cfilter_attribute_int
				{
					constexpr auto s_attribute_name = 0x508;
				} // namespace cfilter_attribute_int

				namespace cfire
				{
					constexpr auto h_effect = 0x700;
					constexpr auto h_owner = 0x704;
					constexpr auto fire_type = 0x708;
					constexpr auto fuel = 0x70c;
					constexpr auto damage_time = 0x710;
					constexpr auto last_damage = 0x714;
					constexpr auto fire_size = 0x718;
					constexpr auto last_nav_update_time = 0x71c;
					constexpr auto heat_level = 0x720;
					constexpr auto heat_absorb = 0x724;
					constexpr auto damage_scale = 0x728;
					constexpr auto max_heat = 0x72c;
					constexpr auto last_heat_level = 0x730;
					constexpr auto attack_time = 0x734;
					constexpr auto enabled = 0x738;
					constexpr auto start_disabled = 0x739;
					constexpr auto did_activate = 0x73a;
					constexpr auto on_ignited = 0x740;
					constexpr auto on_extinguished = 0x768;
				} // namespace cfire

				namespace cenv_fire_source
				{
					constexpr auto enabled = 0x4b0;
					constexpr auto radius = 0x4b4;
					constexpr auto damage = 0x4b8;
				} // namespace cenv_fire_source

				namespace cenv_fire_sensor
				{
					constexpr auto enabled = 0x4b0;
					constexpr auto heat_at_level = 0x4b1;
					constexpr auto radius = 0x4b4;
					constexpr auto target_level = 0x4b8;
					constexpr auto target_time = 0x4bc;
					constexpr auto level_time = 0x4c0;
					constexpr auto on_heat_level_start = 0x4c8;
					constexpr auto on_heat_level_end = 0x4f0;
				} // namespace cenv_fire_sensor

				namespace cfunc_timescale
				{
					constexpr auto desired_timescale = 0x4b0;
					constexpr auto acceleration = 0x4b4;
					constexpr auto min_blend_rate = 0x4b8;
					constexpr auto blend_delta_multiplier = 0x4bc;
					constexpr auto is_started = 0x4c0;
				} // namespace cfunc_timescale

				namespace clight_glow
				{
					constexpr auto horizontal_size = 0x700;
					constexpr auto vertical_size = 0x704;
					constexpr auto min_dist = 0x708;
					constexpr auto max_dist = 0x70c;
					constexpr auto outer_max_dist = 0x710;
					constexpr auto glow_proxy_size = 0x714;
					constexpr auto hdrcolor_scale = 0x718;
				} // namespace clight_glow

				namespace clogic_achievement
				{
					constexpr auto disabled = 0x4b0;
					constexpr auto isz_achievement_event_id = 0x4b8;
					constexpr auto on_fired = 0x4c0;
				} // namespace clogic_achievement

				namespace clogic_game_event_listener
				{
					constexpr auto on_event_fired = 0x4c0;
					constexpr auto isz_game_event_name = 0x4e8;
					constexpr auto isz_game_event_item = 0x4f0;
					constexpr auto enabled = 0x4f8;
					constexpr auto start_disabled = 0x4f9;
				} // namespace clogic_game_event_listener

				namespace clogic_measure_movement
				{
					constexpr auto str_measure_target = 0x4b0;
					constexpr auto str_measure_reference = 0x4b8;
					constexpr auto str_target_reference = 0x4c0;
					constexpr auto h_measure_target = 0x4c8;
					constexpr auto h_measure_reference = 0x4cc;
					constexpr auto h_target = 0x4d0;
					constexpr auto h_target_reference = 0x4d4;
					constexpr auto scale = 0x4d8;
					constexpr auto measure_type = 0x4dc;
				} // namespace clogic_measure_movement

				namespace clogic_navigation
				{
					constexpr auto is_on = 0x4b8;
					constexpr auto nav_property = 0x4bc;
				} // namespace clogic_navigation

				namespace clogic_npccounter
				{
					constexpr auto on_min_count_all = 0x4b0;
					constexpr auto on_max_count_all = 0x4d8;
					constexpr auto on_factor_all = 0x500;
					constexpr auto on_min_player_dist_all = 0x528;
					constexpr auto on_min_count_1 = 0x550;
					constexpr auto on_max_count_1 = 0x578;
					constexpr auto on_factor_1 = 0x5a0;
					constexpr auto on_min_player_dist_1 = 0x5c8;
					constexpr auto on_min_count_2 = 0x5f0;
					constexpr auto on_max_count_2 = 0x618;
					constexpr auto on_factor_2 = 0x640;
					constexpr auto on_min_player_dist_2 = 0x668;
					constexpr auto on_min_count_3 = 0x690;
					constexpr auto on_max_count_3 = 0x6b8;
					constexpr auto on_factor_3 = 0x6e0;
					constexpr auto on_min_player_dist_3 = 0x708;
					constexpr auto h_source = 0x730;
					constexpr auto isz_source_entity_name = 0x738;
					constexpr auto distance_max = 0x740;
					constexpr auto disabled = 0x744;
					constexpr auto min_count_all = 0x748;
					constexpr auto max_count_all = 0x74c;
					constexpr auto min_factor_all = 0x750;
					constexpr auto max_factor_all = 0x754;
					constexpr auto isz_npcclassname_1 = 0x760;
					constexpr auto npcstate_1 = 0x768;
					constexpr auto invert_state_1 = 0x76c;
					constexpr auto min_count_1 = 0x770;
					constexpr auto max_count_1 = 0x774;
					constexpr auto min_factor_1 = 0x778;
					constexpr auto max_factor_1 = 0x77c;
					constexpr auto default_dist_1 = 0x784;
					constexpr auto isz_npcclassname_2 = 0x788;
					constexpr auto npcstate_2 = 0x790;
					constexpr auto invert_state_2 = 0x794;
					constexpr auto min_count_2 = 0x798;
					constexpr auto max_count_2 = 0x79c;
					constexpr auto min_factor_2 = 0x7a0;
					constexpr auto max_factor_2 = 0x7a4;
					constexpr auto default_dist_2 = 0x7ac;
					constexpr auto isz_npcclassname_3 = 0x7b0;
					constexpr auto npcstate_3 = 0x7b8;
					constexpr auto invert_state_3 = 0x7bc;
					constexpr auto min_count_3 = 0x7c0;
					constexpr auto max_count_3 = 0x7c4;
					constexpr auto min_factor_3 = 0x7c8;
					constexpr auto max_factor_3 = 0x7cc;
					constexpr auto default_dist_3 = 0x7d4;
				} // namespace clogic_npccounter

				namespace clogic_npccounter_aabb
				{
					constexpr auto v_distance_outer_mins = 0x7f0;
					constexpr auto v_distance_outer_maxs = 0x7fc;
					constexpr auto v_outer_mins = 0x808;
					constexpr auto v_outer_maxs = 0x814;
				} // namespace clogic_npccounter_aabb

				namespace clogic_player_proxy
				{
					constexpr auto h_player = 0x4b0;
					constexpr auto player_has_ammo = 0x4b8;
					constexpr auto player_has_no_ammo = 0x4e0;
					constexpr auto player_died = 0x508;
					constexpr auto requested_player_health = 0x530;
				} // namespace clogic_player_proxy

				namespace clogic_auto
				{
					constexpr auto on_map_spawn = 0x4b0;
					constexpr auto on_demo_map_spawn = 0x4d8;
					constexpr auto on_new_game = 0x500;
					constexpr auto on_load_game = 0x528;
					constexpr auto on_map_transition = 0x550;
					constexpr auto on_background_map = 0x578;
					constexpr auto on_multi_new_map = 0x5a0;
					constexpr auto on_multi_new_round = 0x5c8;
					constexpr auto on_vrenabled = 0x5f0;
					constexpr auto on_vrnot_enabled = 0x618;
					constexpr auto globalstate = 0x640;
				} // namespace clogic_auto

				namespace ctimer_entity
				{
					constexpr auto on_timer = 0x4b0;
					constexpr auto on_timer_high = 0x4d8;
					constexpr auto on_timer_low = 0x500;
					constexpr auto disabled = 0x528;
					constexpr auto initial_delay = 0x52c;
					constexpr auto refire_time = 0x530;
					constexpr auto up_down_state = 0x534;
					constexpr auto use_random_time = 0x538;
					constexpr auto pause_after_firing = 0x53c;
					constexpr auto lower_random_bound = 0x540;
					constexpr auto upper_random_bound = 0x544;
					constexpr auto remaining_time = 0x548;
					constexpr auto paused = 0x54c;
				} // namespace ctimer_entity

				namespace clogic_line_to_entity
				{
					constexpr auto line = 0x4b0;
					constexpr auto source_name = 0x4d8;
					constexpr auto start_entity = 0x4e0;
					constexpr auto end_entity = 0x4e4;
				} // namespace clogic_line_to_entity

				namespace cmath_remap
				{
					constexpr auto in_min = 0x4b0;
					constexpr auto in_max = 0x4b4;
					constexpr auto out1 = 0x4b8;
					constexpr auto out2 = 0x4bc;
					constexpr auto old_in_value = 0x4c0;
					constexpr auto enabled = 0x4c4;
					constexpr auto out_value = 0x4c8;
					constexpr auto on_rose_above_min = 0x4f0;
					constexpr auto on_rose_above_max = 0x518;
					constexpr auto on_fell_below_min = 0x540;
					constexpr auto on_fell_below_max = 0x568;
				} // namespace cmath_remap

				namespace cmath_color_blend
				{
					constexpr auto in_min = 0x4b0;
					constexpr auto in_max = 0x4b4;
					constexpr auto out_color1 = 0x4b8;
					constexpr auto out_color2 = 0x4bc;
					constexpr auto out_value = 0x4c0;
				} // namespace cmath_color_blend

				namespace cenv_global
				{
					constexpr auto out_counter = 0x4b0;
					constexpr auto globalstate = 0x4d8;
					constexpr auto triggermode = 0x4e0;
					constexpr auto initialstate = 0x4e4;
					constexpr auto counter = 0x4e8;
				} // namespace cenv_global

				namespace cmulti_source
				{
					constexpr auto rg_entities_arr = 0x4b0;
					constexpr auto rg_triggered_arr = 0x530;
					constexpr auto on_trigger = 0x5b0;
					constexpr auto total = 0x5d8;
					constexpr auto globalstate = 0x5e0;
				} // namespace cmulti_source

				namespace cmath_counter
				{
					constexpr auto min = 0x4b0;
					constexpr auto max = 0x4b4;
					constexpr auto hit_min = 0x4b8;
					constexpr auto hit_max = 0x4b9;
					constexpr auto disabled = 0x4ba;
					constexpr auto out_value = 0x4c0;
					constexpr auto on_get_value = 0x4e8;
					constexpr auto on_hit_min = 0x510;
					constexpr auto on_hit_max = 0x538;
					constexpr auto on_changed_from_min = 0x560;
					constexpr auto on_changed_from_max = 0x588;
				} // namespace cmath_counter

				namespace clogic_case
				{
					constexpr auto case_arr = 0x4b0;
					constexpr auto shuffle_cases = 0x5b0;
					constexpr auto last_shuffle_case = 0x5b4;
					constexpr auto uch_shuffle_case_map_arr = 0x5b8;
					constexpr auto on_case_arr = 0x5d8;
					constexpr auto on_default = 0xad8;
				} // namespace clogic_case

				namespace clogic_compare
				{
					constexpr auto in_value = 0x4b0;
					constexpr auto compare_value = 0x4b4;
					constexpr auto on_less_than = 0x4b8;
					constexpr auto on_equal_to = 0x4e0;
					constexpr auto on_not_equal_to = 0x508;
					constexpr auto on_greater_than = 0x530;
				} // namespace clogic_compare

				namespace clogic_autosave
				{
					constexpr auto force_new_level_unit = 0x4b0;
					constexpr auto min_hit_points = 0x4b4;
					constexpr auto min_hit_points_to_commit = 0x4b8;
				} // namespace clogic_autosave

				namespace clogic_active_autosave
				{
					constexpr auto trigger_hit_points = 0x4c0;
					constexpr auto time_to_trigger = 0x4c4;
					constexpr auto start_time = 0x4c8;
					constexpr auto dangerous_time = 0x4cc;
				} // namespace clogic_active_autosave

				namespace clogic_distance_autosave
				{
					constexpr auto isz_target_entity = 0x4b0;
					constexpr auto distance_to_player = 0x4b8;
					constexpr auto force_new_level_unit = 0x4bc;
					constexpr auto check_cough = 0x4bd;
					constexpr auto think_dangerous = 0x4be;
					constexpr auto dangerous_time = 0x4c0;
				} // namespace clogic_distance_autosave

				namespace clogic_collision_pair
				{
					constexpr auto name_attach1 = 0x4b0;
					constexpr auto name_attach2 = 0x4b8;
					constexpr auto disabled = 0x4c0;
					constexpr auto succeeded = 0x4c1;
				} // namespace clogic_collision_pair

				namespace clogic_branch_list
				{
					constexpr auto logic_branch_names_arr = 0x4b0;
					constexpr auto logic_branch_list = 0x530;
					constexpr auto e_last_state = 0x548;
					constexpr auto on_all_true = 0x550;
					constexpr auto on_all_false = 0x578;
					constexpr auto on_mixed = 0x5a0;
				} // namespace clogic_branch_list

				namespace clogic_game_event
				{
					constexpr auto isz_event_name = 0x4b0;
				} // namespace clogic_game_event

				namespace cmessage_entity
				{
					constexpr auto radius = 0x4b0;
					constexpr auto message_text = 0x4b8;
					constexpr auto draw_text = 0x4c0;
					constexpr auto developer_only = 0x4c1;
					constexpr auto enabled = 0x4c2;
				} // namespace cmessage_entity

				namespace ctrigger_brush
				{
					constexpr auto on_start_touch = 0x700;
					constexpr auto on_end_touch = 0x728;
					constexpr auto on_use = 0x750;
					constexpr auto input_filter = 0x778;
					constexpr auto dont_message_parent = 0x77c;
				} // namespace ctrigger_brush

				namespace cpath_key_frame
				{
					constexpr auto origin = 0x4b0;
					constexpr auto angles = 0x4bc;
					constexpr auto q_angle = 0x4d0;
					constexpr auto next_key = 0x4e0;
					constexpr auto next_time = 0x4e8;
					constexpr auto next_key_ptr = 0x4f0;
					constexpr auto prev_key_ptr = 0x4f8;
					constexpr auto speed = 0x500;
				} // namespace cpath_key_frame

				namespace cbase_move_behavior
				{
					constexpr auto position_interpolator = 0x510;
					constexpr auto rotation_interpolator = 0x514;
					constexpr auto anim_start_time = 0x518;
					constexpr auto anim_end_time = 0x51c;
					constexpr auto average_speed_across_frame = 0x520;
					constexpr auto current_key_frame_ptr = 0x528;
					constexpr auto target_key_frame_ptr = 0x530;
					constexpr auto pre_key_frame_ptr = 0x538;
					constexpr auto post_key_frame_ptr = 0x540;
					constexpr auto time_into_frame = 0x548;
					constexpr auto direction = 0x54c;
				} // namespace cbase_move_behavior

				namespace cpath_corner
				{
					constexpr auto wait = 0x4b0;
					constexpr auto radius = 0x4b4;
					constexpr auto on_pass = 0x4b8;
				} // namespace cpath_corner

				namespace cphys_force
				{
					constexpr auto name_attach = 0x4b8;
					constexpr auto force = 0x4c0;
					constexpr auto force_time = 0x4c4;
					constexpr auto attached_object = 0x4c8;
					constexpr auto was_restored = 0x4cc;
					constexpr auto integrator = 0x4d0;
				} // namespace cphys_force

				namespace cphys_thruster
				{
					constexpr auto local_origin = 0x510;
				} // namespace cphys_thruster

				namespace cphys_torque
				{
					constexpr auto axis = 0x510;
				} // namespace cphys_torque

				namespace cphys_motor
				{
					constexpr auto name_attach = 0x4b0;
					constexpr auto h_attached_object = 0x4b8;
					constexpr auto spin_up = 0x4bc;
					constexpr auto additional_acceleration = 0x4c0;
					constexpr auto angular_acceleration = 0x4c4;
					constexpr auto last_time = 0x4c8;
					constexpr auto motor = 0x4e0;
				} // namespace cphys_motor

				namespace ckeep_upright
				{
					constexpr auto world_goal_axis = 0x4b8;
					constexpr auto local_test_axis = 0x4c4;
					constexpr auto name_attach = 0x4d8;
					constexpr auto attached_object = 0x4e0;
					constexpr auto angular_limit = 0x4e4;
					constexpr auto active = 0x4e8;
					constexpr auto damp_all_rotation = 0x4e9;
				} // namespace ckeep_upright

				namespace cphys_constraint
				{
					constexpr auto name_attach1 = 0x4b8;
					constexpr auto name_attach2 = 0x4c0;
					constexpr auto break_sound = 0x4c8;
					constexpr auto force_limit = 0x4d0;
					constexpr auto torque_limit = 0x4d4;
					constexpr auto teleport_tick = 0x4d8;
					constexpr auto min_teleport_distance = 0x4dc;
					constexpr auto on_break = 0x4e0;
				} // namespace cphys_constraint

				namespace cphys_hinge
				{
					constexpr auto sound_info = 0x510;
					constexpr auto notify_min_limit_reached = 0x598;
					constexpr auto notify_max_limit_reached = 0x5c0;
					constexpr auto at_min_limit = 0x5e8;
					constexpr auto at_max_limit = 0x5e9;
					constexpr auto hinge = 0x5ec;
					constexpr auto hinge_friction = 0x62c;
					constexpr auto system_load_scale = 0x630;
					constexpr auto is_axis_local = 0x634;
					constexpr auto min_rotation = 0x638;
					constexpr auto max_rotation = 0x63c;
					constexpr auto initial_rotation = 0x640;
					constexpr auto motor_frequency = 0x644;
					constexpr auto motor_damping_ratio = 0x648;
					constexpr auto angle_speed = 0x64c;
					constexpr auto angle_speed_threshold = 0x650;
					constexpr auto on_start_moving = 0x658;
					constexpr auto on_stop_moving = 0x680;
				} // namespace cphys_hinge

				namespace cphys_ball_socket
				{
					constexpr auto friction = 0x508;
					constexpr auto enable_swing_limit = 0x50c;
					constexpr auto swing_limit = 0x510;
					constexpr auto enable_twist_limit = 0x514;
					constexpr auto min_twist_angle = 0x518;
					constexpr auto max_twist_angle = 0x51c;
				} // namespace cphys_ball_socket

				namespace cphys_slide_constraint
				{
					constexpr auto axis_end = 0x510;
					constexpr auto slide_friction = 0x51c;
					constexpr auto system_load_scale = 0x520;
					constexpr auto initial_offset = 0x524;
					constexpr auto enable_linear_constraint = 0x528;
					constexpr auto enable_angular_constraint = 0x529;
					constexpr auto motor_frequency = 0x52c;
					constexpr auto motor_damping_ratio = 0x530;
					constexpr auto use_entity_pivot = 0x534;
					constexpr auto sound_info = 0x538;
				} // namespace cphys_slide_constraint

				namespace cphys_fixed
				{
					constexpr auto linear_frequency = 0x508;
					constexpr auto linear_damping_ratio = 0x50c;
					constexpr auto angular_frequency = 0x510;
					constexpr auto angular_damping_ratio = 0x514;
					constexpr auto enable_linear_constraint = 0x518;
					constexpr auto enable_angular_constraint = 0x519;
				} // namespace cphys_fixed

				namespace cphys_pulley
				{
					constexpr auto position2 = 0x508;
					constexpr auto offset_arr = 0x514;
					constexpr auto add_length = 0x52c;
					constexpr auto gear_ratio = 0x530;
				} // namespace cphys_pulley

				namespace cphys_length
				{
					constexpr auto offset_arr = 0x508;
					constexpr auto vec_attach = 0x520;
					constexpr auto add_length = 0x52c;
					constexpr auto min_length = 0x530;
					constexpr auto total_length = 0x534;
					constexpr auto enable_collision = 0x538;
				} // namespace cphys_length

				namespace cragdoll_constraint
				{
					constexpr auto xmin = 0x508;
					constexpr auto xmax = 0x50c;
					constexpr auto ymin = 0x510;
					constexpr auto ymax = 0x514;
					constexpr auto zmin = 0x518;
					constexpr auto zmax = 0x51c;
					constexpr auto xfriction = 0x520;
					constexpr auto yfriction = 0x524;
					constexpr auto zfriction = 0x528;
				} // namespace cragdoll_constraint

				namespace cgeneric_constraint
				{
					constexpr auto linear_motion_x = 0x510;
					constexpr auto linear_motion_y = 0x514;
					constexpr auto linear_motion_z = 0x518;
					constexpr auto linear_frequency_x = 0x51c;
					constexpr auto linear_frequency_y = 0x520;
					constexpr auto linear_frequency_z = 0x524;
					constexpr auto linear_damping_ratio_x = 0x528;
					constexpr auto linear_damping_ratio_y = 0x52c;
					constexpr auto linear_damping_ratio_z = 0x530;
					constexpr auto max_linear_impulse_x = 0x534;
					constexpr auto max_linear_impulse_y = 0x538;
					constexpr auto max_linear_impulse_z = 0x53c;
					constexpr auto break_after_time_x = 0x540;
					constexpr auto break_after_time_y = 0x544;
					constexpr auto break_after_time_z = 0x548;
					constexpr auto break_after_time_start_time_x = 0x54c;
					constexpr auto break_after_time_start_time_y = 0x550;
					constexpr auto break_after_time_start_time_z = 0x554;
					constexpr auto break_after_time_threshold_x = 0x558;
					constexpr auto break_after_time_threshold_y = 0x55c;
					constexpr auto break_after_time_threshold_z = 0x560;
					constexpr auto notify_force_x = 0x564;
					constexpr auto notify_force_y = 0x568;
					constexpr auto notify_force_z = 0x56c;
					constexpr auto notify_force_min_time_x = 0x570;
					constexpr auto notify_force_min_time_y = 0x574;
					constexpr auto notify_force_min_time_z = 0x578;
					constexpr auto notify_force_last_time_x = 0x57c;
					constexpr auto notify_force_last_time_y = 0x580;
					constexpr auto notify_force_last_time_z = 0x584;
					constexpr auto axis_notified_x = 0x588;
					constexpr auto axis_notified_y = 0x589;
					constexpr auto axis_notified_z = 0x58a;
					constexpr auto angular_motion_x = 0x58c;
					constexpr auto angular_motion_y = 0x590;
					constexpr auto angular_motion_z = 0x594;
					constexpr auto angular_frequency_x = 0x598;
					constexpr auto angular_frequency_y = 0x59c;
					constexpr auto angular_frequency_z = 0x5a0;
					constexpr auto angular_damping_ratio_x = 0x5a4;
					constexpr auto angular_damping_ratio_y = 0x5a8;
					constexpr auto angular_damping_ratio_z = 0x5ac;
					constexpr auto max_angular_impulse_x = 0x5b0;
					constexpr auto max_angular_impulse_y = 0x5b4;
					constexpr auto max_angular_impulse_z = 0x5b8;
					constexpr auto notify_force_reached_x = 0x5c0;
					constexpr auto notify_force_reached_y = 0x5e8;
					constexpr auto notify_force_reached_z = 0x610;
				} // namespace cgeneric_constraint

				namespace cphys_wheel_constraint
				{
					constexpr auto suspension_frequency = 0x508;
					constexpr auto suspension_damping_ratio = 0x50c;
					constexpr auto suspension_height_offset = 0x510;
					constexpr auto enable_suspension_limit = 0x514;
					constexpr auto min_suspension_offset = 0x518;
					constexpr auto max_suspension_offset = 0x51c;
					constexpr auto enable_steering_limit = 0x520;
					constexpr auto min_steering_angle = 0x524;
					constexpr auto max_steering_angle = 0x528;
					constexpr auto steering_axis_friction = 0x52c;
					constexpr auto spin_axis_friction = 0x530;
				} // namespace cphys_wheel_constraint

				namespace cphysics_entity_solver
				{
					constexpr auto h_moving_entity = 0x4b8;
					constexpr auto h_physics_blocker = 0x4bc;
					constexpr auto separation_duration = 0x4c0;
					constexpr auto cancel_time = 0x4c4;
				} // namespace cphysics_entity_solver

				namespace cphysics_spring
				{
					constexpr auto frequency = 0x4b8;
					constexpr auto damping_ratio = 0x4bc;
					constexpr auto rest_length = 0x4c0;
					constexpr auto name_attach_start = 0x4c8;
					constexpr auto name_attach_end = 0x4d0;
					constexpr auto start = 0x4d8;
					constexpr auto end = 0x4e4;
					constexpr auto teleport_tick = 0x4f0;
				} // namespace cphysics_spring

				namespace cpoint_push
				{
					constexpr auto enabled = 0x4b0;
					constexpr auto magnitude = 0x4b4;
					constexpr auto radius = 0x4b8;
					constexpr auto inner_radius = 0x4bc;
					constexpr auto cone_of_influence = 0x4c0;
					constexpr auto isz_filter_name = 0x4c8;
					constexpr auto h_filter = 0x4d0;
				} // namespace cpoint_push

				namespace cinfo_player_start
				{
					constexpr auto disabled = 0x4b0;
				} // namespace cinfo_player_start

				namespace cpoint_entity_finder
				{
					constexpr auto h_entity = 0x4b0;
					constexpr auto filter_name = 0x4b8;
					constexpr auto h_filter = 0x4c0;
					constexpr auto ref_name = 0x4c8;
					constexpr auto h_reference = 0x4d0;
					constexpr auto find_method = 0x4d4;
					constexpr auto on_found_entity = 0x4d8;
				} // namespace cpoint_entity_finder

				namespace cpoint_value_remapper
				{
					constexpr auto disabled = 0x4b0;
					constexpr auto update_on_client = 0x4b1;
					constexpr auto input_type = 0x4b4;
					constexpr auto isz_remap_line_start_name = 0x4b8;
					constexpr auto isz_remap_line_end_name = 0x4c0;
					constexpr auto h_remap_line_start = 0x4c8;
					constexpr auto h_remap_line_end = 0x4cc;
					constexpr auto maximum_change_per_second = 0x4d0;
					constexpr auto disengage_distance = 0x4d4;
					constexpr auto engage_distance = 0x4d8;
					constexpr auto requires_use_key = 0x4dc;
					constexpr auto output_type = 0x4e0;
					constexpr auto isz_output_entity_name = 0x4e8;
					constexpr auto isz_output_entity2_name = 0x4f0;
					constexpr auto isz_output_entity3_name = 0x4f8;
					constexpr auto isz_output_entity4_name = 0x500;
					constexpr auto h_output_entities = 0x508;
					constexpr auto haptics_type = 0x520;
					constexpr auto momentum_type = 0x524;
					constexpr auto momentum_modifier = 0x528;
					constexpr auto snap_value = 0x52c;
					constexpr auto current_momentum = 0x530;
					constexpr auto ratchet_type = 0x534;
					constexpr auto ratchet_offset = 0x538;
					constexpr auto input_offset = 0x53c;
					constexpr auto engaged = 0x540;
					constexpr auto first_update = 0x541;
					constexpr auto previous_value = 0x544;
					constexpr auto previous_update_tick_time = 0x548;
					constexpr auto vec_previous_test_point = 0x54c;
					constexpr auto h_using_player = 0x558;
					constexpr auto custom_output_value = 0x55c;
					constexpr auto isz_sound_engage = 0x560;
					constexpr auto isz_sound_disengage = 0x568;
					constexpr auto isz_sound_reached_value_zero = 0x570;
					constexpr auto isz_sound_reached_value_one = 0x578;
					constexpr auto isz_sound_moving_loop = 0x580;
					constexpr auto position = 0x590;
					constexpr auto position_delta = 0x5b8;
					constexpr auto on_reached_value_zero = 0x5e0;
					constexpr auto on_reached_value_one = 0x608;
					constexpr auto on_reached_value_custom = 0x630;
					constexpr auto on_engage = 0x658;
					constexpr auto on_disengage = 0x680;
				} // namespace cpoint_value_remapper

				namespace cpoint_world_text
				{
					constexpr auto message_text_arr = 0x700;
					constexpr auto font_name_arr = 0x900;
					constexpr auto enabled = 0x940;
					constexpr auto fullbright = 0x941;
					constexpr auto world_units_per_px = 0x944;
					constexpr auto font_size = 0x948;
					constexpr auto depth_offset = 0x94c;
					constexpr auto color = 0x950;
					constexpr auto justify_horizontal = 0x954;
					constexpr auto justify_vertical = 0x958;
					constexpr auto reorient_mode = 0x95c;
				} // namespace cpoint_world_text

				namespace cpoint_angle_sensor
				{
					constexpr auto disabled = 0x4b0;
					constexpr auto look_at_name = 0x4b8;
					constexpr auto h_target_entity = 0x4c0;
					constexpr auto h_look_at_entity = 0x4c4;
					constexpr auto duration = 0x4c8;
					constexpr auto dot_tolerance = 0x4cc;
					constexpr auto facing_time = 0x4d0;
					constexpr auto fired = 0x4d4;
					constexpr auto on_facing_lookat = 0x4d8;
					constexpr auto on_not_facing_lookat = 0x500;
					constexpr auto target_dir = 0x528;
					constexpr auto facing_percentage = 0x550;
				} // namespace cpoint_angle_sensor

				namespace cpoint_proximity_sensor
				{
					constexpr auto disabled = 0x4b0;
					constexpr auto h_target_entity = 0x4b4;
					constexpr auto distance = 0x4b8;
				} // namespace cpoint_proximity_sensor

				namespace cpoint_angular_velocity_sensor
				{
					constexpr auto h_target_entity = 0x4b0;
					constexpr auto threshold = 0x4b4;
					constexpr auto last_compare_result = 0x4b8;
					constexpr auto last_fire_result = 0x4bc;
					constexpr auto fire_time = 0x4c0;
					constexpr auto fire_interval = 0x4c4;
					constexpr auto last_ang_velocity = 0x4c8;
					constexpr auto last_orientation = 0x4cc;
					constexpr auto vec_axis = 0x4d8;
					constexpr auto use_helper = 0x4e4;
					constexpr auto angular_velocity = 0x4e8;
					constexpr auto on_less_than = 0x510;
					constexpr auto on_less_than_or_equal_to = 0x538;
					constexpr auto on_greater_than = 0x560;
					constexpr auto on_greater_than_or_equal_to = 0x588;
					constexpr auto on_equal_to = 0x5b0;
				} // namespace cpoint_angular_velocity_sensor

				namespace cpoint_velocity_sensor
				{
					constexpr auto h_target_entity = 0x4b0;
					constexpr auto vec_axis = 0x4b4;
					constexpr auto enabled = 0x4c0;
					constexpr auto prev_velocity = 0x4c4;
					constexpr auto avg_interval = 0x4c8;
					constexpr auto velocity = 0x4d0;
				} // namespace cpoint_velocity_sensor

				namespace cpoint_hurt
				{
					constexpr auto damage = 0x4b0;
					constexpr auto bits_damage_type = 0x4b4;
					constexpr auto radius = 0x4b8;
					constexpr auto delay = 0x4bc;
					constexpr auto str_target = 0x4c0;
					constexpr auto activator = 0x4c8;
				} // namespace cpoint_hurt

				namespace cpoint_teleport
				{
					constexpr auto v_save_origin = 0x4b0;
					constexpr auto v_save_angles = 0x4bc;
					constexpr auto teleport_parented_entities = 0x4c8;
					constexpr auto teleport_use_current_angle = 0x4c9;
				} // namespace cpoint_teleport

				namespace cragdoll_manager
				{
					constexpr auto current_max_ragdoll_count = 0x4b0;
					constexpr auto max_ragdoll_count = 0x4b4;
					constexpr auto save_important = 0x4b8;
				} // namespace cragdoll_manager

				namespace crevert_saved
				{
					constexpr auto load_time = 0x700;
					constexpr auto duration = 0x704;
					constexpr auto hold_time = 0x708;
				} // namespace crevert_saved

				namespace cscene_list_manager
				{
					constexpr auto h_list_managers = 0x4b0;
					constexpr auto isz_scenes_arr = 0x4c8;
					constexpr auto h_scenes_arr = 0x548;
				} // namespace cscene_list_manager

				namespace cscene_entity
				{
					constexpr auto isz_scene_file = 0x4b8;
					constexpr auto isz_resume_scene_file = 0x4c0;
					constexpr auto isz_target1 = 0x4c8;
					constexpr auto isz_target2 = 0x4d0;
					constexpr auto isz_target3 = 0x4d8;
					constexpr auto isz_target4 = 0x4e0;
					constexpr auto isz_target5 = 0x4e8;
					constexpr auto isz_target6 = 0x4f0;
					constexpr auto isz_target7 = 0x4f8;
					constexpr auto isz_target8 = 0x500;
					constexpr auto h_target1 = 0x508;
					constexpr auto h_target2 = 0x50c;
					constexpr auto h_target3 = 0x510;
					constexpr auto h_target4 = 0x514;
					constexpr auto h_target5 = 0x518;
					constexpr auto h_target6 = 0x51c;
					constexpr auto h_target7 = 0x520;
					constexpr auto h_target8 = 0x524;
					constexpr auto is_playing_back = 0x528;
					constexpr auto paused = 0x529;
					constexpr auto multiplayer = 0x52a;
					constexpr auto autogenerated = 0x52b;
					constexpr auto force_client_time = 0x52c;
					constexpr auto current_time = 0x530;
					constexpr auto frame_time = 0x534;
					constexpr auto cancel_at_next_interrupt = 0x538;
					constexpr auto pitch = 0x53c;
					constexpr auto automated = 0x540;
					constexpr auto automated_action = 0x544;
					constexpr auto automation_delay = 0x548;
					constexpr auto automation_time = 0x54c;
					constexpr auto h_waiting_for_this_resume_scene = 0x550;
					constexpr auto waiting_for_resume_scene = 0x554;
					constexpr auto paused_via_input = 0x555;
					constexpr auto pause_at_next_interrupt = 0x556;
					constexpr auto waiting_for_actor = 0x557;
					constexpr auto waiting_for_interrupt = 0x558;
					constexpr auto interrupted_actors_scenes = 0x559;
					constexpr auto break_on_non_idle = 0x55a;
					constexpr auto h_actor_list = 0x560;
					constexpr auto h_remove_actor_list = 0x578;
					constexpr auto scene_flush_counter = 0x5a0;
					constexpr auto scene_string_index = 0x5a4;
					constexpr auto on_start = 0x5a8;
					constexpr auto on_completion = 0x5d0;
					constexpr auto on_canceled = 0x5f8;
					constexpr auto on_paused = 0x620;
					constexpr auto on_resumed = 0x648;
					constexpr auto on_trigger_arr = 0x670;
					constexpr auto h_interrupt_scene = 0x980;
					constexpr auto interrupt_count = 0x984;
					constexpr auto scene_missing = 0x988;
					constexpr auto interrupted = 0x989;
					constexpr auto completed_early = 0x98a;
					constexpr auto interrupt_scene_finished = 0x98b;
					constexpr auto restoring = 0x98c;
					constexpr auto h_notify_scene_completion = 0x990;
					constexpr auto h_list_managers = 0x9a8;
					constexpr auto isz_sound_name = 0x9e8;
					constexpr auto h_actor = 0x9f0;
					constexpr auto h_activator = 0x9f4;
					constexpr auto busy_actor = 0x9f8;
					constexpr auto player_death_behavior = 0x9fc;
				} // namespace cscene_entity

				namespace cscripted_sequence
				{
					constexpr auto isz_entry = 0x4b0;
					constexpr auto isz_pre_idle = 0x4b8;
					constexpr auto isz_play = 0x4c0;
					constexpr auto isz_post_idle = 0x4c8;
					constexpr auto isz_modifier_to_add_on_play = 0x4d0;
					constexpr auto isz_next_script = 0x4d8;
					constexpr auto isz_entity = 0x4e0;
					constexpr auto isz_sync_group = 0x4e8;
					constexpr auto move_to = 0x4f0;
					constexpr auto is_playing_pre_idle = 0x4f4;
					constexpr auto is_playing_entry = 0x4f5;
					constexpr auto is_playing_action = 0x4f6;
					constexpr auto is_playing_post_idle = 0x4f7;
					constexpr auto loop_pre_idle_sequence = 0x4f8;
					constexpr auto loop_action_sequence = 0x4f9;
					constexpr auto loop_post_idle_sequence = 0x4fa;
					constexpr auto synch_post_idles = 0x4fb;
					constexpr auto ignore_gravity = 0x4fc;
					constexpr auto disable_npccollisions = 0x4fd;
					constexpr auto keep_animgraph_locked_post = 0x4fe;
					constexpr auto dont_add_modifiers = 0x4ff;
					constexpr auto radius = 0x500;
					constexpr auto repeat = 0x504;
					constexpr auto play_anim_fade_in_time = 0x508;
					constexpr auto move_interp_time = 0x50c;
					constexpr auto ang_rate = 0x510;
					constexpr auto delay = 0x514;
					constexpr auto start_time = 0x518;
					constexpr auto wait_for_begin_sequence = 0x51c;
					constexpr auto saved_effects = 0x520;
					constexpr auto saved_flags = 0x524;
					constexpr auto saved_collision_group = 0x528;
					constexpr auto interruptable = 0x52c;
					constexpr auto sequence_started = 0x52d;
					constexpr auto prev_animated_every_tick = 0x52e;
					constexpr auto forced_animated_every_tick = 0x52f;
					constexpr auto position_relative_to_other_entity = 0x530;
					constexpr auto h_target_ent = 0x534;
					constexpr auto h_next_cine = 0x538;
					constexpr auto thinking = 0x53c;
					constexpr auto initiated_self_delete = 0x53d;
					constexpr auto is_teleporting_due_to_move_to = 0x53e;
					constexpr auto allow_custom_interrupt_conditions = 0x53f;
					constexpr auto h_last_found_entity = 0x540;
					constexpr auto h_forced_target = 0x544;
					constexpr auto dont_cancel_other_sequences = 0x548;
					constexpr auto force_synch = 0x549;
					constexpr auto target_was_asleep = 0x54a;
					constexpr auto prevent_update_yaw_on_finish = 0x54b;
					constexpr auto ensure_on_navmesh_on_finish = 0x54c;
					constexpr auto on_death_behavior = 0x550;
					constexpr auto conflict_response = 0x554;
					constexpr auto on_begin_sequence = 0x558;
					constexpr auto on_action_start_or_loop = 0x580;
					constexpr auto on_end_sequence = 0x5a8;
					constexpr auto on_post_idle_end_sequence = 0x5d0;
					constexpr auto on_cancel_sequence = 0x5f8;
					constexpr auto on_cancel_failed_sequence = 0x620;
					constexpr auto on_script_event_arr = 0x648;
					constexpr auto mat_other_to_main = 0x790;
					constexpr auto h_interaction_main_entity = 0x7b0;
					constexpr auto player_death_behavior = 0x7b4;
				} // namespace cscripted_sequence

				namespace csound_opvar_set_entity
				{
					constexpr auto isz_stack_name = 0x4b8;
					constexpr auto isz_operator_name = 0x4c0;
					constexpr auto isz_opvar_name = 0x4c8;
					constexpr auto opvar_type = 0x4d0;
					constexpr auto opvar_index = 0x4d4;
					constexpr auto opvar_value = 0x4d8;
					constexpr auto opvar_value_string = 0x4e0;
					constexpr auto set_on_spawn = 0x4e8;
				} // namespace csound_opvar_set_entity

				namespace caisound
				{
					constexpr auto sound_type = 0x4b0;
					constexpr auto sound_context = 0x4b4;
					constexpr auto volume = 0x4b8;
					constexpr auto sound_index = 0x4bc;
					constexpr auto duration = 0x4c0;
					constexpr auto isz_proxy_entity_name = 0x4c8;
				} // namespace caisound

				namespace csound_stack_save
				{
					constexpr auto isz_stack_name = 0x4b0;
				} // namespace csound_stack_save

				namespace csound_event_entity
				{
					constexpr auto start_on_spawn = 0x4b0;
					constexpr auto to_local_player = 0x4b1;
					constexpr auto stop_on_new = 0x4b2;
					constexpr auto save_restore = 0x4b3;
					constexpr auto saved_is_playing = 0x4b4;
					constexpr auto saved_elapsed_time = 0x4b8;
					constexpr auto isz_source_entity_name = 0x4c0;
					constexpr auto isz_attachment_name = 0x4c8;
					constexpr auto on_guidchanged = 0x4d0;
					constexpr auto on_sound_finished = 0x4f8;
					constexpr auto isz_sound_name = 0x540;
					constexpr auto h_source = 0x550;
				} // namespace csound_event_entity

				namespace csound_event_aabbentity
				{
					constexpr auto v_mins = 0x558;
					constexpr auto v_maxs = 0x564;
				} // namespace csound_event_aabbentity

				namespace csound_event_obbentity
				{
					constexpr auto v_mins = 0x558;
					constexpr auto v_maxs = 0x564;
				} // namespace csound_event_obbentity

				namespace csound_event_path_corner_entity
				{
					constexpr auto isz_path_corner = 0x558;
					constexpr auto count_max = 0x560;
					constexpr auto distance_max = 0x564;
					constexpr auto dist_max_sqr = 0x568;
					constexpr auto dot_product_max = 0x56c;
					constexpr auto b_playing = 0x570;
				} // namespace csound_event_path_corner_entity

				namespace csound_event_parameter
				{
					constexpr auto isz_param_name = 0x4b8;
					constexpr auto float_value = 0x4c0;
				} // namespace csound_event_parameter

				namespace cbase_dmstart
				{
					constexpr auto master = 0x4b0;
				} // namespace cbase_dmstart

				namespace csun
				{
					constexpr auto v_direction = 0x700;
					constexpr auto clr_overlay = 0x70c;
					constexpr auto isz_effect_name = 0x710;
					constexpr auto isz_sseffect_name = 0x718;
					constexpr auto on = 0x720;
					constexpr auto bmax_color = 0x721;
					constexpr auto size = 0x724;
					constexpr auto rotation = 0x728;
					constexpr auto haze_scale = 0x72c;
					constexpr auto alpha_haze = 0x730;
					constexpr auto alpha_hdr = 0x734;
					constexpr auto alpha_scale = 0x738;
					constexpr auto hdrcolor_scale = 0x73c;
					constexpr auto far_zscale = 0x740;
				} // namespace csun

				namespace ctank_target_change
				{
					constexpr auto new_target = 0x4b0;
					constexpr auto new_target_name = 0x4c0;
				} // namespace ctank_target_change

				namespace ctank_train_ai
				{
					constexpr auto h_train = 0x4b0;
					constexpr auto h_target_entity = 0x4b4;
					constexpr auto sound_playing = 0x4b8;
					constexpr auto start_sound_name = 0x4d0;
					constexpr auto engine_sound_name = 0x4d8;
					constexpr auto movement_sound_name = 0x4e0;
					constexpr auto target_entity_name = 0x4e8;
				} // namespace ctank_train_ai

				namespace chandle_test
				{
					constexpr auto handle = 0x4b0;
					constexpr auto send_handle = 0x4b4;
				} // namespace chandle_test

				namespace cplat_trigger
				{
					constexpr auto platform = 0x700;
				} // namespace cplat_trigger

				namespace ctrigger_volume
				{
					constexpr auto filter_name = 0x700;
					constexpr auto h_filter = 0x708;
				} // namespace ctrigger_volume

				namespace cai_change_target
				{
					constexpr auto isz_new_target = 0x4b0;
				} // namespace cai_change_target

				namespace cai_change_hint_group
				{
					constexpr auto search_type = 0x4b0;
					constexpr auto str_search_name = 0x4b8;
					constexpr auto str_new_hint_group = 0x4c0;
					constexpr auto radius = 0x4c8;
				} // namespace cai_change_hint_group

				namespace cinfo_spawn_group_load_unload
				{
					constexpr auto on_spawn_group_load_started = 0x4b0;
					constexpr auto on_spawn_group_load_finished = 0x4d8;
					constexpr auto on_spawn_group_unload_started = 0x500;
					constexpr auto on_spawn_group_unload_finished = 0x528;
					constexpr auto isz_spawn_group_name = 0x550;
					constexpr auto isz_spawn_group_filter_name = 0x558;
					constexpr auto isz_landmark_name = 0x560;
					constexpr auto s_fixed_spawn_group_name = 0x568;
					constexpr auto timeout_interval = 0x570;
					constexpr auto streaming_started = 0x574;
					constexpr auto unloading_started = 0x575;
				} // namespace cinfo_spawn_group_load_unload

				namespace cpoint_pulse
				{
					constexpr auto s_name_fixup_static_prefix = 0x5c8;
					constexpr auto s_name_fixup_parent = 0x5d0;
					constexpr auto s_name_fixup_local = 0x5d8;
				} // namespace cpoint_pulse

				namespace cfunc_nav_obstruction
				{
					constexpr auto disabled = 0x708;
				} // namespace cfunc_nav_obstruction

				namespace cambient_generic
				{
					constexpr auto radius = 0x4b0;
					constexpr auto max_radius = 0x4b4;
					constexpr auto sound_level = 0x4b8;
					constexpr auto dpv = 0x4bc;
					constexpr auto active = 0x520;
					constexpr auto looping = 0x521;
					constexpr auto isz_sound = 0x528;
					constexpr auto s_source_ent_name = 0x530;
					constexpr auto h_sound_source = 0x538;
					constexpr auto sound_source_ent_index = 0x53c;
				} // namespace cambient_generic

				namespace cbase_toggle
				{
					constexpr auto toggle_state = 0x700;
					constexpr auto move_distance = 0x704;
					constexpr auto wait = 0x708;
					constexpr auto lip = 0x70c;
					constexpr auto always_fire_blocked_outputs = 0x710;
					constexpr auto vec_position1 = 0x714;
					constexpr auto vec_position2 = 0x720;
					constexpr auto vec_move_ang = 0x72c;
					constexpr auto vec_angle1 = 0x738;
					constexpr auto vec_angle2 = 0x744;
					constexpr auto height = 0x750;
					constexpr auto h_activator = 0x754;
					constexpr auto vec_final_dest = 0x758;
					constexpr auto vec_final_angle = 0x764;
					constexpr auto movement_type = 0x770;
					constexpr auto s_master = 0x778;
				} // namespace cbase_toggle

				namespace cbase_button
				{
					constexpr auto ang_move_entity_space = 0x780;
					constexpr auto stay_pushed = 0x78c;
					constexpr auto rotating = 0x78d;
					constexpr auto ls = 0x790;
					constexpr auto s_use_sound = 0x7b0;
					constexpr auto s_locked_sound = 0x7b8;
					constexpr auto s_unlocked_sound = 0x7c0;
					constexpr auto locked = 0x7c8;
					constexpr auto disabled = 0x7c9;
					constexpr auto use_locked_time = 0x7cc;
					constexpr auto solid_bsp = 0x7d0;
					constexpr auto on_damaged = 0x7d8;
					constexpr auto on_pressed = 0x800;
					constexpr auto on_use_locked = 0x828;
					constexpr auto on_in = 0x850;
					constexpr auto on_out = 0x878;
					constexpr auto state = 0x8a0;
					constexpr auto h_constraint = 0x8a4;
					constexpr auto h_constraint_parent = 0x8a8;
					constexpr auto force_npc_exclude = 0x8ac;
					constexpr auto s_glow_entity = 0x8b0;
					constexpr auto glow_entity = 0x8b8;
					constexpr auto usable = 0x8bc;
					constexpr auto display_text = 0x8c0;
				} // namespace cbase_button

				namespace cmomentary_rot_button
				{
					constexpr auto position = 0x8c8;
					constexpr auto on_unpressed = 0x8f0;
					constexpr auto on_fully_open = 0x918;
					constexpr auto on_fully_closed = 0x940;
					constexpr auto on_reached_position = 0x968;
					constexpr auto last_used = 0x990;
					constexpr auto start = 0x994;
					constexpr auto end = 0x9a0;
					constexpr auto ideal_yaw = 0x9ac;
					constexpr auto s_noise = 0x9b0;
					constexpr auto update_target = 0x9b8;
					constexpr auto direction = 0x9bc;
					constexpr auto return_speed = 0x9c0;
					constexpr auto start_position = 0x9c4;
				} // namespace cmomentary_rot_button

				namespace cragdoll_magnet
				{
					constexpr auto disabled = 0x4b0;
					constexpr auto radius = 0x4b4;
					constexpr auto force = 0x4b8;
					constexpr auto axis = 0x4bc;
				} // namespace cragdoll_magnet

				namespace cbase_door
				{
					constexpr auto ang_move_entity_space = 0x790;
					constexpr auto vec_move_dir_parent_space = 0x79c;
					constexpr auto ls = 0x7a8;
					constexpr auto force_closed = 0x7c8;
					constexpr auto door_group = 0x7c9;
					constexpr auto locked = 0x7ca;
					constexpr auto ignore_debris = 0x7cb;
					constexpr auto e_spawn_position = 0x7cc;
					constexpr auto block_damage = 0x7d0;
					constexpr auto noise_moving = 0x7d8;
					constexpr auto noise_arrived = 0x7e0;
					constexpr auto noise_moving_closed = 0x7e8;
					constexpr auto noise_arrived_closed = 0x7f0;
					constexpr auto chain_target = 0x7f8;
					constexpr auto on_blocked_closing = 0x800;
					constexpr auto on_blocked_opening = 0x828;
					constexpr auto on_unblocked_closing = 0x850;
					constexpr auto on_unblocked_opening = 0x878;
					constexpr auto on_fully_closed = 0x8a0;
					constexpr auto on_fully_open = 0x8c8;
					constexpr auto on_close = 0x8f0;
					constexpr auto on_open = 0x918;
					constexpr auto on_locked_use = 0x940;
					constexpr auto loop_move_sound = 0x968;
					constexpr auto create_nav_obstacle = 0x980;
					constexpr auto is_chaining = 0x981;
					constexpr auto is_usable = 0x982;
				} // namespace cbase_door

				namespace centity_dissolve
				{
					constexpr auto fade_in_start = 0x700;
					constexpr auto fade_in_length = 0x704;
					constexpr auto fade_out_model_start = 0x708;
					constexpr auto fade_out_model_length = 0x70c;
					constexpr auto fade_out_start = 0x710;
					constexpr auto fade_out_length = 0x714;
					constexpr auto start_time = 0x718;
					constexpr auto dissolve_type = 0x71c;
					constexpr auto v_dissolver_origin = 0x720;
					constexpr auto magnitude = 0x72c;
				} // namespace centity_dissolve

				namespace cenv_projected_texture
				{
					constexpr auto h_target_entity = 0x700;
					constexpr auto state = 0x704;
					constexpr auto always_update = 0x705;
					constexpr auto light_fov = 0x708;
					constexpr auto enable_shadows = 0x70c;
					constexpr auto simple_projection = 0x70d;
					constexpr auto light_only_target = 0x70e;
					constexpr auto light_world = 0x70f;
					constexpr auto camera_space = 0x710;
					constexpr auto brightness_scale = 0x714;
					constexpr auto light_color = 0x718;
					constexpr auto intensity = 0x71c;
					constexpr auto linear_attenuation = 0x720;
					constexpr auto quadratic_attenuation = 0x724;
					constexpr auto volumetric = 0x728;
					constexpr auto noise_strength = 0x72c;
					constexpr auto flashlight_time = 0x730;
					constexpr auto num_planes = 0x734;
					constexpr auto plane_offset = 0x738;
					constexpr auto volumetric_intensity = 0x73c;
					constexpr auto color_transition_time = 0x740;
					constexpr auto ambient = 0x744;
					constexpr auto spotlight_texture_name_arr = 0x748;
					constexpr auto spotlight_texture_frame = 0x948;
					constexpr auto shadow_quality = 0x94c;
					constexpr auto near_z = 0x950;
					constexpr auto far_z = 0x954;
					constexpr auto projection_size = 0x958;
					constexpr auto rotation = 0x95c;
					constexpr auto flip_horizontal = 0x960;
				} // namespace cenv_projected_texture

				namespace cenv_decal
				{
					constexpr auto h_decal_material = 0x700;
					constexpr auto width = 0x708;
					constexpr auto height = 0x70c;
					constexpr auto depth = 0x710;
					constexpr auto render_order = 0x714;
					constexpr auto project_on_world = 0x718;
					constexpr auto project_on_characters = 0x719;
					constexpr auto project_on_water = 0x71a;
					constexpr auto depth_sort_bias = 0x71c;
				} // namespace cenv_decal

				namespace cmessage
				{
					constexpr auto isz_message = 0x4b0;
					constexpr auto message_volume = 0x4b8;
					constexpr auto message_attenuation = 0x4bc;
					constexpr auto radius = 0x4c0;
					constexpr auto s_noise = 0x4c8;
					constexpr auto on_show_message = 0x4d0;
				} // namespace cmessage

				namespace cenv_microphone
				{
					constexpr auto disabled = 0x4b0;
					constexpr auto h_measure_target = 0x4b4;
					constexpr auto sound_mask = 0x4b8;
					constexpr auto sensitivity = 0x4bc;
					constexpr auto smooth_factor = 0x4c0;
					constexpr auto max_range = 0x4c4;
					constexpr auto isz_speaker_name = 0x4c8;
					constexpr auto h_speaker = 0x4d0;
					constexpr auto avoid_feedback = 0x4d4;
					constexpr auto speaker_dsppreset = 0x4d8;
					constexpr auto isz_listen_filter = 0x4e0;
					constexpr auto h_listen_filter = 0x4e8;
					constexpr auto sound_level = 0x4f0;
					constexpr auto on_routed_sound = 0x518;
					constexpr auto on_heard_sound = 0x540;
					constexpr auto last_sound_arr = 0x568;
					constexpr auto last_routed_frame = 0x668;
				} // namespace cenv_microphone

				namespace cbreakable
				{
					constexpr auto material = 0x710;
					constexpr auto h_breaker = 0x714;
					constexpr auto explosion = 0x718;
					constexpr auto isz_spawn_object = 0x720;
					constexpr auto pressure_delay = 0x728;
					constexpr auto min_health_dmg = 0x72c;
					constexpr auto isz_prop_data = 0x730;
					constexpr auto impact_energy_scale = 0x738;
					constexpr auto override_block_los = 0x73c;
					constexpr auto on_break = 0x740;
					constexpr auto on_health_changed = 0x768;
					constexpr auto dmg_mod_bullet = 0x790;
					constexpr auto dmg_mod_club = 0x794;
					constexpr auto dmg_mod_explosive = 0x798;
					constexpr auto dmg_mod_fire = 0x79c;
					constexpr auto isz_physics_damage_table_name = 0x7a0;
					constexpr auto isz_base_prop_data = 0x7a8;
					constexpr auto interactions = 0x7b0;
					constexpr auto performance_mode = 0x7b4;
					constexpr auto h_physics_attacker = 0x7b8;
					constexpr auto last_physics_influence_time = 0x7bc;
				} // namespace cbreakable

				namespace cfunc_move_linear
				{
					constexpr auto authored_position = 0x780;
					constexpr auto ang_move_entity_space = 0x784;
					constexpr auto vec_move_dir_parent_space = 0x790;
					constexpr auto sound_start = 0x7a0;
					constexpr auto sound_stop = 0x7a8;
					constexpr auto current_sound = 0x7b0;
					constexpr auto block_damage = 0x7b8;
					constexpr auto start_position = 0x7bc;
					constexpr auto move_distance = 0x7c0;
					constexpr auto on_fully_open = 0x7d0;
					constexpr auto on_fully_closed = 0x7f8;
					constexpr auto create_movable_nav_mesh = 0x820;
					constexpr auto create_nav_obstacle = 0x821;
				} // namespace cfunc_move_linear

				namespace cfunc_rotating
				{
					constexpr auto vec_move_ang = 0x700;
					constexpr auto fan_friction = 0x70c;
					constexpr auto attenuation = 0x710;
					constexpr auto volume = 0x714;
					constexpr auto target_speed = 0x718;
					constexpr auto max_speed = 0x71c;
					constexpr auto block_damage = 0x720;
					constexpr auto time_scale = 0x724;
					constexpr auto noise_running = 0x728;
					constexpr auto reversed = 0x730;
					constexpr auto ang_start = 0x73c;
					constexpr auto stop_at_start_pos = 0x748;
					constexpr auto vec_client_origin = 0x74c;
					constexpr auto vec_client_angles = 0x758;
				} // namespace cfunc_rotating

				namespace citem_generic_trigger_helper
				{
					constexpr auto h_parent_item = 0x700;
				} // namespace citem_generic_trigger_helper

				namespace crule_entity
				{
					constexpr auto isz_master = 0x700;
				} // namespace crule_entity

				namespace crule_point_entity
				{
					constexpr auto score = 0x708;
				} // namespace crule_point_entity

				namespace cmarkup_volume
				{
					constexpr auto enabled = 0x700;
				} // namespace cmarkup_volume

				namespace cmarkup_volume_tagged
				{
					constexpr auto is_group = 0x738;
					constexpr auto group_by_prefab = 0x739;
					constexpr auto group_by_volume = 0x73a;
					constexpr auto group_other_groups = 0x73b;
					constexpr auto is_in_group = 0x73c;
				} // namespace cmarkup_volume_tagged

				namespace cmarkup_volume_with_ref
				{
					constexpr auto use_ref = 0x740;
					constexpr auto v_ref_pos = 0x744;
					constexpr auto ref_dot = 0x750;
				} // namespace cmarkup_volume_with_ref

				namespace cfunc_brush
				{
					constexpr auto solidity = 0x700;
					constexpr auto disabled = 0x704;
					constexpr auto solid_bsp = 0x708;
					constexpr auto isz_excluded_class = 0x710;
					constexpr auto invert_exclusion = 0x718;
					constexpr auto scripted_movement = 0x719;
				} // namespace cfunc_brush

				namespace cpath_track
				{
					constexpr auto pnext_ptr = 0x4b0;
					constexpr auto pprevious_ptr = 0x4b8;
					constexpr auto paltpath_ptr = 0x4c0;
					constexpr auto radius = 0x4c8;
					constexpr auto length = 0x4cc;
					constexpr auto alt_name = 0x4d0;
					constexpr auto iter_val = 0x4d8;
					constexpr auto e_orientation_type = 0x4dc;
					constexpr auto on_pass = 0x4e0;
				} // namespace cpath_track

				namespace cphys_box
				{
					constexpr auto damage_type = 0x7c0;
					constexpr auto mass_scale = 0x7c4;
					constexpr auto damage_to_enable_motion = 0x7c8;
					constexpr auto force_to_enable_motion = 0x7cc;
					constexpr auto ang_preferred_carry_angles = 0x7d0;
					constexpr auto not_solid_to_world = 0x7dc;
					constexpr auto enable_use_output = 0x7dd;
					constexpr auto exploitable_by_player = 0x7e0;
					constexpr auto touch_output_per_entity_delay = 0x7e4;
					constexpr auto on_damaged = 0x7e8;
					constexpr auto on_awakened = 0x810;
					constexpr auto on_motion_enabled = 0x838;
					constexpr auto on_player_use = 0x860;
					constexpr auto on_start_touch = 0x888;
					constexpr auto h_carrying_player = 0x8b0;
				} // namespace cphys_box

				namespace cphys_explosion
				{
					constexpr auto explode_on_spawn = 0x4b0;
					constexpr auto magnitude = 0x4b4;
					constexpr auto damage = 0x4b8;
					constexpr auto radius = 0x4bc;
					constexpr auto target_entity_name = 0x4c0;
					constexpr auto inner_radius = 0x4c8;
					constexpr auto push_scale = 0x4cc;
					constexpr auto convert_to_debris_when_possible = 0x4d0;
					constexpr auto on_pushed_player = 0x4d8;
				} // namespace cphys_explosion

				namespace cphys_impact
				{
					constexpr auto damage = 0x4b0;
					constexpr auto distance = 0x4b4;
					constexpr auto direction_entity_name = 0x4b8;
				} // namespace cphys_impact

				namespace crope_keyframe
				{
					constexpr auto rope_flags = 0x708;
					constexpr auto next_link_name = 0x710;
					constexpr auto slack = 0x718;
					constexpr auto width = 0x71c;
					constexpr auto texture_scale = 0x720;
					constexpr auto segments = 0x724;
					constexpr auto constrain_between_endpoints = 0x725;
					constexpr auto str_rope_material_model = 0x728;
					constexpr auto rope_material_model_index = 0x730;
					constexpr auto subdiv = 0x738;
					constexpr auto change_count = 0x739;
					constexpr auto rope_length = 0x73a;
					constexpr auto locked_points = 0x73c;
					constexpr auto created_from_map_file = 0x73d;
					constexpr auto scroll_speed = 0x740;
					constexpr auto start_point_valid = 0x744;
					constexpr auto end_point_valid = 0x745;
					constexpr auto h_start_point = 0x748;
					constexpr auto h_end_point = 0x74c;
					constexpr auto start_attachment = 0x750;
					constexpr auto end_attachment = 0x751;
				} // namespace crope_keyframe

				namespace csound_ent
				{
					constexpr auto free_sound = 0x4b0;
					constexpr auto active_sound = 0x4b4;
					constexpr auto c_last_active_sounds = 0x4b8;
					constexpr auto sound_pool_arr = 0x4bc;
				} // namespace csound_ent

				namespace cspotlight_end
				{
					constexpr auto light_scale = 0x700;
					constexpr auto radius = 0x704;
					constexpr auto v_spotlight_dir = 0x708;
					constexpr auto v_spotlight_org = 0x714;
				} // namespace cspotlight_end

				namespace cfunc_track_train
				{
					constexpr auto ppath = 0x700;
					constexpr auto length = 0x704;
					constexpr auto v_pos_prev = 0x708;
					constexpr auto ang_prev = 0x714;
					constexpr auto control_mins = 0x720;
					constexpr auto control_maxs = 0x72c;
					constexpr auto last_block_pos = 0x738;
					constexpr auto last_block_tick = 0x744;
					constexpr auto volume = 0x748;
					constexpr auto bank = 0x74c;
					constexpr auto old_speed = 0x750;
					constexpr auto block_damage = 0x754;
					constexpr auto height = 0x758;
					constexpr auto max_speed = 0x75c;
					constexpr auto dir = 0x760;
					constexpr auto isz_sound_move = 0x768;
					constexpr auto isz_sound_move_ping = 0x770;
					constexpr auto isz_sound_start = 0x778;
					constexpr auto isz_sound_stop = 0x780;
					constexpr auto str_path_target = 0x788;
					constexpr auto move_sound_min_duration = 0x790;
					constexpr auto move_sound_max_duration = 0x794;
					constexpr auto next_move_sound_time = 0x798;
					constexpr auto move_sound_min_pitch = 0x79c;
					constexpr auto move_sound_max_pitch = 0x7a0;
					constexpr auto e_orientation_type = 0x7a4;
					constexpr auto e_velocity_type = 0x7a8;
					constexpr auto on_start = 0x7b8;
					constexpr auto on_next = 0x7e0;
					constexpr auto on_arrived_at_destination_node = 0x808;
					constexpr auto manual_speed_changes = 0x830;
					constexpr auto desired_speed = 0x834;
					constexpr auto speed_change_time = 0x838;
					constexpr auto accel_speed = 0x83c;
					constexpr auto decel_speed = 0x840;
					constexpr auto accel_to_speed = 0x844;
					constexpr auto time_scale = 0x848;
					constexpr auto next_mpsound_time = 0x84c;
				} // namespace cfunc_track_train

				namespace cbase_trigger
				{
					constexpr auto disabled = 0x780;
					constexpr auto filter_name = 0x788;
					constexpr auto h_filter = 0x790;
					constexpr auto on_start_touch = 0x798;
					constexpr auto on_start_touch_all = 0x7c0;
					constexpr auto on_end_touch = 0x7e8;
					constexpr auto on_end_touch_all = 0x810;
					constexpr auto on_touching = 0x838;
					constexpr auto on_not_touching = 0x860;
					constexpr auto h_touching_entities = 0x888;
					constexpr auto client_side_predicted = 0x8a0;
				} // namespace cbase_trigger

				namespace ctrigger_multiple
				{
					constexpr auto on_trigger = 0x8a8;
				} // namespace ctrigger_multiple

				namespace ctrigger_snd_sos_opvar
				{
					constexpr auto h_touching_players = 0x8a8;
					constexpr auto position = 0x8c0;
					constexpr auto center_size = 0x8cc;
					constexpr auto min_val = 0x8d0;
					constexpr auto max_val = 0x8d4;
					constexpr auto wait = 0x8d8;
					constexpr auto opvar_name = 0x8e0;
					constexpr auto stack_name = 0x8e8;
					constexpr auto operator_name = 0x8f0;
					constexpr auto vol_is2d = 0x8f8;
					constexpr auto opvar_name_char_arr = 0x8f9;
					constexpr auto stack_name_char_arr = 0x9f9;
					constexpr auto operator_name_char_arr = 0xaf9;
					constexpr auto vec_norm_pos = 0xbfc;
					constexpr auto norm_center_size = 0xc08;
				} // namespace ctrigger_snd_sos_opvar

				namespace ctrigger_hurt
				{
					constexpr auto original_damage = 0x8a8;
					constexpr auto damage = 0x8ac;
					constexpr auto damage_cap = 0x8b0;
					constexpr auto last_dmg_time = 0x8b4;
					constexpr auto forgiveness_delay = 0x8b8;
					constexpr auto bits_damage_inflict = 0x8bc;
					constexpr auto damage_model = 0x8c0;
					constexpr auto no_dmg_force = 0x8c4;
					constexpr auto v_damage_force = 0x8c8;
					constexpr auto think_always = 0x8d4;
					constexpr auto hurt_think_period = 0x8d8;
					constexpr auto on_hurt = 0x8e0;
					constexpr auto on_hurt_player = 0x908;
					constexpr auto hurt_entities = 0x930;
				} // namespace ctrigger_hurt

				namespace ctrigger_lerp_object
				{
					constexpr auto isz_lerp_target = 0x8a8;
					constexpr auto h_lerp_target = 0x8b0;
					constexpr auto isz_lerp_target_attachment = 0x8b8;
					constexpr auto h_lerp_target_attachment = 0x8c0;
					constexpr auto lerp_duration = 0x8c4;
					constexpr auto lerp_restore_move_type = 0x8c8;
					constexpr auto single_lerp_object = 0x8c9;
					constexpr auto vec_lerping_objects = 0x8d0;
					constexpr auto isz_lerp_effect = 0x8e8;
					constexpr auto isz_lerp_sound = 0x8f0;
					constexpr auto on_lerp_started = 0x8f8;
					constexpr auto on_lerp_finished = 0x920;
				} // namespace ctrigger_lerp_object

				namespace cchange_level
				{
					constexpr auto s_map_name = 0x8a8;
					constexpr auto s_landmark_name = 0x8b0;
					constexpr auto on_change_level = 0x8b8;
					constexpr auto touched = 0x8e0;
					constexpr auto no_touch = 0x8e1;
					constexpr auto new_chapter = 0x8e2;
					constexpr auto on_change_level_fired = 0x8e3;
				} // namespace cchange_level

				namespace ctrigger_teleport
				{
					constexpr auto landmark = 0x8a8;
					constexpr auto use_landmark_angles = 0x8b0;
					constexpr auto mirror_player = 0x8b1;
				} // namespace ctrigger_teleport

				namespace ctrigger_fan
				{
					constexpr auto v_fan_origin = 0x8a8;
					constexpr auto v_fan_end = 0x8b4;
					constexpr auto v_noise = 0x8c0;
					constexpr auto force = 0x8cc;
					constexpr auto player_force = 0x8d0;
					constexpr auto ramp_time = 0x8d4;
					constexpr auto falloff = 0x8d8;
					constexpr auto push_player = 0x8d9;
					constexpr auto ramp_down = 0x8da;
					constexpr auto add_noise = 0x8db;
					constexpr auto ramp_timer = 0x8e0;
				} // namespace ctrigger_fan

				namespace cfunc_nav_blocker
				{
					constexpr auto disabled = 0x700;
					constexpr auto blocked_team_number = 0x704;
				} // namespace cfunc_nav_blocker

				namespace cnav_link_area_entity
				{
					constexpr auto width = 0x4b0;
					constexpr auto v_locator_offset = 0x4b4;
					constexpr auto q_locator_angles_offset = 0x4c0;
					constexpr auto str_movement_forward = 0x4d0;
					constexpr auto str_movement_reverse = 0x4d8;
					constexpr auto nav_link_id_forward = 0x4e0;
					constexpr auto nav_link_id_reverse = 0x4e4;
					constexpr auto enabled = 0x4e8;
					constexpr auto str_filter_name = 0x4f0;
					constexpr auto h_filter = 0x4f8;
					constexpr auto on_nav_link_start = 0x500;
					constexpr auto on_nav_link_finish = 0x528;
					constexpr auto is_terminus = 0x550;
				} // namespace cnav_link_area_entity

				namespace cnav_space_info
				{
					constexpr auto create_flight_space = 0x4b0;
				} // namespace cnav_space_info

				namespace cbeam
				{
					constexpr auto frame_rate = 0x700;
					constexpr auto hdrcolor_scale = 0x704;
					constexpr auto fire_time = 0x708;
					constexpr auto damage = 0x70c;
					constexpr auto num_beam_ents = 0x710;
					constexpr auto h_base_material = 0x718;
					constexpr auto halo_index = 0x720;
					constexpr auto beam_type = 0x728;
					constexpr auto beam_flags = 0x72c;
					constexpr auto h_attach_entity_arr = 0x730;
					constexpr auto attach_index_arr = 0x758;
					constexpr auto width = 0x764;
					constexpr auto end_width = 0x768;
					constexpr auto fade_length = 0x76c;
					constexpr auto halo_scale = 0x770;
					constexpr auto amplitude = 0x774;
					constexpr auto start_frame = 0x778;
					constexpr auto speed = 0x77c;
					constexpr auto frame = 0x780;
					constexpr auto clip_style = 0x784;
					constexpr auto turned_off = 0x788;
					constexpr auto vec_end_pos = 0x78c;
					constexpr auto h_end_entity = 0x798;
					constexpr auto dissolve_type = 0x79c;
				} // namespace cbeam

				namespace cfunc_ladder
				{
					constexpr auto vec_ladder_dir = 0x700;
					constexpr auto dismounts = 0x710;
					constexpr auto vec_local_top = 0x728;
					constexpr auto vec_player_mount_position_top = 0x734;
					constexpr auto vec_player_mount_position_bottom = 0x740;
					constexpr auto auto_ride_speed = 0x74c;
					constexpr auto disabled = 0x750;
					constexpr auto fake_ladder = 0x751;
					constexpr auto has_slack = 0x752;
					constexpr auto surface_prop_name = 0x758;
					constexpr auto on_player_got_on_ladder = 0x760;
					constexpr auto on_player_got_off_ladder = 0x788;
				} // namespace cfunc_ladder

				namespace cfunc_shatterglass
				{
					constexpr auto h_glass_material_damaged = 0x700;
					constexpr auto h_glass_material_undamaged = 0x708;
					constexpr auto h_concrete_material_edge_face = 0x710;
					constexpr auto h_concrete_material_edge_caps = 0x718;
					constexpr auto h_concrete_material_edge_fins = 0x720;
					constexpr auto mat_panel_transform = 0x728;
					constexpr auto mat_panel_transform_ws_temp = 0x758;
					constexpr auto vec_shatter_glass_shards = 0x788;
					constexpr auto panel_size = 0x7a0;
					constexpr auto vec_panel_normal_ws = 0x7a8;
					constexpr auto num_shards_ever_created = 0x7b4;
					constexpr auto last_shatter_sound_emit_time = 0x7b8;
					constexpr auto last_cleanup_time = 0x7bc;
					constexpr auto init_at_time = 0x7c0;
					constexpr auto glass_thickness = 0x7c4;
					constexpr auto spawn_invulnerability = 0x7c8;
					constexpr auto break_silent = 0x7cc;
					constexpr auto break_shardless = 0x7cd;
					constexpr auto broken = 0x7ce;
					constexpr auto has_rate_limited_shards = 0x7cf;
					constexpr auto glass_nav_ignore = 0x7d0;
					constexpr auto glass_in_frame = 0x7d1;
					constexpr auto start_broken = 0x7d2;
					constexpr auto initial_damage_type = 0x7d3;
					constexpr auto damage_positioning_entity_name01 = 0x7d8;
					constexpr auto damage_positioning_entity_name02 = 0x7e0;
					constexpr auto damage_positioning_entity_name03 = 0x7e8;
					constexpr auto damage_positioning_entity_name04 = 0x7f0;
					constexpr auto v_initial_damage_positions = 0x7f8;
					constexpr auto v_extra_damage_positions = 0x810;
					constexpr auto on_broken = 0x828;
					constexpr auto surface_type = 0x851;
				} // namespace cfunc_shatterglass

				namespace cprecipitation_vdata
				{
					constexpr auto particle_precipitation_effect = 0x28;
					constexpr auto inner_distance = 0x108;
					constexpr auto attach_type = 0x10c;
					constexpr auto batch_same_volume_type = 0x110;
					constexpr auto rtenv_cp = 0x114;
					constexpr auto rtenv_cpcomponent = 0x118;
					constexpr auto modifier = 0x120;
				} // namespace cprecipitation_vdata

				namespace csprite
				{
					constexpr auto h_sprite_material = 0x700;
					constexpr auto h_attached_to_entity = 0x708;
					constexpr auto attachment = 0x70c;
					constexpr auto sprite_framerate = 0x710;
					constexpr auto frame = 0x714;
					constexpr auto die_time = 0x718;
					constexpr auto brightness = 0x728;
					constexpr auto brightness_duration = 0x72c;
					constexpr auto sprite_scale = 0x730;
					constexpr auto scale_duration = 0x734;
					constexpr auto world_space_scale = 0x738;
					constexpr auto glow_proxy_size = 0x73c;
					constexpr auto hdrcolor_scale = 0x740;
					constexpr auto last_time = 0x744;
					constexpr auto max_frame = 0x748;
					constexpr auto start_scale = 0x74c;
					constexpr auto dest_scale = 0x750;
					constexpr auto scale_time_start = 0x754;
					constexpr auto start_brightness = 0x758;
					constexpr auto dest_brightness = 0x75c;
					constexpr auto brightness_time_start = 0x760;
					constexpr auto sprite_width = 0x764;
					constexpr auto sprite_height = 0x768;
				} // namespace csprite

				namespace cbase_client_uientity
				{
					constexpr auto enabled = 0x700;
					constexpr auto dialog_xmlname = 0x708;
					constexpr auto panel_class_name = 0x710;
					constexpr auto panel_id = 0x718;
					constexpr auto custom_output0 = 0x720;
					constexpr auto custom_output1 = 0x748;
					constexpr auto custom_output2 = 0x770;
					constexpr auto custom_output3 = 0x798;
					constexpr auto custom_output4 = 0x7c0;
					constexpr auto custom_output5 = 0x7e8;
					constexpr auto custom_output6 = 0x810;
					constexpr auto custom_output7 = 0x838;
					constexpr auto custom_output8 = 0x860;
					constexpr auto custom_output9 = 0x888;
				} // namespace cbase_client_uientity

				namespace cpoint_client_uidialog
				{
					constexpr auto h_activator = 0x8b0;
					constexpr auto start_enabled = 0x8b4;
				} // namespace cpoint_client_uidialog

				namespace cpoint_client_uiworld_panel
				{
					constexpr auto ignore_input = 0x8b0;
					constexpr auto lit = 0x8b1;
					constexpr auto follow_player_across_teleport = 0x8b2;
					constexpr auto width = 0x8b4;
					constexpr auto height = 0x8b8;
					constexpr auto dpi = 0x8bc;
					constexpr auto interact_distance = 0x8c0;
					constexpr auto depth_offset = 0x8c4;
					constexpr auto un_owner_context = 0x8c8;
					constexpr auto un_horizontal_align = 0x8cc;
					constexpr auto un_vertical_align = 0x8d0;
					constexpr auto un_orientation = 0x8d4;
					constexpr auto allow_interaction_from_all_scene_worlds = 0x8d8;
					constexpr auto vec_cssclasses = 0x8e0;
					constexpr auto opaque = 0x8f8;
					constexpr auto no_depth = 0x8f9;
					constexpr auto render_backface = 0x8fa;
					constexpr auto use_off_screen_indicator = 0x8fb;
					constexpr auto exclude_from_save_games = 0x8fc;
					constexpr auto grabbable = 0x8fd;
					constexpr auto only_render_to_texture = 0x8fe;
					constexpr auto disable_mip_gen = 0x8ff;
					constexpr auto explicit_image_layout = 0x900;
				} // namespace cpoint_client_uiworld_panel

				namespace cpoint_client_uiworld_text_panel
				{
					constexpr auto message_text_arr = 0x908;
				} // namespace cpoint_client_uiworld_text_panel

				namespace cinfo_offscreen_panorama_texture
				{
					constexpr auto disabled = 0x4b0;
					constexpr auto resolution_x = 0x4b4;
					constexpr auto resolution_y = 0x4b8;
					constexpr auto layout_file_name = 0x4c0;
					constexpr auto render_attr_name = 0x4c8;
					constexpr auto target_entities = 0x4d0;
					constexpr auto target_change_count = 0x4e8;
					constexpr auto vec_cssclasses = 0x4f0;
					constexpr auto targets_name = 0x508;
					constexpr auto additional_target_entities = 0x510;
				} // namespace cinfo_offscreen_panorama_texture

				namespace cattribute_container
				{
					constexpr auto item = 0x50;
				} // namespace cattribute_container

				namespace cpoint_give_ammo
				{
					constexpr auto activator = 0x4b0;
				} // namespace cpoint_give_ammo

				namespace cbomb_target
				{
					constexpr auto on_bomb_explode = 0x8a8;
					constexpr auto on_bomb_planted = 0x8d0;
					constexpr auto on_bomb_defused = 0x8f8;
					constexpr auto is_bomb_site_b = 0x920;
					constexpr auto is_heist_bomb_target = 0x921;
					constexpr auto bomb_planted_here = 0x922;
					constexpr auto mount_target = 0x928;
					constexpr auto h_instructor_hint = 0x930;
					constexpr auto bomb_site_designation = 0x934;
				} // namespace cbomb_target

				namespace ctrigger_buoyancy
				{
					constexpr auto buoyancy_helper = 0x8a8;
					constexpr auto fluid_density = 0x8c8;
				} // namespace ctrigger_buoyancy

				namespace cfunc_water
				{
					constexpr auto buoyancy_helper = 0x700;
				} // namespace cfunc_water

				namespace ccsplayer_controller
				{
					constexpr auto in_game_money_services_ptr = 0x6c0;
					constexpr auto inventory_services_ptr = 0x6c8;
					constexpr auto action_tracking_services_ptr = 0x6d0;
					constexpr auto damage_services_ptr = 0x6d8;
					constexpr auto ping = 0x6e0;
					constexpr auto has_communication_abuse_mute = 0x6e4;
					constexpr auto crosshair_codes = 0x6e8;
					constexpr auto pending_team_num = 0x6f0;
					constexpr auto force_team_time = 0x6f4;
					constexpr auto comp_teammate_color = 0x6f8;
					constexpr auto ever_played_on_team = 0x6fc;
					constexpr auto attempted_to_get_color = 0x6fd;
					constexpr auto teammate_preferred_color = 0x700;
					constexpr auto team_changed = 0x704;
					constexpr auto in_switch_team = 0x705;
					constexpr auto has_seen_join_game = 0x706;
					constexpr auto just_became_spectator = 0x707;
					constexpr auto switch_teams_on_next_round_reset = 0x708;
					constexpr auto remove_all_items_on_next_round_reset = 0x709;
					constexpr auto clan = 0x710;
					constexpr auto clan_name_arr = 0x718;
					constexpr auto coaching_team = 0x738;
					constexpr auto player_dominated = 0x740;
					constexpr auto player_dominating_me = 0x748;
					constexpr auto competitive_ranking = 0x750;
					constexpr auto competitive_wins = 0x754;
					constexpr auto competitive_rank_type = 0x758;
					constexpr auto competitive_ranking_predicted_win = 0x75c;
					constexpr auto competitive_ranking_predicted_loss = 0x760;
					constexpr auto competitive_ranking_predicted_tie = 0x764;
					constexpr auto end_match_next_map_vote = 0x768;
					constexpr auto un_active_quest_id = 0x76c;
					constexpr auto quest_progress_reason = 0x770;
					constexpr auto un_player_tv_control_flags = 0x774;
					constexpr auto draft_index = 0x7a0;
					constexpr auto ms_queued_mode_disconnection_timestamp = 0x7a4;
					constexpr auto ui_abandon_recorded_reason = 0x7a8;
					constexpr auto cannot_be_kicked = 0x7ac;
					constexpr auto ever_fully_connected = 0x7ad;
					constexpr auto abandon_allows_surrender = 0x7ae;
					constexpr auto abandon_offers_instant_surrender = 0x7af;
					constexpr auto disconnection1_min_warning_printed = 0x7b0;
					constexpr auto score_reported = 0x7b1;
					constexpr auto disconnection_tick = 0x7b4;
					constexpr auto controlling_bot = 0x7c0;
					constexpr auto has_controlled_bot_this_round = 0x7c1;
					constexpr auto has_been_controlled_by_player_this_round = 0x7c2;
					constexpr auto bots_controlled_this_round = 0x7c4;
					constexpr auto can_control_observed_bot = 0x7c8;
					constexpr auto h_player_pawn = 0x7cc;
					constexpr auto h_observer_pawn = 0x7d0;
					constexpr auto desired_observer_mode = 0x7d4;
					constexpr auto h_desired_observer_target = 0x7d8;
					constexpr auto pawn_is_alive = 0x7dc;
					constexpr auto pawn_health = 0x7e0;
					constexpr auto pawn_armor = 0x7e4;
					constexpr auto pawn_has_defuser = 0x7e8;
					constexpr auto pawn_has_helmet = 0x7e9;
					constexpr auto pawn_character_def_index = 0x7ea;
					constexpr auto pawn_lifetime_start = 0x7ec;
					constexpr auto pawn_lifetime_end = 0x7f0;
					constexpr auto pawn_bot_difficulty = 0x7f4;
					constexpr auto h_original_controller_of_current_pawn = 0x7f8;
					constexpr auto score = 0x7fc;
					constexpr auto round_score = 0x800;
					constexpr auto rounds_won = 0x804;
					constexpr auto vec_kills = 0x808;
					constexpr auto mvps = 0x820;
					constexpr auto update_counter = 0x824;
					constexpr auto smoothed_ping = 0x828;
					constexpr auto last_held_vote_timer = 0xf8d0;
					constexpr auto show_hints = 0xf8e8;
					constexpr auto next_time_check = 0xf8ec;
					constexpr auto just_did_team_kill = 0xf8f0;
					constexpr auto punish_for_team_kill = 0xf8f1;
					constexpr auto gave_team_damage_warning = 0xf8f2;
					constexpr auto gave_team_damage_warning_this_round = 0xf8f3;
					constexpr auto dbl_last_received_packet_plat_float_time = 0xf8f8;
					constexpr auto last_team_damage_warning_time = 0xf900;
					constexpr auto last_time_player_was_disconnected_for_pawns_remove = 0xf904;
				} // namespace ccsplayer_controller

				namespace cfootstep_control
				{
					constexpr auto source = 0x8a8;
					constexpr auto destination = 0x8b0;
				} // namespace cfootstep_control

				namespace ccsweapon_base_vdata
				{
					constexpr auto weapon_type = 0x240;
					constexpr auto weapon_category = 0x244;
					constexpr auto view_model = 0x248;
					constexpr auto player_model = 0x328;
					constexpr auto world_dropped_model = 0x408;
					constexpr auto aimsight_lens_mask_model = 0x4e8;
					constexpr auto magazine_model = 0x5c8;
					constexpr auto heat_effect = 0x6a8;
					constexpr auto eject_brass_effect = 0x788;
					constexpr auto muzzle_flash_particle_alt = 0x868;
					constexpr auto muzzle_flash_third_person_particle = 0x948;
					constexpr auto muzzle_flash_third_person_particle_alt = 0xa28;
					constexpr auto tracer_particle = 0xb08;
					constexpr auto gear_slot = 0xbe8;
					constexpr auto gear_slot_position = 0xbec;
					constexpr auto default_loadout_slot = 0xbf0;
					constexpr auto s_wrong_team_msg = 0xbf8;
					constexpr auto price = 0xc00;
					constexpr auto kill_award = 0xc04;
					constexpr auto primary_reserve_ammo_max = 0xc08;
					constexpr auto secondary_reserve_ammo_max = 0xc0c;
					constexpr auto melee_weapon = 0xc10;
					constexpr auto has_burst_mode = 0xc11;
					constexpr auto is_revolver = 0xc12;
					constexpr auto cannot_shoot_underwater = 0xc13;
					constexpr auto name = 0xc18;
					constexpr auto anim_extension = 0xc20;
					constexpr auto e_silencer_type = 0xc28;
					constexpr auto crosshair_min_distance = 0xc2c;
					constexpr auto crosshair_delta_distance = 0xc30;
					constexpr auto cycle_time = 0xc34;
					constexpr auto max_speed = 0xc3c;
					constexpr auto spread = 0xc44;
					constexpr auto inaccuracy_crouch = 0xc4c;
					constexpr auto inaccuracy_stand = 0xc54;
					constexpr auto inaccuracy_jump = 0xc5c;
					constexpr auto inaccuracy_land = 0xc64;
					constexpr auto inaccuracy_ladder = 0xc6c;
					constexpr auto inaccuracy_fire = 0xc74;
					constexpr auto inaccuracy_move = 0xc7c;
					constexpr auto recoil_angle = 0xc84;
					constexpr auto recoil_angle_variance = 0xc8c;
					constexpr auto recoil_magnitude = 0xc94;
					constexpr auto recoil_magnitude_variance = 0xc9c;
					constexpr auto tracer_frequency = 0xca4;
					constexpr auto inaccuracy_jump_initial = 0xcac;
					constexpr auto inaccuracy_jump_apex = 0xcb0;
					constexpr auto inaccuracy_reload = 0xcb4;
					constexpr auto recoil_seed = 0xcb8;
					constexpr auto spread_seed = 0xcbc;
					constexpr auto time_to_idle_after_fire = 0xcc0;
					constexpr auto idle_interval = 0xcc4;
					constexpr auto attack_movespeed_factor = 0xcc8;
					constexpr auto heat_per_shot = 0xccc;
					constexpr auto inaccuracy_pitch_shift = 0xcd0;
					constexpr auto inaccuracy_alt_sound_threshold = 0xcd4;
					constexpr auto bot_audible_range = 0xcd8;
					constexpr auto use_radio_subtitle = 0xce0;
					constexpr auto unzooms_after_shot = 0xce8;
					constexpr auto hide_view_model_when_zoomed = 0xce9;
					constexpr auto zoom_levels = 0xcec;
					constexpr auto zoom_fov1 = 0xcf0;
					constexpr auto zoom_fov2 = 0xcf4;
					constexpr auto zoom_time0 = 0xcf8;
					constexpr auto zoom_time1 = 0xcfc;
					constexpr auto zoom_time2 = 0xd00;
					constexpr auto iron_sight_pull_up_speed = 0xd04;
					constexpr auto iron_sight_put_down_speed = 0xd08;
					constexpr auto iron_sight_fov = 0xd0c;
					constexpr auto iron_sight_pivot_forward = 0xd10;
					constexpr auto iron_sight_looseness = 0xd14;
					constexpr auto ang_pivot_angle = 0xd18;
					constexpr auto vec_iron_sight_eye_pos = 0xd24;
					constexpr auto damage = 0xd30;
					constexpr auto headshot_multiplier = 0xd34;
					constexpr auto armor_ratio = 0xd38;
					constexpr auto penetration = 0xd3c;
					constexpr auto range = 0xd40;
					constexpr auto range_modifier = 0xd44;
					constexpr auto flinch_velocity_modifier_large = 0xd48;
					constexpr auto flinch_velocity_modifier_small = 0xd4c;
					constexpr auto recovery_time_crouch = 0xd50;
					constexpr auto recovery_time_stand = 0xd54;
					constexpr auto recovery_time_crouch_final = 0xd58;
					constexpr auto recovery_time_stand_final = 0xd5c;
					constexpr auto recovery_transition_start_bullet = 0xd60;
					constexpr auto recovery_transition_end_bullet = 0xd64;
					constexpr auto throw_velocity = 0xd68;
					constexpr auto v_smoke_color = 0xd6c;
					constexpr auto anim_class = 0xd78;
				} // namespace ccsweapon_base_vdata

				namespace cpoint_gamestats_counter
				{
					constexpr auto str_statistic_name = 0x4b0;
					constexpr auto disabled = 0x4b8;
				} // namespace cpoint_gamestats_counter

				namespace cenv_hud_hint
				{
					constexpr auto isz_message = 0x4b0;
				} // namespace cenv_hud_hint

				namespace cbuy_zone
				{
					constexpr auto legacy_team_num = 0x8a8;
				} // namespace cbuy_zone

				namespace cfunc_conveyor
				{
					constexpr auto conveyor_models = 0x700;
					constexpr auto transition_duration_seconds = 0x708;
					constexpr auto ang_move_entity_space = 0x70c;
					constexpr auto vec_move_dir_entity_space = 0x718;
					constexpr auto target_speed = 0x724;
					constexpr auto transition_start_tick = 0x728;
					constexpr auto transition_duration_ticks = 0x72c;
					constexpr auto transition_start_speed = 0x730;
					constexpr auto h_conveyor_models = 0x738;
				} // namespace cfunc_conveyor

				namespace ccsplace
				{
					constexpr auto name = 0x708;
				} // namespace ccsplace

				namespace cgame_money
				{
					constexpr auto on_money_spent = 0x710;
					constexpr auto on_money_spent_fail = 0x738;
					constexpr auto money = 0x760;
					constexpr auto str_award_text = 0x768;
				} // namespace cgame_money

				namespace cplayer_spray_decal
				{
					constexpr auto unique_id = 0x700;
					constexpr auto un_account_id = 0x704;
					constexpr auto un_trace_id = 0x708;
					constexpr auto rt_gc_time = 0x70c;
					constexpr auto vec_end_pos = 0x710;
					constexpr auto vec_start = 0x71c;
					constexpr auto vec_left = 0x728;
					constexpr auto vec_normal = 0x734;
					constexpr auto player = 0x740;
					constexpr auto entity = 0x744;
					constexpr auto hitbox = 0x748;
					constexpr auto creation_time = 0x74c;
					constexpr auto tint_id = 0x750;
					constexpr auto version = 0x754;
					constexpr auto ub_signature_arr = 0x755;
				} // namespace cplayer_spray_decal

				namespace cinferno
				{
					constexpr auto fire_positions_arr = 0x710;
					constexpr auto fire_parent_positions_arr = 0xa10;
					constexpr auto fire_is_burning_arr = 0xd10;
					constexpr auto burn_normal_arr = 0xd50;
					constexpr auto fire_count = 0x1050;
					constexpr auto inferno_type = 0x1054;
					constexpr auto fire_effect_tick_begin = 0x1058;
					constexpr auto fire_lifetime = 0x105c;
					constexpr auto in_post_effect_time = 0x1060;
					constexpr auto fires_extinguish_count = 0x1064;
					constexpr auto was_created_in_smoke = 0x1068;
					constexpr auto extent = 0x1270;
					constexpr auto damage_timer = 0x1288;
					constexpr auto damage_ramp_timer = 0x12a0;
					constexpr auto splash_velocity = 0x12b8;
					constexpr auto initial_splash_velocity = 0x12c4;
					constexpr auto start_pos = 0x12d0;
					constexpr auto vec_original_spawn_location = 0x12dc;
					constexpr auto active_timer = 0x12e8;
					constexpr auto fire_spawn_offset = 0x12f8;
					constexpr auto max_flames = 0x12fc;
					constexpr auto bookkeeping_timer = 0x1300;
					constexpr auto next_spread_timer = 0x1318;
					constexpr auto source_item_def_index = 0x1330;
				} // namespace cinferno

				namespace cbarn_light
				{
					constexpr auto enabled = 0x700;
					constexpr auto color_mode = 0x704;
					constexpr auto color = 0x708;
					constexpr auto color_temperature = 0x70c;
					constexpr auto brightness = 0x710;
					constexpr auto brightness_scale = 0x714;
					constexpr auto direct_light = 0x718;
					constexpr auto baked_shadow_index = 0x71c;
					constexpr auto luminaire_shape = 0x720;
					constexpr auto luminaire_size = 0x724;
					constexpr auto luminaire_anisotropy = 0x728;
					constexpr auto light_style_string = 0x730;
					constexpr auto light_style_start_time = 0x738;
					constexpr auto queued_light_style_strings = 0x740;
					constexpr auto light_style_events = 0x758;
					constexpr auto light_style_targets = 0x770;
					constexpr auto style_event_arr = 0x788;
					constexpr auto h_light_cookie = 0x848;
					constexpr auto shape = 0x850;
					constexpr auto soft_x = 0x854;
					constexpr auto soft_y = 0x858;
					constexpr auto skirt = 0x85c;
					constexpr auto skirt_near = 0x860;
					constexpr auto v_size_params = 0x864;
					constexpr auto range = 0x870;
					constexpr auto v_shear = 0x874;
					constexpr auto bake_specular_to_cubemaps = 0x880;
					constexpr auto v_bake_specular_to_cubemaps_size = 0x884;
					constexpr auto cast_shadows = 0x890;
					constexpr auto shadow_map_size = 0x894;
					constexpr auto shadow_priority = 0x898;
					constexpr auto contact_shadow = 0x89c;
					constexpr auto bounce_light = 0x8a0;
					constexpr auto bounce_scale = 0x8a4;
					constexpr auto min_roughness = 0x8a8;
					constexpr auto v_alternate_color = 0x8ac;
					constexpr auto alternate_color_brightness = 0x8b8;
					constexpr auto fog = 0x8bc;
					constexpr auto fog_strength = 0x8c0;
					constexpr auto fog_shadows = 0x8c4;
					constexpr auto fog_scale = 0x8c8;
					constexpr auto fade_size_start = 0x8cc;
					constexpr auto fade_size_end = 0x8d0;
					constexpr auto shadow_fade_size_start = 0x8d4;
					constexpr auto shadow_fade_size_end = 0x8d8;
					constexpr auto precomputed_fields_valid = 0x8dc;
					constexpr auto v_precomputed_bounds_mins = 0x8e0;
					constexpr auto v_precomputed_bounds_maxs = 0x8ec;
					constexpr auto v_precomputed_obborigin = 0x8f8;
					constexpr auto v_precomputed_obbangles = 0x904;
					constexpr auto v_precomputed_obbextent = 0x910;
					constexpr auto pvs_modify_entity = 0x91c;
				} // namespace cbarn_light

				namespace crect_light
				{
					constexpr auto show_light = 0x928;
				} // namespace crect_light

				namespace comni_light
				{
					constexpr auto inner_angle = 0x928;
					constexpr auto outer_angle = 0x92c;
					constexpr auto show_light = 0x930;
				} // namespace comni_light

				namespace ccsteam
				{
					constexpr auto last_recieved_shorthanded_round_bonus = 0x568;
					constexpr auto shorthanded_round_bonus_start_round = 0x56c;
					constexpr auto surrendered = 0x570;
					constexpr auto team_match_stat_arr = 0x571;
					constexpr auto num_map_victories = 0x774;
					constexpr auto score_first_half = 0x778;
					constexpr auto score_second_half = 0x77c;
					constexpr auto score_overtime = 0x780;
					constexpr auto clan_teamname_arr = 0x784;
					constexpr auto clan_id = 0x808;
					constexpr auto team_flag_image_arr = 0x80c;
					constexpr auto team_logo_image_arr = 0x814;
					constexpr auto next_resource_time = 0x81c;
					constexpr auto last_update_sent_at = 0x820;
				} // namespace ccsteam

				namespace cmap_info
				{
					constexpr auto buying_status = 0x4b0;
					constexpr auto bomb_radius = 0x4b4;
					constexpr auto pet_population = 0x4b8;
					constexpr auto use_normal_spawns_for_dm = 0x4bc;
					constexpr auto disable_auto_generated_dmspawns = 0x4bd;
					constexpr auto bot_max_vision_distance = 0x4c0;
					constexpr auto hostage_count = 0x4c4;
					constexpr auto fade_player_visibility_far_z = 0x4c8;
				} // namespace cmap_info

				namespace ccsbot
				{
					constexpr auto last_coop_spawn_point = 0xf8;
					constexpr auto eye_position = 0x108;
					constexpr auto name_arr = 0x114;
					constexpr auto combat_range = 0x154;
					constexpr auto is_rogue = 0x158;
					constexpr auto rogue_timer = 0x160;
					constexpr auto died_last_round = 0x17c;
					constexpr auto safe_time = 0x180;
					constexpr auto was_safe = 0x184;
					constexpr auto blind_fire = 0x18c;
					constexpr auto surprise_timer = 0x190;
					constexpr auto allow_active = 0x1a8;
					constexpr auto is_following = 0x1a9;
					constexpr auto leader = 0x1ac;
					constexpr auto follow_timestamp = 0x1b0;
					constexpr auto allow_auto_follow_time = 0x1b4;
					constexpr auto hurry_timer = 0x1b8;
					constexpr auto alert_timer = 0x1d0;
					constexpr auto sneak_timer = 0x1e8;
					constexpr auto panic_timer = 0x200;
					constexpr auto state_timestamp = 0x4d0;
					constexpr auto is_attacking = 0x4d4;
					constexpr auto is_opening_door = 0x4d5;
					constexpr auto task_entity = 0x4dc;
					constexpr auto goal_position = 0x4ec;
					constexpr auto goal_entity = 0x4f8;
					constexpr auto avoid = 0x4fc;
					constexpr auto avoid_timestamp = 0x500;
					constexpr auto is_stopping = 0x504;
					constexpr auto has_visited_enemy_spawn = 0x505;
					constexpr auto still_timer = 0x508;
					constexpr auto eye_angles_under_path_finder_control = 0x518;
					constexpr auto path_index = 0x6610;
					constexpr auto area_entered_timestamp = 0x6614;
					constexpr auto repath_timer = 0x6618;
					constexpr auto avoid_friend_timer = 0x6630;
					constexpr auto is_friend_in_the_way = 0x6648;
					constexpr auto polite_timer = 0x6650;
					constexpr auto is_waiting_behind_friend = 0x6668;
					constexpr auto path_ladder_end = 0x6694;
					constexpr auto must_run_timer = 0x66e0;
					constexpr auto wait_timer = 0x66f8;
					constexpr auto update_travel_distance_timer = 0x6710;
					constexpr auto player_travel_distance_arr = 0x6728;
					constexpr auto travel_distance_phase = 0x6828;
					constexpr auto hostage_escort_count = 0x69c0;
					constexpr auto hostage_escort_count_timestamp = 0x69c4;
					constexpr auto desired_team = 0x69c8;
					constexpr auto has_joined = 0x69cc;
					constexpr auto is_waiting_for_hostage = 0x69cd;
					constexpr auto inhibit_waiting_for_hostage_timer = 0x69d0;
					constexpr auto wait_for_hostage_timer = 0x69e8;
					constexpr auto noise_position = 0x6a00;
					constexpr auto noise_travel_distance = 0x6a0c;
					constexpr auto noise_timestamp = 0x6a10;
					constexpr auto noise_source_ptr = 0x6a18;
					constexpr auto noise_bend_timer = 0x6a30;
					constexpr auto bent_noise_position = 0x6a48;
					constexpr auto bend_noise_position_valid = 0x6a54;
					constexpr auto look_around_state_timestamp = 0x6a58;
					constexpr auto look_ahead_angle = 0x6a5c;
					constexpr auto forward_angle = 0x6a60;
					constexpr auto inhibit_look_around_timestamp = 0x6a64;
					constexpr auto look_at_spot = 0x6a6c;
					constexpr auto look_at_spot_duration = 0x6a7c;
					constexpr auto look_at_spot_timestamp = 0x6a80;
					constexpr auto look_at_spot_angle_tolerance = 0x6a84;
					constexpr auto look_at_spot_clear_if_close = 0x6a88;
					constexpr auto look_at_spot_attack = 0x6a89;
					constexpr auto look_at_desc_ptr = 0x6a90;
					constexpr auto peripheral_timestamp = 0x6a98;
					constexpr auto approach_point_count = 0x6c20;
					constexpr auto approach_point_view_position = 0x6c24;
					constexpr auto view_steady_timer = 0x6c30;
					constexpr auto toss_grenade_timer = 0x6c48;
					constexpr auto is_avoiding_grenade = 0x6c68;
					constexpr auto spot_check_timestamp = 0x6c88;
					constexpr auto checked_hiding_spot_count = 0x7090;
					constexpr auto look_pitch = 0x7094;
					constexpr auto look_pitch_vel = 0x7098;
					constexpr auto look_yaw = 0x709c;
					constexpr auto look_yaw_vel = 0x70a0;
					constexpr auto target_spot = 0x70a4;
					constexpr auto target_spot_velocity = 0x70b0;
					constexpr auto target_spot_predicted = 0x70bc;
					constexpr auto aim_error = 0x70c8;
					constexpr auto aim_goal = 0x70d4;
					constexpr auto target_spot_time = 0x70e0;
					constexpr auto aim_focus = 0x70e4;
					constexpr auto aim_focus_interval = 0x70e8;
					constexpr auto aim_focus_next_update = 0x70ec;
					constexpr auto ignore_enemies_timer = 0x70f8;
					constexpr auto enemy = 0x7110;
					constexpr auto is_enemy_visible = 0x7114;
					constexpr auto visible_enemy_parts = 0x7115;
					constexpr auto last_enemy_position = 0x7118;
					constexpr auto last_saw_enemy_timestamp = 0x7124;
					constexpr auto first_saw_enemy_timestamp = 0x7128;
					constexpr auto current_enemy_acquire_timestamp = 0x712c;
					constexpr auto enemy_death_timestamp = 0x7130;
					constexpr auto friend_death_timestamp = 0x7134;
					constexpr auto is_last_enemy_dead = 0x7138;
					constexpr auto nearby_enemy_count = 0x713c;
					constexpr auto bomber = 0x7348;
					constexpr auto nearby_friend_count = 0x734c;
					constexpr auto closest_visible_friend = 0x7350;
					constexpr auto closest_visible_human_friend = 0x7354;
					constexpr auto attention_interval = 0x7358;
					constexpr auto attacker = 0x7368;
					constexpr auto attacked_timestamp = 0x736c;
					constexpr auto burned_by_flames_timer = 0x7370;
					constexpr auto last_victim_id = 0x7380;
					constexpr auto is_aiming_at_enemy = 0x7384;
					constexpr auto is_rapid_firing = 0x7385;
					constexpr auto equip_timer = 0x7388;
					constexpr auto zoom_timer = 0x7398;
					constexpr auto fire_weapon_timestamp = 0x73b0;
					constexpr auto look_for_weapons_on_ground_timer = 0x73b8;
					constexpr auto is_sleeping = 0x73d0;
					constexpr auto is_enemy_sniper_visible = 0x73d1;
					constexpr auto saw_enemy_sniper_timer = 0x73d8;
					constexpr auto enemy_queue_index = 0x7490;
					constexpr auto enemy_queue_count = 0x7491;
					constexpr auto enemy_queue_attend_index = 0x7492;
					constexpr auto is_stuck = 0x7493;
					constexpr auto stuck_timestamp = 0x7494;
					constexpr auto stuck_spot = 0x7498;
					constexpr auto wiggle_timer = 0x74a8;
					constexpr auto stuck_jump_timer = 0x74c0;
					constexpr auto next_cleanup_check_timestamp = 0x74d8;
					constexpr auto avg_vel_arr = 0x74dc;
					constexpr auto avg_vel_index = 0x7504;
					constexpr auto avg_vel_count = 0x7508;
					constexpr auto last_origin = 0x750c;
					constexpr auto last_radio_recieved_timestamp = 0x751c;
					constexpr auto last_radio_sent_timestamp = 0x7520;
					constexpr auto radio_subject = 0x7524;
					constexpr auto radio_position = 0x7528;
					constexpr auto voice_end_timestamp = 0x7534;
					constexpr auto last_valid_reaction_queue_frame = 0x7540;
				} // namespace ccsbot

				namespace cfog_volume
				{
					constexpr auto fog_name = 0x700;
					constexpr auto post_process_name = 0x708;
					constexpr auto color_correction_name = 0x710;
					constexpr auto disabled = 0x720;
					constexpr auto in_fog_volumes_list = 0x721;
				} // namespace cfog_volume

				namespace cinfo_dynamic_shadow_hint
				{
					constexpr auto disabled = 0x4b0;
					constexpr auto range = 0x4b4;
					constexpr auto importance = 0x4b8;
					constexpr auto light_choice = 0x4bc;
					constexpr auto h_light = 0x4c0;
				} // namespace cinfo_dynamic_shadow_hint

				namespace cinfo_dynamic_shadow_hint_box
				{
					constexpr auto v_box_mins = 0x4c8;
					constexpr auto v_box_maxs = 0x4d4;
				} // namespace cinfo_dynamic_shadow_hint_box

				namespace cenv_sky
				{
					constexpr auto h_sky_material = 0x700;
					constexpr auto h_sky_material_lighting_only = 0x708;
					constexpr auto start_disabled = 0x710;
					constexpr auto v_tint_color = 0x711;
					constexpr auto v_tint_color_lighting_only = 0x715;
					constexpr auto brightness_scale = 0x71c;
					constexpr auto fog_type = 0x720;
					constexpr auto fog_min_start = 0x724;
					constexpr auto fog_min_end = 0x728;
					constexpr auto fog_max_start = 0x72c;
					constexpr auto fog_max_end = 0x730;
					constexpr auto enabled = 0x734;
				} // namespace cenv_sky

				namespace ctonemap_trigger
				{
					constexpr auto tonemap_controller_name = 0x8a8;
					constexpr auto h_tonemap_controller = 0x8b0;
				} // namespace ctonemap_trigger

				namespace cfog_trigger
				{
					constexpr auto fog = 0x8a8;
				} // namespace cfog_trigger

				namespace clight_entity
				{
					constexpr auto clight_component_ptr = 0x700;
				} // namespace clight_entity

				namespace cpost_processing_volume
				{
					constexpr auto h_post_settings = 0x8b8;
					constexpr auto fade_duration = 0x8c0;
					constexpr auto min_log_exposure = 0x8c4;
					constexpr auto max_log_exposure = 0x8c8;
					constexpr auto min_exposure = 0x8cc;
					constexpr auto max_exposure = 0x8d0;
					constexpr auto exposure_compensation = 0x8d4;
					constexpr auto exposure_fade_speed_up = 0x8d8;
					constexpr auto exposure_fade_speed_down = 0x8dc;
					constexpr auto tonemap_evsmoothing_range = 0x8e0;
					constexpr auto master = 0x8e4;
					constexpr auto exposure_control = 0x8e5;
					constexpr auto rate = 0x8e8;
					constexpr auto tonemap_percent_target = 0x8ec;
					constexpr auto tonemap_percent_bright_pixels = 0x8f0;
					constexpr auto tonemap_min_avg_lum = 0x8f4;
				} // namespace cpost_processing_volume

				namespace cenv_particle_glow
				{
					constexpr auto alpha_scale = 0xc78;
					constexpr auto radius_scale = 0xc7c;
					constexpr auto self_illum_scale = 0xc80;
					constexpr auto color_tint = 0xc84;
					constexpr auto h_texture_override = 0xc88;
				} // namespace cenv_particle_glow

				namespace ctexture_based_animatable
				{
					constexpr auto loop = 0x700;
					constexpr auto fps = 0x704;
					constexpr auto h_position_keys = 0x708;
					constexpr auto h_rotation_keys = 0x710;
					constexpr auto v_animation_bounds_min = 0x718;
					constexpr auto v_animation_bounds_max = 0x724;
					constexpr auto start_time = 0x730;
					constexpr auto start_frame = 0x734;
				} // namespace ctexture_based_animatable

				namespace cbase_anim_graph
				{
					constexpr auto initially_populate_interp_history = 0x700;
					constexpr auto should_animate_during_gameplay_pause = 0x701;
					constexpr auto choreo_services_ptr = 0x708;
					constexpr auto anim_graph_update_enabled = 0x710;
					constexpr auto max_slope_distance = 0x714;
					constexpr auto v_last_slope_check_pos = 0x718;
					constexpr auto anim_graph_dirty = 0x724;
					constexpr auto vec_force = 0x728;
					constexpr auto force_bone = 0x734;
					constexpr auto ragdoll_pose_ptr = 0x748;
					constexpr auto client_ragdoll = 0x750;
				} // namespace cbase_anim_graph

				namespace cbase_prop
				{
					constexpr auto model_overrode_block_los = 0x890;
					constexpr auto shape_type = 0x894;
					constexpr auto conform_to_collision_bounds = 0x898;
					constexpr auto m_preferred_catch_transform = 0x89c;
				} // namespace cbase_prop

				namespace cbreakable_prop
				{
					constexpr auto on_break = 0x8e0;
					constexpr auto on_health_changed = 0x908;
					constexpr auto on_take_damage = 0x930;
					constexpr auto impact_energy_scale = 0x958;
					constexpr auto min_health_dmg = 0x95c;
					constexpr auto preferred_carry_angles = 0x960;
					constexpr auto pressure_delay = 0x96c;
					constexpr auto h_breaker = 0x970;
					constexpr auto performance_mode = 0x974;
					constexpr auto dmg_mod_bullet = 0x978;
					constexpr auto dmg_mod_club = 0x97c;
					constexpr auto dmg_mod_explosive = 0x980;
					constexpr auto dmg_mod_fire = 0x984;
					constexpr auto isz_physics_damage_table_name = 0x988;
					constexpr auto isz_base_prop_data = 0x990;
					constexpr auto interactions = 0x998;
					constexpr auto prevent_damage_before_time = 0x99c;
					constexpr auto has_break_pieces_or_commands = 0x9a0;
					constexpr auto explode_damage = 0x9a4;
					constexpr auto explode_radius = 0x9a8;
					constexpr auto explosion_delay = 0x9b0;
					constexpr auto explosion_buildup_sound = 0x9b8;
					constexpr auto explosion_custom_effect = 0x9c0;
					constexpr auto explosion_custom_sound = 0x9c8;
					constexpr auto explosion_modifier = 0x9d0;
					constexpr auto h_physics_attacker = 0x9d8;
					constexpr auto last_physics_influence_time = 0x9dc;
					constexpr auto original_block_los = 0x9e0;
					constexpr auto default_fade_scale = 0x9e4;
					constexpr auto h_last_attacker = 0x9e8;
					constexpr auto h_flare_ent = 0x9ec;
					constexpr auto use_punt_sound = 0x9f0;
					constexpr auto isz_punt_sound = 0x9f8;
					constexpr auto no_ghost_collision = 0xa00;
				} // namespace cbreakable_prop

				namespace cdynamic_prop
				{
					constexpr auto create_nav_obstacle = 0xa10;
					constexpr auto use_hitboxes_for_render_box = 0xa11;
					constexpr auto use_anim_graph = 0xa12;
					constexpr auto output_anim_begun = 0xa18;
					constexpr auto output_anim_over = 0xa40;
					constexpr auto output_anim_loop_cycle_over = 0xa68;
					constexpr auto on_anim_reached_start = 0xa90;
					constexpr auto on_anim_reached_end = 0xab8;
					constexpr auto isz_default_anim = 0xae0;
					constexpr auto default_anim_loop_mode = 0xae8;
					constexpr auto animate_on_server = 0xaec;
					constexpr auto randomize_cycle = 0xaed;
					constexpr auto start_disabled = 0xaee;
					constexpr auto scripted_movement = 0xaef;
					constexpr auto fired_start_end_output = 0xaf0;
					constexpr auto force_npc_exclude = 0xaf1;
					constexpr auto create_non_solid = 0xaf2;
					constexpr auto is_override_prop = 0xaf3;
					constexpr auto initial_glow_state = 0xaf4;
					constexpr auto glow_range = 0xaf8;
					constexpr auto glow_range_min = 0xafc;
					constexpr auto glow_color = 0xb00;
					constexpr auto glow_team = 0xb04;
				} // namespace cdynamic_prop

				namespace ccolor_correction_volume
				{
					constexpr auto enabled = 0x8a8;
					constexpr auto max_weight = 0x8ac;
					constexpr auto fade_duration = 0x8b0;
					constexpr auto start_disabled = 0x8b4;
					constexpr auto weight = 0x8b8;
					constexpr auto lookup_filename_arr = 0x8bc;
					constexpr auto last_enter_weight = 0xabc;
					constexpr auto last_enter_time = 0xac0;
					constexpr auto last_exit_weight = 0xac4;
					constexpr auto last_exit_time = 0xac8;
				} // namespace ccolor_correction_volume

				namespace cpoint_commentary_node
				{
					constexpr auto isz_pre_commands = 0x890;
					constexpr auto isz_post_commands = 0x898;
					constexpr auto isz_commentary_file = 0x8a0;
					constexpr auto isz_view_target = 0x8a8;
					constexpr auto h_view_target = 0x8b0;
					constexpr auto h_view_target_angles = 0x8b4;
					constexpr auto isz_view_position = 0x8b8;
					constexpr auto h_view_position = 0x8c0;
					constexpr auto h_view_position_mover = 0x8c4;
					constexpr auto prevent_movement = 0x8c8;
					constexpr auto under_crosshair = 0x8c9;
					constexpr auto unstoppable = 0x8ca;
					constexpr auto finished_time = 0x8cc;
					constexpr auto vec_finish_origin = 0x8d0;
					constexpr auto vec_original_angles = 0x8dc;
					constexpr auto vec_finish_angles = 0x8e8;
					constexpr auto prevent_changes_while_moving = 0x8f4;
					constexpr auto disabled = 0x8f5;
					constexpr auto vec_teleport_origin = 0x8f8;
					constexpr auto aborted_playback_at = 0x904;
					constexpr auto on_commentary_started = 0x908;
					constexpr auto on_commentary_stopped = 0x930;
					constexpr auto active = 0x958;
					constexpr auto start_time = 0x95c;
					constexpr auto start_time_in_commentary = 0x960;
					constexpr auto isz_title = 0x968;
					constexpr auto isz_speakers = 0x970;
					constexpr auto node_number = 0x978;
					constexpr auto node_number_max = 0x97c;
					constexpr auto listened_to = 0x980;
				} // namespace cpoint_commentary_node

				namespace crot_door
				{
					constexpr auto solid_bsp = 0x988;
				} // namespace crot_door

				namespace cenv_beam
				{
					constexpr auto active = 0x7a0;
					constexpr auto sprite_texture = 0x7a8;
					constexpr auto isz_start_entity = 0x7b0;
					constexpr auto isz_end_entity = 0x7b8;
					constexpr auto life = 0x7c0;
					constexpr auto bolt_width = 0x7c4;
					constexpr auto noise_amplitude = 0x7c8;
					constexpr auto speed = 0x7cc;
					constexpr auto restrike = 0x7d0;
					constexpr auto isz_sprite_name = 0x7d8;
					constexpr auto frame_start = 0x7e0;
					constexpr auto v_end_point_world = 0x7e4;
					constexpr auto v_end_point_relative = 0x7f0;
					constexpr auto radius = 0x7fc;
					constexpr auto touch_type = 0x800;
					constexpr auto filter_name = 0x808;
					constexpr auto h_filter = 0x810;
					constexpr auto isz_decal = 0x818;
					constexpr auto on_touched_by_entity = 0x820;
				} // namespace cenv_beam

				namespace cfunc_monitor
				{
					constexpr auto target_camera = 0x720;
					constexpr auto resolution_enum = 0x728;
					constexpr auto render_shadows = 0x72c;
					constexpr auto use_unique_color_target = 0x72d;
					constexpr auto brush_model_name = 0x730;
					constexpr auto h_target_camera = 0x738;
					constexpr auto enabled = 0x73c;
					constexpr auto draw3_dskybox = 0x73d;
					constexpr auto start_enabled = 0x73e;
				} // namespace cfunc_monitor

				namespace cgun_target
				{
					constexpr auto on = 0x780;
					constexpr auto h_target_ent = 0x784;
					constexpr auto on_death = 0x788;
				} // namespace cgun_target

				namespace ctrigger_game_event
				{
					constexpr auto str_start_touch_event_name = 0x8a8;
					constexpr auto str_end_touch_event_name = 0x8b0;
					constexpr auto str_trigger_id = 0x8b8;
				} // namespace ctrigger_game_event

				namespace cgame_text
				{
					constexpr auto isz_message = 0x710;
					constexpr auto text_parms = 0x718;
				} // namespace cgame_text

				namespace cgame_player_zone
				{
					constexpr auto on_player_in_zone = 0x708;
					constexpr auto on_player_out_zone = 0x730;
					constexpr auto players_in_count = 0x758;
					constexpr auto players_out_count = 0x780;
				} // namespace cgame_player_zone

				namespace cmarkup_volume_tagged_nav_game
				{
					constexpr auto flood_fill_attribute = 0x758;
				} // namespace cmarkup_volume_tagged_nav_game

				namespace cfunc_electrified_volume
				{
					constexpr auto effect_name = 0x720;
					constexpr auto effect_interpenetrate_name = 0x728;
					constexpr auto effect_zap_name = 0x730;
					constexpr auto isz_effect_source = 0x738;
				} // namespace cfunc_electrified_volume

				namespace cconstraint_anchor
				{
					constexpr auto mass_scale = 0x890;
				} // namespace cconstraint_anchor

				namespace cornament_prop
				{
					constexpr auto initial_owner = 0xb08;
				} // namespace cornament_prop

				namespace cinstanced_scene_entity
				{
					constexpr auto h_owner = 0xa08;
					constexpr auto had_owner = 0xa0c;
					constexpr auto post_speak_delay = 0xa10;
					constexpr auto pre_delay = 0xa14;
					constexpr auto is_background = 0xa18;
				} // namespace cinstanced_scene_entity

				namespace ctrigger_soundscape
				{
					constexpr auto h_soundscape = 0x8a8;
					constexpr auto soundscape_name = 0x8b0;
					constexpr auto spectators = 0x8b8;
				} // namespace ctrigger_soundscape

				namespace cfunc_tank_train
				{
					constexpr auto on_death = 0x850;
				} // namespace cfunc_tank_train

				namespace cbase_plat_train
				{
					constexpr auto noise_moving = 0x780;
					constexpr auto noise_arrived = 0x788;
					constexpr auto volume = 0x798;
					constexpr auto twidth = 0x79c;
					constexpr auto tlength = 0x7a0;
				} // namespace cbase_plat_train

				namespace cfunc_plat
				{
					constexpr auto s_noise = 0x7a8;
				} // namespace cfunc_plat

				namespace cfunc_plat_rot
				{
					constexpr auto end = 0x7b0;
					constexpr auto start = 0x7bc;
				} // namespace cfunc_plat_rot

				namespace cfunc_train
				{
					constexpr auto h_current_target = 0x7a8;
					constexpr auto activated = 0x7ac;
					constexpr auto h_enemy = 0x7b0;
					constexpr auto block_damage = 0x7b4;
					constexpr auto next_block_time = 0x7b8;
					constexpr auto isz_last_target = 0x7c0;
				} // namespace cfunc_train

				namespace cfunc_track_change
				{
					constexpr auto track_top_ptr = 0x7c8;
					constexpr auto track_bottom_ptr = 0x7d0;
					constexpr auto train_ptr = 0x7d8;
					constexpr auto track_top_name = 0x7e0;
					constexpr auto track_bottom_name = 0x7e8;
					constexpr auto train_name = 0x7f0;
					constexpr auto code = 0x7f8;
					constexpr auto target_state = 0x7fc;
					constexpr auto use = 0x800;
				} // namespace cfunc_track_change

				namespace ctrigger_remove
				{
					constexpr auto on_remove = 0x8a8;
				} // namespace ctrigger_remove

				namespace cscript_trigger_hurt
				{
					constexpr auto v_extent = 0x948;
				} // namespace cscript_trigger_hurt

				namespace cscript_trigger_multiple
				{
					constexpr auto v_extent = 0x8d0;
				} // namespace cscript_trigger_multiple

				namespace cscript_trigger_once
				{
					constexpr auto v_extent = 0x8d0;
				} // namespace cscript_trigger_once

				namespace ctrigger_look
				{
					constexpr auto h_look_target = 0x8d0;
					constexpr auto field_of_view = 0x8d4;
					constexpr auto look_time = 0x8d8;
					constexpr auto look_time_total = 0x8dc;
					constexpr auto look_time_last = 0x8e0;
					constexpr auto timeout_duration = 0x8e4;
					constexpr auto timeout_fired = 0x8e8;
					constexpr auto is_looking = 0x8e9;
					constexpr auto b2_dfov = 0x8ea;
					constexpr auto use_velocity = 0x8eb;
					constexpr auto h_activator = 0x8ec;
					constexpr auto test_occlusion = 0x8f0;
					constexpr auto on_timeout = 0x8f8;
					constexpr auto on_start_look = 0x920;
					constexpr auto on_end_look = 0x948;
				} // namespace ctrigger_look

				namespace ctrigger_push
				{
					constexpr auto ang_push_entity_space = 0x8a8;
					constexpr auto vec_push_dir_entity_space = 0x8b4;
					constexpr auto trigger_on_start_touch = 0x8c0;
					constexpr auto alternate_ticks_fix = 0x8c4;
					constexpr auto push_speed = 0x8c8;
				} // namespace ctrigger_push

				namespace cscript_trigger_push
				{
					constexpr auto v_extent = 0x8d0;
				} // namespace cscript_trigger_push

				namespace ctrigger_toggle_save
				{
					constexpr auto disabled = 0x8a8;
				} // namespace ctrigger_toggle_save

				namespace ctrigger_save
				{
					constexpr auto force_new_level_unit = 0x8a8;
					constexpr auto dangerous_timer = 0x8ac;
					constexpr auto min_hit_points = 0x8b0;
				} // namespace ctrigger_save

				namespace ctrigger_proximity
				{
					constexpr auto h_measure_target = 0x8a8;
					constexpr auto isz_measure_target = 0x8b0;
					constexpr auto radius = 0x8b8;
					constexpr auto touchers = 0x8bc;
					constexpr auto nearest_entity_distance = 0x8c0;
				} // namespace ctrigger_proximity

				namespace ctrigger_impact
				{
					constexpr auto magnitude = 0x8d0;
					constexpr auto noise = 0x8d4;
					constexpr auto viewkick = 0x8d8;
					constexpr auto output_force = 0x8e0;
				} // namespace ctrigger_impact

				namespace ctrigger_active_weapon_detect
				{
					constexpr auto on_touched_active_weapon = 0x8a8;
					constexpr auto isz_weapon_class_name = 0x8d0;
				} // namespace ctrigger_active_weapon_detect

				namespace ctrigger_physics
				{
					constexpr auto gravity_scale = 0x8b8;
					constexpr auto linear_limit = 0x8bc;
					constexpr auto linear_damping = 0x8c0;
					constexpr auto angular_limit = 0x8c4;
					constexpr auto angular_damping = 0x8c8;
					constexpr auto linear_force = 0x8cc;
					constexpr auto frequency = 0x8d0;
					constexpr auto damping_ratio = 0x8d4;
					constexpr auto vec_linear_force_point_at = 0x8d8;
					constexpr auto collapse_to_force_point = 0x8e4;
					constexpr auto vec_linear_force_point_at_world = 0x8e8;
					constexpr auto vec_linear_force_direction = 0x8f4;
					constexpr auto convert_to_debris_when_possible = 0x900;
				} // namespace ctrigger_physics

				namespace ctrigger_detect_bullet_fire
				{
					constexpr auto player_fire_only = 0x8a8;
					constexpr auto on_detected_bullet_fire = 0x8b0;
				} // namespace ctrigger_detect_bullet_fire

				namespace ctrigger_detect_explosion
				{
					constexpr auto on_detected_explosion = 0x8e0;
				} // namespace ctrigger_detect_explosion

				namespace cscript_nav_blocker
				{
					constexpr auto v_extent = 0x710;
				} // namespace cscript_nav_blocker

				namespace cbase_flex
				{
					constexpr auto flex_weight = 0x890;
					constexpr auto v_look_target_position = 0x8a8;
					constexpr auto blinktoggle = 0x8b4;
					constexpr auto allow_responses_end_time = 0x908;
					constexpr auto last_flex_animation_time = 0x90c;
					constexpr auto next_scene_event_id = 0x910;
					constexpr auto update_layer_priorities = 0x914;
				} // namespace cbase_flex

				namespace cbase_prop_door
				{
					constexpr auto auto_return_delay = 0xb18;
					constexpr auto h_door_list = 0xb20;
					constexpr auto hardware_type = 0xb38;
					constexpr auto needs_hardware = 0xb3c;
					constexpr auto e_door_state = 0xb40;
					constexpr auto locked = 0xb44;
					constexpr auto closed_position = 0xb48;
					constexpr auto closed_angles = 0xb54;
					constexpr auto h_blocker = 0xb60;
					constexpr auto first_blocked = 0xb64;
					constexpr auto ls = 0xb68;
					constexpr auto force_closed = 0xb88;
					constexpr auto vec_latch_world_position = 0xb8c;
					constexpr auto h_activator = 0xb98;
					constexpr auto sound_moving = 0xba8;
					constexpr auto sound_open = 0xbb0;
					constexpr auto sound_close = 0xbb8;
					constexpr auto sound_lock = 0xbc0;
					constexpr auto sound_unlock = 0xbc8;
					constexpr auto sound_latch = 0xbd0;
					constexpr auto sound_pound = 0xbd8;
					constexpr auto sound_jiggle = 0xbe0;
					constexpr auto sound_locked_anim = 0xbe8;
					constexpr auto num_close_attempts = 0xbf0;
					constexpr auto physics_material = 0xbf4;
					constexpr auto slave_name = 0xbf8;
					constexpr auto h_master = 0xc00;
					constexpr auto on_blocked_closing = 0xc08;
					constexpr auto on_blocked_opening = 0xc30;
					constexpr auto on_unblocked_closing = 0xc58;
					constexpr auto on_unblocked_opening = 0xc80;
					constexpr auto on_fully_closed = 0xca8;
					constexpr auto on_fully_open = 0xcd0;
					constexpr auto on_close = 0xcf8;
					constexpr auto on_open = 0xd20;
					constexpr auto on_locked_use = 0xd48;
					constexpr auto on_ajar_open = 0xd70;
				} // namespace cbase_prop_door

				namespace cenv_laser
				{
					constexpr auto isz_laser_target = 0x7a0;
					constexpr auto sprite_ptr = 0x7a8;
					constexpr auto isz_sprite_name = 0x7b0;
					constexpr auto fire_position = 0x7b8;
					constexpr auto start_frame = 0x7c4;
				} // namespace cenv_laser

				namespace cfish
				{
					constexpr auto pool = 0x890;
					constexpr auto id = 0x894;
					constexpr auto x = 0x898;
					constexpr auto y = 0x89c;
					constexpr auto z = 0x8a0;
					constexpr auto angle = 0x8a4;
					constexpr auto angle_change = 0x8a8;
					constexpr auto forward = 0x8ac;
					constexpr auto perp = 0x8b8;
					constexpr auto pool_origin = 0x8c4;
					constexpr auto water_level = 0x8d0;
					constexpr auto speed = 0x8d4;
					constexpr auto desired_speed = 0x8d8;
					constexpr auto calm_speed = 0x8dc;
					constexpr auto panic_speed = 0x8e0;
					constexpr auto avoid_range = 0x8e4;
					constexpr auto turn_timer = 0x8e8;
					constexpr auto turn_clockwise = 0x900;
					constexpr auto go_timer = 0x908;
					constexpr auto move_timer = 0x920;
					constexpr auto panic_timer = 0x938;
					constexpr auto disperse_timer = 0x950;
					constexpr auto proximity_timer = 0x968;
					constexpr auto visible = 0x980;
				} // namespace cfish

				namespace citem
				{
					constexpr auto on_player_touch = 0x898;
					constexpr auto activate_when_at_rest = 0x8c0;
					constexpr auto on_cache_interaction = 0x8c8;
					constexpr auto on_player_pickup = 0x8f0;
					constexpr auto on_glove_pulled = 0x918;
					constexpr auto v_original_spawn_origin = 0x940;
					constexpr auto v_original_spawn_angles = 0x94c;
					constexpr auto phys_start_asleep = 0x958;
				} // namespace citem

				namespace cragdoll_prop
				{
					constexpr auto ragdoll = 0x898;
					constexpr auto start_disabled = 0x8d0;
					constexpr auto rag_pos = 0x8d8;
					constexpr auto rag_angles = 0x8f0;
					constexpr auto h_ragdoll_source = 0x908;
					constexpr auto last_update_tick_count = 0x90c;
					constexpr auto all_asleep = 0x910;
					constexpr auto first_collision_after_launch = 0x911;
					constexpr auto h_damage_entity = 0x914;
					constexpr auto h_killer = 0x918;
					constexpr auto h_physics_attacker = 0x91c;
					constexpr auto last_physics_influence_time = 0x920;
					constexpr auto fade_out_start_time = 0x924;
					constexpr auto fade_time = 0x928;
					constexpr auto vec_last_origin = 0x92c;
					constexpr auto awake_time = 0x938;
					constexpr auto last_origin_change_time = 0x93c;
					constexpr auto blood_color = 0x940;
					constexpr auto str_origin_class_name = 0x948;
					constexpr auto str_source_class_name = 0x950;
					constexpr auto has_been_physgunned = 0x958;
					constexpr auto should_teleport_physics = 0x959;
					constexpr auto blend_weight = 0x95c;
					constexpr auto default_fade_scale = 0x960;
					constexpr auto ragdoll_mins = 0x968;
					constexpr auto ragdoll_maxs = 0x980;
					constexpr auto should_delete_activation_record = 0x998;
					constexpr auto validate_powered_ragdoll_pose = 0x9f8;
				} // namespace cragdoll_prop

				namespace cphys_magnet
				{
					constexpr auto on_magnet_attach = 0x890;
					constexpr auto on_magnet_detach = 0x8b8;
					constexpr auto mass_scale = 0x8e0;
					constexpr auto force_limit = 0x8e4;
					constexpr auto torque_limit = 0x8e8;
					constexpr auto magnetted_entities = 0x8f0;
					constexpr auto active = 0x908;
					constexpr auto has_hit_something = 0x909;
					constexpr auto total_mass = 0x90c;
					constexpr auto radius = 0x910;
					constexpr auto next_suck_time = 0x914;
					constexpr auto max_objects_attached = 0x918;
				} // namespace cphys_magnet

				namespace cphysics_prop
				{
					constexpr auto motion_enabled = 0xa10;
					constexpr auto on_awakened = 0xa38;
					constexpr auto on_awake = 0xa60;
					constexpr auto on_asleep = 0xa88;
					constexpr auto on_player_use = 0xab0;
					constexpr auto on_player_pickup = 0xad8;
					constexpr auto on_out_of_world = 0xb00;
					constexpr auto mass_scale = 0xb28;
					constexpr auto inertia_scale = 0xb2c;
					constexpr auto buoyancy_scale = 0xb30;
					constexpr auto damage_type = 0xb34;
					constexpr auto damage_to_enable_motion = 0xb38;
					constexpr auto force_to_enable_motion = 0xb3c;
					constexpr auto thrown_by_player = 0xb40;
					constexpr auto dropped_by_player = 0xb41;
					constexpr auto touched_by_player = 0xb42;
					constexpr auto first_collision_after_launch = 0xb43;
					constexpr auto exploitable_by_player = 0xb44;
					constexpr auto has_been_awakened = 0xb48;
					constexpr auto is_override_prop = 0xb49;
					constexpr auto next_check_disable_motion_contacts_time = 0xb4c;
					constexpr auto initial_glow_state = 0xb50;
					constexpr auto glow_range = 0xb54;
					constexpr auto glow_range_min = 0xb58;
					constexpr auto glow_color = 0xb5c;
					constexpr auto force_nav_ignore = 0xb60;
					constexpr auto no_navmesh_blocker = 0xb61;
					constexpr auto force_npc_exclude = 0xb62;
					constexpr auto should_auto_convert_back_from_debris = 0xb63;
					constexpr auto mute_impact_effects = 0xb64;
					constexpr auto accept_damage_from_held_objects = 0xb6c;
					constexpr auto enable_use_output = 0xb6d;
					constexpr auto awake = 0xb6e;
					constexpr auto collision_group_override = 0xb70;
				} // namespace cphysics_prop

				namespace cphysics_prop_respawnable
				{
					constexpr auto v_original_spawn_origin = 0xb78;
					constexpr auto v_original_spawn_angles = 0xb84;
					constexpr auto v_original_mins = 0xb90;
					constexpr auto v_original_maxs = 0xb9c;
					constexpr auto respawn_duration = 0xba8;
				} // namespace cphysics_prop_respawnable

				namespace cshatter_glass_shard_physics
				{
					constexpr auto debris = 0xb78;
					constexpr auto h_parent_shard = 0xb7c;
					constexpr auto shard_desc = 0xb80;
				} // namespace cshatter_glass_shard_physics

				namespace cecon_entity
				{
					constexpr auto attribute_manager = 0x930;
					constexpr auto original_owner_xuid_low = 0xbf8;
					constexpr auto original_owner_xuid_high = 0xbfc;
					constexpr auto fallback_paint_kit = 0xc00;
					constexpr auto fallback_seed = 0xc04;
					constexpr auto fallback_wear = 0xc08;
					constexpr auto fallback_stat_trak = 0xc0c;
					constexpr auto h_old_providee = 0xc10;
					constexpr auto old_owner_class = 0xc14;
				} // namespace cecon_entity

				namespace cecon_wearable
				{
					constexpr auto force_skin = 0xc18;
					constexpr auto always_allow = 0xc1c;
				} // namespace cecon_wearable

				namespace cbase_grenade
				{
					constexpr auto on_player_pickup = 0x928;
					constexpr auto on_explode = 0x950;
					constexpr auto has_warned_ai = 0x978;
					constexpr auto is_smoke_grenade = 0x979;
					constexpr auto is_live = 0x97a;
					constexpr auto dmg_radius = 0x97c;
					constexpr auto detonate_time = 0x980;
					constexpr auto warn_aitime = 0x984;
					constexpr auto damage = 0x988;
					constexpr auto isz_bounce_sound = 0x990;
					constexpr auto explosion_sound = 0x998;
					constexpr auto h_thrower = 0x9a4;
					constexpr auto next_attack = 0x9bc;
					constexpr auto h_original_thrower = 0x9c0;
				} // namespace cbase_grenade

				namespace cbase_view_model
				{
					constexpr auto vec_last_facing = 0x898;
					constexpr auto view_model_index = 0x8a4;
					constexpr auto animation_parity = 0x8a8;
					constexpr auto animation_start_time = 0x8ac;
					constexpr auto h_weapon = 0x8b0;
					constexpr auto s_vmname = 0x8b8;
					constexpr auto s_animation_prefix = 0x8c0;
					constexpr auto h_old_layer_sequence = 0x8c8;
					constexpr auto old_layer = 0x8cc;
					constexpr auto old_layer_start_time = 0x8d0;
					constexpr auto h_control_panel = 0x8d4;
				} // namespace cbase_view_model

				namespace cplanted_c4
				{
					constexpr auto bomb_ticking = 0x890;
					constexpr auto c4_blow = 0x894;
					constexpr auto bomb_site = 0x898;
					constexpr auto source_soundscape_hash = 0x89c;
					constexpr auto on_bomb_defused = 0x8a0;
					constexpr auto on_bomb_begin_defuse = 0x8c8;
					constexpr auto on_bomb_defuse_aborted = 0x8f0;
					constexpr auto cannot_be_defused = 0x918;
					constexpr auto entity_spotted_state = 0x920;
					constexpr auto spot_rules = 0x938;
					constexpr auto training_placed_by_player = 0x93c;
					constexpr auto has_exploded = 0x93d;
					constexpr auto timer_length = 0x940;
					constexpr auto being_defused = 0x944;
					constexpr auto last_defuse_time = 0x94c;
					constexpr auto defuse_length = 0x954;
					constexpr auto defuse_count_down = 0x958;
					constexpr auto bomb_defused = 0x95c;
					constexpr auto h_bomb_defuser = 0x960;
					constexpr auto h_control_panel = 0x964;
					constexpr auto progress_bar_time = 0x968;
					constexpr auto voice_alert_fired = 0x96c;
					constexpr auto voice_alert_played_arr = 0x96d;
					constexpr auto next_bot_beep_time = 0x974;
					constexpr auto planted_after_pickup = 0x97c;
					constexpr auto ang_catch_up_to_player_eye = 0x980;
					constexpr auto last_spin_detection_time = 0x98c;
				} // namespace cplanted_c4

				namespace cbase_csgrenade_projectile
				{
					constexpr auto v_initial_position = 0x9c8;
					constexpr auto v_initial_velocity = 0x9d4;
					constexpr auto bounces = 0x9e0;
					constexpr auto explode_effect_index = 0x9e8;
					constexpr auto explode_effect_tick_begin = 0x9f0;
					constexpr auto vec_explode_effect_origin = 0x9f4;
					constexpr auto spawn_time = 0xa00;
					constexpr auto un_ogsextra_flags = 0xa04;
					constexpr auto detonation_recorded = 0xa05;
					constexpr auto detonate_time = 0xa08;
					constexpr auto item_index = 0xa0c;
					constexpr auto vec_original_spawn_location = 0xa10;
					constexpr auto last_bounce_sound_time = 0xa1c;
					constexpr auto vec_grenade_spin = 0xa20;
					constexpr auto vec_last_hit_surface_normal = 0xa2c;
					constexpr auto ticks_at_zero_velocity = 0xa38;
					constexpr auto has_ever_hit_player = 0xa3c;
					constexpr auto clear_from_players = 0xa3d;
				} // namespace cbase_csgrenade_projectile

				namespace citem_dogtags
				{
					constexpr auto owning_player = 0x968;
					constexpr auto killing_player = 0x96c;
				} // namespace citem_dogtags

				namespace csensor_grenade_projectile
				{
					constexpr auto expire_time = 0xa40;
					constexpr auto next_detect_player_sound = 0xa44;
					constexpr auto h_display_grenade = 0xa48;
				} // namespace csensor_grenade_projectile

				namespace cflashbang_projectile
				{
					constexpr auto time_to_detonate = 0xa40;
					constexpr auto num_opponents_hit = 0xa44;
					constexpr auto num_teammates_hit = 0xa45;
				} // namespace cflashbang_projectile

				namespace cchicken
				{
					constexpr auto attribute_manager = 0xb28;
					constexpr auto original_owner_xuid_low = 0xdf0;
					constexpr auto original_owner_xuid_high = 0xdf4;
					constexpr auto update_timer = 0xdf8;
					constexpr auto stuck_anchor = 0xe10;
					constexpr auto stuck_timer = 0xe20;
					constexpr auto collision_stuck_timer = 0xe38;
					constexpr auto is_on_ground = 0xe50;
					constexpr auto v_fall_velocity = 0xe54;
					constexpr auto activity = 0xe60;
					constexpr auto activity_timer = 0xe68;
					constexpr auto turn_rate = 0xe80;
					constexpr auto flee_from = 0xe84;
					constexpr auto move_rate_throttle_timer = 0xe88;
					constexpr auto startle_timer = 0xea0;
					constexpr auto vocalize_timer = 0xeb8;
					constexpr auto when_zombified = 0xed0;
					constexpr auto jumped_this_frame = 0xed4;
					constexpr auto leader = 0xed8;
					constexpr auto reuse_timer = 0xee0;
					constexpr auto has_been_used = 0xef8;
					constexpr auto jump_timer = 0xf00;
					constexpr auto last_jump_time = 0xf18;
					constexpr auto in_jump = 0xf1c;
					constexpr auto is_waiting_for_leader = 0xf1d;
					constexpr auto repath_timer = 0x2f28;
					constexpr auto inhibit_door_timer = 0x2f40;
					constexpr auto inhibit_obstacle_avoidance_timer = 0x2fd0;
					constexpr auto vec_path_goal = 0x2ff0;
					constexpr auto active_follow_start_time = 0x2ffc;
					constexpr auto follow_minute_timer = 0x3000;
					constexpr auto vec_last_egg_poop_position = 0x3018;
					constexpr auto vec_eggs_pooped = 0x3028;
					constexpr auto block_direction_timer = 0x3048;
				} // namespace cchicken

				namespace citem_defuser
				{
					constexpr auto entity_spotted_state = 0x968;
					constexpr auto spot_rules = 0x980;
				} // namespace citem_defuser

				namespace cbase_player_weapon
				{
					constexpr auto next_primary_attack_tick = 0xc18;
					constexpr auto next_primary_attack_tick_ratio = 0xc1c;
					constexpr auto next_secondary_attack_tick = 0xc20;
					constexpr auto next_secondary_attack_tick_ratio = 0xc24;
					constexpr auto clip1 = 0xc28;
					constexpr auto clip2 = 0xc2c;
					constexpr auto reserve_ammo_arr = 0xc30;
					constexpr auto on_player_use = 0xc38;
				} // namespace cbase_player_weapon

				namespace cscript_item
				{
					constexpr auto on_player_pickup = 0x968;
					constexpr auto move_type_override = 0x990;
				} // namespace cscript_item

				namespace cragdoll_prop_attached
				{
					constexpr auto bone_index_attached = 0xa38;
					constexpr auto ragdoll_attached_object_index = 0xa3c;
					constexpr auto attachment_point_bone_space = 0xa40;
					constexpr auto attachment_point_ragdoll_space = 0xa4c;
					constexpr auto should_detach = 0xa58;
					constexpr auto should_delete_attached_activation_record = 0xa68;
				} // namespace cragdoll_prop_attached

				namespace cprop_door_rotating
				{
					constexpr auto vec_axis = 0xd98;
					constexpr auto distance = 0xda4;
					constexpr auto e_spawn_position = 0xda8;
					constexpr auto e_open_direction = 0xdac;
					constexpr auto e_current_open_direction = 0xdb0;
					constexpr auto ajar_angle = 0xdb4;
					constexpr auto ang_rotation_ajar_deprecated = 0xdb8;
					constexpr auto ang_rotation_closed = 0xdc4;
					constexpr auto ang_rotation_open_forward = 0xdd0;
					constexpr auto ang_rotation_open_back = 0xddc;
					constexpr auto ang_goal = 0xde8;
					constexpr auto vec_forward_bounds_min = 0xdf4;
					constexpr auto vec_forward_bounds_max = 0xe00;
					constexpr auto vec_back_bounds_min = 0xe0c;
					constexpr auto vec_back_bounds_max = 0xe18;
					constexpr auto ajar_door_shouldnt_always_open = 0xe24;
					constexpr auto h_entity_blocker = 0xe28;
				} // namespace cprop_door_rotating

				namespace cprop_door_rotating_breakable
				{
					constexpr auto breakable = 0xe30;
					constexpr auto is_able_to_close_area_portals = 0xe31;
					constexpr auto current_damage_state = 0xe34;
					constexpr auto damage_states = 0xe38;
				} // namespace cprop_door_rotating_breakable

				namespace cbase_combat_character
				{
					constexpr auto force_server_ragdoll = 0x920;
					constexpr auto h_my_wearables = 0x928;
					constexpr auto field_of_view = 0x940;
					constexpr auto impact_energy_scale = 0x944;
					constexpr auto last_hit_group = 0x948;
					constexpr auto apply_stress_damage = 0x94c;
					constexpr auto blood_color = 0x950;
					constexpr auto nav_mesh_id = 0x9b0;
					constexpr auto damage_count = 0x9b4;
					constexpr auto vec_relationships_ptr = 0x9b8;
					constexpr auto str_relationships = 0x9c0;
					constexpr auto e_hull = 0x9c8;
					constexpr auto nav_hull_idx = 0x9cc;
				} // namespace cbase_combat_character

				namespace citem_generic
				{
					constexpr auto has_trigger_radius = 0x970;
					constexpr auto has_pickup_radius = 0x971;
					constexpr auto pickup_radius_sqr = 0x974;
					constexpr auto trigger_radius_sqr = 0x978;
					constexpr auto last_pickup_check = 0x97c;
					constexpr auto player_counter_listener_added = 0x980;
					constexpr auto player_in_trigger_radius = 0x981;
					constexpr auto h_spawn_particle_effect = 0x988;
					constexpr auto ambient_sound_effect = 0x990;
					constexpr auto auto_start_ambient_sound = 0x998;
					constexpr auto spawn_script_function = 0x9a0;
					constexpr auto h_pickup_particle_effect = 0x9a8;
					constexpr auto pickup_sound_effect = 0x9b0;
					constexpr auto pickup_script_function = 0x9b8;
					constexpr auto h_timeout_particle_effect = 0x9c0;
					constexpr auto timeout_sound_effect = 0x9c8;
					constexpr auto timeout_script_function = 0x9d0;
					constexpr auto pickup_filter_name = 0x9d8;
					constexpr auto h_pickup_filter = 0x9e0;
					constexpr auto on_pickup = 0x9e8;
					constexpr auto on_timeout = 0xa10;
					constexpr auto on_trigger_start_touch = 0xa38;
					constexpr auto on_trigger_touch = 0xa60;
					constexpr auto on_trigger_end_touch = 0xa88;
					constexpr auto allow_pickup_script_function = 0xab0;
					constexpr auto pickup_radius = 0xab8;
					constexpr auto trigger_radius = 0xabc;
					constexpr auto trigger_sound_effect = 0xac0;
					constexpr auto glow_when_in_trigger = 0xac8;
					constexpr auto glow_color = 0xac9;
					constexpr auto useable = 0xacd;
					constexpr auto h_trigger_helper = 0xad0;
				} // namespace citem_generic

				namespace cbase_player_pawn
				{
					constexpr auto weapon_services_ptr = 0x9d0;
					constexpr auto item_services_ptr = 0x9d8;
					constexpr auto autoaim_services_ptr = 0x9e0;
					constexpr auto observer_services_ptr = 0x9e8;
					constexpr auto water_services_ptr = 0x9f0;
					constexpr auto use_services_ptr = 0x9f8;
					constexpr auto flashlight_services_ptr = 0xa00;
					constexpr auto camera_services_ptr = 0xa08;
					constexpr auto movement_services_ptr = 0xa10;
					constexpr auto server_view_angle_changes = 0xa20;
					constexpr auto highest_generated_server_view_angle_change_index = 0xa70;
					constexpr auto v_angle = 0xa74;
					constexpr auto v_angle_previous = 0xa80;
					constexpr auto hide_hud = 0xa8c;
					constexpr auto skybox3d = 0xa90;
					constexpr auto time_last_hurt = 0xb20;
					constexpr auto death_time = 0xb24;
					constexpr auto next_suicide_time = 0xb28;
					constexpr auto init_hud = 0xb2c;
					constexpr auto expresser_ptr = 0xb30;
					constexpr auto h_controller = 0xb38;
					constexpr auto hltv_replay_delay = 0xb40;
					constexpr auto hltv_replay_end = 0xb44;
					constexpr auto hltv_replay_entity = 0xb48;
				} // namespace cbase_player_pawn

				namespace ccsgoview_model
				{
					constexpr auto should_ignore_offset_and_accuracy = 0x8d8;
					constexpr auto weapon_parity = 0x8dc;
					constexpr auto old_weapon_parity = 0x8e0;
				} // namespace ccsgoview_model

				namespace ccsweapon_base
				{
					constexpr auto removeable = 0xc88;
					constexpr auto fire_sequence_start_time = 0xc90;
					constexpr auto fire_sequence_start_time_change = 0xc94;
					constexpr auto fire_sequence_start_time_ack = 0xc98;
					constexpr auto e_player_fire_event = 0xc9c;
					constexpr auto e_player_fire_event_attack_type = 0xca0;
					constexpr auto seq_idle = 0xca4;
					constexpr auto seq_fire_primary = 0xca8;
					constexpr auto seq_fire_secondary = 0xcac;
					constexpr auto third_person_fire_sequences = 0xcb0;
					constexpr auto h_current_third_person_sequence = 0xcc8;
					constexpr auto silencer_bone_index = 0xccc;
					constexpr auto third_person_sequences_arr = 0xcd0;
					constexpr auto player_ammo_stock_on_pickup = 0xcf0;
					constexpr auto require_use_to_touch = 0xcf1;
					constexpr auto state = 0xcf4;
					constexpr auto last_time_in_air = 0xcf8;
					constexpr auto last_deploy_time = 0xcfc;
					constexpr auto view_model_index = 0xd00;
					constexpr auto reloads_with_clips = 0xd04;
					constexpr auto time_weapon_idle = 0xd20;
					constexpr auto fire_on_empty = 0xd24;
					constexpr auto on_player_pickup = 0xd28;
					constexpr auto weapon_mode = 0xd50;
					constexpr auto turning_inaccuracy_delta = 0xd54;
					constexpr auto vec_turning_inaccuracy_eye_dir_last = 0xd58;
					constexpr auto turning_inaccuracy = 0xd64;
					constexpr auto accuracy_penalty = 0xd68;
					constexpr auto last_accuracy_update_time = 0xd6c;
					constexpr auto accuracy_smoothed_for_zoom = 0xd70;
					constexpr auto scope_zoom_end_time = 0xd74;
					constexpr auto recoil_index = 0xd78;
					constexpr auto recoil_index_1 = 0xd7c;
					constexpr auto burst_mode = 0xd80;
					constexpr auto postpone_fire_ready_ticks = 0xd84;
					constexpr auto postpone_fire_ready_frac = 0xd88;
					constexpr auto in_reload = 0xd8c;
					constexpr auto reload_visually_complete = 0xd8d;
					constexpr auto dropped_at_time = 0xd90;
					constexpr auto is_hauled_back = 0xd94;
					constexpr auto silencer_on = 0xd95;
					constexpr auto time_silencer_switch_complete = 0xd98;
					constexpr auto original_team_number = 0xd9c;
					constexpr auto next_attack_render_time_offset = 0xda0;
					constexpr auto can_be_picked_up = 0xdb8;
					constexpr auto use_can_override_next_owner_touch_time = 0xdb9;
					constexpr auto next_owner_touch_time = 0xdbc;
					constexpr auto next_prev_owner_touch_time = 0xdc0;
					constexpr auto h_prev_owner = 0xdc4;
					constexpr auto drop_tick = 0xdc8;
					constexpr auto donated = 0xdec;
					constexpr auto last_shot_time = 0xdf0;
					constexpr auto was_owned_by_ct = 0xdf4;
					constexpr auto was_owned_by_terrorist = 0xdf5;
					constexpr auto fired_out_of_ammo_event = 0xdf6;
					constexpr auto num_remove_unowned_weapon_think = 0xdf8;
					constexpr auto iron_sight_controller = 0xe00;
					constexpr auto iron_sight_mode = 0xe18;
					constexpr auto last_lostrace_failure_time = 0xe1c;
					constexpr auto num_empty_attacks = 0xe20;
				} // namespace ccsweapon_base

				namespace ccsweapon_base_gun
				{
					constexpr auto zoom_level = 0xe28;
					constexpr auto burst_shots_remaining = 0xe2c;
					constexpr auto silenced_model_index = 0xe38;
					constexpr auto in_precache = 0xe3c;
					constexpr auto needs_bolt_action = 0xe3d;
					constexpr auto skill_reload_available = 0xe3e;
					constexpr auto skill_reload_lifted_reload_key = 0xe3f;
					constexpr auto skill_bolt_interrupt_available = 0xe40;
					constexpr auto skill_bolt_lifted_fire_key = 0xe41;
				} // namespace ccsweapon_base_gun

				namespace cc4
				{
					constexpr auto vec_last_valid_player_held_position = 0xe28;
					constexpr auto vec_last_valid_dropped_position = 0xe34;
					constexpr auto do_valid_dropped_position_check = 0xe40;
					constexpr auto started_arming = 0xe41;
					constexpr auto armed_time = 0xe44;
					constexpr auto bomb_placed_animation = 0xe48;
					constexpr auto is_planting_via_use = 0xe49;
					constexpr auto entity_spotted_state = 0xe50;
					constexpr auto spot_rules = 0xe68;
					constexpr auto played_arming_beeps_arr = 0xe6c;
					constexpr auto bomb_planted = 0xe73;
					constexpr auto dropped_from_death = 0xe74;
				} // namespace cc4

				namespace cweapon_taser
				{
					constexpr auto fire_time = 0xe48;
				} // namespace cweapon_taser

				namespace cknife
				{
					constexpr auto first_attack = 0xe28;
				} // namespace cknife

				namespace cweapon_shield
				{
					constexpr auto bullet_damage_absorbed = 0xe48;
					constexpr auto last_bullet_hit_sound_time = 0xe4c;
					constexpr auto display_health = 0xe50;
				} // namespace cweapon_shield

				namespace cmolotov_projectile
				{
					constexpr auto is_inc_grenade = 0xa40;
					constexpr auto detonated = 0xa4c;
					constexpr auto still_timer = 0xa50;
					constexpr auto has_bounced_off_player = 0xb30;
				} // namespace cmolotov_projectile

				namespace cdecoy_projectile
				{
					constexpr auto decoy_shot_tick = 0xa48;
					constexpr auto shots_remaining = 0xa4c;
					constexpr auto expire_time = 0xa50;
					constexpr auto decoy_weapon_def_index = 0xa60;
				} // namespace cdecoy_projectile

				namespace csmoke_grenade_projectile
				{
					constexpr auto smoke_effect_tick_begin = 0xa58;
					constexpr auto did_smoke_effect = 0xa5c;
					constexpr auto random_seed = 0xa60;
					constexpr auto v_smoke_color = 0xa64;
					constexpr auto v_smoke_detonation_pos = 0xa70;
					constexpr auto voxel_frame_data = 0xa80;
					constexpr auto last_bounce = 0xa98;
					constexpr auto fllast_simulation_time = 0xa9c;
				} // namespace csmoke_grenade_projectile

				namespace cbase_csgrenade
				{
					constexpr auto redraw = 0xe28;
					constexpr auto is_held_by_player = 0xe29;
					constexpr auto pin_pulled = 0xe2a;
					constexpr auto jump_throw = 0xe2b;
					constexpr auto e_throw_status = 0xe2c;
					constexpr auto throw_time = 0xe30;
					constexpr auto throw_strength = 0xe34;
					constexpr auto throw_strength_approach = 0xe38;
					constexpr auto drop_time = 0xe3c;
					constexpr auto next_hold_tick = 0xe40;
					constexpr auto next_hold_frac = 0xe44;
					constexpr auto just_pulled_pin = 0xe48;
					constexpr auto switch_weapon_after_throw = 0xe49;
				} // namespace cbase_csgrenade

				namespace cweapon_base_item
				{
					constexpr auto sequence_complete_timer = 0xe28;
					constexpr auto redraw = 0xe40;
				} // namespace cweapon_base_item

				namespace cfists
				{
					constexpr auto playing_uninterruptable_act = 0xe28;
					constexpr auto uninterruptable_activity = 0xe2c;
					constexpr auto restore_prev_wep = 0xe30;
					constexpr auto h_weapon_before_previous = 0xe34;
					constexpr auto h_weapon_previous = 0xe38;
					constexpr auto delayed_hard_punch_incoming = 0xe3c;
					constexpr auto destroy_after_taunt = 0xe3d;
				} // namespace cfists

				namespace ccsplayer_pawn_base
				{
					constexpr auto ctouch_expansion_component = 0xb68;
					constexpr auto ping_services_ptr = 0xbb8;
					constexpr auto view_model_services_ptr = 0xbc0;
					constexpr auto display_history_bits = 0xbc8;
					constexpr auto last_attacked_teammate = 0xbcc;
					constexpr auto h_original_controller = 0xbd0;
					constexpr auto blind_until_time = 0xbd4;
					constexpr auto blind_start_time = 0xbd8;
					constexpr auto allow_auto_follow_time = 0xbdc;
					constexpr auto entity_spotted_state = 0xbe0;
					constexpr auto spot_rules = 0xbf8;
					constexpr auto player_state = 0xbfc;
					constexpr auto chicken_idle_sound_timer = 0xc08;
					constexpr auto chicken_jump_sound_timer = 0xc20;
					constexpr auto vec_last_bookmarked_position = 0xcd8;
					constexpr auto last_distance_traveled_notice = 0xce4;
					constexpr auto accumulated_distance_traveled = 0xce8;
					constexpr auto last_friendly_fire_damage_reduction_ratio = 0xcec;
					constexpr auto respawning = 0xcf0;
					constexpr auto last_pickup_priority = 0xcf4;
					constexpr auto last_pickup_priority_time = 0xcf8;
					constexpr auto is_scoped = 0xcfc;
					constexpr auto is_walking = 0xcfd;
					constexpr auto resume_zoom = 0xcfe;
					constexpr auto is_defusing = 0xcff;
					constexpr auto is_grabbing_hostage = 0xd00;
					constexpr auto blocking_use_action_in_progress = 0xd04;
					constexpr auto immune_to_gun_game_damage_time = 0xd08;
					constexpr auto gun_game_immunity = 0xd0c;
					constexpr auto molotov_damage_time = 0xd10;
					constexpr auto has_moved_since_spawn = 0xd14;
					constexpr auto can_move_during_freeze_period = 0xd15;
					constexpr auto guardian_too_far_dist_frac = 0xd18;
					constexpr auto next_guardian_too_far_hurt_time = 0xd1c;
					constexpr auto detected_by_enemy_sensor_time = 0xd20;
					constexpr auto dealt_damage_to_enemy_most_recent_timestamp = 0xd24;
					constexpr auto last_equipped_helmet_time = 0xd28;
					constexpr auto last_equipped_armor_time = 0xd2c;
					constexpr auto heavy_assault_suit_cooldown_remaining = 0xd30;
					constexpr auto reset_armor_next_spawn = 0xd34;
					constexpr auto last_bump_mine_bump_time = 0xd38;
					constexpr auto emit_sound_time = 0xd3c;
					constexpr auto num_spawns = 0xd40;
					constexpr auto should_have_cash = 0xd44;
					constexpr auto invalid_steam_logon_delayed = 0xd48;
					constexpr auto last_action = 0xd4c;
					constexpr auto name_change_history_arr = 0xd50;
					constexpr auto last_given_defuser_time = 0xd64;
					constexpr auto last_given_bomb_time = 0xd68;
					constexpr auto has_night_vision = 0xd6c;
					constexpr auto night_vision_on = 0xd6d;
					constexpr auto next_radar_update_time = 0xd70;
					constexpr auto last_money_update_time = 0xd74;
					constexpr auto menu_string_buffer_arr = 0xd78;
					constexpr auto intro_cam_time = 0x1178;
					constexpr auto my_collision_group = 0x117c;
					constexpr auto in_no_defuse_area = 0x1180;
					constexpr auto killed_by_taser = 0x1181;
					constexpr auto move_state = 0x1184;
					constexpr auto grenade_parameter_stash_time = 0x1188;
					constexpr auto grenade_parameters_stashed = 0x118c;
					constexpr auto ang_stashed_shoot_angles = 0x1190;
					constexpr auto vec_stashed_grenade_throw_position = 0x119c;
					constexpr auto vec_stashed_velocity = 0x11a8;
					constexpr auto ang_shoot_angle_history_arr = 0x11b4;
					constexpr auto vec_throw_position_history_arr = 0x11cc;
					constexpr auto vec_velocity_history_arr = 0x11e4;
					constexpr auto died_airborne = 0x11fc;
					constexpr auto bomb_site_index = 0x1200;
					constexpr auto which_bomb_zone = 0x1204;
					constexpr auto in_bomb_zone_trigger = 0x1208;
					constexpr auto was_in_bomb_zone_trigger = 0x1209;
					constexpr auto direction = 0x120c;
					constexpr auto shots_fired = 0x1210;
					constexpr auto armor_value = 0x1214;
					constexpr auto flinch_stack = 0x1218;
					constexpr auto velocity_modifier = 0x121c;
					constexpr auto hit_heading = 0x1220;
					constexpr auto hit_body_part = 0x1224;
					constexpr auto hostages_killed = 0x1228;
					constexpr auto vec_total_bullet_force = 0x122c;
					constexpr auto flash_duration = 0x1238;
					constexpr auto flash_max_alpha = 0x123c;
					constexpr auto progress_bar_start_time = 0x1240;
					constexpr auto progress_bar_duration = 0x1244;
					constexpr auto wait_for_no_attack = 0x1248;
					constexpr auto lower_body_yaw_target = 0x124c;
					constexpr auto strafing = 0x1250;
					constexpr auto last_standing_pos = 0x1254;
					constexpr auto ignore_ladder_jump_time = 0x1260;
					constexpr auto ladder_surpression_timer = 0x1268;
					constexpr auto last_ladder_normal = 0x1280;
					constexpr auto last_ladder_pos = 0x128c;
					constexpr auto third_person_heading = 0x1298;
					constexpr auto slope_drop_offset = 0x12a4;
					constexpr auto slope_drop_height = 0x12a8;
					constexpr auto v_head_constraint_offset = 0x12ac;
					constexpr auto last_weapon_fire_usercmd = 0x12c0;
					constexpr auto ang_eye_angles = 0x12c4;
					constexpr auto vcollision_initted = 0x12d0;
					constexpr auto stored_spawn_position = 0x12d4;
					constexpr auto stored_spawn_angle = 0x12e0;
					constexpr auto is_spawning = 0x12ec;
					constexpr auto hide_target_id = 0x12ed;
					constexpr auto num_danger_zone_damage_hits = 0x12f0;
					constexpr auto hud_mini_score_hidden = 0x12f4;
					constexpr auto hud_radar_hidden = 0x12f5;
					constexpr auto last_killer_index = 0x12f8;
					constexpr auto last_concurrent_killed = 0x12fc;
					constexpr auto death_cam_music = 0x1300;
					constexpr auto addon_bits = 0x1304;
					constexpr auto primary_addon = 0x1308;
					constexpr auto secondary_addon = 0x130c;
					constexpr auto current_deafness_filter = 0x1310;
					constexpr auto num_enemies_killed_this_spawn = 0x1314;
					constexpr auto num_enemies_killed_this_round = 0x1318;
					constexpr auto num_enemies_at_round_start = 0x131c;
					constexpr auto was_not_killed_naturally = 0x1320;
					constexpr auto vec_player_patch_econ_indices_arr = 0x1324;
					constexpr auto death_flags = 0x1338;
					constexpr auto h_pet = 0x133c;
					constexpr auto un_current_equipment_value = 0x1508;
					constexpr auto un_round_start_equipment_value = 0x150a;
					constexpr auto un_freezetime_end_equipment_value = 0x150c;
					constexpr auto survival_team_number = 0x1510;
					constexpr auto has_death_info = 0x1514;
					constexpr auto death_info_time = 0x1518;
					constexpr auto vec_death_info_origin = 0x151c;
					constexpr auto killed_by_headshot = 0x1528;
					constexpr auto last_hit_box = 0x152c;
					constexpr auto last_health = 0x1530;
					constexpr auto last_collision_ceiling = 0x1534;
					constexpr auto last_collision_ceiling_change_time = 0x1538;
					constexpr auto bot_ptr = 0x1540;
					constexpr auto bot_allow_active = 0x1548;
					constexpr auto committing_suicide_on_team_change = 0x1549;
				} // namespace ccsplayer_pawn_base

				namespace ccsplayer_pawn
				{
					constexpr auto bullet_services_ptr = 0x1550;
					constexpr auto hostage_services_ptr = 0x1558;
					constexpr auto buy_services_ptr = 0x1560;
					constexpr auto action_tracking_services_ptr = 0x1568;
					constexpr auto radio_services_ptr = 0x1570;
					constexpr auto damage_react_services_ptr = 0x1578;
					constexpr auto character_def_index = 0x1580;
					constexpr auto h_previous_model = 0x1588;
					constexpr auto has_female_voice = 0x1590;
					constexpr auto str_voprefix = 0x1598;
					constexpr auto last_place_name_arr = 0x15a0;
					constexpr auto in_hostage_reset_zone = 0x1660;
					constexpr auto in_buy_zone = 0x1661;
					constexpr auto was_in_buy_zone = 0x1662;
					constexpr auto in_hostage_rescue_zone = 0x1663;
					constexpr auto in_bomb_zone = 0x1664;
					constexpr auto was_in_hostage_rescue_zone = 0x1665;
					constexpr auto retakes_offering = 0x1668;
					constexpr auto retakes_offering_card = 0x166c;
					constexpr auto retakes_has_defuse_kit = 0x1670;
					constexpr auto retakes_mvplast_round = 0x1671;
					constexpr auto retakes_mvpboost_item = 0x1674;
					constexpr auto retakes_mvpboost_extra_utility = 0x1678;
					constexpr auto health_shot_boost_expiration_time = 0x167c;
					constexpr auto landseconds = 0x1680;
					constexpr auto aim_punch_angle = 0x1684;
					constexpr auto aim_punch_angle_vel = 0x1690;
					constexpr auto aim_punch_tick_base = 0x169c;
					constexpr auto aim_punch_tick_fraction = 0x16a0;
					constexpr auto aim_punch_cache = 0x16a8;
					constexpr auto is_buy_menu_open = 0x16c0;
					constexpr auto x_last_head_bone_transform = 0x1cf0;
					constexpr auto last_head_bone_transform_is_valid = 0x1d10;
					constexpr auto last_land_time = 0x1d14;
					constexpr auto on_ground_last_tick = 0x1d18;
					constexpr auto player_locked = 0x1d1c;
					constexpr auto time_of_last_injury = 0x1d24;
					constexpr auto next_spray_decal_time = 0x1d28;
					constexpr auto next_spray_decal_time_expedited = 0x1d2c;
					constexpr auto ragdoll_damage_bone = 0x1d30;
					constexpr auto v_ragdoll_damage_force = 0x1d34;
					constexpr auto v_ragdoll_damage_position = 0x1d40;
					constexpr auto ragdoll_damage_weapon_name_arr = 0x1d4c;
					constexpr auto ragdoll_damage_headshot = 0x1d8c;
					constexpr auto v_ragdoll_server_origin = 0x1d90;
					constexpr auto econ_gloves = 0x1da0;
					constexpr auto q_death_eye_angles = 0x2018;
					constexpr auto skip_one_head_constraint_update = 0x2024;
				} // namespace ccsplayer_pawn

				namespace chostage_expresser_shim
				{
					constexpr auto expresser_ptr = 0x9d0;
				} // namespace chostage_expresser_shim

				namespace chostage
				{
					constexpr auto on_hostage_begin_grab = 0x9e8;
					constexpr auto on_first_picked_up = 0xa10;
					constexpr auto on_dropped_not_rescued = 0xa38;
					constexpr auto on_rescued = 0xa60;
					constexpr auto entity_spotted_state = 0xa88;
					constexpr auto spot_rules = 0xaa0;
					constexpr auto ui_hostage_spawn_exclusion_group_mask = 0xaa4;
					constexpr auto hostage_spawn_random_factor = 0xaa8;
					constexpr auto remove = 0xaac;
					constexpr auto vel = 0xab0;
					constexpr auto is_rescued = 0xabc;
					constexpr auto jumped_this_frame = 0xabd;
					constexpr auto hostage_state = 0xac0;
					constexpr auto leader = 0xac4;
					constexpr auto last_leader = 0xac8;
					constexpr auto reuse_timer = 0xad0;
					constexpr auto has_been_used = 0xae8;
					constexpr auto accel = 0xaec;
					constexpr auto is_running = 0xaf8;
					constexpr auto is_crouching = 0xaf9;
					constexpr auto jump_timer = 0xb00;
					constexpr auto is_waiting_for_leader = 0xb18;
					constexpr auto repath_timer = 0x2b28;
					constexpr auto inhibit_door_timer = 0x2b40;
					constexpr auto inhibit_obstacle_avoidance_timer = 0x2bd0;
					constexpr auto wiggle_timer = 0x2bf0;
					constexpr auto is_adjusted = 0x2c0c;
					constexpr auto hands_have_been_cut = 0x2c0d;
					constexpr auto h_hostage_grabber = 0x2c10;
					constexpr auto last_grab_time = 0x2c14;
					constexpr auto vec_position_when_started_dropping_to_ground = 0x2c18;
					constexpr auto vec_grabbed_pos = 0x2c24;
					constexpr auto rescue_start_time = 0x2c30;
					constexpr auto grab_success_time = 0x2c34;
					constexpr auto drop_start_time = 0x2c38;
					constexpr auto approach_reward_payouts = 0x2c3c;
					constexpr auto pickup_event_count = 0x2c40;
					constexpr auto vec_spawn_ground_pos = 0x2c44;
					constexpr auto vec_hostage_reset_position = 0x2c64;
				} // namespace chostage

			} // namespace server

			namespace worldrenderer
			{
				namespace centity_identity
				{
					constexpr auto name_stringable_index = 0x14;
					constexpr auto name = 0x18;
					constexpr auto designer_name = 0x20;
					constexpr auto flags = 0x30;
					constexpr auto world_group_id = 0x38;
					constexpr auto data_object_types = 0x3c;
					constexpr auto path_index = 0x40;
					constexpr auto prev_ptr = 0x58;
					constexpr auto next_ptr = 0x60;
					constexpr auto prev_by_class_ptr = 0x68;
					constexpr auto next_by_class_ptr = 0x70;
				} // namespace centity_identity

				namespace centity_instance
				{
					constexpr auto isz_private_vscripts = 0x8;
					constexpr auto entity_ptr = 0x10;
					constexpr auto cscript_component_ptr = 0x28;
				} // namespace centity_instance

				namespace cscript_component
				{
					constexpr auto script_class_name = 0x30;
				} // namespace cscript_component

			} // namespace worldrenderer

		} // namespace schema

	} // namespace offsets

} // namespace sdk

#endif // SDK_SCHEMA_OFFSETS_H
