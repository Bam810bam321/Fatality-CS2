// generated on: 11/6/2023

#ifndef SDK_SCHEMA_GLOBAL_TYPES_H
#define SDK_SCHEMA_GLOBAL_TYPES_H

#include <cstdint>

namespace sdk
{
	namespace schema
	{
		// TODO: replace these with actual classes
		using csplit_screen_slot = int;
		using world_group_id_t = int;
		using cutl_symbol_large = char*;
		using cbuffer_string = int;
		using key_values3 = int;
		using cglobal_symbol = int;
		using cutl_binary_block = int;
		using ctransform = int;
		using ccolor_gradient = int;
		using _canim_variant = int;
		using canim_variant = int;
		using centity_handle = int;
		using centity_index = int;
		using cpanorama_image_name = int;
		using cresource_name = int;
		using cparticle_named_value_ref = int;
		using cpiecewise_curve = int;
		using ckv3_member_name_with_storage = int;
		using cpulse_value_full_type = int;
		using key_values = int;
		using cutl_symbol = char*;
		using cutl_string_token_with_storage = int;
		using cresource_string = int;
		using cplayer_slot = int;
		using _csound_event_name = int;
		using cutl_vector_simdpadded_vector = int;
		using hscript = int;
		using float32 = float;
		using cnetworked_quantized_float = float;
		using int32 = int;
		using uint16 = uint16_t;
		using int16 = short;
		
		template <typename T> class cvariant_base {};
		template <typename T> class cweak_handle {};
		template <typename T> class cresource_name_typed {};
		template <typename T> class ccompressor {};
		template <typename T> class cutl_vector_fixed_growable {};
		template <typename T> class csmart_ptr {};
		template <typename T> class canim_value {};
		template <typename T> 
		class network_utl_vector_base 
		{
		public:
			uint32_t size;
		private:
			uint32_t pad;
		public:
			T* data;
		};
		struct cutl_string_token 
		{
			uint32_t hash;
			char* dbg_name;
		};
		template <typename T> class utl_vector_embedded_network_var {};
		template <typename T> class centity_output_template {};
		template <typename T> class canim_script_param {};
		template <typename T> class cutl_lean_vector {};
		template <typename T> class cresource_pointer {};
		template <typename T> 
		class cnetwork_utl_vector_base 
		{
		public:
			uint32_t size;
		private:
			uint32_t pad;
		public:
			T* data;
		};
		template <typename T> class cutl_vector_embedded_network_var {};
		template <typename T> class cstrong_handle_copyable {};
		template <typename T> class cresource_array {};
		template <int T> class cbit_vec {};
		constexpr auto invalid_ehandle_index = 0xffffffff;
		constexpr auto ent_entry_mask = 0x7fff;
		constexpr auto num_serial_num_shift_bits = 15;
		template <typename T>
		class chandle
		{
		public:
			uint32_t index;

			T *get();
			template <typename C>
			C *get_as();

			bool valid() const { return index != invalid_ehandle_index; }
			uint32_t get_entry_index() const { return valid() ? index & ent_entry_mask : ent_entry_mask; }
			uint32_t get_serial_number() const { return index >> num_serial_num_shift_bits; }
		};
		template <typename T, typename I> class cutl_pair {};
		template <typename T, typename I> class cutl_hashtable {};
		template <typename T, typename I> class cutl_map {};
		template <typename T> class cstrong_handle {};
		namespace server { class cbase_entity; class cshatter_glass_shard_physics; class cfunc_shatterglass; class cpoint_commentary_node; class cbase_anim_graph; class cscripted_sequence; };
		using namespace server;
		namespace client { class base_entity; };
		using namespace client;
		enum class three_state_t : uint32_t
		{
			trs_false = 0x0,
			trs_true = 0x1,
			trs_none = 0x2,
		}; // enum class three_state_t : uint32_t

		enum class fieldtype_t : uint8_t
		{
			field_void = 0x0,
			field_float32 = 0x1,
			field_string = 0x2,
			field_vector = 0x3,
			field_quaternion = 0x4,
			field_int32 = 0x5,
			field_boolean = 0x6,
			field_int16 = 0x7,
			field_character = 0x8,
			field_color32 = 0x9,
			field_embedded = 0xa,
			field_custom = 0xb,
			field_classptr = 0xc,
			field_ehandle = 0xd,
			field_position_vector = 0xe,
			field_time = 0xf,
			field_tick = 0x10,
			field_soundname = 0x11,
			field_input = 0x12,
			field_function = 0x13,
			field_vmatrix = 0x14,
			field_vmatrix_worldspace = 0x15,
			field_matrix3x4_worldspace = 0x16,
			field_interval = 0x17,
			field_unused = 0x18,
			field_vector2d = 0x19,
			field_int64 = 0x1a,
			field_vector4d = 0x1b,
			field_resource = 0x1c,
			field_typeunknown = 0x1d,
			field_cstring = 0x1e,
			field_hscript = 0x1f,
			field_variant = 0x20,
			field_uint64 = 0x21,
			field_float64 = 0x22,
			field_positiveinteger_or_null = 0x23,
			field_hscript_new_instance = 0x24,
			field_uint32 = 0x25,
			field_utlstringtoken = 0x26,
			field_qangle = 0x27,
			field_network_origin_cell_quantized_vector = 0x28,
			field_hmaterial = 0x29,
			field_hmodel = 0x2a,
			field_network_quantized_vector = 0x2b,
			field_network_quantized_float = 0x2c,
			field_direction_vector_worldspace = 0x2d,
			field_qangle_worldspace = 0x2e,
			field_quaternion_worldspace = 0x2f,
			field_hscript_lightbinding = 0x30,
			field_v8_value = 0x31,
			field_v8_object = 0x32,
			field_v8_array = 0x33,
			field_v8_callback_info = 0x34,
			field_utlstring = 0x35,
			field_network_origin_cell_quantized_position_vector = 0x36,
			field_hrendertexture = 0x37,
			field_hparticlesystemdefinition = 0x38,
			field_uint8 = 0x39,
			field_uint16 = 0x3a,
			field_ctransform = 0x3b,
			field_ctransform_worldspace = 0x3c,
			field_hpostprocessing = 0x3d,
			field_matrix3x4 = 0x3e,
			field_shim = 0x3f,
			field_cmotiontransform = 0x40,
			field_cmotiontransform_worldspace = 0x41,
			field_attachment_handle = 0x42,
			field_ammo_index = 0x43,
			field_condition_id = 0x44,
			field_ai_schedule_bits = 0x45,
			field_modifier_handle = 0x46,
			field_rotation_vector = 0x47,
			field_rotation_vector_worldspace = 0x48,
			field_hvdata = 0x49,
			field_scale32 = 0x4a,
			field_string_and_token = 0x4b,
			field_engine_time = 0x4c,
			field_engine_tick = 0x4d,
			field_world_group_id = 0x4e,
			field_typecount = 0x4f,
		}; // enum class fieldtype_t : uint8_t

		enum class fuse_variable_access_t : uint8_t
		{
			writable = 0x0,
			read_only = 0x1,
		}; // enum class fuse_variable_access_t : uint8_t

		enum class fuse_variable_type_t : uint8_t
		{
			invalid = 0x0,
			bool_ = 0x1,
			int8 = 0x2,
			int16 = 0x3,
			int32 = 0x4,
			uint8 = 0x5,
			uint16 = 0x6,
			uint32 = 0x7,
			float32 = 0x8,
		}; // enum class fuse_variable_type_t : uint8_t

		enum class render_slot_type_t : uint32_t
		{
			render_slot_invalid = 0xffffffff,
			render_slot_per_vertex = 0x0,
			render_slot_per_instance = 0x1,
		}; // enum class render_slot_type_t : uint32_t

		enum class input_layout_variation_t : uint32_t
		{
			input_layout_variation_default = 0x0,
			input_layout_variation_stream1_instanceid = 0x1,
			input_layout_variation_stream1_instanceid_morph_vert_id = 0x2,
			input_layout_variation_max = 0x3,
		}; // enum class input_layout_variation_t : uint32_t

		enum class render_multisample_type_t : uint32_t
		{
			render_multisample_invalid = 0xffffffff,
			render_multisample_none = 0x0,
			render_multisample_2x = 0x1,
			render_multisample_4x = 0x2,
			render_multisample_6x = 0x3,
			render_multisample_8x = 0x4,
			render_multisample_16x = 0x5,
			render_multisample_type_count = 0x6,
		}; // enum class render_multisample_type_t : uint32_t

		enum class render_buffer_flags_t : uint32_t
		{
			render_buffer_usage_vertex_buffer = 0x1,
			render_buffer_usage_index_buffer = 0x2,
			render_buffer_usage_shader_resource = 0x4,
			render_buffer_usage_unordered_access = 0x8,
			render_buffer_byteaddress_buffer = 0x10,
			render_buffer_structured_buffer = 0x20,
			render_buffer_append_consume_buffer = 0x40,
			render_buffer_uav_counter = 0x80,
			render_buffer_uav_draw_indirect_args = 0x100,
		}; // enum class render_buffer_flags_t : uint32_t

		enum class render_primitive_type_t : uint32_t
		{
			render_prim_points = 0x0,
			render_prim_lines = 0x1,
			render_prim_lines_with_adjacency = 0x2,
			render_prim_line_strip = 0x3,
			render_prim_line_strip_with_adjacency = 0x4,
			render_prim_triangles = 0x5,
			render_prim_triangles_with_adjacency = 0x6,
			render_prim_triangle_strip = 0x7,
			render_prim_triangle_strip_with_adjacency = 0x8,
			render_prim_instanced_quads = 0x9,
			render_prim_heterogenous = 0xa,
			render_prim_compute_shader = 0xb,
			render_prim_type_count = 0xc,
		}; // enum class render_primitive_type_t : uint32_t

		enum class spawn_debug_restriction_override_state_t : uint32_t
		{
			spawn_debug_restrict_none = 0x0,
			spawn_debug_restrict_ignore_manager_distance_reqs = 0x1,
			spawn_debug_restrict_ignore_template_distance_los_reqs = 0x2,
			spawn_debug_restrict_ignore_template_cooldown_limits = 0x4,
			spawn_debug_restrict_ignore_target_cooldown_limits = 0x8,
		}; // enum class spawn_debug_restriction_override_state_t : uint32_t

		enum class spawn_debug_override_state_t : uint32_t
		{
			spawn_debug_override_none = 0x0,
			spawn_debug_override_force_enabled = 0x1,
			spawn_debug_override_force_disabled = 0x2,
		}; // enum class spawn_debug_override_state_t : uint32_t

		enum class entity_iotarget_type_t : uint32_t
		{
			entity_io_target_invalid = 0xffffffff,
			entity_io_target_entityname = 0x2,
			entity_io_target_ehandle = 0x6,
			entity_io_target_entityname_or_classname = 0x7,
		}; // enum class entity_iotarget_type_t : uint32_t

		enum class entity_dormancy_type_t : uint32_t
		{
			entity_not_dormant = 0x0,
			entity_dormant = 0x1,
			entity_suspended = 0x2,
		}; // enum class entity_dormancy_type_t : uint32_t

		enum class horiz_justification_e : uint32_t
		{
			horiz_justification_left = 0x0,
			horiz_justification_center = 0x1,
			horiz_justification_right = 0x2,
			horiz_justification_none = 0x3,
		}; // enum class horiz_justification_e : uint32_t

		enum class bloom_blend_mode_t : uint32_t
		{
			bloom_blend_add = 0x0,
			bloom_blend_screen = 0x1,
			bloom_blend_blur = 0x2,
		}; // enum class bloom_blend_mode_t : uint32_t

		enum class view_fade_mode_t : uint32_t
		{
			view_fade_constant_color = 0x0,
			view_fade_modulate = 0x1,
			view_fade_mod2x = 0x2,
		}; // enum class view_fade_mode_t : uint32_t

		enum class layout_position_type_e : uint32_t
		{
			layoutpositiontype_viewport_relative = 0x0,
			layoutpositiontype_fractional = 0x1,
			layoutpositiontype_none = 0x2,
		}; // enum class layout_position_type_e : uint32_t

		enum class vert_justification_e : uint32_t
		{
			vert_justification_top = 0x0,
			vert_justification_center = 0x1,
			vert_justification_bottom = 0x2,
			vert_justification_none = 0x3,
		}; // enum class vert_justification_e : uint32_t

		enum class mood_type_t : uint32_t
		{
			e_mood_type_head = 0x0,
			e_mood_type_body = 0x1,
		}; // enum class mood_type_t : uint32_t

		enum class jump_correction_method : uint32_t
		{
			scale_motion = 0x0,
			add_correction_delta = 0x1,
		}; // enum class jump_correction_method : uint32_t

		enum class binary_node_child_option : uint32_t
		{
			child1 = 0x0,
			child2 = 0x1,
		}; // enum class binary_node_child_option : uint32_t

		enum class model_config_attachment_type_t : uint32_t
		{
			model_config_attachment_invalid = 0xffffffff,
			model_config_attachment_bone_or_attachment = 0x0,
			model_config_attachment_root_relative = 0x1,
			model_config_attachment_bonemerge = 0x2,
			model_config_attachment_count = 0x3,
		}; // enum class model_config_attachment_type_t : uint32_t

		enum class bone_mask_blend_space : uint32_t
		{
			blend_space_parent = 0x0,
			blend_space_model = 0x1,
			blend_space_model_rotation_only = 0x2,
			blend_space_model_translation_only = 0x3,
		}; // enum class bone_mask_blend_space : uint32_t

		enum class ik_target_type : uint32_t
		{
			ik_target_attachment = 0x0,
			ik_target_bone = 0x1,
			ik_target_parameter_model_space = 0x2,
			ik_target_parameter_world_space = 0x3,
		}; // enum class ik_target_type : uint32_t

		enum class anim_vector_source : uint32_t
		{
			move_direction = 0x0,
			facing_direction = 0x1,
			look_direction = 0x2,
			vector_parameter = 0x3,
			way_point_direction = 0x4,
			acceleration = 0x5,
			slope_normal = 0x6,
			slope_normal_world_space = 0x7,
			look_target = 0x8,
			look_target_world_space = 0x9,
			way_point_position = 0xa,
			goal_position = 0xb,
			root_motion_velocity = 0xc,
		}; // enum class anim_vector_source : uint32_t

		enum class choice_method : uint32_t
		{
			weighted_random = 0x0,
			weighted_random_no_repeat = 0x1,
			iterate = 0x2,
			iterate_random = 0x3,
		}; // enum class choice_method : uint32_t

		enum class foot_fall_tag_foot_t : uint32_t
		{
			foot1 = 0x0,
			foot2 = 0x1,
			foot3 = 0x2,
			foot4 = 0x3,
			foot5 = 0x4,
			foot6 = 0x5,
			foot7 = 0x6,
			foot8 = 0x7,
		}; // enum class foot_fall_tag_foot_t : uint32_t

		enum class animation_snapshot_type_t : uint32_t
		{
			animation_snapshot_server_simulation = 0x0,
			animation_snapshot_client_simulation = 0x1,
			animation_snapshot_client_prediction = 0x2,
			animation_snapshot_client_interpolation = 0x3,
			animation_snapshot_client_render = 0x4,
			animation_snapshot_final_composite = 0x5,
			animation_snapshot_max = 0x6,
		}; // enum class animation_snapshot_type_t : uint32_t

		enum class aim_matrix_blend_mode : uint32_t
		{
			aim_matrix_blend_mode_none = 0x0,
			aim_matrix_blend_mode_additive = 0x1,
			aim_matrix_blend_mode_model_space_additive = 0x2,
			aim_matrix_blend_mode_bone_mask = 0x3,
		}; // enum class aim_matrix_blend_mode : uint32_t

		enum class facing_mode : uint32_t
		{
			facing_mode_manual = 0x0,
			facing_mode_path = 0x1,
			facing_mode_look_target = 0x2,
		}; // enum class facing_mode : uint32_t

		enum class velocity_metric_mode : uint8_t
		{
			direction_only = 0x0,
			magnitude_only = 0x1,
			direction_and_magnitude = 0x2,
		}; // enum class velocity_metric_mode : uint8_t

		enum class vphys_xjoint_t__flags_t : uint32_t
		{
			joint_flags_none = 0x0,
			joint_flags_body1_fixed = 0x1,
			joint_flags_use_block_solver = 0x2,
		}; // enum class vphys_xjoint_t__flags_t : uint32_t

		enum class anim_vrhand_motion_range_t : uint32_t
		{
			motion_range_with_controller = 0x0,
			motion_range_without_controller = 0x1,
		}; // enum class anim_vrhand_motion_range_t : uint32_t

		enum class field_network_option : uint32_t
		{
			auto_ = 0x0,
			force_enable = 0x1,
			force_disable = 0x2,
		}; // enum class field_network_option : uint32_t

		enum class particle_attachment_t : uint32_t
		{
			pattach_invalid = 0xffffffff,
			pattach_absorigin = 0x0,
			pattach_absorigin_follow = 0x1,
			pattach_customorigin = 0x2,
			pattach_customorigin_follow = 0x3,
			pattach_point = 0x4,
			pattach_point_follow = 0x5,
			pattach_eyes_follow = 0x6,
			pattach_overhead_follow = 0x7,
			pattach_worldorigin = 0x8,
			pattach_rootbone_follow = 0x9,
			pattach_renderorigin_follow = 0xa,
			pattach_main_view = 0xb,
			pattach_waterwake = 0xc,
			pattach_center_follow = 0xd,
			pattach_custom_game_state_1 = 0xe,
			pattach_healthbar = 0xf,
			max_pattach_types = 0x10,
		}; // enum class particle_attachment_t : uint32_t

		enum class selector_tag_behavior_t : uint32_t
		{
			selector_tag_behavior_on_while_current = 0x0,
			selector_tag_behavior_off_when_finished = 0x1,
			selector_tag_behavior_off_before_finished = 0x2,
		}; // enum class selector_tag_behavior_t : uint32_t

		enum class anim_param_button_t : uint32_t
		{
			animparam_button_none = 0x0,
			animparam_button_dpad_up = 0x1,
			animparam_button_dpad_right = 0x2,
			animparam_button_dpad_down = 0x3,
			animparam_button_dpad_left = 0x4,
			animparam_button_a = 0x5,
			animparam_button_b = 0x6,
			animparam_button_x = 0x7,
			animparam_button_y = 0x8,
			animparam_button_left_shoulder = 0x9,
			animparam_button_right_shoulder = 0xa,
			animparam_button_ltrigger = 0xb,
			animparam_button_rtrigger = 0xc,
		}; // enum class anim_param_button_t : uint32_t

		enum class seq_pose_setting_t : uint32_t
		{
			seq_pose_setting_constant = 0x0,
			seq_pose_setting_rotation = 0x1,
			seq_pose_setting_position = 0x2,
			seq_pose_setting_velocity = 0x3,
		}; // enum class seq_pose_setting_t : uint32_t

		enum class anim_script_type : uint16_t
		{
			animscript_type_invalid = 0xffff,
			animscript_fuse_general = 0x0,
			animscript_fuse_statemachine = 0x1,
		}; // enum class anim_script_type : uint16_t

		enum class ik_end_effector_type : uint32_t
		{
			ik_end_effector_attachment = 0x0,
			ik_end_effector_bone = 0x1,
		}; // enum class ik_end_effector_type : uint32_t

		enum class stance_override_mode : uint32_t
		{
			sequence = 0x0,
			node = 0x1,
		}; // enum class stance_override_mode : uint32_t

		enum class jiggle_bone_sim_space : uint32_t
		{
			sim_space_local = 0x0,
			sim_space_model = 0x1,
			sim_space_world = 0x2,
		}; // enum class jiggle_bone_sim_space : uint32_t

		enum class animation_processing_type_t : uint32_t
		{
			animation_processing_server_simulation = 0x0,
			animation_processing_client_simulation = 0x1,
			animation_processing_client_prediction = 0x2,
			animation_processing_client_interpolation = 0x3,
			animation_processing_client_render = 0x4,
			animation_processing_max = 0x5,
		}; // enum class animation_processing_type_t : uint32_t

		enum class damping_speed_function : uint32_t
		{
			no_damping = 0x0,
			constant = 0x1,
			spring = 0x2,
		}; // enum class damping_speed_function : uint32_t

		enum class foot_pinning_timing_source : uint32_t
		{
			foot_motion = 0x0,
			tag = 0x1,
			parameter = 0x2,
		}; // enum class foot_pinning_timing_source : uint32_t

		enum class foot_lock_sub_visualization : uint32_t
		{
			footlocksubvisualization_reachability_analysis = 0x0,
			footlocksubvisualization_iksolve = 0x1,
		}; // enum class foot_lock_sub_visualization : uint32_t

		enum class footstep_landed_foot_sound_type_t : uint32_t
		{
			footsound_left = 0x0,
			footsound_right = 0x1,
			footsound_use_override_sound = 0x2,
		}; // enum class footstep_landed_foot_sound_type_t : uint32_t

		enum class ikchannel_mode : uint32_t
		{
			two_bone = 0x0,
			two_bone_translate = 0x1,
			one_bone = 0x2,
			one_bone_translate = 0x3,
		}; // enum class ikchannel_mode : uint32_t

		enum class anim_vr_finger_splay_t : uint32_t
		{
			anim_vr_finger_splay_thumb_index = 0x0,
			anim_vr_finger_splay_index_middle = 0x1,
			anim_vr_finger_splay_middle_ring = 0x2,
			anim_vr_finger_splay_ring_pinky = 0x3,
		}; // enum class anim_vr_finger_splay_t : uint32_t

		enum class anim_vr_bone_transform_source_t : uint32_t
		{
			anim_vr_bone_transform_source_live_stream = 0x0,
			anim_vr_bone_transform_source_grip_limit = 0x1,
		}; // enum class anim_vr_bone_transform_source_t : uint32_t

		enum class reset_cycle_option : uint32_t
		{
			beginning = 0x0,
			same_cycle_as_source = 0x1,
			inverse_source_cycle = 0x2,
			fixed_value = 0x3,
			same_time_as_source = 0x4,
		}; // enum class reset_cycle_option : uint32_t

		enum class morph_bundle_type_t : uint32_t
		{
			morph_bundle_type_none = 0x0,
			morph_bundle_type_position_speed = 0x1,
			morph_bundle_type_normal_wrinkle = 0x2,
			morph_bundle_type_count = 0x3,
		}; // enum class morph_bundle_type_t : uint32_t

		enum class model_skeleton_data_t__bone_flags_t : uint32_t
		{
			flag_no_bone_flags = 0x0,
			flag_boneflexdriver = 0x4,
			flag_cloth = 0x8,
			flag_physics = 0x10,
			flag_attachment = 0x20,
			flag_animation = 0x40,
			flag_mesh = 0x80,
			flag_hitbox = 0x100,
			flag_bone_used_by_vertex_lod0 = 0x400,
			flag_bone_used_by_vertex_lod1 = 0x800,
			flag_bone_used_by_vertex_lod2 = 0x1000,
			flag_bone_used_by_vertex_lod3 = 0x2000,
			flag_bone_used_by_vertex_lod4 = 0x4000,
			flag_bone_used_by_vertex_lod5 = 0x8000,
			flag_bone_used_by_vertex_lod6 = 0x10000,
			flag_bone_used_by_vertex_lod7 = 0x20000,
			flag_bone_merge_read = 0x40000,
			flag_bone_merge_write = 0x80000,
			flag_all_bone_flags = 0xfffff,
			blend_prealigned = 0x100000,
			flag_rigidlength = 0x200000,
			flag_procedural = 0x400000,
		}; // enum class model_skeleton_data_t__bone_flags_t : uint32_t

		enum class state_action_behavior : uint32_t
		{
			statetagbehavior_active_while_current = 0x0,
			statetagbehavior_fire_on_enter = 0x1,
			statetagbehavior_fire_on_exit = 0x2,
			statetagbehavior_fire_on_enter_and_exit = 0x3,
		}; // enum class state_action_behavior : uint32_t

		enum class blend_key_type : uint32_t
		{
			blend_key_user_value = 0x0,
			blend_key_velocity = 0x1,
			blend_key_distance = 0x2,
			blend_key_remaining_distance = 0x3,
		}; // enum class blend_key_type : uint32_t

		enum class vphys_xconstraint_params_t__enum_flags0_t : uint32_t
		{
			flag0_shift_interpenetrate = 0x0,
			flag0_shift_constrain = 0x1,
			flag0_shift_breakable_force = 0x2,
			flag0_shift_breakable_torque = 0x3,
		}; // enum class vphys_xconstraint_params_t__enum_flags0_t : uint32_t

		enum class choice_blend_method : uint32_t
		{
			single_blend_time = 0x0,
			per_choice_blend_times = 0x1,
		}; // enum class choice_blend_method : uint32_t

		enum class choice_change_method : uint32_t
		{
			on_reset = 0x0,
			on_cycle_end = 0x1,
			on_reset_or_cycle_end = 0x2,
		}; // enum class choice_change_method : uint32_t

		enum class blend2_dmode : uint32_t
		{
			blend2_dmode_general = 0x0,
			blend2_dmode_directional = 0x1,
		}; // enum class blend2_dmode : uint32_t

		enum class anim_vrhand_t : uint32_t
		{
			anim_vrhand_left = 0x0,
			anim_vrhand_right = 0x1,
		}; // enum class anim_vrhand_t : uint32_t

		enum class iksolver_type : uint32_t
		{
			iksolver_perlin = 0x0,
			iksolver_two_bone = 0x1,
			iksolver_fabrik = 0x2,
			iksolver_dog_leg3_bone = 0x3,
			iksolver_ccd = 0x4,
			iksolver_count = 0x5,
		}; // enum class iksolver_type : uint32_t

		enum class ragdoll_pose_control : uint32_t
		{
			absolute = 0x0,
			relative = 0x1,
		}; // enum class ragdoll_pose_control : uint32_t

		enum class anim_value_source : uint32_t
		{
			move_heading = 0x0,
			move_speed = 0x1,
			forward_speed = 0x2,
			strafe_speed = 0x3,
			facing_heading = 0x4,
			manual_facing_heading = 0x5,
			look_heading = 0x6,
			look_pitch = 0x7,
			look_distance = 0x8,
			parameter = 0x9,
			way_point_heading = 0xa,
			way_point_distance = 0xb,
			boundary_radius = 0xc,
			target_move_heading = 0xd,
			target_move_speed = 0xe,
			acceleration_heading = 0xf,
			acceleration_speed = 0x10,
			slope_heading = 0x11,
			slope_angle = 0x12,
			slope_pitch = 0x13,
			slope_yaw = 0x14,
			goal_distance = 0x15,
			acceleration_left_right = 0x16,
			acceleration_front_back = 0x17,
			root_motion_speed = 0x18,
			root_motion_turn_speed = 0x19,
			move_heading_relative_to_look_heading = 0x1a,
			max_move_speed = 0x1b,
			finger_curl_thumb = 0x1c,
			finger_curl_index = 0x1d,
			finger_curl_middle = 0x1e,
			finger_curl_ring = 0x1f,
			finger_curl_pinky = 0x20,
			finger_splay_thumb_index = 0x21,
			finger_splay_index_middle = 0x22,
			finger_splay_middle_ring = 0x23,
			finger_splay_ring_pinky = 0x24,
		}; // enum class anim_value_source : uint32_t

		enum class pose_type_t : uint8_t
		{
			posetype_static = 0x0,
			posetype_dynamic = 0x1,
			posetype_invalid = 0xff,
		}; // enum class pose_type_t : uint8_t

		enum class model_bone_flex_component_t : uint32_t
		{
			model_bone_flex_invalid = 0xffffffff,
			model_bone_flex_tx = 0x0,
			model_bone_flex_ty = 0x1,
			model_bone_flex_tz = 0x2,
		}; // enum class model_bone_flex_component_t : uint32_t

		enum class mesh_draw_primitive_flags_t : uint32_t
		{
			mesh_draw_flags_none = 0x0,
			mesh_draw_flags_use_shadow_fast_path = 0x1,
			mesh_draw_flags_use_compressed_normal_tangent = 0x2,
			mesh_draw_input_layout_is_not_matched_to_material = 0x8,
			mesh_draw_flags_use_compressed_per_vertex_lighting = 0x10,
			mesh_draw_flags_use_uncompressed_per_vertex_lighting = 0x20,
			mesh_draw_flags_can_batch_with_dynamic_shader_constants = 0x40,
			mesh_draw_flags_draw_last = 0x80,
		}; // enum class mesh_draw_primitive_flags_t : uint32_t

		enum class morph_flex_controller_remap_type_t : uint32_t
		{
			morph_flexcontroller_remap_passthru = 0x0,
			morph_flexcontroller_remap_2way = 0x1,
			morph_flexcontroller_remap_nway = 0x2,
			morph_flexcontroller_remap_eyelid = 0x3,
		}; // enum class morph_flex_controller_remap_type_t : uint32_t

		enum class anim_param_network_setting : uint32_t
		{
			auto_ = 0x0,
			always_network = 0x1,
			never_network = 0x2,
		}; // enum class anim_param_network_setting : uint32_t

		enum class perm_model_info_t__flag_enum : uint32_t
		{
			flag_translucent = 0x1,
			flag_translucent_two_pass = 0x2,
			flag_model_is_runtime_combined = 0x4,
			flag_source1_import = 0x8,
			flag_model_part_child = 0x10,
			flag_nav_gen_none = 0x20,
			flag_nav_gen_hull = 0x40,
			flag_no_forced_fade = 0x800,
			flag_has_skinned_meshes = 0x400,
			flag_do_not_cast_shadows = 0x20000,
			flag_force_phoneme_crossfade = 0x1000,
			flag_no_anim_events = 0x100000,
			flag_animation_driven_flexes = 0x200000,
			flag_implicit_bind_pose_sequence = 0x400000,
			flag_model_doc = 0x800000,
		}; // enum class perm_model_info_t__flag_enum : uint32_t

		enum class iktarget_source : uint32_t
		{
			iktargetsource_bone = 0x0,
			iktargetsource_animgraph_parameter = 0x1,
			iktargetsource_count = 0x2,
		}; // enum class iktarget_source : uint32_t

		enum class anim_param_type_t : uint8_t
		{
			animparam_unknown = 0x0,
			animparam_bool = 0x1,
			animparam_enum = 0x2,
			animparam_int = 0x3,
			animparam_float = 0x4,
			animparam_vector = 0x5,
			animparam_quaternion = 0x6,
			animparam_stringtoken = 0x7,
			animparam_count = 0x8,
		}; // enum class anim_param_type_t : uint8_t

		enum class vphys_xbody_part_t__vphys_xflag_enum_t : uint32_t
		{
			flag_static = 0x1,
			flag_kinematic = 0x2,
			flag_joint = 0x4,
			flag_mass = 0x8,
			flag_always_dynamic_on_client = 0x10,
		}; // enum class vphys_xbody_part_t__vphys_xflag_enum_t : uint32_t

		enum class anim_node_network_mode : uint32_t
		{
			server_authoritative = 0x0,
			client_simulate = 0x1,
		}; // enum class anim_node_network_mode : uint32_t

		enum class flex_op_code_t : uint32_t
		{
			flex_op_const = 0x1,
			flex_op_fetch1 = 0x2,
			flex_op_fetch2 = 0x3,
			flex_op_add = 0x4,
			flex_op_sub = 0x5,
			flex_op_mul = 0x6,
			flex_op_div = 0x7,
			flex_op_neg = 0x8,
			flex_op_exp = 0x9,
			flex_op_open = 0xa,
			flex_op_close = 0xb,
			flex_op_comma = 0xc,
			flex_op_max = 0xd,
			flex_op_min = 0xe,
			flex_op_2way_0 = 0xf,
			flex_op_2way_1 = 0x10,
			flex_op_nway = 0x11,
			flex_op_combo = 0x12,
			flex_op_dominate = 0x13,
			flex_op_dme_lower_eyelid = 0x14,
			flex_op_dme_upper_eyelid = 0x15,
			flex_op_sqrt = 0x16,
			flex_op_remapvalclamped = 0x17,
			flex_op_sin = 0x18,
			flex_op_cos = 0x19,
			flex_op_abs = 0x1a,
		}; // enum class flex_op_code_t : uint32_t

		enum class step_phase : uint32_t
		{
			step_phase_on_ground = 0x0,
			step_phase_in_air = 0x1,
		}; // enum class step_phase : uint32_t

		enum class edemo_bone_selection_mode : uint32_t
		{
			capture_all_bones = 0x0,
			capture_selected_bones = 0x1,
		}; // enum class edemo_bone_selection_mode : uint32_t

		enum class anim_pose_control : uint32_t
		{
			no_pose_control = 0x0,
			absolute_pose_control = 0x1,
			relative_pose_control = 0x2,
		}; // enum class anim_pose_control : uint32_t

		enum class matterial_attribute_tag_type_t : uint32_t
		{
			material_attribute_tag_value = 0x0,
			material_attribute_tag_color = 0x1,
		}; // enum class matterial_attribute_tag_type_t : uint32_t

		enum class vphys_xaggregate_data_t__vphys_xflag_enum_t : uint32_t
		{
			flag_is_polysoup_geometry = 0x1,
			flag_level_collision = 0x10,
			flag_ignore_scale_obsolete_do_not_use = 0x20,
		}; // enum class vphys_xaggregate_data_t__vphys_xflag_enum_t : uint32_t

		enum class iktarget_coordinate_system : uint32_t
		{
			iktargetcoordinatesystem_world_space = 0x0,
			iktargetcoordinatesystem_model_space = 0x1,
			iktargetcoordinatesystem_count = 0x2,
		}; // enum class iktarget_coordinate_system : uint32_t

		enum class anim_vrfinger_t : uint32_t
		{
			anim_vr_finger_thumb = 0x0,
			anim_vr_finger_index = 0x1,
			anim_vr_finger_middle = 0x2,
			anim_vr_finger_ring = 0x3,
			anim_vr_finger_pinky = 0x4,
		}; // enum class anim_vrfinger_t : uint32_t

		enum class solve_ikchain_anim_node_debug_setting : uint32_t
		{
			solveikchainanimnodedebugsetting_none = 0x0,
			solveikchainanimnodedebugsetting_x_axis_circle = 0x1,
			solveikchainanimnodedebugsetting_y_axis_circle = 0x2,
			solveikchainanimnodedebugsetting_z_axis_circle = 0x3,
			solveikchainanimnodedebugsetting_forward = 0x4,
			solveikchainanimnodedebugsetting_up = 0x5,
			solveikchainanimnodedebugsetting_left = 0x6,
		}; // enum class solve_ikchain_anim_node_debug_setting : uint32_t

		enum class binary_node_timing : uint32_t
		{
			use_child1 = 0x0,
			use_child2 = 0x1,
			sync_children = 0x2,
		}; // enum class binary_node_timing : uint32_t

		enum class canimation_graph_visualizer_primitive_type : uint32_t
		{
			animationgraphvisualizerprimitivetype_text = 0x0,
			animationgraphvisualizerprimitivetype_sphere = 0x1,
			animationgraphvisualizerprimitivetype_line = 0x2,
			animationgraphvisualizerprimitivetype_pie = 0x3,
			animationgraphvisualizerprimitivetype_axis = 0x4,
		}; // enum class canimation_graph_visualizer_primitive_type : uint32_t

		enum class bone_transform_space_t : uint32_t
		{
			bone_transform_space_invalid = 0xffffffff,
			bone_transform_space_parent = 0x0,
			bone_transform_space_model = 0x1,
			bone_transform_space_world = 0x2,
		}; // enum class bone_transform_space_t : uint32_t

		enum class seq_cmd_t : uint32_t
		{
			seq_cmd_nop = 0x0,
			seq_cmd_linear_delta = 0x1,
			seq_cmd_fetch_frame_range = 0x2,
			seq_cmd_slerp = 0x3,
			seq_cmd_add = 0x4,
			seq_cmd_subtract = 0x5,
			seq_cmd_scale = 0x6,
			seq_cmd_copy = 0x7,
			seq_cmd_blend = 0x8,
			seq_cmd_worldspace = 0x9,
			seq_cmd_sequence = 0xa,
			seq_cmd_fetch_cycle = 0xb,
			seq_cmd_fetch_frame = 0xc,
			seq_cmd_iklock_in_place = 0xd,
			seq_cmd_ikrestore_all = 0xe,
			seq_cmd_reverse_sequence = 0xf,
			seq_cmd_transform = 0x10,
		}; // enum class seq_cmd_t : uint32_t

		enum class joint_axis_t : uint32_t
		{
			joint_axis_x = 0x0,
			joint_axis_y = 0x1,
			joint_axis_z = 0x2,
			joint_axis_count = 0x3,
		}; // enum class joint_axis_t : uint32_t

		enum class joint_motion_t : uint32_t
		{
			joint_motion_free = 0x0,
			joint_motion_locked = 0x1,
			joint_motion_count = 0x2,
		}; // enum class joint_motion_t : uint32_t

		enum class sos_group_type_t : uint32_t
		{
			sos_grouptype_dynamic = 0x0,
			sos_grouptype_static = 0x1,
		}; // enum class sos_group_type_t : uint32_t

		enum class vmix_subgraph_switch_interpolation_type_t : uint32_t
		{
			subgraph_interpolation_temporal_crossfade = 0x0,
			subgraph_interpolation_temporal_fade_out = 0x1,
			subgraph_interpolation_keep_last_subgraph_running = 0x2,
		}; // enum class vmix_subgraph_switch_interpolation_type_t : uint32_t

		enum class action_type_t : uint32_t
		{
			sos_action_none = 0x0,
			sos_action_limiter = 0x1,
			sos_action_time_limit = 0x2,
			sos_action_set_soundevent_param = 0x3,
		}; // enum class action_type_t : uint32_t

		enum class vmix_filter_slope_t : uint8_t
		{
			filter_slope_1_pole_6db = 0x0,
			filter_slope_1_pole_12db = 0x1,
			filter_slope_1_pole_18db = 0x2,
			filter_slope_1_pole_24db = 0x3,
			filter_slope_12db = 0x4,
			filter_slope_24db = 0x5,
			filter_slope_36db = 0x6,
			filter_slope_48db = 0x7,
			filter_slope_max = 0x7,
		}; // enum class vmix_filter_slope_t : uint8_t

		enum class vmix_channel_operation_t : uint32_t
		{
			vmix_chan_stereo = 0x0,
			vmix_chan_left = 0x1,
			vmix_chan_right = 0x2,
			vmix_chan_swap = 0x3,
			vmix_chan_mono = 0x4,
			vmix_chan_mid_side = 0x5,
		}; // enum class vmix_channel_operation_t : uint32_t

		enum class vmix_panner_type_t : uint32_t
		{
			panner_type_linear = 0x0,
			panner_type_equal_power = 0x1,
		}; // enum class vmix_panner_type_t : uint32_t

		enum class soundlevel_t : uint32_t
		{
			sndlvl_none = 0x0,
			sndlvl_20db = 0x14,
			sndlvl_25db = 0x19,
			sndlvl_30db = 0x1e,
			sndlvl_35db = 0x23,
			sndlvl_40db = 0x28,
			sndlvl_45db = 0x2d,
			sndlvl_50db = 0x32,
			sndlvl_55db = 0x37,
			sndlvl_idle = 0x3c,
			sndlvl_60db = 0x3c,
			sndlvl_65db = 0x41,
			sndlvl_static = 0x42,
			sndlvl_70db = 0x46,
			sndlvl_norm = 0x4b,
			sndlvl_75db = 0x4b,
			sndlvl_80db = 0x50,
			sndlvl_talking = 0x50,
			sndlvl_85db = 0x55,
			sndlvl_90db = 0x5a,
			sndlvl_95db = 0x5f,
			sndlvl_100db = 0x64,
			sndlvl_105db = 0x69,
			sndlvl_110db = 0x6e,
			sndlvl_120db = 0x78,
			sndlvl_130db = 0x82,
			sndlvl_gunfire = 0x8c,
			sndlvl_140db = 0x8c,
			sndlvl_150db = 0x96,
			sndlvl_180db = 0xb4,
		}; // enum class soundlevel_t : uint32_t

		enum class vmix_processor_type_t : uint16_t
		{
			vprocessor_unknown = 0x0,
			vprocessor_steamaudio_reverb = 0x1,
			vprocessor_rt_pitch = 0x2,
			vprocessor_steamaudio_hrtf = 0x3,
			vprocessor_dynamics = 0x4,
			vprocessor_presetdsp = 0x5,
			vprocessor_delay = 0x6,
			vprocessor_mod_delay = 0x7,
			vprocessor_diffusor = 0x8,
			vprocessor_boxverb = 0x9,
			vprocessor_freeverb = 0xa,
			vprocessor_plateverb = 0xb,
			vprocessor_fullwave_integrator = 0xc,
			vprocessor_filter = 0xd,
			vprocessor_steamaudio_pathing = 0xe,
			vprocessor_eq8 = 0xf,
			vprocessor_envelope = 0x10,
			vprocessor_vocoder = 0x11,
			vprocessor_convolution = 0x12,
			vprocessor_dynamics_3band = 0x13,
			vprocessor_dynamics_compressor = 0x14,
			vprocessor_shaper = 0x15,
			vprocessor_panner = 0x16,
			vprocessor_utility = 0x17,
			vprocessor_autofilter = 0x18,
			vprocessor_osc = 0x19,
			vprocessor_stereodelay = 0x1a,
			vprocessor_effect_chain = 0x1b,
			vprocessor_subgraph_switch = 0x1c,
			vprocessor_steamaudio_direct = 0x1d,
		}; // enum class vmix_processor_type_t : uint16_t

		enum class sos_action_sort_type_t : uint32_t
		{
			sos_sorttype_highest = 0x0,
			sos_sorttype_lowest = 0x1,
		}; // enum class sos_action_sort_type_t : uint32_t

		enum class sos_edit_item_type_t : uint32_t
		{
			sos_edit_item_type_soundevents = 0x0,
			sos_edit_item_type_soundevent = 0x1,
			sos_edit_item_type_librarystacks = 0x2,
			sos_edit_item_type_stack = 0x3,
			sos_edit_item_type_operator = 0x4,
			sos_edit_item_type_field = 0x5,
		}; // enum class sos_edit_item_type_t : uint32_t

		enum class sos_action_stop_type_t : uint32_t
		{
			sos_stoptype_none = 0x0,
			sos_stoptype_time = 0x1,
			sos_stoptype_opvar = 0x2,
		}; // enum class sos_action_stop_type_t : uint32_t

		enum class vmix_filter_type_t : uint16_t
		{
			filter_unknown = 0xffff,
			filter_lowpass = 0x0,
			filter_highpass = 0x1,
			filter_bandpass = 0x2,
			filter_notch = 0x3,
			filter_peaking_eq = 0x4,
			filter_low_shelf = 0x5,
			filter_high_shelf = 0x6,
			filter_allpass = 0x7,
			filter_passthrough = 0x8,
		}; // enum class vmix_filter_type_t : uint16_t

		enum class vmix_lfoshape_t : uint32_t
		{
			lfo_shape_sine = 0x0,
			lfo_shape_square = 0x1,
			lfo_shape_tri = 0x2,
			lfo_shape_saw = 0x3,
			lfo_shape_noise = 0x4,
		}; // enum class vmix_lfoshape_t : uint32_t

		enum class disable_shadows_t : uint8_t
		{
			k_disable_shadows_none = 0x0,
			k_disable_shadows_all = 0x1,
			k_disable_shadows_baked = 0x2,
			k_disable_shadows_realtime = 0x3,
		}; // enum class disable_shadows_t : uint8_t

		enum class object_type_flags_t : uint32_t
		{
			object_type_none = 0x0,
			object_type_image_lod = 0x1,
			object_type_geometry_lod = 0x2,
			object_type_decal = 0x4,
			object_type_model = 0x8,
			object_type_block_light = 0x10,
			object_type_no_shadows = 0x20,
			object_type_worldspace_texure_blend = 0x40,
			object_type_disabled_in_low_quality = 0x80,
			object_type_no_sun_shadows = 0x100,
			object_type_render_with_dynamic = 0x200,
			object_type_render_to_cubemaps = 0x400,
			object_type_model_has_lods = 0x800,
			object_type_overlay = 0x2000,
			object_type_precomputed_vismembers = 0x4000,
			object_type_static_cube_map = 0x8000,
		}; // enum class object_type_flags_t : uint32_t

		enum class pulse_instruction_code_t : uint16_t
		{
			invalid = 0x0,
			immediate_halt = 0x1,
			return_void = 0x2,
			return_value = 0x3,
			nop = 0x4,
			jump = 0x5,
			jump_cond = 0x6,
			chunk_leap = 0x7,
			chunk_leap_cond = 0x8,
			pulse_call_sync = 0x9,
			pulse_call_async_fire = 0xa,
			cell_invoke = 0xb,
			library_invoke = 0xc,
			target_invoke = 0xd,
			set_var = 0xe,
			get_var = 0xf,
			set_register_lit_bool = 0x10,
			set_register_lit_int = 0x11,
			set_register_lit_float = 0x12,
			set_register_lit_str = 0x13,
			set_register_lit_inval_ehandle = 0x14,
			set_register_lit_inval_sndevt_guid = 0x15,
			set_register_lit_vec3 = 0x16,
			set_register_domain_value = 0x17,
			copy = 0x18,
			not_ = 0x19,
			negate = 0x1a,
			add = 0x1b,
			sub = 0x1c,
			mul = 0x1d,
			div = 0x1e,
			mod = 0x1f,
			lt = 0x20,
			lte = 0x21,
			eq = 0x22,
			ne = 0x23,
			and_ = 0x24,
			or_ = 0x25,
			convert_value = 0x26,
			last_serialized_code = 0x27,
			negate_int = 0x28,
			negate_float = 0x29,
			add_int = 0x2a,
			add_float = 0x2b,
			add_string = 0x2c,
			sub_int = 0x2d,
			sub_float = 0x2e,
			mul_int = 0x2f,
			mul_float = 0x30,
			div_int = 0x31,
			div_float = 0x32,
			mod_int = 0x33,
			mod_float = 0x34,
			lt_int = 0x35,
			lt_float = 0x36,
			lte_int = 0x37,
			lte_float = 0x38,
			eq_bool = 0x39,
			eq_int = 0x3a,
			eq_float = 0x3b,
			eq_string = 0x3c,
			ne_bool = 0x3d,
			ne_int = 0x3e,
			ne_float = 0x3f,
			ne_string = 0x40,
		}; // enum class pulse_instruction_code_t : uint16_t

		enum class pulse_value_type_t : uint32_t
		{
			pval_invalid = 0xffffffff,
			pval_bool = 0x0,
			pval_int = 0x1,
			pval_float = 0x2,
			pval_string = 0x3,
			pval_vec3 = 0x4,
			pval_transform = 0x5,
			pval_ehandle = 0x6,
			pval_resource = 0x7,
			pval_sndevt_guid = 0x8,
			pval_schema_ptr = 0x9,
			pval_cursor_flow = 0xa,
			pval_any = 0xb,
			pval_count = 0xc,
		}; // enum class pulse_value_type_t : uint32_t

		enum class pulse_method_call_mode_t : uint32_t
		{
			sync_wait_for_completion = 0x0,
			async_fire_and_forget = 0x1,
		}; // enum class pulse_method_call_mode_t : uint32_t

		enum class texture_repetition_mode_t : uint32_t
		{
			texture_repetition_particle = 0x0,
			texture_repetition_path = 0x1,
		}; // enum class texture_repetition_mode_t : uint32_t

		enum class particle_orientation_set_mode_t : uint32_t
		{
			particle_orientation_set_from_velocity = 0x0,
			particle_orientation_set_from_rotations = 0x1,
		}; // enum class particle_orientation_set_mode_t : uint32_t

		enum class particle_light_type_choice_list_t : uint32_t
		{
			particle_light_type_point = 0x0,
			particle_light_type_spot = 0x1,
			particle_light_type_fx = 0x2,
			particle_light_type_capsule = 0x3,
		}; // enum class particle_light_type_choice_list_t : uint32_t

		enum class particle_light_fog_lighting_mode_t : uint32_t
		{
			particle_light_fog_lighting_mode_none = 0x0,
			particle_light_fog_lighting_mode_dynamic = 0x2,
			particle_light_fog_lighting_mode_dynamic_noshadows = 0x4,
		}; // enum class particle_light_fog_lighting_mode_t : uint32_t

		enum class particle_omni2_light_type_choice_list_t : uint32_t
		{
			particle_omni2_light_type_point = 0x0,
			particle_omni2_light_type_sphere = 0x1,
		}; // enum class particle_omni2_light_type_choice_list_t : uint32_t

		enum class sprite_card_shader_type_t : uint32_t
		{
			spritecard_shader_base = 0x0,
			spritecard_shader_custom = 0x1,
		}; // enum class sprite_card_shader_type_t : uint32_t

		enum class particle_impulse_type_t : uint32_t
		{
			impulse_type_none = 0x0,
			impulse_type_generic = 0x1,
			impulse_type_rope = 0x2,
			impulse_type_explosion = 0x4,
			impulse_type_explosion_underwater = 0x8,
			impulse_type_particle_system = 0x10,
		}; // enum class particle_impulse_type_t : uint32_t

		enum class closest_point_test_type_t : uint32_t
		{
			particle_closest_type_box = 0x0,
			particle_closest_type_capsule = 0x1,
			particle_closest_type_hybrid = 0x2,
		}; // enum class closest_point_test_type_t : uint32_t

		enum class particle_endcap_mode_t : uint32_t
		{
			particle_endcap_always_on = 0xffffffff,
			particle_endcap_endcap_off = 0x0,
			particle_endcap_endcap_on = 0x1,
		}; // enum class particle_endcap_mode_t : uint32_t

		enum class particle_sorting_choice_list_t : uint32_t
		{
			particle_sorting_nearest = 0x0,
			particle_sorting_creation_time = 0x1,
		}; // enum class particle_sorting_choice_list_t : uint32_t

		enum class particle_collision_mode_t : uint32_t
		{
			collision_mode_per_particle_trace = 0x3,
			collision_mode_use_nearest_trace = 0x2,
			collision_mode_per_frame_planeset = 0x1,
			collision_mode_initial_trace_down = 0x0,
			collision_mode_disabled = 0xffffffff,
		}; // enum class particle_collision_mode_t : uint32_t

		enum class particle_orientation_choice_list_t : uint32_t
		{
			particle_orientation_screen_aligned = 0x0,
			particle_orientation_screen_z_aligned = 0x1,
			particle_orientation_world_z_aligned = 0x2,
			particle_orientation_align_to_particle_normal = 0x3,
			particle_orientation_screenalign_to_particle_normal = 0x4,
			particle_orientation_full_3axis_rotation = 0x5,
		}; // enum class particle_orientation_choice_list_t : uint32_t

		enum class particle_hitbox_data_selection_t : uint32_t
		{
			particle_hitbox_average_speed = 0x0,
			particle_hitbox_count = 0x1,
		}; // enum class particle_hitbox_data_selection_t : uint32_t

		enum class particle_transform_type_t : uint32_t
		{
			pt_type_invalid = 0x0,
			pt_type_named_value = 0x1,
			pt_type_control_point = 0x2,
			pt_type_control_point_range = 0x3,
			pt_type_count = 0x4,
		}; // enum class particle_transform_type_t : uint32_t

		enum class sprite_card_texture_channel_t : uint32_t
		{
			spritecard_texture_channel_mix_rgb = 0x0,
			spritecard_texture_channel_mix_rgba = 0x1,
			spritecard_texture_channel_mix_a = 0x2,
			spritecard_texture_channel_mix_rgb_a = 0x3,
			spritecard_texture_channel_mix_rgb_alphamask = 0x4,
			spritecard_texture_channel_mix_rgb_rgbmask = 0x5,
			spritecard_texture_channel_mix_rgba_rgbalpha = 0x6,
			spritecard_texture_channel_mix_a_rgbalpha = 0x7,
			spritecard_texture_channel_mix_rgb_a_rgbalpha = 0x8,
			spritecard_texture_channel_mix_r = 0x9,
			spritecard_texture_channel_mix_g = 0xa,
			spritecard_texture_channel_mix_b = 0xb,
			spritecard_texture_channel_mix_ralpha = 0xc,
			spritecard_texture_channel_mix_galpha = 0xd,
			spritecard_texture_channel_mix_balpha = 0xe,
		}; // enum class sprite_card_texture_channel_t : uint32_t

		enum class particle_alpha_reference_type_t : uint32_t
		{
			particle_alpha_reference_alpha_alpha = 0x0,
			particle_alpha_reference_opaque_alpha = 0x1,
			particle_alpha_reference_alpha_opaque = 0x2,
			particle_alpha_reference_opaque_opaque = 0x3,
		}; // enum class particle_alpha_reference_type_t : uint32_t

		enum class sprite_card_texture_type_t : uint32_t
		{
			spritecard_texture_diffuse = 0x0,
			spritecard_texture_zoom = 0x1,
			spritecard_texture_1d_color_lookup = 0x2,
			spritecard_texture_uvdistortion = 0x3,
			spritecard_texture_uvdistortion_zoom = 0x4,
			spritecard_texture_normalmap = 0x5,
			spritecard_texture_animmotionvec = 0x6,
			spritecard_texture_spherical_harmonics_a = 0x7,
			spritecard_texture_spherical_harmonics_b = 0x8,
			spritecard_texture_spherical_harmonics_c = 0x9,
		}; // enum class sprite_card_texture_type_t : uint32_t

		enum class bbox_volume_type_t : uint32_t
		{
			bbox_volume = 0x0,
			bbox_dimensions = 0x1,
			bbox_mins_maxs = 0x2,
		}; // enum class bbox_volume_type_t : uint32_t

		enum class particle_detail_level_t : uint32_t
		{
			particledetail_low = 0x0,
			particledetail_medium = 0x1,
			particledetail_high = 0x2,
			particledetail_ultra = 0x3,
		}; // enum class particle_detail_level_t : uint32_t

		enum class particle_sequence_crop_override_t : uint32_t
		{
			particle_sequence_crop_override_default = 0xffffffff,
			particle_sequence_crop_override_force_off = 0x0,
			particle_sequence_crop_override_force_on = 0x1,
		}; // enum class particle_sequence_crop_override_t : uint32_t

		enum class particle_falloff_function_t : uint32_t
		{
			particle_falloff_constant = 0x0,
			particle_falloff_linear = 0x1,
			particle_falloff_exponential = 0x2,
		}; // enum class particle_falloff_function_t : uint32_t

		enum class particle_light_unit_choice_list_t : uint32_t
		{
			particle_light_unit_candelas = 0x0,
			particle_light_unit_lumens = 0x1,
		}; // enum class particle_light_unit_choice_list_t : uint32_t

		enum class particle_vec_type_t : uint32_t
		{
			pvec_type_invalid = 0xffffffff,
			pvec_type_literal = 0x0,
			pvec_type_literal_color = 0x1,
			pvec_type_named_value = 0x2,
			pvec_type_particle_vector = 0x3,
			pvec_type_particle_velocity = 0x4,
			pvec_type_cp_value = 0x5,
			pvec_type_cp_relative_position = 0x6,
			pvec_type_cp_relative_dir = 0x7,
			pvec_type_cp_relative_random_dir = 0x8,
			pvec_type_float_components = 0x9,
			pvec_type_float_interp_clamped = 0xa,
			pvec_type_float_interp_open = 0xb,
			pvec_type_float_interp_gradient = 0xc,
			pvec_type_random_uniform = 0xd,
			pvec_type_random_uniform_offset = 0xe,
			pvec_type_cp_delta = 0xf,
			pvec_type_closest_camera_position = 0x10,
			pvec_type_count = 0x11,
		}; // enum class particle_vec_type_t : uint32_t

		enum class pfnoise_modifier_t : uint32_t
		{
			pf_noise_modifier_none = 0x0,
			pf_noise_modifier_lines = 0x1,
			pf_noise_modifier_clumps = 0x2,
			pf_noise_modifier_rings = 0x3,
		}; // enum class pfnoise_modifier_t : uint32_t

		enum class particle_float_random_mode_t : uint32_t
		{
			pf_random_mode_invalid = 0xffffffff,
			pf_random_mode_constant = 0x0,
			pf_random_mode_varying = 0x1,
			pf_random_mode_count = 0x2,
		}; // enum class particle_float_random_mode_t : uint32_t

		enum class particle_depth_feathering_mode_t : uint32_t
		{
			particle_depth_feathering_off = 0x0,
			particle_depth_feathering_on_optional = 0x1,
			particle_depth_feathering_on_required = 0x2,
		}; // enum class particle_depth_feathering_mode_t : uint32_t

		enum class material_proxy_type_t : uint32_t
		{
			material_proxy_status_effect = 0x0,
			material_proxy_tint = 0x1,
		}; // enum class material_proxy_type_t : uint32_t

		enum class particle_lightnint_branch_behavior_t : uint32_t
		{
			particle_lightning_branch_current_dir = 0x0,
			particle_lightning_branch_endpoint_dir = 0x1,
		}; // enum class particle_lightnint_branch_behavior_t : uint32_t

		enum class particle_output_blend_mode_t : uint32_t
		{
			particle_output_blend_mode_alpha = 0x0,
			particle_output_blend_mode_add = 0x1,
			particle_output_blend_mode_blend_add = 0x2,
			particle_output_blend_mode_half_blend_add = 0x3,
			particle_output_blend_mode_neg_half_blend_add = 0x4,
			particle_output_blend_mode_mod2x = 0x5,
			particle_output_blend_mode_lighten = 0x6,
		}; // enum class particle_output_blend_mode_t : uint32_t

		enum class particle_float_input_mode_t : uint32_t
		{
			pf_input_mode_invalid = 0xffffffff,
			pf_input_mode_clamped = 0x0,
			pf_input_mode_looped = 0x1,
			pf_input_mode_count = 0x2,
		}; // enum class particle_float_input_mode_t : uint32_t

		enum class particle_selection_t : uint32_t
		{
			particle_selection_first = 0x0,
			particle_selection_last = 0x1,
			particle_selection_number = 0x2,
		}; // enum class particle_selection_t : uint32_t

		enum class particle_texture_layer_blend_type_t : uint32_t
		{
			spritecard_texture_blend_multiply = 0x0,
			spritecard_texture_blend_mod2x = 0x1,
			spritecard_texture_blend_replace = 0x2,
			spritecard_texture_blend_add = 0x3,
			spritecard_texture_blend_subtract = 0x4,
			spritecard_texture_blend_average = 0x5,
			spritecard_texture_blend_luminance = 0x6,
		}; // enum class particle_texture_layer_blend_type_t : uint32_t

		enum class particle_trace_set_t : uint32_t
		{
			particle_trace_set_all = 0x0,
			particle_trace_set_static = 0x1,
			particle_trace_set_static_and_keyframed = 0x2,
			particle_trace_set_dynamic = 0x3,
		}; // enum class particle_trace_set_t : uint32_t

		enum class particle_float_map_type_t : uint32_t
		{
			pf_map_type_invalid = 0xffffffff,
			pf_map_type_direct = 0x0,
			pf_map_type_mult = 0x1,
			pf_map_type_remap = 0x2,
			pf_map_type_remap_biased = 0x3,
			pf_map_type_curve = 0x4,
			pf_map_type_notched = 0x5,
			pf_map_type_count = 0x6,
		}; // enum class particle_float_map_type_t : uint32_t

		enum class particle_light_behavior_choice_list_t : uint32_t
		{
			particle_light_behavior_follow_direction = 0x0,
			particle_light_behavior_rope = 0x1,
			particle_light_behavior_trails = 0x2,
		}; // enum class particle_light_behavior_choice_list_t : uint32_t

		enum class particle_topology_t : uint32_t
		{
			particle_topology_points = 0x0,
			particle_topology_lines = 0x1,
			particle_topology_tris = 0x2,
			particle_topology_quads = 0x3,
			particle_topology_cubes = 0x4,
		}; // enum class particle_topology_t : uint32_t

		enum class animation_type_t : uint32_t
		{
			animation_type_fixed_rate = 0x0,
			animation_type_fit_lifetime = 0x1,
			animation_type_manual_frames = 0x2,
		}; // enum class animation_type_t : uint32_t

		enum class hitbox_lerp_type_t : uint32_t
		{
			hitbox_lerp_lifetime = 0x0,
			hitbox_lerp_constant = 0x1,
		}; // enum class hitbox_lerp_type_t : uint32_t

		enum class particle_rotation_lock_type_t : uint32_t
		{
			particle_rotation_lock_none = 0x0,
			particle_rotation_lock_rotations = 0x1,
			particle_rotation_lock_normal = 0x2,
		}; // enum class particle_rotation_lock_type_t : uint32_t

		enum class vector_expression_type_t : uint32_t
		{
			vector_expression_uninitialized = 0xffffffff,
			vector_expression_add = 0x0,
			vector_expression_subtract = 0x1,
			vector_expression_mul = 0x2,
			vector_expression_divide = 0x3,
			vector_expression_input_1 = 0x4,
			vector_expression_min = 0x5,
			vector_expression_max = 0x6,
			vector_expression_crossproduct = 0x7,
		}; // enum class vector_expression_type_t : uint32_t

		enum class particle_fog_type_t : uint32_t
		{
			particle_fog_game_default = 0x0,
			particle_fog_enabled = 0x1,
			particle_fog_disabled = 0x2,
		}; // enum class particle_fog_type_t : uint32_t

		enum class vector_float_expression_type_t : uint32_t
		{
			vector_float_expression_uninitialized = 0xffffffff,
			vector_float_expression_dotproduct = 0x0,
			vector_float_expression_distance = 0x1,
			vector_float_expression_distancesqr = 0x2,
			vector_float_expression_input1_length = 0x3,
			vector_float_expression_input1_lengthsqr = 0x4,
			vector_float_expression_input1_noise = 0x5,
		}; // enum class vector_float_expression_type_t : uint32_t

		enum class particle_pin_distance_t : uint32_t
		{
			particle_pin_distance_none = 0xffffffff,
			particle_pin_distance_neighbor = 0x0,
			particle_pin_distance_farthest = 0x1,
			particle_pin_distance_first = 0x2,
			particle_pin_distance_last = 0x3,
			particle_pin_distance_center = 0x5,
			particle_pin_distance_cp = 0x6,
			particle_pin_distance_cp_pair_either = 0x7,
			particle_pin_distance_cp_pair_both = 0x8,
			particle_pin_speed = 0x9,
			particle_pin_collection_age = 0xa,
			particle_pin_float_value = 0xb,
		}; // enum class particle_pin_distance_t : uint32_t

		enum class particle_control_point_axis_t : uint32_t
		{
			particle_cp_axis_x = 0x0,
			particle_cp_axis_y = 0x1,
			particle_cp_axis_z = 0x2,
			particle_cp_axis_negative_x = 0x3,
			particle_cp_axis_negative_y = 0x4,
			particle_cp_axis_negative_z = 0x5,
		}; // enum class particle_control_point_axis_t : uint32_t

		enum class particle_hitbox_bias_type_t : uint32_t
		{
			particle_hitbox_bias_entity = 0x0,
			particle_hitbox_bias_hitbox = 0x1,
		}; // enum class particle_hitbox_bias_type_t : uint32_t

		enum class particle_direction_noise_type_t : uint32_t
		{
			particle_dir_noise_perlin = 0x0,
			particle_dir_noise_curl = 0x1,
			particle_dir_noise_worley_basic = 0x2,
		}; // enum class particle_direction_noise_type_t : uint32_t

		enum class pfnoise_type_t : uint32_t
		{
			pf_noise_type_perlin = 0x0,
			pf_noise_type_simplex = 0x1,
			pf_noise_type_worley = 0x2,
			pf_noise_type_curl = 0x3,
		}; // enum class pfnoise_type_t : uint32_t

		enum class particle_lighting_quality_t : uint32_t
		{
			particle_lighting_per_particle = 0x0,
			particle_lighting_per_vertex = 0x1,
			particle_lighting_per_pixel = 0xffffffff,
		}; // enum class particle_lighting_quality_t : uint32_t

		enum class particle_model_type_t : uint32_t
		{
			pm_type_invalid = 0x0,
			pm_type_named_value_model = 0x1,
			pm_type_named_value_ehandle = 0x2,
			pm_type_control_point = 0x3,
			pm_type_count = 0x4,
		}; // enum class particle_model_type_t : uint32_t

		enum class particle_parent_set_mode_t : uint32_t
		{
			particle_set_parent_no = 0x0,
			particle_set_parent_immediate = 0x1,
			particle_set_parent_root = 0x1,
		}; // enum class particle_parent_set_mode_t : uint32_t

		enum class standard_lighting_attenuation_style_t : uint32_t
		{
			light_style_old = 0x0,
			light_style_new = 0x1,
		}; // enum class standard_lighting_attenuation_style_t : uint32_t

		enum class blur_filter_type_t : uint32_t
		{
			blurfilter_gaussian = 0x0,
			blurfilter_box = 0x1,
		}; // enum class blur_filter_type_t : uint32_t

		enum class sprite_card_per_particle_scale_t : uint32_t
		{
			spritecard_texture_pp_scale_none = 0x0,
			spritecard_texture_pp_scale_particle_age = 0x1,
			spritecard_texture_pp_scale_animation_frame = 0x2,
			spritecard_texture_pp_scale_shader_extra_data1 = 0x3,
			spritecard_texture_pp_scale_shader_extra_data2 = 0x4,
			spritecard_texture_pp_scale_particle_alpha = 0x5,
			spritecard_texture_pp_scale_shader_radius = 0x6,
			spritecard_texture_pp_scale_roll = 0x7,
			spritecard_texture_pp_scale_yaw = 0x8,
			spritecard_texture_pp_scale_pitch = 0x9,
			spritecard_texture_pp_scale_random = 0xa,
			spritecard_texture_pp_scale_neg_random = 0xb,
			spritecard_texture_pp_scale_random_time = 0xc,
			spritecard_texture_pp_scale_neg_random_time = 0xd,
		}; // enum class sprite_card_per_particle_scale_t : uint32_t

		enum class scalar_expression_type_t : uint32_t
		{
			scalar_expression_uninitialized = 0xffffffff,
			scalar_expression_add = 0x0,
			scalar_expression_subtract = 0x1,
			scalar_expression_mul = 0x2,
			scalar_expression_divide = 0x3,
			scalar_expression_input_1 = 0x4,
			scalar_expression_min = 0x5,
			scalar_expression_max = 0x6,
			scalar_expression_mod = 0x7,
		}; // enum class scalar_expression_type_t : uint32_t

		enum class detail_combo_t : uint32_t
		{
			detail_combo_off = 0x0,
			detail_combo_add = 0x1,
			detail_combo_add_self_illum = 0x2,
			detail_combo_mod2x = 0x3,
		}; // enum class detail_combo_t : uint32_t

		enum class particle_color_blend_type_t : uint32_t
		{
			particle_color_blend_multiply = 0x0,
			particle_color_blend_multiply2x = 0x1,
			particle_color_blend_divide = 0x2,
			particle_color_blend_add = 0x3,
			particle_color_blend_subtract = 0x4,
			particle_color_blend_mod2x = 0x5,
			particle_color_blend_screen = 0x6,
			particle_color_blend_max = 0x7,
			particle_color_blend_min = 0x8,
			particle_color_blend_replace = 0x9,
			particle_color_blend_average = 0xa,
			particle_color_blend_negate = 0xb,
			particle_color_blend_luminance = 0xc,
		}; // enum class particle_color_blend_type_t : uint32_t

		enum class particle_color_blend_mode_t : uint32_t
		{
			particleblend_default = 0x0,
			particleblend_overlay = 0x1,
			particleblend_darken = 0x2,
			particleblend_lighten = 0x3,
			particleblend_multiply = 0x4,
		}; // enum class particle_color_blend_mode_t : uint32_t

		enum class pfnoise_turbulence_t : uint32_t
		{
			pf_noise_turb_none = 0x0,
			pf_noise_turb_highlight = 0x1,
			pf_noise_turb_feedback = 0x2,
			pf_noise_turb_loopy = 0x3,
			pf_noise_turb_contrast = 0x4,
			pf_noise_turb_alternate = 0x5,
		}; // enum class pfnoise_turbulence_t : uint32_t

		enum class particle_post_process_priority_group_t : uint32_t
		{
			particle_post_process_priority_level_volume = 0x0,
			particle_post_process_priority_level_override = 0x1,
			particle_post_process_priority_gameplay_effect = 0x2,
			particle_post_process_priority_gameplay_state_low = 0x3,
			particle_post_process_priority_gameplay_state_high = 0x4,
			particle_post_process_priority_global_ui = 0x5,
		}; // enum class particle_post_process_priority_group_t : uint32_t

		enum class particle_float_type_t : uint32_t
		{
			pf_type_invalid = 0xffffffff,
			pf_type_literal = 0x0,
			pf_type_named_value = 0x1,
			pf_type_random_uniform = 0x2,
			pf_type_random_biased = 0x3,
			pf_type_collection_age = 0x4,
			pf_type_endcap_age = 0x5,
			pf_type_control_point_component = 0x6,
			pf_type_control_point_change_age = 0x7,
			pf_type_control_point_speed = 0x8,
			pf_type_particle_detail_level = 0x9,
			pf_type_concurrent_def_count = 0xa,
			pf_type_closest_camera_distance = 0xb,
			pf_type_renderer_camera_distance = 0xc,
			pf_type_renderer_camera_dot_product = 0xd,
			pf_type_particle_noise = 0xe,
			pf_type_particle_age = 0xf,
			pf_type_particle_age_normalized = 0x10,
			pf_type_particle_float = 0x11,
			pf_type_particle_vector_component = 0x12,
			pf_type_particle_speed = 0x13,
			pf_type_particle_number = 0x14,
			pf_type_particle_number_normalized = 0x15,
			pf_type_count = 0x16,
		}; // enum class particle_float_type_t : uint32_t

		enum class inheritable_bool_type_t : uint32_t
		{
			inheritable_bool_inherit = 0x0,
			inheritable_bool_false = 0x1,
			inheritable_bool_true = 0x2,
		}; // enum class inheritable_bool_type_t : uint32_t

		enum class pet_ground_type_t : uint32_t
		{
			pet_ground_none = 0x0,
			pet_ground_grid = 0x1,
			pet_ground_plane = 0x2,
		}; // enum class pet_ground_type_t : uint32_t

		enum class particle_vrhand_choice_list_t : uint32_t
		{
			particle_vrhand_left = 0x0,
			particle_vrhand_right = 0x1,
			particle_vrhand_cp = 0x2,
			particle_vrhand_cp_object = 0x3,
		}; // enum class particle_vrhand_choice_list_t : uint32_t

		enum class pfunc_visualization_type_t : uint32_t
		{
			pfunc_visualization_sphere_wireframe = 0x0,
			pfunc_visualization_sphere_solid = 0x1,
			pfunc_visualization_box = 0x2,
			pfunc_visualization_ring = 0x3,
			pfunc_visualization_plane = 0x4,
			pfunc_visualization_line = 0x5,
			pfunc_visualization_cylinder = 0x6,
		}; // enum class pfunc_visualization_type_t : uint32_t

		enum class particle_trace_miss_behavior_t : uint32_t
		{
			particle_trace_miss_behavior_none = 0x0,
			particle_trace_miss_behavior_kill = 0x1,
			particle_trace_miss_behavior_trace_end = 0x2,
		}; // enum class particle_trace_miss_behavior_t : uint32_t

		enum class particle_float_bias_type_t : uint32_t
		{
			pf_bias_type_invalid = 0xffffffff,
			pf_bias_type_standard = 0x0,
			pf_bias_type_gain = 0x1,
			pf_bias_type_exponential = 0x2,
			pf_bias_type_count = 0x3,
		}; // enum class particle_float_bias_type_t : uint32_t

		enum class missing_parent_inherit_behavior_t : uint32_t
		{
			missing_parent_do_nothing = 0xffffffff,
			missing_parent_kill = 0x0,
			missing_parent_find_new = 0x1,
			missing_parent_same_index = 0x2,
		}; // enum class missing_parent_inherit_behavior_t : uint32_t

		enum class detail2_combo_t : uint32_t
		{
			detail_2_combo_uninitialized = 0xffffffff,
			detail_2_combo_off = 0x0,
			detail_2_combo_add = 0x1,
			detail_2_combo_add_self_illum = 0x2,
			detail_2_combo_mod2x = 0x3,
			detail_2_combo_mul = 0x4,
			detail_2_combo_crossfade = 0x5,
		}; // enum class detail2_combo_t : uint32_t

		enum class particle_set_method_t : uint32_t
		{
			particle_set_replace_value = 0x0,
			particle_set_scale_initial_value = 0x1,
			particle_set_add_to_initial_value = 0x2,
			particle_set_ramp_current_value = 0x3,
			particle_set_scale_current_value = 0x4,
			particle_set_add_to_current_value = 0x5,
		}; // enum class particle_set_method_t : uint32_t

		enum class estyle_node_type : uint32_t
		{
			root = 0x0,
			expression = 0x1,
			property = 0x2,
			define = 0x3,
			import = 0x4,
			keyframes = 0x5,
			keyframe_selector = 0x6,
			style_selector = 0x7,
			whitespace = 0x8,
			expression_text = 0x9,
			expression_url = 0xa,
			expression_concat = 0xb,
			reference_content = 0xc,
			reference_compiled = 0xd,
			reference_passthrough = 0xe,
		}; // enum class estyle_node_type : uint32_t

		enum class elayout_node_type : uint32_t
		{
			root = 0x0,
			styles = 0x1,
			script_body = 0x2,
			scripts = 0x3,
			snippets = 0x4,
			include = 0x5,
			snippet = 0x6,
			panel = 0x7,
			panel_attribute = 0x8,
			panel_attribute_value = 0x9,
			reference_content = 0xa,
			reference_compiled = 0xb,
			reference_passthrough = 0xc,
		}; // enum class elayout_node_type : uint32_t

		enum class move_type_t : uint8_t
		{
			movetype_none = 0x0,
			movetype_obsolete = 0x1,
			movetype_walk = 0x2,
			movetype_step = 0x3,
			movetype_fly = 0x4,
			movetype_flygravity = 0x5,
			movetype_vphysics = 0x6,
			movetype_push = 0x7,
			movetype_noclip = 0x8,
			movetype_observer = 0x9,
			movetype_ladder = 0xa,
			movetype_custom = 0xb,
			movetype_last = 0xc,
			movetype_max_bits = 0x5,
		}; // enum class move_type_t : uint8_t

		enum class eoverride_block_los_t : uint32_t
		{
			block_los_default = 0x0,
			block_los_force_false = 0x1,
			block_los_force_true = 0x2,
		}; // enum class eoverride_block_los_t : uint32_t

		enum class func_door_spawn_pos_t : uint32_t
		{
			func_door_spawn_closed = 0x0,
			func_door_spawn_open = 0x1,
		}; // enum class func_door_spawn_pos_t : uint32_t

		enum class observer_mode_t : uint32_t
		{
			obs_mode_none = 0x0,
			obs_mode_fixed = 0x1,
			obs_mode_in_eye = 0x2,
			obs_mode_chase = 0x3,
			obs_mode_roaming = 0x4,
			obs_mode_directed = 0x5,
			num_observer_modes = 0x6,
		}; // enum class observer_mode_t : uint32_t

		enum class medal_rank_t : uint32_t
		{
			medal_rank_none = 0x0,
			medal_rank_bronze = 0x1,
			medal_rank_silver = 0x2,
			medal_rank_gold = 0x3,
			medal_rank_count = 0x4,
		}; // enum class medal_rank_t : uint32_t

		enum class can_play_sequence_t : uint32_t
		{
			cannot_play = 0x0,
			can_play_now = 0x1,
			can_play_enqueued = 0x2,
		}; // enum class can_play_sequence_t : uint32_t

		enum class disposition_t : uint32_t
		{
			d_er = 0x0,
			d_ht = 0x1,
			d_fr = 0x2,
			d_li = 0x3,
			d_nu = 0x4,
			d_error = 0x0,
			d_hate = 0x1,
			d_fear = 0x2,
			d_like = 0x3,
			d_neutral = 0x4,
		}; // enum class disposition_t : uint32_t

		enum class value_remapper_haptics_type_t : uint32_t
		{
			hatics_type_default = 0x0,
			hatics_type_none = 0x1,
		}; // enum class value_remapper_haptics_type_t : uint32_t

		enum class take_damage_flags_t : uint32_t
		{
			dflag_none = 0x0,
			dflag_suppress_health_changes = 0x1,
			dflag_suppress_physics_force = 0x2,
			dflag_suppress_effects = 0x4,
			dflag_prevent_death = 0x8,
			dflag_force_death = 0x10,
			dflag_always_gib = 0x20,
			dflag_never_gib = 0x40,
			dflag_remove_no_ragdoll = 0x80,
			dflag_suppress_damage_modification = 0x100,
			dflag_always_fire_damage_events = 0x200,
			dflag_radius_dmg = 0x400,
			dmg_lastdflag = 0x400,
			dflag_ignore_armor = 0x800,
			dflag_suppress_utilremove = 0x1000,
		}; // enum class take_damage_flags_t : uint32_t

		enum class weapon_sound_t : uint32_t
		{
			weapon_sound_empty = 0x0,
			weapon_sound_secondary_empty = 0x1,
			weapon_sound_single = 0x2,
			weapon_sound_secondary_attack = 0x3,
			weapon_sound_reload = 0x4,
			weapon_sound_melee_miss = 0x5,
			weapon_sound_melee_hit = 0x6,
			weapon_sound_melee_hit_world = 0x7,
			weapon_sound_melee_hit_player = 0x8,
			weapon_sound_melee_hit_npc = 0x9,
			weapon_sound_special1 = 0xa,
			weapon_sound_special2 = 0xb,
			weapon_sound_special3 = 0xc,
			weapon_sound_nearlyempty = 0xd,
			weapon_sound_impact = 0xe,
			weapon_sound_reflect = 0xf,
			weapon_sound_secondary_impact = 0x10,
			weapon_sound_secondary_reflect = 0x11,
			weapon_sound_single_accurate = 0x12,
			weapon_sound_zoom_in = 0x13,
			weapon_sound_zoom_out = 0x14,
			weapon_sound_mouse_pressed = 0x15,
			weapon_sound_drop = 0x16,
			weapon_sound_radio_use = 0x17,
			weapon_sound_num_types = 0x18,
		}; // enum class weapon_sound_t : uint32_t

		enum class ekill_types_t : uint8_t
		{
			kill_none = 0x0,
			kill_default = 0x1,
			kill_headshot = 0x2,
			kill_blast = 0x3,
			kill_burn = 0x4,
			kill_slash = 0x5,
			kill_shock = 0x6,
			killtype_count = 0x7,
		}; // enum class ekill_types_t : uint8_t

		enum class value_remapper_input_type_t : uint32_t
		{
			input_type_player_shoot_position = 0x0,
			input_type_player_shoot_position_around_axis = 0x1,
		}; // enum class value_remapper_input_type_t : uint32_t

		enum class grenade_type_t : uint32_t
		{
			grenade_type_explosive = 0x0,
			grenade_type_flash = 0x1,
			grenade_type_fire = 0x2,
			grenade_type_decoy = 0x3,
			grenade_type_smoke = 0x4,
			grenade_type_sensor = 0x5,
			grenade_type_snowball = 0x6,
			grenade_type_total = 0x7,
		}; // enum class grenade_type_t : uint32_t

		enum class shadow_type_t : uint32_t
		{
			shadows_none = 0x0,
			shadows_simple = 0x1,
		}; // enum class shadow_type_t : uint32_t

		enum class modify_damage_return_t : uint32_t
		{
			continue_to_apply_damage = 0x0,
			abort_do_not_apply_damage = 0x1,
		}; // enum class modify_damage_return_t : uint32_t

		enum class quest_progress__reason : uint32_t
		{
			quest_noninitialized = 0x0,
			quest_ok = 0x1,
			quest_not_enough_players = 0x2,
			quest_warmup = 0x3,
			quest_not_connected_to_steam = 0x4,
			quest_nonofficial_server = 0x5,
			quest_no_entitlement = 0x6,
			quest_no_quest = 0x7,
			quest_player_is_bot = 0x8,
			quest_wrong_map = 0x9,
			quest_wrong_mode = 0xa,
			quest_not_synced_with_server = 0xb,
			quest_reason_max = 0xc,
		}; // enum class quest_progress__reason : uint32_t

		enum class brush_solidities_e : uint32_t
		{
			brushsolid_toggle = 0x0,
			brushsolid_never = 0x1,
			brushsolid_always = 0x2,
		}; // enum class brush_solidities_e : uint32_t

		enum class train_code : uint32_t
		{
			train_safe = 0x0,
			train_blocking = 0x1,
			train_following = 0x2,
		}; // enum class train_code : uint32_t

		enum class shake_command_t : uint32_t
		{
			shake_start = 0x0,
			shake_stop = 0x1,
			shake_amplitude = 0x2,
			shake_frequency = 0x3,
			shake_start_rumbleonly = 0x4,
			shake_start_norumble = 0x5,
		}; // enum class shake_command_t : uint32_t

		enum class point_world_text_justify_horizontal_t : uint32_t
		{
			point_world_text_justify_horizontal_left = 0x0,
			point_world_text_justify_horizontal_center = 0x1,
			point_world_text_justify_horizontal_right = 0x2,
		}; // enum class point_world_text_justify_horizontal_t : uint32_t

		enum class point_template_owner_spawn_group_type_t : uint32_t
		{
			insert_into_point_template_spawn_group = 0x0,
			insert_into_currently_active_spawn_group = 0x1,
			insert_into_newly_created_spawn_group = 0x2,
		}; // enum class point_template_owner_spawn_group_type_t : uint32_t

		enum class value_remapper_output_type_t : uint32_t
		{
			output_type_animation_cycle = 0x0,
			output_type_rotation_x = 0x1,
			output_type_rotation_y = 0x2,
			output_type_rotation_z = 0x3,
		}; // enum class value_remapper_output_type_t : uint32_t

		enum class ichoreo_services__choreo_state_t : uint32_t
		{
			state_pre_script = 0x0,
			state_wait_for_script = 0x1,
			state_walk_to_mark = 0x2,
			state_synchronize_script = 0x3,
			state_play_script = 0x4,
			state_play_script_post_idle = 0x5,
			state_play_script_post_idle_done = 0x6,
		}; // enum class ichoreo_services__choreo_state_t : uint32_t

		enum class move_collide_t : uint8_t
		{
			movecollide_default = 0x0,
			movecollide_fly_bounce = 0x1,
			movecollide_fly_custom = 0x2,
			movecollide_fly_slide = 0x3,
			movecollide_count = 0x4,
			movecollide_max_bits = 0x3,
		}; // enum class move_collide_t : uint8_t

		enum class attributeprovidertypes_t : uint32_t
		{
			provider_generic = 0x0,
			provider_weapon = 0x1,
		}; // enum class attributeprovidertypes_t : uint32_t

		enum class point_world_text_justify_vertical_t : uint32_t
		{
			point_world_text_justify_vertical_bottom = 0x0,
			point_world_text_justify_vertical_center = 0x1,
			point_world_text_justify_vertical_top = 0x2,
		}; // enum class point_world_text_justify_vertical_t : uint32_t

		enum class damage_types_t : uint32_t
		{
			dmg_generic = 0x0,
			dmg_crush = 0x1,
			dmg_bullet = 0x2,
			dmg_slash = 0x4,
			dmg_burn = 0x8,
			dmg_vehicle = 0x10,
			dmg_fall = 0x20,
			dmg_blast = 0x40,
			dmg_club = 0x80,
			dmg_shock = 0x100,
			dmg_sonic = 0x200,
			dmg_energybeam = 0x400,
			dmg_drown = 0x4000,
			dmg_poison = 0x8000,
			dmg_radiation = 0x10000,
			dmg_drownrecover = 0x20000,
			dmg_acid = 0x40000,
			dmg_physgun = 0x100000,
			dmg_dissolve = 0x200000,
			dmg_blast_surface = 0x400000,
			dmg_buckshot = 0x1000000,
			dmg_lastgenericflag = 0x1000000,
			dmg_headshot = 0x2000000,
			dmg_dangerzone = 0x4000000,
		}; // enum class damage_types_t : uint32_t

		enum class solid_type_t : uint8_t
		{
			solid_none = 0x0,
			solid_bsp = 0x1,
			solid_bbox = 0x2,
			solid_obb = 0x3,
			solid_sphere = 0x4,
			solid_point = 0x5,
			solid_vphysics = 0x6,
			solid_capsule = 0x7,
			solid_last = 0x8,
		}; // enum class solid_type_t : uint8_t

		enum class navproperties_t : uint32_t
		{
			nav_ignore = 0x1,
		}; // enum class navproperties_t : uint32_t

		enum class simple_constraint_sound_profile__simple_constraints_sound_profile_keypoints_t : uint32_t
		{
			k_min_threshold = 0x0,
			k_min_full = 0x1,
			k_highwater = 0x2,
		}; // enum class simple_constraint_sound_profile__simple_constraints_sound_profile_keypoints_t : uint32_t

		enum class player_connected_state : uint32_t
		{
			player_never_connected = 0xffffffff,
			player_connected = 0x0,
			player_connecting = 0x1,
			player_reconnecting = 0x2,
			player_disconnecting = 0x3,
			player_disconnected = 0x4,
			player_reserved = 0x5,
		}; // enum class player_connected_state : uint32_t

		enum class chat_ignore_type_t : uint32_t
		{
			chat_ignore_none = 0x0,
			chat_ignore_all = 0x1,
			chat_ignore_team = 0x2,
		}; // enum class chat_ignore_type_t : uint32_t

		enum class door_state_t : uint32_t
		{
			door_state_closed = 0x0,
			door_state_opening = 0x1,
			door_state_open = 0x2,
			door_state_closing = 0x3,
			door_state_ajar = 0x4,
		}; // enum class door_state_t : uint32_t

		enum class latch_dirty_permission_t : uint32_t
		{
			latch_dirty_disallow = 0x0,
			latch_dirty_server_controlled = 0x1,
			latch_dirty_client_simulated = 0x2,
			latch_dirty_prediction = 0x3,
			latch_dirty_framesimulate = 0x4,
			latch_dirty_particle_simulate = 0x5,
		}; // enum class latch_dirty_permission_t : uint32_t

		enum class rumble_effect_t : uint32_t
		{
			rumble_invalid = 0xffffffff,
			rumble_stop_all = 0x0,
			rumble_pistol = 0x1,
			rumble_357 = 0x2,
			rumble_smg1 = 0x3,
			rumble_ar2 = 0x4,
			rumble_shotgun_single = 0x5,
			rumble_shotgun_double = 0x6,
			rumble_ar2_alt_fire = 0x7,
			rumble_rpg_missile = 0x8,
			rumble_crowbar_swing = 0x9,
			rumble_airboat_gun = 0xa,
			rumble_jeep_engine_loop = 0xb,
			rumble_flat_left = 0xc,
			rumble_flat_right = 0xd,
			rumble_flat_both = 0xe,
			rumble_dmg_low = 0xf,
			rumble_dmg_med = 0x10,
			rumble_dmg_high = 0x11,
			rumble_fall_long = 0x12,
			rumble_fall_short = 0x13,
			rumble_physcannon_open = 0x14,
			rumble_physcannon_punt = 0x15,
			rumble_physcannon_low = 0x16,
			rumble_physcannon_medium = 0x17,
			rumble_physcannon_high = 0x18,
			num_rumble_effects = 0x19,
		}; // enum class rumble_effect_t : uint32_t

		enum class vote_create_failed_t : uint32_t
		{
			vote_failed_generic = 0x0,
			vote_failed_transitioning_players = 0x1,
			vote_failed_rate_exceeded = 0x2,
			vote_failed_yes_must_exceed_no = 0x3,
			vote_failed_quorum_failure = 0x4,
			vote_failed_issue_disabled = 0x5,
			vote_failed_map_not_found = 0x6,
			vote_failed_map_name_required = 0x7,
			vote_failed_failed_recently = 0x8,
			vote_failed_team_cant_call = 0x9,
			vote_failed_waitingforplayers = 0xa,
			vote_failed_playernotfound = 0xb,
			vote_failed_cannot_kick_admin = 0xc,
			vote_failed_scramble_in_progress = 0xd,
			vote_failed_spectator = 0xe,
			vote_failed_failed_recent_kick = 0xf,
			vote_failed_failed_recent_changemap = 0x10,
			vote_failed_failed_recent_swapteams = 0x11,
			vote_failed_failed_recent_scrambleteams = 0x12,
			vote_failed_failed_recent_restart = 0x13,
			vote_failed_swap_in_progress = 0x14,
			vote_failed_disabled = 0x15,
			vote_failed_nextlevel_set = 0x16,
			vote_failed_too_early_surrender = 0x17,
			vote_failed_match_paused = 0x18,
			vote_failed_match_not_paused = 0x19,
			vote_failed_not_in_warmup = 0x1a,
			vote_failed_not_10_players = 0x1b,
			vote_failed_timeout_active = 0x1c,
			vote_failed_timeout_inactive = 0x1d,
			vote_failed_timeout_exhausted = 0x1e,
			vote_failed_cant_round_end = 0x1f,
			vote_failed_rematch = 0x20,
			vote_failed_continue = 0x21,
			vote_failed_max = 0x22,
		}; // enum class vote_create_failed_t : uint32_t

		enum class render_fx_t : uint8_t
		{
			k_render_fx_none = 0x0,
			k_render_fx_pulse_slow = 0x1,
			k_render_fx_pulse_fast = 0x2,
			k_render_fx_pulse_slow_wide = 0x3,
			k_render_fx_pulse_fast_wide = 0x4,
			k_render_fx_fade_slow = 0x5,
			k_render_fx_fade_fast = 0x6,
			k_render_fx_solid_slow = 0x7,
			k_render_fx_solid_fast = 0x8,
			k_render_fx_strobe_slow = 0x9,
			k_render_fx_strobe_fast = 0xa,
			k_render_fx_strobe_faster = 0xb,
			k_render_fx_flicker_slow = 0xc,
			k_render_fx_flicker_fast = 0xd,
			k_render_fx_no_dissipation = 0xe,
			k_render_fx_fade_out = 0xf,
			k_render_fx_fade_in = 0x10,
			k_render_fx_pulse_fast_wider = 0x11,
			k_render_fx_glow_shell = 0x12,
			k_render_fx_max = 0x13,
		}; // enum class render_fx_t : uint8_t

		enum class move_mounting_amount_t : uint32_t
		{
			move_mount_none = 0x0,
			move_mount_low = 0x1,
			move_mount_high = 0x2,
			move_mount_maxcount = 0x3,
		}; // enum class move_mounting_amount_t : uint32_t

		enum class crr_response__response_enum_t : uint32_t
		{
			max_response_name = 0xc0,
			max_rule_name = 0x80,
		}; // enum class crr_response__response_enum_t : uint32_t

		enum class nav_dir_type : uint32_t
		{
			north = 0x0,
			east = 0x1,
			south = 0x2,
			west = 0x3,
			num_nav_dir_type_directions = 0x4,
		}; // enum class nav_dir_type : uint32_t

		enum class value_remapper_ratchet_type_t : uint32_t
		{
			ratchet_type_absolute = 0x0,
			ratchet_type_each_engage = 0x1,
		}; // enum class value_remapper_ratchet_type_t : uint32_t

		enum class track_orientation_type_t : uint32_t
		{
			track_orientation_fixed = 0x0,
			track_orientation_face_path = 0x1,
			track_orientation_face_path_angles = 0x2,
		}; // enum class track_orientation_type_t : uint32_t

		enum class shatter_glass_stress_type : uint8_t
		{
			shatterglass_blunt = 0x0,
			shatterglass_ballistic = 0x1,
			shatterglass_pulse = 0x2,
			shatterdrywall_chunks = 0x3,
			shatterglass_explosive = 0x4,
		}; // enum class shatter_glass_stress_type : uint8_t

		enum class point_template_client_only_entity_behavior_t : uint32_t
		{
			create_for_currently_connected_clients_only = 0x0,
			create_for_clients_who_connect_later = 0x1,
		}; // enum class point_template_client_only_entity_behavior_t : uint32_t

		enum class entity_subclass_scope_t : uint32_t
		{
			subclass_scope_none = 0xffffffff,
			subclass_scope_precipitation = 0x0,
			subclass_scope_player_weapons = 0x1,
			subclass_scope_count = 0x2,
		}; // enum class entity_subclass_scope_t : uint32_t

		enum class beam_type_t : uint32_t
		{
			beam_invalid = 0x0,
			beam_points = 0x1,
			beam_entpoint = 0x2,
			beam_ents = 0x3,
			beam_hose = 0x4,
			beam_spline = 0x5,
			beam_laser = 0x6,
		}; // enum class beam_type_t : uint32_t

		enum class door_check_e : uint32_t
		{
			door_check_forward = 0x0,
			door_check_backward = 0x1,
			door_check_full = 0x2,
		}; // enum class door_check_e : uint32_t

		enum class hierarchy_type_t : uint32_t
		{
			hierarchy_none = 0x0,
			hierarchy_bone_merge = 0x1,
			hierarchy_attachment = 0x2,
			hierarchy_absorigin = 0x3,
			hierarchy_bone = 0x4,
			hierarchy_type_count = 0x5,
		}; // enum class hierarchy_type_t : uint32_t

		enum class ammo_flags_t : uint32_t
		{
			ammo_force_drop_if_carried = 0x1,
			ammo_reserve_stays_with_weapon = 0x2,
			ammo_flag_max = 0x2,
		}; // enum class ammo_flags_t : uint32_t

		enum class debug_overlay_bits_t : uint64_t
		{
			overlay_text_bit = 0x1,
			overlay_name_bit = 0x2,
			overlay_bbox_bit = 0x4,
			overlay_pivot_bit = 0x8,
			overlay_message_bit = 0x10,
			overlay_absbox_bit = 0x20,
			overlay_rbox_bit = 0x40,
			overlay_show_blockslos = 0x80,
			overlay_attachments_bit = 0x100,
			overlay_interpolated_attachments_bit = 0x200,
			overlay_interpolated_pivot_bit = 0x400,
			overlay_skeleton_bit = 0x800,
			overlay_interpolated_skeleton_bit = 0x1000,
			overlay_trigger_bounds_bit = 0x2000,
			overlay_hitbox_bit = 0x4000,
			overlay_interpolated_hitbox_bit = 0x8000,
			overlay_autoaim_bit = 0x10000,
			overlay_npc_selected_bit = 0x20000,
			overlay_joint_info_bit = 0x40000,
			overlay_npc_route_bit = 0x80000,
			overlay_npc_triangulate_bit = 0x100000,
			overlay_npc_zap_bit = 0x200000,
			overlay_npc_enemies_bit = 0x400000,
			overlay_npc_conditions_bit = 0x800000,
			overlay_npc_combat_bit = 0x1000000,
			overlay_npc_task_bit = 0x2000000,
			overlay_npc_bodylocations = 0x4000000,
			overlay_npc_viewcone_bit = 0x8000000,
			overlay_npc_kill_bit = 0x10000000,
			overlay_wc_change_entity = 0x20000000,
			overlay_buddha_mode = 0x40000000,
			overlay_npc_steering_regulations = 0x80000000,
			overlay_npc_task_text_bit = 0x100000000,
			overlay_prop_debug = 0x200000000,
			overlay_npc_relation_bit = 0x400000000,
			overlay_viewoffset = 0x800000000,
			overlay_vcollide_wireframe_bit = 0x1000000000,
			overlay_npc_nearest_node_bit = 0x2000000000,
			overlay_actorname_bit = 0x4000000000,
			overlay_npc_conditions_text_bit = 0x8000000000,
		}; // enum class debug_overlay_bits_t : uint64_t

		enum class point_world_text_reorient_mode_t : uint32_t
		{
			point_world_text_reorient_none = 0x0,
			point_world_text_reorient_around_up = 0x1,
		}; // enum class point_world_text_reorient_mode_t : uint32_t

		enum class chicken_activity : uint32_t
		{
			idle = 0x0,
			walk = 0x1,
			run = 0x2,
			hop = 0x3,
			jump = 0x4,
			glide = 0x5,
			land = 0x6,
		}; // enum class chicken_activity : uint32_t

		enum class hit_group_t : uint32_t
		{
			hitgroup_invalid = 0xffffffff,
			hitgroup_generic = 0x0,
			hitgroup_head = 0x1,
			hitgroup_chest = 0x2,
			hitgroup_stomach = 0x3,
			hitgroup_leftarm = 0x4,
			hitgroup_rightarm = 0x5,
			hitgroup_leftleg = 0x6,
			hitgroup_rightleg = 0x7,
			hitgroup_neck = 0x8,
			hitgroup_unused = 0x9,
			hitgroup_gear = 0xa,
			hitgroup_special = 0xb,
			hitgroup_count = 0xc,
		}; // enum class hit_group_t : uint32_t

		enum input_bit_mask_t : uint64_t
		{
			in_none = 0x0,
			in_all = 0xffffffffffffffff,
			in_attack = 0x1,
			in_jump = 0x2,
			in_duck = 0x4,
			in_forward = 0x8,
			in_back = 0x10,
			in_use = 0x20,
			in_turnleft = 0x80,
			in_turnright = 0x100,
			in_moveleft = 0x200,
			in_moveright = 0x400,
			in_attack2 = 0x800,
			in_reload = 0x2000,
			in_speed = 0x10000,
			in_joyautosprint = 0x20000,
			in_first_mod_specific_bit = 0x100000000,
			in_useorreload = 0x100000000,
			in_score = 0x200000000,
			in_zoom = 0x400000000,
			in_look_at_weapon = 0x800000000,
		}; // enum class input_bit_mask_t : uint64_t

		enum class entity_disolve_type_t : uint32_t
		{
			entity_dissolve_invalid = 0xffffffff,
			entity_dissolve_normal = 0x0,
			entity_dissolve_electrical = 0x1,
			entity_dissolve_electrical_light = 0x2,
			entity_dissolve_core = 0x3,
		}; // enum class entity_disolve_type_t : uint32_t

		enum class ammo_position_t : uint32_t
		{
			ammo_position_invalid = 0xffffffff,
			ammo_position_primary = 0x0,
			ammo_position_secondary = 0x1,
			ammo_position_count = 0x2,
		}; // enum class ammo_position_t : uint32_t

		enum class world_text_panel_vertical_align_t : uint32_t
		{
			worldtext_vertical_align_top = 0x0,
			worldtext_vertical_align_center = 0x1,
			worldtext_vertical_align_bottom = 0x2,
		}; // enum class world_text_panel_vertical_align_t : uint32_t

		enum class water_level_t : uint8_t
		{
			wl_not_in_water = 0x0,
			wl_feet = 0x1,
			wl_knees = 0x2,
			wl_waist = 0x3,
			wl_chest = 0x4,
			wl_fully_underwater = 0x5,
			wl_count = 0x6,
		}; // enum class water_level_t : uint8_t

		enum class scripted_conflict_response_t : uint32_t
		{
			ss_conflict_enqueue = 0x0,
			ss_conflict_interrupt = 0x1,
		}; // enum class scripted_conflict_response_t : uint32_t

		enum class csplayer_state : uint32_t
		{
			state_active = 0x0,
			state_welcome = 0x1,
			state_pickingteam = 0x2,
			state_pickingclass = 0x3,
			state_death_anim = 0x4,
			state_death_wait_for_key = 0x5,
			state_observer_mode = 0x6,
			state_gungame_respawn = 0x7,
			state_dormant = 0x8,
			num_player_states = 0x9,
		}; // enum class csplayer_state : uint32_t

		enum class gear_slot_t : uint32_t
		{
			gear_slot_invalid = 0xffffffff,
			gear_slot_rifle = 0x0,
			gear_slot_pistol = 0x1,
			gear_slot_knife = 0x2,
			gear_slot_grenades = 0x3,
			gear_slot_c4 = 0x4,
			gear_slot_reserved_slot6 = 0x5,
			gear_slot_reserved_slot7 = 0x6,
			gear_slot_reserved_slot8 = 0x7,
			gear_slot_reserved_slot9 = 0x8,
			gear_slot_reserved_slot10 = 0x9,
			gear_slot_reserved_slot11 = 0xa,
			gear_slot_boosts = 0xb,
			gear_slot_utility = 0xc,
			gear_slot_count = 0xd,
			gear_slot_first = 0x0,
			gear_slot_last = 0xc,
		}; // enum class gear_slot_t : uint32_t

		enum class scripted_move_type_t : uint32_t
		{
			scripted_movetype_none = 0x0,
			scripted_movetype_to_with_duration = 0x1,
			scripted_movetype_to_with_movespeed = 0x2,
			scripted_movetype_sweep_to_at_movement_speed = 0x3,
		}; // enum class scripted_move_type_t : uint32_t

		enum class scripted_on_death_t : uint32_t
		{
			ss_ondeath_not_applicable = 0xffffffff,
			ss_ondeath_undefined = 0x0,
			ss_ondeath_ragdoll = 0x1,
			ss_ondeath_animated_death = 0x2,
		}; // enum class scripted_on_death_t : uint32_t

		enum class shatter_damage_cause : uint8_t
		{
			shatterdamage_bullet = 0x0,
			shatterdamage_melee = 0x1,
			shatterdamage_thrown = 0x2,
			shatterdamage_script = 0x3,
			shatterdamage_explosive = 0x4,
		}; // enum class shatter_damage_cause : uint8_t

		enum class command_exec_mode_t : uint32_t
		{
			exec_manual = 0x0,
			exec_levelstart = 0x1,
			exec_periodic = 0x2,
			exec_modes_count = 0x3,
		}; // enum class command_exec_mode_t : uint32_t

		enum class csweapon_state_t : uint32_t
		{
			weapon_not_carried = 0x0,
			weapon_is_carried_by_player = 0x1,
			weapon_is_active = 0x2,
		}; // enum class csweapon_state_t : uint32_t

		enum class csplayer_blocking_use_action_t : uint32_t
		{
			k_csplayer_blocking_use_action_none = 0x0,
			k_csplayer_blocking_use_action_defusing_default = 0x1,
			k_csplayer_blocking_use_action_defusing_with_kit = 0x2,
			k_csplayer_blocking_use_action_hostage_grabbing = 0x3,
			k_csplayer_blocking_use_action_hostage_dropping = 0x4,
			k_csplayer_blocking_use_action_opening_safe = 0x5,
			k_csplayer_blocking_use_action_equipping_parachute = 0x6,
			k_csplayer_blocking_use_action_equipping_heavy_armor = 0x7,
			k_csplayer_blocking_use_action_equipping_contract = 0x8,
			k_csplayer_blocking_use_action_equipping_tablet_upgrade = 0x9,
			k_csplayer_blocking_use_action_taking_off_heavy_armor = 0xa,
			k_csplayer_blocking_use_action_paying_to_open_door = 0xb,
			k_csplayer_blocking_use_action_canceling_spawn_rappelling = 0xc,
			k_csplayer_blocking_use_action_equipping_exo_jump = 0xd,
			k_csplayer_blocking_use_action_picking_up_bump_mine = 0xe,
			k_csplayer_blocking_use_action_map_long_use_entity_pickup = 0xf,
			k_csplayer_blocking_use_action_map_long_use_entity_place = 0x10,
			k_csplayer_blocking_use_action_max_count = 0x11,
		}; // enum class csplayer_blocking_use_action_t : uint32_t

		enum class weapon_attack_type_t : uint32_t
		{
			e_invalid = 0xffffffff,
			e_primary = 0x0,
			e_secondary = 0x1,
			e_count = 0x2,
		}; // enum class weapon_attack_type_t : uint32_t

		enum class beam_clip_style_t : uint32_t
		{
			k_noclip = 0x0,
			k_geoclip = 0x1,
			k_modelclip = 0x2,
			k_beamclipstyle_numbits = 0x2,
		}; // enum class beam_clip_style_t : uint32_t

		enum class ein_button_state : uint32_t
		{
			in_button_up = 0x0,
			in_button_down = 0x1,
			in_button_down_up = 0x2,
			in_button_up_down = 0x3,
			in_button_up_down_up = 0x4,
			in_button_down_up_down = 0x5,
			in_button_down_up_down_up = 0x6,
			in_button_up_down_up_down = 0x7,
			in_button_state_count = 0x8,
		}; // enum class ein_button_state : uint32_t

		enum class hull_t : uint32_t
		{
			hull_human = 0x0,
			hull_small_centered = 0x1,
			hull_wide_human = 0x2,
			hull_tiny = 0x3,
			hull_medium = 0x4,
			hull_tiny_centered = 0x5,
			hull_large = 0x6,
			hull_large_centered = 0x7,
			hull_medium_tall = 0x8,
			hull_small = 0x9,
			num_hulls = 0xa,
			hull_none = 0xb,
		}; // enum class hull_t : uint32_t

		enum class value_remapper_momentum_type_t : uint32_t
		{
			momentum_type_none = 0x0,
			momentum_type_friction = 0x1,
			momentum_type_spring_toward_snap_value = 0x2,
			momentum_type_spring_away_from_snap_value = 0x3,
		}; // enum class value_remapper_momentum_type_t : uint32_t

		enum class move_linear_authored_pos_t : uint32_t
		{
			movelinear_authored_at_start_position = 0x0,
			movelinear_authored_at_open_position = 0x1,
			movelinear_authored_at_closed_position = 0x2,
		}; // enum class move_linear_authored_pos_t : uint32_t

		enum class nav_attribute_enum : uint32_t
		{
			nav_mesh_avoid = 0x80,
			nav_mesh_stairs = 0x1000,
			nav_mesh_non_zup = 0x8000,
			nav_mesh_short_height = 0x10000,
			nav_mesh_crouch = 0x10000,
			nav_mesh_jump = 0x2,
			nav_mesh_precise = 0x4,
			nav_mesh_no_jump = 0x8,
			nav_mesh_stop = 0x10,
			nav_mesh_run = 0x20,
			nav_mesh_walk = 0x40,
			nav_mesh_transient = 0x100,
			nav_mesh_dont_hide = 0x200,
			nav_mesh_stand = 0x400,
			nav_mesh_no_hostages = 0x800,
			nav_mesh_no_merge = 0x2000,
			nav_mesh_obstacle_top = 0x4000,
			nav_attr_first_game_index = 0x13,
			nav_attr_last_index = 0x1f,
		}; // enum class nav_attribute_enum : uint32_t

		enum class loadout_slot_t : uint32_t
		{
			loadout_slot_invalid = 0xffffffff,
			loadout_slot_melee = 0x0,
			loadout_slot_c4 = 0x1,
			loadout_slot_first_auto_buy_weapon = 0x0,
			loadout_slot_last_auto_buy_weapon = 0x1,
			loadout_slot_secondary0 = 0x2,
			loadout_slot_secondary1 = 0x3,
			loadout_slot_secondary2 = 0x4,
			loadout_slot_secondary3 = 0x5,
			loadout_slot_secondary4 = 0x6,
			loadout_slot_secondary5 = 0x7,
			loadout_slot_smg0 = 0x8,
			loadout_slot_smg1 = 0x9,
			loadout_slot_smg2 = 0xa,
			loadout_slot_smg3 = 0xb,
			loadout_slot_smg4 = 0xc,
			loadout_slot_smg5 = 0xd,
			loadout_slot_rifle0 = 0xe,
			loadout_slot_rifle1 = 0xf,
			loadout_slot_rifle2 = 0x10,
			loadout_slot_rifle3 = 0x11,
			loadout_slot_rifle4 = 0x12,
			loadout_slot_rifle5 = 0x13,
			loadout_slot_heavy0 = 0x14,
			loadout_slot_heavy1 = 0x15,
			loadout_slot_heavy2 = 0x16,
			loadout_slot_heavy3 = 0x17,
			loadout_slot_heavy4 = 0x18,
			loadout_slot_heavy5 = 0x19,
			loadout_slot_first_wheel_weapon = 0x2,
			loadout_slot_last_wheel_weapon = 0x19,
			loadout_slot_first_primary_weapon = 0x8,
			loadout_slot_last_primary_weapon = 0x19,
			loadout_slot_first_wheel_grenade = 0x1a,
			loadout_slot_grenade0 = 0x1a,
			loadout_slot_grenade1 = 0x1b,
			loadout_slot_grenade2 = 0x1c,
			loadout_slot_grenade3 = 0x1d,
			loadout_slot_grenade4 = 0x1e,
			loadout_slot_grenade5 = 0x1f,
			loadout_slot_last_wheel_grenade = 0x1f,
			loadout_slot_equipment0 = 0x20,
			loadout_slot_equipment1 = 0x21,
			loadout_slot_equipment2 = 0x22,
			loadout_slot_equipment3 = 0x23,
			loadout_slot_equipment4 = 0x24,
			loadout_slot_equipment5 = 0x25,
			loadout_slot_first_wheel_equipment = 0x20,
			loadout_slot_last_wheel_equipment = 0x25,
			loadout_slot_clothing_customplayer = 0x26,
			loadout_slot_pet = 0x27,
			loadout_slot_clothing_facemask = 0x28,
			loadout_slot_clothing_hands = 0x29,
			loadout_slot_first_cosmetic = 0x29,
			loadout_slot_last_cosmetic = 0x29,
			loadout_slot_clothing_eyewear = 0x2a,
			loadout_slot_clothing_hat = 0x2b,
			loadout_slot_clothing_lowerbody = 0x2c,
			loadout_slot_clothing_torso = 0x2d,
			loadout_slot_clothing_appearance = 0x2e,
			loadout_slot_misc0 = 0x2f,
			loadout_slot_misc1 = 0x30,
			loadout_slot_misc2 = 0x31,
			loadout_slot_misc3 = 0x32,
			loadout_slot_misc4 = 0x33,
			loadout_slot_misc5 = 0x34,
			loadout_slot_misc6 = 0x35,
			loadout_slot_musickit = 0x36,
			loadout_slot_flair0 = 0x37,
			loadout_slot_spray0 = 0x38,
			loadout_slot_first_all_character = 0x36,
			loadout_slot_last_all_character = 0x38,
			loadout_slot_count = 0x39,
		}; // enum class loadout_slot_t : uint32_t

		enum class toggle_state : uint32_t
		{
			ts_at_top = 0x0,
			ts_at_bottom = 0x1,
			ts_going_up = 0x2,
			ts_going_down = 0x3,
			door_open = 0x0,
			door_closed = 0x1,
			door_opening = 0x2,
			door_closing = 0x3,
		}; // enum class toggle_state : uint32_t

		enum class performance_mode_t : uint32_t
		{
			pm_normal = 0x0,
			pm_no_gibs = 0x1,
			pm_full_gibs = 0x2,
			pm_reduced_gibs = 0x3,
		}; // enum class performance_mode_t : uint32_t

		enum class forced_crouch_state_t : uint32_t
		{
			forcedcrouch_none = 0x0,
			forcedcrouch_crouched = 0x1,
			forcedcrouch_uncrouched = 0x2,
		}; // enum class forced_crouch_state_t : uint32_t

		enum class render_mode_t : uint8_t
		{
			k_render_normal = 0x0,
			k_render_trans_color = 0x1,
			k_render_trans_texture = 0x2,
			k_render_glow = 0x3,
			k_render_trans_alpha = 0x4,
			k_render_trans_add = 0x5,
			k_render_environmental = 0x6,
			k_render_trans_add_frame_blend = 0x7,
			k_render_trans_alpha_add = 0x8,
			k_render_world_glow = 0x9,
			k_render_none = 0xa,
			k_render_dev_visualizer = 0xb,
			k_render_mode_count = 0xc,
		}; // enum class render_mode_t : uint8_t

		enum class shard_solid_t : uint8_t
		{
			shard_solid = 0x0,
			shard_debris = 0x1,
		}; // enum class shard_solid_t : uint8_t

		enum class prop_door_rotating_spawn_pos_t : uint32_t
		{
			door_spawn_closed = 0x0,
			door_spawn_open_forward = 0x1,
			door_spawn_open_back = 0x2,
			door_spawn_ajar = 0x3,
		}; // enum class prop_door_rotating_spawn_pos_t : uint32_t

		enum class ent_finder_method_t : uint32_t
		{
			ent_find_method_nearest = 0x0,
			ent_find_method_farthest = 0x1,
			ent_find_method_random = 0x2,
		}; // enum class ent_finder_method_t : uint32_t

		enum class csweapon_type : uint32_t
		{
			weapontype_knife = 0x0,
			weapontype_pistol = 0x1,
			weapontype_submachinegun = 0x2,
			weapontype_rifle = 0x3,
			weapontype_shotgun = 0x4,
			weapontype_sniper_rifle = 0x5,
			weapontype_machinegun = 0x6,
			weapontype_c4 = 0x7,
			weapontype_taser = 0x8,
			weapontype_grenade = 0x9,
			weapontype_equipment = 0xa,
			weapontype_stackableitem = 0xb,
			weapontype_fists = 0xc,
			weapontype_breachcharge = 0xd,
			weapontype_bumpmine = 0xe,
			weapontype_tablet = 0xf,
			weapontype_melee = 0x10,
			weapontype_shield = 0x11,
			weapontype_zone_repulsor = 0x12,
			weapontype_unknown = 0x13,
		}; // enum class csweapon_type : uint32_t

		enum class train_velocity_type_t : uint32_t
		{
			train_velocity_instantaneous = 0x0,
			train_velocity_linear_blend = 0x1,
			train_velocity_ease_in_ease_out = 0x2,
		}; // enum class train_velocity_type_t : uint32_t

		enum class touch_t : uint32_t
		{
			touch_none = 0x0,
			touch_player_only = 0x1,
			touch_npc_only = 0x2,
			touch_player_or_npc = 0x3,
			touch_player_or_npc_or_physicsprop = 0x4,
		}; // enum class touch_t : uint32_t

		enum class command_entity_spec_type_t : uint32_t
		{
			spec_search = 0x0,
			spec_types_count = 0x1,
		}; // enum class command_entity_spec_type_t : uint32_t

		enum class ichoreo_services__script_state_t : uint32_t
		{
			script_playing = 0x0,
			script_wait = 0x1,
			script_post_idle = 0x2,
			script_cleanup = 0x3,
			script_walk_to_mark = 0x4,
			script_run_to_mark = 0x5,
			script_custom_move_to_mark = 0x6,
		}; // enum class ichoreo_services__script_state_t : uint32_t

		enum class fix_angle_set_t : uint8_t
		{
			none = 0x0,
			absolute = 0x1,
			relative = 0x2,
		}; // enum class fix_angle_set_t : uint8_t

		enum class game_anim_event_index_t : uint32_t
		{
			ae_empty = 0x0,
			ae_cl_playsound = 0x1,
			ae_cl_playsound_attachment = 0x2,
			ae_cl_playsound_position = 0x3,
			ae_sv_playsound = 0x4,
			ae_cl_stopsound = 0x5,
			ae_cl_playsound_looping = 0x6,
			ae_cl_create_particle_effect = 0x7,
			ae_cl_stop_particle_effect = 0x8,
			ae_cl_create_particle_effect_cfg = 0x9,
			ae_sv_create_particle_effect_cfg = 0xa,
			ae_sv_stop_particle_effect = 0xb,
			ae_footstep = 0xc,
			ae_ragdoll = 0xd,
			ae_cl_stop_ragdoll_control = 0xe,
			ae_cl_enable_bodygroup = 0xf,
			ae_cl_disable_bodygroup = 0x10,
			ae_cl_bodygroup_set_value = 0x11,
			ae_sv_bodygroup_set_value = 0x12,
			ae_cl_bodygroup_set_value_cmodel_wpn = 0x13,
			ae_weapon_perform_attack = 0x14,
			ae_fire_input = 0x15,
			ae_cl_cloth_attr = 0x16,
			ae_cl_cloth_ground_offset = 0x17,
			ae_cl_cloth_stiffen = 0x18,
			ae_cl_cloth_effect = 0x19,
			ae_cl_create_anim_scope_prop = 0x1a,
			ae_cl_weapon_transition_into_hand = 0x1b,
			ae_cl_bodygroup_set_to_clip = 0x1c,
			ae_cl_bodygroup_set_to_nextclip = 0x1d,
			ae_sv_show_silencer = 0x1e,
			ae_sv_attach_silencer_complete = 0x1f,
			ae_sv_hide_silencer = 0x20,
			ae_sv_detach_silencer_complete = 0x21,
			ae_cl_eject_mag = 0x22,
			ae_wpn_complete_reload = 0x23,
			ae_wpn_healthshot_inject = 0x24,
			ae_cl_c4_screen_text = 0x25,
			ae_grenade_throw_complete = 0x26,
		}; // enum class game_anim_event_index_t : uint32_t

		enum class base_explosion_types_t : uint32_t
		{
			explosion_type_default = 0x0,
			explosion_type_grenade = 0x1,
			explosion_type_molotov = 0x2,
			explosion_type_fireworks = 0x3,
			explosion_type_gascan = 0x4,
			explosion_type_gascylinder = 0x5,
			explosion_type_explosivebarrel = 0x6,
			explosion_type_electrical = 0x7,
			explosion_type_emp = 0x8,
			explosion_type_shrapnel = 0x9,
			explosion_type_smokegrenade = 0xa,
			explosion_type_flashbang = 0xb,
			explosion_type_tripmine = 0xc,
			explosion_type_ice = 0xd,
			explosion_type_none = 0xe,
			explosion_type_custom = 0xf,
			explosion_type_count = 0x10,
		}; // enum class base_explosion_types_t : uint32_t

		enum class csweapon_silencer_type : uint32_t
		{
			weaponsilencer_none = 0x0,
			weaponsilencer_detachable = 0x1,
			weaponsilencer_integrated = 0x2,
		}; // enum class csweapon_silencer_type : uint32_t

		enum class filter_t : uint32_t
		{
			filter_and = 0x0,
			filter_or = 0x1,
		}; // enum class filter_t : uint32_t

		enum class class_t : uint32_t
		{
			class_none = 0x0,
			class_player = 0x1,
			class_player_ally = 0x2,
			class_bomb = 0x3,
			class_foot_contact_shadow = 0x4,
			class_weapon = 0x5,
			class_water_splasher = 0x6,
			class_weapon_viewmodel = 0x7,
			class_door = 0x8,
			num_classify_classes = 0x9,
		}; // enum class class_t : uint32_t

		enum class sound_flags_t : uint32_t
		{
			sound_none = 0x0,
			sound_combat = 0x1,
			sound_world = 0x2,
			sound_player = 0x4,
			sound_danger = 0x8,
			sound_bullet_impact = 0x10,
			sound_thumper = 0x20,
			sound_physics_danger = 0x40,
			sound_move_away = 0x80,
			sound_player_vehicle = 0x100,
			sound_glass_break = 0x200,
			sound_physics_object = 0x400,
			sound_context_gunfire = 0x100000,
			sound_context_combine_only = 0x200000,
			sound_context_react_to_source = 0x400000,
			sound_context_explosion = 0x800000,
			sound_context_exclude_combine = 0x1000000,
			sound_context_danger_approach = 0x2000000,
			sound_context_allies_only = 0x4000000,
			sound_context_panic_npcs = 0x8000000,
			all_contexts = 0xfff00000,
			all_scents = 0x0,
			all_sounds = 0xfffff,
		}; // enum class sound_flags_t : uint32_t

		enum class anim_loop_mode_t : uint32_t
		{
			anim_loop_mode_invalid = 0xffffffff,
			anim_loop_mode_not_looping = 0x0,
			anim_loop_mode_looping = 0x1,
			anim_loop_mode_use_sequence_settings = 0x2,
			anim_loop_mode_count = 0x3,
		}; // enum class anim_loop_mode_t : uint32_t

		enum class scripted_move_to_t : uint32_t
		{
			cine_moveto_wait = 0x0,
			cine_moveto_walk = 0x1,
			cine_moveto_run = 0x2,
			cine_moveto_custom = 0x3,
			cine_moveto_teleport = 0x4,
			cine_moveto_wait_facing = 0x5,
		}; // enum class scripted_move_to_t : uint32_t

		enum class materials : uint32_t
		{
			mat_glass = 0x0,
			mat_wood = 0x1,
			mat_metal = 0x2,
			mat_flesh = 0x3,
			mat_cinder_block = 0x4,
			mat_ceiling_tile = 0x5,
			mat_computer = 0x6,
			mat_unbreakable_glass = 0x7,
			mat_rocks = 0x8,
			mat_web = 0x9,
			mat_none = 0xa,
			mat_last_material = 0xb,
		}; // enum class materials : uint32_t

		enum class on_frame : uint8_t
		{
			onframe_unknown = 0x0,
			onframe_true = 0x1,
			onframe_false = 0x2,
		}; // enum class on_frame : uint8_t

		enum class csweapon_mode : uint32_t
		{
			primary_mode = 0x0,
			secondary_mode = 0x1,
			weapon_mode_max = 0x2,
		}; // enum class csweapon_mode : uint32_t

		enum class life_state_t : uint32_t
		{
			life_alive = 0x0,
			life_dying = 0x1,
			life_dead = 0x2,
			life_respawnable = 0x3,
			life_respawning = 0x4,
		}; // enum class life_state_t : uint32_t

		enum class surrounding_bounds_type_t : uint8_t
		{
			use_obb_collision_bounds = 0x0,
			use_best_collision_bounds = 0x1,
			use_hitboxes = 0x2,
			use_specified_bounds = 0x3,
			use_game_code = 0x4,
			use_rotation_expanded_bounds = 0x5,
			use_collision_bounds_never_vphysics = 0x6,
			use_rotation_expanded_sequence_bounds = 0x7,
			surrounding_type_bit_count = 0x3,
		}; // enum class surrounding_bounds_type_t : uint8_t

		enum class shatter_panel_mode : uint8_t
		{
			shatter_glass = 0x0,
			shatter_drywall = 0x1,
		}; // enum class shatter_panel_mode : uint8_t

		enum class item_flag_types_t : uint8_t
		{
			item_flag_none = 0x0,
			item_flag_can_select_without_ammo = 0x1,
			item_flag_noautoreload = 0x2,
			item_flag_noautoswitchempty = 0x4,
			item_flag_limitinworld = 0x8,
			item_flag_exhaustible = 0x10,
			item_flag_dohitlocationdmg = 0x20,
			item_flag_noammopickups = 0x40,
			item_flag_noitempickup = 0x80,
		}; // enum class item_flag_types_t : uint8_t

		enum class player_anim_event_t : uint32_t
		{
			playeranimevent_fire_gun_primary = 0x0,
			playeranimevent_fire_gun_secondary = 0x1,
			playeranimevent_grenade_pull_pin = 0x2,
			playeranimevent_throw_grenade = 0x3,
			playeranimevent_jump = 0x4,
			playeranimevent_reload = 0x5,
			playeranimevent_clear_firing = 0x6,
			playeranimevent_deploy = 0x7,
			playeranimevent_silencer_state = 0x8,
			playeranimevent_silencer_toggle = 0x9,
			playeranimevent_throw_grenade_underhand = 0xa,
			playeranimevent_catch_weapon = 0xb,
			playeranimevent_lookatweapon_request = 0xc,
			playeranimevent_reload_cancel_lookatweapon = 0xd,
			playeranimevent_haulback = 0xe,
			playeranimevent_idle = 0xf,
			playeranimevent_strike_hit = 0x10,
			playeranimevent_strike_miss = 0x11,
			playeranimevent_backstab = 0x12,
			playeranimevent_dryfire = 0x13,
			playeranimevent_fidget = 0x14,
			playeranimevent_release = 0x15,
			playeranimevent_taunt = 0x16,
			playeranimevent_count = 0x17,
		}; // enum class player_anim_event_t : uint32_t

		enum class begin_death_life_state_transition_t : uint8_t
		{
			no_change_in_lifestate = 0x0,
			transition_to_lifestate_dying = 0x1,
			transition_to_lifestate_dead = 0x2,
		}; // enum class begin_death_life_state_transition_t : uint8_t

		enum class csweapon_category : uint32_t
		{
			weaponcategory_other = 0x0,
			weaponcategory_melee = 0x1,
			weaponcategory_secondary = 0x2,
			weaponcategory_smg = 0x3,
			weaponcategory_rifle = 0x4,
			weaponcategory_heavy = 0x5,
			weaponcategory_count = 0x6,
		}; // enum class csweapon_category : uint32_t

		enum class train_orientation_type_t : uint32_t
		{
			train_orientation_fixed = 0x0,
			train_orientation_at_path_tracks = 0x1,
			train_orientation_linear_blend = 0x2,
			train_orientation_ease_in_ease_out = 0x3,
		}; // enum class train_orientation_type_t : uint32_t

		enum class sound_event_start_type_t : uint32_t
		{
			soundevent_start_player = 0x0,
			soundevent_start_world = 0x1,
			soundevent_start_entity = 0x2,
		}; // enum class sound_event_start_type_t : uint32_t

		enum class world_text_panel_horizontal_align_t : uint32_t
		{
			worldtext_horizontal_align_left = 0x0,
			worldtext_horizontal_align_center = 0x1,
			worldtext_horizontal_align_right = 0x2,
		}; // enum class world_text_panel_horizontal_align_t : uint32_t

		enum class world_text_panel_orientation_t : uint32_t
		{
			worldtext_orientation_default = 0x0,
			worldtext_orientation_faceuser = 0x1,
			worldtext_orientation_faceuser_upright = 0x2,
		}; // enum class world_text_panel_orientation_t : uint32_t

		enum class observer_interp_state_t : uint32_t
		{
			observer_interp_none = 0x0,
			observer_interp_traveling = 0x1,
			observer_interp_settling = 0x2,
		}; // enum class observer_interp_state_t : uint32_t

		enum class explosions : uint32_t
		{
			exp_random = 0x0,
			exp_directed = 0x1,
			exp_use_precise = 0x2,
		}; // enum class explosions : uint32_t

		enum class stance_type_t : uint32_t
		{
			stance_current = 0xffffffff,
			stance_default = 0x0,
			stance_crouching = 0x1,
			stance_prone = 0x2,
			num_stances = 0x3,
		}; // enum class stance_type_t : uint32_t

		enum class c4_light_effect_t : uint32_t
		{
			e_light_effect_none = 0x0,
			e_light_effect_dropped = 0x1,
			e_light_effect_third_person_held = 0x2,
		}; // enum class c4_light_effect_t : uint32_t

		enum class subclass_vdata_change_type_t : uint32_t
		{
			subclass_vdata_created = 0x0,
			subclass_vdata_subclass_changed = 0x1,
			subclass_vdata_reloaded = 0x2,
		}; // enum class subclass_vdata_change_type_t : uint32_t

		enum class timeline_compression_t : uint32_t
		{
			timeline_compression_sum = 0x0,
			timeline_compression_count_per_interval = 0x1,
			timeline_compression_average = 0x2,
			timeline_compression_average_blend = 0x3,
			timeline_compression_total = 0x4,
		}; // enum class timeline_compression_t : uint32_t

		enum class lesson_panel_layout_file_types_t : uint32_t
		{
			layout_hand_default = 0x0,
			layout_world_default = 0x1,
			layout_custom = 0x2,
		}; // enum class lesson_panel_layout_file_types_t : uint32_t

		enum class egrenade_throw_state : uint32_t
		{
			not_throwing = 0x0,
			throwing = 0x1,
			throw_complete = 0x2,
		}; // enum class egrenade_throw_state : uint32_t

		enum class scene_on_player_death_t : uint32_t
		{
			scene_onplayerdeath_do_nothing = 0x0,
			scene_onplayerdeath_cancel = 0x1,
		}; // enum class scene_on_player_death_t : uint32_t

		enum class prop_door_rotating_open_direction_e : uint32_t
		{
			door_rotating_open_both_ways = 0x0,
			door_rotating_open_forward = 0x1,
			door_rotating_open_backward = 0x2,
		}; // enum class prop_door_rotating_open_direction_e : uint32_t

		enum class comp_mat_property_mutator_condition_type_t : uint32_t
		{
			comp_mat_mutator_condition_input_container_exists = 0x0,
			comp_mat_mutator_condition_input_container_value_exists = 0x1,
			comp_mat_mutator_condition_input_container_value_equals = 0x2,
		}; // enum class comp_mat_property_mutator_condition_type_t : uint32_t

		enum class composite_material_match_filter_type_t : uint32_t
		{
			match_filter_material_attribute_exists = 0x0,
			match_filter_material_shader = 0x1,
			match_filter_material_name_substr = 0x2,
			match_filter_material_attribute_equals = 0x3,
			match_filter_material_property_exists = 0x4,
			match_filter_material_property_equals = 0x5,
		}; // enum class composite_material_match_filter_type_t : uint32_t

		enum class composite_material_var_system_var_t : uint32_t
		{
			compmatsysvar_compositetime = 0x0,
			compmatsysvar_empty_resource_spacer = 0x1,
		}; // enum class composite_material_var_system_var_t : uint32_t

		enum class comp_mat_property_mutator_type_t : uint32_t
		{
			comp_mat_property_mutator_init = 0x0,
			comp_mat_property_mutator_copy_matching_keys = 0x1,
			comp_mat_property_mutator_copy_keys_with_suffix = 0x2,
			comp_mat_property_mutator_copy_property = 0x3,
			comp_mat_property_mutator_set_value = 0x4,
			comp_mat_property_mutator_generate_texture = 0x5,
			comp_mat_property_mutator_conditional_mutators = 0x6,
			comp_mat_property_mutator_pop_input_queue = 0x7,
			comp_mat_property_mutator_draw_text = 0x8,
			comp_mat_property_mutator_random_roll_input_variables = 0x9,
		}; // enum class comp_mat_property_mutator_type_t : uint32_t

		enum class composite_material_input_container_source_type_t : uint32_t
		{
			container_source_type_target_material = 0x0,
			container_source_type_material_from_target_attr = 0x1,
			container_source_type_specific_material = 0x2,
			container_source_type_loose_variables = 0x3,
			container_source_type_variable_from_target_attr = 0x4,
			container_source_type_target_instance_material = 0x5,
		}; // enum class composite_material_input_container_source_type_t : uint32_t

		enum class composite_material_input_texture_type_t : uint32_t
		{
			input_texture_type_default = 0x0,
			input_texture_type_normalmap = 0x1,
			input_texture_type_color = 0x2,
			input_texture_type_masks = 0x3,
			input_texture_type_roughness = 0x4,
			input_texture_type_pearlescence_mask = 0x5,
			input_texture_type_ao = 0x6,
		}; // enum class composite_material_input_texture_type_t : uint32_t

		enum class composite_material_input_loose_variable_type_t : uint32_t
		{
			loose_variable_type_boolean = 0x0,
			loose_variable_type_integer1 = 0x1,
			loose_variable_type_integer2 = 0x2,
			loose_variable_type_integer3 = 0x3,
			loose_variable_type_integer4 = 0x4,
			loose_variable_type_float1 = 0x5,
			loose_variable_type_float2 = 0x6,
			loose_variable_type_float3 = 0x7,
			loose_variable_type_float4 = 0x8,
			loose_variable_type_color4 = 0x9,
			loose_variable_type_string = 0xa,
			loose_variable_type_systemvar = 0xb,
			loose_variable_type_resource_material = 0xc,
			loose_variable_type_resource_texture = 0xd,
		}; // enum class composite_material_input_loose_variable_type_t : uint32_t

		class cexample_schema_vdata_monomorphic;
		struct resource_id_t;
		class cexample_schema_vdata_polymorphic_derivedb;
		class cexample_schema_vdata_polymorphic_base;
		class cexample_schema_vdata_polymorphic_derived_a;
		class cschema_system_internal_registration;
		class info_for_resource_type_cresource_manifest_internal;
		class info_for_resource_type_cdotapatch_notes_list;
		class info_for_resource_type_centity_lump;
		struct manifest_test_resource_t;
		class info_for_resource_type_csequence_group_data;
		class info_for_resource_type_iparticle_system_definition;
		struct fuse_variable_index_t;
		class info_for_resource_type_ctexture_base;
		class info_for_resource_type_cdotanovels_list;
		class info_for_resource_type_cmodel;
		class info_for_resource_type_cvdata_resource;
		struct function_info_t;
		struct fuse_function_index_t;
		class info_for_resource_type_ipulse_graph_def;
		class info_for_resource_type_cpanorama_dynamic_images;
		class info_for_resource_type_ivector_graphic;
		class info_for_resource_type_imaterial2;
		class info_for_resource_type_canim_data;
		class info_for_resource_type_cvmix_list_resource;
		class info_for_resource_type_ccomposite_material_kit;
		class cfuse_program;
		class info_for_resource_type_csmart_prop;
		class info_for_resource_type_ccsgoecon_item;
		class info_for_resource_type_cworld_node;
		class info_for_resource_type_cpanorama_style;
		class info_for_resource_type_cdacgame_defs_data;
		class info_for_resource_type_cvsound_event_script_list;
		class info_for_resource_type_canimation_group;
		struct info_for_resource_type_vsound_t;
		struct info_for_resource_type_test_resource_t;
		class info_for_resource_type_cnm_skeleton;
		class info_for_resource_type_ctype_script_resource;
		class info_for_resource_type_cpanorama_layout;
		class four_quaternions;
		class info_for_resource_type_iparticle_snapshot;
		struct variable_info_t;
		class info_for_resource_type_cpost_processing_resource;
		struct aabb_t;
		struct info_for_resource_type_procedural_test_resource_t;
		struct info_for_resource_type_world_t;
		class info_for_resource_type_cnm_clip;
		class info_for_resource_type_cphys_aggregate_data;
		struct test_resource_t;
		class info_for_resource_type_cvoxel_visibility;
		class info_for_resource_type_crender_mesh;
		class cfuse_symbol_table;
		class info_for_resource_type_cjava_script_resource;
		class info_for_resource_type_ianim_graph_model_binding;
		struct constant_info_t;
		struct info_for_resource_type_manifest_test_resource_t;
		class info_for_resource_type_cvphys_xsurface_properties_list;
		struct packed_aabb_t;
		class info_for_resource_type_cvsound_stack_script_list;
		class info_for_resource_type_cchoreo_scene_file_data;
		class info_for_resource_type_cmorph_set_data;
		class info_for_resource_type_cdota_item_definition_resource;
		class info_for_resource_type_cresponse_rules_list;
		struct render_input_layout_field_t;
		struct vs_input_signature_t;
		struct vs_input_signature_element_t;
		struct event_server_poll_networking_t;
		struct event_client_process_input_t;
		struct engine_loop_state_t;
		struct event_client_poll_networking_t;
		struct ent_component_info_t;
		class centity_component_helper;
		class cempty_entity_instance;
		struct event_server_process_networking_t;
		struct event_simulate_t;
		struct ent_output_t;
		struct event_set_time_t;
		struct event_server_advance_tick_t;
		struct event_client_send_input_t;
		struct event_client_frame_simulate_t;
		struct event_client_pre_output_t;
		struct event_mod_initialized_t;
		class cvariant_default_allocator;
		struct event_client_post_advance_tick_t;
		struct event_split_screen_state_changed_t;
		struct event_advance_tick_t;
		struct event_client_process_networking_t;
		struct event_client_pause_simulate_t;
		struct event_client_pre_simulate_t;
		struct event_post_data_update_t;
		struct event_profile_storage_available_t;
		struct event_server_post_advance_tick_t;
		struct event_server_simulate_t;
		struct event_app_shutdown_t;
		struct event_frame_boundary_t;
		struct event_client_process_game_input_t;
		struct event_client_prediction_post_netupdate_t;
		struct event_pre_data_update_t;
		struct event_client_poll_input_t;
		struct event_client_post_output_t;
		struct event_client_simulate_t;
		class cnetwork_var_chainer;
		struct change_accessor_field_path_index_t;
		struct ent_input_t;
		struct event_client_advance_tick_t;
		struct event_server_post_simulate_t;
		struct event_client_output_t;
		struct event_client_scene_system_thread_state_change_t;
		class centity_iooutput;
		struct event_post_advance_tick_t;
		struct event_simple_loop_frame_update_t;
		struct event_client_post_simulate_t;
		struct material_param_texture_t;
		struct material_param_float_t;
		struct post_processing_bloom_parameters_t;
		struct material_resource_data_t;
		struct material_param_buffer_t;
		struct post_processing_tonemap_parameters_t;
		struct post_processing_local_contrast_parameters_t;
		struct post_processing_vignette_parameters_t;
		struct material_param_int_t;
		struct post_processing_resource_t;
		struct material_param_string_t;
		struct material_param_vector_t;
		struct material_param_t;
		class canim_tag_manager_updater;
		class cmodel_config_element_attached_model;
		class cmood_vdata;
		class cway_point_helper_update_node;
		class cset_facing_update_node;
		class cmotion_graph_group;
		class cmotion_search_db;
		class anim_script_handle;
		struct foot_fixed_data_t;
		class canim_morph_difference;
		struct attachment_handle_t;
		class canim_key_data;
		class cbinary_update_node;
		class canim_update_node_ref;
		class cfinger_bone;
		struct iksolver_settings_t;
		class canim_data;
		class ccppscript_component_updater;
		class canim_sequence_params;
		struct phys_softbody_desc_t;
		class cseq_auto_layer;
		class cseq_auto_layer_flag;
		class cphys_surface_properties_audio;
		class cmaterial_attribute_anim_tag;
		class cpath_anim_motor_updater;
		class cbone_constraint_base;
		class cragdoll_update_node;
		class canim_script_component_updater;
		struct aim_matrix_op_fixed_settings_t;
		class canim_attachment;
		class canim_input_damping;
		class cfollow_path_update_node;
		class canim_param_handle;
		struct vphys_xbody_part_t;
		struct vphysics2_shape_def_t;
		class ctwo_bone_ikupdate_node;
		struct two_bone_iksettings_t;
		struct skeleton_bone_bounds_t;
		class cmotion_node_blend1_d;
		class cmotion_search_node;
		class cproduct_quantizer;
		class cmodel_config_element_set_render_color;
		struct finger_bone_t;
		struct iktarget_settings_t;
		struct ikbone_name_and_index_t;
		class anim_param_id;
		class cfoot_step_trigger_update_node;
		struct param_span_t;
		class cdirectional_blend_update_node;
		class cseq_scale_set;
		struct animation_decode_debug_dump_t;
		class cbody_group_anim_tag;
		class cmotion_node;
		class anim_node_id;
		class cragdoll_anim_tag;
		class cbool_anim_parameter;
		class cstring_anim_tag;
		class ceditable_motion_graph;
		class cfoot_trajectories;
		class canim_update_shared_data;
		class canim_graph_settings_manager;
		class canim_node_path;
		struct solve_ikchain_pose_op_fixed_settings_t;
		class cleaf_update_node;
		class cbone_mask_update_node;
		class cseq_cmd_seq_desc;
		class cseq_seq_desc_flag;
		class cseq_transition;
		class csolve_ikchain_update_node;
		class cpose_handle;
		class csubtract_update_node;
		struct jiggle_bone_settings_list_t;
		class canim_motor_updater_base;
		class cmover_update_node;
		class corient_constraint;
		class cstate_update_data;
		class anim_state_id;
		struct wrist_bone_t;
		struct vphys_xconstraint_params_t;
		struct param_span_sample_t;
		struct trace_settings_t;
		class ccurrent_rotation_velocity_metric_evaluator;
		class cpoint_constraint;
		class cbone_constraint_dot_to_morph;
		class canimation_graph_visualizer_pie;
		class cphys_surface_properties_physics;
		class canim_desc;
		class canim_desc_flag;
		class canim_encoded_frames;
		class canim_param_handle_map;
		class cseq_iklock;
		class crender_skeleton;
		class cplayer_input_anim_motor_updater;
		class cstate_action_updater;
		class cfloat_anim_parameter;
		class cbone_constraint_pose_space_morph;
		class motion_blend_item;
		class cbone_constraint_pose_space_bone;
		class canim_graph_model_binding;
		struct look_at_op_fixed_settings_t;
		class cstatic_pose_cache;
		class ccycle_control_clip_update_node;
		class hsequence;
		class cvphys_xsurface_properties_list;
		class ctilt_twist_constraint;
		struct script_info_t;
		class cflex_rule;
		class cdirect_playback_update_node;
		class cdistance_remaining_metric_evaluator;
		struct render_skeleton_bone_t;
		struct foot_pinning_pose_op_fixed_data_t;
		class cseq_cmd_layer;
		struct model_bone_flex_driver_control_t;
		class ctwist_constraint;
		class canimation_graph_visualizer_axis;
		class canim_skeleton;
		class crender_mesh;
		class cflex_desc;
		class cwrist_bone;
		class cmotion_node_sequence;
		class cfinger_source;
		class cflex_controller;
		class cseq_s1_seq_desc;
		class cseq_multi_fetch;
		class cmotion_matching_update_node;
		class cmotion_data_set;
		class cblend_curve;
		class cfoot_trajectory;
		class canimation_graph_visualizer_text;
		class cbind_pose_update_node;
		class canimation_graph_visualizer_primitive_base;
		class ctoggle_component_action_updater;
		class anim_component_id;
		class canimation_group;
		class cturn_helper_update_node;
		class caudio_anim_tag;
		class cphys_surface_properties_sound_names;
		class cseq_multi_fetch_flag;
		struct cbone_constraint_pose_space_bone__input_t;
		struct skeletal_input_op_fixed_settings_t;
		class cfinger_chain;
		class ctransition_update_data;
		class canim_user_difference;
		class canimation_graph_visualizer_sphere;
		class ccloth_settings_anim_tag;
		class cmorph_constraint;
		class cmorph_set_data;
		class cmeshlet_descriptor;
		class cdraw_culling_data;
		class crender_buffer_binding;
		class cbone_position_metric_evaluator;
		class cset_parameter_action_updater;
		class canim_update_node_base;
		class cfuture_velocity_metric_evaluator;
		class cmovement_mode;
		class cmotion_metric_evaluator;
		class cvirtual_anim_parameter;
		class cfoot_cycle_definition;
		class canim_cycle;
		class cfoot_cycle;
		class cconstraint_slave;
		struct chain_to_solve_data_t;
		class chit_box_set;
		class cslope_component_updater;
		class canim_frame_segment;
		class anim_tag_id;
		class cvr_skeletal_input_settings;
		class cenum_anim_parameter;
		class cfootstep_landed_anim_tag;
		class cstate_node_state_data;
		class cfoot_stride;
		class canim_decoder;
		class cdemo_settings_component_updater;
		class canim_demo_capture_settings;
		class canim_enum;
		class cadd_update_node;
		class cfuture_facing_metric_evaluator;
		class cmodel_config_element_set_material_group;
		class cmovement_component_updater;
		class cfollow_attachment_update_node;
		struct follow_attachment_settings_t;
		class cpath_anim_motor_updater_base;
		class canim_replay_frame;
		class ccurrent_velocity_metric_evaluator;
		class cmodel_config_element_set_bodygroup_on_attached_models;
		class cspeed_scale_update_node;
		struct mood_animation_layer_t;
		class crange_float;
		struct cbone_constraint_pose_space_morph__input_t;
		struct bone_demo_capture_settings_t;
		class canim_parameter_manager_updater;
		class canim_bone;
		class clook_at_update_node;
		class chit_react_update_node;
		struct hit_react_fixed_settings_t;
		class cskeletal_input_update_node;
		class cflex_op;
		class canim_event_definition;
		class cmodel_config_element_command;
		class caim_matrix_update_node;
		class cstate_machine_update_node;
		class canim_state_machine_updater;
		class csequence_group_data;
		class cstatic_pose_cache_builder;
		struct perm_model_data_t;
		struct perm_model_info_t;
		struct model_skeleton_data_t;
		class cmodel_config_list;
		class cquaternion_anim_parameter;
		class cvrinput_component_updater;
		class cblend_update_node;
		class canim_local_hierarchy;
		class cdamped_value_update_item;
		class cfoot_position_metric_evaluator;
		class cparent_constraint;
		class canim_foot;
		class cmorph_rect_data;
		class canim_data_channel_desc;
		class clodcomponent_updater;
		struct mood_animation_t;
		class cjiggle_bone_update_node;
		class cfoot_motion;
		class cmodel_config_element_random_color;
		class cbone_velocity_metric_evaluator;
		class foot_lock_pose_op_fixed_settings;
		class cjump_helper_update_node;
		struct finger_source_t;
		struct jiggle_bone_settings_t;
		class cfoot_lock_update_node;
		class cpath_metric_evaluator;
		class foot_step_trigger;
		class canim_movement;
		struct finger_chain_t;
		class cmodel_config_element_set_bodygroup;
		class cseq_pose_param_desc;
		class cphys_surface_properties;
		class cstate_machine_component_updater;
		class cselector_update_node;
		class ccompressor_group;
		class cunary_update_node;
		class cemit_tag_action_updater;
		struct animation_snapshot_base_t;
		struct animation_decode_debug_dump_element_t;
		class ccycle_base;
		class cparticle_anim_tag;
		class canim_action_updater;
		class cparam_span_updater;
		class cdirect_playback_tag_data;
		class motion_dbindex;
		class chit_box_set_list;
		class clean_matrix_update_node;
		struct perm_model_ext_part_t;
		class cblend2_dupdate_node;
		class canim_component_updater;
		class cseq_synth_anim_desc;
		class cfoot_definition;
		class cragdoll_component_updater;
		class canim_user;
		class cconstraint_target;
		struct vphys_xconstraint2_t;
		class cmodel_config_element_random_pick;
		class cconcrete_anim_parameter;
		struct blend_item_t;
		class cbase_constraint;
		class cdamped_value_component_updater;
		class ccycle_control_update_node;
		class canimation_graph_visualizer_line;
		class cexpression_action_updater;
		class cchoice_update_node;
		struct perm_model_data_animated_material_attribute_t;
		struct tag_span_t;
		class chit_box;
		class cfoot_cycle_metric_evaluator;
		class cvector_quantizer;
		class cbody_group_setting;
		class csteps_remaining_metric_evaluator;
		class cmaterial_draw_descriptor;
		class cfoot_fall_anim_tag;
		class caim_constraint;
		class cchoreo_update_node;
		class cfoot_adjustment_update_node;
		struct csolve_iktarget_handle_t;
		class cmodel_config_element_user_pick;
		class cmorph_bundle_data;
		struct material_group_t;
		class cpath_helper_update_node;
		class cmodel_config_element_set_material_group_on_attached_models;
		class cdamped_path_anim_motor_updater;
		class caction_component_updater;
		class canim_bone_difference;
		class cstop_at_goal_update_node;
		struct vphys_xrange_t;
		struct ikdemo_capture_settings_t;
		struct vphys_xaggregate_data_t;
		struct phys_fe_model_desc_t;
		class cmodel_config;
		class foot_fixed_settings;
		class cmodel_config_element;
		class ctime_remaining_metric_evaluator;
		class cstate_node_transition_data;
		struct vphys_xjoint_t;
		class cattachment;
		class cseq_pose_setting;
		class cfoot_pinning_update_node;
		class cmorph_data;
		struct model_bone_flex_driver_t;
		class cblock_selection_metric_evaluator;
		class csingle_frame_update_node;
		class canim_graph_network_settings;
		class clook_component_updater;
		class motion_index;
		class weight_list;
		class cmotion_graph_update_node;
		class croot_update_node;
		class canim_encode_difference;
		struct look_at_bone_t;
		class cstance_override_update_node;
		class cvector_anim_parameter;
		class canim_graph_debug_replay;
		class canim_graph_settings_group;
		struct animation_snapshot_t;
		class cmotion_graph;
		class canim_tag_base;
		class cstance_scale_update_node;
		struct stance_info_t;
		class csequence_update_node;
		struct vphys_xcollision_attributes_t;
		class config_index;
		class canim_script_manager;
		class canim_activity;
		class cmotion_graph_config;
		class ctask_status_anim_tag;
		class ccached_pose;
		class sample_code;
		class cseq_bone_mask_list;
		class anim_node_output_id;
		class cint_anim_parameter;
		class cinput_stream_update_node;
		class cscene_object_data;
		class csequence_finished_anim_tag;
		class canim_parameter_base;
		class cslow_down_on_slopes_update_node;
		class czero_pose_update_node;
		class canim_frame_block_anim;
		struct fe_fit_influence_t;
		struct vertex_position_color_t;
		struct fe_simd_tri_t;
		class four_vectors2d;
		struct rn_half_edge_t;
		struct fe_fit_weight_t;
		struct fe_rod_constraint_t;
		struct fe_tree_children_t;
		struct rn_shape_desc_t;
		struct fe_soft_parent_t;
		struct fe_build_tapered_capsule_rigid_t;
		struct fe_sphere_rigid_t;
		struct constraint_breakableparams_t;
		class four_cov_matrices3;
		struct fe_axial_edge_bend_t;
		struct fe_node_wind_base_t;
		struct fe_twist_constraint_t;
		struct fe_source_edge_t;
		struct fe_ctrl_os_offset_t;
		struct rn_face_t;
		struct dop26_t;
		struct rn_vertex_t;
		class cov_matrix3;
		struct rn_hull_t;
		class cregion_svm;
		struct fe_tri_t;
		class cfe_vertex_map_build_array;
		struct fe_vertex_map_build_t;
		struct fe_node_base_t;
		class iphysics_player_controller;
		struct fe_ctrl_offset_t;
		struct fe_morph_layer_depr_t;
		struct fe_box_rigid_t;
		struct fe_stiff_hinge_build_t;
		struct fe_collision_plane_t;
		struct rn_plane_t;
		struct fe_rigid_collider_indices_t;
		struct cast_sphere_satparams_t;
		struct fe_kelager_bend2_t;
		struct fe_spring_integrator_t;
		struct fe_effect_desc_t;
		struct fe_weighted_node_t;
		struct rn_wing_t;
		struct fe_quad_t;
		struct fe_simd_node_base_t;
		struct fe_simd_spring_integrator_t;
		struct fe_simd_quad_t;
		struct fe_fit_matrix_t;
		struct rn_node_t;
		struct fe_world_collision_params_t;
		class cfe_jiggle_bone;
		struct fe_node_reverse_offset_t;
		struct fe_edge_desc_t;
		struct fe_anim_stray_radius_t;
		struct fe_tapered_capsule_rigid_t;
		struct fe_vertex_map_desc_t;
		struct fe_ctrl_soft_offset_t;
		class cfe_morph_layer;
		struct rn_blend_vertex_t;
		struct vertex_position_normal_t;
		struct rn_mesh_t;
		struct fe_follow_node_t;
		struct old_fe_edge_t;
		struct rn_body_desc_t;
		class cfe_named_jiggle_bone;
		struct rn_capsule_t;
		struct fe_node_integrator_t;
		struct fe_proxy_vertex_map_t;
		struct rn_triangle_t;
		struct fe_simd_anim_stray_radius_t;
		struct fe_build_sphere_rigid_t;
		struct rn_sphere_t;
		struct constraint_hingeparams_t;
		struct constraint_axislimit_t;
		struct fe_simd_rod_constraint_t;
		struct fe_tapered_capsule_stretch_t;
		struct fe_band_bend_limit_t;
		class cfe_indexed_jiggle_bone;
		struct fe_build_box_rigid_t;
		struct vphysics_save_cphysicsbody_t;
		struct rn_mesh_desc_t;
		struct rn_sphere_desc_t;
		struct rn_capsule_desc_t;
		struct rn_softbody_capsule_t;
		struct rn_hull_desc_t;
		struct rn_softbody_particle_t;
		struct rn_softbody_spring_t;
		struct vmix_dynamics_desc_t;
		struct vmix_osc_desc_t;
		struct vmix_filter_desc_t;
		struct vmix_utility_desc_t;
		struct vmix_vocoder_desc_t;
		class csos_group_action_time_limit_schema;
		struct vmix_effect_chain_desc_t;
		struct vmix_dynamics_band_t;
		struct vmix_auto_filter_desc_t;
		class csos_group_action_limit_schema;
		struct vmix_envelope_desc_t;
		struct vmix_shaper_desc_t;
		struct vmix_dynamics_compressor_desc_t;
		struct vmix_diffusor_desc_t;
		struct vmix_plateverb_desc_t;
		struct sos_edit_item_info_t;
		class csos_group_match_pattern;
		class csos_sound_event_group_list_schema;
		struct vmix_convolution_desc_t;
		struct vmix_pitch_shift_desc_t;
		class csound_event_meta_data;
		struct vmix_eq8_desc_t;
		struct vmix_delay_desc_t;
		class cdsp_preset_modifier_list;
		class cdspmixgroup_modifier;
		struct vmix_dynamics3_band_desc_t;
		class csos_group_branch_pattern;
		class csos_sound_event_group_schema;
		class csos_group_action_schema;
		struct vmix_boxverb_desc_t;
		struct vmix_mod_delay_desc_t;
		struct selected_edit_item_info_t;
		struct vmix_panner_desc_t;
		struct vmix_subgraph_switch_desc_t;
		class csos_group_action_set_soundevent_parameter_schema;
		class cdsppreset_mixgroup_modifier_table;
		struct vmix_freeverb_desc_t;
		class cssdsmsg_end_frame;
		class cssdsmsg_view_render;
		struct scene_view_id_t;
		class cssdsmsg_view_target_list;
		class cssdsmsg_pre_layer;
		class cssdsmsg_layer_base;
		class cssdsmsg_post_layer;
		class cssdsend_frame_view_info;
		class cssdsmsg_view_target;
		class cvoxel_visibility;
		struct voxel_vis_block_offset_t;
		struct entity_key_value_data_t;
		struct material_override_t;
		struct info_overlay_data_t;
		struct world_t;
		struct world_builder_params_t;
		struct baked_lighting_info_t;
		struct aggregate_mesh_info_t;
		struct world_node_on_disk_buffer_data_t;
		struct info_for_resource_type_vmap_resource_data_t;
		struct entity_ioconnection_data_t;
		struct base_scene_object_override_t;
		struct world_node_t;
		struct perm_entity_lump_data_t;
		struct clutter_scene_object_t;
		struct vmap_resource_data_t;
		struct node_data_t;
		struct aggregate_scene_object_t;
		struct clutter_tile_t;
		struct extra_vertex_stream_override_t;
		struct aggregate_lodsetup_t;
		struct scene_object_t;
		class cpulse_turtle_graphics_cursor;
		class cpulse_cell_outflow_simultaneous_parallel;
		class cpulse_cell_value_random_int;
		struct pulse_runtime_state_offset_t;
		class cpulse_runtime_method_arg;
		class cpulse_cell_outflow_cycle_ordered;
		struct pulse_runtime_chunk_index_t;
		class cpulse_cell_step_debug_log;
		class cpulse_cell_outflow_test_random_yes_no;
		class cpulse_outflow_connection;
		class cpulse_cell_outflow_test_explicit_yes_no;
		struct pulse_runtime_call_info_index_t;
		class cpulse_cell_inflow_base_entrypoint;
		struct pulse_register_map_t;
		class cpulse_cell_test_multi_inflow_no_default;
		class cpulse_graph_def;
		class cpulse_cell_outflow_int_switch;
		class cpulse_exec_cursor;
		struct pulse_runtime_cell_index_t;
		class cpulse_register_info;
		struct pulse_runtime_register_index_t;
		class cpulse_call_info;
		struct pulse_doc_node_id_t;
		class cpulse_cell_val_test_domain_get_entity_name;
		class cpulse_cell_step_test_domain_tracepoint;
		class cpulse_cell_inflow_ent_output_handler;
		class cpulse_graph_instance_test_domain_derived;
		class cpulse_mathlib;
		class cpulse_cell_step_test_domain_ent_fire;
		class cpulse_cell_step_test_domain_create_fake_entity;
		struct pulse_runtime_output_index_t;
		class cpulse_cell_outflow_cycle_shuffled;
		class cpulse_graph_instance_test_domain;
		class cpulse_cell_inflow_method;
		class cpulse_variable;
		class cpulse_invoke_binding;
		struct pgdinstruction_t;
		struct pulse_runtime_var_index_t;
		struct pulse_runtime_invoke_index_t;
		class cpulse_cell_base_yielding_inflow;
		struct fake_entity_t;
		struct pulse_test_ehandle_t;
		class cpulse_cell_base_flow;
		class cpulse_graph_instance_turtle_graphics;
		class cpulse_cell_step_call_external_method;
		class cpulse_output_connection;
		class cpulse_public_output;
		class cpulse_cell_inflow_event_handler;
		class cpulse_cell_outflow_cycle_random;
		class cpulse_resume_point;
		class cpulse_cell_base_value;
		struct cpulse_cell_outflow_cycle_shuffled__instance_state_t;
		class cpulse_cell_test_no_inflow;
		class cpulse_cell_outflow_string_switch;
		class cpulse_cell_test_multi_inflow_with_default;
		class cpulse_cell_value_test_value50;
		class ctest_domain_derived_cursor;
		class cpulse_cell_inflow_wait;
		class cpulse_cell_inflow_graph_hook;
		class cpulse_cell_inflow_yield;
		class cpulse_test_funcs_derived_domain;
		class cpulse_cell_base;
		class cbase_pulse_graph_instance;
		class cpulse_test_script_lib;
		struct cpulse_cell_outflow_cycle_ordered__instance_state_t;
		class cpulse_chunk;
		struct pulse_runtime_entrypoint_index_t;
		class cpulse_cell_step_test_domain_destroy_fake_entity;
		class cpulse_test_funcs_library_a;
		class cpulse_cell_val_test_domain_find_entity_by_name;
		class cpulse_cell_step_public_output;
		class cparticle_property;
		class op_lerp_end_cap_scalar;
		struct particle_attribute_index_t;
		class op_cpoffset_to_percentage_between_cps;
		class init_sequence_from_cp;
		class init_remap_particle_count_to_named_model_mesh_group_scalar;
		class init_init_vec_collection;
		class cparticle_collection_vec_input;
		class op_rotate_vector;
		class cper_particle_float_input;
		class op_ramp_scalar_linear;
		class cparticle_collection_renderer_vec_input;
		struct float_input_material_variable_t;
		class cparticle_collection_float_input;
		class op_render_material_proxy;
		class op_cycle_scalar;
		class op_set_attribute_to_scalar_expression;
		class op_world_collide_constraint;
		class op_render_tree_shake;
		class op_set_per_child_control_point;
		class op_percentage_between_transform_lerp_cps;
		class cparticle_transform_input;
		class op_render_sprites;
		class cparticle_collection_renderer_float_input;
		class init_model_cull;
		class op_external_wind_force;
		class cper_particle_vec_input;
		struct point_definition_with_time_values_t;
		class op_spin_yaw;
		class op_set_control_point_to_cpvelocity;
		class op_parent_vortices;
		struct particle_control_point_driver_t;
		class op_set_to_cp;
		class op_remap_model_volumeto_cp;
		class init_quantize_float;
		class op_remap_particle_count_to_scalar;
		class iparticle_collection;
		class op_vector_noise;
		class op_force_control_point_stub;
		class init_position_warp_scalar;
		class op_rope_spring_constraint;
		class op_set_control_point_orientation_to_cpvelocity;
		class init_remap_named_model_mesh_group_to_scalar;
		class cparticle_function_emitter;
		class op_render_models;
		class cparticle_model_input;
		class op_remap_speed;
		class cparticle_function_constraint;
		struct material_variable_t;
		class init_set_rigid_attachment;
		struct particle_control_point_configuration_t;
		struct particle_preview_state_t;
		class op_remap_density_to_vector;
		class op_force_based_on_distance_to_plane;
		class op_end_cap_decay;
		class init_distance_to_cpinit;
		class op_enable_children_from_parent_particle_count;
		class op_render_light_beam;
		class op_render_flatten_grass;
		class op_movement_rigid_attach_to_cp;
		class init_chaotic_attractor;
		class op_ramp_scalar_linear_simple;
		class init_inherit_from_parent_particles;
		class init_remap_particle_count_to_scalar;
		class op_set_gravity_to_cp;
		class init_random_color;
		class op_lerp_to_other_attribute;
		class init_point_list;
		class cparticle_float_input;
		class op_move_to_hitbox;
		class init_scale_velocity;
		class op_remap_named_model_element_end_cap;
		class op_cpvelocity_force;
		class init_create_spiral_sphere;
		class op_lock_points;
		class init_create_from_cps;
		class op_planar_constraint;
		struct model_reference_t;
		class op_selectively_enable_children;
		class cparticle_function_initializer;
		class op_noise_emitter;
		class init_initial_sequence_from_model;
		class init_remap_scalar_to_vector;
		class init_remap_named_model_body_part_to_scalar;
		class op_radius_decay;
		class init_create_within_sphere_transform;
		class op_snapshot_skin_to_bones;
		class op_set_cporientation_to_ground_normal;
		class op_time_varying_force;
		struct texture_group_t;
		struct texture_controls_t;
		class op_set_control_point_field_to_water;
		class op_lerp_vector;
		class init_initial_velocity_from_hitbox;
		class init_radius_from_cpobject;
		class init_global_scale;
		class op_hsvshift_to_cp;
		class op_remap_bounding_volumeto_cp;
		class op_render_screen_shake;
		class op_fade_in;
		class op_set_simulation_rate;
		class init_orient2_drel_to_cp;
		class op_curl_noise_force;
		class icontrol_point_editor_data;
		class op_set_control_point_rotation;
		class op_remap_cpto_cp;
		class op_remap_dot_product_to_scalar;
		class op_remap_average_scalar_valueto_cp;
		class op_set_control_point_to_center;
		class op_remap_control_point_orientation_to_rotation;
		class op_distance_to_transform;
		class op_render_standard_light;
		class op_set_variable;
		class cparticle_variable_ref;
		class op_wind_force;
		class iparticle_system_definition;
		class init_remap_cpto_scalar;
		class op_render_status_effect_citadel;
		class op_clamp_vector;
		class init_remap_named_model_element_to_scalar;
		class op_lock_to_saved_sequential_path;
		class cpath_parameters;
		class cgeneral_spin;
		class op_stop_after_cpduration;
		class op_remap_named_model_body_part_end_cap;
		class op_maintain_sequential_path;
		class op_set_control_point_from_object_scale;
		class op_remap_named_model_sequence_once_timed;
		class op_ramp_scalar_spline;
		class op_color_interpolate;
		class particle_world_handle__;
		class op_fade_and_kill;
		class init_remap_initial_transform_direction_to_rotation;
		class init_position_offset_to_cp;
		class op_maintain_emitter;
		class init_velocity_from_normal;
		class op_max_velocity;
		class op_render_projected;
		class init_random_named_model_mesh_group;
		class op_per_particle_force;
		class op_inherit_from_peer_system;
		class init_create_on_model;
		class init_init_float;
		class op_movement_rotate_particle_around_axis;
		class op_set_float_attribute_to_vector_expression;
		class cparticle_remap_float_input;
		class op_set_control_point_positions;
		class op_constrain_distance_to_user_specified_path;
		class init_create_in_epitrochoid;
		class op_density_force;
		class init_create_particle_impulse;
		class op_remap_cpto_vector;
		class op_pin_particle_to_cp;
		class op_rt_env_cull;
		class op_drive_cpfrom_global_sound_float;
		class op_remap_direction_to_cpto_vector;
		class op_chladni_wave;
		class op_set_child_control_points;
		class op_shape_matching_constraint;
		class init_normal_align_to_cp;
		class init_position_offset;
		class crandom_number_generator_parameters;
		class op_set_control_point_to_water_surface;
		class init_inherit_velocity;
		class op_render_cables;
		class init_init_from_cpsnapshot;
		class op_remap_named_model_sequence_end_cap;
		class init_plane_cull;
		class op_percentage_between_transforms;
		class op_set_control_point_field_from_vector_expression;
		class op_difference_previous_particle;
		class op_set_control_point_to_hmd;
		class op_clamp_scalar;
		class init_initial_repulsion_velocity;
		class op_lerp_scalar;
		class op_movement_move_along_skinned_cpsnapshot;
		class init_set_hitbox_to_model;
		class init_init_vec;
		class op_remap_density_gradient_to_vector_attribute;
		class op_alpha_decay;
		class op_sequence_from_model;
		class op_color_adjust_hsl;
		class op_fade_and_kill_for_tracers;
		class op_noise;
		class op_collide_with_self;
		class op_lag_compensation;
		class init_init_skinned_position_from_cpsnapshot;
		class init_remap_particle_count_to_named_model_body_part_scalar;
		class op_connect_parent_particle_to_nearest;
		class op_render_omni2_light;
		class particle_ehandle__;
		class init_random_named_model_body_part;
		class iparticle_effect;
		class init_create_from_parent_particles;
		class op_set_vec;
		class op_movement_maintain_offset;
		class op_remap_named_model_body_part_once_timed;
		class op_lock_to_bone;
		class op_calculate_vector_attribute;
		struct control_point_reference_t;
		class op_dampen_to_cp;
		class op_distance_between_vecs;
		class cgeneral_random_rotation;
		class op_remap_vector_component_to_scalar;
		class init_age_noise;
		class op_diffusion;
		class op_set_control_point_position_to_random_active_cp;
		struct point_definition_t;
		class op_set_float_collection;
		class init_random_second_sequence;
		class op_inherit_from_parent_particles_v2;
		class init_random_rotation_speed;
		class op_remap_transform_orientation_to_rotations;
		class op_remap_cross_product_of_two_vectors_to_vector;
		class op_set_cporientation_to_direction;
		class op_movement_place_on_ground;
		class op_lock_to_point_list;
		class op_set_cporientation_to_point_at_cp;
		class op_velocity_decay;
		class op_lerp_end_cap_vector;
		class init_random_rotation;
		class op_lerp_to_initial_position;
		class op_render_text;
		class op_read_from_neighboring_particle;
		struct sequence_weighted_list_t;
		class op_remap_sdfgradient_to_vector_attribute;
		class init_random_yaw_flip;
		class op_cull;
		class init_remap_transform_orientation_to_rotations;
		class op_normal_lock;
		class op_lock_to_saved_sequential_path_v2;
		class init_remap_initial_direction_to_transform_to_vector;
		struct vec_input_material_variable_t;
		class init_create_sequential_path_v2;
		class op_remap_visibility_scalar;
		class op_render_cloth_force;
		class op_restart_after_duration;
		class init_create_on_model_at_height;
		class init_random_alpha_window_threshold;
		class op_velocity_matching_force;
		class op_ramp_cplinear_random;
		class init_create_on_grid;
		class op_render_points;
		class init_color_lit_per_particle;
		class op_decay_clamp_count;
		class op_render_lights;
		class init_remap_named_model_sequence_to_scalar;
		class op_color_interpolate_random;
		class op_set_control_points_to_model_particles;
		class init_create_along_path;
		class op_remap_sdfdistance_to_scalar_attribute;
		class op_distance_cull;
		class op_constrain_distance_to_path;
		class op_set_control_point_to_hand;
		class op_distance_between_cps_to_cp;
		class op_set_from_cpsnapshot;
		class op_remap_vectorto_cp;
		class op_remap_distance_to_line_segment_to_scalar;
		class op_sdflighting;
		class init_remap_transform_to_vector;
		class op_set_float;
		class op_model_cull;
		class op_local_acceleration_force;
		class op_remap_particle_count_on_scalar_end_cap;
		class op_random_force;
		class op_render_status_effect;
		class op_remap_transform_orientation_to_yaw;
		class init_remap_initial_visibility_scalar;
		class init_add_vector_to_vector;
		class op_particle_physics;
		class op_set_vector_attribute_to_vector_expression;
		class init_init_from_vector_field_snapshot;
		class op_collide_with_parent_particles;
		class init_distance_cull;
		class op_ramp_scalar_spline_simple;
		class init_random_sequence;
		class op_fade_out;
		class op_oscillate_scalar;
		class op_render_blobs;
		class op_world_trace_constraint;
		class op_render_post_processing;
		class init_random_scalar;
		class init_position_place_on_ground;
		class op_cylindrical_distance_to_transform;
		class op_vector_field_snapshot;
		class op_controlpoint_light;
		class op_choose_random_children_in_group;
		class init_create_within_box;
		class op_update_light_source;
		class op_render_screen_velocity_rotate;
		class op_percentage_between_transforms_vector;
		class op_remap_named_model_mesh_group_end_cap;
		class cparticle_system_definition;
		class cparticle_function_renderer;
		class cparticle_visibility_inputs;
		class op_remap_cpto_scalar;
		class init_distance_to_neighbor_cull;
		class op_set_single_control_point_position;
		class op_snapshot_rigid_skin_to_bones;
		class init_random_yaw;
		struct particle_named_value_source_t;
		struct particle_named_value_configuration_t;
		class op_set_cpto_vector;
		class op_drag_relative_to_plane;
		class cparticle_function_operator;
		class op_remap_control_point_direction_to_vector;
		class op_remap_transform_visibility_to_scalar;
		class op_set_random_control_point_position;
		class cnew_particle_effect;
		class op_render_gpu_implicit;
		class op_end_cap_timed_freeze;
		class op_set_control_point_to_player;
		class op_remap_named_model_element_once_timed;
		class op_turbulence_force;
		class op_reinitialize_scalar_end_cap;
		class op_interpolate_radius;
		class op_set_control_point_to_impact_point;
		class op_render_vrhaptic_event;
		class op_position_lock;
		class op_oscillate_vector;
		class op_movement_skinned_position_from_cpsnapshot;
		class op_set_control_point_orientation;
		class init_velocity_from_cp;
		class cbase_trail_renderer;
		class init_lifespan_from_velocity;
		class op_constrain_line_length;
		class op_instantaneous_emitter;
		class cparticle_vec_input;
		class op_spin;
		class init_creation_noise;
		class op_render_as_models;
		class op_remap_distance_to_line_segment_to_vector;
		class init_normal_offset;
		class op_spin_update;
		class op_control_point_to_radial_screen_space;
		class init_create_from_plane_cache;
		class op_remap_scalar_end_cap;
		class init_init_float_collection;
		class op_play_end_cap_when_finished;
		class op_quantize_cpcomponent;
		class op_movement_loop_inside_sphere;
		class op_direction_between_vecs_to_vec;
		class op_remap_transform_visibility_to_vector;
		class init_set_vector_attribute_to_vector_expression;
		class op_inherit_from_parent_particles;
		class init_random_vector_component;
		class cparticle_function_force;
		class op_set_control_point_field_to_scalar_expression;
		class op_sdfconstraint;
		class init_position_warp;
		class init_remap_qangles_to_rotation;
		class init_remap_speed_to_scalar;
		class cparticle_input;
		class op_remap_named_model_mesh_group_once_timed;
		class op_lightning_snapshot_generator;
		class op_set_control_point_to_vector_expression;
		class op_orient2_drel_to_cp;
		class init_random_radius;
		class init_velocity_radial_random;
		class init_remap_particle_count_to_named_model_sequence_scalar;
		class init_random_life_time;
		class op_attract_to_control_point;
		class init_create_phyllotaxis;
		class op_box_constraint;
		class op_sdfforce;
		class op_set_parent_control_points_to_child_cp;
		class op_set_per_child_control_point_from_attribute;
		class init_offset_vector_to_vector;
		class op_global_light;
		class cparticle_function;
		class op_callback;
		class init_init_from_parent_killed;
		class init_random_named_model_element;
		class op_basic_movement;
		class cparticle_collection_binding_instance;
		class op_quantize_float;
		class init_remap_scalar;
		class init_move_between_points;
		class init_sequence_life_time;
		class op_oscillate_vector_simple;
		class op_continuous_emitter;
		class op_remap_distance_to_line_segment_base;
		class op_end_cap_timed_decay;
		class init_create_sequential_path;
		class op_decay_offscreen;
		class op_distance_between_transforms;
		class op_remap_scalar;
		class init_random_trail_length;
		class init_ring_wave;
		class init_set_hitbox_to_closest;
		class op_remap_velocity_to_vector;
		class op_render_tonemap_controller;
		class op_repeated_trigger_child_group;
		class op_fade_in_simple;
		class op_normalize_vector;
		class init_random_alpha;
		class op_remap_average_hitbox_speedto_cp;
		class op_external_game_impulse_force;
		class init_random_model_sequence;
		class op_decay_maintain_count;
		class op_set_control_point_position_to_time_of_day_value;
		class op_render_trails;
		class init_remap_particle_count_to_named_model_element_scalar;
		class op_remap_dot_product_to_cp;
		class op_orient_to2d_direction;
		class cspin_update_base;
		class cbase_renderer_source2;
		class op_remap_external_wind_to_cp;
		class op_teleport_beam;
		class op_twist_around_axis;
		class op_model_dampen_movement;
		class init_velocity_random;
		class op_plane_cull;
		class init_random_named_model_sequence;
		class op_remap_scalar_once_timed;
		struct particle_children_info_t;
		class init_initial_velocity_noise;
		class init_random_vector;
		class op_constrain_distance;
		class init_rt_env_cull;
		class init_status_effect;
		class op_oscillate_scalar_simple;
		struct particle_preview_body_group_t;
		class op_point_vector_at_next_particle;
		class op_remap_cpvelocity_to_vector;
		class op_remap_sdfdistance_to_vector_attribute;
		class op_set_control_points_to_particle;
		class op_render_sound;
		class init_status_effect_citadel;
		class op_render_ropes;
		class op_spring_to_vector_constraint;
		class op_fade_out_simple;
		class cparticle_function_pre_emission;
		struct collision_group_context_t;
		class op_remap_transform_to_velocity;
		class op_remap_speedto_cp;
		class op_render_deferred_light;
		class op_decay;
		struct relationship_t;
		class cnav_volume_sphere;
		class cnav_volume_all;
		class cnetwork_velocity_vector;
		class canim_graph_controller_base;
		struct hudtextparms_t;
		class iragdoll;
		struct csadditional_match_stats_t;
		struct dynpitchvol_t;
		class cnav_volume_breadth_first_search;
		class cteamplay_rules;
		class cbreakable_stage_helper;
		class centity_subclass_vdata_base;
		struct model_config_handle_t;
		struct csadditional_per_round_stats_t;
		class cresponse_queue__cdeferred_response;
		class cresponse_criteria_set;
		class crr_response;
		class cbt_node_decorator;
		class cfiring_mode_int;
		class canim_graph_tag_ref;
		class cnav_volume_calculated_vector;
		class csingleplay_rules;
		class canim_event_listener;
		class cnav_hull_vdata;
		class cin_button_state;
		class ciron_sight_controller;
		class ctake_damage_summary_scope_guard;
		class cai_expresser_with_followup;
		class response_followup;
		struct particle_index_t;
		class quest_progress;
		class cpulse_cell_value_find_ent_by_name;
		class cnav_volume;
		class cmultiplayer_expresser;
		class iecon_item_interface;
		class extent;
		class cbt_node_composite;
		class crand_sim_timer;
		class ctake_damage_info;
		struct ammo_index_t;
		class cconstant_force_controller;
		struct animation_update_list_handle_t;
		class response_params;
		class cpulse_cell_step_set_anim_graph_param;
		struct summary_take_damage_info_t;
		class ctake_damage_result;
		class cbase_issue;
		class cvote_controller;
		class csim_timer;
		class cmotor_controller;
		struct game_ammo_type_info_t;
		class iskeleton_animation_controller;
		struct hull_flags_t;
		class cpulse_cell_step_ent_fire;
		struct ragdoll_t;
		class ihas_attributes;
		class csmooth_func;
		class ccopy_recipient_filter;
		class cfiring_mode_float;
		class cbt_node;
		struct locksound_t;
		struct game_time_t;
		class cpulse_cell_outflow_play_vcd;
		class csound_patch;
		class csound_envelope;
		class cscene_event_info;
		class cskill_float;
		class cnav_hull_preset_vdata;
		struct thinkfunc_t;
		struct game_tick_t;
		class cskill_int;
		class chint_message_queue;
		class cbase_player_controller;
		class cgame_rules;
		struct magnetted_objects_t;
		class cnetwork_origin_quantized_vector;
		class cnetwork_origin_cell_coord_quantized_vector;
		struct ragdollelement_t;
		struct command_tool_command_t;
		class ccspulse_server_funcs_globals;
		class cshatter_glass_shard;
		class csimple_stopwatch;
		class cgame_choreo_services;
		struct concept_history_t;
		class crand_stopwatch;
		class cpulse_server_funcs_sounds;
		class crange_int;
		struct ragdoll_creation_params_t;
		class cnav_link_movement_vdata;
		class cnetwork_transmit_component;
		class cnav_link_animgraph_var;
		struct ammo_type_info_t;
		class ccommentary_system;
		class velocity_sampler;
		class cphysics_shake;
		class cmultiplay_rules;
		class cnav_volume_vector;
		class cpulse_cell_inflow_game_event;
		class cstopwatch_base;
		struct dynpitchvol_base_t;
		class constraint_sound_info;
		class simple_constraint_sound_profile;
		class cstopwatch;
		class ichoreo_services;
		class cai_expresser;
		class cbase_flex;
		class cnav_volume_markup_volume;
		class cskeleton_animation_controller;
		class cskeleton_instance;
		class cgame_scripted_move_data;
		class ccsgoplayer_anim_graph_state;
		class cplayer_pawn_component;
		class cnav_volume_spherical_shell;
		struct response_context_t;
		class cnetwork_view_offset_vector;
		class canim_event_listener_base;
		class cskill_damage;
		class ivehicle;
		class csimple_sim_timer;
		struct lerpdata_t;
		class cscript_uniform_random_stream;
		class cpulse_cell_sound_event_start;
		class cresponse_queue;
		class csound;
		class cplayer_controller_component;
		class cfootstep_table_handle;
		class chint_message;
		class cpulse_server_funcs;
		class cremap_float;
		struct relationship_override_t;
		class canim_event_queue_listener;
		struct composite_material_t;
		class light_glow_overlay;
		struct composite_material_match_filter_t;
		class iclient_alpha_property;
		class cglobal_light_base;
		class cclient_alpha_property;
		class ccomposite_material_editor_doc;
		class ccomic_book;
		struct comp_mat_property_mutator_t;
		struct composite_material_input_loose_variable_t;
		class singleplay_rules;
		class teamplay_rules;
		struct comp_mat_mutator_condition_t;
		class cfire_overlay;
		class fire_smoke;
		class iron_sight_controller;
		class cplayer_spray_decal_render_helper;
		struct composite_material_editor_point_t;
		class command_context;
		class game_rules;
		class cglow_sprite;
		class cflashlight_effect;
		class timed_event;
		class cinterpolated_value;
		class sun_glow_overlay;
		class cglow_overlay;
		class cdecal_info;
		struct composite_material_assembly_procedure_t;
		struct composite_material_input_container_t;
		class multiplay_rules;
		struct generated_texture_handle_t;
		class canim_script_base;
		class empty_test_script;
		
		class cexample_schema_vdata_monomorphic
		{
		public:
			MEMBER(example1, cexample_schema_vdata_monomorphic, int);
			MEMBER(example2, cexample_schema_vdata_monomorphic, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cexample_schema_vdata_monomorphic

		struct resource_id_t
		{
			MEMBER(value, resource_id_t, uint64_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct resource_id_t

		class cexample_schema_vdata_polymorphic_base
		{
		public:
			MEMBER(base, cexample_schema_vdata_polymorphic_base, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cexample_schema_vdata_polymorphic_base

		class cexample_schema_vdata_polymorphic_derivedb : public cexample_schema_vdata_polymorphic_base
		{
		public:
			MEMBER(derivedb, cexample_schema_vdata_polymorphic_derivedb, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cexample_schema_vdata_polymorphic_derivedb : public cexample_schema_vdata_polymorphic_base

		class cexample_schema_vdata_polymorphic_derived_a : public cexample_schema_vdata_polymorphic_base
		{
		public:
			MEMBER(derived_a, cexample_schema_vdata_polymorphic_derived_a, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cexample_schema_vdata_polymorphic_derived_a : public cexample_schema_vdata_polymorphic_base

		class cschema_system_internal_registration
		{
		public:
			MEMBER(vector2d, cschema_system_internal_registration, vector2d);
			MEMBER(vector, cschema_system_internal_registration, vector);
			MEMBER(vector_aligned, cschema_system_internal_registration, vector_aligned);
			MEMBER(quaternion, cschema_system_internal_registration, quaternion);
			MEMBER(qangle, cschema_system_internal_registration, qangle);
			MEMBER(rotation_vector, cschema_system_internal_registration, rotation_vector);
			MEMBER(radian_euler, cschema_system_internal_registration, radian_euler);
			MEMBER(degree_euler, cschema_system_internal_registration, degree_euler);
			MEMBER(quaternion_storage, cschema_system_internal_registration, quaternion_storage);
			MEMBER(matrix3x4_t, cschema_system_internal_registration, matrix3x4_t);
			MEMBER(matrix3x4a_t, cschema_system_internal_registration, matrix3x4a_t);
			MEMBER(color, cschema_system_internal_registration, color);
			MEMBER(vector4d, cschema_system_internal_registration, vector4d);
			MEMBER(ctransform, cschema_system_internal_registration, ctransform);
			MEMBER(key_values_ptr, cschema_system_internal_registration, key_values*);
			MEMBER(cutl_binary_block, cschema_system_internal_registration, cutl_binary_block);
			MEMBER(cutl_string, cschema_system_internal_registration, cutl_string);
			MEMBER(cutl_symbol, cschema_system_internal_registration, cutl_symbol);
			MEMBER(string_token, cschema_system_internal_registration, cutl_string_token);
			MEMBER(string_token_with_storage, cschema_system_internal_registration, cutl_string_token_with_storage);
			MEMBER(resource_types, cschema_system_internal_registration, cresource_array<cresource_pointer<cresource_string>>);
			MEMBER(kv3, cschema_system_internal_registration, key_values3);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cschema_system_internal_registration

		class info_for_resource_type_cresource_manifest_internal
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class info_for_resource_type_cresource_manifest_internal

		class info_for_resource_type_cdotapatch_notes_list
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class info_for_resource_type_cdotapatch_notes_list

		class info_for_resource_type_centity_lump
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class info_for_resource_type_centity_lump

		struct manifest_test_resource_t
		{
			MEMBER(name, manifest_test_resource_t, cutl_string);
			MEMBER(child, manifest_test_resource_t, cstrong_handle<info_for_resource_type_manifest_test_resource_t>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct manifest_test_resource_t

		class info_for_resource_type_csequence_group_data
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class info_for_resource_type_csequence_group_data

		class info_for_resource_type_iparticle_system_definition
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class info_for_resource_type_iparticle_system_definition

		struct fuse_variable_index_t
		{
			MEMBER(value, fuse_variable_index_t, uint16_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct fuse_variable_index_t

		class info_for_resource_type_ctexture_base
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class info_for_resource_type_ctexture_base

		class info_for_resource_type_cdotanovels_list
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class info_for_resource_type_cdotanovels_list

		class info_for_resource_type_cmodel
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class info_for_resource_type_cmodel

		class info_for_resource_type_cvdata_resource
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class info_for_resource_type_cvdata_resource

		struct fuse_function_index_t
		{
			MEMBER(value, fuse_function_index_t, uint16_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct fuse_function_index_t

		class info_for_resource_type_ipulse_graph_def
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class info_for_resource_type_ipulse_graph_def

		class info_for_resource_type_cpanorama_dynamic_images
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class info_for_resource_type_cpanorama_dynamic_images

		class info_for_resource_type_ivector_graphic
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class info_for_resource_type_ivector_graphic

		class info_for_resource_type_imaterial2
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class info_for_resource_type_imaterial2

		class info_for_resource_type_canim_data
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class info_for_resource_type_canim_data

		class info_for_resource_type_cvmix_list_resource
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class info_for_resource_type_cvmix_list_resource

		class info_for_resource_type_ccomposite_material_kit
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class info_for_resource_type_ccomposite_material_kit

		class cfuse_program
		{
		public:
			MEMBER(program_buffer, cfuse_program, cutl_vector<uint8_t>);
			MEMBER(variables_read, cfuse_program, cutl_vector<fuse_variable_index_t>);
			MEMBER(variables_written, cfuse_program, cutl_vector<fuse_variable_index_t>);
			MEMBER(max_temp_vars_used, cfuse_program, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cfuse_program

		class info_for_resource_type_csmart_prop
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class info_for_resource_type_csmart_prop

		class info_for_resource_type_ccsgoecon_item
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class info_for_resource_type_ccsgoecon_item

		class info_for_resource_type_cworld_node
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class info_for_resource_type_cworld_node

		class info_for_resource_type_cpanorama_style
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class info_for_resource_type_cpanorama_style

		class info_for_resource_type_cdacgame_defs_data
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class info_for_resource_type_cdacgame_defs_data

		class info_for_resource_type_cvsound_event_script_list
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class info_for_resource_type_cvsound_event_script_list

		class info_for_resource_type_canimation_group
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class info_for_resource_type_canimation_group

		struct info_for_resource_type_vsound_t
		{
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct info_for_resource_type_vsound_t

		struct info_for_resource_type_test_resource_t
		{
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct info_for_resource_type_test_resource_t

		class info_for_resource_type_cnm_skeleton
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class info_for_resource_type_cnm_skeleton

		class info_for_resource_type_ctype_script_resource
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class info_for_resource_type_ctype_script_resource

		class info_for_resource_type_cpanorama_layout
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class info_for_resource_type_cpanorama_layout

		class four_quaternions
		{
		public:
			MEMBER(x, four_quaternions, fltx4);
			MEMBER(y, four_quaternions, fltx4);
			MEMBER(z, four_quaternions, fltx4);
			MEMBER(w, four_quaternions, fltx4);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class four_quaternions

		class info_for_resource_type_iparticle_snapshot
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class info_for_resource_type_iparticle_snapshot

		struct variable_info_t
		{
			MEMBER(name, variable_info_t, cutl_string);
			MEMBER(name_token, variable_info_t, cutl_string_token);
			MEMBER(index, variable_info_t, fuse_variable_index_t);
			MEMBER(num_components, variable_info_t, uint8_t);
			MEMBER(e_var_type, variable_info_t, fuse_variable_type_t);
			MEMBER(e_access, variable_info_t, fuse_variable_access_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct variable_info_t

		class info_for_resource_type_cpost_processing_resource
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class info_for_resource_type_cpost_processing_resource

		struct aabb_t
		{
			MEMBER(v_min_bounds, aabb_t, vector);
			MEMBER(v_max_bounds, aabb_t, vector);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct aabb_t

		struct info_for_resource_type_procedural_test_resource_t
		{
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct info_for_resource_type_procedural_test_resource_t

		struct info_for_resource_type_world_t
		{
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct info_for_resource_type_world_t

		class info_for_resource_type_cnm_clip
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class info_for_resource_type_cnm_clip

		class info_for_resource_type_cphys_aggregate_data
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class info_for_resource_type_cphys_aggregate_data

		struct test_resource_t
		{
			MEMBER(name, test_resource_t, cutl_string);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct test_resource_t

		class info_for_resource_type_cvoxel_visibility
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class info_for_resource_type_cvoxel_visibility

		class info_for_resource_type_crender_mesh
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class info_for_resource_type_crender_mesh

		class cfuse_symbol_table
		{
		public:
			MEMBER(constants, cfuse_symbol_table, cutl_vector<constant_info_t>);
			MEMBER(variables, cfuse_symbol_table, cutl_vector<variable_info_t>);
			MEMBER(functions, cfuse_symbol_table, cutl_vector<function_info_t>);
			MEMBER(constant_map, cfuse_symbol_table, cutl_hashtable<cutl_string_token, int32>);
			MEMBER(variable_map, cfuse_symbol_table, cutl_hashtable<cutl_string_token, int32>);
			MEMBER(function_map, cfuse_symbol_table, cutl_hashtable<cutl_string_token, int32>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cfuse_symbol_table

		class info_for_resource_type_cjava_script_resource
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class info_for_resource_type_cjava_script_resource

		class info_for_resource_type_ianim_graph_model_binding
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class info_for_resource_type_ianim_graph_model_binding

		struct function_info_t
		{
			MEMBER(name, function_info_t, cutl_string);
			MEMBER(name_token, function_info_t, cutl_string_token);
			MEMBER(param_count, function_info_t, int);
			MEMBER(index, function_info_t, fuse_function_index_t);
			MEMBER(is_pure, function_info_t, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct function_info_t

		struct constant_info_t
		{
			MEMBER(name, constant_info_t, cutl_string);
			MEMBER(name_token, constant_info_t, cutl_string_token);
			MEMBER(value, constant_info_t, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct constant_info_t

		struct info_for_resource_type_manifest_test_resource_t
		{
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct info_for_resource_type_manifest_test_resource_t

		class info_for_resource_type_cvphys_xsurface_properties_list
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class info_for_resource_type_cvphys_xsurface_properties_list

		struct packed_aabb_t
		{
			MEMBER(packed_min, packed_aabb_t, uint32_t);
			MEMBER(packed_max, packed_aabb_t, uint32_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct packed_aabb_t

		class info_for_resource_type_cvsound_stack_script_list
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class info_for_resource_type_cvsound_stack_script_list

		class info_for_resource_type_cchoreo_scene_file_data
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class info_for_resource_type_cchoreo_scene_file_data

		class info_for_resource_type_cmorph_set_data
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class info_for_resource_type_cmorph_set_data

		class info_for_resource_type_cdota_item_definition_resource
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class info_for_resource_type_cdota_item_definition_resource

		class info_for_resource_type_cresponse_rules_list
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class info_for_resource_type_cresponse_rules_list

		struct render_input_layout_field_t
		{
			MEMBER_ARR(semantic_name_arr, render_input_layout_field_t, 32, uint8_t);
			MEMBER(semantic_index, render_input_layout_field_t, int);
			MEMBER(format, render_input_layout_field_t, uint32_t);
			MEMBER(offset, render_input_layout_field_t, int);
			MEMBER(slot, render_input_layout_field_t, int);
			MEMBER(slot_type, render_input_layout_field_t, render_slot_type_t);
			MEMBER(instance_step_rate, render_input_layout_field_t, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct render_input_layout_field_t

		struct vs_input_signature_t
		{
			MEMBER(elems, vs_input_signature_t, cutl_vector<vs_input_signature_element_t>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct vs_input_signature_t

		struct vs_input_signature_element_t
		{
			MEMBER_ARR(name_arr, vs_input_signature_element_t, 64, char);
			MEMBER_ARR(semantic_arr, vs_input_signature_element_t, 64, char);
			MEMBER_ARR(d3_dsemantic_name_arr, vs_input_signature_element_t, 64, char);
			MEMBER(d3_dsemantic_index, vs_input_signature_element_t, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct vs_input_signature_element_t

		struct engine_loop_state_t
		{
			MEMBER(plat_window_width, engine_loop_state_t, int);
			MEMBER(plat_window_height, engine_loop_state_t, int);
			MEMBER(render_width, engine_loop_state_t, int);
			MEMBER(render_height, engine_loop_state_t, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct engine_loop_state_t

		struct event_simulate_t
		{
			MEMBER(loop_state, event_simulate_t, engine_loop_state_t);
			MEMBER(first_tick, event_simulate_t, bool);
			MEMBER(last_tick, event_simulate_t, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct event_simulate_t

		struct event_client_poll_networking_t
		{
			MEMBER(tick_count, event_client_poll_networking_t, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct event_client_poll_networking_t

		struct event_client_process_input_t
		{
			MEMBER(loop_state, event_client_process_input_t, engine_loop_state_t);
			MEMBER(real_time, event_client_process_input_t, float);
			MEMBER(tick_interval, event_client_process_input_t, float);
			MEMBER(tick_start_time, event_client_process_input_t, double);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct event_client_process_input_t

		struct ent_component_info_t
		{
			MEMBER(name_ptr, ent_component_info_t, char*);
			MEMBER(cppclassname_ptr, ent_component_info_t, char*);
			MEMBER(network_data_referenced_description_ptr, ent_component_info_t, char*);
			MEMBER(network_data_referenced_ptr_prop_description_ptr, ent_component_info_t, char*);
			MEMBER(runtime_index, ent_component_info_t, int);
			MEMBER(flags, ent_component_info_t, uint32_t);
			MEMBER(base_class_component_helper_ptr, ent_component_info_t, centity_component_helper*);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct ent_component_info_t

		class cempty_entity_instance
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cempty_entity_instance

		struct event_server_process_networking_t : public event_simulate_t
		{
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct event_server_process_networking_t : public event_simulate_t

		struct event_server_poll_networking_t : public event_simulate_t
		{
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct event_server_poll_networking_t : public event_simulate_t

		struct ent_output_t
		{
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct ent_output_t

		struct event_set_time_t
		{
			MEMBER(loop_state, event_set_time_t, engine_loop_state_t);
			MEMBER(client_output_frames, event_set_time_t, int);
			MEMBER(real_time, event_set_time_t, double);
			MEMBER(render_time, event_set_time_t, double);
			MEMBER(render_frame_time, event_set_time_t, double);
			MEMBER(render_frame_time_unbounded, event_set_time_t, double);
			MEMBER(render_frame_time_unscaled, event_set_time_t, double);
			MEMBER(tick_remainder, event_set_time_t, double);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct event_set_time_t

		struct event_advance_tick_t : public event_simulate_t
		{
			MEMBER(current_tick, event_advance_tick_t, int);
			MEMBER(current_tick_this_frame, event_advance_tick_t, int);
			MEMBER(total_ticks_this_frame, event_advance_tick_t, int);
			MEMBER(total_ticks, event_advance_tick_t, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct event_advance_tick_t : public event_simulate_t

		struct event_client_send_input_t
		{
			MEMBER(final_client_command_tick, event_client_send_input_t, bool);
			MEMBER(additional_client_commands_to_create, event_client_send_input_t, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct event_client_send_input_t

		struct event_client_frame_simulate_t
		{
			MEMBER(loop_state, event_client_frame_simulate_t, engine_loop_state_t);
			MEMBER(real_time, event_client_frame_simulate_t, float);
			MEMBER(frame_time, event_client_frame_simulate_t, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct event_client_frame_simulate_t

		struct event_client_pre_output_t
		{
			MEMBER(loop_state, event_client_pre_output_t, engine_loop_state_t);
			MEMBER(render_time, event_client_pre_output_t, double);
			MEMBER(render_frame_time, event_client_pre_output_t, double);
			MEMBER(render_frame_time_unbounded, event_client_pre_output_t, double);
			MEMBER(real_time, event_client_pre_output_t, float);
			MEMBER(render_only, event_client_pre_output_t, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct event_client_pre_output_t

		struct event_mod_initialized_t
		{
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct event_mod_initialized_t

		class cvariant_default_allocator
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cvariant_default_allocator

		struct event_post_advance_tick_t : public event_simulate_t
		{
			MEMBER(current_tick, event_post_advance_tick_t, int);
			MEMBER(current_tick_this_frame, event_post_advance_tick_t, int);
			MEMBER(total_ticks_this_frame, event_post_advance_tick_t, int);
			MEMBER(total_ticks, event_post_advance_tick_t, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct event_post_advance_tick_t : public event_simulate_t

		struct event_split_screen_state_changed_t
		{
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct event_split_screen_state_changed_t

		struct event_server_advance_tick_t : public event_advance_tick_t
		{
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct event_server_advance_tick_t : public event_advance_tick_t

		struct event_client_process_networking_t
		{
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct event_client_process_networking_t

		struct event_client_pause_simulate_t : public event_simulate_t
		{
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct event_client_pause_simulate_t : public event_simulate_t

		struct event_client_pre_simulate_t : public event_simulate_t
		{
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct event_client_pre_simulate_t : public event_simulate_t

		struct event_post_data_update_t
		{
			MEMBER(count, event_post_data_update_t, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct event_post_data_update_t

		struct event_profile_storage_available_t
		{
			MEMBER(split_screen_slot, event_profile_storage_available_t, csplit_screen_slot);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct event_profile_storage_available_t

		struct event_server_post_advance_tick_t : public event_post_advance_tick_t
		{
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct event_server_post_advance_tick_t : public event_post_advance_tick_t

		struct event_server_simulate_t : public event_simulate_t
		{
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct event_server_simulate_t : public event_simulate_t

		struct event_app_shutdown_t
		{
			MEMBER(dummy0, event_app_shutdown_t, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct event_app_shutdown_t

		struct event_frame_boundary_t
		{
			MEMBER(frame_time, event_frame_boundary_t, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct event_frame_boundary_t

		struct event_client_process_game_input_t
		{
			MEMBER(loop_state, event_client_process_game_input_t, engine_loop_state_t);
			MEMBER(real_time, event_client_process_game_input_t, float);
			MEMBER(frame_time, event_client_process_game_input_t, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct event_client_process_game_input_t

		struct event_client_prediction_post_netupdate_t
		{
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct event_client_prediction_post_netupdate_t

		struct event_pre_data_update_t
		{
			MEMBER(count, event_pre_data_update_t, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct event_pre_data_update_t

		struct event_client_poll_input_t
		{
			MEMBER(loop_state, event_client_poll_input_t, engine_loop_state_t);
			MEMBER(real_time, event_client_poll_input_t, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct event_client_poll_input_t

		struct event_client_post_output_t
		{
			MEMBER(loop_state, event_client_post_output_t, engine_loop_state_t);
			MEMBER(render_time, event_client_post_output_t, double);
			MEMBER(render_frame_time, event_client_post_output_t, float);
			MEMBER(render_frame_time_unbounded, event_client_post_output_t, float);
			MEMBER(render_only, event_client_post_output_t, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct event_client_post_output_t

		struct event_client_simulate_t : public event_simulate_t
		{
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct event_client_simulate_t : public event_simulate_t

		struct change_accessor_field_path_index_t
		{
			MEMBER(value, change_accessor_field_path_index_t, short);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct change_accessor_field_path_index_t

		struct ent_input_t
		{
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct ent_input_t

		struct event_client_advance_tick_t : public event_advance_tick_t
		{
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct event_client_advance_tick_t : public event_advance_tick_t

		class centity_component_helper
		{
		public:
			MEMBER(flags, centity_component_helper, uint32_t);
			MEMBER(info_ptr, centity_component_helper, ent_component_info_t*);
			MEMBER(priority, centity_component_helper, int);
			MEMBER(next_ptr, centity_component_helper, centity_component_helper*);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class centity_component_helper

		struct event_server_post_simulate_t : public event_simulate_t
		{
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct event_server_post_simulate_t : public event_simulate_t

		struct event_client_output_t
		{
			MEMBER(loop_state, event_client_output_t, engine_loop_state_t);
			MEMBER(render_time, event_client_output_t, float);
			MEMBER(real_time, event_client_output_t, float);
			MEMBER(render_frame_time_unbounded, event_client_output_t, float);
			MEMBER(render_only, event_client_output_t, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct event_client_output_t

		struct event_client_scene_system_thread_state_change_t
		{
			MEMBER(threads_active, event_client_scene_system_thread_state_change_t, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct event_client_scene_system_thread_state_change_t

		class centity_iooutput
		{
		public:
			MEMBER(value, centity_iooutput, cvariant_base<cvariant_default_allocator>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class centity_iooutput

		struct event_client_post_advance_tick_t : public event_post_advance_tick_t
		{
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct event_client_post_advance_tick_t : public event_post_advance_tick_t

		struct event_simple_loop_frame_update_t
		{
			MEMBER(loop_state, event_simple_loop_frame_update_t, engine_loop_state_t);
			MEMBER(real_time, event_simple_loop_frame_update_t, float);
			MEMBER(frame_time, event_simple_loop_frame_update_t, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct event_simple_loop_frame_update_t

		struct event_client_post_simulate_t : public event_simulate_t
		{
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct event_client_post_simulate_t : public event_simulate_t

		struct material_param_t
		{
			MEMBER(name, material_param_t, cutl_string);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct material_param_t

		struct material_param_float_t : public material_param_t
		{
			MEMBER(value, material_param_float_t, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct material_param_float_t : public material_param_t

		struct post_processing_bloom_parameters_t
		{
			MEMBER(blend_mode, post_processing_bloom_parameters_t, bloom_blend_mode_t);
			MEMBER(bloom_strength, post_processing_bloom_parameters_t, float);
			MEMBER(screen_bloom_strength, post_processing_bloom_parameters_t, float);
			MEMBER(blur_bloom_strength, post_processing_bloom_parameters_t, float);
			MEMBER(bloom_threshold, post_processing_bloom_parameters_t, float);
			MEMBER(bloom_threshold_width, post_processing_bloom_parameters_t, float);
			MEMBER(skybox_bloom_strength, post_processing_bloom_parameters_t, float);
			MEMBER(bloom_start_value, post_processing_bloom_parameters_t, float);
			MEMBER_ARR(blur_weight_arr, post_processing_bloom_parameters_t, 5, float);
			MEMBER_ARR(v_blur_tint_arr, post_processing_bloom_parameters_t, 5, vector);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct post_processing_bloom_parameters_t

		struct material_resource_data_t
		{
			MEMBER(material_name, material_resource_data_t, cutl_string);
			MEMBER(shader_name, material_resource_data_t, cutl_string);
			MEMBER(int_params, material_resource_data_t, cutl_vector<material_param_int_t>);
			MEMBER(float_params, material_resource_data_t, cutl_vector<material_param_float_t>);
			MEMBER(vector_params, material_resource_data_t, cutl_vector<material_param_vector_t>);
			MEMBER(texture_params, material_resource_data_t, cutl_vector<material_param_texture_t>);
			MEMBER(dynamic_params, material_resource_data_t, cutl_vector<material_param_buffer_t>);
			MEMBER(dynamic_texture_params, material_resource_data_t, cutl_vector<material_param_buffer_t>);
			MEMBER(int_attributes, material_resource_data_t, cutl_vector<material_param_int_t>);
			MEMBER(float_attributes, material_resource_data_t, cutl_vector<material_param_float_t>);
			MEMBER(vector_attributes, material_resource_data_t, cutl_vector<material_param_vector_t>);
			MEMBER(texture_attributes, material_resource_data_t, cutl_vector<material_param_texture_t>);
			MEMBER(string_attributes, material_resource_data_t, cutl_vector<material_param_string_t>);
			MEMBER(render_attributes_used, material_resource_data_t, cutl_vector<cutl_string>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct material_resource_data_t

		struct material_param_buffer_t : public material_param_t
		{
			MEMBER(value, material_param_buffer_t, cutl_binary_block);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct material_param_buffer_t : public material_param_t

		struct post_processing_tonemap_parameters_t
		{
			MEMBER(exposure_bias, post_processing_tonemap_parameters_t, float);
			MEMBER(shoulder_strength, post_processing_tonemap_parameters_t, float);
			MEMBER(linear_strength, post_processing_tonemap_parameters_t, float);
			MEMBER(linear_angle, post_processing_tonemap_parameters_t, float);
			MEMBER(toe_strength, post_processing_tonemap_parameters_t, float);
			MEMBER(toe_num, post_processing_tonemap_parameters_t, float);
			MEMBER(toe_denom, post_processing_tonemap_parameters_t, float);
			MEMBER(white_point, post_processing_tonemap_parameters_t, float);
			MEMBER(luminance_source, post_processing_tonemap_parameters_t, float);
			MEMBER(exposure_bias_shadows, post_processing_tonemap_parameters_t, float);
			MEMBER(exposure_bias_highlights, post_processing_tonemap_parameters_t, float);
			MEMBER(min_shadow_lum, post_processing_tonemap_parameters_t, float);
			MEMBER(max_shadow_lum, post_processing_tonemap_parameters_t, float);
			MEMBER(min_highlight_lum, post_processing_tonemap_parameters_t, float);
			MEMBER(max_highlight_lum, post_processing_tonemap_parameters_t, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct post_processing_tonemap_parameters_t

		struct post_processing_local_contrast_parameters_t
		{
			MEMBER(local_contrast_strength, post_processing_local_contrast_parameters_t, float);
			MEMBER(local_contrast_edge_strength, post_processing_local_contrast_parameters_t, float);
			MEMBER(local_contrast_vignette_start, post_processing_local_contrast_parameters_t, float);
			MEMBER(local_contrast_vignette_end, post_processing_local_contrast_parameters_t, float);
			MEMBER(local_contrast_vignette_blur, post_processing_local_contrast_parameters_t, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct post_processing_local_contrast_parameters_t

		struct post_processing_vignette_parameters_t
		{
			MEMBER(vignette_strength, post_processing_vignette_parameters_t, float);
			MEMBER(v_center, post_processing_vignette_parameters_t, vector2d);
			MEMBER(radius, post_processing_vignette_parameters_t, float);
			MEMBER(roundness, post_processing_vignette_parameters_t, float);
			MEMBER(feather, post_processing_vignette_parameters_t, float);
			MEMBER(v_color_tint, post_processing_vignette_parameters_t, vector);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct post_processing_vignette_parameters_t

		struct material_param_int_t : public material_param_t
		{
			MEMBER(value, material_param_int_t, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct material_param_int_t : public material_param_t

		struct post_processing_resource_t
		{
			MEMBER(has_tonemap_params, post_processing_resource_t, bool);
			MEMBER(tone_map_params, post_processing_resource_t, post_processing_tonemap_parameters_t);
			MEMBER(has_bloom_params, post_processing_resource_t, bool);
			MEMBER(bloom_params, post_processing_resource_t, post_processing_bloom_parameters_t);
			MEMBER(has_vignette_params, post_processing_resource_t, bool);
			MEMBER(vignette_params, post_processing_resource_t, post_processing_vignette_parameters_t);
			MEMBER(has_local_contrast_params, post_processing_resource_t, bool);
			MEMBER(local_constrast_params, post_processing_resource_t, post_processing_local_contrast_parameters_t);
			MEMBER(color_correction_volume_dim, post_processing_resource_t, int);
			MEMBER(color_correction_volume_data, post_processing_resource_t, cutl_binary_block);
			MEMBER(has_color_correction, post_processing_resource_t, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct post_processing_resource_t

		struct material_param_string_t : public material_param_t
		{
			MEMBER(value, material_param_string_t, cutl_string);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct material_param_string_t : public material_param_t

		struct material_param_vector_t : public material_param_t
		{
			MEMBER(value, material_param_vector_t, vector4d);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct material_param_vector_t : public material_param_t

		struct material_param_texture_t : public material_param_t
		{
			MEMBER(value, material_param_texture_t, cstrong_handle<info_for_resource_type_ctexture_base>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct material_param_texture_t : public material_param_t

		class cnetwork_var_chainer
		{
		public:
			MEMBER(path_index, cnetwork_var_chainer, change_accessor_field_path_index_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cnetwork_var_chainer

		class canim_tag_manager_updater
		{
		public:
			MEMBER(tags, canim_tag_manager_updater, cutl_vector<csmart_ptr<canim_tag_base>>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class canim_tag_manager_updater

		class cmodel_config_element
		{
		public:
			MEMBER(element_name, cmodel_config_element, cutl_string);
			MEMBER(nested_elements, cmodel_config_element, cutl_vector<cmodel_config_element*>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cmodel_config_element

		class cmood_vdata
		{
		public:
			MEMBER(s_model_name, cmood_vdata, cresource_name_typed<cweak_handle<info_for_resource_type_cmodel>>);
			MEMBER(mood_type, cmood_vdata, mood_type_t);
			MEMBER(animation_layers, cmood_vdata, cutl_vector<mood_animation_layer_t>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cmood_vdata

		class canim_node_path
		{
		public:
			MEMBER_ARR(path_arr, canim_node_path, 11, anim_node_id);
			MEMBER(count, canim_node_path, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class canim_node_path

		class canim_update_node_ref
		{
		public:
			MEMBER(node_index, canim_update_node_ref, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class canim_update_node_ref

		class cproduct_quantizer
		{
		public:
			MEMBER(sub_quantizers, cproduct_quantizer, cutl_vector<cvector_quantizer>);
			MEMBER(dimensions, cproduct_quantizer, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cproduct_quantizer

		struct foot_fixed_data_t
		{
			MEMBER(v_toe_offset, foot_fixed_data_t, vector_aligned);
			MEMBER(v_heel_offset, foot_fixed_data_t, vector_aligned);
			MEMBER(target_bone_index, foot_fixed_data_t, int);
			MEMBER(ankle_bone_index, foot_fixed_data_t, int);
			MEMBER(ikanchor_bone_index, foot_fixed_data_t, int);
			MEMBER(ik_chain_index, foot_fixed_data_t, int);
			MEMBER(max_iklength, foot_fixed_data_t, float);
			MEMBER(foot_index, foot_fixed_data_t, int);
			MEMBER(tag_index, foot_fixed_data_t, int);
			MEMBER(max_rotation_left, foot_fixed_data_t, float);
			MEMBER(max_rotation_right, foot_fixed_data_t, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct foot_fixed_data_t

		class canim_morph_difference
		{
		public:
			MEMBER(name, canim_morph_difference, cbuffer_string);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class canim_morph_difference

		struct attachment_handle_t
		{
			MEMBER(value, attachment_handle_t, uint8_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct attachment_handle_t

		class canim_key_data
		{
		public:
			MEMBER(name, canim_key_data, cbuffer_string);
			MEMBER(bone_array, canim_key_data, cutl_vector<canim_bone>);
			MEMBER(user_array, canim_key_data, cutl_vector<canim_user>);
			MEMBER(morph_array, canim_key_data, cutl_vector<cbuffer_string>);
			MEMBER(channel_elements, canim_key_data, int);
			MEMBER(data_channel_array, canim_key_data, cutl_vector<canim_data_channel_desc>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class canim_key_data

		class canim_update_node_base
		{
		public:
			MEMBER(node_path, canim_update_node_base, canim_node_path);
			MEMBER(network_mode, canim_update_node_base, anim_node_network_mode);
			MEMBER(name, canim_update_node_base, cutl_string);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class canim_update_node_base

		class cfinger_bone
		{
		public:
			MEMBER(bone_name, cfinger_bone, cutl_string);
			MEMBER(hinge_axis, cfinger_bone, vector);
			MEMBER(v_capsule_pos1, cfinger_bone, vector);
			MEMBER(v_capsule_pos2, cfinger_bone, vector);
			MEMBER(min_angle, cfinger_bone, float);
			MEMBER(max_angle, cfinger_bone, float);
			MEMBER(radius, cfinger_bone, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cfinger_bone

		struct iksolver_settings_t
		{
			MEMBER(solver_type, iksolver_settings_t, iksolver_type);
			MEMBER(num_iterations, iksolver_settings_t, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct iksolver_settings_t

		class canim_data
		{
		public:
			MEMBER(name, canim_data, cbuffer_string);
			MEMBER(anim_array, canim_data, cutl_vector<canim_desc>);
			MEMBER(decoder_array, canim_data, cutl_vector<canim_decoder>);
			MEMBER(max_unique_frame_index, canim_data, int);
			MEMBER(segment_array, canim_data, cutl_vector<canim_frame_segment>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class canim_data

		class anim_component_id
		{
		public:
			MEMBER(id, anim_component_id, uint32_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class anim_component_id

		class canim_sequence_params
		{
		public:
			MEMBER(fade_in_time, canim_sequence_params, float);
			MEMBER(fade_out_time, canim_sequence_params, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class canim_sequence_params

		struct phys_softbody_desc_t
		{
			MEMBER(particle_bone_hash, phys_softbody_desc_t, cutl_vector<uint32_t>);
			MEMBER(particles, phys_softbody_desc_t, cutl_vector<rn_softbody_particle_t>);
			MEMBER(springs, phys_softbody_desc_t, cutl_vector<rn_softbody_spring_t>);
			MEMBER(capsules, phys_softbody_desc_t, cutl_vector<rn_softbody_capsule_t>);
			MEMBER(init_pose, phys_softbody_desc_t, cutl_vector<ctransform>);
			MEMBER(particle_bone_name, phys_softbody_desc_t, cutl_vector<cutl_string>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct phys_softbody_desc_t

		class cseq_auto_layer_flag
		{
		public:
			MEMBER(post, cseq_auto_layer_flag, bool);
			MEMBER(spline, cseq_auto_layer_flag, bool);
			MEMBER(xfade, cseq_auto_layer_flag, bool);
			MEMBER(no_blend, cseq_auto_layer_flag, bool);
			MEMBER(local, cseq_auto_layer_flag, bool);
			MEMBER(pose, cseq_auto_layer_flag, bool);
			MEMBER(fetch_frame, cseq_auto_layer_flag, bool);
			MEMBER(subtract, cseq_auto_layer_flag, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cseq_auto_layer_flag

		class cphys_surface_properties_audio
		{
		public:
			MEMBER(reflectivity, cphys_surface_properties_audio, float);
			MEMBER(hardness_factor, cphys_surface_properties_audio, float);
			MEMBER(roughness_factor, cphys_surface_properties_audio, float);
			MEMBER(rough_threshold, cphys_surface_properties_audio, float);
			MEMBER(hard_threshold, cphys_surface_properties_audio, float);
			MEMBER(hard_velocity_threshold, cphys_surface_properties_audio, float);
			MEMBER(static_impact_volume, cphys_surface_properties_audio, float);
			MEMBER(occlusion_factor, cphys_surface_properties_audio, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cphys_surface_properties_audio

		class anim_tag_id
		{
		public:
			MEMBER(id, anim_tag_id, uint32_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class anim_tag_id

		class canim_motor_updater_base
		{
		public:
			MEMBER(name, canim_motor_updater_base, cutl_string);
			MEMBER(default_, canim_motor_updater_base, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class canim_motor_updater_base

		class cbone_constraint_base
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cbone_constraint_base

		class cunary_update_node : public canim_update_node_base
		{
		public:
			MEMBER(child_node, cunary_update_node, canim_update_node_ref);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cunary_update_node : public canim_update_node_base

		class anim_script_handle
		{
		public:
			MEMBER(id, anim_script_handle, uint32_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class anim_script_handle

		class canim_attachment
		{
		public:
			MEMBER_ARR(influence_rotations_arr, canim_attachment, 3, quaternion);
			MEMBER_ARR(influence_offsets_arr, canim_attachment, 3, vector_aligned);
			MEMBER_ARR(influence_indices_arr, canim_attachment, 3, int);
			MEMBER_ARR(influence_weights_arr, canim_attachment, 3, float);
			MEMBER(num_influences, canim_attachment, uint8_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class canim_attachment

		class canim_input_damping
		{
		public:
			MEMBER(speed_function, canim_input_damping, damping_speed_function);
			MEMBER(speed_scale, canim_input_damping, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class canim_input_damping

		struct vphysics2_shape_def_t
		{
			MEMBER(spheres, vphysics2_shape_def_t, cutl_vector<rn_sphere_desc_t>);
			MEMBER(capsules, vphysics2_shape_def_t, cutl_vector<rn_capsule_desc_t>);
			MEMBER(hulls, vphysics2_shape_def_t, cutl_vector<rn_hull_desc_t>);
			MEMBER(meshes, vphysics2_shape_def_t, cutl_vector<rn_mesh_desc_t>);
			MEMBER(collision_attribute_indices, vphysics2_shape_def_t, cutl_vector<uint16_t>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct vphysics2_shape_def_t

		class canim_param_handle
		{
		public:
			MEMBER(type, canim_param_handle, anim_param_type_t);
			MEMBER(index, canim_param_handle, uint8_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class canim_param_handle

		struct skeleton_bone_bounds_t
		{
			MEMBER(vec_center, skeleton_bone_bounds_t, vector);
			MEMBER(vec_size, skeleton_bone_bounds_t, vector);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct skeleton_bone_bounds_t

		class anim_node_id
		{
		public:
			MEMBER(id, anim_node_id, uint32_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class anim_node_id

		class cvector_quantizer
		{
		public:
			MEMBER(centroid_vectors, cvector_quantizer, cutl_vector<float>);
			MEMBER(centroids, cvector_quantizer, int);
			MEMBER(dimensions, cvector_quantizer, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cvector_quantizer

		class cmodel_config_element_set_render_color : public cmodel_config_element
		{
		public:
			MEMBER(color, cmodel_config_element_set_render_color, color);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cmodel_config_element_set_render_color : public cmodel_config_element

		struct finger_bone_t
		{
			MEMBER(bone_index, finger_bone_t, int);
			MEMBER(hinge_axis, finger_bone_t, vector);
			MEMBER(v_capsule_pos1, finger_bone_t, vector);
			MEMBER(v_capsule_pos2, finger_bone_t, vector);
			MEMBER(min_angle, finger_bone_t, float);
			MEMBER(max_angle, finger_bone_t, float);
			MEMBER(radius, finger_bone_t, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct finger_bone_t

		class anim_param_id
		{
		public:
			MEMBER(id, anim_param_id, uint32_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class anim_param_id

		class cfoot_step_trigger_update_node : public cunary_update_node
		{
		public:
			MEMBER(triggers, cfoot_step_trigger_update_node, cutl_vector<foot_step_trigger>);
			MEMBER(tolerance, cfoot_step_trigger_update_node, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cfoot_step_trigger_update_node : public cunary_update_node

		struct param_span_t
		{
			MEMBER(samples, param_span_t, cutl_vector<param_span_sample_t>);
			MEMBER(h_param, param_span_t, canim_param_handle);
			MEMBER(e_param_type, param_span_t, anim_param_type_t);
			MEMBER(start_cycle, param_span_t, float);
			MEMBER(end_cycle, param_span_t, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct param_span_t

		class cset_facing_update_node : public cunary_update_node
		{
		public:
			MEMBER(facing_mode, cset_facing_update_node, facing_mode);
			MEMBER(reset_child, cset_facing_update_node, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cset_facing_update_node : public cunary_update_node

		class cseq_scale_set
		{
		public:
			MEMBER(s_name, cseq_scale_set, cbuffer_string);
			MEMBER(root_offset, cseq_scale_set, bool);
			MEMBER(v_root_offset, cseq_scale_set, vector);
			MEMBER(local_bone_array, cseq_scale_set, cutl_vector<short>);
			MEMBER(bone_scale_array, cseq_scale_set, cutl_vector<float>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cseq_scale_set

		struct animation_decode_debug_dump_t
		{
			MEMBER(processing_type, animation_decode_debug_dump_t, animation_processing_type_t);
			MEMBER(elems, animation_decode_debug_dump_t, cutl_vector<animation_decode_debug_dump_element_t>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct animation_decode_debug_dump_t

		struct ikbone_name_and_index_t
		{
			MEMBER(name, ikbone_name_and_index_t, cutl_string);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct ikbone_name_and_index_t

		class canim_tag_base
		{
		public:
			MEMBER(name, canim_tag_base, cglobal_symbol);
			MEMBER(group, canim_tag_base, cglobal_symbol);
			MEMBER(tag_id, canim_tag_base, anim_tag_id);
			MEMBER(is_referenced, canim_tag_base, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class canim_tag_base

		class cmotion_node
		{
		public:
			MEMBER(name, cmotion_node, cutl_string);
			MEMBER(id, cmotion_node, anim_node_id);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cmotion_node

		class cragdoll_anim_tag : public canim_tag_base
		{
		public:
			MEMBER(pose_control, cragdoll_anim_tag, anim_pose_control);
			MEMBER(frequency, cragdoll_anim_tag, float);
			MEMBER(damping_ratio, cragdoll_anim_tag, float);
			MEMBER(decay_duration, cragdoll_anim_tag, float);
			MEMBER(decay_bias, cragdoll_anim_tag, float);
			MEMBER(destroy, cragdoll_anim_tag, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cragdoll_anim_tag : public canim_tag_base

		class canim_parameter_base
		{
		public:
			MEMBER(name, canim_parameter_base, cglobal_symbol);
			MEMBER(group, canim_parameter_base, cutl_string);
			MEMBER(id, canim_parameter_base, anim_param_id);
			MEMBER(component_name, canim_parameter_base, cutl_string);
			MEMBER(networking_requested, canim_parameter_base, bool);
			MEMBER(is_referenced, canim_parameter_base, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class canim_parameter_base

		class cstring_anim_tag : public canim_tag_base
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cstring_anim_tag : public canim_tag_base

		class cparam_span_updater
		{
		public:
			MEMBER(spans, cparam_span_updater, cutl_vector<param_span_t>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cparam_span_updater

		class cfoot_trajectories
		{
		public:
			MEMBER(trajectories, cfoot_trajectories, cutl_vector<cfoot_trajectory>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cfoot_trajectories

		struct aim_matrix_op_fixed_settings_t
		{
			MEMBER(attachment, aim_matrix_op_fixed_settings_t, canim_attachment);
			MEMBER(damping, aim_matrix_op_fixed_settings_t, canim_input_damping);
			MEMBER_ARR(pose_cache_handles_arr, aim_matrix_op_fixed_settings_t, 10, cpose_handle);
			MEMBER(e_blend_mode, aim_matrix_op_fixed_settings_t, aim_matrix_blend_mode);
			MEMBER(angle_increment, aim_matrix_op_fixed_settings_t, float);
			MEMBER(sequence_max_frame, aim_matrix_op_fixed_settings_t, int);
			MEMBER(bone_mask_index, aim_matrix_op_fixed_settings_t, int);
			MEMBER(target_is_position, aim_matrix_op_fixed_settings_t, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct aim_matrix_op_fixed_settings_t

		class canim_graph_settings_manager
		{
		public:
			MEMBER(settings_groups, canim_graph_settings_manager, cutl_vector<csmart_ptr<canim_graph_settings_group>>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class canim_graph_settings_manager

		struct two_bone_iksettings_t
		{
			MEMBER(end_effector_type, two_bone_iksettings_t, ik_end_effector_type);
			MEMBER(end_effector_attachment, two_bone_iksettings_t, canim_attachment);
			MEMBER(target_type, two_bone_iksettings_t, ik_target_type);
			MEMBER(target_attachment, two_bone_iksettings_t, canim_attachment);
			MEMBER(target_bone_index, two_bone_iksettings_t, int);
			MEMBER(h_position_param, two_bone_iksettings_t, canim_param_handle);
			MEMBER(h_rotation_param, two_bone_iksettings_t, canim_param_handle);
			MEMBER(always_use_fallback_hinge, two_bone_iksettings_t, bool);
			MEMBER(v_ls_fallback_hinge_axis, two_bone_iksettings_t, vector_aligned);
			MEMBER(fixed_bone_index, two_bone_iksettings_t, int);
			MEMBER(middle_bone_index, two_bone_iksettings_t, int);
			MEMBER(end_bone_index, two_bone_iksettings_t, int);
			MEMBER(match_target_orientation, two_bone_iksettings_t, bool);
			MEMBER(constrain_twist, two_bone_iksettings_t, bool);
			MEMBER(max_twist, two_bone_iksettings_t, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct two_bone_iksettings_t

		struct solve_ikchain_pose_op_fixed_settings_t
		{
			MEMBER(chains_to_solve_data, solve_ikchain_pose_op_fixed_settings_t, cutl_vector<chain_to_solve_data_t>);
			MEMBER(match_target_orientation, solve_ikchain_pose_op_fixed_settings_t, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct solve_ikchain_pose_op_fixed_settings_t

		class cleaf_update_node : public canim_update_node_base
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cleaf_update_node : public canim_update_node_base

		class cragdoll_update_node : public cunary_update_node
		{
		public:
			MEMBER(weight_list_index, cragdoll_update_node, int);
			MEMBER(pose_control_method, cragdoll_update_node, ragdoll_pose_control);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cragdoll_update_node : public cunary_update_node

		class cseq_transition
		{
		public:
			MEMBER(fade_in_time, cseq_transition, float);
			MEMBER(fade_out_time, cseq_transition, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cseq_transition

		class csolve_ikchain_update_node : public cunary_update_node
		{
		public:
			MEMBER(target_handles, csolve_ikchain_update_node, cutl_vector<csolve_iktarget_handle_t>);
			MEMBER(op_fixed_data, csolve_ikchain_update_node, solve_ikchain_pose_op_fixed_settings_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class csolve_ikchain_update_node : public cunary_update_node

		class cpose_handle
		{
		public:
			MEMBER(index, cpose_handle, uint16_t);
			MEMBER(e_type, cpose_handle, pose_type_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpose_handle

		class cbinary_update_node : public canim_update_node_base
		{
		public:
			MEMBER(child1, cbinary_update_node, canim_update_node_ref);
			MEMBER(child2, cbinary_update_node, canim_update_node_ref);
			MEMBER(timing_behavior, cbinary_update_node, binary_node_timing);
			MEMBER(timing_blend, cbinary_update_node, float);
			MEMBER(reset_child1, cbinary_update_node, bool);
			MEMBER(reset_child2, cbinary_update_node, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cbinary_update_node : public canim_update_node_base

		struct jiggle_bone_settings_list_t
		{
			MEMBER(bone_settings, jiggle_bone_settings_list_t, cutl_vector<jiggle_bone_settings_t>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct jiggle_bone_settings_list_t

		class cpath_anim_motor_updater_base : public canim_motor_updater_base
		{
		public:
			MEMBER(lock_to_path, cpath_anim_motor_updater_base, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpath_anim_motor_updater_base : public canim_motor_updater_base

		class cmover_update_node : public cunary_update_node
		{
		public:
			MEMBER(damping, cmover_update_node, canim_input_damping);
			MEMBER(facing_target, cmover_update_node, anim_value_source);
			MEMBER(h_move_vec_param, cmover_update_node, canim_param_handle);
			MEMBER(h_move_heading_param, cmover_update_node, canim_param_handle);
			MEMBER(h_turn_to_face_param, cmover_update_node, canim_param_handle);
			MEMBER(turn_to_face_offset, cmover_update_node, float);
			MEMBER(turn_to_face_limit, cmover_update_node, float);
			MEMBER(additive, cmover_update_node, bool);
			MEMBER(apply_movement, cmover_update_node, bool);
			MEMBER(orient_movement, cmover_update_node, bool);
			MEMBER(apply_rotation, cmover_update_node, bool);
			MEMBER(limit_only, cmover_update_node, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cmover_update_node : public cunary_update_node

		class cbase_constraint : public cbone_constraint_base
		{
		public:
			MEMBER(name, cbase_constraint, cutl_string);
			MEMBER(v_up_vector, cbase_constraint, vector);
			MEMBER(slaves, cbase_constraint, cutl_vector<cconstraint_slave>);
			MEMBER(targets, cbase_constraint, cutl_vector<cconstraint_target>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cbase_constraint : public cbone_constraint_base

		class anim_state_id
		{
		public:
			MEMBER(id, anim_state_id, uint32_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class anim_state_id

		struct wrist_bone_t
		{
			MEMBER(x_offset_transform_ms, wrist_bone_t, ctransform);
			MEMBER(bone_index, wrist_bone_t, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct wrist_bone_t

		struct vphys_xconstraint_params_t
		{
			MEMBER(type, vphys_xconstraint_params_t, char);
			MEMBER(translate_motion, vphys_xconstraint_params_t, char);
			MEMBER(rotate_motion, vphys_xconstraint_params_t, char);
			MEMBER(flags, vphys_xconstraint_params_t, char);
			MEMBER_ARR(anchor_arr, vphys_xconstraint_params_t, 2, vector);
			MEMBER_ARR(axes_arr, vphys_xconstraint_params_t, 2, quaternion_storage);
			MEMBER(max_force, vphys_xconstraint_params_t, float);
			MEMBER(max_torque, vphys_xconstraint_params_t, float);
			MEMBER(linear_limit_value, vphys_xconstraint_params_t, float);
			MEMBER(linear_limit_restitution, vphys_xconstraint_params_t, float);
			MEMBER(linear_limit_spring, vphys_xconstraint_params_t, float);
			MEMBER(linear_limit_damping, vphys_xconstraint_params_t, float);
			MEMBER(twist_low_limit_value, vphys_xconstraint_params_t, float);
			MEMBER(twist_low_limit_restitution, vphys_xconstraint_params_t, float);
			MEMBER(twist_low_limit_spring, vphys_xconstraint_params_t, float);
			MEMBER(twist_low_limit_damping, vphys_xconstraint_params_t, float);
			MEMBER(twist_high_limit_value, vphys_xconstraint_params_t, float);
			MEMBER(twist_high_limit_restitution, vphys_xconstraint_params_t, float);
			MEMBER(twist_high_limit_spring, vphys_xconstraint_params_t, float);
			MEMBER(twist_high_limit_damping, vphys_xconstraint_params_t, float);
			MEMBER(swing1_limit_value, vphys_xconstraint_params_t, float);
			MEMBER(swing1_limit_restitution, vphys_xconstraint_params_t, float);
			MEMBER(swing1_limit_spring, vphys_xconstraint_params_t, float);
			MEMBER(swing1_limit_damping, vphys_xconstraint_params_t, float);
			MEMBER(swing2_limit_value, vphys_xconstraint_params_t, float);
			MEMBER(swing2_limit_restitution, vphys_xconstraint_params_t, float);
			MEMBER(swing2_limit_spring, vphys_xconstraint_params_t, float);
			MEMBER(swing2_limit_damping, vphys_xconstraint_params_t, float);
			MEMBER(goal_position, vphys_xconstraint_params_t, vector);
			MEMBER(goal_orientation, vphys_xconstraint_params_t, quaternion_storage);
			MEMBER(goal_angular_velocity, vphys_xconstraint_params_t, vector);
			MEMBER(drive_spring_x, vphys_xconstraint_params_t, float);
			MEMBER(drive_spring_y, vphys_xconstraint_params_t, float);
			MEMBER(drive_spring_z, vphys_xconstraint_params_t, float);
			MEMBER(drive_damping_x, vphys_xconstraint_params_t, float);
			MEMBER(drive_damping_y, vphys_xconstraint_params_t, float);
			MEMBER(drive_damping_z, vphys_xconstraint_params_t, float);
			MEMBER(drive_spring_twist, vphys_xconstraint_params_t, float);
			MEMBER(drive_spring_swing, vphys_xconstraint_params_t, float);
			MEMBER(drive_spring_slerp, vphys_xconstraint_params_t, float);
			MEMBER(drive_damping_twist, vphys_xconstraint_params_t, float);
			MEMBER(drive_damping_swing, vphys_xconstraint_params_t, float);
			MEMBER(drive_damping_slerp, vphys_xconstraint_params_t, float);
			MEMBER(solver_iteration_count, vphys_xconstraint_params_t, int);
			MEMBER(projection_linear_tolerance, vphys_xconstraint_params_t, float);
			MEMBER(projection_angular_tolerance, vphys_xconstraint_params_t, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct vphys_xconstraint_params_t

		struct param_span_sample_t
		{
			MEMBER(value, param_span_sample_t, canim_variant);
			MEMBER(cycle, param_span_sample_t, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct param_span_sample_t

		struct trace_settings_t
		{
			MEMBER(trace_height, trace_settings_t, float);
			MEMBER(trace_radius, trace_settings_t, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct trace_settings_t

		class cmotion_metric_evaluator
		{
		public:
			MEMBER(means, cmotion_metric_evaluator, cutl_vector<float>);
			MEMBER(standard_deviations, cmotion_metric_evaluator, cutl_vector<float>);
			MEMBER(weight, cmotion_metric_evaluator, float);
			MEMBER(dimension_start_index, cmotion_metric_evaluator, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cmotion_metric_evaluator

		class cpoint_constraint : public cbase_constraint
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpoint_constraint : public cbase_constraint

		class cbone_constraint_dot_to_morph : public cbone_constraint_base
		{
		public:
			MEMBER(s_bone_name, cbone_constraint_dot_to_morph, cutl_string);
			MEMBER(s_target_bone_name, cbone_constraint_dot_to_morph, cutl_string);
			MEMBER(s_morph_channel_name, cbone_constraint_dot_to_morph, cutl_string);
			MEMBER_ARR(remap_arr, cbone_constraint_dot_to_morph, 4, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cbone_constraint_dot_to_morph : public cbone_constraint_base

		class canimation_graph_visualizer_primitive_base
		{
		public:
			MEMBER(type, canimation_graph_visualizer_primitive_base, canimation_graph_visualizer_primitive_type);
			MEMBER_ARR(owning_anim_node_paths_arr, canimation_graph_visualizer_primitive_base, 11, anim_node_id);
			MEMBER(owning_anim_node_path_count, canimation_graph_visualizer_primitive_base, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class canimation_graph_visualizer_primitive_base

		class cphys_surface_properties_physics
		{
		public:
			MEMBER(friction, cphys_surface_properties_physics, float);
			MEMBER(elasticity, cphys_surface_properties_physics, float);
			MEMBER(density, cphys_surface_properties_physics, float);
			MEMBER(thickness, cphys_surface_properties_physics, float);
			MEMBER(soft_contact_frequency, cphys_surface_properties_physics, float);
			MEMBER(soft_contact_damping_ratio, cphys_surface_properties_physics, float);
			MEMBER(wheel_drag, cphys_surface_properties_physics, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cphys_surface_properties_physics

		class canim_desc_flag
		{
		public:
			MEMBER(looping, canim_desc_flag, bool);
			MEMBER(all_zeros, canim_desc_flag, bool);
			MEMBER(hidden, canim_desc_flag, bool);
			MEMBER(delta, canim_desc_flag, bool);
			MEMBER(legacy_worldspace, canim_desc_flag, bool);
			MEMBER(model_doc, canim_desc_flag, bool);
			MEMBER(implicit_seq_ignore_delta, canim_desc_flag, bool);
			MEMBER(anim_graph_additive, canim_desc_flag, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class canim_desc_flag

		class canim_param_handle_map
		{
		public:
			MEMBER(list, canim_param_handle_map, cutl_hashtable<uint16, int16>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class canim_param_handle_map

		class cseq_iklock
		{
		public:
			MEMBER(pos_weight, cseq_iklock, float);
			MEMBER(angle_weight, cseq_iklock, float);
			MEMBER(local_bone, cseq_iklock, short);
			MEMBER(bones_oriented_along_positive_x, cseq_iklock, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cseq_iklock

		class crender_skeleton
		{
		public:
			MEMBER(bones, crender_skeleton, cutl_vector<render_skeleton_bone_t>);
			MEMBER(bone_parents, crender_skeleton, cutl_vector<int>);
			MEMBER(bone_weight_count, crender_skeleton, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class crender_skeleton

		class cplayer_input_anim_motor_updater : public canim_motor_updater_base
		{
		public:
			MEMBER(sample_times, cplayer_input_anim_motor_updater, cutl_vector<float>);
			MEMBER(spring_constant, cplayer_input_anim_motor_updater, float);
			MEMBER(anticipation_distance, cplayer_input_anim_motor_updater, float);
			MEMBER(h_anticipation_pos_param, cplayer_input_anim_motor_updater, canim_param_handle);
			MEMBER(h_anticipation_heading_param, cplayer_input_anim_motor_updater, canim_param_handle);
			MEMBER(use_acceleration, cplayer_input_anim_motor_updater, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cplayer_input_anim_motor_updater : public canim_motor_updater_base

		class cstate_action_updater
		{
		public:
			MEMBER(action, cstate_action_updater, csmart_ptr<canim_action_updater>);
			MEMBER(e_behavior, cstate_action_updater, state_action_behavior);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cstate_action_updater

		class cconcrete_anim_parameter : public canim_parameter_base
		{
		public:
			MEMBER(preview_button, cconcrete_anim_parameter, anim_param_button_t);
			MEMBER(e_network_setting, cconcrete_anim_parameter, anim_param_network_setting);
			MEMBER(use_most_recent_value, cconcrete_anim_parameter, bool);
			MEMBER(auto_reset, cconcrete_anim_parameter, bool);
			MEMBER(game_writable, cconcrete_anim_parameter, bool);
			MEMBER(graph_writable, cconcrete_anim_parameter, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cconcrete_anim_parameter : public canim_parameter_base

		class cbone_constraint_pose_space_morph : public cbone_constraint_base
		{
		public:
			MEMBER(s_bone_name, cbone_constraint_pose_space_morph, cutl_string);
			MEMBER(s_attachment_name, cbone_constraint_pose_space_morph, cutl_string);
			MEMBER(output_morph, cbone_constraint_pose_space_morph, cutl_vector<cutl_string>);
			MEMBER(input_list, cbone_constraint_pose_space_morph, cutl_vector<cbone_constraint_pose_space_morph__input_t>);
			MEMBER(clamp, cbone_constraint_pose_space_morph, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cbone_constraint_pose_space_morph : public cbone_constraint_base

		class motion_blend_item
		{
		public:
			MEMBER(child, motion_blend_item, csmart_ptr<cmotion_node>);
			MEMBER(key_value, motion_blend_item, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class motion_blend_item

		class cbone_constraint_pose_space_bone : public cbase_constraint
		{
		public:
			MEMBER(input_list, cbone_constraint_pose_space_bone, cutl_vector<cbone_constraint_pose_space_bone__input_t>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cbone_constraint_pose_space_bone : public cbase_constraint

		class canim_graph_model_binding
		{
		public:
			MEMBER(model_name, canim_graph_model_binding, cutl_string);
			MEMBER(shared_data, canim_graph_model_binding, csmart_ptr<canim_update_shared_data>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class canim_graph_model_binding

		class canim_update_shared_data
		{
		public:
			MEMBER(nodes, canim_update_shared_data, cutl_vector<csmart_ptr<canim_update_node_base>>);
			MEMBER(node_index_map, canim_update_shared_data, cutl_hashtable<canim_node_path, int32>);
			MEMBER(components, canim_update_shared_data, cutl_vector<csmart_ptr<canim_component_updater>>);
			MEMBER(param_list_updater, canim_update_shared_data, csmart_ptr<canim_parameter_manager_updater>);
			MEMBER(tag_manager_updater, canim_update_shared_data, csmart_ptr<canim_tag_manager_updater>);
			MEMBER(script_manager, canim_update_shared_data, csmart_ptr<canim_script_manager>);
			MEMBER(settings, canim_update_shared_data, canim_graph_settings_manager);
			MEMBER(static_pose_cache, canim_update_shared_data, csmart_ptr<cstatic_pose_cache_builder>);
			MEMBER(skeleton, canim_update_shared_data, csmart_ptr<canim_skeleton>);
			MEMBER(root_node_path, canim_update_shared_data, canim_node_path);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class canim_update_shared_data

		struct look_at_op_fixed_settings_t
		{
			MEMBER(attachment, look_at_op_fixed_settings_t, canim_attachment);
			MEMBER(damping, look_at_op_fixed_settings_t, canim_input_damping);
			MEMBER(bones, look_at_op_fixed_settings_t, cutl_vector<look_at_bone_t>);
			MEMBER(yaw_limit, look_at_op_fixed_settings_t, float);
			MEMBER(pitch_limit, look_at_op_fixed_settings_t, float);
			MEMBER(hysteresis_inner_angle, look_at_op_fixed_settings_t, float);
			MEMBER(hysteresis_outer_angle, look_at_op_fixed_settings_t, float);
			MEMBER(rotate_yaw_forward, look_at_op_fixed_settings_t, bool);
			MEMBER(maintain_up_direction, look_at_op_fixed_settings_t, bool);
			MEMBER(target_is_position, look_at_op_fixed_settings_t, bool);
			MEMBER(use_hysteresis, look_at_op_fixed_settings_t, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct look_at_op_fixed_settings_t

		class cstatic_pose_cache
		{
		public:
			MEMBER(poses, cstatic_pose_cache, cutl_vector<ccached_pose>);
			MEMBER(bone_count, cstatic_pose_cache, int);
			MEMBER(morph_count, cstatic_pose_cache, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cstatic_pose_cache

		class hsequence
		{
		public:
			MEMBER(value, hsequence, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class hsequence

		class cvphys_xsurface_properties_list
		{
		public:
			MEMBER(surface_properties_list, cvphys_xsurface_properties_list, cutl_vector<cphys_surface_properties*>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cvphys_xsurface_properties_list

		class ctilt_twist_constraint : public cbase_constraint
		{
		public:
			MEMBER(target_axis, ctilt_twist_constraint, int);
			MEMBER(slave_axis, ctilt_twist_constraint, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class ctilt_twist_constraint : public cbase_constraint

		struct script_info_t
		{
			MEMBER(code, script_info_t, cutl_string);
			MEMBER(params_modified, script_info_t, cutl_vector<canim_param_handle>);
			MEMBER(proxy_read_params, script_info_t, cutl_vector<int>);
			MEMBER(proxy_write_params, script_info_t, cutl_vector<int>);
			MEMBER(e_script_type, script_info_t, anim_script_type);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct script_info_t

		class cflex_rule
		{
		public:
			MEMBER(flex, cflex_rule, int);
			MEMBER(flex_ops, cflex_rule, cutl_vector<cflex_op>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cflex_rule

		class cdirect_playback_update_node : public cunary_update_node
		{
		public:
			MEMBER(finish_early, cdirect_playback_update_node, bool);
			MEMBER(reset_on_finish, cdirect_playback_update_node, bool);
			MEMBER(all_tags, cdirect_playback_update_node, cutl_vector<cdirect_playback_tag_data>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cdirect_playback_update_node : public cunary_update_node

		class cdistance_remaining_metric_evaluator : public cmotion_metric_evaluator
		{
		public:
			MEMBER(max_distance, cdistance_remaining_metric_evaluator, float);
			MEMBER(min_distance, cdistance_remaining_metric_evaluator, float);
			MEMBER(start_goal_filter_distance, cdistance_remaining_metric_evaluator, float);
			MEMBER(max_goal_overshoot_scale, cdistance_remaining_metric_evaluator, float);
			MEMBER(filter_fixed_min_distance, cdistance_remaining_metric_evaluator, bool);
			MEMBER(filter_goal_distance, cdistance_remaining_metric_evaluator, bool);
			MEMBER(filter_goal_overshoot, cdistance_remaining_metric_evaluator, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cdistance_remaining_metric_evaluator : public cmotion_metric_evaluator

		struct render_skeleton_bone_t
		{
			MEMBER(bone_name, render_skeleton_bone_t, cutl_string);
			MEMBER(parent_name, render_skeleton_bone_t, cutl_string);
			MEMBER(inv_bind_pose, render_skeleton_bone_t, matrix3x4_t);
			MEMBER(bbox, render_skeleton_bone_t, skeleton_bone_bounds_t);
			MEMBER(sphere_radius, render_skeleton_bone_t, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct render_skeleton_bone_t

		struct foot_pinning_pose_op_fixed_data_t
		{
			MEMBER(foot_info, foot_pinning_pose_op_fixed_data_t, cutl_vector<foot_fixed_data_t>);
			MEMBER(blend_time, foot_pinning_pose_op_fixed_data_t, float);
			MEMBER(lock_break_distance, foot_pinning_pose_op_fixed_data_t, float);
			MEMBER(max_leg_twist, foot_pinning_pose_op_fixed_data_t, float);
			MEMBER(hip_bone_index, foot_pinning_pose_op_fixed_data_t, int);
			MEMBER(apply_leg_twist_limits, foot_pinning_pose_op_fixed_data_t, bool);
			MEMBER(apply_foot_rotation_limits, foot_pinning_pose_op_fixed_data_t, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct foot_pinning_pose_op_fixed_data_t

		class cseq_cmd_layer
		{
		public:
			MEMBER(cmd, cseq_cmd_layer, short);
			MEMBER(local_reference, cseq_cmd_layer, short);
			MEMBER(local_bonemask, cseq_cmd_layer, short);
			MEMBER(dst_result, cseq_cmd_layer, short);
			MEMBER(src_result, cseq_cmd_layer, short);
			MEMBER(spline, cseq_cmd_layer, bool);
			MEMBER(var1, cseq_cmd_layer, float);
			MEMBER(var2, cseq_cmd_layer, float);
			MEMBER(line_number, cseq_cmd_layer, short);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cseq_cmd_layer

		struct model_bone_flex_driver_control_t
		{
			MEMBER(bone_component, model_bone_flex_driver_control_t, model_bone_flex_component_t);
			MEMBER(flex_controller, model_bone_flex_driver_control_t, cutl_string);
			MEMBER(flex_controller_token, model_bone_flex_driver_control_t, uint32_t);
			MEMBER(min, model_bone_flex_driver_control_t, float);
			MEMBER(max, model_bone_flex_driver_control_t, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct model_bone_flex_driver_control_t

		class ctwist_constraint : public cbase_constraint
		{
		public:
			MEMBER(inverse, ctwist_constraint, bool);
			MEMBER(q_parent_bind_rotation, ctwist_constraint, quaternion);
			MEMBER(q_child_bind_rotation, ctwist_constraint, quaternion);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class ctwist_constraint : public cbase_constraint

		class canimation_graph_visualizer_axis : public canimation_graph_visualizer_primitive_base
		{
		public:
			MEMBER(x_ws_transform, canimation_graph_visualizer_axis, ctransform);
			MEMBER(axis_size, canimation_graph_visualizer_axis, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class canimation_graph_visualizer_axis : public canimation_graph_visualizer_primitive_base

		struct vphys_xbody_part_t
		{
			MEMBER(flags, vphys_xbody_part_t, uint32_t);
			MEMBER(mass, vphys_xbody_part_t, float);
			MEMBER(rn_shape, vphys_xbody_part_t, vphysics2_shape_def_t);
			MEMBER(collision_attribute_index, vphys_xbody_part_t, uint16_t);
			MEMBER(reserved, vphys_xbody_part_t, uint16_t);
			MEMBER(inertia_scale, vphys_xbody_part_t, float);
			MEMBER(linear_damping, vphys_xbody_part_t, float);
			MEMBER(angular_damping, vphys_xbody_part_t, float);
			MEMBER(override_mass_center, vphys_xbody_part_t, bool);
			MEMBER(v_mass_center_override, vphys_xbody_part_t, vector);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct vphys_xbody_part_t

		class canim_skeleton
		{
		public:
			MEMBER(local_space_transforms, canim_skeleton, cutl_vector<ctransform>);
			MEMBER(model_space_transforms, canim_skeleton, cutl_vector<ctransform>);
			MEMBER(bone_names, canim_skeleton, cutl_vector<cutl_string>);
			MEMBER(children, canim_skeleton, cutl_vector<cutl_vector<int>>);
			MEMBER(parents, canim_skeleton, cutl_vector<int>);
			MEMBER(feet, canim_skeleton, cutl_vector<canim_foot>);
			MEMBER(morph_names, canim_skeleton, cutl_vector<cutl_string>);
			MEMBER(lod_bone_counts, canim_skeleton, cutl_vector<int>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class canim_skeleton

		class crender_mesh
		{
		public:
			MEMBER(scene_objects, crender_mesh, cutl_vector_fixed_growable<cscene_object_data>);
			MEMBER(constraints, crender_mesh, cutl_vector<cbase_constraint*>);
			MEMBER(skeleton, crender_mesh, crender_skeleton);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class crender_mesh

		class cflex_desc
		{
		public:
			MEMBER(facs, cflex_desc, cutl_string);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cflex_desc

		class cwrist_bone
		{
		public:
			MEMBER(name, cwrist_bone, cutl_string);
			MEMBER(v_forward_ls, cwrist_bone, vector);
			MEMBER(v_up_ls, cwrist_bone, vector);
			MEMBER(v_offset, cwrist_bone, vector);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cwrist_bone

		class cmotion_node_sequence : public cmotion_node
		{
		public:
			MEMBER(tags, cmotion_node_sequence, cutl_vector<tag_span_t>);
			MEMBER(h_sequence, cmotion_node_sequence, hsequence);
			MEMBER(playback_speed, cmotion_node_sequence, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cmotion_node_sequence : public cmotion_node

		class cfinger_source
		{
		public:
			MEMBER(finger_index, cfinger_source, anim_vrfinger_t);
			MEMBER(finger_weight, cfinger_source, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cfinger_source

		class cflex_controller
		{
		public:
			MEMBER(name, cflex_controller, cutl_string);
			MEMBER(type, cflex_controller, cutl_string);
			MEMBER(min, cflex_controller, float);
			MEMBER(max, cflex_controller, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cflex_controller

		class cseq_multi_fetch_flag
		{
		public:
			MEMBER(realtime, cseq_multi_fetch_flag, bool);
			MEMBER(cylepose, cseq_multi_fetch_flag, bool);
			MEMBER(b0_d, cseq_multi_fetch_flag, bool);
			MEMBER(b1_d, cseq_multi_fetch_flag, bool);
			MEMBER(b2d, cseq_multi_fetch_flag, bool);
			MEMBER(b2_d_tri, cseq_multi_fetch_flag, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cseq_multi_fetch_flag

		class cblend_curve
		{
		public:
			MEMBER(control_point1, cblend_curve, float);
			MEMBER(control_point2, cblend_curve, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cblend_curve

		class cfoot_trajectory
		{
		public:
			MEMBER(v_offset, cfoot_trajectory, vector);
			MEMBER(rotation_offset, cfoot_trajectory, float);
			MEMBER(progression, cfoot_trajectory, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cfoot_trajectory

		class canimation_graph_visualizer_text : public canimation_graph_visualizer_primitive_base
		{
		public:
			MEMBER(v_ws_position, canimation_graph_visualizer_text, vector_aligned);
			MEMBER(color, canimation_graph_visualizer_text, color);
			MEMBER(text, canimation_graph_visualizer_text, cutl_string);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class canimation_graph_visualizer_text : public canimation_graph_visualizer_primitive_base

		class cbind_pose_update_node : public cleaf_update_node
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cbind_pose_update_node : public cleaf_update_node

		class canimation_graph_visualizer_pie : public canimation_graph_visualizer_primitive_base
		{
		public:
			MEMBER(v_ws_center, canimation_graph_visualizer_pie, vector_aligned);
			MEMBER(v_ws_start, canimation_graph_visualizer_pie, vector_aligned);
			MEMBER(v_ws_end, canimation_graph_visualizer_pie, vector_aligned);
			MEMBER(color, canimation_graph_visualizer_pie, color);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class canimation_graph_visualizer_pie : public canimation_graph_visualizer_primitive_base

		class canim_action_updater
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class canim_action_updater

		class canimation_group
		{
		public:
			MEMBER(flags, canimation_group, uint32_t);
			MEMBER(name, canimation_group, cbuffer_string);
			MEMBER(local_hanim_array_handle, canimation_group, cutl_vector<cstrong_handle<info_for_resource_type_canim_data>>);
			MEMBER(included_group_array_handle, canimation_group, cutl_vector<cstrong_handle<info_for_resource_type_canimation_group>>);
			MEMBER(direct_hseq_group_handle, canimation_group, cstrong_handle<info_for_resource_type_csequence_group_data>);
			MEMBER(decode_key, canimation_group, canim_key_data);
			MEMBER(scripts, canimation_group, cutl_vector<cbuffer_string>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class canimation_group

		class cturn_helper_update_node : public cunary_update_node
		{
		public:
			MEMBER(facing_target, cturn_helper_update_node, anim_value_source);
			MEMBER(turn_start_time_offset, cturn_helper_update_node, float);
			MEMBER(turn_duration, cturn_helper_update_node, float);
			MEMBER(match_child_duration, cturn_helper_update_node, bool);
			MEMBER(manual_turn_offset, cturn_helper_update_node, float);
			MEMBER(use_manual_turn_offset, cturn_helper_update_node, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cturn_helper_update_node : public cunary_update_node

		class caudio_anim_tag : public canim_tag_base
		{
		public:
			MEMBER(clip_name, caudio_anim_tag, cutl_string);
			MEMBER(attachment_name, caudio_anim_tag, cutl_string);
			MEMBER(volume, caudio_anim_tag, float);
			MEMBER(stop_when_tag_ends, caudio_anim_tag, bool);
			MEMBER(stop_when_graph_ends, caudio_anim_tag, bool);
			MEMBER(play_on_server, caudio_anim_tag, bool);
			MEMBER(play_on_client, caudio_anim_tag, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class caudio_anim_tag : public canim_tag_base

		class cphys_surface_properties_sound_names
		{
		public:
			MEMBER(impact_soft, cphys_surface_properties_sound_names, cutl_string);
			MEMBER(impact_hard, cphys_surface_properties_sound_names, cutl_string);
			MEMBER(scrape_smooth, cphys_surface_properties_sound_names, cutl_string);
			MEMBER(scrape_rough, cphys_surface_properties_sound_names, cutl_string);
			MEMBER(bullet_impact, cphys_surface_properties_sound_names, cutl_string);
			MEMBER(rolling, cphys_surface_properties_sound_names, cutl_string);
			MEMBER(break_, cphys_surface_properties_sound_names, cutl_string);
			MEMBER(strain, cphys_surface_properties_sound_names, cutl_string);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cphys_surface_properties_sound_names

		class cseq_multi_fetch
		{
		public:
			MEMBER(flags, cseq_multi_fetch, cseq_multi_fetch_flag);
			MEMBER(local_reference_array, cseq_multi_fetch, cutl_vector<short>);
			MEMBER_ARR(group_size_arr, cseq_multi_fetch, 2, int);
			MEMBER_ARR(local_pose_arr, cseq_multi_fetch, 2, int);
			MEMBER(pose_key_array0, cseq_multi_fetch, cutl_vector<float>);
			MEMBER(pose_key_array1, cseq_multi_fetch, cutl_vector<float>);
			MEMBER(local_cycle_pose_parameter, cseq_multi_fetch, int);
			MEMBER(calculate_pose_parameters, cseq_multi_fetch, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cseq_multi_fetch

		struct cbone_constraint_pose_space_bone__input_t
		{
			MEMBER(input_value, cbone_constraint_pose_space_bone__input_t, vector);
			MEMBER(output_transform_list, cbone_constraint_pose_space_bone__input_t, cutl_vector<ctransform>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct cbone_constraint_pose_space_bone__input_t

		struct skeletal_input_op_fixed_settings_t
		{
			MEMBER(wrist_bones, skeletal_input_op_fixed_settings_t, cutl_vector<wrist_bone_t>);
			MEMBER(fingers, skeletal_input_op_fixed_settings_t, cutl_vector<finger_chain_t>);
			MEMBER(outer_knuckle1, skeletal_input_op_fixed_settings_t, int);
			MEMBER(outer_knuckle2, skeletal_input_op_fixed_settings_t, int);
			MEMBER(e_hand, skeletal_input_op_fixed_settings_t, anim_vrhand_t);
			MEMBER(e_motion_range, skeletal_input_op_fixed_settings_t, anim_vrhand_motion_range_t);
			MEMBER(e_transform_source, skeletal_input_op_fixed_settings_t, anim_vr_bone_transform_source_t);
			MEMBER(enable_ik, skeletal_input_op_fixed_settings_t, bool);
			MEMBER(enable_collision, skeletal_input_op_fixed_settings_t, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct skeletal_input_op_fixed_settings_t

		class cfinger_chain
		{
		public:
			MEMBER(targets, cfinger_chain, cutl_vector<cfinger_source>);
			MEMBER(bones, cfinger_chain, cutl_vector<cfinger_bone>);
			MEMBER(name, cfinger_chain, cutl_string);
			MEMBER(tip_parent_bone_name, cfinger_chain, cutl_string);
			MEMBER(v_tip_offset, cfinger_chain, vector);
			MEMBER(metacarpal_bone_name, cfinger_chain, cutl_string);
			MEMBER(v_splay_hinge_axis, cfinger_chain, vector);
			MEMBER(splay_min_angle, cfinger_chain, float);
			MEMBER(splay_max_angle, cfinger_chain, float);
			MEMBER(finger_scale_ratio, cfinger_chain, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cfinger_chain

		class ctransition_update_data
		{
		public:
			MEMBER(src_state_index, ctransition_update_data, uint8_t);
			MEMBER(dest_state_index, ctransition_update_data, uint8_t);
			MEMBER(disabled, ctransition_update_data, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class ctransition_update_data

		class canim_user_difference
		{
		public:
			MEMBER(name, canim_user_difference, cbuffer_string);
			MEMBER(type, canim_user_difference, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class canim_user_difference

		class canimation_graph_visualizer_sphere : public canimation_graph_visualizer_primitive_base
		{
		public:
			MEMBER(v_ws_position, canimation_graph_visualizer_sphere, vector_aligned);
			MEMBER(radius, canimation_graph_visualizer_sphere, float);
			MEMBER(color, canimation_graph_visualizer_sphere, color);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class canimation_graph_visualizer_sphere : public canimation_graph_visualizer_primitive_base

		class cmotion_data_set
		{
		public:
			MEMBER(groups, cmotion_data_set, cutl_vector<cmotion_graph_group>);
			MEMBER(dimension_count, cmotion_data_set, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cmotion_data_set

		class canim_encode_difference
		{
		public:
			MEMBER(bone_array, canim_encode_difference, cutl_vector<canim_bone_difference>);
			MEMBER(morph_array, canim_encode_difference, cutl_vector<canim_morph_difference>);
			MEMBER(user_array, canim_encode_difference, cutl_vector<canim_user_difference>);
			MEMBER(has_rotation_bit_array, canim_encode_difference, cutl_vector<uint8_t>);
			MEMBER(has_movement_bit_array, canim_encode_difference, cutl_vector<uint8_t>);
			MEMBER(has_morph_bit_array, canim_encode_difference, cutl_vector<uint8_t>);
			MEMBER(has_user_bit_array, canim_encode_difference, cutl_vector<uint8_t>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class canim_encode_difference

		class ccloth_settings_anim_tag : public canim_tag_base
		{
		public:
			MEMBER(stiffness, ccloth_settings_anim_tag, float);
			MEMBER(ease_in, ccloth_settings_anim_tag, float);
			MEMBER(ease_out, ccloth_settings_anim_tag, float);
			MEMBER(vertex_set, ccloth_settings_anim_tag, cutl_string);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class ccloth_settings_anim_tag : public canim_tag_base

		class cmorph_constraint : public cbase_constraint
		{
		public:
			MEMBER(s_target_morph, cmorph_constraint, cutl_string);
			MEMBER(slave_channel, cmorph_constraint, int);
			MEMBER(min, cmorph_constraint, float);
			MEMBER(max, cmorph_constraint, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cmorph_constraint : public cbase_constraint

		class cmorph_set_data
		{
		public:
			MEMBER(width, cmorph_set_data, int);
			MEMBER(height, cmorph_set_data, int);
			MEMBER(bundle_types, cmorph_set_data, cutl_vector<morph_bundle_type_t>);
			MEMBER(morph_datas, cmorph_set_data, cutl_vector<cmorph_data>);
			MEMBER(texture_atlas, cmorph_set_data, cstrong_handle<info_for_resource_type_ctexture_base>);
			MEMBER(flex_desc, cmorph_set_data, cutl_vector<cflex_desc>);
			MEMBER(flex_controllers, cmorph_set_data, cutl_vector<cflex_controller>);
			MEMBER(flex_rules, cmorph_set_data, cutl_vector<cflex_rule>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cmorph_set_data

		class cdraw_culling_data
		{
		public:
			MEMBER(v_cone_apex, cdraw_culling_data, vector);
			MEMBER_ARR(cone_axis_arr, cdraw_culling_data, 3, char);
			MEMBER(cone_cutoff, cdraw_culling_data, char);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cdraw_culling_data

		class crender_buffer_binding
		{
		public:
			MEMBER(h_buffer, crender_buffer_binding, uint64_t);
			MEMBER(bind_offset_bytes, crender_buffer_binding, uint32_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class crender_buffer_binding

		class cbone_position_metric_evaluator : public cmotion_metric_evaluator
		{
		public:
			MEMBER(bone_index, cbone_position_metric_evaluator, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cbone_position_metric_evaluator : public cmotion_metric_evaluator

		class cset_parameter_action_updater : public canim_action_updater
		{
		public:
			MEMBER(h_param, cset_parameter_action_updater, canim_param_handle);
			MEMBER(value, cset_parameter_action_updater, canim_variant);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cset_parameter_action_updater : public canim_action_updater

		class cbone_mask_update_node : public cbinary_update_node
		{
		public:
			MEMBER(weight_list_index, cbone_mask_update_node, int);
			MEMBER(root_motion_blend, cbone_mask_update_node, float);
			MEMBER(blend_space, cbone_mask_update_node, bone_mask_blend_space);
			MEMBER(foot_motion_timing, cbone_mask_update_node, binary_node_child_option);
			MEMBER(use_blend_scale, cbone_mask_update_node, bool);
			MEMBER(blend_value_source, cbone_mask_update_node, anim_value_source);
			MEMBER(h_blend_parameter, cbone_mask_update_node, canim_param_handle);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cbone_mask_update_node : public cbinary_update_node

		class cfuture_velocity_metric_evaluator : public cmotion_metric_evaluator
		{
		public:
			MEMBER(distance, cfuture_velocity_metric_evaluator, float);
			MEMBER(stopping_distance, cfuture_velocity_metric_evaluator, float);
			MEMBER(target_speed, cfuture_velocity_metric_evaluator, float);
			MEMBER(e_mode, cfuture_velocity_metric_evaluator, velocity_metric_mode);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cfuture_velocity_metric_evaluator : public cmotion_metric_evaluator

		class cmovement_mode
		{
		public:
			MEMBER(name, cmovement_mode, cutl_string);
			MEMBER(speed, cmovement_mode, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cmovement_mode

		class ccurrent_rotation_velocity_metric_evaluator : public cmotion_metric_evaluator
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class ccurrent_rotation_velocity_metric_evaluator : public cmotion_metric_evaluator

		class cvirtual_anim_parameter : public canim_parameter_base
		{
		public:
			MEMBER(expression_string, cvirtual_anim_parameter, cutl_string);
			MEMBER(e_param_type, cvirtual_anim_parameter, anim_param_type_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cvirtual_anim_parameter : public canim_parameter_base

		class ccycle_base
		{
		public:
			MEMBER(cycle, ccycle_base, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class ccycle_base

		class cconstraint_slave
		{
		public:
			MEMBER(q_base_orientation, cconstraint_slave, quaternion);
			MEMBER(v_base_position, cconstraint_slave, vector);
			MEMBER(bone_hash, cconstraint_slave, uint32_t);
			MEMBER(weight, cconstraint_slave, float);
			MEMBER(s_name, cconstraint_slave, cutl_string);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cconstraint_slave

		struct iktarget_settings_t
		{
			MEMBER(target_source, iktarget_settings_t, iktarget_source);
			MEMBER(bone, iktarget_settings_t, ikbone_name_and_index_t);
			MEMBER(animgraph_parameter_name_position, iktarget_settings_t, anim_param_id);
			MEMBER(animgraph_parameter_name_orientation, iktarget_settings_t, anim_param_id);
			MEMBER(target_coord_system, iktarget_settings_t, iktarget_coordinate_system);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct iktarget_settings_t

		class chit_box_set
		{
		public:
			MEMBER(name, chit_box_set, cutl_string);
			MEMBER(name_hash, chit_box_set, uint32_t);
			MEMBER(hit_boxes, chit_box_set, cutl_vector<chit_box>);
			MEMBER(source_filename, chit_box_set, cutl_string);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class chit_box_set

		class cfollow_path_update_node : public cunary_update_node
		{
		public:
			MEMBER(blend_out_time, cfollow_path_update_node, float);
			MEMBER(block_non_path_movement, cfollow_path_update_node, bool);
			MEMBER(stop_feet_at_goal, cfollow_path_update_node, bool);
			MEMBER(scale_speed, cfollow_path_update_node, bool);
			MEMBER(scale, cfollow_path_update_node, float);
			MEMBER(min_angle, cfollow_path_update_node, float);
			MEMBER(max_angle, cfollow_path_update_node, float);
			MEMBER(speed_scale_blending, cfollow_path_update_node, float);
			MEMBER(turn_damping, cfollow_path_update_node, canim_input_damping);
			MEMBER(facing_target, cfollow_path_update_node, anim_value_source);
			MEMBER(h_param, cfollow_path_update_node, canim_param_handle);
			MEMBER(turn_to_face_offset, cfollow_path_update_node, float);
			MEMBER(turn_to_face, cfollow_path_update_node, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cfollow_path_update_node : public cunary_update_node

		class canim_component_updater
		{
		public:
			MEMBER(name, canim_component_updater, cutl_string);
			MEMBER(id, canim_component_updater, anim_component_id);
			MEMBER(network_mode, canim_component_updater, anim_node_network_mode);
			MEMBER(start_enabled, canim_component_updater, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class canim_component_updater

		class canim_frame_segment
		{
		public:
			MEMBER(unique_frame_index, canim_frame_segment, int);
			MEMBER(local_element_masks, canim_frame_segment, uint32_t);
			MEMBER(local_channel, canim_frame_segment, int);
			MEMBER(container, canim_frame_segment, cutl_binary_block);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class canim_frame_segment

		class cbody_group_anim_tag : public canim_tag_base
		{
		public:
			MEMBER(priority, cbody_group_anim_tag, int);
			MEMBER(body_group_settings, cbody_group_anim_tag, cutl_vector<cbody_group_setting>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cbody_group_anim_tag : public canim_tag_base

		class cvr_skeletal_input_settings
		{
		public:
			MEMBER(wrist_bones, cvr_skeletal_input_settings, cutl_vector<cwrist_bone>);
			MEMBER(fingers, cvr_skeletal_input_settings, cutl_vector<cfinger_chain>);
			MEMBER(name, cvr_skeletal_input_settings, cutl_string);
			MEMBER(outer_knuckle1, cvr_skeletal_input_settings, cutl_string);
			MEMBER(outer_knuckle2, cvr_skeletal_input_settings, cutl_string);
			MEMBER(e_hand, cvr_skeletal_input_settings, anim_vrhand_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cvr_skeletal_input_settings

		class cenum_anim_parameter : public cconcrete_anim_parameter
		{
		public:
			MEMBER(default_value, cenum_anim_parameter, uint8_t);
			MEMBER(enum_options, cenum_anim_parameter, cutl_vector<cutl_string>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cenum_anim_parameter : public cconcrete_anim_parameter

		class cfootstep_landed_anim_tag : public canim_tag_base
		{
		public:
			MEMBER(footstep_type, cfootstep_landed_anim_tag, footstep_landed_foot_sound_type_t);
			MEMBER(override_sound_name, cfootstep_landed_anim_tag, cutl_string);
			MEMBER(debug_anim_source_string, cfootstep_landed_anim_tag, cutl_string);
			MEMBER(bone_name, cfootstep_landed_anim_tag, cutl_string);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cfootstep_landed_anim_tag : public canim_tag_base

		class cstate_node_state_data
		{
		public:
			MEMBER(child, cstate_node_state_data, canim_update_node_ref);
			MEMBER(exclusive_root_motion, cstate_node_state_data, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cstate_node_state_data

		class cfoot_cycle : public ccycle_base
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cfoot_cycle : public ccycle_base

		class canim_decoder
		{
		public:
			MEMBER(name, canim_decoder, cbuffer_string);
			MEMBER(version, canim_decoder, int);
			MEMBER(type, canim_decoder, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class canim_decoder

		class canim_demo_capture_settings
		{
		public:
			MEMBER(range_bone_chain_length, canim_demo_capture_settings, vector2d);
			MEMBER(range_max_spline_error_rotation, canim_demo_capture_settings, vector2d);
			MEMBER(max_spline_error_translation, canim_demo_capture_settings, float);
			MEMBER(max_spline_error_scale, canim_demo_capture_settings, float);
			MEMBER(ik_rotation_max_spline_error, canim_demo_capture_settings, float);
			MEMBER(ik_translation_max_spline_error, canim_demo_capture_settings, float);
			MEMBER(max_quantization_error_rotation, canim_demo_capture_settings, float);
			MEMBER(max_quantization_error_translation, canim_demo_capture_settings, float);
			MEMBER(max_quantization_error_scale, canim_demo_capture_settings, float);
			MEMBER(ik_rotation_max_quantization_error, canim_demo_capture_settings, float);
			MEMBER(ik_translation_max_quantization_error, canim_demo_capture_settings, float);
			MEMBER(base_sequence, canim_demo_capture_settings, cutl_string);
			MEMBER(base_sequence_frame, canim_demo_capture_settings, int);
			MEMBER(bone_selection_mode, canim_demo_capture_settings, edemo_bone_selection_mode);
			MEMBER(bones, canim_demo_capture_settings, cutl_vector<bone_demo_capture_settings_t>);
			MEMBER(ik_chains, canim_demo_capture_settings, cutl_vector<ikdemo_capture_settings_t>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class canim_demo_capture_settings

		class canim_enum
		{
		public:
			MEMBER(value, canim_enum, uint8_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class canim_enum

		class cadd_update_node : public cbinary_update_node
		{
		public:
			MEMBER(foot_motion_timing, cadd_update_node, binary_node_child_option);
			MEMBER(apply_to_foot_motion, cadd_update_node, bool);
			MEMBER(apply_channels_separately, cadd_update_node, bool);
			MEMBER(use_model_space, cadd_update_node, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cadd_update_node : public cbinary_update_node

		class cfuture_facing_metric_evaluator : public cmotion_metric_evaluator
		{
		public:
			MEMBER(distance, cfuture_facing_metric_evaluator, float);
			MEMBER(time, cfuture_facing_metric_evaluator, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cfuture_facing_metric_evaluator : public cmotion_metric_evaluator

		class cmodel_config_element_set_material_group : public cmodel_config_element
		{
		public:
			MEMBER(material_group_name, cmodel_config_element_set_material_group, cutl_string);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cmodel_config_element_set_material_group : public cmodel_config_element

		class cmovement_component_updater : public canim_component_updater
		{
		public:
			MEMBER(movement_modes, cmovement_component_updater, cutl_vector<cmovement_mode>);
			MEMBER(motors, cmovement_component_updater, cutl_vector<csmart_ptr<canim_motor_updater_base>>);
			MEMBER(facing_damping, cmovement_component_updater, canim_input_damping);
			MEMBER(e_default_facing_mode, cmovement_component_updater, facing_mode);
			MEMBER(default_motor_index, cmovement_component_updater, int);
			MEMBER(move_vars_disabled, cmovement_component_updater, bool);
			MEMBER(network_path, cmovement_component_updater, bool);
			MEMBER(network_facing, cmovement_component_updater, bool);
			MEMBER_ARR(param_handles_arr, cmovement_component_updater, 30, canim_param_handle);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cmovement_component_updater : public canim_component_updater

		struct follow_attachment_settings_t
		{
			MEMBER(attachment, follow_attachment_settings_t, canim_attachment);
			MEMBER(bone_index, follow_attachment_settings_t, int);
			MEMBER(match_translation, follow_attachment_settings_t, bool);
			MEMBER(match_rotation, follow_attachment_settings_t, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct follow_attachment_settings_t

		class cpath_anim_motor_updater : public cpath_anim_motor_updater_base
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpath_anim_motor_updater : public cpath_anim_motor_updater_base

		class canim_replay_frame
		{
		public:
			MEMBER(input_data_blocks, canim_replay_frame, cutl_vector<cutl_binary_block>);
			MEMBER(instance_data, canim_replay_frame, cutl_binary_block);
			MEMBER(starting_local_to_world_transform, canim_replay_frame, ctransform);
			MEMBER(local_to_world_transform, canim_replay_frame, ctransform);
			MEMBER(time_stamp, canim_replay_frame, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class canim_replay_frame

		class ccurrent_velocity_metric_evaluator : public cmotion_metric_evaluator
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class ccurrent_velocity_metric_evaluator : public cmotion_metric_evaluator

		class cmodel_config_element_set_bodygroup_on_attached_models : public cmodel_config_element
		{
		public:
			MEMBER(group_name, cmodel_config_element_set_bodygroup_on_attached_models, cutl_string);
			MEMBER(choice, cmodel_config_element_set_bodygroup_on_attached_models, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cmodel_config_element_set_bodygroup_on_attached_models : public cmodel_config_element

		class cspeed_scale_update_node : public cunary_update_node
		{
		public:
			MEMBER(param_index, cspeed_scale_update_node, canim_param_handle);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cspeed_scale_update_node : public cunary_update_node

		class crange_float
		{
		public:
			MEMBER_ARR(value_arr, crange_float, 2, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class crange_float

		struct cbone_constraint_pose_space_morph__input_t
		{
			MEMBER(input_value, cbone_constraint_pose_space_morph__input_t, vector);
			MEMBER(output_weight_list, cbone_constraint_pose_space_morph__input_t, cutl_vector<float>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct cbone_constraint_pose_space_morph__input_t

		struct bone_demo_capture_settings_t
		{
			MEMBER(bone_name, bone_demo_capture_settings_t, cutl_string);
			MEMBER(chain_length, bone_demo_capture_settings_t, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct bone_demo_capture_settings_t

		class canim_parameter_manager_updater
		{
		public:
			MEMBER(parameters, canim_parameter_manager_updater, cutl_vector<csmart_ptr<canim_parameter_base>>);
			MEMBER(id_to_index_map, canim_parameter_manager_updater, cutl_hashtable<anim_param_id, int32>);
			MEMBER(name_to_index_map, canim_parameter_manager_updater, cutl_hashtable<cutl_string, int32>);
			MEMBER(index_to_handle, canim_parameter_manager_updater, cutl_vector<canim_param_handle>);
			MEMBER(auto_reset_params, canim_parameter_manager_updater, cutl_vector<cutl_pair<canim_param_handle, _canim_variant>>);
			MEMBER(auto_reset_map, canim_parameter_manager_updater, cutl_hashtable<canim_param_handle, int16>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class canim_parameter_manager_updater

		class canim_bone
		{
		public:
			MEMBER(name, canim_bone, cbuffer_string);
			MEMBER(parent, canim_bone, int);
			MEMBER(pos, canim_bone, vector);
			MEMBER(quat, canim_bone, quaternion_storage);
			MEMBER(scale, canim_bone, float);
			MEMBER(q_alignment, canim_bone, quaternion_storage);
			MEMBER(flags, canim_bone, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class canim_bone

		class clook_at_update_node : public cunary_update_node
		{
		public:
			MEMBER(op_fixed_settings, clook_at_update_node, look_at_op_fixed_settings_t);
			MEMBER(target, clook_at_update_node, anim_vector_source);
			MEMBER(param_index, clook_at_update_node, canim_param_handle);
			MEMBER(weight_param_index, clook_at_update_node, canim_param_handle);
			MEMBER(reset_child, clook_at_update_node, bool);
			MEMBER(lock_when_waning, clook_at_update_node, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class clook_at_update_node : public cunary_update_node

		struct hit_react_fixed_settings_t
		{
			MEMBER(weight_list_index, hit_react_fixed_settings_t, int);
			MEMBER(effected_bone_count, hit_react_fixed_settings_t, int);
			MEMBER(max_impact_force, hit_react_fixed_settings_t, float);
			MEMBER(min_impact_force, hit_react_fixed_settings_t, float);
			MEMBER(whip_impact_scale, hit_react_fixed_settings_t, float);
			MEMBER(counter_rotation_scale, hit_react_fixed_settings_t, float);
			MEMBER(distance_fade_scale, hit_react_fixed_settings_t, float);
			MEMBER(propagation_scale, hit_react_fixed_settings_t, float);
			MEMBER(whip_delay, hit_react_fixed_settings_t, float);
			MEMBER(spring_strength, hit_react_fixed_settings_t, float);
			MEMBER(whip_spring_strength, hit_react_fixed_settings_t, float);
			MEMBER(max_angle_radians, hit_react_fixed_settings_t, float);
			MEMBER(hip_bone_index, hit_react_fixed_settings_t, int);
			MEMBER(hip_bone_translation_scale, hit_react_fixed_settings_t, float);
			MEMBER(hip_dip_spring_strength, hit_react_fixed_settings_t, float);
			MEMBER(hip_dip_impact_scale, hit_react_fixed_settings_t, float);
			MEMBER(hip_dip_delay, hit_react_fixed_settings_t, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct hit_react_fixed_settings_t

		class cskeletal_input_update_node : public cleaf_update_node
		{
		public:
			MEMBER(fixed_op_data, cskeletal_input_update_node, skeletal_input_op_fixed_settings_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cskeletal_input_update_node : public cleaf_update_node

		class cflex_op
		{
		public:
			MEMBER(op_code, cflex_op, flex_op_code_t);
			MEMBER(data, cflex_op, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cflex_op

		class canim_script_component_updater : public canim_component_updater
		{
		public:
			MEMBER(h_script, canim_script_component_updater, anim_script_handle);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class canim_script_component_updater : public canim_component_updater

		class canim_event_definition
		{
		public:
			MEMBER(frame, canim_event_definition, int);
			MEMBER(cycle, canim_event_definition, float);
			MEMBER(event_data, canim_event_definition, key_values3);
			MEMBER(s_legacy_options, canim_event_definition, cbuffer_string);
			MEMBER(s_event_name, canim_event_definition, cglobal_symbol);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class canim_event_definition

		class cmodel_config_element_command : public cmodel_config_element
		{
		public:
			MEMBER(command, cmodel_config_element_command, cutl_string);
			MEMBER(args, cmodel_config_element_command, key_values3);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cmodel_config_element_command : public cmodel_config_element

		class caim_matrix_update_node : public cunary_update_node
		{
		public:
			MEMBER(op_fixed_settings, caim_matrix_update_node, aim_matrix_op_fixed_settings_t);
			MEMBER(target, caim_matrix_update_node, anim_vector_source);
			MEMBER(param_index, caim_matrix_update_node, canim_param_handle);
			MEMBER(h_sequence, caim_matrix_update_node, hsequence);
			MEMBER(reset_child, caim_matrix_update_node, bool);
			MEMBER(lock_when_waning, caim_matrix_update_node, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class caim_matrix_update_node : public cunary_update_node

		class canim_state_machine_updater
		{
		public:
			MEMBER(states, canim_state_machine_updater, cutl_vector<cstate_update_data>);
			MEMBER(transitions, canim_state_machine_updater, cutl_vector<ctransition_update_data>);
			MEMBER(start_state_index, canim_state_machine_updater, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class canim_state_machine_updater

		class csequence_group_data
		{
		public:
			MEMBER(s_name, csequence_group_data, cbuffer_string);
			MEMBER(flags, csequence_group_data, uint32_t);
			MEMBER(local_sequence_name_array, csequence_group_data, cutl_vector<cbuffer_string>);
			MEMBER(local_s1_seq_desc_array, csequence_group_data, cutl_vector<cseq_s1_seq_desc>);
			MEMBER(local_multi_seq_desc_array, csequence_group_data, cutl_vector<cseq_s1_seq_desc>);
			MEMBER(local_synth_anim_desc_array, csequence_group_data, cutl_vector<cseq_synth_anim_desc>);
			MEMBER(local_cmd_seq_desc_array, csequence_group_data, cutl_vector<cseq_cmd_seq_desc>);
			MEMBER(local_bone_mask_array, csequence_group_data, cutl_vector<cseq_bone_mask_list>);
			MEMBER(local_scale_set_array, csequence_group_data, cutl_vector<cseq_scale_set>);
			MEMBER(local_bone_name_array, csequence_group_data, cutl_vector<cbuffer_string>);
			MEMBER(local_node_name, csequence_group_data, cbuffer_string);
			MEMBER(local_pose_param_array, csequence_group_data, cutl_vector<cseq_pose_param_desc>);
			MEMBER(key_values, csequence_group_data, key_values3);
			MEMBER(local_ikautoplay_lock_array, csequence_group_data, cutl_vector<cseq_iklock>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class csequence_group_data

		class cstatic_pose_cache_builder : public cstatic_pose_cache
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cstatic_pose_cache_builder : public cstatic_pose_cache

		struct model_skeleton_data_t
		{
			MEMBER(bone_name, model_skeleton_data_t, cutl_vector<cutl_string>);
			MEMBER(parent, model_skeleton_data_t, cutl_vector<short>);
			MEMBER(bone_sphere, model_skeleton_data_t, cutl_vector<float>);
			MEMBER(flag, model_skeleton_data_t, cutl_vector<uint32_t>);
			MEMBER(bone_pos_parent, model_skeleton_data_t, cutl_vector<vector>);
			MEMBER(bone_rot_parent, model_skeleton_data_t, cutl_vector<quaternion_storage>);
			MEMBER(bone_scale_parent, model_skeleton_data_t, cutl_vector<float>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct model_skeleton_data_t

		class cquaternion_anim_parameter : public cconcrete_anim_parameter
		{
		public:
			MEMBER(default_value, cquaternion_anim_parameter, quaternion);
			MEMBER(interpolate, cquaternion_anim_parameter, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cquaternion_anim_parameter : public cconcrete_anim_parameter

		class cvrinput_component_updater : public canim_component_updater
		{
		public:
			MEMBER(finger_curl_thumb, cvrinput_component_updater, canim_param_handle);
			MEMBER(finger_curl_index, cvrinput_component_updater, canim_param_handle);
			MEMBER(finger_curl_middle, cvrinput_component_updater, canim_param_handle);
			MEMBER(finger_curl_ring, cvrinput_component_updater, canim_param_handle);
			MEMBER(finger_curl_pinky, cvrinput_component_updater, canim_param_handle);
			MEMBER(finger_splay_thumb_index, cvrinput_component_updater, canim_param_handle);
			MEMBER(finger_splay_index_middle, cvrinput_component_updater, canim_param_handle);
			MEMBER(finger_splay_middle_ring, cvrinput_component_updater, canim_param_handle);
			MEMBER(finger_splay_ring_pinky, cvrinput_component_updater, canim_param_handle);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cvrinput_component_updater : public canim_component_updater

		class cblend_update_node : public canim_update_node_base
		{
		public:
			MEMBER(children, cblend_update_node, cutl_vector<canim_update_node_ref>);
			MEMBER(sorted_order, cblend_update_node, cutl_vector<uint8_t>);
			MEMBER(target_values, cblend_update_node, cutl_vector<float>);
			MEMBER(blend_value_source, cblend_update_node, anim_value_source);
			MEMBER(param_index, cblend_update_node, canim_param_handle);
			MEMBER(damping, cblend_update_node, canim_input_damping);
			MEMBER(blend_key_type, cblend_update_node, blend_key_type);
			MEMBER(lock_blend_on_reset, cblend_update_node, bool);
			MEMBER(sync_cycles, cblend_update_node, bool);
			MEMBER(loop, cblend_update_node, bool);
			MEMBER(lock_when_waning, cblend_update_node, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cblend_update_node : public canim_update_node_base

		class canim_local_hierarchy
		{
		public:
			MEMBER(s_bone, canim_local_hierarchy, cbuffer_string);
			MEMBER(s_new_parent, canim_local_hierarchy, cbuffer_string);
			MEMBER(start_frame, canim_local_hierarchy, int);
			MEMBER(peak_frame, canim_local_hierarchy, int);
			MEMBER(tail_frame, canim_local_hierarchy, int);
			MEMBER(end_frame, canim_local_hierarchy, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class canim_local_hierarchy

		class cdamped_value_update_item
		{
		public:
			MEMBER(damping, cdamped_value_update_item, canim_input_damping);
			MEMBER(h_param_in, cdamped_value_update_item, canim_param_handle);
			MEMBER(h_param_out, cdamped_value_update_item, canim_param_handle);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cdamped_value_update_item

		class ccycle_control_clip_update_node : public cleaf_update_node
		{
		public:
			MEMBER(tags, ccycle_control_clip_update_node, cutl_vector<tag_span_t>);
			MEMBER(h_sequence, ccycle_control_clip_update_node, hsequence);
			MEMBER(duration, ccycle_control_clip_update_node, float);
			MEMBER(value_source, ccycle_control_clip_update_node, anim_value_source);
			MEMBER(param_index, ccycle_control_clip_update_node, canim_param_handle);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class ccycle_control_clip_update_node : public cleaf_update_node

		class cfoot_position_metric_evaluator : public cmotion_metric_evaluator
		{
		public:
			MEMBER(foot_indices, cfoot_position_metric_evaluator, cutl_vector<int>);
			MEMBER(ignore_slope, cfoot_position_metric_evaluator, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cfoot_position_metric_evaluator : public cmotion_metric_evaluator

		class cparent_constraint : public cbase_constraint
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cparent_constraint : public cbase_constraint

		class canim_foot
		{
		public:
			MEMBER(name, canim_foot, cutl_string);
			MEMBER(v_ball_offset, canim_foot, vector);
			MEMBER(v_heel_offset, canim_foot, vector);
			MEMBER(ankle_bone_index, canim_foot, int);
			MEMBER(toe_bone_index, canim_foot, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class canim_foot

		class cmorph_rect_data
		{
		public:
			MEMBER(xleft_dst, cmorph_rect_data, short);
			MEMBER(ytop_dst, cmorph_rect_data, short);
			MEMBER(uwidth_src, cmorph_rect_data, float);
			MEMBER(vheight_src, cmorph_rect_data, float);
			MEMBER(bundle_datas, cmorph_rect_data, cutl_vector<cmorph_bundle_data>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cmorph_rect_data

		class canim_data_channel_desc
		{
		public:
			MEMBER(channel_class, canim_data_channel_desc, cbuffer_string);
			MEMBER(variable_name, canim_data_channel_desc, cbuffer_string);
			MEMBER(flags, canim_data_channel_desc, int);
			MEMBER(type, canim_data_channel_desc, int);
			MEMBER(grouping, canim_data_channel_desc, cbuffer_string);
			MEMBER(description, canim_data_channel_desc, cbuffer_string);
			MEMBER(element_name_array, canim_data_channel_desc, cutl_vector<cbuffer_string>);
			MEMBER(element_index_array, canim_data_channel_desc, cutl_vector<int>);
			MEMBER(element_mask_array, canim_data_channel_desc, cutl_vector<uint32_t>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class canim_data_channel_desc

		class clodcomponent_updater : public canim_component_updater
		{
		public:
			MEMBER(server_lod, clodcomponent_updater, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class clodcomponent_updater : public canim_component_updater

		struct mood_animation_t
		{
			MEMBER(s_name, mood_animation_t, cutl_string);
			MEMBER(weight, mood_animation_t, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct mood_animation_t

		class cjiggle_bone_update_node : public cunary_update_node
		{
		public:
			MEMBER(op_fixed_data, cjiggle_bone_update_node, jiggle_bone_settings_list_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cjiggle_bone_update_node : public cunary_update_node

		class cfoot_motion
		{
		public:
			MEMBER(strides, cfoot_motion, cutl_vector<cfoot_stride>);
			MEMBER(name, cfoot_motion, cutl_string);
			MEMBER(additive, cfoot_motion, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cfoot_motion

		class cmodel_config_element_random_color : public cmodel_config_element
		{
		public:
			MEMBER(gradient, cmodel_config_element_random_color, ccolor_gradient);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cmodel_config_element_random_color : public cmodel_config_element

		class cbone_velocity_metric_evaluator : public cmotion_metric_evaluator
		{
		public:
			MEMBER(bone_index, cbone_velocity_metric_evaluator, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cbone_velocity_metric_evaluator : public cmotion_metric_evaluator

		class foot_lock_pose_op_fixed_settings
		{
		public:
			MEMBER(foot_info, foot_lock_pose_op_fixed_settings, cutl_vector<foot_fixed_data_t>);
			MEMBER(hip_damping_settings, foot_lock_pose_op_fixed_settings, canim_input_damping);
			MEMBER(hip_bone_index, foot_lock_pose_op_fixed_settings, int);
			MEMBER(ik_solver_type, foot_lock_pose_op_fixed_settings, iksolver_type);
			MEMBER(apply_tilt, foot_lock_pose_op_fixed_settings, bool);
			MEMBER(apply_hip_drop, foot_lock_pose_op_fixed_settings, bool);
			MEMBER(always_use_fallback_hinge, foot_lock_pose_op_fixed_settings, bool);
			MEMBER(apply_foot_rotation_limits, foot_lock_pose_op_fixed_settings, bool);
			MEMBER(apply_leg_twist_limits, foot_lock_pose_op_fixed_settings, bool);
			MEMBER(max_foot_height, foot_lock_pose_op_fixed_settings, float);
			MEMBER(extension_scale, foot_lock_pose_op_fixed_settings, float);
			MEMBER(max_leg_twist, foot_lock_pose_op_fixed_settings, float);
			MEMBER(enable_lock_breaking, foot_lock_pose_op_fixed_settings, bool);
			MEMBER(lock_break_tolerance, foot_lock_pose_op_fixed_settings, float);
			MEMBER(lock_blend_time, foot_lock_pose_op_fixed_settings, float);
			MEMBER(enable_stretching, foot_lock_pose_op_fixed_settings, bool);
			MEMBER(max_stretch_amount, foot_lock_pose_op_fixed_settings, float);
			MEMBER(stretch_extension_scale, foot_lock_pose_op_fixed_settings, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class foot_lock_pose_op_fixed_settings

		class csequence_update_node : public cleaf_update_node
		{
		public:
			MEMBER(param_spans, csequence_update_node, cparam_span_updater);
			MEMBER(tags, csequence_update_node, cutl_vector<tag_span_t>);
			MEMBER(h_sequence, csequence_update_node, hsequence);
			MEMBER(playback_speed, csequence_update_node, float);
			MEMBER(duration, csequence_update_node, float);
			MEMBER(loop, csequence_update_node, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class csequence_update_node : public cleaf_update_node

		struct finger_source_t
		{
			MEMBER(finger_index, finger_source_t, anim_vrfinger_t);
			MEMBER(finger_weight, finger_source_t, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct finger_source_t

		struct jiggle_bone_settings_t
		{
			MEMBER(bone_index, jiggle_bone_settings_t, int);
			MEMBER(spring_strength, jiggle_bone_settings_t, float);
			MEMBER(max_time_step, jiggle_bone_settings_t, float);
			MEMBER(damping, jiggle_bone_settings_t, float);
			MEMBER(v_bounds_max_ls, jiggle_bone_settings_t, vector);
			MEMBER(v_bounds_min_ls, jiggle_bone_settings_t, vector);
			MEMBER(e_sim_space, jiggle_bone_settings_t, jiggle_bone_sim_space);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct jiggle_bone_settings_t

		class cfoot_lock_update_node : public cunary_update_node
		{
		public:
			MEMBER(op_fixed_settings, cfoot_lock_update_node, foot_lock_pose_op_fixed_settings);
			MEMBER(foot_settings, cfoot_lock_update_node, cutl_vector<foot_fixed_settings>);
			MEMBER(hip_shift_damping, cfoot_lock_update_node, canim_input_damping);
			MEMBER(root_height_damping, cfoot_lock_update_node, canim_input_damping);
			MEMBER(stride_curve_scale, cfoot_lock_update_node, float);
			MEMBER(stride_curve_limit_scale, cfoot_lock_update_node, float);
			MEMBER(step_height_increase_scale, cfoot_lock_update_node, float);
			MEMBER(step_height_decrease_scale, cfoot_lock_update_node, float);
			MEMBER(hip_shift_scale, cfoot_lock_update_node, float);
			MEMBER(blend_time, cfoot_lock_update_node, float);
			MEMBER(max_root_height_offset, cfoot_lock_update_node, float);
			MEMBER(min_root_height_offset, cfoot_lock_update_node, float);
			MEMBER(tilt_plane_pitch_spring_strength, cfoot_lock_update_node, float);
			MEMBER(tilt_plane_roll_spring_strength, cfoot_lock_update_node, float);
			MEMBER(apply_foot_rotation_limits, cfoot_lock_update_node, bool);
			MEMBER(apply_hip_shift, cfoot_lock_update_node, bool);
			MEMBER(modulate_step_height, cfoot_lock_update_node, bool);
			MEMBER(reset_child, cfoot_lock_update_node, bool);
			MEMBER(enable_vertical_curved_paths, cfoot_lock_update_node, bool);
			MEMBER(enable_root_height_damping, cfoot_lock_update_node, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cfoot_lock_update_node : public cunary_update_node

		class cpath_metric_evaluator : public cmotion_metric_evaluator
		{
		public:
			MEMBER(path_time_samples, cpath_metric_evaluator, cutl_vector<float>);
			MEMBER(distance, cpath_metric_evaluator, float);
			MEMBER(extrapolate_movement, cpath_metric_evaluator, bool);
			MEMBER(min_extrapolation_speed, cpath_metric_evaluator, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpath_metric_evaluator : public cmotion_metric_evaluator

		class foot_step_trigger
		{
		public:
			MEMBER(tags, foot_step_trigger, cutl_vector<int>);
			MEMBER(foot_index, foot_step_trigger, int);
			MEMBER(trigger_phase, foot_step_trigger, step_phase);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class foot_step_trigger

		class canim_movement
		{
		public:
			MEMBER(endframe, canim_movement, int);
			MEMBER(motionflags, canim_movement, int);
			MEMBER(v0, canim_movement, float);
			MEMBER(v1, canim_movement, float);
			MEMBER(angle, canim_movement, float);
			MEMBER(vector, canim_movement, vector);
			MEMBER(position, canim_movement, vector);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class canim_movement

		struct finger_chain_t
		{
			MEMBER(targets, finger_chain_t, cutl_vector<finger_source_t>);
			MEMBER(bones, finger_chain_t, cutl_vector<finger_bone_t>);
			MEMBER(v_tip_offset, finger_chain_t, vector);
			MEMBER(v_splay_hinge_axis, finger_chain_t, vector);
			MEMBER(tip_parent_bone_index, finger_chain_t, int);
			MEMBER(metacarpal_bone_index, finger_chain_t, int);
			MEMBER(splay_min_angle, finger_chain_t, float);
			MEMBER(splay_max_angle, finger_chain_t, float);
			MEMBER(finger_scale_ratio, finger_chain_t, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct finger_chain_t

		class cmodel_config_element_set_bodygroup : public cmodel_config_element
		{
		public:
			MEMBER(group_name, cmodel_config_element_set_bodygroup, cutl_string);
			MEMBER(choice, cmodel_config_element_set_bodygroup, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cmodel_config_element_set_bodygroup : public cmodel_config_element

		class cseq_pose_param_desc
		{
		public:
			MEMBER(s_name, cseq_pose_param_desc, cbuffer_string);
			MEMBER(start, cseq_pose_param_desc, float);
			MEMBER(end, cseq_pose_param_desc, float);
			MEMBER(loop, cseq_pose_param_desc, float);
			MEMBER(looping, cseq_pose_param_desc, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cseq_pose_param_desc

		class cphys_surface_properties
		{
		public:
			MEMBER(name, cphys_surface_properties, cutl_string);
			MEMBER(name_hash, cphys_surface_properties, uint32_t);
			MEMBER(base_name_hash, cphys_surface_properties, uint32_t);
			MEMBER(hidden, cphys_surface_properties, bool);
			MEMBER(description, cphys_surface_properties, cutl_string);
			MEMBER(physics, cphys_surface_properties, cphys_surface_properties_physics);
			MEMBER(audio_sounds, cphys_surface_properties, cphys_surface_properties_sound_names);
			MEMBER(audio_params, cphys_surface_properties, cphys_surface_properties_audio);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cphys_surface_properties

		class csubtract_update_node : public cbinary_update_node
		{
		public:
			MEMBER(foot_motion_timing, csubtract_update_node, binary_node_child_option);
			MEMBER(apply_to_foot_motion, csubtract_update_node, bool);
			MEMBER(apply_channels_separately, csubtract_update_node, bool);
			MEMBER(use_model_space, csubtract_update_node, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class csubtract_update_node : public cbinary_update_node

		class cstate_machine_component_updater : public canim_component_updater
		{
		public:
			MEMBER(state_machine, cstate_machine_component_updater, canim_state_machine_updater);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cstate_machine_component_updater : public canim_component_updater

		class cselector_update_node : public canim_update_node_base
		{
		public:
			MEMBER(children, cselector_update_node, cutl_vector<canim_update_node_ref>);
			MEMBER(tags, cselector_update_node, cutl_vector<char>);
			MEMBER(blend_curve, cselector_update_node, cblend_curve);
			MEMBER(blend_time, cselector_update_node, canim_value<float>);
			MEMBER(h_parameter, cselector_update_node, canim_param_handle);
			MEMBER(e_tag_behavior, cselector_update_node, selector_tag_behavior_t);
			MEMBER(reset_on_change, cselector_update_node, bool);
			MEMBER(sync_cycles_on_change, cselector_update_node, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cselector_update_node : public canim_update_node_base

		class ccompressor_group
		{
		public:
			MEMBER(total_element_count, ccompressor_group, int);
			MEMBER(channel_class, ccompressor_group, cutl_vector<char*>);
			MEMBER(variable_name, ccompressor_group, cutl_vector<char*>);
			MEMBER(type, ccompressor_group, cutl_vector<fieldtype_t>);
			MEMBER(flags, ccompressor_group, cutl_vector<int>);
			MEMBER(grouping, ccompressor_group, cutl_vector<cutl_string>);
			MEMBER(compressor_index, ccompressor_group, cutl_vector<int>);
			MEMBER(element_names, ccompressor_group, cutl_vector<cutl_vector<char*>>);
			MEMBER(element_unique_id, ccompressor_group, cutl_vector<cutl_vector<int>>);
			MEMBER(element_mask, ccompressor_group, cutl_vector<uint32_t>);
			MEMBER(vector_compressor, ccompressor_group, cutl_vector<ccompressor<vector>>);
			MEMBER(quaternion_compressor, ccompressor_group, cutl_vector<ccompressor<quaternion_storage>>);
			MEMBER(int_compressor, ccompressor_group, cutl_vector<ccompressor<int>>);
			MEMBER(bool_compressor, ccompressor_group, cutl_vector<ccompressor<bool>>);
			MEMBER(color_compressor, ccompressor_group, cutl_vector<ccompressor<color>>);
			MEMBER(vector2_dcompressor, ccompressor_group, cutl_vector<ccompressor<vector2d>>);
			MEMBER(vector4_dcompressor, ccompressor_group, cutl_vector<ccompressor<vector4d>>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class ccompressor_group

		class cway_point_helper_update_node : public cunary_update_node
		{
		public:
			MEMBER(start_cycle, cway_point_helper_update_node, float);
			MEMBER(end_cycle, cway_point_helper_update_node, float);
			MEMBER(only_goals, cway_point_helper_update_node, bool);
			MEMBER(prevent_overshoot, cway_point_helper_update_node, bool);
			MEMBER(prevent_undershoot, cway_point_helper_update_node, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cway_point_helper_update_node : public cunary_update_node

		class cstate_machine_update_node : public canim_update_node_base
		{
		public:
			MEMBER(state_machine, cstate_machine_update_node, canim_state_machine_updater);
			MEMBER(state_data, cstate_machine_update_node, cutl_vector<cstate_node_state_data>);
			MEMBER(transition_data, cstate_machine_update_node, cutl_vector<cstate_node_transition_data>);
			MEMBER(block_waning_tags, cstate_machine_update_node, bool);
			MEMBER(lock_state_when_waning, cstate_machine_update_node, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cstate_machine_update_node : public canim_update_node_base

		class cemit_tag_action_updater : public canim_action_updater
		{
		public:
			MEMBER(tag_index, cemit_tag_action_updater, int);
			MEMBER(is_zero_duration, cemit_tag_action_updater, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cemit_tag_action_updater : public canim_action_updater

		struct animation_decode_debug_dump_element_t
		{
			MEMBER(entity_index, animation_decode_debug_dump_element_t, int);
			MEMBER(model_name, animation_decode_debug_dump_element_t, cutl_string);
			MEMBER(pose_params, animation_decode_debug_dump_element_t, cutl_vector<cutl_string>);
			MEMBER(decode_ops, animation_decode_debug_dump_element_t, cutl_vector<cutl_string>);
			MEMBER(internal_ops, animation_decode_debug_dump_element_t, cutl_vector<cutl_string>);
			MEMBER(decoded_anims, animation_decode_debug_dump_element_t, cutl_vector<cutl_string>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct animation_decode_debug_dump_element_t

		class canim_cycle : public ccycle_base
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class canim_cycle : public ccycle_base

		class cparticle_anim_tag : public canim_tag_base
		{
		public:
			MEMBER(h_particle_system, cparticle_anim_tag, cstrong_handle<info_for_resource_type_iparticle_system_definition>);
			MEMBER(particle_system_name, cparticle_anim_tag, cutl_string);
			MEMBER(config_name, cparticle_anim_tag, cutl_string);
			MEMBER(detach_from_owner, cparticle_anim_tag, bool);
			MEMBER(stop_when_tag_ends, cparticle_anim_tag, bool);
			MEMBER(tag_end_stop_is_instant, cparticle_anim_tag, bool);
			MEMBER(attachment_name, cparticle_anim_tag, cutl_string);
			MEMBER(attachment_type, cparticle_anim_tag, particle_attachment_t);
			MEMBER(attachment_cp1_name, cparticle_anim_tag, cutl_string);
			MEMBER(attachment_cp1_type, cparticle_anim_tag, particle_attachment_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cparticle_anim_tag : public canim_tag_base

		class ctoggle_component_action_updater : public canim_action_updater
		{
		public:
			MEMBER(component_id, ctoggle_component_action_updater, anim_component_id);
			MEMBER(set_enabled, ctoggle_component_action_updater, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class ctoggle_component_action_updater : public canim_action_updater

		class cmotion_graph
		{
		public:
			MEMBER(param_spans, cmotion_graph, cparam_span_updater);
			MEMBER(tags, cmotion_graph, cutl_vector<tag_span_t>);
			MEMBER(root_node, cmotion_graph, csmart_ptr<cmotion_node>);
			MEMBER(parameter_count, cmotion_graph, int);
			MEMBER(config_start_index, cmotion_graph, int);
			MEMBER(config_count, cmotion_graph, int);
			MEMBER(loop, cmotion_graph, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cmotion_graph

		class cdirect_playback_tag_data
		{
		public:
			MEMBER(sequence_name, cdirect_playback_tag_data, cutl_string);
			MEMBER(tags, cdirect_playback_tag_data, cutl_vector<tag_span_t>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cdirect_playback_tag_data

		class motion_dbindex
		{
		public:
			MEMBER(index, motion_dbindex, uint32_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class motion_dbindex

		class chit_box_set_list
		{
		public:
			MEMBER(hit_box_sets, chit_box_set_list, cutl_vector<chit_box_set>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class chit_box_set_list

		class clean_matrix_update_node : public cleaf_update_node
		{
		public:
			MEMBER_ARR(frame_corners_arr, clean_matrix_update_node, 9, int);
			MEMBER_ARR(poses_arr, clean_matrix_update_node, 9, cpose_handle);
			MEMBER(damping, clean_matrix_update_node, canim_input_damping);
			MEMBER(blend_source, clean_matrix_update_node, anim_vector_source);
			MEMBER(param_index, clean_matrix_update_node, canim_param_handle);
			MEMBER(vertical_axis, clean_matrix_update_node, vector);
			MEMBER(horizontal_axis, clean_matrix_update_node, vector);
			MEMBER(h_sequence, clean_matrix_update_node, hsequence);
			MEMBER(max_value, clean_matrix_update_node, float);
			MEMBER(sequence_max_frame, clean_matrix_update_node, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class clean_matrix_update_node : public cleaf_update_node

		struct perm_model_ext_part_t
		{
			MEMBER(transform, perm_model_ext_part_t, ctransform);
			MEMBER(name, perm_model_ext_part_t, cutl_string);
			MEMBER(parent, perm_model_ext_part_t, int);
			MEMBER(ref_model, perm_model_ext_part_t, cstrong_handle<info_for_resource_type_cmodel>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct perm_model_ext_part_t

		class cblend2_dupdate_node : public canim_update_node_base
		{
		public:
			MEMBER(items, cblend2_dupdate_node, cutl_vector<blend_item_t>);
			MEMBER(tags, cblend2_dupdate_node, cutl_vector<tag_span_t>);
			MEMBER(param_spans, cblend2_dupdate_node, cparam_span_updater);
			MEMBER(node_item_indices, cblend2_dupdate_node, cutl_vector<int>);
			MEMBER(damping, cblend2_dupdate_node, canim_input_damping);
			MEMBER(blend_source_x, cblend2_dupdate_node, anim_value_source);
			MEMBER(param_x, cblend2_dupdate_node, canim_param_handle);
			MEMBER(blend_source_y, cblend2_dupdate_node, anim_value_source);
			MEMBER(param_y, cblend2_dupdate_node, canim_param_handle);
			MEMBER(e_blend_mode, cblend2_dupdate_node, blend2_dmode);
			MEMBER(playback_speed, cblend2_dupdate_node, float);
			MEMBER(loop, cblend2_dupdate_node, bool);
			MEMBER(lock_blend_on_reset, cblend2_dupdate_node, bool);
			MEMBER(lock_when_waning, cblend2_dupdate_node, bool);
			MEMBER(anim_events_and_tags_on_most_weighted_only, cblend2_dupdate_node, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cblend2_dupdate_node : public canim_update_node_base

		class ccppscript_component_updater : public canim_component_updater
		{
		public:
			MEMBER(scripts_to_run, ccppscript_component_updater, cutl_vector<cglobal_symbol>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class ccppscript_component_updater : public canim_component_updater

		class cseq_seq_desc_flag
		{
		public:
			MEMBER(looping, cseq_seq_desc_flag, bool);
			MEMBER(snap, cseq_seq_desc_flag, bool);
			MEMBER(autoplay, cseq_seq_desc_flag, bool);
			MEMBER(post, cseq_seq_desc_flag, bool);
			MEMBER(hidden, cseq_seq_desc_flag, bool);
			MEMBER(multi, cseq_seq_desc_flag, bool);
			MEMBER(legacy_delta, cseq_seq_desc_flag, bool);
			MEMBER(legacy_worldspace, cseq_seq_desc_flag, bool);
			MEMBER(legacy_cyclepose, cseq_seq_desc_flag, bool);
			MEMBER(legacy_realtime, cseq_seq_desc_flag, bool);
			MEMBER(model_doc, cseq_seq_desc_flag, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cseq_seq_desc_flag

		class cfoot_definition
		{
		public:
			MEMBER(name, cfoot_definition, cutl_string);
			MEMBER(ankle_bone_name, cfoot_definition, cutl_string);
			MEMBER(toe_bone_name, cfoot_definition, cutl_string);
			MEMBER(v_ball_offset, cfoot_definition, vector);
			MEMBER(v_heel_offset, cfoot_definition, vector);
			MEMBER(foot_length, cfoot_definition, float);
			MEMBER(bind_pose_direction_ms, cfoot_definition, float);
			MEMBER(trace_height, cfoot_definition, float);
			MEMBER(trace_radius, cfoot_definition, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cfoot_definition

		class cragdoll_component_updater : public canim_component_updater
		{
		public:
			MEMBER(ragdoll_node_paths, cragdoll_component_updater, cutl_vector<canim_node_path>);
			MEMBER(bone_indices, cragdoll_component_updater, cutl_vector<int>);
			MEMBER(bone_names, cragdoll_component_updater, cutl_vector<cutl_string>);
			MEMBER(weight_lists, cragdoll_component_updater, cutl_vector<weight_list>);
			MEMBER(spring_frequency_min, cragdoll_component_updater, float);
			MEMBER(spring_frequency_max, cragdoll_component_updater, float);
			MEMBER(max_stretch, cragdoll_component_updater, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cragdoll_component_updater : public canim_component_updater

		class canim_user
		{
		public:
			MEMBER(name, canim_user, cbuffer_string);
			MEMBER(type, canim_user, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class canim_user

		class cconstraint_target
		{
		public:
			MEMBER(q_offset, cconstraint_target, quaternion);
			MEMBER(v_offset, cconstraint_target, vector);
			MEMBER(bone_hash, cconstraint_target, uint32_t);
			MEMBER(s_name, cconstraint_target, cutl_string);
			MEMBER(weight, cconstraint_target, float);
			MEMBER(is_attachment, cconstraint_target, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cconstraint_target

		struct vphys_xconstraint2_t
		{
			MEMBER(flags, vphys_xconstraint2_t, uint32_t);
			MEMBER(parent, vphys_xconstraint2_t, uint16_t);
			MEMBER(child, vphys_xconstraint2_t, uint16_t);
			MEMBER(params, vphys_xconstraint2_t, vphys_xconstraint_params_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct vphys_xconstraint2_t

		class cmodel_config_element_random_pick : public cmodel_config_element
		{
		public:
			MEMBER(choices, cmodel_config_element_random_pick, cutl_vector<cutl_string>);
			MEMBER(choice_weights, cmodel_config_element_random_pick, cutl_vector<float>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cmodel_config_element_random_pick : public cmodel_config_element

		class cbool_anim_parameter : public cconcrete_anim_parameter
		{
		public:
			MEMBER(default_value, cbool_anim_parameter, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cbool_anim_parameter : public cconcrete_anim_parameter

		struct blend_item_t
		{
			MEMBER(tags, blend_item_t, cutl_vector<tag_span_t>);
			MEMBER(child, blend_item_t, canim_update_node_ref);
			MEMBER(h_sequence, blend_item_t, hsequence);
			MEMBER(v_pos, blend_item_t, vector2d);
			MEMBER(duration, blend_item_t, float);
			MEMBER(use_custom_duration, blend_item_t, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct blend_item_t

		class corient_constraint : public cbase_constraint
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class corient_constraint : public cbase_constraint

		class cdamped_value_component_updater : public canim_component_updater
		{
		public:
			MEMBER(items, cdamped_value_component_updater, cutl_vector<cdamped_value_update_item>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cdamped_value_component_updater : public canim_component_updater

		class ccycle_control_update_node : public cunary_update_node
		{
		public:
			MEMBER(value_source, ccycle_control_update_node, anim_value_source);
			MEMBER(param_index, ccycle_control_update_node, canim_param_handle);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class ccycle_control_update_node : public cunary_update_node

		class canimation_graph_visualizer_line : public canimation_graph_visualizer_primitive_base
		{
		public:
			MEMBER(v_ws_position_start, canimation_graph_visualizer_line, vector_aligned);
			MEMBER(v_ws_position_end, canimation_graph_visualizer_line, vector_aligned);
			MEMBER(color, canimation_graph_visualizer_line, color);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class canimation_graph_visualizer_line : public canimation_graph_visualizer_primitive_base

		class cexpression_action_updater : public canim_action_updater
		{
		public:
			MEMBER(h_param, cexpression_action_updater, canim_param_handle);
			MEMBER(e_param_type, cexpression_action_updater, anim_param_type_t);
			MEMBER(h_script, cexpression_action_updater, anim_script_handle);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cexpression_action_updater : public canim_action_updater

		class cchoice_update_node : public canim_update_node_base
		{
		public:
			MEMBER(children, cchoice_update_node, cutl_vector<canim_update_node_ref>);
			MEMBER(weights, cchoice_update_node, cutl_vector<float>);
			MEMBER(blend_times, cchoice_update_node, cutl_vector<float>);
			MEMBER(choice_method, cchoice_update_node, choice_method);
			MEMBER(choice_change_method, cchoice_update_node, choice_change_method);
			MEMBER(blend_method, cchoice_update_node, choice_blend_method);
			MEMBER(blend_time, cchoice_update_node, float);
			MEMBER(cross_fade, cchoice_update_node, bool);
			MEMBER(reset_chosen, cchoice_update_node, bool);
			MEMBER(dont_reset_same_selection, cchoice_update_node, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cchoice_update_node : public canim_update_node_base

		class cmotion_search_node
		{
		public:
			MEMBER(children, cmotion_search_node, cutl_vector<cmotion_search_node*>);
			MEMBER(quantizer, cmotion_search_node, cvector_quantizer);
			MEMBER(sample_codes, cmotion_search_node, cutl_vector<cutl_vector<sample_code>>);
			MEMBER(sample_indices, cmotion_search_node, cutl_vector<cutl_vector<int>>);
			MEMBER(selectable_samples, cmotion_search_node, cutl_vector<int>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cmotion_search_node

		class cmotion_matching_update_node : public cleaf_update_node
		{
		public:
			MEMBER(data_set, cmotion_matching_update_node, cmotion_data_set);
			MEMBER(metrics, cmotion_matching_update_node, cutl_vector<csmart_ptr<cmotion_metric_evaluator>>);
			MEMBER(weights, cmotion_matching_update_node, cutl_vector<float>);
			MEMBER(search_every_tick, cmotion_matching_update_node, bool);
			MEMBER(search_interval, cmotion_matching_update_node, float);
			MEMBER(search_when_clip_ends, cmotion_matching_update_node, bool);
			MEMBER(search_when_goal_changes, cmotion_matching_update_node, bool);
			MEMBER(blend_curve, cmotion_matching_update_node, cblend_curve);
			MEMBER(sample_rate, cmotion_matching_update_node, float);
			MEMBER(blend_time, cmotion_matching_update_node, float);
			MEMBER(lock_clip_when_waning, cmotion_matching_update_node, bool);
			MEMBER(selection_threshold, cmotion_matching_update_node, float);
			MEMBER(reselection_time_window, cmotion_matching_update_node, float);
			MEMBER(enable_rotation_correction, cmotion_matching_update_node, bool);
			MEMBER(goal_assist, cmotion_matching_update_node, bool);
			MEMBER(goal_assist_distance, cmotion_matching_update_node, float);
			MEMBER(goal_assist_tolerance, cmotion_matching_update_node, float);
			MEMBER(distance_scale_damping, cmotion_matching_update_node, canim_input_damping);
			MEMBER(distance_scale_outer_radius, cmotion_matching_update_node, float);
			MEMBER(distance_scale_inner_radius, cmotion_matching_update_node, float);
			MEMBER(distance_scale_max_scale, cmotion_matching_update_node, float);
			MEMBER(distance_scale_min_scale, cmotion_matching_update_node, float);
			MEMBER(enable_distance_scaling, cmotion_matching_update_node, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cmotion_matching_update_node : public cleaf_update_node

		struct perm_model_data_animated_material_attribute_t
		{
			MEMBER(attribute_name, perm_model_data_animated_material_attribute_t, cutl_string);
			MEMBER(num_channels, perm_model_data_animated_material_attribute_t, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct perm_model_data_animated_material_attribute_t

		struct tag_span_t
		{
			MEMBER(tag_index, tag_span_t, int);
			MEMBER(start_cycle, tag_span_t, float);
			MEMBER(end_cycle, tag_span_t, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct tag_span_t

		struct perm_model_info_t
		{
			MEMBER(flags, perm_model_info_t, uint32_t);
			MEMBER(v_hull_min, perm_model_info_t, vector);
			MEMBER(v_hull_max, perm_model_info_t, vector);
			MEMBER(v_view_min, perm_model_info_t, vector);
			MEMBER(v_view_max, perm_model_info_t, vector);
			MEMBER(mass, perm_model_info_t, float);
			MEMBER(v_eye_position, perm_model_info_t, vector);
			MEMBER(max_eye_deflection, perm_model_info_t, float);
			MEMBER(s_surface_property, perm_model_info_t, cutl_string);
			MEMBER(key_value_text, perm_model_info_t, cutl_string);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct perm_model_info_t

		class chit_box
		{
		public:
			MEMBER(name, chit_box, cutl_string);
			MEMBER(s_surface_property, chit_box, cutl_string);
			MEMBER(s_bone_name, chit_box, cutl_string);
			MEMBER(v_min_bounds, chit_box, vector);
			MEMBER(v_max_bounds, chit_box, vector);
			MEMBER(shape_radius, chit_box, float);
			MEMBER(bone_name_hash, chit_box, uint32_t);
			MEMBER(group_id, chit_box, int);
			MEMBER(shape_type, chit_box, uint8_t);
			MEMBER(translation_only, chit_box, bool);
			MEMBER(crc, chit_box, uint32_t);
			MEMBER(c_render_color, chit_box, color);
			MEMBER(hit_box_index, chit_box, uint16_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class chit_box

		class cfoot_cycle_metric_evaluator : public cmotion_metric_evaluator
		{
		public:
			MEMBER(foot_indices, cfoot_cycle_metric_evaluator, cutl_vector<int>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cfoot_cycle_metric_evaluator : public cmotion_metric_evaluator

		class cmotion_search_db
		{
		public:
			MEMBER(root_node, cmotion_search_db, cmotion_search_node);
			MEMBER(residual_quantizer, cmotion_search_db, cproduct_quantizer);
			MEMBER(code_indices, cmotion_search_db, cutl_vector<motion_dbindex>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cmotion_search_db

		class cbody_group_setting
		{
		public:
			MEMBER(body_group_name, cbody_group_setting, cutl_string);
			MEMBER(body_group_option, cbody_group_setting, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cbody_group_setting

		class csteps_remaining_metric_evaluator : public cmotion_metric_evaluator
		{
		public:
			MEMBER(foot_indices, csteps_remaining_metric_evaluator, cutl_vector<int>);
			MEMBER(min_steps_remaining, csteps_remaining_metric_evaluator, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class csteps_remaining_metric_evaluator : public cmotion_metric_evaluator

		class cmaterial_draw_descriptor
		{
		public:
			MEMBER(primitive_type, cmaterial_draw_descriptor, render_primitive_type_t);
			MEMBER(base_vertex, cmaterial_draw_descriptor, int);
			MEMBER(vertex_count, cmaterial_draw_descriptor, int);
			MEMBER(start_index, cmaterial_draw_descriptor, int);
			MEMBER(index_count, cmaterial_draw_descriptor, int);
			MEMBER(uv_density, cmaterial_draw_descriptor, float);
			MEMBER(v_tint_color, cmaterial_draw_descriptor, vector);
			MEMBER(alpha, cmaterial_draw_descriptor, float);
			MEMBER(first_meshlet, cmaterial_draw_descriptor, uint32_t);
			MEMBER(num_meshlets, cmaterial_draw_descriptor, uint16_t);
			MEMBER(index_buffer, cmaterial_draw_descriptor, crender_buffer_binding);
			MEMBER(material, cmaterial_draw_descriptor, cstrong_handle<info_for_resource_type_imaterial2>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cmaterial_draw_descriptor

		class cfoot_fall_anim_tag : public canim_tag_base
		{
		public:
			MEMBER(foot, cfoot_fall_anim_tag, foot_fall_tag_foot_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cfoot_fall_anim_tag : public canim_tag_base

		class caim_constraint : public cbase_constraint
		{
		public:
			MEMBER(q_aim_offset, caim_constraint, quaternion);
			MEMBER(up_type, caim_constraint, uint32_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class caim_constraint : public cbase_constraint

		class cchoreo_update_node : public cunary_update_node
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cchoreo_update_node : public cunary_update_node

		class cfoot_adjustment_update_node : public cunary_update_node
		{
		public:
			MEMBER(clips, cfoot_adjustment_update_node, cutl_vector<hsequence>);
			MEMBER(h_base_pose_cache_handle, cfoot_adjustment_update_node, cpose_handle);
			MEMBER(facing_target, cfoot_adjustment_update_node, canim_param_handle);
			MEMBER(turn_time_min, cfoot_adjustment_update_node, float);
			MEMBER(turn_time_max, cfoot_adjustment_update_node, float);
			MEMBER(step_height_max, cfoot_adjustment_update_node, float);
			MEMBER(step_height_max_angle, cfoot_adjustment_update_node, float);
			MEMBER(reset_child, cfoot_adjustment_update_node, bool);
			MEMBER(animation_driven, cfoot_adjustment_update_node, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cfoot_adjustment_update_node : public cunary_update_node

		struct csolve_iktarget_handle_t
		{
			MEMBER(position_handle, csolve_iktarget_handle_t, canim_param_handle);
			MEMBER(orientation_handle, csolve_iktarget_handle_t, canim_param_handle);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct csolve_iktarget_handle_t

		class cmodel_config_element_user_pick : public cmodel_config_element
		{
		public:
			MEMBER(choices, cmodel_config_element_user_pick, cutl_vector<cutl_string>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cmodel_config_element_user_pick : public cmodel_config_element

		class cmorph_bundle_data
		{
		public:
			MEMBER(uleft_src, cmorph_bundle_data, float);
			MEMBER(vtop_src, cmorph_bundle_data, float);
			MEMBER(offsets, cmorph_bundle_data, cutl_vector<float>);
			MEMBER(ranges, cmorph_bundle_data, cutl_vector<float>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cmorph_bundle_data

		struct material_group_t
		{
			MEMBER(name, material_group_t, cutl_string);
			MEMBER(materials, material_group_t, cutl_vector<cstrong_handle<info_for_resource_type_imaterial2>>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct material_group_t

		class cpath_helper_update_node : public cunary_update_node
		{
		public:
			MEMBER(stopping_radius, cpath_helper_update_node, float);
			MEMBER(stopping_speed_scale, cpath_helper_update_node, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpath_helper_update_node : public cunary_update_node

		class cmodel_config_element_set_material_group_on_attached_models : public cmodel_config_element
		{
		public:
			MEMBER(material_group_name, cmodel_config_element_set_material_group_on_attached_models, cutl_string);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cmodel_config_element_set_material_group_on_attached_models : public cmodel_config_element

		class cdamped_path_anim_motor_updater : public cpath_anim_motor_updater_base
		{
		public:
			MEMBER(anticipation_time, cdamped_path_anim_motor_updater, float);
			MEMBER(min_speed_scale, cdamped_path_anim_motor_updater, float);
			MEMBER(h_anticipation_pos_param, cdamped_path_anim_motor_updater, canim_param_handle);
			MEMBER(h_anticipation_heading_param, cdamped_path_anim_motor_updater, canim_param_handle);
			MEMBER(spring_constant, cdamped_path_anim_motor_updater, float);
			MEMBER(min_spring_tension, cdamped_path_anim_motor_updater, float);
			MEMBER(max_spring_tension, cdamped_path_anim_motor_updater, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cdamped_path_anim_motor_updater : public cpath_anim_motor_updater_base

		class caction_component_updater : public canim_component_updater
		{
		public:
			MEMBER(actions, caction_component_updater, cutl_vector<csmart_ptr<canim_action_updater>>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class caction_component_updater : public canim_component_updater

		class cfoot_cycle_definition
		{
		public:
			MEMBER(v_stance_position_ms, cfoot_cycle_definition, vector);
			MEMBER(v_midpoint_position_ms, cfoot_cycle_definition, vector);
			MEMBER(stance_direction_ms, cfoot_cycle_definition, float);
			MEMBER(v_to_stride_start_pos, cfoot_cycle_definition, vector);
			MEMBER(stance_cycle, cfoot_cycle_definition, canim_cycle);
			MEMBER(foot_lift_cycle, cfoot_cycle_definition, cfoot_cycle);
			MEMBER(foot_off_cycle, cfoot_cycle_definition, cfoot_cycle);
			MEMBER(foot_strike_cycle, cfoot_cycle_definition, cfoot_cycle);
			MEMBER(foot_land_cycle, cfoot_cycle_definition, cfoot_cycle);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cfoot_cycle_definition

		class canim_bone_difference
		{
		public:
			MEMBER(name, canim_bone_difference, cbuffer_string);
			MEMBER(parent, canim_bone_difference, cbuffer_string);
			MEMBER(pos_error, canim_bone_difference, vector);
			MEMBER(has_rotation, canim_bone_difference, bool);
			MEMBER(has_movement, canim_bone_difference, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class canim_bone_difference

		class cstop_at_goal_update_node : public cunary_update_node
		{
		public:
			MEMBER(outer_radius, cstop_at_goal_update_node, float);
			MEMBER(inner_radius, cstop_at_goal_update_node, float);
			MEMBER(max_scale, cstop_at_goal_update_node, float);
			MEMBER(min_scale, cstop_at_goal_update_node, float);
			MEMBER(damping, cstop_at_goal_update_node, canim_input_damping);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cstop_at_goal_update_node : public cunary_update_node

		struct vphys_xrange_t
		{
			MEMBER(min, vphys_xrange_t, float);
			MEMBER(max, vphys_xrange_t, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct vphys_xrange_t

		class cseq_s1_seq_desc
		{
		public:
			MEMBER(s_name, cseq_s1_seq_desc, cbuffer_string);
			MEMBER(flags, cseq_s1_seq_desc, cseq_seq_desc_flag);
			MEMBER(fetch, cseq_s1_seq_desc, cseq_multi_fetch);
			MEMBER(local_weightlist, cseq_s1_seq_desc, int);
			MEMBER(auto_layer_array, cseq_s1_seq_desc, cutl_vector<cseq_auto_layer>);
			MEMBER(iklock_array, cseq_s1_seq_desc, cutl_vector<cseq_iklock>);
			MEMBER(transition, cseq_s1_seq_desc, cseq_transition);
			MEMBER(sequence_keys, cseq_s1_seq_desc, key_values3);
			MEMBER(legacy_key_value_text, cseq_s1_seq_desc, cbuffer_string);
			MEMBER(activity_array, cseq_s1_seq_desc, cutl_vector<canim_activity>);
			MEMBER(foot_motion, cseq_s1_seq_desc, cutl_vector<cfoot_motion>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cseq_s1_seq_desc

		struct ikdemo_capture_settings_t
		{
			MEMBER(parent_bone_name, ikdemo_capture_settings_t, cutl_string);
			MEMBER(e_mode, ikdemo_capture_settings_t, ikchannel_mode);
			MEMBER(ik_chain_name, ikdemo_capture_settings_t, cutl_string);
			MEMBER(one_bone_start, ikdemo_capture_settings_t, cutl_string);
			MEMBER(one_bone_end, ikdemo_capture_settings_t, cutl_string);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct ikdemo_capture_settings_t

		class cdemo_settings_component_updater : public canim_component_updater
		{
		public:
			MEMBER(settings, cdemo_settings_component_updater, canim_demo_capture_settings);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cdemo_settings_component_updater : public canim_component_updater

		struct vphys_xaggregate_data_t
		{
			MEMBER(flags, vphys_xaggregate_data_t, uint16_t);
			MEMBER(ref_counter, vphys_xaggregate_data_t, uint16_t);
			MEMBER(bones_hash, vphys_xaggregate_data_t, cutl_vector<uint32_t>);
			MEMBER(bone_names, vphys_xaggregate_data_t, cutl_vector<cutl_string>);
			MEMBER(index_names, vphys_xaggregate_data_t, cutl_vector<uint16_t>);
			MEMBER(index_hash, vphys_xaggregate_data_t, cutl_vector<uint16_t>);
			MEMBER(bind_pose, vphys_xaggregate_data_t, cutl_vector<matrix3x4a_t>);
			MEMBER(parts, vphys_xaggregate_data_t, cutl_vector<vphys_xbody_part_t>);
			MEMBER(constraints2, vphys_xaggregate_data_t, cutl_vector<vphys_xconstraint2_t>);
			MEMBER(joints, vphys_xaggregate_data_t, cutl_vector<vphys_xjoint_t>);
			MEMBER(fe_model_ptr, vphys_xaggregate_data_t, phys_fe_model_desc_t*);
			MEMBER(bone_parents, vphys_xaggregate_data_t, cutl_vector<uint16_t>);
			MEMBER(surface_property_hashes, vphys_xaggregate_data_t, cutl_vector<uint32_t>);
			MEMBER(collision_attributes, vphys_xaggregate_data_t, cutl_vector<vphys_xcollision_attributes_t>);
			MEMBER(debug_part_names, vphys_xaggregate_data_t, cutl_vector<cutl_string>);
			MEMBER(embedded_keyvalues, vphys_xaggregate_data_t, cutl_string);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct vphys_xaggregate_data_t

		class cslope_component_updater : public canim_component_updater
		{
		public:
			MEMBER(trace_distance, cslope_component_updater, float);
			MEMBER(h_slope_angle, cslope_component_updater, canim_param_handle);
			MEMBER(h_slope_angle_front, cslope_component_updater, canim_param_handle);
			MEMBER(h_slope_angle_side, cslope_component_updater, canim_param_handle);
			MEMBER(h_slope_heading, cslope_component_updater, canim_param_handle);
			MEMBER(h_slope_normal, cslope_component_updater, canim_param_handle);
			MEMBER(h_slope_normal_world_space, cslope_component_updater, canim_param_handle);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cslope_component_updater : public canim_component_updater

		class cmodel_config
		{
		public:
			MEMBER(config_name, cmodel_config, cutl_string);
			MEMBER(elements, cmodel_config, cutl_vector<cmodel_config_element*>);
			MEMBER(top_level, cmodel_config, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cmodel_config

		class foot_fixed_settings
		{
		public:
			MEMBER(trace_settings, foot_fixed_settings, trace_settings_t);
			MEMBER(v_foot_base_bind_pose_position_ms, foot_fixed_settings, vector_aligned);
			MEMBER(foot_base_length, foot_fixed_settings, float);
			MEMBER(max_rotation_left, foot_fixed_settings, float);
			MEMBER(max_rotation_right, foot_fixed_settings, float);
			MEMBER(footstep_landed_tag_index, foot_fixed_settings, int);
			MEMBER(enable_tracing, foot_fixed_settings, bool);
			MEMBER(trace_angle_blend, foot_fixed_settings, float);
			MEMBER(disable_tag_index, foot_fixed_settings, int);
			MEMBER(foot_index, foot_fixed_settings, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class foot_fixed_settings

		class cmodel_config_element_attached_model : public cmodel_config_element
		{
		public:
			MEMBER(instance_name, cmodel_config_element_attached_model, cutl_string);
			MEMBER(entity_class, cmodel_config_element_attached_model, cutl_string);
			MEMBER(h_model, cmodel_config_element_attached_model, cstrong_handle<info_for_resource_type_cmodel>);
			MEMBER(v_offset, cmodel_config_element_attached_model, vector);
			MEMBER(a_ang_offset, cmodel_config_element_attached_model, qangle);
			MEMBER(attachment_name, cmodel_config_element_attached_model, cutl_string);
			MEMBER(local_attachment_offset_name, cmodel_config_element_attached_model, cutl_string);
			MEMBER(attachment_type, cmodel_config_element_attached_model, model_config_attachment_type_t);
			MEMBER(bone_merge_flex, cmodel_config_element_attached_model, bool);
			MEMBER(user_specified_color, cmodel_config_element_attached_model, bool);
			MEMBER(user_specified_material_group, cmodel_config_element_attached_model, bool);
			MEMBER(accept_parent_material_driven_decals, cmodel_config_element_attached_model, bool);
			MEMBER(bodygroup_on_other_models, cmodel_config_element_attached_model, cutl_string);
			MEMBER(material_group_on_other_models, cmodel_config_element_attached_model, cutl_string);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cmodel_config_element_attached_model : public cmodel_config_element

		class ctime_remaining_metric_evaluator : public cmotion_metric_evaluator
		{
		public:
			MEMBER(match_by_time_remaining, ctime_remaining_metric_evaluator, bool);
			MEMBER(max_time_remaining, ctime_remaining_metric_evaluator, float);
			MEMBER(filter_by_time_remaining, ctime_remaining_metric_evaluator, bool);
			MEMBER(min_time_remaining, ctime_remaining_metric_evaluator, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class ctime_remaining_metric_evaluator : public cmotion_metric_evaluator

		class cstate_node_transition_data
		{
		public:
			MEMBER(curve, cstate_node_transition_data, cblend_curve);
			MEMBER(blend_duration, cstate_node_transition_data, canim_value<float>);
			MEMBER(reset_cycle_value, cstate_node_transition_data, canim_value<float>);
			MEMBER(reset, cstate_node_transition_data, bool);
			MEMBER(reset_cycle_option, cstate_node_transition_data, uint8_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cstate_node_transition_data

		struct vphys_xjoint_t
		{
			MEMBER(type, vphys_xjoint_t, uint16_t);
			MEMBER(body1, vphys_xjoint_t, uint16_t);
			MEMBER(body2, vphys_xjoint_t, uint16_t);
			MEMBER(flags, vphys_xjoint_t, uint16_t);
			MEMBER(frame1, vphys_xjoint_t, ctransform);
			MEMBER(frame2, vphys_xjoint_t, ctransform);
			MEMBER(enable_collision, vphys_xjoint_t, bool);
			MEMBER(enable_linear_limit, vphys_xjoint_t, bool);
			MEMBER(linear_limit, vphys_xjoint_t, vphys_xrange_t);
			MEMBER(enable_linear_motor, vphys_xjoint_t, bool);
			MEMBER(v_linear_target_velocity, vphys_xjoint_t, vector);
			MEMBER(max_force, vphys_xjoint_t, float);
			MEMBER(enable_swing_limit, vphys_xjoint_t, bool);
			MEMBER(swing_limit, vphys_xjoint_t, vphys_xrange_t);
			MEMBER(enable_twist_limit, vphys_xjoint_t, bool);
			MEMBER(twist_limit, vphys_xjoint_t, vphys_xrange_t);
			MEMBER(enable_angular_motor, vphys_xjoint_t, bool);
			MEMBER(v_angular_target_velocity, vphys_xjoint_t, vector);
			MEMBER(max_torque, vphys_xjoint_t, float);
			MEMBER(linear_frequency, vphys_xjoint_t, float);
			MEMBER(linear_damping_ratio, vphys_xjoint_t, float);
			MEMBER(angular_frequency, vphys_xjoint_t, float);
			MEMBER(angular_damping_ratio, vphys_xjoint_t, float);
			MEMBER(friction, vphys_xjoint_t, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct vphys_xjoint_t

		class cmeshlet_descriptor
		{
		public:
			MEMBER(packed_aabb, cmeshlet_descriptor, packed_aabb_t);
			MEMBER(culling_data, cmeshlet_descriptor, cdraw_culling_data);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cmeshlet_descriptor

		class cattachment
		{
		public:
			MEMBER(name, cattachment, cutl_string);
			MEMBER_ARR(influence_names_arr, cattachment, 3, cutl_string);
			MEMBER_ARR(v_influence_rotations_arr, cattachment, 3, quaternion);
			MEMBER_ARR(v_influence_offsets_arr, cattachment, 3, vector);
			MEMBER_ARR(influence_weights_arr, cattachment, 3, float);
			MEMBER_ARR(influence_root_transform_arr, cattachment, 3, bool);
			MEMBER(influences, cattachment, uint8_t);
			MEMBER(ignore_rotation, cattachment, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cattachment

		class cseq_pose_setting
		{
		public:
			MEMBER(s_pose_parameter, cseq_pose_setting, cbuffer_string);
			MEMBER(s_attachment, cseq_pose_setting, cbuffer_string);
			MEMBER(s_reference_sequence, cseq_pose_setting, cbuffer_string);
			MEMBER(value, cseq_pose_setting, float);
			MEMBER(x, cseq_pose_setting, bool);
			MEMBER(y, cseq_pose_setting, bool);
			MEMBER(z, cseq_pose_setting, bool);
			MEMBER(e_type, cseq_pose_setting, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cseq_pose_setting

		class cfoot_pinning_update_node : public cunary_update_node
		{
		public:
			MEMBER(pose_op_fixed_data, cfoot_pinning_update_node, foot_pinning_pose_op_fixed_data_t);
			MEMBER(e_timing_source, cfoot_pinning_update_node, foot_pinning_timing_source);
			MEMBER(params, cfoot_pinning_update_node, cutl_vector<canim_param_handle>);
			MEMBER(reset_child, cfoot_pinning_update_node, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cfoot_pinning_update_node : public cunary_update_node

		class cmorph_data
		{
		public:
			MEMBER(name, cmorph_data, cutl_string);
			MEMBER(morph_rect_datas, cmorph_data, cutl_vector<cmorph_rect_data>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cmorph_data

		struct model_bone_flex_driver_t
		{
			MEMBER(bone_name, model_bone_flex_driver_t, cutl_string);
			MEMBER(bone_name_token, model_bone_flex_driver_t, uint32_t);
			MEMBER(controls, model_bone_flex_driver_t, cutl_vector<model_bone_flex_driver_control_t>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct model_bone_flex_driver_t

		class cstate_update_data
		{
		public:
			MEMBER(name, cstate_update_data, cutl_string);
			MEMBER(h_script, cstate_update_data, anim_script_handle);
			MEMBER(transition_indices, cstate_update_data, cutl_vector<int>);
			MEMBER(actions, cstate_update_data, cutl_vector<cstate_action_updater>);
			MEMBER(state_id, cstate_update_data, anim_state_id);
			MEMBER(is_start_state, cstate_update_data, bool);
			MEMBER(is_end_state, cstate_update_data, bool);
			MEMBER(is_passthrough, cstate_update_data, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cstate_update_data

		class cseq_auto_layer
		{
		public:
			MEMBER(local_reference, cseq_auto_layer, short);
			MEMBER(local_pose, cseq_auto_layer, short);
			MEMBER(flags, cseq_auto_layer, cseq_auto_layer_flag);
			MEMBER(start, cseq_auto_layer, float);
			MEMBER(peak, cseq_auto_layer, float);
			MEMBER(tail, cseq_auto_layer, float);
			MEMBER(end, cseq_auto_layer, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cseq_auto_layer

		class cmodel_config_list
		{
		public:
			MEMBER(hide_material_group_in_tools, cmodel_config_list, bool);
			MEMBER(hide_render_color_in_tools, cmodel_config_list, bool);
			MEMBER(configs, cmodel_config_list, cutl_vector<cmodel_config*>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cmodel_config_list

		class cblock_selection_metric_evaluator : public cmotion_metric_evaluator
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cblock_selection_metric_evaluator : public cmotion_metric_evaluator

		class csingle_frame_update_node : public cleaf_update_node
		{
		public:
			MEMBER(actions, csingle_frame_update_node, cutl_vector<csmart_ptr<canim_action_updater>>);
			MEMBER(h_pose_cache_handle, csingle_frame_update_node, cpose_handle);
			MEMBER(h_sequence, csingle_frame_update_node, hsequence);
			MEMBER(cycle, csingle_frame_update_node, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class csingle_frame_update_node : public cleaf_update_node

		class canim_graph_settings_group
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class canim_graph_settings_group

		class clook_component_updater : public canim_component_updater
		{
		public:
			MEMBER(h_look_heading, clook_component_updater, canim_param_handle);
			MEMBER(h_look_heading_velocity, clook_component_updater, canim_param_handle);
			MEMBER(h_look_pitch, clook_component_updater, canim_param_handle);
			MEMBER(h_look_distance, clook_component_updater, canim_param_handle);
			MEMBER(h_look_direction, clook_component_updater, canim_param_handle);
			MEMBER(h_look_target, clook_component_updater, canim_param_handle);
			MEMBER(h_look_target_world_space, clook_component_updater, canim_param_handle);
			MEMBER(network_look_target, clook_component_updater, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class clook_component_updater : public canim_component_updater

		class cmotion_node_blend1_d : public cmotion_node
		{
		public:
			MEMBER(blend_items, cmotion_node_blend1_d, cutl_vector<motion_blend_item>);
			MEMBER(param_index, cmotion_node_blend1_d, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cmotion_node_blend1_d : public cmotion_node

		class cfollow_attachment_update_node : public cunary_update_node
		{
		public:
			MEMBER(op_fixed_data, cfollow_attachment_update_node, follow_attachment_settings_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cfollow_attachment_update_node : public cunary_update_node

		class motion_index
		{
		public:
			MEMBER(group, motion_index, uint16_t);
			MEMBER(motion, motion_index, uint16_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class motion_index

		class weight_list
		{
		public:
			MEMBER(name, weight_list, cutl_string);
			MEMBER(weights, weight_list, cutl_vector<float>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class weight_list

		class ctwo_bone_ikupdate_node : public cunary_update_node
		{
		public:
			MEMBER(op_fixed_data, ctwo_bone_ikupdate_node, two_bone_iksettings_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class ctwo_bone_ikupdate_node : public cunary_update_node

		class cmotion_graph_update_node : public cleaf_update_node
		{
		public:
			MEMBER(motion_graph, cmotion_graph_update_node, csmart_ptr<cmotion_graph>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cmotion_graph_update_node : public cleaf_update_node

		class croot_update_node : public cunary_update_node
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class croot_update_node : public cunary_update_node

		class canim_encoded_frames
		{
		public:
			MEMBER(file_name, canim_encoded_frames, cbuffer_string);
			MEMBER(frames, canim_encoded_frames, int);
			MEMBER(frames_per_block, canim_encoded_frames, int);
			MEMBER(frameblock_array, canim_encoded_frames, cutl_vector<canim_frame_block_anim>);
			MEMBER(usage_differences, canim_encoded_frames, canim_encode_difference);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class canim_encoded_frames

		struct look_at_bone_t
		{
			MEMBER(index, look_at_bone_t, int);
			MEMBER(weight, look_at_bone_t, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct look_at_bone_t

		class cstance_override_update_node : public cunary_update_node
		{
		public:
			MEMBER(foot_stance_info, cstance_override_update_node, cutl_vector<stance_info_t>);
			MEMBER(stance_source_node, cstance_override_update_node, canim_update_node_ref);
			MEMBER(h_parameter, cstance_override_update_node, canim_param_handle);
			MEMBER(e_mode, cstance_override_update_node, stance_override_mode);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cstance_override_update_node : public cunary_update_node

		class cvector_anim_parameter : public cconcrete_anim_parameter
		{
		public:
			MEMBER(default_value, cvector_anim_parameter, vector);
			MEMBER(interpolate, cvector_anim_parameter, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cvector_anim_parameter : public cconcrete_anim_parameter

		class canim_graph_debug_replay
		{
		public:
			MEMBER(anim_graph_file_name, canim_graph_debug_replay, cutl_string);
			MEMBER(frame_list, canim_graph_debug_replay, cutl_vector<csmart_ptr<canim_replay_frame>>);
			MEMBER(start_index, canim_graph_debug_replay, int);
			MEMBER(write_index, canim_graph_debug_replay, int);
			MEMBER(frame_count, canim_graph_debug_replay, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class canim_graph_debug_replay

		class canim_graph_network_settings : public canim_graph_settings_group
		{
		public:
			MEMBER(networking_enabled, canim_graph_network_settings, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class canim_graph_network_settings : public canim_graph_settings_group

		class cseq_cmd_seq_desc
		{
		public:
			MEMBER(s_name, cseq_cmd_seq_desc, cbuffer_string);
			MEMBER(flags, cseq_cmd_seq_desc, cseq_seq_desc_flag);
			MEMBER(transition, cseq_cmd_seq_desc, cseq_transition);
			MEMBER(frame_range_sequence, cseq_cmd_seq_desc, short);
			MEMBER(frame_count, cseq_cmd_seq_desc, short);
			MEMBER(fps, cseq_cmd_seq_desc, float);
			MEMBER(sub_cycles, cseq_cmd_seq_desc, short);
			MEMBER(num_local_results, cseq_cmd_seq_desc, short);
			MEMBER(cmd_layer_array, cseq_cmd_seq_desc, cutl_vector<cseq_cmd_layer>);
			MEMBER(event_array, cseq_cmd_seq_desc, cutl_vector<canim_event_definition>);
			MEMBER(activity_array, cseq_cmd_seq_desc, cutl_vector<canim_activity>);
			MEMBER(pose_setting_array, cseq_cmd_seq_desc, cutl_vector<cseq_pose_setting>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cseq_cmd_seq_desc

		struct animation_snapshot_base_t
		{
			MEMBER(real_time, animation_snapshot_base_t, float);
			MEMBER(root_to_world, animation_snapshot_base_t, matrix3x4a_t);
			MEMBER(bones_in_world_space, animation_snapshot_base_t, bool);
			MEMBER(bone_setup_mask, animation_snapshot_base_t, cutl_vector<uint32_t>);
			MEMBER(bone_transforms, animation_snapshot_base_t, cutl_vector<matrix3x4a_t>);
			MEMBER(flex_controllers, animation_snapshot_base_t, cutl_vector<float>);
			MEMBER(snapshot_type, animation_snapshot_base_t, animation_snapshot_type_t);
			MEMBER(has_decode_dump, animation_snapshot_base_t, bool);
			MEMBER(decode_dump, animation_snapshot_base_t, animation_decode_debug_dump_element_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct animation_snapshot_base_t

		class ceditable_motion_graph : public cmotion_graph
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class ceditable_motion_graph : public cmotion_graph

		class cmaterial_attribute_anim_tag : public canim_tag_base
		{
		public:
			MEMBER(attribute_name, cmaterial_attribute_anim_tag, cutl_string);
			MEMBER(attribute_type, cmaterial_attribute_anim_tag, matterial_attribute_tag_type_t);
			MEMBER(value, cmaterial_attribute_anim_tag, float);
			MEMBER(color, cmaterial_attribute_anim_tag, color);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cmaterial_attribute_anim_tag : public canim_tag_base

		class chit_react_update_node : public cunary_update_node
		{
		public:
			MEMBER(op_fixed_settings, chit_react_update_node, hit_react_fixed_settings_t);
			MEMBER(trigger_param, chit_react_update_node, canim_param_handle);
			MEMBER(hit_bone_param, chit_react_update_node, canim_param_handle);
			MEMBER(hit_offset_param, chit_react_update_node, canim_param_handle);
			MEMBER(hit_direction_param, chit_react_update_node, canim_param_handle);
			MEMBER(hit_strength_param, chit_react_update_node, canim_param_handle);
			MEMBER(min_delay_between_hits, chit_react_update_node, float);
			MEMBER(reset_child, chit_react_update_node, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class chit_react_update_node : public cunary_update_node

		class cstance_scale_update_node : public cunary_update_node
		{
		public:
			MEMBER(h_param, cstance_scale_update_node, canim_param_handle);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cstance_scale_update_node : public cunary_update_node

		struct chain_to_solve_data_t
		{
			MEMBER(chain_index, chain_to_solve_data_t, int);
			MEMBER(solver_settings, chain_to_solve_data_t, iksolver_settings_t);
			MEMBER(target_settings, chain_to_solve_data_t, iktarget_settings_t);
			MEMBER(debug_setting, chain_to_solve_data_t, solve_ikchain_anim_node_debug_setting);
			MEMBER(debug_normalized_value, chain_to_solve_data_t, float);
			MEMBER(v_debug_offset, chain_to_solve_data_t, vector_aligned);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct chain_to_solve_data_t

		struct stance_info_t
		{
			MEMBER(v_position, stance_info_t, vector);
			MEMBER(direction, stance_info_t, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct stance_info_t

		struct perm_model_data_t
		{
			MEMBER(name, perm_model_data_t, cutl_string);
			MEMBER(model_info, perm_model_data_t, perm_model_info_t);
			MEMBER(ext_parts, perm_model_data_t, cutl_vector<perm_model_ext_part_t>);
			MEMBER(ref_meshes, perm_model_data_t, cutl_vector<cstrong_handle<info_for_resource_type_crender_mesh>>);
			MEMBER(ref_mesh_group_masks, perm_model_data_t, cutl_vector<uint64_t>);
			MEMBER(ref_phys_group_masks, perm_model_data_t, cutl_vector<uint64_t>);
			MEMBER(ref_lodgroup_masks, perm_model_data_t, cutl_vector<uint8_t>);
			MEMBER(lod_group_switch_distances, perm_model_data_t, cutl_vector<float>);
			MEMBER(ref_physics_data, perm_model_data_t, cutl_vector<cstrong_handle<info_for_resource_type_cphys_aggregate_data>>);
			MEMBER(ref_physics_hitbox_data, perm_model_data_t, cutl_vector<cstrong_handle<info_for_resource_type_cphys_aggregate_data>>);
			MEMBER(ref_anim_groups, perm_model_data_t, cutl_vector<cstrong_handle<info_for_resource_type_canimation_group>>);
			MEMBER(ref_sequence_groups, perm_model_data_t, cutl_vector<cstrong_handle<info_for_resource_type_csequence_group_data>>);
			MEMBER(mesh_groups, perm_model_data_t, cutl_vector<cutl_string>);
			MEMBER(material_groups, perm_model_data_t, cutl_vector<material_group_t>);
			MEMBER(default_mesh_group_mask, perm_model_data_t, uint64_t);
			MEMBER(model_skeleton, perm_model_data_t, model_skeleton_data_t);
			MEMBER(remapping_table, perm_model_data_t, cutl_vector<short>);
			MEMBER(remapping_table_starts, perm_model_data_t, cutl_vector<uint16_t>);
			MEMBER(bone_flex_drivers, perm_model_data_t, cutl_vector<model_bone_flex_driver_t>);
			MEMBER(model_config_list_ptr, perm_model_data_t, cmodel_config_list*);
			MEMBER(body_groups_hidden_in_tools, perm_model_data_t, cutl_vector<cutl_string>);
			MEMBER(ref_anim_include_models, perm_model_data_t, cutl_vector<cstrong_handle<info_for_resource_type_cmodel>>);
			MEMBER(animated_material_attributes, perm_model_data_t, cutl_vector<perm_model_data_animated_material_attribute_t>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct perm_model_data_t

		class cseq_synth_anim_desc
		{
		public:
			MEMBER(s_name, cseq_synth_anim_desc, cbuffer_string);
			MEMBER(flags, cseq_synth_anim_desc, cseq_seq_desc_flag);
			MEMBER(transition, cseq_synth_anim_desc, cseq_transition);
			MEMBER(local_base_reference, cseq_synth_anim_desc, short);
			MEMBER(local_bone_mask, cseq_synth_anim_desc, short);
			MEMBER(activity_array, cseq_synth_anim_desc, cutl_vector<canim_activity>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cseq_synth_anim_desc

		class cjump_helper_update_node : public csequence_update_node
		{
		public:
			MEMBER(h_target_param, cjump_helper_update_node, canim_param_handle);
			MEMBER(original_jump_movement, cjump_helper_update_node, vector);
			MEMBER(original_jump_duration, cjump_helper_update_node, float);
			MEMBER(jump_start_cycle, cjump_helper_update_node, float);
			MEMBER(jump_end_cycle, cjump_helper_update_node, float);
			MEMBER(e_correction_method, cjump_helper_update_node, jump_correction_method);
			MEMBER_ARR(translation_axis_arr, cjump_helper_update_node, 3, bool);
			MEMBER(scale_speed, cjump_helper_update_node, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cjump_helper_update_node : public csequence_update_node

		struct vphys_xcollision_attributes_t
		{
			MEMBER(collision_group, vphys_xcollision_attributes_t, uint32_t);
			MEMBER(interact_as, vphys_xcollision_attributes_t, cutl_vector<uint32_t>);
			MEMBER(interact_with, vphys_xcollision_attributes_t, cutl_vector<uint32_t>);
			MEMBER(interact_exclude, vphys_xcollision_attributes_t, cutl_vector<uint32_t>);
			MEMBER(collision_group_string, vphys_xcollision_attributes_t, cutl_string);
			MEMBER(interact_as_strings, vphys_xcollision_attributes_t, cutl_vector<cutl_string>);
			MEMBER(interact_with_strings, vphys_xcollision_attributes_t, cutl_vector<cutl_string>);
			MEMBER(interact_exclude_strings, vphys_xcollision_attributes_t, cutl_vector<cutl_string>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct vphys_xcollision_attributes_t

		class config_index
		{
		public:
			MEMBER(group, config_index, uint16_t);
			MEMBER(config, config_index, uint16_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class config_index

		struct animation_snapshot_t : public animation_snapshot_base_t
		{
			MEMBER(ent_index, animation_snapshot_t, int);
			MEMBER(model_name, animation_snapshot_t, cutl_string);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct animation_snapshot_t : public animation_snapshot_base_t

		class canim_script_manager
		{
		public:
			MEMBER(script_info, canim_script_manager, cutl_vector<script_info_t>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class canim_script_manager

		class canim_activity
		{
		public:
			MEMBER(name, canim_activity, cbuffer_string);
			MEMBER(activity, canim_activity, int);
			MEMBER(flags, canim_activity, int);
			MEMBER(weight, canim_activity, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class canim_activity

		class cmotion_graph_group
		{
		public:
			MEMBER(search_db, cmotion_graph_group, cmotion_search_db);
			MEMBER(motion_graphs, cmotion_graph_group, cutl_vector<csmart_ptr<cmotion_graph>>);
			MEMBER(motion_graph_configs, cmotion_graph_group, cutl_vector<cmotion_graph_config>);
			MEMBER(sample_to_config, cmotion_graph_group, cutl_vector<int>);
			MEMBER(h_is_active_script, cmotion_graph_group, anim_script_handle);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cmotion_graph_group

		class cmotion_graph_config
		{
		public:
			MEMBER_ARR(param_values_arr, cmotion_graph_config, 4, float);
			MEMBER(duration, cmotion_graph_config, float);
			MEMBER(motion_index, cmotion_graph_config, motion_index);
			MEMBER(sample_start, cmotion_graph_config, int);
			MEMBER(sample_count, cmotion_graph_config, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cmotion_graph_config

		class ctask_status_anim_tag : public canim_tag_base
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class ctask_status_anim_tag : public canim_tag_base

		class ccached_pose
		{
		public:
			MEMBER(transforms, ccached_pose, cutl_vector<ctransform>);
			MEMBER(morph_weights, ccached_pose, cutl_vector<float>);
			MEMBER(h_sequence, ccached_pose, hsequence);
			MEMBER(cycle, ccached_pose, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class ccached_pose

		class sample_code
		{
		public:
			MEMBER_ARR(sub_code_arr, sample_code, 8, uint8_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class sample_code

		class canim_desc
		{
		public:
			MEMBER(name, canim_desc, cbuffer_string);
			MEMBER(flags, canim_desc, canim_desc_flag);
			MEMBER(fps, canim_desc, float);
			MEMBER(data, canim_desc, canim_encoded_frames);
			MEMBER(movement_array, canim_desc, cutl_vector<canim_movement>);
			MEMBER(event_array, canim_desc, cutl_vector<canim_event_definition>);
			MEMBER(activity_array, canim_desc, cutl_vector<canim_activity>);
			MEMBER(hierarchy_array, canim_desc, cutl_vector<canim_local_hierarchy>);
			MEMBER(framestalltime, canim_desc, float);
			MEMBER(vec_root_min, canim_desc, vector);
			MEMBER(vec_root_max, canim_desc, vector);
			MEMBER(vec_bone_world_min, canim_desc, cutl_vector<vector>);
			MEMBER(vec_bone_world_max, canim_desc, cutl_vector<vector>);
			MEMBER(sequence_params, canim_desc, canim_sequence_params);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class canim_desc

		class cseq_bone_mask_list
		{
		public:
			MEMBER(s_name, cseq_bone_mask_list, cbuffer_string);
			MEMBER(local_bone_array, cseq_bone_mask_list, cutl_vector<short>);
			MEMBER(bone_weight_array, cseq_bone_mask_list, cutl_vector<float>);
			MEMBER(default_morph_ctrl_weight, cseq_bone_mask_list, float);
			MEMBER(morph_ctrl_weight_array, cseq_bone_mask_list, cutl_vector<cutl_pair<cbuffer_string, float32>>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cseq_bone_mask_list

		class anim_node_output_id
		{
		public:
			MEMBER(id, anim_node_output_id, uint32_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class anim_node_output_id

		class cdirectional_blend_update_node : public cleaf_update_node
		{
		public:
			MEMBER_ARR(h_sequences_arr, cdirectional_blend_update_node, 8, hsequence);
			MEMBER(damping, cdirectional_blend_update_node, canim_input_damping);
			MEMBER(blend_value_source, cdirectional_blend_update_node, anim_value_source);
			MEMBER(param_index, cdirectional_blend_update_node, canim_param_handle);
			MEMBER(playback_speed, cdirectional_blend_update_node, float);
			MEMBER(duration, cdirectional_blend_update_node, float);
			MEMBER(loop, cdirectional_blend_update_node, bool);
			MEMBER(lock_blend_on_reset, cdirectional_blend_update_node, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cdirectional_blend_update_node : public cleaf_update_node

		class cint_anim_parameter : public cconcrete_anim_parameter
		{
		public:
			MEMBER(default_value, cint_anim_parameter, int);
			MEMBER(min_value, cint_anim_parameter, int);
			MEMBER(max_value, cint_anim_parameter, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cint_anim_parameter : public cconcrete_anim_parameter

		class cinput_stream_update_node : public cleaf_update_node
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cinput_stream_update_node : public cleaf_update_node

		class cfoot_stride
		{
		public:
			MEMBER(definition, cfoot_stride, cfoot_cycle_definition);
			MEMBER(trajectories, cfoot_stride, cfoot_trajectories);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cfoot_stride

		class cscene_object_data
		{
		public:
			MEMBER(v_min_bounds, cscene_object_data, vector);
			MEMBER(v_max_bounds, cscene_object_data, vector);
			MEMBER(draw_calls, cscene_object_data, cutl_vector<cmaterial_draw_descriptor>);
			MEMBER(draw_bounds, cscene_object_data, cutl_vector<aabb_t>);
			MEMBER(meshlets, cscene_object_data, cutl_vector<cmeshlet_descriptor>);
			MEMBER(v_tint_color, cscene_object_data, vector4d);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cscene_object_data

		class csequence_finished_anim_tag : public canim_tag_base
		{
		public:
			MEMBER(sequence_name, csequence_finished_anim_tag, cutl_string);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class csequence_finished_anim_tag : public canim_tag_base

		class cfloat_anim_parameter : public cconcrete_anim_parameter
		{
		public:
			MEMBER(default_value, cfloat_anim_parameter, float);
			MEMBER(min_value, cfloat_anim_parameter, float);
			MEMBER(max_value, cfloat_anim_parameter, float);
			MEMBER(interpolate, cfloat_anim_parameter, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cfloat_anim_parameter : public cconcrete_anim_parameter

		class cslow_down_on_slopes_update_node : public cunary_update_node
		{
		public:
			MEMBER(slow_down_strength, cslow_down_on_slopes_update_node, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cslow_down_on_slopes_update_node : public cunary_update_node

		class czero_pose_update_node : public cleaf_update_node
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class czero_pose_update_node : public cleaf_update_node

		class canim_frame_block_anim
		{
		public:
			MEMBER(start_frame, canim_frame_block_anim, int);
			MEMBER(end_frame, canim_frame_block_anim, int);
			MEMBER(segment_index_array, canim_frame_block_anim, cutl_vector<int>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class canim_frame_block_anim

		struct fe_fit_influence_t
		{
			MEMBER(n_vertex_node, fe_fit_influence_t, uint32_t);
			MEMBER(fl_weight, fe_fit_influence_t, float);
			MEMBER(n_matrix_node, fe_fit_influence_t, uint32_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct fe_fit_influence_t

		struct vertex_position_color_t
		{
			MEMBER(v_position, vertex_position_color_t, vector);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct vertex_position_color_t

		class four_vectors2d
		{
		public:
			MEMBER(x, four_vectors2d, fltx4);
			MEMBER(y, four_vectors2d, fltx4);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class four_vectors2d

		struct rn_half_edge_t
		{
			MEMBER(next, rn_half_edge_t, uint8_t);
			MEMBER(twin, rn_half_edge_t, uint8_t);
			MEMBER(origin, rn_half_edge_t, uint8_t);
			MEMBER(face, rn_half_edge_t, uint8_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct rn_half_edge_t

		struct fe_fit_weight_t
		{
			MEMBER(fl_weight, fe_fit_weight_t, float);
			MEMBER(n_node, fe_fit_weight_t, uint16_t);
			MEMBER(n_dummy, fe_fit_weight_t, uint16_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct fe_fit_weight_t

		struct fe_rod_constraint_t
		{
			MEMBER_ARR(n_node_arr, fe_rod_constraint_t, 2, uint16_t);
			MEMBER(fl_max_dist, fe_rod_constraint_t, float);
			MEMBER(fl_min_dist, fe_rod_constraint_t, float);
			MEMBER(fl_weight0, fe_rod_constraint_t, float);
			MEMBER(fl_relaxation_factor, fe_rod_constraint_t, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct fe_rod_constraint_t

		struct fe_tree_children_t
		{
			MEMBER_ARR(n_child_arr, fe_tree_children_t, 2, uint16_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct fe_tree_children_t

		struct rn_shape_desc_t
		{
			MEMBER(collision_attribute_index, rn_shape_desc_t, uint32_t);
			MEMBER(surface_property_index, rn_shape_desc_t, uint32_t);
			MEMBER(user_friendly_name, rn_shape_desc_t, cutl_string);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct rn_shape_desc_t

		struct fe_soft_parent_t
		{
			MEMBER(n_parent, fe_soft_parent_t, int);
			MEMBER(fl_alpha, fe_soft_parent_t, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct fe_soft_parent_t

		struct fe_tapered_capsule_rigid_t
		{
			MEMBER_ARR(v_sphere_arr, fe_tapered_capsule_rigid_t, 2, fltx4);
			MEMBER(n_node, fe_tapered_capsule_rigid_t, uint16_t);
			MEMBER(n_collision_mask, fe_tapered_capsule_rigid_t, uint16_t);
			MEMBER(n_vertex_map_index, fe_tapered_capsule_rigid_t, uint16_t);
			MEMBER(n_flags, fe_tapered_capsule_rigid_t, uint16_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct fe_tapered_capsule_rigid_t

		struct fe_sphere_rigid_t
		{
			MEMBER(v_sphere, fe_sphere_rigid_t, fltx4);
			MEMBER(n_node, fe_sphere_rigid_t, uint16_t);
			MEMBER(n_collision_mask, fe_sphere_rigid_t, uint16_t);
			MEMBER(n_vertex_map_index, fe_sphere_rigid_t, uint16_t);
			MEMBER(n_flags, fe_sphere_rigid_t, uint16_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct fe_sphere_rigid_t

		struct constraint_breakableparams_t
		{
			MEMBER(strength, constraint_breakableparams_t, float);
			MEMBER(force_limit, constraint_breakableparams_t, float);
			MEMBER(torque_limit, constraint_breakableparams_t, float);
			MEMBER_ARR(body_mass_scale_arr, constraint_breakableparams_t, 2, float);
			MEMBER(is_active, constraint_breakableparams_t, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct constraint_breakableparams_t

		class four_cov_matrices3
		{
		public:
			MEMBER(v_diag, four_cov_matrices3, four_vectors);
			MEMBER(xy, four_cov_matrices3, fltx4);
			MEMBER(xz, four_cov_matrices3, fltx4);
			MEMBER(yz, four_cov_matrices3, fltx4);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class four_cov_matrices3

		struct fe_axial_edge_bend_t
		{
			MEMBER(te, fe_axial_edge_bend_t, float);
			MEMBER(tv, fe_axial_edge_bend_t, float);
			MEMBER(fl_dist, fe_axial_edge_bend_t, float);
			MEMBER_ARR(fl_weight_arr, fe_axial_edge_bend_t, 4, float);
			MEMBER_ARR(n_node_arr, fe_axial_edge_bend_t, 6, uint16_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct fe_axial_edge_bend_t

		struct fe_node_wind_base_t
		{
			MEMBER(n_node_x0, fe_node_wind_base_t, uint16_t);
			MEMBER(n_node_x1, fe_node_wind_base_t, uint16_t);
			MEMBER(n_node_y0, fe_node_wind_base_t, uint16_t);
			MEMBER(n_node_y1, fe_node_wind_base_t, uint16_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct fe_node_wind_base_t

		struct fe_twist_constraint_t
		{
			MEMBER(n_node_orient, fe_twist_constraint_t, uint16_t);
			MEMBER(n_node_end, fe_twist_constraint_t, uint16_t);
			MEMBER(fl_twist_relax, fe_twist_constraint_t, float);
			MEMBER(fl_swing_relax, fe_twist_constraint_t, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct fe_twist_constraint_t

		struct fe_source_edge_t
		{
			MEMBER_ARR(n_node_arr, fe_source_edge_t, 2, uint16_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct fe_source_edge_t

		struct fe_ctrl_os_offset_t
		{
			MEMBER(n_ctrl_parent, fe_ctrl_os_offset_t, uint16_t);
			MEMBER(n_ctrl_child, fe_ctrl_os_offset_t, uint16_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct fe_ctrl_os_offset_t

		struct rn_face_t
		{
			MEMBER(edge, rn_face_t, uint8_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct rn_face_t

		struct dop26_t
		{
			MEMBER_ARR(support_arr, dop26_t, 26, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct dop26_t

		struct rn_vertex_t
		{
			MEMBER(edge, rn_vertex_t, uint8_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct rn_vertex_t

		class cov_matrix3
		{
		public:
			MEMBER(v_diag, cov_matrix3, vector);
			MEMBER(xy, cov_matrix3, float);
			MEMBER(xz, cov_matrix3, float);
			MEMBER(yz, cov_matrix3, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cov_matrix3

		struct rn_hull_t
		{
			MEMBER(v_centroid, rn_hull_t, vector);
			MEMBER(max_angular_radius, rn_hull_t, float);
			MEMBER(bounds, rn_hull_t, aabb_t);
			MEMBER(v_orthographic_areas, rn_hull_t, vector);
			MEMBER(mass_properties, rn_hull_t, matrix3x4_t);
			MEMBER(volume, rn_hull_t, float);
			MEMBER(vertices, rn_hull_t, cutl_vector<rn_vertex_t>);
			MEMBER(vertex_positions, rn_hull_t, cutl_vector<vector>);
			MEMBER(edges, rn_hull_t, cutl_vector<rn_half_edge_t>);
			MEMBER(faces, rn_hull_t, cutl_vector<rn_face_t>);
			MEMBER(face_planes, rn_hull_t, cutl_vector<rn_plane_t>);
			MEMBER(flags, rn_hull_t, uint32_t);
			MEMBER(region_svm_ptr, rn_hull_t, cregion_svm*);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct rn_hull_t

		struct fe_tri_t
		{
			MEMBER_ARR(n_node_arr, fe_tri_t, 3, uint16_t);
			MEMBER(w1, fe_tri_t, float);
			MEMBER(w2, fe_tri_t, float);
			MEMBER(v1x, fe_tri_t, float);
			MEMBER(v2, fe_tri_t, vector2d);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct fe_tri_t

		class cfe_vertex_map_build_array
		{
		public:
			MEMBER(array, cfe_vertex_map_build_array, cutl_vector<fe_vertex_map_build_t*>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cfe_vertex_map_build_array

		struct fe_vertex_map_build_t
		{
			MEMBER(vertex_map_name, fe_vertex_map_build_t, cutl_string);
			MEMBER(name_hash, fe_vertex_map_build_t, uint32_t);
			MEMBER(color, fe_vertex_map_build_t, color);
			MEMBER(volumetric_solve_strength, fe_vertex_map_build_t, float);
			MEMBER(scale_source_node, fe_vertex_map_build_t, int);
			MEMBER(weights, fe_vertex_map_build_t, cutl_vector<float>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct fe_vertex_map_build_t

		struct fe_node_base_t
		{
			MEMBER(n_node, fe_node_base_t, uint16_t);
			MEMBER_ARR(n_dummy_arr, fe_node_base_t, 3, uint16_t);
			MEMBER(n_node_x0, fe_node_base_t, uint16_t);
			MEMBER(n_node_x1, fe_node_base_t, uint16_t);
			MEMBER(n_node_y0, fe_node_base_t, uint16_t);
			MEMBER(n_node_y1, fe_node_base_t, uint16_t);
			MEMBER(q_adjust, fe_node_base_t, quaternion_storage);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct fe_node_base_t

		class iphysics_player_controller
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class iphysics_player_controller

		struct fe_ctrl_offset_t
		{
			MEMBER(v_offset, fe_ctrl_offset_t, vector);
			MEMBER(n_ctrl_parent, fe_ctrl_offset_t, uint16_t);
			MEMBER(n_ctrl_child, fe_ctrl_offset_t, uint16_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct fe_ctrl_offset_t

		struct fe_morph_layer_depr_t
		{
			MEMBER(name, fe_morph_layer_depr_t, cutl_string);
			MEMBER(name_hash, fe_morph_layer_depr_t, uint32_t);
			MEMBER(nodes, fe_morph_layer_depr_t, cutl_vector<uint16_t>);
			MEMBER(init_pos, fe_morph_layer_depr_t, cutl_vector<vector>);
			MEMBER(gravity, fe_morph_layer_depr_t, cutl_vector<float>);
			MEMBER(goal_strength, fe_morph_layer_depr_t, cutl_vector<float>);
			MEMBER(goal_damping, fe_morph_layer_depr_t, cutl_vector<float>);
			MEMBER(flags, fe_morph_layer_depr_t, uint32_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct fe_morph_layer_depr_t

		struct fe_box_rigid_t
		{
			MEMBER(tm_frame2, fe_box_rigid_t, ctransform);
			MEMBER(n_node, fe_box_rigid_t, uint16_t);
			MEMBER(n_collision_mask, fe_box_rigid_t, uint16_t);
			MEMBER(v_size, fe_box_rigid_t, vector);
			MEMBER(n_vertex_map_index, fe_box_rigid_t, uint16_t);
			MEMBER(n_flags, fe_box_rigid_t, uint16_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct fe_box_rigid_t

		struct fe_stiff_hinge_build_t
		{
			MEMBER(fl_max_angle, fe_stiff_hinge_build_t, float);
			MEMBER(fl_strength, fe_stiff_hinge_build_t, float);
			MEMBER_ARR(fl_motion_bias_arr, fe_stiff_hinge_build_t, 3, float);
			MEMBER_ARR(n_node_arr, fe_stiff_hinge_build_t, 3, uint16_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct fe_stiff_hinge_build_t

		struct rn_plane_t
		{
			MEMBER(v_normal, rn_plane_t, vector);
			MEMBER(offset, rn_plane_t, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct rn_plane_t

		struct fe_rigid_collider_indices_t
		{
			MEMBER(tapered_capsule_rigid_index, fe_rigid_collider_indices_t, uint16_t);
			MEMBER(sphere_rigid_index, fe_rigid_collider_indices_t, uint16_t);
			MEMBER(box_rigid_index, fe_rigid_collider_indices_t, uint16_t);
			MEMBER(collision_plane_index, fe_rigid_collider_indices_t, uint16_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct fe_rigid_collider_indices_t

		struct cast_sphere_satparams_t
		{
			MEMBER(v_ray_start, cast_sphere_satparams_t, vector);
			MEMBER(v_ray_delta, cast_sphere_satparams_t, vector);
			MEMBER(radius, cast_sphere_satparams_t, float);
			MEMBER(max_fraction, cast_sphere_satparams_t, float);
			MEMBER(scale, cast_sphere_satparams_t, float);
			MEMBER(hull_ptr, cast_sphere_satparams_t, rn_hull_t*);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct cast_sphere_satparams_t

		struct fe_kelager_bend2_t
		{
			MEMBER_ARR(fl_weight_arr, fe_kelager_bend2_t, 3, float);
			MEMBER(fl_height0, fe_kelager_bend2_t, float);
			MEMBER_ARR(n_node_arr, fe_kelager_bend2_t, 3, uint16_t);
			MEMBER(n_reserved, fe_kelager_bend2_t, uint16_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct fe_kelager_bend2_t

		struct fe_simd_tri_t
		{
			MEMBER_ARR(n_node_arr, fe_simd_tri_t, 12, uint32_t);
			MEMBER(w1, fe_simd_tri_t, fltx4);
			MEMBER(w2, fe_simd_tri_t, fltx4);
			MEMBER(v1x, fe_simd_tri_t, fltx4);
			MEMBER(v2, fe_simd_tri_t, four_vectors2d);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct fe_simd_tri_t

		struct fe_spring_integrator_t
		{
			MEMBER_ARR(n_node_arr, fe_spring_integrator_t, 2, uint16_t);
			MEMBER(fl_spring_rest_length, fe_spring_integrator_t, float);
			MEMBER(fl_spring_constant, fe_spring_integrator_t, float);
			MEMBER(fl_spring_damping, fe_spring_integrator_t, float);
			MEMBER(fl_node_weight0, fe_spring_integrator_t, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct fe_spring_integrator_t

		struct fe_effect_desc_t
		{
			MEMBER(s_name, fe_effect_desc_t, cutl_string);
			MEMBER(n_name_hash, fe_effect_desc_t, uint32_t);
			MEMBER(n_type, fe_effect_desc_t, int);
			MEMBER(params, fe_effect_desc_t, key_values3);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct fe_effect_desc_t

		struct fe_weighted_node_t
		{
			MEMBER(n_node, fe_weighted_node_t, uint16_t);
			MEMBER(n_weight, fe_weighted_node_t, uint16_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct fe_weighted_node_t

		struct rn_wing_t
		{
			MEMBER_ARR(index_arr, rn_wing_t, 3, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct rn_wing_t

		struct fe_quad_t
		{
			MEMBER_ARR(n_node_arr, fe_quad_t, 4, uint16_t);
			MEMBER(fl_slack, fe_quad_t, float);
			MEMBER_ARR(v_shape_arr, fe_quad_t, 4, vector4d);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct fe_quad_t

		struct fe_simd_node_base_t
		{
			MEMBER_ARR(n_node_arr, fe_simd_node_base_t, 4, uint16_t);
			MEMBER_ARR(n_node_x0_arr, fe_simd_node_base_t, 4, uint16_t);
			MEMBER_ARR(n_node_x1_arr, fe_simd_node_base_t, 4, uint16_t);
			MEMBER_ARR(n_node_y0_arr, fe_simd_node_base_t, 4, uint16_t);
			MEMBER_ARR(n_node_y1_arr, fe_simd_node_base_t, 4, uint16_t);
			MEMBER_ARR(n_dummy_arr, fe_simd_node_base_t, 4, uint16_t);
			MEMBER(q_adjust, fe_simd_node_base_t, four_quaternions);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct fe_simd_node_base_t

		struct fe_simd_spring_integrator_t
		{
			MEMBER_ARR(n_node_arr, fe_simd_spring_integrator_t, 8, uint16_t);
			MEMBER(fl_spring_rest_length, fe_simd_spring_integrator_t, fltx4);
			MEMBER(fl_spring_constant, fe_simd_spring_integrator_t, fltx4);
			MEMBER(fl_spring_damping, fe_simd_spring_integrator_t, fltx4);
			MEMBER(fl_node_weight0, fe_simd_spring_integrator_t, fltx4);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct fe_simd_spring_integrator_t

		struct fe_simd_quad_t
		{
			MEMBER_ARR(n_node_arr, fe_simd_quad_t, 16, uint16_t);
			MEMBER(f4_slack, fe_simd_quad_t, fltx4);
			MEMBER_ARR(v_shape_arr, fe_simd_quad_t, 4, four_vectors);
			MEMBER_ARR(f4_weights_arr, fe_simd_quad_t, 4, fltx4);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct fe_simd_quad_t

		struct fe_fit_matrix_t
		{
			MEMBER(bone, fe_fit_matrix_t, ctransform);
			MEMBER(v_center, fe_fit_matrix_t, vector);
			MEMBER(n_end, fe_fit_matrix_t, uint16_t);
			MEMBER(n_node, fe_fit_matrix_t, uint16_t);
			MEMBER(n_begin_dynamic, fe_fit_matrix_t, uint16_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct fe_fit_matrix_t

		struct rn_node_t
		{
			MEMBER(v_min, rn_node_t, vector);
			MEMBER(children, rn_node_t, uint32_t);
			MEMBER(v_max, rn_node_t, vector);
			MEMBER(triangle_offset, rn_node_t, uint32_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct rn_node_t

		struct fe_world_collision_params_t
		{
			MEMBER(fl_world_friction, fe_world_collision_params_t, float);
			MEMBER(fl_ground_friction, fe_world_collision_params_t, float);
			MEMBER(n_list_begin, fe_world_collision_params_t, uint16_t);
			MEMBER(n_list_end, fe_world_collision_params_t, uint16_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct fe_world_collision_params_t

		class cregion_svm
		{
		public:
			MEMBER(planes, cregion_svm, cutl_vector<rn_plane_t>);
			MEMBER(nodes, cregion_svm, cutl_vector<uint32_t>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cregion_svm

		class cfe_jiggle_bone
		{
		public:
			MEMBER(flags, cfe_jiggle_bone, uint32_t);
			MEMBER(length, cfe_jiggle_bone, float);
			MEMBER(tip_mass, cfe_jiggle_bone, float);
			MEMBER(yaw_stiffness, cfe_jiggle_bone, float);
			MEMBER(yaw_damping, cfe_jiggle_bone, float);
			MEMBER(pitch_stiffness, cfe_jiggle_bone, float);
			MEMBER(pitch_damping, cfe_jiggle_bone, float);
			MEMBER(along_stiffness, cfe_jiggle_bone, float);
			MEMBER(along_damping, cfe_jiggle_bone, float);
			MEMBER(angle_limit, cfe_jiggle_bone, float);
			MEMBER(min_yaw, cfe_jiggle_bone, float);
			MEMBER(max_yaw, cfe_jiggle_bone, float);
			MEMBER(yaw_friction, cfe_jiggle_bone, float);
			MEMBER(yaw_bounce, cfe_jiggle_bone, float);
			MEMBER(min_pitch, cfe_jiggle_bone, float);
			MEMBER(max_pitch, cfe_jiggle_bone, float);
			MEMBER(pitch_friction, cfe_jiggle_bone, float);
			MEMBER(pitch_bounce, cfe_jiggle_bone, float);
			MEMBER(base_mass, cfe_jiggle_bone, float);
			MEMBER(base_stiffness, cfe_jiggle_bone, float);
			MEMBER(base_damping, cfe_jiggle_bone, float);
			MEMBER(base_min_left, cfe_jiggle_bone, float);
			MEMBER(base_max_left, cfe_jiggle_bone, float);
			MEMBER(base_left_friction, cfe_jiggle_bone, float);
			MEMBER(base_min_up, cfe_jiggle_bone, float);
			MEMBER(base_max_up, cfe_jiggle_bone, float);
			MEMBER(base_up_friction, cfe_jiggle_bone, float);
			MEMBER(base_min_forward, cfe_jiggle_bone, float);
			MEMBER(base_max_forward, cfe_jiggle_bone, float);
			MEMBER(base_forward_friction, cfe_jiggle_bone, float);
			MEMBER(radius0, cfe_jiggle_bone, float);
			MEMBER(radius1, cfe_jiggle_bone, float);
			MEMBER(v_point0, cfe_jiggle_bone, vector);
			MEMBER(v_point1, cfe_jiggle_bone, vector);
			MEMBER(collision_mask, cfe_jiggle_bone, uint16_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cfe_jiggle_bone

		struct fe_collision_plane_t
		{
			MEMBER(n_ctrl_parent, fe_collision_plane_t, uint16_t);
			MEMBER(n_child_node, fe_collision_plane_t, uint16_t);
			MEMBER(plane, fe_collision_plane_t, rn_plane_t);
			MEMBER(fl_strength, fe_collision_plane_t, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct fe_collision_plane_t

		struct fe_node_reverse_offset_t
		{
			MEMBER(v_offset, fe_node_reverse_offset_t, vector);
			MEMBER(n_bone_ctrl, fe_node_reverse_offset_t, uint16_t);
			MEMBER(n_target_node, fe_node_reverse_offset_t, uint16_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct fe_node_reverse_offset_t

		struct fe_edge_desc_t
		{
			MEMBER_ARR(n_edge_arr, fe_edge_desc_t, 2, uint16_t);
			MEMBER_ARR(n_side_arr, fe_edge_desc_t, 4, uint16_t);
			MEMBER_ARR(n_virt_elem_arr, fe_edge_desc_t, 2, uint16_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct fe_edge_desc_t

		struct fe_anim_stray_radius_t
		{
			MEMBER_ARR(n_node_arr, fe_anim_stray_radius_t, 2, uint16_t);
			MEMBER(fl_max_dist, fe_anim_stray_radius_t, float);
			MEMBER(fl_relaxation_factor, fe_anim_stray_radius_t, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct fe_anim_stray_radius_t

		struct fe_build_tapered_capsule_rigid_t : public fe_tapered_capsule_rigid_t
		{
			MEMBER(priority, fe_build_tapered_capsule_rigid_t, int);
			MEMBER(vertex_map_hash, fe_build_tapered_capsule_rigid_t, uint32_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct fe_build_tapered_capsule_rigid_t : public fe_tapered_capsule_rigid_t

		struct fe_vertex_map_desc_t
		{
			MEMBER(s_name, fe_vertex_map_desc_t, cutl_string);
			MEMBER(n_name_hash, fe_vertex_map_desc_t, uint32_t);
			MEMBER(n_color, fe_vertex_map_desc_t, uint32_t);
			MEMBER(n_flags, fe_vertex_map_desc_t, uint32_t);
			MEMBER(n_vertex_base, fe_vertex_map_desc_t, uint16_t);
			MEMBER(n_vertex_count, fe_vertex_map_desc_t, uint16_t);
			MEMBER(n_map_offset, fe_vertex_map_desc_t, uint32_t);
			MEMBER(n_node_list_offset, fe_vertex_map_desc_t, uint32_t);
			MEMBER(v_center_of_mass, fe_vertex_map_desc_t, vector);
			MEMBER(fl_volumetric_solve_strength, fe_vertex_map_desc_t, float);
			MEMBER(n_scale_source_node, fe_vertex_map_desc_t, short);
			MEMBER(n_node_list_count, fe_vertex_map_desc_t, uint16_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct fe_vertex_map_desc_t

		struct fe_ctrl_soft_offset_t
		{
			MEMBER(n_ctrl_parent, fe_ctrl_soft_offset_t, uint16_t);
			MEMBER(n_ctrl_child, fe_ctrl_soft_offset_t, uint16_t);
			MEMBER(v_offset, fe_ctrl_soft_offset_t, vector);
			MEMBER(fl_alpha, fe_ctrl_soft_offset_t, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct fe_ctrl_soft_offset_t

		class cfe_morph_layer
		{
		public:
			MEMBER(name, cfe_morph_layer, cutl_string);
			MEMBER(name_hash, cfe_morph_layer, uint32_t);
			MEMBER(nodes, cfe_morph_layer, cutl_vector<uint16_t>);
			MEMBER(init_pos, cfe_morph_layer, cutl_vector<vector>);
			MEMBER(gravity, cfe_morph_layer, cutl_vector<float>);
			MEMBER(goal_strength, cfe_morph_layer, cutl_vector<float>);
			MEMBER(goal_damping, cfe_morph_layer, cutl_vector<float>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cfe_morph_layer

		struct rn_blend_vertex_t
		{
			MEMBER(weight0, rn_blend_vertex_t, uint16_t);
			MEMBER(index0, rn_blend_vertex_t, uint16_t);
			MEMBER(weight1, rn_blend_vertex_t, uint16_t);
			MEMBER(index1, rn_blend_vertex_t, uint16_t);
			MEMBER(weight2, rn_blend_vertex_t, uint16_t);
			MEMBER(index2, rn_blend_vertex_t, uint16_t);
			MEMBER(flags, rn_blend_vertex_t, uint16_t);
			MEMBER(target_index, rn_blend_vertex_t, uint16_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct rn_blend_vertex_t

		struct vertex_position_normal_t
		{
			MEMBER(v_position, vertex_position_normal_t, vector);
			MEMBER(v_normal, vertex_position_normal_t, vector);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct vertex_position_normal_t

		struct rn_mesh_t
		{
			MEMBER(v_min, rn_mesh_t, vector);
			MEMBER(v_max, rn_mesh_t, vector);
			MEMBER(nodes, rn_mesh_t, cutl_vector<rn_node_t>);
			MEMBER(vertices, rn_mesh_t, cutl_vector_simdpadded_vector);
			MEMBER(triangles, rn_mesh_t, cutl_vector<rn_triangle_t>);
			MEMBER(wings, rn_mesh_t, cutl_vector<rn_wing_t>);
			MEMBER(materials, rn_mesh_t, cutl_vector<uint8_t>);
			MEMBER(v_orthographic_areas, rn_mesh_t, vector);
			MEMBER(flags, rn_mesh_t, uint32_t);
			MEMBER(debug_flags, rn_mesh_t, uint32_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct rn_mesh_t

		struct fe_follow_node_t
		{
			MEMBER(n_parent_node, fe_follow_node_t, uint16_t);
			MEMBER(n_child_node, fe_follow_node_t, uint16_t);
			MEMBER(fl_weight, fe_follow_node_t, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct fe_follow_node_t

		struct old_fe_edge_t
		{
			MEMBER_ARR(k_arr, old_fe_edge_t, 3, float);
			MEMBER(inv_a, old_fe_edge_t, float);
			MEMBER(t, old_fe_edge_t, float);
			MEMBER(fl_theta_relaxed, old_fe_edge_t, float);
			MEMBER(fl_theta_factor, old_fe_edge_t, float);
			MEMBER(c01, old_fe_edge_t, float);
			MEMBER(c02, old_fe_edge_t, float);
			MEMBER(c03, old_fe_edge_t, float);
			MEMBER(c04, old_fe_edge_t, float);
			MEMBER(fl_axial_model_dist, old_fe_edge_t, float);
			MEMBER_ARR(fl_axial_model_weights_arr, old_fe_edge_t, 4, float);
			MEMBER_ARR(node_arr, old_fe_edge_t, 4, uint16_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct old_fe_edge_t

		struct rn_body_desc_t
		{
			MEMBER(s_debug_name, rn_body_desc_t, cutl_string);
			MEMBER(v_position, rn_body_desc_t, vector);
			MEMBER(q_orientation, rn_body_desc_t, quaternion_storage);
			MEMBER(v_linear_velocity, rn_body_desc_t, vector);
			MEMBER(v_angular_velocity, rn_body_desc_t, vector);
			MEMBER(v_local_mass_center, rn_body_desc_t, vector);
			MEMBER_ARR(local_inertia_inv_arr, rn_body_desc_t, 3, vector);
			MEMBER(mass_inv, rn_body_desc_t, float);
			MEMBER(game_mass, rn_body_desc_t, float);
			MEMBER(inertia_scale_inv, rn_body_desc_t, float);
			MEMBER(linear_damping, rn_body_desc_t, float);
			MEMBER(angular_damping, rn_body_desc_t, float);
			MEMBER(linear_drag, rn_body_desc_t, float);
			MEMBER(angular_drag, rn_body_desc_t, float);
			MEMBER(linear_buoyancy_drag, rn_body_desc_t, float);
			MEMBER(angular_buoyancy_drag, rn_body_desc_t, float);
			MEMBER(v_last_awake_force_accum, rn_body_desc_t, vector);
			MEMBER(v_last_awake_torque_accum, rn_body_desc_t, vector);
			MEMBER(buoyancy_factor, rn_body_desc_t, float);
			MEMBER(gravity_scale, rn_body_desc_t, float);
			MEMBER(time_scale, rn_body_desc_t, float);
			MEMBER(body_type, rn_body_desc_t, int);
			MEMBER(game_index, rn_body_desc_t, uint32_t);
			MEMBER(game_flags, rn_body_desc_t, uint32_t);
			MEMBER(min_velocity_iterations, rn_body_desc_t, char);
			MEMBER(min_position_iterations, rn_body_desc_t, char);
			MEMBER(mass_priority, rn_body_desc_t, char);
			MEMBER(enabled, rn_body_desc_t, bool);
			MEMBER(sleeping, rn_body_desc_t, bool);
			MEMBER(is_continuous_enabled, rn_body_desc_t, bool);
			MEMBER(drag_enabled, rn_body_desc_t, bool);
			MEMBER(buoyancy_drag_enabled, rn_body_desc_t, bool);
			MEMBER(gravity_disabled, rn_body_desc_t, bool);
			MEMBER(speculative_enabled, rn_body_desc_t, bool);
			MEMBER(has_shadow_controller, rn_body_desc_t, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct rn_body_desc_t

		class cfe_named_jiggle_bone
		{
		public:
			MEMBER(str_parent_bone, cfe_named_jiggle_bone, cutl_string);
			MEMBER(transform, cfe_named_jiggle_bone, ctransform);
			MEMBER(jiggle_parent, cfe_named_jiggle_bone, uint32_t);
			MEMBER(jiggle_bone, cfe_named_jiggle_bone, cfe_jiggle_bone);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cfe_named_jiggle_bone

		struct rn_capsule_t
		{
			MEMBER_ARR(v_center_arr, rn_capsule_t, 2, vector);
			MEMBER(radius, rn_capsule_t, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct rn_capsule_t

		struct fe_node_integrator_t
		{
			MEMBER(fl_point_damping, fe_node_integrator_t, float);
			MEMBER(fl_animation_force_attraction, fe_node_integrator_t, float);
			MEMBER(fl_animation_vertex_attraction, fe_node_integrator_t, float);
			MEMBER(fl_gravity, fe_node_integrator_t, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct fe_node_integrator_t

		struct fe_proxy_vertex_map_t
		{
			MEMBER(name, fe_proxy_vertex_map_t, cutl_string);
			MEMBER(weight, fe_proxy_vertex_map_t, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct fe_proxy_vertex_map_t

		struct rn_triangle_t
		{
			MEMBER_ARR(index_arr, rn_triangle_t, 3, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct rn_triangle_t

		struct fe_simd_anim_stray_radius_t
		{
			MEMBER_ARR(n_node_arr, fe_simd_anim_stray_radius_t, 8, uint16_t);
			MEMBER(fl_max_dist, fe_simd_anim_stray_radius_t, fltx4);
			MEMBER(fl_relaxation_factor, fe_simd_anim_stray_radius_t, fltx4);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct fe_simd_anim_stray_radius_t

		struct fe_build_sphere_rigid_t : public fe_sphere_rigid_t
		{
			MEMBER(priority, fe_build_sphere_rigid_t, int);
			MEMBER(vertex_map_hash, fe_build_sphere_rigid_t, uint32_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct fe_build_sphere_rigid_t : public fe_sphere_rigid_t

		struct rn_sphere_t
		{
			MEMBER(v_center, rn_sphere_t, vector);
			MEMBER(radius, rn_sphere_t, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct rn_sphere_t

		struct constraint_axislimit_t
		{
			MEMBER(fl_min_rotation, constraint_axislimit_t, float);
			MEMBER(fl_max_rotation, constraint_axislimit_t, float);
			MEMBER(fl_motor_target_ang_speed, constraint_axislimit_t, float);
			MEMBER(fl_motor_max_torque, constraint_axislimit_t, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct constraint_axislimit_t

		struct fe_simd_rod_constraint_t
		{
			MEMBER_ARR(n_node_arr, fe_simd_rod_constraint_t, 8, uint16_t);
			MEMBER(f4_max_dist, fe_simd_rod_constraint_t, fltx4);
			MEMBER(f4_min_dist, fe_simd_rod_constraint_t, fltx4);
			MEMBER(f4_weight0, fe_simd_rod_constraint_t, fltx4);
			MEMBER(f4_relaxation_factor, fe_simd_rod_constraint_t, fltx4);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct fe_simd_rod_constraint_t

		struct constraint_hingeparams_t
		{
			MEMBER(world_position, constraint_hingeparams_t, vector);
			MEMBER(world_axis_direction, constraint_hingeparams_t, vector);
			MEMBER(hinge_axis, constraint_hingeparams_t, constraint_axislimit_t);
			MEMBER(constraint, constraint_hingeparams_t, constraint_breakableparams_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct constraint_hingeparams_t

		struct fe_tapered_capsule_stretch_t
		{
			MEMBER_ARR(n_node_arr, fe_tapered_capsule_stretch_t, 2, uint16_t);
			MEMBER(n_collision_mask, fe_tapered_capsule_stretch_t, uint16_t);
			MEMBER(n_dummy, fe_tapered_capsule_stretch_t, uint16_t);
			MEMBER_ARR(fl_radius_arr, fe_tapered_capsule_stretch_t, 2, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct fe_tapered_capsule_stretch_t

		struct fe_band_bend_limit_t
		{
			MEMBER(fl_dist_min, fe_band_bend_limit_t, float);
			MEMBER(fl_dist_max, fe_band_bend_limit_t, float);
			MEMBER_ARR(n_node_arr, fe_band_bend_limit_t, 6, uint16_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct fe_band_bend_limit_t

		class cfe_indexed_jiggle_bone
		{
		public:
			MEMBER(node, cfe_indexed_jiggle_bone, uint32_t);
			MEMBER(jiggle_parent, cfe_indexed_jiggle_bone, uint32_t);
			MEMBER(jiggle_bone, cfe_indexed_jiggle_bone, cfe_jiggle_bone);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cfe_indexed_jiggle_bone

		struct fe_build_box_rigid_t : public fe_box_rigid_t
		{
			MEMBER(priority, fe_build_box_rigid_t, int);
			MEMBER(vertex_map_hash, fe_build_box_rigid_t, uint32_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct fe_build_box_rigid_t : public fe_box_rigid_t

		struct vphysics_save_cphysicsbody_t : public rn_body_desc_t
		{
			MEMBER(old_pointer, vphysics_save_cphysicsbody_t, uint64_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct vphysics_save_cphysicsbody_t : public rn_body_desc_t

		struct phys_fe_model_desc_t
		{
			MEMBER(ctrl_hash, phys_fe_model_desc_t, cutl_vector<uint32_t>);
			MEMBER(ctrl_name, phys_fe_model_desc_t, cutl_vector<cutl_string>);
			MEMBER(static_node_flags, phys_fe_model_desc_t, uint32_t);
			MEMBER(dynamic_node_flags, phys_fe_model_desc_t, uint32_t);
			MEMBER(local_force, phys_fe_model_desc_t, float);
			MEMBER(local_rotation, phys_fe_model_desc_t, float);
			MEMBER(node_count, phys_fe_model_desc_t, uint16_t);
			MEMBER(static_nodes, phys_fe_model_desc_t, uint16_t);
			MEMBER(rot_lock_static_nodes, phys_fe_model_desc_t, uint16_t);
			MEMBER(first_position_driven_node, phys_fe_model_desc_t, uint16_t);
			MEMBER(simd_tri_count1, phys_fe_model_desc_t, uint16_t);
			MEMBER(simd_tri_count2, phys_fe_model_desc_t, uint16_t);
			MEMBER(simd_quad_count1, phys_fe_model_desc_t, uint16_t);
			MEMBER(simd_quad_count2, phys_fe_model_desc_t, uint16_t);
			MEMBER(quad_count1, phys_fe_model_desc_t, uint16_t);
			MEMBER(quad_count2, phys_fe_model_desc_t, uint16_t);
			MEMBER(tree_depth, phys_fe_model_desc_t, uint16_t);
			MEMBER(node_base_jigglebone_depends_count, phys_fe_model_desc_t, uint16_t);
			MEMBER(rope_count, phys_fe_model_desc_t, uint16_t);
			MEMBER(ropes, phys_fe_model_desc_t, cutl_vector<uint16_t>);
			MEMBER(node_bases, phys_fe_model_desc_t, cutl_vector<fe_node_base_t>);
			MEMBER(simd_node_bases, phys_fe_model_desc_t, cutl_vector<fe_simd_node_base_t>);
			MEMBER(quads, phys_fe_model_desc_t, cutl_vector<fe_quad_t>);
			MEMBER(simd_quads, phys_fe_model_desc_t, cutl_vector<fe_simd_quad_t>);
			MEMBER(simd_tris, phys_fe_model_desc_t, cutl_vector<fe_simd_tri_t>);
			MEMBER(simd_rods, phys_fe_model_desc_t, cutl_vector<fe_simd_rod_constraint_t>);
			MEMBER(init_pose, phys_fe_model_desc_t, cutl_vector<ctransform>);
			MEMBER(rods, phys_fe_model_desc_t, cutl_vector<fe_rod_constraint_t>);
			MEMBER(twists, phys_fe_model_desc_t, cutl_vector<fe_twist_constraint_t>);
			MEMBER(axial_edges, phys_fe_model_desc_t, cutl_vector<fe_axial_edge_bend_t>);
			MEMBER(node_inv_masses, phys_fe_model_desc_t, cutl_vector<float>);
			MEMBER(ctrl_offsets, phys_fe_model_desc_t, cutl_vector<fe_ctrl_offset_t>);
			MEMBER(ctrl_os_offsets, phys_fe_model_desc_t, cutl_vector<fe_ctrl_os_offset_t>);
			MEMBER(follow_nodes, phys_fe_model_desc_t, cutl_vector<fe_follow_node_t>);
			MEMBER(collision_planes, phys_fe_model_desc_t, cutl_vector<fe_collision_plane_t>);
			MEMBER(node_integrator, phys_fe_model_desc_t, cutl_vector<fe_node_integrator_t>);
			MEMBER(spring_integrator, phys_fe_model_desc_t, cutl_vector<fe_spring_integrator_t>);
			MEMBER(simd_spring_integrator, phys_fe_model_desc_t, cutl_vector<fe_simd_spring_integrator_t>);
			MEMBER(world_collision_params, phys_fe_model_desc_t, cutl_vector<fe_world_collision_params_t>);
			MEMBER(legacy_stretch_force, phys_fe_model_desc_t, cutl_vector<float>);
			MEMBER(node_collision_radii, phys_fe_model_desc_t, cutl_vector<float>);
			MEMBER(dyn_node_friction, phys_fe_model_desc_t, cutl_vector<float>);
			MEMBER(local_rotation_1, phys_fe_model_desc_t, cutl_vector<float>);
			MEMBER(local_force_1, phys_fe_model_desc_t, cutl_vector<float>);
			MEMBER(tapered_capsule_stretches, phys_fe_model_desc_t, cutl_vector<fe_tapered_capsule_stretch_t>);
			MEMBER(tapered_capsule_rigids, phys_fe_model_desc_t, cutl_vector<fe_tapered_capsule_rigid_t>);
			MEMBER(sphere_rigids, phys_fe_model_desc_t, cutl_vector<fe_sphere_rigid_t>);
			MEMBER(world_collision_nodes, phys_fe_model_desc_t, cutl_vector<uint16_t>);
			MEMBER(tree_parents, phys_fe_model_desc_t, cutl_vector<uint16_t>);
			MEMBER(tree_collision_masks, phys_fe_model_desc_t, cutl_vector<uint16_t>);
			MEMBER(tree_children, phys_fe_model_desc_t, cutl_vector<fe_tree_children_t>);
			MEMBER(free_nodes, phys_fe_model_desc_t, cutl_vector<uint16_t>);
			MEMBER(fit_matrices, phys_fe_model_desc_t, cutl_vector<fe_fit_matrix_t>);
			MEMBER(fit_weights, phys_fe_model_desc_t, cutl_vector<fe_fit_weight_t>);
			MEMBER(reverse_offsets, phys_fe_model_desc_t, cutl_vector<fe_node_reverse_offset_t>);
			MEMBER(anim_stray_radii, phys_fe_model_desc_t, cutl_vector<fe_anim_stray_radius_t>);
			MEMBER(simd_anim_stray_radii, phys_fe_model_desc_t, cutl_vector<fe_simd_anim_stray_radius_t>);
			MEMBER(kelager_bends, phys_fe_model_desc_t, cutl_vector<fe_kelager_bend2_t>);
			MEMBER(ctrl_soft_offsets, phys_fe_model_desc_t, cutl_vector<fe_ctrl_soft_offset_t>);
			MEMBER(jiggle_bones, phys_fe_model_desc_t, cutl_vector<cfe_indexed_jiggle_bone>);
			MEMBER(source_elems, phys_fe_model_desc_t, cutl_vector<uint16_t>);
			MEMBER(goal_damped_spring_integrators, phys_fe_model_desc_t, cutl_vector<uint32_t>);
			MEMBER(tris, phys_fe_model_desc_t, cutl_vector<fe_tri_t>);
			MEMBER(tri_count1, phys_fe_model_desc_t, uint16_t);
			MEMBER(tri_count2, phys_fe_model_desc_t, uint16_t);
			MEMBER(reserved_uint8, phys_fe_model_desc_t, uint8_t);
			MEMBER(extra_pressure_iterations, phys_fe_model_desc_t, uint8_t);
			MEMBER(extra_goal_iterations, phys_fe_model_desc_t, uint8_t);
			MEMBER(extra_iterations, phys_fe_model_desc_t, uint8_t);
			MEMBER(box_rigids, phys_fe_model_desc_t, cutl_vector<fe_box_rigid_t>);
			MEMBER(dyn_node_vertex_set, phys_fe_model_desc_t, cutl_vector<uint8_t>);
			MEMBER(vertex_set_names, phys_fe_model_desc_t, cutl_vector<uint32_t>);
			MEMBER(rigid_collider_priorities, phys_fe_model_desc_t, cutl_vector<fe_rigid_collider_indices_t>);
			MEMBER(morph_layers, phys_fe_model_desc_t, cutl_vector<fe_morph_layer_depr_t>);
			MEMBER(morph_set_data, phys_fe_model_desc_t, cutl_vector<uint8_t>);
			MEMBER(vertex_maps, phys_fe_model_desc_t, cutl_vector<fe_vertex_map_desc_t>);
			MEMBER(vertex_map_values, phys_fe_model_desc_t, cutl_vector<uint8_t>);
			MEMBER(effects, phys_fe_model_desc_t, cutl_vector<fe_effect_desc_t>);
			MEMBER(lock_to_parent, phys_fe_model_desc_t, cutl_vector<fe_ctrl_offset_t>);
			MEMBER(lock_to_goal, phys_fe_model_desc_t, cutl_vector<uint16_t>);
			MEMBER(dyn_node_wind_bases, phys_fe_model_desc_t, cutl_vector<fe_node_wind_base_t>);
			MEMBER(internal_pressure, phys_fe_model_desc_t, float);
			MEMBER(default_time_dilation, phys_fe_model_desc_t, float);
			MEMBER(windage, phys_fe_model_desc_t, float);
			MEMBER(wind_drag, phys_fe_model_desc_t, float);
			MEMBER(default_surface_stretch, phys_fe_model_desc_t, float);
			MEMBER(default_thread_stretch, phys_fe_model_desc_t, float);
			MEMBER(default_gravity_scale, phys_fe_model_desc_t, float);
			MEMBER(default_vel_air_drag, phys_fe_model_desc_t, float);
			MEMBER(default_exp_air_drag, phys_fe_model_desc_t, float);
			MEMBER(default_vel_quad_air_drag, phys_fe_model_desc_t, float);
			MEMBER(default_exp_quad_air_drag, phys_fe_model_desc_t, float);
			MEMBER(rod_velocity_smooth_rate, phys_fe_model_desc_t, float);
			MEMBER(quad_velocity_smooth_rate, phys_fe_model_desc_t, float);
			MEMBER(add_world_collision_radius, phys_fe_model_desc_t, float);
			MEMBER(default_volumetric_solve_amount, phys_fe_model_desc_t, float);
			MEMBER(rod_velocity_smooth_iterations, phys_fe_model_desc_t, uint16_t);
			MEMBER(quad_velocity_smooth_iterations, phys_fe_model_desc_t, uint16_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct phys_fe_model_desc_t

		struct rn_mesh_desc_t : public rn_shape_desc_t
		{
			MEMBER(mesh, rn_mesh_desc_t, rn_mesh_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct rn_mesh_desc_t : public rn_shape_desc_t

		struct rn_sphere_desc_t : public rn_shape_desc_t
		{
			MEMBER(sphere, rn_sphere_desc_t, rn_sphere_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct rn_sphere_desc_t : public rn_shape_desc_t

		struct rn_capsule_desc_t : public rn_shape_desc_t
		{
			MEMBER(capsule, rn_capsule_desc_t, rn_capsule_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct rn_capsule_desc_t : public rn_shape_desc_t

		struct rn_softbody_capsule_t
		{
			MEMBER_ARR(v_center_arr, rn_softbody_capsule_t, 2, vector);
			MEMBER(radius, rn_softbody_capsule_t, float);
			MEMBER_ARR(particle_arr, rn_softbody_capsule_t, 2, uint16_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct rn_softbody_capsule_t

		struct rn_hull_desc_t : public rn_shape_desc_t
		{
			MEMBER(hull, rn_hull_desc_t, rn_hull_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct rn_hull_desc_t : public rn_shape_desc_t

		struct rn_softbody_particle_t
		{
			MEMBER(mass_inv, rn_softbody_particle_t, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct rn_softbody_particle_t

		struct rn_softbody_spring_t
		{
			MEMBER_ARR(particle_arr, rn_softbody_spring_t, 2, uint16_t);
			MEMBER(length, rn_softbody_spring_t, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct rn_softbody_spring_t

		struct vmix_dynamics_desc_t
		{
			MEMBER(fldb_gain, vmix_dynamics_desc_t, float);
			MEMBER(fldb_noise_gate_threshold, vmix_dynamics_desc_t, float);
			MEMBER(fldb_compression_threshold, vmix_dynamics_desc_t, float);
			MEMBER(fldb_limiter_threshold, vmix_dynamics_desc_t, float);
			MEMBER(fldb_knee_width, vmix_dynamics_desc_t, float);
			MEMBER(ratio, vmix_dynamics_desc_t, float);
			MEMBER(limiter_ratio, vmix_dynamics_desc_t, float);
			MEMBER(attack_time_ms, vmix_dynamics_desc_t, float);
			MEMBER(release_time_ms, vmix_dynamics_desc_t, float);
			MEMBER(rmstime_ms, vmix_dynamics_desc_t, float);
			MEMBER(wet_mix, vmix_dynamics_desc_t, float);
			MEMBER(peak_mode, vmix_dynamics_desc_t, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct vmix_dynamics_desc_t

		struct vmix_osc_desc_t
		{
			MEMBER(osc_type, vmix_osc_desc_t, vmix_lfoshape_t);
			MEMBER(freq, vmix_osc_desc_t, float);
			MEMBER(phase, vmix_osc_desc_t, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct vmix_osc_desc_t

		struct vmix_filter_desc_t
		{
			MEMBER(filter_type, vmix_filter_desc_t, vmix_filter_type_t);
			MEMBER(filter_slope, vmix_filter_desc_t, vmix_filter_slope_t);
			MEMBER(enabled, vmix_filter_desc_t, bool);
			MEMBER(fldb_gain, vmix_filter_desc_t, float);
			MEMBER(cutoff_freq, vmix_filter_desc_t, float);
			MEMBER(q, vmix_filter_desc_t, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct vmix_filter_desc_t

		struct vmix_utility_desc_t
		{
			MEMBER(op, vmix_utility_desc_t, vmix_channel_operation_t);
			MEMBER(input_pan, vmix_utility_desc_t, float);
			MEMBER(output_balance, vmix_utility_desc_t, float);
			MEMBER(fldb_output_gain, vmix_utility_desc_t, float);
			MEMBER(bass_mono, vmix_utility_desc_t, bool);
			MEMBER(bass_freq, vmix_utility_desc_t, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct vmix_utility_desc_t

		struct vmix_vocoder_desc_t
		{
			MEMBER(band_count, vmix_vocoder_desc_t, int);
			MEMBER(bandwidth, vmix_vocoder_desc_t, float);
			MEMBER(fld_bmod_gain, vmix_vocoder_desc_t, float);
			MEMBER(freq_range_start, vmix_vocoder_desc_t, float);
			MEMBER(freq_range_end, vmix_vocoder_desc_t, float);
			MEMBER(fld_bunvoiced_gain, vmix_vocoder_desc_t, float);
			MEMBER(attack_time_ms, vmix_vocoder_desc_t, float);
			MEMBER(release_time_ms, vmix_vocoder_desc_t, float);
			MEMBER(debug_band, vmix_vocoder_desc_t, int);
			MEMBER(peak_mode, vmix_vocoder_desc_t, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct vmix_vocoder_desc_t

		class csos_group_action_schema
		{
		public:
			MEMBER(name, csos_group_action_schema, cutl_string);
			MEMBER(action_type, csos_group_action_schema, action_type_t);
			MEMBER(action_instance_type, csos_group_action_schema, action_type_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class csos_group_action_schema

		struct vmix_effect_chain_desc_t
		{
			MEMBER(crossfade_time, vmix_effect_chain_desc_t, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct vmix_effect_chain_desc_t

		struct vmix_dynamics_band_t
		{
			MEMBER(fldb_gain_input, vmix_dynamics_band_t, float);
			MEMBER(fldb_gain_output, vmix_dynamics_band_t, float);
			MEMBER(fldb_threshold_below, vmix_dynamics_band_t, float);
			MEMBER(fldb_threshold_above, vmix_dynamics_band_t, float);
			MEMBER(ratio_below, vmix_dynamics_band_t, float);
			MEMBER(ratio_above, vmix_dynamics_band_t, float);
			MEMBER(attack_time_ms, vmix_dynamics_band_t, float);
			MEMBER(release_time_ms, vmix_dynamics_band_t, float);
			MEMBER(enable, vmix_dynamics_band_t, bool);
			MEMBER(solo, vmix_dynamics_band_t, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct vmix_dynamics_band_t

		struct vmix_auto_filter_desc_t
		{
			MEMBER(envelope_amount, vmix_auto_filter_desc_t, float);
			MEMBER(attack_time_ms, vmix_auto_filter_desc_t, float);
			MEMBER(release_time_ms, vmix_auto_filter_desc_t, float);
			MEMBER(filter, vmix_auto_filter_desc_t, vmix_filter_desc_t);
			MEMBER(lfoamount, vmix_auto_filter_desc_t, float);
			MEMBER(lforate, vmix_auto_filter_desc_t, float);
			MEMBER(phase, vmix_auto_filter_desc_t, float);
			MEMBER(lfoshape, vmix_auto_filter_desc_t, vmix_lfoshape_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct vmix_auto_filter_desc_t

		class csos_group_action_limit_schema : public csos_group_action_schema
		{
		public:
			MEMBER(max_count, csos_group_action_limit_schema, int);
			MEMBER(stop_type, csos_group_action_limit_schema, sos_action_stop_type_t);
			MEMBER(sort_type, csos_group_action_limit_schema, sos_action_sort_type_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class csos_group_action_limit_schema : public csos_group_action_schema

		struct vmix_envelope_desc_t
		{
			MEMBER(attack_time_ms, vmix_envelope_desc_t, float);
			MEMBER(hold_time_ms, vmix_envelope_desc_t, float);
			MEMBER(release_time_ms, vmix_envelope_desc_t, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct vmix_envelope_desc_t

		struct vmix_shaper_desc_t
		{
			MEMBER(shape, vmix_shaper_desc_t, int);
			MEMBER(fldb_drive, vmix_shaper_desc_t, float);
			MEMBER(fldb_output_gain, vmix_shaper_desc_t, float);
			MEMBER(wet_mix, vmix_shaper_desc_t, float);
			MEMBER(oversample_factor, vmix_shaper_desc_t, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct vmix_shaper_desc_t

		struct vmix_dynamics_compressor_desc_t
		{
			MEMBER(fldb_output_gain, vmix_dynamics_compressor_desc_t, float);
			MEMBER(fldb_compression_threshold, vmix_dynamics_compressor_desc_t, float);
			MEMBER(fldb_knee_width, vmix_dynamics_compressor_desc_t, float);
			MEMBER(compression_ratio, vmix_dynamics_compressor_desc_t, float);
			MEMBER(attack_time_ms, vmix_dynamics_compressor_desc_t, float);
			MEMBER(release_time_ms, vmix_dynamics_compressor_desc_t, float);
			MEMBER(rmstime_ms, vmix_dynamics_compressor_desc_t, float);
			MEMBER(wet_mix, vmix_dynamics_compressor_desc_t, float);
			MEMBER(peak_mode, vmix_dynamics_compressor_desc_t, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct vmix_dynamics_compressor_desc_t

		struct vmix_diffusor_desc_t
		{
			MEMBER(size, vmix_diffusor_desc_t, float);
			MEMBER(complexity, vmix_diffusor_desc_t, float);
			MEMBER(feedback, vmix_diffusor_desc_t, float);
			MEMBER(output_gain, vmix_diffusor_desc_t, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct vmix_diffusor_desc_t

		struct vmix_plateverb_desc_t
		{
			MEMBER(prefilter, vmix_plateverb_desc_t, float);
			MEMBER(input_diffusion1, vmix_plateverb_desc_t, float);
			MEMBER(input_diffusion2, vmix_plateverb_desc_t, float);
			MEMBER(decay, vmix_plateverb_desc_t, float);
			MEMBER(damp, vmix_plateverb_desc_t, float);
			MEMBER(feedback_diffusion1, vmix_plateverb_desc_t, float);
			MEMBER(feedback_diffusion2, vmix_plateverb_desc_t, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct vmix_plateverb_desc_t

		struct sos_edit_item_info_t
		{
			MEMBER(item_type, sos_edit_item_info_t, sos_edit_item_type_t);
			MEMBER(item_name, sos_edit_item_info_t, cutl_string);
			MEMBER(item_type_name, sos_edit_item_info_t, cutl_string);
			MEMBER(item_kvstring, sos_edit_item_info_t, cutl_string);
			MEMBER(item_pos, sos_edit_item_info_t, vector2d);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct sos_edit_item_info_t

		class csos_group_branch_pattern
		{
		public:
			MEMBER(match_event_name, csos_group_branch_pattern, bool);
			MEMBER(match_event_sub_string, csos_group_branch_pattern, bool);
			MEMBER(match_ent_index, csos_group_branch_pattern, bool);
			MEMBER(match_opvar, csos_group_branch_pattern, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class csos_group_branch_pattern

		class csos_sound_event_group_list_schema
		{
		public:
			MEMBER(group_list, csos_sound_event_group_list_schema, cutl_vector<csos_sound_event_group_schema>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class csos_sound_event_group_list_schema

		struct vmix_convolution_desc_t
		{
			MEMBER(fldb_gain, vmix_convolution_desc_t, float);
			MEMBER(pre_delay_ms, vmix_convolution_desc_t, float);
			MEMBER(wet_mix, vmix_convolution_desc_t, float);
			MEMBER(fldb_low, vmix_convolution_desc_t, float);
			MEMBER(fldb_mid, vmix_convolution_desc_t, float);
			MEMBER(fldb_high, vmix_convolution_desc_t, float);
			MEMBER(low_cutoff_freq, vmix_convolution_desc_t, float);
			MEMBER(high_cutoff_freq, vmix_convolution_desc_t, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct vmix_convolution_desc_t

		struct vmix_pitch_shift_desc_t
		{
			MEMBER(grain_sample_count, vmix_pitch_shift_desc_t, int);
			MEMBER(pitch_shift, vmix_pitch_shift_desc_t, float);
			MEMBER(quality, vmix_pitch_shift_desc_t, int);
			MEMBER(proc_type, vmix_pitch_shift_desc_t, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct vmix_pitch_shift_desc_t

		class csound_event_meta_data
		{
		public:
			MEMBER(sound_event_vmix, csound_event_meta_data, cstrong_handle<info_for_resource_type_cvmix_list_resource>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class csound_event_meta_data

		struct vmix_eq8_desc_t
		{
			MEMBER_ARR(stages_arr, vmix_eq8_desc_t, 8, vmix_filter_desc_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct vmix_eq8_desc_t

		struct vmix_delay_desc_t
		{
			MEMBER(feedback_filter, vmix_delay_desc_t, vmix_filter_desc_t);
			MEMBER(enable_filter, vmix_delay_desc_t, bool);
			MEMBER(delay, vmix_delay_desc_t, float);
			MEMBER(direct_gain, vmix_delay_desc_t, float);
			MEMBER(delay_gain, vmix_delay_desc_t, float);
			MEMBER(feedback_gain, vmix_delay_desc_t, float);
			MEMBER(width, vmix_delay_desc_t, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct vmix_delay_desc_t

		class cdsp_preset_modifier_list
		{
		public:
			MEMBER(dsp_name, cdsp_preset_modifier_list, cutl_string);
			MEMBER(modifiers, cdsp_preset_modifier_list, cutl_vector<cdspmixgroup_modifier>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cdsp_preset_modifier_list

		class cdspmixgroup_modifier
		{
		public:
			MEMBER(mixgroup, cdspmixgroup_modifier, cutl_string);
			MEMBER(modifier, cdspmixgroup_modifier, float);
			MEMBER(modifier_min, cdspmixgroup_modifier, float);
			MEMBER(source_modifier, cdspmixgroup_modifier, float);
			MEMBER(source_modifier_min, cdspmixgroup_modifier, float);
			MEMBER(listener_reverb_modifier_when_source_reverb_is_active, cdspmixgroup_modifier, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cdspmixgroup_modifier

		struct vmix_dynamics3_band_desc_t
		{
			MEMBER(fldb_gain_output, vmix_dynamics3_band_desc_t, float);
			MEMBER(rmstime_ms, vmix_dynamics3_band_desc_t, float);
			MEMBER(fldb_knee_width, vmix_dynamics3_band_desc_t, float);
			MEMBER(depth, vmix_dynamics3_band_desc_t, float);
			MEMBER(wet_mix, vmix_dynamics3_band_desc_t, float);
			MEMBER(time_scale, vmix_dynamics3_band_desc_t, float);
			MEMBER(low_cutoff_freq, vmix_dynamics3_band_desc_t, float);
			MEMBER(high_cutoff_freq, vmix_dynamics3_band_desc_t, float);
			MEMBER(peak_mode, vmix_dynamics3_band_desc_t, bool);
			MEMBER_ARR(band_desc_arr, vmix_dynamics3_band_desc_t, 3, vmix_dynamics_band_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct vmix_dynamics3_band_desc_t

		class csos_group_match_pattern : public csos_group_branch_pattern
		{
		public:
			MEMBER(match_sound_event_name, csos_group_match_pattern, cutl_string);
			MEMBER(match_sound_event_sub_string, csos_group_match_pattern, cutl_string);
			MEMBER(ent_index, csos_group_match_pattern, float);
			MEMBER(opvar, csos_group_match_pattern, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class csos_group_match_pattern : public csos_group_branch_pattern

		class csos_sound_event_group_schema
		{
		public:
			MEMBER(name, csos_sound_event_group_schema, cutl_string);
			MEMBER(type, csos_sound_event_group_schema, sos_group_type_t);
			MEMBER(is_blocking, csos_sound_event_group_schema, bool);
			MEMBER(block_max_count, csos_sound_event_group_schema, int);
			MEMBER(invert_match, csos_sound_event_group_schema, bool);
			MEMBER(match_pattern, csos_sound_event_group_schema, csos_group_match_pattern);
			MEMBER(branch_pattern, csos_sound_event_group_schema, csos_group_branch_pattern);
			MEMBER_ARR(v_actions_arr_ptr, csos_sound_event_group_schema, 4, csos_group_action_schema*);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class csos_sound_event_group_schema

		class csos_group_action_time_limit_schema : public csos_group_action_schema
		{
		public:
			MEMBER(max_duration, csos_group_action_time_limit_schema, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class csos_group_action_time_limit_schema : public csos_group_action_schema

		struct vmix_boxverb_desc_t
		{
			MEMBER(size_max, vmix_boxverb_desc_t, float);
			MEMBER(size_min, vmix_boxverb_desc_t, float);
			MEMBER(complexity, vmix_boxverb_desc_t, float);
			MEMBER(diffusion, vmix_boxverb_desc_t, float);
			MEMBER(mod_depth, vmix_boxverb_desc_t, float);
			MEMBER(mod_rate, vmix_boxverb_desc_t, float);
			MEMBER(parallel, vmix_boxverb_desc_t, bool);
			MEMBER(filter_type, vmix_boxverb_desc_t, vmix_filter_desc_t);
			MEMBER(width, vmix_boxverb_desc_t, float);
			MEMBER(height, vmix_boxverb_desc_t, float);
			MEMBER(depth, vmix_boxverb_desc_t, float);
			MEMBER(feedback_scale, vmix_boxverb_desc_t, float);
			MEMBER(feedback_width, vmix_boxverb_desc_t, float);
			MEMBER(feedback_height, vmix_boxverb_desc_t, float);
			MEMBER(feedback_depth, vmix_boxverb_desc_t, float);
			MEMBER(output_gain, vmix_boxverb_desc_t, float);
			MEMBER(taps, vmix_boxverb_desc_t, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct vmix_boxverb_desc_t

		struct vmix_mod_delay_desc_t
		{
			MEMBER(feedback_filter, vmix_mod_delay_desc_t, vmix_filter_desc_t);
			MEMBER(phase_invert, vmix_mod_delay_desc_t, bool);
			MEMBER(glide_time, vmix_mod_delay_desc_t, float);
			MEMBER(delay, vmix_mod_delay_desc_t, float);
			MEMBER(output_gain, vmix_mod_delay_desc_t, float);
			MEMBER(feedback_gain, vmix_mod_delay_desc_t, float);
			MEMBER(mod_rate, vmix_mod_delay_desc_t, float);
			MEMBER(mod_depth, vmix_mod_delay_desc_t, float);
			MEMBER(apply_antialiasing, vmix_mod_delay_desc_t, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct vmix_mod_delay_desc_t

		struct selected_edit_item_info_t
		{
			MEMBER(edit_items, selected_edit_item_info_t, cutl_vector<sos_edit_item_info_t>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct selected_edit_item_info_t

		struct vmix_panner_desc_t
		{
			MEMBER(type, vmix_panner_desc_t, vmix_panner_type_t);
			MEMBER(strength, vmix_panner_desc_t, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct vmix_panner_desc_t

		struct vmix_subgraph_switch_desc_t
		{
			MEMBER(interpolation_mode, vmix_subgraph_switch_desc_t, vmix_subgraph_switch_interpolation_type_t);
			MEMBER(only_tails_on_fade_out, vmix_subgraph_switch_desc_t, bool);
			MEMBER(interpolation_time, vmix_subgraph_switch_desc_t, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct vmix_subgraph_switch_desc_t

		class csos_group_action_set_soundevent_parameter_schema : public csos_group_action_schema
		{
		public:
			MEMBER(max_count, csos_group_action_set_soundevent_parameter_schema, int);
			MEMBER(min_value, csos_group_action_set_soundevent_parameter_schema, float);
			MEMBER(max_value, csos_group_action_set_soundevent_parameter_schema, float);
			MEMBER(opvar_name, csos_group_action_set_soundevent_parameter_schema, cutl_string);
			MEMBER(sort_type, csos_group_action_set_soundevent_parameter_schema, sos_action_sort_type_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class csos_group_action_set_soundevent_parameter_schema : public csos_group_action_schema

		class cdsppreset_mixgroup_modifier_table
		{
		public:
			MEMBER(table, cdsppreset_mixgroup_modifier_table, cutl_vector<cdsp_preset_modifier_list>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cdsppreset_mixgroup_modifier_table

		struct vmix_freeverb_desc_t
		{
			MEMBER(room_size, vmix_freeverb_desc_t, float);
			MEMBER(damp, vmix_freeverb_desc_t, float);
			MEMBER(width, vmix_freeverb_desc_t, float);
			MEMBER(late_reflections, vmix_freeverb_desc_t, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct vmix_freeverb_desc_t

		class cssdsmsg_end_frame
		{
		public:
			MEMBER(views, cssdsmsg_end_frame, cutl_vector<cssdsend_frame_view_info>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cssdsmsg_end_frame

		struct scene_view_id_t
		{
			MEMBER(view_id, scene_view_id_t, uint64_t);
			MEMBER(frame_count, scene_view_id_t, uint64_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct scene_view_id_t

		class cssdsmsg_view_target_list
		{
		public:
			MEMBER(view_id, cssdsmsg_view_target_list, scene_view_id_t);
			MEMBER(view_name, cssdsmsg_view_target_list, cutl_string);
			MEMBER(targets, cssdsmsg_view_target_list, cutl_vector<cssdsmsg_view_target>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cssdsmsg_view_target_list

		class cssdsmsg_layer_base
		{
		public:
			MEMBER(view_id, cssdsmsg_layer_base, scene_view_id_t);
			MEMBER(view_name, cssdsmsg_layer_base, cutl_string);
			MEMBER(layer_index, cssdsmsg_layer_base, int);
			MEMBER(layer_id, cssdsmsg_layer_base, uint64_t);
			MEMBER(layer_name, cssdsmsg_layer_base, cutl_string);
			MEMBER(display_text, cssdsmsg_layer_base, cutl_string);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cssdsmsg_layer_base

		class cssdsmsg_pre_layer : public cssdsmsg_layer_base
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cssdsmsg_pre_layer : public cssdsmsg_layer_base

		class cssdsmsg_post_layer : public cssdsmsg_layer_base
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cssdsmsg_post_layer : public cssdsmsg_layer_base

		class cssdsend_frame_view_info
		{
		public:
			MEMBER(view_id, cssdsend_frame_view_info, uint64_t);
			MEMBER(view_name, cssdsend_frame_view_info, cutl_string);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cssdsend_frame_view_info

		class cssdsmsg_view_render
		{
		public:
			MEMBER(view_id, cssdsmsg_view_render, scene_view_id_t);
			MEMBER(view_name, cssdsmsg_view_render, cutl_string);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cssdsmsg_view_render

		class cssdsmsg_view_target
		{
		public:
			MEMBER(name, cssdsmsg_view_target, cutl_string);
			MEMBER(texture_id, cssdsmsg_view_target, uint64_t);
			MEMBER(width, cssdsmsg_view_target, int);
			MEMBER(height, cssdsmsg_view_target, int);
			MEMBER(requested_width, cssdsmsg_view_target, int);
			MEMBER(requested_height, cssdsmsg_view_target, int);
			MEMBER(num_mip_levels, cssdsmsg_view_target, int);
			MEMBER(depth, cssdsmsg_view_target, int);
			MEMBER(multisample_num_samples, cssdsmsg_view_target, int);
			MEMBER(format, cssdsmsg_view_target, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cssdsmsg_view_target

		struct voxel_vis_block_offset_t
		{
			MEMBER(offset, voxel_vis_block_offset_t, uint32_t);
			MEMBER(element_count, voxel_vis_block_offset_t, uint32_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct voxel_vis_block_offset_t

		struct entity_key_value_data_t
		{
			MEMBER(connections, entity_key_value_data_t, cutl_vector<entity_ioconnection_data_t>);
			MEMBER(key_values_data, entity_key_value_data_t, cutl_binary_block);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct entity_key_value_data_t

		struct base_scene_object_override_t
		{
			MEMBER(scene_object_index, base_scene_object_override_t, uint32_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct base_scene_object_override_t

		struct info_overlay_data_t
		{
			MEMBER(transform, info_overlay_data_t, matrix3x4_t);
			MEMBER(width, info_overlay_data_t, float);
			MEMBER(height, info_overlay_data_t, float);
			MEMBER(depth, info_overlay_data_t, float);
			MEMBER(v_uvstart, info_overlay_data_t, vector2d);
			MEMBER(v_uvend, info_overlay_data_t, vector2d);
			MEMBER(material, info_overlay_data_t, cstrong_handle<info_for_resource_type_imaterial2>);
			MEMBER(render_order, info_overlay_data_t, int);
			MEMBER(v_tint_color, info_overlay_data_t, vector4d);
			MEMBER(sequence_override, info_overlay_data_t, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct info_overlay_data_t

		struct baked_lighting_info_t
		{
			MEMBER(lightmap_version_number, baked_lighting_info_t, uint32_t);
			MEMBER(lightmap_game_version_number, baked_lighting_info_t, uint32_t);
			MEMBER(v_lightmap_uv_scale, baked_lighting_info_t, vector2d);
			MEMBER(has_lightmaps, baked_lighting_info_t, bool);
			MEMBER(light_maps, baked_lighting_info_t, cutl_vector<cstrong_handle<info_for_resource_type_ctexture_base>>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct baked_lighting_info_t

		struct aggregate_mesh_info_t
		{
			MEMBER(vis_cluster_member_offset, aggregate_mesh_info_t, uint32_t);
			MEMBER(vis_cluster_member_count, aggregate_mesh_info_t, uint8_t);
			MEMBER(has_transform, aggregate_mesh_info_t, bool);
			MEMBER(draw_call_index, aggregate_mesh_info_t, short);
			MEMBER(lodsetup_index, aggregate_mesh_info_t, short);
			MEMBER(lodgroup_mask, aggregate_mesh_info_t, uint8_t);
			MEMBER(v_tint_color, aggregate_mesh_info_t, color);
			MEMBER(object_flags, aggregate_mesh_info_t, object_type_flags_t);
			MEMBER(light_probe_volume_precomputed_handshake, aggregate_mesh_info_t, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct aggregate_mesh_info_t

		struct world_node_on_disk_buffer_data_t
		{
			MEMBER(element_count, world_node_on_disk_buffer_data_t, int);
			MEMBER(element_size_in_bytes, world_node_on_disk_buffer_data_t, int);
			MEMBER(input_layout_fields, world_node_on_disk_buffer_data_t, cutl_vector<render_input_layout_field_t>);
			MEMBER(data, world_node_on_disk_buffer_data_t, cutl_vector<uint8_t>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct world_node_on_disk_buffer_data_t

		struct info_for_resource_type_vmap_resource_data_t
		{
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct info_for_resource_type_vmap_resource_data_t

		class cvoxel_visibility
		{
		public:
			MEMBER(base_cluster_count, cvoxel_visibility, uint32_t);
			MEMBER(pvsbytes_per_cluster, cvoxel_visibility, uint32_t);
			MEMBER(v_min_bounds, cvoxel_visibility, vector);
			MEMBER(v_max_bounds, cvoxel_visibility, vector);
			MEMBER(grid_size, cvoxel_visibility, float);
			MEMBER(sky_visibility_cluster, cvoxel_visibility, uint32_t);
			MEMBER(sun_visibility_cluster, cvoxel_visibility, uint32_t);
			MEMBER(node_block, cvoxel_visibility, voxel_vis_block_offset_t);
			MEMBER(region_block, cvoxel_visibility, voxel_vis_block_offset_t);
			MEMBER(enclosed_cluster_list_block, cvoxel_visibility, voxel_vis_block_offset_t);
			MEMBER(enclosed_clusters_block, cvoxel_visibility, voxel_vis_block_offset_t);
			MEMBER(masks_block, cvoxel_visibility, voxel_vis_block_offset_t);
			MEMBER(vis_blocks, cvoxel_visibility, voxel_vis_block_offset_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cvoxel_visibility

		struct world_builder_params_t
		{
			MEMBER(min_draw_volume_size, world_builder_params_t, float);
			MEMBER(build_baked_lighting, world_builder_params_t, bool);
			MEMBER(v_lightmap_uv_scale, world_builder_params_t, vector2d);
			MEMBER(compile_timestamp, world_builder_params_t, uint64_t);
			MEMBER(compile_fingerprint, world_builder_params_t, uint64_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct world_builder_params_t

		struct entity_ioconnection_data_t
		{
			MEMBER(output_name, entity_ioconnection_data_t, cutl_string);
			MEMBER(target_type, entity_ioconnection_data_t, uint32_t);
			MEMBER(target_name, entity_ioconnection_data_t, cutl_string);
			MEMBER(input_name, entity_ioconnection_data_t, cutl_string);
			MEMBER(override_param, entity_ioconnection_data_t, cutl_string);
			MEMBER(delay, entity_ioconnection_data_t, float);
			MEMBER(times_to_fire, entity_ioconnection_data_t, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct entity_ioconnection_data_t

		struct material_override_t : public base_scene_object_override_t
		{
			MEMBER(sub_scene_object, material_override_t, uint32_t);
			MEMBER(draw_call_index, material_override_t, uint32_t);
			MEMBER(material, material_override_t, cstrong_handle<info_for_resource_type_imaterial2>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct material_override_t : public base_scene_object_override_t

		struct world_node_t
		{
			MEMBER(scene_objects, world_node_t, cutl_vector<scene_object_t>);
			MEMBER(info_overlays, world_node_t, cutl_vector<info_overlay_data_t>);
			MEMBER(vis_cluster_membership, world_node_t, cutl_vector<uint16_t>);
			MEMBER(aggregate_scene_objects, world_node_t, cutl_vector<aggregate_scene_object_t>);
			MEMBER(clutter_scene_objects, world_node_t, cutl_vector<clutter_scene_object_t>);
			MEMBER(extra_vertex_stream_overrides, world_node_t, cutl_vector<extra_vertex_stream_override_t>);
			MEMBER(material_overrides, world_node_t, cutl_vector<material_override_t>);
			MEMBER(extra_vertex_streams, world_node_t, cutl_vector<world_node_on_disk_buffer_data_t>);
			MEMBER(layer_names, world_node_t, cutl_vector<cutl_string>);
			MEMBER(scene_object_layer_indices, world_node_t, cutl_vector<uint8_t>);
			MEMBER(overlay_layer_indices, world_node_t, cutl_vector<uint8_t>);
			MEMBER(grass_file_name, world_node_t, cutl_string);
			MEMBER(node_lighting_info, world_node_t, baked_lighting_info_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct world_node_t

		struct perm_entity_lump_data_t
		{
			MEMBER(name, perm_entity_lump_data_t, cutl_string);
			MEMBER(hammer_unique_id, perm_entity_lump_data_t, cutl_string);
			MEMBER(child_lumps, perm_entity_lump_data_t, cutl_vector<cstrong_handle_copyable<info_for_resource_type_centity_lump>>);
			MEMBER(entity_key_values, perm_entity_lump_data_t, cutl_lean_vector<entity_key_value_data_t>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct perm_entity_lump_data_t

		struct world_t
		{
			MEMBER(builder_params, world_t, world_builder_params_t);
			MEMBER(world_nodes, world_t, cutl_vector<node_data_t>);
			MEMBER(world_lighting_info, world_t, baked_lighting_info_t);
			MEMBER(entity_lumps, world_t, cutl_vector<cstrong_handle_copyable<info_for_resource_type_centity_lump>>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct world_t

		struct clutter_scene_object_t
		{
			MEMBER(bounds, clutter_scene_object_t, aabb_t);
			MEMBER(flags, clutter_scene_object_t, object_type_flags_t);
			MEMBER(layer, clutter_scene_object_t, short);
			MEMBER(instance_positions, clutter_scene_object_t, cutl_vector<vector>);
			MEMBER(instance_scales, clutter_scene_object_t, cutl_vector<float>);
			MEMBER(instance_tint_srgb, clutter_scene_object_t, cutl_vector<color>);
			MEMBER(tiles, clutter_scene_object_t, cutl_vector<clutter_tile_t>);
			MEMBER(renderable_model, clutter_scene_object_t, cstrong_handle<info_for_resource_type_cmodel>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct clutter_scene_object_t

		struct vmap_resource_data_t
		{
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct vmap_resource_data_t

		struct node_data_t
		{
			MEMBER(parent, node_data_t, int);
			MEMBER(v_origin, node_data_t, vector);
			MEMBER(v_min_bounds, node_data_t, vector);
			MEMBER(v_max_bounds, node_data_t, vector);
			MEMBER(minimum_distance, node_data_t, float);
			MEMBER(child_node_indices, node_data_t, cutl_vector<int>);
			MEMBER(world_node_prefix, node_data_t, cutl_string);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct node_data_t

		struct aggregate_scene_object_t
		{
			MEMBER(all_flags, aggregate_scene_object_t, object_type_flags_t);
			MEMBER(any_flags, aggregate_scene_object_t, object_type_flags_t);
			MEMBER(layer, aggregate_scene_object_t, short);
			MEMBER(aggregate_meshes, aggregate_scene_object_t, cutl_vector<aggregate_mesh_info_t>);
			MEMBER(lod_setups, aggregate_scene_object_t, cutl_vector<aggregate_lodsetup_t>);
			MEMBER(vis_cluster_membership, aggregate_scene_object_t, cutl_vector<uint16_t>);
			MEMBER(fragment_transforms, aggregate_scene_object_t, cutl_vector<matrix3x4_t>);
			MEMBER(renderable_model, aggregate_scene_object_t, cstrong_handle<info_for_resource_type_cmodel>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct aggregate_scene_object_t

		struct clutter_tile_t
		{
			MEMBER(first_instance, clutter_tile_t, uint32_t);
			MEMBER(last_instance, clutter_tile_t, uint32_t);
			MEMBER(bounds_ws, clutter_tile_t, aabb_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct clutter_tile_t

		struct extra_vertex_stream_override_t : public base_scene_object_override_t
		{
			MEMBER(sub_scene_object, extra_vertex_stream_override_t, uint32_t);
			MEMBER(draw_call_index, extra_vertex_stream_override_t, uint32_t);
			MEMBER(additional_mesh_draw_primitive_flags, extra_vertex_stream_override_t, mesh_draw_primitive_flags_t);
			MEMBER(extra_buffer_binding, extra_vertex_stream_override_t, crender_buffer_binding);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct extra_vertex_stream_override_t : public base_scene_object_override_t

		struct aggregate_lodsetup_t
		{
			MEMBER(v_lodorigin, aggregate_lodsetup_t, vector);
			MEMBER(max_object_scale, aggregate_lodsetup_t, float);
			MEMBER(switch_distances, aggregate_lodsetup_t, cutl_vector_fixed_growable<float>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct aggregate_lodsetup_t

		struct scene_object_t
		{
			MEMBER(object_id, scene_object_t, uint32_t);
			MEMBER_ARR(v_transform_arr, scene_object_t, 3, vector4d);
			MEMBER(fade_start_distance, scene_object_t, float);
			MEMBER(fade_end_distance, scene_object_t, float);
			MEMBER(v_tint_color, scene_object_t, vector4d);
			MEMBER(skin, scene_object_t, cutl_string);
			MEMBER(object_type_flags, scene_object_t, object_type_flags_t);
			MEMBER(v_lighting_origin, scene_object_t, vector);
			MEMBER(overlay_render_order, scene_object_t, short);
			MEMBER(lodoverride, scene_object_t, short);
			MEMBER(cube_map_precomputed_handshake, scene_object_t, int);
			MEMBER(light_probe_volume_precomputed_handshake, scene_object_t, int);
			MEMBER(renderable_model, scene_object_t, cstrong_handle<info_for_resource_type_cmodel>);
			MEMBER(renderable, scene_object_t, cstrong_handle<info_for_resource_type_crender_mesh>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct scene_object_t

		class cpulse_exec_cursor
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpulse_exec_cursor

		struct pulse_doc_node_id_t
		{
			MEMBER(value, pulse_doc_node_id_t, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct pulse_doc_node_id_t

		class cpulse_cell_base
		{
		public:
			MEMBER(editor_node_id, cpulse_cell_base, pulse_doc_node_id_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpulse_cell_base

		struct pulse_runtime_state_offset_t
		{
			MEMBER(value, pulse_runtime_state_offset_t, uint16_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct pulse_runtime_state_offset_t

		class cpulse_runtime_method_arg
		{
		public:
			MEMBER(name, cpulse_runtime_method_arg, ckv3_member_name_with_storage);
			MEMBER(description, cpulse_runtime_method_arg, cutl_string);
			MEMBER(type, cpulse_runtime_method_arg, cpulse_value_full_type);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpulse_runtime_method_arg

		class cpulse_cell_base_flow : public cpulse_cell_base
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpulse_cell_base_flow : public cpulse_cell_base

		struct pulse_runtime_chunk_index_t
		{
			MEMBER(value, pulse_runtime_chunk_index_t, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct pulse_runtime_chunk_index_t

		class cpulse_cell_step_debug_log : public cpulse_cell_base_flow
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpulse_cell_step_debug_log : public cpulse_cell_base_flow

		class cpulse_outflow_connection
		{
		public:
			MEMBER(source_outflow_name, cpulse_outflow_connection, cutl_symbol_large);
			MEMBER(dest_chunk, cpulse_outflow_connection, pulse_runtime_chunk_index_t);
			MEMBER(instruction, cpulse_outflow_connection, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpulse_outflow_connection

		class cpulse_cell_outflow_test_explicit_yes_no : public cpulse_cell_base_flow
		{
		public:
			MEMBER(yes, cpulse_cell_outflow_test_explicit_yes_no, cpulse_outflow_connection);
			MEMBER(no, cpulse_cell_outflow_test_explicit_yes_no, cpulse_outflow_connection);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpulse_cell_outflow_test_explicit_yes_no : public cpulse_cell_base_flow

		struct pulse_runtime_call_info_index_t
		{
			MEMBER(value, pulse_runtime_call_info_index_t, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct pulse_runtime_call_info_index_t

		struct pulse_register_map_t
		{
			MEMBER(inparams, pulse_register_map_t, key_values3);
			MEMBER(outparams, pulse_register_map_t, key_values3);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct pulse_register_map_t

		class cpulse_cell_test_multi_inflow_no_default : public cpulse_cell_base_flow
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpulse_cell_test_multi_inflow_no_default : public cpulse_cell_base_flow

		class cpulse_graph_def
		{
		public:
			MEMBER(domain_identifier, cpulse_graph_def, cutl_symbol_large);
			MEMBER(parent_map_name, cpulse_graph_def, cutl_symbol_large);
			MEMBER(chunks, cpulse_graph_def, cutl_vector<cpulse_chunk*>);
			MEMBER(cells, cpulse_graph_def, cutl_vector<cpulse_cell_base*>);
			MEMBER(vars, cpulse_graph_def, cutl_vector<cpulse_variable>);
			MEMBER(public_outputs, cpulse_graph_def, cutl_vector<cpulse_public_output>);
			MEMBER(invoke_bindings, cpulse_graph_def, cutl_vector<cpulse_invoke_binding*>);
			MEMBER(call_infos, cpulse_graph_def, cutl_vector<cpulse_call_info*>);
			MEMBER(output_connections, cpulse_graph_def, cutl_vector<cpulse_output_connection*>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpulse_graph_def

		class cpulse_cell_outflow_int_switch : public cpulse_cell_base_flow
		{
		public:
			MEMBER(default_case_outflow, cpulse_cell_outflow_int_switch, cpulse_outflow_connection);
			MEMBER(case_outflows, cpulse_cell_outflow_int_switch, cutl_vector<cpulse_outflow_connection>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpulse_cell_outflow_int_switch : public cpulse_cell_base_flow

		class cpulse_turtle_graphics_cursor : public cpulse_exec_cursor
		{
		public:
			MEMBER(color, cpulse_turtle_graphics_cursor, color);
			MEMBER(v_pos, cpulse_turtle_graphics_cursor, vector2d);
			MEMBER(heading_deg, cpulse_turtle_graphics_cursor, float);
			MEMBER(pen_up, cpulse_turtle_graphics_cursor, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpulse_turtle_graphics_cursor : public cpulse_exec_cursor

		struct pulse_runtime_cell_index_t
		{
			MEMBER(value, pulse_runtime_cell_index_t, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct pulse_runtime_cell_index_t

		struct pulse_runtime_register_index_t
		{
			MEMBER(value, pulse_runtime_register_index_t, short);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct pulse_runtime_register_index_t

		class cpulse_cell_base_value : public cpulse_cell_base
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpulse_cell_base_value : public cpulse_cell_base

		class cpulse_cell_val_test_domain_get_entity_name : public cpulse_cell_base_value
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpulse_cell_val_test_domain_get_entity_name : public cpulse_cell_base_value

		class cpulse_call_info
		{
		public:
			MEMBER(port_name, cpulse_call_info, cutl_symbol_large);
			MEMBER(editor_node_id, cpulse_call_info, pulse_doc_node_id_t);
			MEMBER(register_map, cpulse_call_info, pulse_register_map_t);
			MEMBER(call_method_id, cpulse_call_info, pulse_doc_node_id_t);
			MEMBER(src_chunk, cpulse_call_info, pulse_runtime_chunk_index_t);
			MEMBER(src_instruction, cpulse_call_info, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpulse_call_info

		class cpulse_cell_step_test_domain_tracepoint : public cpulse_cell_base_flow
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpulse_cell_step_test_domain_tracepoint : public cpulse_cell_base_flow

		class cpulse_cell_inflow_base_entrypoint : public cpulse_cell_base_flow
		{
		public:
			MEMBER(entry_chunk, cpulse_cell_inflow_base_entrypoint, pulse_runtime_chunk_index_t);
			MEMBER(register_map, cpulse_cell_inflow_base_entrypoint, pulse_register_map_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpulse_cell_inflow_base_entrypoint : public cpulse_cell_base_flow

		class cbase_pulse_graph_instance
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cbase_pulse_graph_instance

		class cpulse_mathlib
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpulse_mathlib

		class cpulse_cell_step_test_domain_ent_fire : public cpulse_cell_base_flow
		{
		public:
			MEMBER(input, cpulse_cell_step_test_domain_ent_fire, cutl_string);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpulse_cell_step_test_domain_ent_fire : public cpulse_cell_base_flow

		class cpulse_cell_step_test_domain_create_fake_entity : public cpulse_cell_base_flow
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpulse_cell_step_test_domain_create_fake_entity : public cpulse_cell_base_flow

		struct pulse_runtime_output_index_t
		{
			MEMBER(value, pulse_runtime_output_index_t, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct pulse_runtime_output_index_t

		class cpulse_cell_outflow_cycle_shuffled : public cpulse_cell_base_flow
		{
		public:
			MEMBER(outputs, cpulse_cell_outflow_cycle_shuffled, cutl_vector<cpulse_outflow_connection>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpulse_cell_outflow_cycle_shuffled : public cpulse_cell_base_flow

		class cpulse_graph_instance_test_domain : public cbase_pulse_graph_instance
		{
		public:
			MEMBER(is_running_unit_tests, cpulse_graph_instance_test_domain, bool);
			MEMBER(explicit_time_stepping, cpulse_graph_instance_test_domain, bool);
			MEMBER(expecting_to_destroy_with_yielded_cursors, cpulse_graph_instance_test_domain, bool);
			MEMBER(next_validate_index, cpulse_graph_instance_test_domain, int);
			MEMBER(tracepoints, cpulse_graph_instance_test_domain, cutl_vector<cutl_string>);
			MEMBER(test_yes_or_no_path, cpulse_graph_instance_test_domain, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpulse_graph_instance_test_domain : public cbase_pulse_graph_instance

		class cpulse_cell_inflow_method : public cpulse_cell_inflow_base_entrypoint
		{
		public:
			MEMBER(method_name, cpulse_cell_inflow_method, cutl_symbol_large);
			MEMBER(description, cpulse_cell_inflow_method, cutl_string);
			MEMBER(is_public, cpulse_cell_inflow_method, bool);
			MEMBER(return_type, cpulse_cell_inflow_method, cpulse_value_full_type);
			MEMBER(args, cpulse_cell_inflow_method, cutl_vector<cpulse_runtime_method_arg>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpulse_cell_inflow_method : public cpulse_cell_inflow_base_entrypoint

		class cpulse_variable
		{
		public:
			MEMBER(name, cpulse_variable, cutl_symbol_large);
			MEMBER(description, cpulse_variable, cutl_string);
			MEMBER(type, cpulse_variable, cpulse_value_full_type);
			MEMBER(default_value, cpulse_variable, key_values3);
			MEMBER(is_public, cpulse_variable, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpulse_variable

		class cpulse_invoke_binding
		{
		public:
			MEMBER(register_map, cpulse_invoke_binding, pulse_register_map_t);
			MEMBER(func_name, cpulse_invoke_binding, cutl_symbol_large);
			MEMBER(cell_index, cpulse_invoke_binding, pulse_runtime_cell_index_t);
			MEMBER(instance_type, cpulse_invoke_binding, cpulse_value_full_type);
			MEMBER(src_chunk, cpulse_invoke_binding, pulse_runtime_chunk_index_t);
			MEMBER(src_instruction, cpulse_invoke_binding, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpulse_invoke_binding

		struct pulse_runtime_invoke_index_t
		{
			MEMBER(value, pulse_runtime_invoke_index_t, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct pulse_runtime_invoke_index_t

		class cpulse_cell_base_yielding_inflow : public cpulse_cell_base_flow
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpulse_cell_base_yielding_inflow : public cpulse_cell_base_flow

		struct pulse_test_ehandle_t
		{
			MEMBER(value, pulse_test_ehandle_t, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct pulse_test_ehandle_t

		class cpulse_cell_outflow_simultaneous_parallel : public cpulse_cell_base_flow
		{
		public:
			MEMBER(outputs, cpulse_cell_outflow_simultaneous_parallel, cutl_vector<cpulse_outflow_connection>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpulse_cell_outflow_simultaneous_parallel : public cpulse_cell_base_flow

		class cpulse_graph_instance_turtle_graphics : public cbase_pulse_graph_instance
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpulse_graph_instance_turtle_graphics : public cbase_pulse_graph_instance

		class cpulse_cell_step_call_external_method : public cpulse_cell_base_flow
		{
		public:
			MEMBER(method_name, cpulse_cell_step_call_external_method, cutl_symbol_large);
			MEMBER(expected_args, cpulse_cell_step_call_external_method, cutl_vector<cpulse_runtime_method_arg>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpulse_cell_step_call_external_method : public cpulse_cell_base_flow

		class cpulse_output_connection
		{
		public:
			MEMBER(source_output, cpulse_output_connection, cutl_symbol_large);
			MEMBER(target_entity, cpulse_output_connection, cutl_symbol_large);
			MEMBER(target_input, cpulse_output_connection, cutl_symbol_large);
			MEMBER(param, cpulse_output_connection, cutl_symbol_large);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpulse_output_connection

		class cpulse_public_output
		{
		public:
			MEMBER(name, cpulse_public_output, cutl_symbol_large);
			MEMBER(description, cpulse_public_output, cutl_string);
			MEMBER(param_type, cpulse_public_output, cpulse_value_full_type);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpulse_public_output

		class cpulse_cell_inflow_event_handler : public cpulse_cell_inflow_base_entrypoint
		{
		public:
			MEMBER(event_name, cpulse_cell_inflow_event_handler, cutl_symbol_large);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpulse_cell_inflow_event_handler : public cpulse_cell_inflow_base_entrypoint

		class cpulse_cell_outflow_cycle_random : public cpulse_cell_base_flow
		{
		public:
			MEMBER(outputs, cpulse_cell_outflow_cycle_random, cutl_vector<cpulse_outflow_connection>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpulse_cell_outflow_cycle_random : public cpulse_cell_base_flow

		class cpulse_resume_point : public cpulse_outflow_connection
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpulse_resume_point : public cpulse_outflow_connection

		class cpulse_cell_value_random_int : public cpulse_cell_base_value
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpulse_cell_value_random_int : public cpulse_cell_base_value

		struct cpulse_cell_outflow_cycle_shuffled__instance_state_t
		{
			MEMBER(shuffle, cpulse_cell_outflow_cycle_shuffled__instance_state_t, cutl_vector_fixed_growable<uint8_t>);
			MEMBER(next_shuffle, cpulse_cell_outflow_cycle_shuffled__instance_state_t, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct cpulse_cell_outflow_cycle_shuffled__instance_state_t

		struct fake_entity_t
		{
			MEMBER(handle, fake_entity_t, pulse_test_ehandle_t);
			MEMBER(name, fake_entity_t, cutl_string);
			MEMBER(class_, fake_entity_t, cutl_string);
			MEMBER(destroyed, fake_entity_t, bool);
			MEMBER(associated_graph_instance_ptr, fake_entity_t, cpulse_graph_instance_test_domain*);
			MEMBER(func_was_called, fake_entity_t, bool);
			MEMBER(value, fake_entity_t, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct fake_entity_t

		class cpulse_cell_test_no_inflow : public cpulse_cell_base_flow
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpulse_cell_test_no_inflow : public cpulse_cell_base_flow

		class cpulse_cell_outflow_string_switch : public cpulse_cell_base_flow
		{
		public:
			MEMBER(default_case_outflow, cpulse_cell_outflow_string_switch, cpulse_outflow_connection);
			MEMBER(case_outflows, cpulse_cell_outflow_string_switch, cutl_vector<cpulse_outflow_connection>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpulse_cell_outflow_string_switch : public cpulse_cell_base_flow

		class cpulse_cell_test_multi_inflow_with_default : public cpulse_cell_base_flow
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpulse_cell_test_multi_inflow_with_default : public cpulse_cell_base_flow

		class cpulse_cell_value_test_value50 : public cpulse_cell_base_value
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpulse_cell_value_test_value50 : public cpulse_cell_base_value

		class cpulse_cell_inflow_ent_output_handler : public cpulse_cell_inflow_base_entrypoint
		{
		public:
			MEMBER(source_entity, cpulse_cell_inflow_ent_output_handler, cutl_symbol_large);
			MEMBER(source_output, cpulse_cell_inflow_ent_output_handler, cutl_symbol_large);
			MEMBER(target_input, cpulse_cell_inflow_ent_output_handler, cutl_symbol_large);
			MEMBER(expected_param_type, cpulse_cell_inflow_ent_output_handler, cpulse_value_full_type);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpulse_cell_inflow_ent_output_handler : public cpulse_cell_inflow_base_entrypoint

		class ctest_domain_derived_cursor : public cpulse_exec_cursor
		{
		public:
			MEMBER(cursor_value_a, ctest_domain_derived_cursor, int);
			MEMBER(cursor_value_b, ctest_domain_derived_cursor, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class ctest_domain_derived_cursor : public cpulse_exec_cursor

		class cpulse_cell_inflow_wait : public cpulse_cell_base_yielding_inflow
		{
		public:
			MEMBER(wake_resume, cpulse_cell_inflow_wait, cpulse_resume_point);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpulse_cell_inflow_wait : public cpulse_cell_base_yielding_inflow

		class cpulse_cell_inflow_graph_hook : public cpulse_cell_inflow_base_entrypoint
		{
		public:
			MEMBER(hook_name, cpulse_cell_inflow_graph_hook, cutl_symbol_large);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpulse_cell_inflow_graph_hook : public cpulse_cell_inflow_base_entrypoint

		class cpulse_cell_inflow_yield : public cpulse_cell_base_yielding_inflow
		{
		public:
			MEMBER(unyield_resume, cpulse_cell_inflow_yield, cpulse_resume_point);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpulse_cell_inflow_yield : public cpulse_cell_base_yielding_inflow

		class cpulse_test_funcs_derived_domain
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpulse_test_funcs_derived_domain

		class cpulse_cell_outflow_cycle_ordered : public cpulse_cell_base_flow
		{
		public:
			MEMBER(outputs, cpulse_cell_outflow_cycle_ordered, cutl_vector<cpulse_outflow_connection>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpulse_cell_outflow_cycle_ordered : public cpulse_cell_base_flow

		class cpulse_graph_instance_test_domain_derived : public cpulse_graph_instance_test_domain
		{
		public:
			MEMBER(instance_value_x, cpulse_graph_instance_test_domain_derived, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpulse_graph_instance_test_domain_derived : public cpulse_graph_instance_test_domain

		class cpulse_cell_outflow_test_random_yes_no : public cpulse_cell_base_flow
		{
		public:
			MEMBER(yes, cpulse_cell_outflow_test_random_yes_no, cpulse_outflow_connection);
			MEMBER(no, cpulse_cell_outflow_test_random_yes_no, cpulse_outflow_connection);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpulse_cell_outflow_test_random_yes_no : public cpulse_cell_base_flow

		class cpulse_register_info
		{
		public:
			MEMBER(reg, cpulse_register_info, pulse_runtime_register_index_t);
			MEMBER(type, cpulse_register_info, cpulse_value_full_type);
			MEMBER(origin_name, cpulse_register_info, ckv3_member_name_with_storage);
			MEMBER(written_by_instruction, cpulse_register_info, int);
			MEMBER(last_read_by_instruction, cpulse_register_info, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpulse_register_info

		class cpulse_test_script_lib
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpulse_test_script_lib

		struct cpulse_cell_outflow_cycle_ordered__instance_state_t
		{
			MEMBER(next_index, cpulse_cell_outflow_cycle_ordered__instance_state_t, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct cpulse_cell_outflow_cycle_ordered__instance_state_t

		struct pulse_runtime_var_index_t
		{
			MEMBER(value, pulse_runtime_var_index_t, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct pulse_runtime_var_index_t

		class cpulse_chunk
		{
		public:
			MEMBER(instructions, cpulse_chunk, cutl_lean_vector<pgdinstruction_t>);
			MEMBER(registers, cpulse_chunk, cutl_lean_vector<cpulse_register_info>);
			MEMBER(instruction_editor_ids, cpulse_chunk, cutl_lean_vector<pulse_doc_node_id_t>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpulse_chunk

		struct pulse_runtime_entrypoint_index_t
		{
			MEMBER(value, pulse_runtime_entrypoint_index_t, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct pulse_runtime_entrypoint_index_t

		struct pgdinstruction_t
		{
			MEMBER(code, pgdinstruction_t, pulse_instruction_code_t);
			MEMBER(var, pgdinstruction_t, pulse_runtime_var_index_t);
			MEMBER(reg0, pgdinstruction_t, pulse_runtime_register_index_t);
			MEMBER(reg1, pgdinstruction_t, pulse_runtime_register_index_t);
			MEMBER(reg2, pgdinstruction_t, pulse_runtime_register_index_t);
			MEMBER(invoke_binding_index, pgdinstruction_t, pulse_runtime_invoke_index_t);
			MEMBER(chunk, pgdinstruction_t, pulse_runtime_chunk_index_t);
			MEMBER(dest_instruction, pgdinstruction_t, int);
			MEMBER(call_info_index, pgdinstruction_t, pulse_runtime_call_info_index_t);
			MEMBER(arg0_name, pgdinstruction_t, cutl_symbol_large);
			MEMBER(arg1_name, pgdinstruction_t, cutl_symbol_large);
			MEMBER(literal_bool, pgdinstruction_t, bool);
			MEMBER(literal_int, pgdinstruction_t, int);
			MEMBER(literal_float, pgdinstruction_t, float);
			MEMBER(literal_string, pgdinstruction_t, cbuffer_string);
			MEMBER(v_literal_vec3, pgdinstruction_t, vector);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct pgdinstruction_t

		class cpulse_cell_step_test_domain_destroy_fake_entity : public cpulse_cell_base_flow
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpulse_cell_step_test_domain_destroy_fake_entity : public cpulse_cell_base_flow

		class cpulse_test_funcs_library_a
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpulse_test_funcs_library_a

		class cpulse_cell_val_test_domain_find_entity_by_name : public cpulse_cell_base_value
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpulse_cell_val_test_domain_find_entity_by_name : public cpulse_cell_base_value

		class cpulse_cell_step_public_output : public cpulse_cell_base_flow
		{
		public:
			MEMBER(output_index, cpulse_cell_step_public_output, pulse_runtime_output_index_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpulse_cell_step_public_output : public cpulse_cell_base_flow

		class cparticle_property
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cparticle_property

		struct particle_attribute_index_t
		{
			MEMBER(value, particle_attribute_index_t, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct particle_attribute_index_t

		class cparticle_input
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cparticle_input

		class cparticle_float_input : public cparticle_input
		{
		public:
			MEMBER(type, cparticle_float_input, particle_float_type_t);
			MEMBER(map_type, cparticle_float_input, particle_float_map_type_t);
			MEMBER(literal_value, cparticle_float_input, float);
			MEMBER(named_value, cparticle_float_input, cparticle_named_value_ref);
			MEMBER(control_point, cparticle_float_input, int);
			MEMBER(scalar_attribute, cparticle_float_input, particle_attribute_index_t);
			MEMBER(vector_attribute, cparticle_float_input, particle_attribute_index_t);
			MEMBER(vector_component, cparticle_float_input, int);
			MEMBER(random_min, cparticle_float_input, float);
			MEMBER(random_max, cparticle_float_input, float);
			MEMBER(has_random_sign_flip, cparticle_float_input, bool);
			MEMBER(random_seed, cparticle_float_input, int);
			MEMBER(random_mode, cparticle_float_input, particle_float_random_mode_t);
			MEMBER(lod0, cparticle_float_input, float);
			MEMBER(lod1, cparticle_float_input, float);
			MEMBER(lod2, cparticle_float_input, float);
			MEMBER(lod3, cparticle_float_input, float);
			MEMBER(noise_input_vector_attribute, cparticle_float_input, particle_attribute_index_t);
			MEMBER(noise_output_min, cparticle_float_input, float);
			MEMBER(noise_output_max, cparticle_float_input, float);
			MEMBER(noise_scale, cparticle_float_input, float);
			MEMBER(vec_noise_offset_rate, cparticle_float_input, vector);
			MEMBER(noise_offset, cparticle_float_input, float);
			MEMBER(noise_octaves, cparticle_float_input, int);
			MEMBER(noise_turbulence, cparticle_float_input, pfnoise_turbulence_t);
			MEMBER(noise_type, cparticle_float_input, pfnoise_type_t);
			MEMBER(noise_modifier, cparticle_float_input, pfnoise_modifier_t);
			MEMBER(noise_turbulence_scale, cparticle_float_input, float);
			MEMBER(noise_turbulence_mix, cparticle_float_input, float);
			MEMBER(noise_img_preview_scale, cparticle_float_input, float);
			MEMBER(noise_img_preview_live, cparticle_float_input, bool);
			MEMBER(no_camera_fallback, cparticle_float_input, float);
			MEMBER(use_bounds_center, cparticle_float_input, bool);
			MEMBER(input_mode, cparticle_float_input, particle_float_input_mode_t);
			MEMBER(mult_factor, cparticle_float_input, float);
			MEMBER(input0, cparticle_float_input, float);
			MEMBER(input1, cparticle_float_input, float);
			MEMBER(output0, cparticle_float_input, float);
			MEMBER(output1, cparticle_float_input, float);
			MEMBER(notched_range_min, cparticle_float_input, float);
			MEMBER(notched_range_max, cparticle_float_input, float);
			MEMBER(notched_output_outside, cparticle_float_input, float);
			MEMBER(notched_output_inside, cparticle_float_input, float);
			MEMBER(bias_type, cparticle_float_input, particle_float_bias_type_t);
			MEMBER(bias_parameter, cparticle_float_input, float);
			MEMBER(curve, cparticle_float_input, cpiecewise_curve);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cparticle_float_input : public cparticle_input

		class cparticle_collection_float_input : public cparticle_float_input
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cparticle_collection_float_input : public cparticle_float_input

		class cparticle_function
		{
		public:
			MEMBER(op_strength, cparticle_function, cparticle_collection_float_input);
			MEMBER(op_end_cap_state, cparticle_function, particle_endcap_mode_t);
			MEMBER(op_start_fade_in_time, cparticle_function, float);
			MEMBER(op_end_fade_in_time, cparticle_function, float);
			MEMBER(op_start_fade_out_time, cparticle_function, float);
			MEMBER(op_end_fade_out_time, cparticle_function, float);
			MEMBER(op_fade_oscillate_period, cparticle_function, float);
			MEMBER(normalize_to_stop_time, cparticle_function, bool);
			MEMBER(op_time_offset_min, cparticle_function, float);
			MEMBER(op_time_offset_max, cparticle_function, float);
			MEMBER(op_time_offset_seed, cparticle_function, int);
			MEMBER(op_time_scale_seed, cparticle_function, int);
			MEMBER(op_time_scale_min, cparticle_function, float);
			MEMBER(op_time_scale_max, cparticle_function, float);
			MEMBER(disable_operator, cparticle_function, bool);
			MEMBER(notes, cparticle_function, cutl_string);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cparticle_function

		class cparticle_function_initializer : public cparticle_function
		{
		public:
			MEMBER(associated_emitter_index, cparticle_function_initializer, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cparticle_function_initializer : public cparticle_function

		class init_remap_particle_count_to_scalar : public cparticle_function_initializer
		{
		public:
			MEMBER(field_output, init_remap_particle_count_to_scalar, particle_attribute_index_t);
			MEMBER(input_min, init_remap_particle_count_to_scalar, int);
			MEMBER(input_max, init_remap_particle_count_to_scalar, int);
			MEMBER(scale_control_point, init_remap_particle_count_to_scalar, int);
			MEMBER(scale_control_point_field, init_remap_particle_count_to_scalar, int);
			MEMBER(output_min, init_remap_particle_count_to_scalar, float);
			MEMBER(output_max, init_remap_particle_count_to_scalar, float);
			MEMBER(set_method, init_remap_particle_count_to_scalar, particle_set_method_t);
			MEMBER(active_range, init_remap_particle_count_to_scalar, bool);
			MEMBER(invert, init_remap_particle_count_to_scalar, bool);
			MEMBER(wrap, init_remap_particle_count_to_scalar, bool);
			MEMBER(remap_bias, init_remap_particle_count_to_scalar, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_remap_particle_count_to_scalar : public cparticle_function_initializer

		class cparticle_vec_input : public cparticle_input
		{
		public:
			MEMBER(type, cparticle_vec_input, particle_vec_type_t);
			MEMBER(v_literal_value, cparticle_vec_input, vector);
			MEMBER(literal_color, cparticle_vec_input, color);
			MEMBER(named_value, cparticle_vec_input, cparticle_named_value_ref);
			MEMBER(follow_named_value, cparticle_vec_input, bool);
			MEMBER(vector_attribute, cparticle_vec_input, particle_attribute_index_t);
			MEMBER(v_vector_attribute_scale, cparticle_vec_input, vector);
			MEMBER(control_point, cparticle_vec_input, int);
			MEMBER(delta_control_point, cparticle_vec_input, int);
			MEMBER(v_cpvalue_scale, cparticle_vec_input, vector);
			MEMBER(v_cprelative_position, cparticle_vec_input, vector);
			MEMBER(v_cprelative_dir, cparticle_vec_input, vector);
			MEMBER(float_component_x, cparticle_vec_input, cparticle_float_input);
			MEMBER(float_component_y, cparticle_vec_input, cparticle_float_input);
			MEMBER(float_component_z, cparticle_vec_input, cparticle_float_input);
			MEMBER(float_interp, cparticle_vec_input, cparticle_float_input);
			MEMBER(interp_input0, cparticle_vec_input, float);
			MEMBER(interp_input1, cparticle_vec_input, float);
			MEMBER(v_interp_output0, cparticle_vec_input, vector);
			MEMBER(v_interp_output1, cparticle_vec_input, vector);
			MEMBER(gradient, cparticle_vec_input, ccolor_gradient);
			MEMBER(v_random_min, cparticle_vec_input, vector);
			MEMBER(v_random_max, cparticle_vec_input, vector);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cparticle_vec_input : public cparticle_input

		class cparticle_function_operator : public cparticle_function
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cparticle_function_operator : public cparticle_function

		class cparticle_visibility_inputs
		{
		public:
			MEMBER(camera_bias, cparticle_visibility_inputs, float);
			MEMBER(cpin, cparticle_visibility_inputs, int);
			MEMBER(proxy_radius, cparticle_visibility_inputs, float);
			MEMBER(input_min, cparticle_visibility_inputs, float);
			MEMBER(input_max, cparticle_visibility_inputs, float);
			MEMBER(no_pixel_visibility_fallback, cparticle_visibility_inputs, float);
			MEMBER(distance_input_min, cparticle_visibility_inputs, float);
			MEMBER(distance_input_max, cparticle_visibility_inputs, float);
			MEMBER(dot_input_min, cparticle_visibility_inputs, float);
			MEMBER(dot_input_max, cparticle_visibility_inputs, float);
			MEMBER(dot_cpangles, cparticle_visibility_inputs, bool);
			MEMBER(dot_camera_angles, cparticle_visibility_inputs, bool);
			MEMBER(alpha_scale_min, cparticle_visibility_inputs, float);
			MEMBER(alpha_scale_max, cparticle_visibility_inputs, float);
			MEMBER(radius_scale_min, cparticle_visibility_inputs, float);
			MEMBER(radius_scale_max, cparticle_visibility_inputs, float);
			MEMBER(radius_scale_fovbase, cparticle_visibility_inputs, float);
			MEMBER(right_eye, cparticle_visibility_inputs, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cparticle_visibility_inputs

		class op_cycle_scalar : public cparticle_function_operator
		{
		public:
			MEMBER(dest_field, op_cycle_scalar, particle_attribute_index_t);
			MEMBER(start_value, op_cycle_scalar, float);
			MEMBER(end_value, op_cycle_scalar, float);
			MEMBER(cycle_time, op_cycle_scalar, float);
			MEMBER(do_not_repeat_cycle, op_cycle_scalar, bool);
			MEMBER(synchronize_particles, op_cycle_scalar, bool);
			MEMBER(cpscale, op_cycle_scalar, int);
			MEMBER(cpfield_min, op_cycle_scalar, int);
			MEMBER(cpfield_max, op_cycle_scalar, int);
			MEMBER(set_method, op_cycle_scalar, particle_set_method_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_cycle_scalar : public cparticle_function_operator

		class cper_particle_float_input : public cparticle_float_input
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cper_particle_float_input : public cparticle_float_input

		class cparticle_function_constraint : public cparticle_function
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cparticle_function_constraint : public cparticle_function

		class cparticle_function_renderer : public cparticle_function
		{
		public:
			MEMBER(visibility_inputs, cparticle_function_renderer, cparticle_visibility_inputs);
			MEMBER(cannot_be_refracted, cparticle_function_renderer, bool);
			MEMBER(skip_rendering_on_mobile, cparticle_function_renderer, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cparticle_function_renderer : public cparticle_function

		class op_set_per_child_control_point : public cparticle_function_operator
		{
		public:
			MEMBER(child_group_id, op_set_per_child_control_point, int);
			MEMBER(first_control_point, op_set_per_child_control_point, int);
			MEMBER(num_control_points, op_set_per_child_control_point, int);
			MEMBER(particle_increment, op_set_per_child_control_point, cparticle_collection_float_input);
			MEMBER(first_source_point, op_set_per_child_control_point, cparticle_collection_float_input);
			MEMBER(set_orientation, op_set_per_child_control_point, bool);
			MEMBER(orientation_field, op_set_per_child_control_point, particle_attribute_index_t);
			MEMBER(num_based_on_particle_count, op_set_per_child_control_point, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_set_per_child_control_point : public cparticle_function_operator

		class cparticle_transform_input : public cparticle_input
		{
		public:
			MEMBER(type, cparticle_transform_input, particle_transform_type_t);
			MEMBER(named_value, cparticle_transform_input, cparticle_named_value_ref);
			MEMBER(follow_named_value, cparticle_transform_input, bool);
			MEMBER(supports_disabled, cparticle_transform_input, bool);
			MEMBER(use_orientation, cparticle_transform_input, bool);
			MEMBER(control_point, cparticle_transform_input, int);
			MEMBER(control_point_range_max, cparticle_transform_input, int);
			MEMBER(end_cpgrowth_time, cparticle_transform_input, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cparticle_transform_input : public cparticle_input

		class cparticle_collection_renderer_float_input : public cparticle_collection_float_input
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cparticle_collection_renderer_float_input : public cparticle_collection_float_input

		class init_model_cull : public cparticle_function_initializer
		{
		public:
			MEMBER(control_point_number, init_model_cull, int);
			MEMBER(bound_box, init_model_cull, bool);
			MEMBER(cull_outside, init_model_cull, bool);
			MEMBER(use_bones, init_model_cull, bool);
			MEMBER_ARR(hitbox_set_name_arr, init_model_cull, 128, char);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_model_cull : public cparticle_function_initializer

		class cparticle_function_force : public cparticle_function
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cparticle_function_force : public cparticle_function

		struct point_definition_t
		{
			MEMBER(control_point, point_definition_t, int);
			MEMBER(local_coords, point_definition_t, bool);
			MEMBER(v_offset, point_definition_t, vector);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct point_definition_t

		class cgeneral_spin : public cparticle_function_operator
		{
		public:
			MEMBER(spin_rate_degrees, cgeneral_spin, int);
			MEMBER(spin_rate_min_degrees, cgeneral_spin, int);
			MEMBER(spin_rate_stop_time, cgeneral_spin, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cgeneral_spin : public cparticle_function_operator

		class cparticle_collection_vec_input : public cparticle_vec_input
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cparticle_collection_vec_input : public cparticle_vec_input

		class op_parent_vortices : public cparticle_function_force
		{
		public:
			MEMBER(force_scale, op_parent_vortices, float);
			MEMBER(vec_twist_axis, op_parent_vortices, vector);
			MEMBER(flip_based_on_yaw, op_parent_vortices, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_parent_vortices : public cparticle_function_force

		struct particle_control_point_driver_t
		{
			MEMBER(control_point, particle_control_point_driver_t, int);
			MEMBER(attach_type, particle_control_point_driver_t, particle_attachment_t);
			MEMBER(attachment_name, particle_control_point_driver_t, cutl_string);
			MEMBER(vec_offset, particle_control_point_driver_t, vector);
			MEMBER(ang_offset, particle_control_point_driver_t, qangle);
			MEMBER(entity_name, particle_control_point_driver_t, cutl_string);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct particle_control_point_driver_t

		class op_set_to_cp : public cparticle_function_operator
		{
		public:
			MEMBER(control_point_number, op_set_to_cp, int);
			MEMBER(vec_offset, op_set_to_cp, vector);
			MEMBER(offset_local, op_set_to_cp, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_set_to_cp : public cparticle_function_operator

		class cparticle_function_pre_emission : public cparticle_function_operator
		{
		public:
			MEMBER(run_once, cparticle_function_pre_emission, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cparticle_function_pre_emission : public cparticle_function_operator

		class init_quantize_float : public cparticle_function_initializer
		{
		public:
			MEMBER(input_value, init_quantize_float, cper_particle_float_input);
			MEMBER(output_field, init_quantize_float, particle_attribute_index_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_quantize_float : public cparticle_function_initializer

		class op_remap_particle_count_to_scalar : public cparticle_function_operator
		{
		public:
			MEMBER(field_output, op_remap_particle_count_to_scalar, particle_attribute_index_t);
			MEMBER(input_min, op_remap_particle_count_to_scalar, cparticle_collection_float_input);
			MEMBER(input_max, op_remap_particle_count_to_scalar, cparticle_collection_float_input);
			MEMBER(output_min, op_remap_particle_count_to_scalar, cparticle_collection_float_input);
			MEMBER(output_max, op_remap_particle_count_to_scalar, cparticle_collection_float_input);
			MEMBER(active_range, op_remap_particle_count_to_scalar, bool);
			MEMBER(set_method, op_remap_particle_count_to_scalar, particle_set_method_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_remap_particle_count_to_scalar : public cparticle_function_operator

		class iparticle_collection
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class iparticle_collection

		class op_vector_noise : public cparticle_function_operator
		{
		public:
			MEMBER(field_output, op_vector_noise, particle_attribute_index_t);
			MEMBER(vec_output_min, op_vector_noise, vector);
			MEMBER(vec_output_max, op_vector_noise, vector);
			MEMBER(fl4_noise_scale, op_vector_noise, float);
			MEMBER(additive, op_vector_noise, bool);
			MEMBER(offset, op_vector_noise, bool);
			MEMBER(noise_animation_time_scale, op_vector_noise, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_vector_noise : public cparticle_function_operator

		class op_force_control_point_stub : public cparticle_function_pre_emission
		{
		public:
			MEMBER(control_point, op_force_control_point_stub, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_force_control_point_stub : public cparticle_function_pre_emission

		class init_position_warp_scalar : public cparticle_function_initializer
		{
		public:
			MEMBER(vec_warp_min, init_position_warp_scalar, vector);
			MEMBER(vec_warp_max, init_position_warp_scalar, vector);
			MEMBER(input_value, init_position_warp_scalar, cper_particle_float_input);
			MEMBER(prev_pos_scale, init_position_warp_scalar, float);
			MEMBER(scale_control_point_number, init_position_warp_scalar, int);
			MEMBER(control_point_number, init_position_warp_scalar, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_position_warp_scalar : public cparticle_function_initializer

		class op_rope_spring_constraint : public cparticle_function_constraint
		{
		public:
			MEMBER(rest_length, op_rope_spring_constraint, cparticle_collection_float_input);
			MEMBER(min_distance, op_rope_spring_constraint, cparticle_collection_float_input);
			MEMBER(max_distance, op_rope_spring_constraint, cparticle_collection_float_input);
			MEMBER(adjustment_scale, op_rope_spring_constraint, float);
			MEMBER(initial_resting_length, op_rope_spring_constraint, cparticle_collection_float_input);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_rope_spring_constraint : public cparticle_function_constraint

		class op_set_control_point_orientation_to_cpvelocity : public cparticle_function_pre_emission
		{
		public:
			MEMBER(cpinput, op_set_control_point_orientation_to_cpvelocity, int);
			MEMBER(cpoutput, op_set_control_point_orientation_to_cpvelocity, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_set_control_point_orientation_to_cpvelocity : public cparticle_function_pre_emission

		class init_remap_named_model_element_to_scalar : public cparticle_function_initializer
		{
		public:
			MEMBER(h_model, init_remap_named_model_element_to_scalar, cstrong_handle<info_for_resource_type_cmodel>);
			MEMBER(names, init_remap_named_model_element_to_scalar, cutl_vector<cutl_string>);
			MEMBER(values, init_remap_named_model_element_to_scalar, cutl_vector<float>);
			MEMBER(field_input, init_remap_named_model_element_to_scalar, particle_attribute_index_t);
			MEMBER(field_output, init_remap_named_model_element_to_scalar, particle_attribute_index_t);
			MEMBER(set_method, init_remap_named_model_element_to_scalar, particle_set_method_t);
			MEMBER(model_from_renderer, init_remap_named_model_element_to_scalar, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_remap_named_model_element_to_scalar : public cparticle_function_initializer

		class cparticle_function_emitter : public cparticle_function
		{
		public:
			MEMBER(emitter_index, cparticle_function_emitter, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cparticle_function_emitter : public cparticle_function

		class cper_particle_vec_input : public cparticle_vec_input
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cper_particle_vec_input : public cparticle_vec_input

		class op_remap_speed : public cparticle_function_operator
		{
		public:
			MEMBER(field_output, op_remap_speed, particle_attribute_index_t);
			MEMBER(input_min, op_remap_speed, float);
			MEMBER(input_max, op_remap_speed, float);
			MEMBER(output_min, op_remap_speed, float);
			MEMBER(output_max, op_remap_speed, float);
			MEMBER(set_method, op_remap_speed, particle_set_method_t);
			MEMBER(ignore_delta, op_remap_speed, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_remap_speed : public cparticle_function_operator

		class op_world_collide_constraint : public cparticle_function_constraint
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_world_collide_constraint : public cparticle_function_constraint

		struct material_variable_t
		{
			MEMBER(str_variable, material_variable_t, cutl_string);
			MEMBER(variable_field, material_variable_t, particle_attribute_index_t);
			MEMBER(scale, material_variable_t, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct material_variable_t

		class init_set_rigid_attachment : public cparticle_function_initializer
		{
		public:
			MEMBER(control_point_number, init_set_rigid_attachment, int);
			MEMBER(field_input, init_set_rigid_attachment, particle_attribute_index_t);
			MEMBER(field_output, init_set_rigid_attachment, particle_attribute_index_t);
			MEMBER(local_space, init_set_rigid_attachment, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_set_rigid_attachment : public cparticle_function_initializer

		struct particle_preview_state_t
		{
			MEMBER(preview_model, particle_preview_state_t, cutl_string);
			MEMBER(mod_specific_data, particle_preview_state_t, uint32_t);
			MEMBER(ground_type, particle_preview_state_t, pet_ground_type_t);
			MEMBER(sequence_name, particle_preview_state_t, cutl_string);
			MEMBER(fire_particle_on_sequence_frame, particle_preview_state_t, int);
			MEMBER(hitbox_set_name, particle_preview_state_t, cutl_string);
			MEMBER(material_group_name, particle_preview_state_t, cutl_string);
			MEMBER(vec_body_groups, particle_preview_state_t, cutl_vector<particle_preview_body_group_t>);
			MEMBER(playback_speed, particle_preview_state_t, float);
			MEMBER(particle_simulation_rate, particle_preview_state_t, float);
			MEMBER(should_draw_hitboxes, particle_preview_state_t, bool);
			MEMBER(should_draw_attachments, particle_preview_state_t, bool);
			MEMBER(should_draw_attachment_names, particle_preview_state_t, bool);
			MEMBER(should_draw_control_point_axes, particle_preview_state_t, bool);
			MEMBER(animation_non_looping, particle_preview_state_t, bool);
			MEMBER(vec_preview_gravity, particle_preview_state_t, vector);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct particle_preview_state_t

		class op_remap_density_to_vector : public cparticle_function_operator
		{
		public:
			MEMBER(radius_scale, op_remap_density_to_vector, float);
			MEMBER(field_output, op_remap_density_to_vector, particle_attribute_index_t);
			MEMBER(density_min, op_remap_density_to_vector, float);
			MEMBER(density_max, op_remap_density_to_vector, float);
			MEMBER(vec_output_min, op_remap_density_to_vector, vector);
			MEMBER(vec_output_max, op_remap_density_to_vector, vector);
			MEMBER(use_parent_density, op_remap_density_to_vector, bool);
			MEMBER(voxel_grid_resolution, op_remap_density_to_vector, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_remap_density_to_vector : public cparticle_function_operator

		class op_force_based_on_distance_to_plane : public cparticle_function_force
		{
		public:
			MEMBER(min_dist, op_force_based_on_distance_to_plane, float);
			MEMBER(vec_force_at_min_dist, op_force_based_on_distance_to_plane, vector);
			MEMBER(max_dist, op_force_based_on_distance_to_plane, float);
			MEMBER(vec_force_at_max_dist, op_force_based_on_distance_to_plane, vector);
			MEMBER(vec_plane_normal, op_force_based_on_distance_to_plane, vector);
			MEMBER(control_point_number, op_force_based_on_distance_to_plane, int);
			MEMBER(exponent, op_force_based_on_distance_to_plane, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_force_based_on_distance_to_plane : public cparticle_function_force

		class op_end_cap_decay : public cparticle_function_operator
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_end_cap_decay : public cparticle_function_operator

		class init_distance_to_cpinit : public cparticle_function_initializer
		{
		public:
			MEMBER(field_output, init_distance_to_cpinit, particle_attribute_index_t);
			MEMBER(input_min, init_distance_to_cpinit, cper_particle_float_input);
			MEMBER(input_max, init_distance_to_cpinit, cper_particle_float_input);
			MEMBER(output_min, init_distance_to_cpinit, cper_particle_float_input);
			MEMBER(output_max, init_distance_to_cpinit, cper_particle_float_input);
			MEMBER(start_cp, init_distance_to_cpinit, int);
			MEMBER(los, init_distance_to_cpinit, bool);
			MEMBER_ARR(collision_group_name_arr, init_distance_to_cpinit, 128, char);
			MEMBER(trace_set, init_distance_to_cpinit, particle_trace_set_t);
			MEMBER(max_trace_length, init_distance_to_cpinit, cper_particle_float_input);
			MEMBER(losscale, init_distance_to_cpinit, float);
			MEMBER(set_method, init_distance_to_cpinit, particle_set_method_t);
			MEMBER(active_range, init_distance_to_cpinit, bool);
			MEMBER(vec_distance_scale, init_distance_to_cpinit, vector);
			MEMBER(remap_bias, init_distance_to_cpinit, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_distance_to_cpinit : public cparticle_function_initializer

		class op_enable_children_from_parent_particle_count : public cparticle_function_pre_emission
		{
		public:
			MEMBER(child_group_id, op_enable_children_from_parent_particle_count, int);
			MEMBER(first_child, op_enable_children_from_parent_particle_count, int);
			MEMBER(num_children_to_enable, op_enable_children_from_parent_particle_count, cparticle_collection_float_input);
			MEMBER(disable_children, op_enable_children_from_parent_particle_count, bool);
			MEMBER(play_endcap_on_stop, op_enable_children_from_parent_particle_count, bool);
			MEMBER(destroy_immediately, op_enable_children_from_parent_particle_count, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_enable_children_from_parent_particle_count : public cparticle_function_pre_emission

		class op_render_light_beam : public cparticle_function_renderer
		{
		public:
			MEMBER(v_color_blend, op_render_light_beam, cparticle_collection_vec_input);
			MEMBER(color_blend_type, op_render_light_beam, particle_color_blend_type_t);
			MEMBER(brightness_lumens_per_meter, op_render_light_beam, cparticle_collection_float_input);
			MEMBER(cast_shadows, op_render_light_beam, bool);
			MEMBER(skirt, op_render_light_beam, cparticle_collection_float_input);
			MEMBER(range, op_render_light_beam, cparticle_collection_float_input);
			MEMBER(thickness, op_render_light_beam, cparticle_collection_float_input);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_render_light_beam : public cparticle_function_renderer

		class op_render_flatten_grass : public cparticle_function_renderer
		{
		public:
			MEMBER(flatten_strength, op_render_flatten_grass, float);
			MEMBER(strength_field_override, op_render_flatten_grass, particle_attribute_index_t);
			MEMBER(radius_scale, op_render_flatten_grass, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_render_flatten_grass : public cparticle_function_renderer

		class op_movement_rigid_attach_to_cp : public cparticle_function_operator
		{
		public:
			MEMBER(control_point_number, op_movement_rigid_attach_to_cp, int);
			MEMBER(scale_control_point, op_movement_rigid_attach_to_cp, int);
			MEMBER(scale_cpfield, op_movement_rigid_attach_to_cp, int);
			MEMBER(field_input, op_movement_rigid_attach_to_cp, particle_attribute_index_t);
			MEMBER(field_output, op_movement_rigid_attach_to_cp, particle_attribute_index_t);
			MEMBER(offset_local, op_movement_rigid_attach_to_cp, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_movement_rigid_attach_to_cp : public cparticle_function_operator

		class init_chaotic_attractor : public cparticle_function_initializer
		{
		public:
			MEMBER(aparm, init_chaotic_attractor, float);
			MEMBER(bparm, init_chaotic_attractor, float);
			MEMBER(cparm, init_chaotic_attractor, float);
			MEMBER(dparm, init_chaotic_attractor, float);
			MEMBER(scale, init_chaotic_attractor, float);
			MEMBER(speed_min, init_chaotic_attractor, float);
			MEMBER(speed_max, init_chaotic_attractor, float);
			MEMBER(base_cp, init_chaotic_attractor, int);
			MEMBER(uniform_speed, init_chaotic_attractor, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_chaotic_attractor : public cparticle_function_initializer

		class op_ramp_scalar_linear_simple : public cparticle_function_operator
		{
		public:
			MEMBER(rate, op_ramp_scalar_linear_simple, float);
			MEMBER(start_time, op_ramp_scalar_linear_simple, float);
			MEMBER(end_time, op_ramp_scalar_linear_simple, float);
			MEMBER(field, op_ramp_scalar_linear_simple, particle_attribute_index_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_ramp_scalar_linear_simple : public cparticle_function_operator

		class init_inherit_from_parent_particles : public cparticle_function_initializer
		{
		public:
			MEMBER(scale, init_inherit_from_parent_particles, float);
			MEMBER(field_output, init_inherit_from_parent_particles, particle_attribute_index_t);
			MEMBER(increment, init_inherit_from_parent_particles, int);
			MEMBER(random_distribution, init_inherit_from_parent_particles, bool);
			MEMBER(random_seed, init_inherit_from_parent_particles, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_inherit_from_parent_particles : public cparticle_function_initializer

		class init_remap_particle_count_to_named_model_element_scalar : public init_remap_particle_count_to_scalar
		{
		public:
			MEMBER(h_model, init_remap_particle_count_to_named_model_element_scalar, cstrong_handle<info_for_resource_type_cmodel>);
			MEMBER(output_min_name, init_remap_particle_count_to_named_model_element_scalar, cutl_string);
			MEMBER(output_max_name, init_remap_particle_count_to_named_model_element_scalar, cutl_string);
			MEMBER(model_from_renderer, init_remap_particle_count_to_named_model_element_scalar, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_remap_particle_count_to_named_model_element_scalar : public init_remap_particle_count_to_scalar

		class op_set_gravity_to_cp : public cparticle_function_pre_emission
		{
		public:
			MEMBER(cpinput, op_set_gravity_to_cp, int);
			MEMBER(cpoutput, op_set_gravity_to_cp, int);
			MEMBER(scale, op_set_gravity_to_cp, cparticle_collection_float_input);
			MEMBER(set_orientation, op_set_gravity_to_cp, bool);
			MEMBER(set_zdown, op_set_gravity_to_cp, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_set_gravity_to_cp : public cparticle_function_pre_emission

		class init_random_color : public cparticle_function_initializer
		{
		public:
			MEMBER(color_min, init_random_color, color);
			MEMBER(color_max, init_random_color, color);
			MEMBER(tint_min, init_random_color, color);
			MEMBER(tint_max, init_random_color, color);
			MEMBER(tint_perc, init_random_color, float);
			MEMBER(update_threshold, init_random_color, float);
			MEMBER(tint_cp, init_random_color, int);
			MEMBER(field_output, init_random_color, particle_attribute_index_t);
			MEMBER(tint_blend_mode, init_random_color, particle_color_blend_mode_t);
			MEMBER(light_amplification, init_random_color, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_random_color : public cparticle_function_initializer

		class op_lerp_to_other_attribute : public cparticle_function_operator
		{
		public:
			MEMBER(interpolation, op_lerp_to_other_attribute, cper_particle_float_input);
			MEMBER(field_input_from, op_lerp_to_other_attribute, particle_attribute_index_t);
			MEMBER(field_input, op_lerp_to_other_attribute, particle_attribute_index_t);
			MEMBER(field_output, op_lerp_to_other_attribute, particle_attribute_index_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_lerp_to_other_attribute : public cparticle_function_operator

		class init_point_list : public cparticle_function_initializer
		{
		public:
			MEMBER(field_output, init_point_list, particle_attribute_index_t);
			MEMBER(point_list, init_point_list, cutl_vector<point_definition_t>);
			MEMBER(place_along_path, init_point_list, bool);
			MEMBER(closed_loop, init_point_list, bool);
			MEMBER(num_points_along_path, init_point_list, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_point_list : public cparticle_function_initializer

		class op_set_attribute_to_scalar_expression : public cparticle_function_operator
		{
		public:
			MEMBER(expression, op_set_attribute_to_scalar_expression, scalar_expression_type_t);
			MEMBER(input1, op_set_attribute_to_scalar_expression, cper_particle_float_input);
			MEMBER(input2, op_set_attribute_to_scalar_expression, cper_particle_float_input);
			MEMBER(output_field, op_set_attribute_to_scalar_expression, particle_attribute_index_t);
			MEMBER(set_method, op_set_attribute_to_scalar_expression, particle_set_method_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_set_attribute_to_scalar_expression : public cparticle_function_operator

		class cparticle_model_input : public cparticle_input
		{
		public:
			MEMBER(type, cparticle_model_input, particle_model_type_t);
			MEMBER(named_value, cparticle_model_input, cparticle_named_value_ref);
			MEMBER(control_point, cparticle_model_input, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cparticle_model_input : public cparticle_input

		class init_scale_velocity : public cparticle_function_initializer
		{
		public:
			MEMBER(vec_scale, init_scale_velocity, cparticle_collection_vec_input);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_scale_velocity : public cparticle_function_initializer

		class op_remap_named_model_element_end_cap : public cparticle_function_operator
		{
		public:
			MEMBER(h_model, op_remap_named_model_element_end_cap, cstrong_handle<info_for_resource_type_cmodel>);
			MEMBER(in_names, op_remap_named_model_element_end_cap, cutl_vector<cutl_string>);
			MEMBER(out_names, op_remap_named_model_element_end_cap, cutl_vector<cutl_string>);
			MEMBER(fallback_names, op_remap_named_model_element_end_cap, cutl_vector<cutl_string>);
			MEMBER(model_from_renderer, op_remap_named_model_element_end_cap, bool);
			MEMBER(field_input, op_remap_named_model_element_end_cap, particle_attribute_index_t);
			MEMBER(field_output, op_remap_named_model_element_end_cap, particle_attribute_index_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_remap_named_model_element_end_cap : public cparticle_function_operator

		class op_cpvelocity_force : public cparticle_function_force
		{
		public:
			MEMBER(control_point_number, op_cpvelocity_force, int);
			MEMBER(scale, op_cpvelocity_force, cper_particle_float_input);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_cpvelocity_force : public cparticle_function_force

		class init_create_spiral_sphere : public cparticle_function_initializer
		{
		public:
			MEMBER(control_point_number, init_create_spiral_sphere, int);
			MEMBER(override_cp, init_create_spiral_sphere, int);
			MEMBER(density, init_create_spiral_sphere, int);
			MEMBER(initial_radius, init_create_spiral_sphere, float);
			MEMBER(initial_speed_min, init_create_spiral_sphere, float);
			MEMBER(initial_speed_max, init_create_spiral_sphere, float);
			MEMBER(use_particle_count, init_create_spiral_sphere, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_create_spiral_sphere : public cparticle_function_initializer

		class op_lock_points : public cparticle_function_operator
		{
		public:
			MEMBER(min_col, op_lock_points, int);
			MEMBER(max_col, op_lock_points, int);
			MEMBER(min_row, op_lock_points, int);
			MEMBER(max_row, op_lock_points, int);
			MEMBER(control_point, op_lock_points, int);
			MEMBER(blend_value, op_lock_points, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_lock_points : public cparticle_function_operator

		class init_create_from_cps : public cparticle_function_initializer
		{
		public:
			MEMBER(increment, init_create_from_cps, int);
			MEMBER(min_cp, init_create_from_cps, int);
			MEMBER(max_cp, init_create_from_cps, int);
			MEMBER(dynamic_cpcount, init_create_from_cps, cparticle_collection_float_input);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_create_from_cps : public cparticle_function_initializer

		class op_planar_constraint : public cparticle_function_constraint
		{
		public:
			MEMBER(point_on_plane, op_planar_constraint, vector);
			MEMBER(plane_normal, op_planar_constraint, vector);
			MEMBER(control_point_number, op_planar_constraint, int);
			MEMBER(global_origin, op_planar_constraint, bool);
			MEMBER(global_normal, op_planar_constraint, bool);
			MEMBER(radius_scale, op_planar_constraint, cper_particle_float_input);
			MEMBER(maximum_distance_to_cp, op_planar_constraint, cparticle_collection_float_input);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_planar_constraint : public cparticle_function_constraint

		struct model_reference_t
		{
			MEMBER(model, model_reference_t, cstrong_handle<info_for_resource_type_cmodel>);
			MEMBER(relative_probability_of_spawn, model_reference_t, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct model_reference_t

		class op_selectively_enable_children : public cparticle_function_pre_emission
		{
		public:
			MEMBER(child_group_id, op_selectively_enable_children, cparticle_collection_float_input);
			MEMBER(first_child, op_selectively_enable_children, cparticle_collection_float_input);
			MEMBER(num_children_to_enable, op_selectively_enable_children, cparticle_collection_float_input);
			MEMBER(play_endcap_on_stop, op_selectively_enable_children, bool);
			MEMBER(destroy_immediately, op_selectively_enable_children, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_selectively_enable_children : public cparticle_function_pre_emission

		class init_sequence_from_cp : public cparticle_function_initializer
		{
		public:
			MEMBER(kill_unused, init_sequence_from_cp, bool);
			MEMBER(radius_scale, init_sequence_from_cp, bool);
			MEMBER(cp, init_sequence_from_cp, int);
			MEMBER(vec_offset, init_sequence_from_cp, vector);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_sequence_from_cp : public cparticle_function_initializer

		class op_noise_emitter : public cparticle_function_emitter
		{
		public:
			MEMBER(emission_duration, op_noise_emitter, float);
			MEMBER(start_time, op_noise_emitter, float);
			MEMBER(emission_scale, op_noise_emitter, float);
			MEMBER(scale_control_point, op_noise_emitter, int);
			MEMBER(scale_control_point_field, op_noise_emitter, int);
			MEMBER(world_noise_point, op_noise_emitter, int);
			MEMBER(abs_val, op_noise_emitter, bool);
			MEMBER(abs_val_inv, op_noise_emitter, bool);
			MEMBER(offset, op_noise_emitter, float);
			MEMBER(output_min, op_noise_emitter, float);
			MEMBER(output_max, op_noise_emitter, float);
			MEMBER(noise_scale, op_noise_emitter, float);
			MEMBER(world_noise_scale, op_noise_emitter, float);
			MEMBER(vec_offset_loc, op_noise_emitter, vector);
			MEMBER(world_time_scale, op_noise_emitter, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_noise_emitter : public cparticle_function_emitter

		class init_initial_sequence_from_model : public cparticle_function_initializer
		{
		public:
			MEMBER(control_point_number, init_initial_sequence_from_model, int);
			MEMBER(field_output, init_initial_sequence_from_model, particle_attribute_index_t);
			MEMBER(field_output_anim, init_initial_sequence_from_model, particle_attribute_index_t);
			MEMBER(input_min, init_initial_sequence_from_model, float);
			MEMBER(input_max, init_initial_sequence_from_model, float);
			MEMBER(output_min, init_initial_sequence_from_model, float);
			MEMBER(output_max, init_initial_sequence_from_model, float);
			MEMBER(set_method, init_initial_sequence_from_model, particle_set_method_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_initial_sequence_from_model : public cparticle_function_initializer

		class init_remap_scalar_to_vector : public cparticle_function_initializer
		{
		public:
			MEMBER(field_input, init_remap_scalar_to_vector, particle_attribute_index_t);
			MEMBER(field_output, init_remap_scalar_to_vector, particle_attribute_index_t);
			MEMBER(input_min, init_remap_scalar_to_vector, float);
			MEMBER(input_max, init_remap_scalar_to_vector, float);
			MEMBER(vec_output_min, init_remap_scalar_to_vector, vector);
			MEMBER(vec_output_max, init_remap_scalar_to_vector, vector);
			MEMBER(start_time, init_remap_scalar_to_vector, float);
			MEMBER(end_time, init_remap_scalar_to_vector, float);
			MEMBER(set_method, init_remap_scalar_to_vector, particle_set_method_t);
			MEMBER(control_point_number, init_remap_scalar_to_vector, int);
			MEMBER(local_coords, init_remap_scalar_to_vector, bool);
			MEMBER(remap_bias, init_remap_scalar_to_vector, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_remap_scalar_to_vector : public cparticle_function_initializer

		class init_remap_named_model_body_part_to_scalar : public init_remap_named_model_element_to_scalar
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_remap_named_model_body_part_to_scalar : public init_remap_named_model_element_to_scalar

		class op_radius_decay : public cparticle_function_operator
		{
		public:
			MEMBER(min_radius, op_radius_decay, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_radius_decay : public cparticle_function_operator

		class init_create_within_sphere_transform : public cparticle_function_initializer
		{
		public:
			MEMBER(radius_min, init_create_within_sphere_transform, cper_particle_float_input);
			MEMBER(radius_max, init_create_within_sphere_transform, cper_particle_float_input);
			MEMBER(vec_distance_bias, init_create_within_sphere_transform, cper_particle_vec_input);
			MEMBER(vec_distance_bias_abs, init_create_within_sphere_transform, vector);
			MEMBER(transform_input, init_create_within_sphere_transform, cparticle_transform_input);
			MEMBER(speed_min, init_create_within_sphere_transform, cper_particle_float_input);
			MEMBER(speed_max, init_create_within_sphere_transform, cper_particle_float_input);
			MEMBER(speed_rand_exp, init_create_within_sphere_transform, float);
			MEMBER(local_coords, init_create_within_sphere_transform, bool);
			MEMBER(end_cpgrowth_time, init_create_within_sphere_transform, float);
			MEMBER(local_coordinate_system_speed_min, init_create_within_sphere_transform, cper_particle_vec_input);
			MEMBER(local_coordinate_system_speed_max, init_create_within_sphere_transform, cper_particle_vec_input);
			MEMBER(field_output, init_create_within_sphere_transform, particle_attribute_index_t);
			MEMBER(field_velocity, init_create_within_sphere_transform, particle_attribute_index_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_create_within_sphere_transform : public cparticle_function_initializer

		class op_snapshot_skin_to_bones : public cparticle_function_operator
		{
		public:
			MEMBER(transform_normals, op_snapshot_skin_to_bones, bool);
			MEMBER(transform_radii, op_snapshot_skin_to_bones, bool);
			MEMBER(control_point_number, op_snapshot_skin_to_bones, int);
			MEMBER(life_time_fade_start, op_snapshot_skin_to_bones, float);
			MEMBER(life_time_fade_end, op_snapshot_skin_to_bones, float);
			MEMBER(jump_threshold, op_snapshot_skin_to_bones, float);
			MEMBER(prev_pos_scale, op_snapshot_skin_to_bones, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_snapshot_skin_to_bones : public cparticle_function_operator

		class op_set_cporientation_to_ground_normal : public cparticle_function_operator
		{
		public:
			MEMBER(interp_rate, op_set_cporientation_to_ground_normal, float);
			MEMBER(max_trace_length, op_set_cporientation_to_ground_normal, float);
			MEMBER(tolerance, op_set_cporientation_to_ground_normal, float);
			MEMBER(trace_offset, op_set_cporientation_to_ground_normal, float);
			MEMBER_ARR(collision_group_name_arr, op_set_cporientation_to_ground_normal, 128, char);
			MEMBER(trace_set, op_set_cporientation_to_ground_normal, particle_trace_set_t);
			MEMBER(input_cp, op_set_cporientation_to_ground_normal, int);
			MEMBER(output_cp, op_set_cporientation_to_ground_normal, int);
			MEMBER(include_water, op_set_cporientation_to_ground_normal, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_set_cporientation_to_ground_normal : public cparticle_function_operator

		class op_time_varying_force : public cparticle_function_force
		{
		public:
			MEMBER(start_lerp_time, op_time_varying_force, float);
			MEMBER(starting_force, op_time_varying_force, vector);
			MEMBER(end_lerp_time, op_time_varying_force, float);
			MEMBER(ending_force, op_time_varying_force, vector);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_time_varying_force : public cparticle_function_force

		struct texture_controls_t
		{
			MEMBER(final_texture_scale_u, texture_controls_t, cparticle_collection_renderer_float_input);
			MEMBER(final_texture_scale_v, texture_controls_t, cparticle_collection_renderer_float_input);
			MEMBER(final_texture_offset_u, texture_controls_t, cparticle_collection_renderer_float_input);
			MEMBER(final_texture_offset_v, texture_controls_t, cparticle_collection_renderer_float_input);
			MEMBER(final_texture_uvrotation, texture_controls_t, cparticle_collection_renderer_float_input);
			MEMBER(zoom_scale, texture_controls_t, cparticle_collection_renderer_float_input);
			MEMBER(distortion, texture_controls_t, cparticle_collection_renderer_float_input);
			MEMBER(randomize_offsets, texture_controls_t, bool);
			MEMBER(clamp_uvs, texture_controls_t, bool);
			MEMBER(per_particle_blend, texture_controls_t, sprite_card_per_particle_scale_t);
			MEMBER(per_particle_scale, texture_controls_t, sprite_card_per_particle_scale_t);
			MEMBER(per_particle_offset_u, texture_controls_t, sprite_card_per_particle_scale_t);
			MEMBER(per_particle_offset_v, texture_controls_t, sprite_card_per_particle_scale_t);
			MEMBER(per_particle_rotation, texture_controls_t, sprite_card_per_particle_scale_t);
			MEMBER(per_particle_zoom, texture_controls_t, sprite_card_per_particle_scale_t);
			MEMBER(per_particle_distortion, texture_controls_t, sprite_card_per_particle_scale_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct texture_controls_t

		class op_set_control_point_field_to_water : public cparticle_function_pre_emission
		{
		public:
			MEMBER(source_cp, op_set_control_point_field_to_water, int);
			MEMBER(dest_cp, op_set_control_point_field_to_water, int);
			MEMBER(cpfield, op_set_control_point_field_to_water, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_set_control_point_field_to_water : public cparticle_function_pre_emission

		class op_lerp_vector : public cparticle_function_operator
		{
		public:
			MEMBER(field_output, op_lerp_vector, particle_attribute_index_t);
			MEMBER(vec_output, op_lerp_vector, vector);
			MEMBER(start_time, op_lerp_vector, float);
			MEMBER(end_time, op_lerp_vector, float);
			MEMBER(set_method, op_lerp_vector, particle_set_method_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_lerp_vector : public cparticle_function_operator

		class init_initial_velocity_from_hitbox : public cparticle_function_initializer
		{
		public:
			MEMBER(velocity_min, init_initial_velocity_from_hitbox, float);
			MEMBER(velocity_max, init_initial_velocity_from_hitbox, float);
			MEMBER(control_point_number, init_initial_velocity_from_hitbox, int);
			MEMBER_ARR(hitbox_set_name_arr, init_initial_velocity_from_hitbox, 128, char);
			MEMBER(use_bones, init_initial_velocity_from_hitbox, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_initial_velocity_from_hitbox : public cparticle_function_initializer

		class init_radius_from_cpobject : public cparticle_function_initializer
		{
		public:
			MEMBER(control_point, init_radius_from_cpobject, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_radius_from_cpobject : public cparticle_function_initializer

		class init_global_scale : public cparticle_function_initializer
		{
		public:
			MEMBER(scale, init_global_scale, float);
			MEMBER(scale_control_point_number, init_global_scale, int);
			MEMBER(control_point_number, init_global_scale, int);
			MEMBER(scale_radius, init_global_scale, bool);
			MEMBER(scale_position, init_global_scale, bool);
			MEMBER(scale_velocity, init_global_scale, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_global_scale : public cparticle_function_initializer

		class op_hsvshift_to_cp : public cparticle_function_pre_emission
		{
		public:
			MEMBER(color_cp, op_hsvshift_to_cp, int);
			MEMBER(color_gem_enable_cp, op_hsvshift_to_cp, int);
			MEMBER(output_cp, op_hsvshift_to_cp, int);
			MEMBER(default_hsvcolor, op_hsvshift_to_cp, color);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_hsvshift_to_cp : public cparticle_function_pre_emission

		class op_remap_bounding_volumeto_cp : public cparticle_function_pre_emission
		{
		public:
			MEMBER(out_control_point_number, op_remap_bounding_volumeto_cp, int);
			MEMBER(input_min, op_remap_bounding_volumeto_cp, float);
			MEMBER(input_max, op_remap_bounding_volumeto_cp, float);
			MEMBER(output_min, op_remap_bounding_volumeto_cp, float);
			MEMBER(output_max, op_remap_bounding_volumeto_cp, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_remap_bounding_volumeto_cp : public cparticle_function_pre_emission

		class op_render_screen_shake : public cparticle_function_renderer
		{
		public:
			MEMBER(duration_scale, op_render_screen_shake, float);
			MEMBER(radius_scale, op_render_screen_shake, float);
			MEMBER(frequency_scale, op_render_screen_shake, float);
			MEMBER(amplitude_scale, op_render_screen_shake, float);
			MEMBER(radius_field, op_render_screen_shake, particle_attribute_index_t);
			MEMBER(duration_field, op_render_screen_shake, particle_attribute_index_t);
			MEMBER(frequency_field, op_render_screen_shake, particle_attribute_index_t);
			MEMBER(amplitude_field, op_render_screen_shake, particle_attribute_index_t);
			MEMBER(filter_cp, op_render_screen_shake, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_render_screen_shake : public cparticle_function_renderer

		class op_fade_in : public cparticle_function_operator
		{
		public:
			MEMBER(fade_in_time_min, op_fade_in, float);
			MEMBER(fade_in_time_max, op_fade_in, float);
			MEMBER(fade_in_time_exp, op_fade_in, float);
			MEMBER(proportional, op_fade_in, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_fade_in : public cparticle_function_operator

		class op_set_simulation_rate : public cparticle_function_pre_emission
		{
		public:
			MEMBER(simulation_scale, op_set_simulation_rate, cparticle_collection_float_input);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_set_simulation_rate : public cparticle_function_pre_emission

		class init_orient2_drel_to_cp : public cparticle_function_initializer
		{
		public:
			MEMBER(cp, init_orient2_drel_to_cp, int);
			MEMBER(field_output, init_orient2_drel_to_cp, particle_attribute_index_t);
			MEMBER(rot_offset, init_orient2_drel_to_cp, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_orient2_drel_to_cp : public cparticle_function_initializer

		class op_curl_noise_force : public cparticle_function_force
		{
		public:
			MEMBER(noise_type, op_curl_noise_force, particle_direction_noise_type_t);
			MEMBER(vec_noise_freq, op_curl_noise_force, cper_particle_vec_input);
			MEMBER(vec_noise_scale, op_curl_noise_force, cper_particle_vec_input);
			MEMBER(vec_offset, op_curl_noise_force, cper_particle_vec_input);
			MEMBER(vec_offset_rate, op_curl_noise_force, cper_particle_vec_input);
			MEMBER(worley_seed, op_curl_noise_force, cper_particle_float_input);
			MEMBER(worley_jitter, op_curl_noise_force, cper_particle_float_input);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_curl_noise_force : public cparticle_function_force

		class icontrol_point_editor_data
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class icontrol_point_editor_data

		class op_set_control_point_rotation : public cparticle_function_pre_emission
		{
		public:
			MEMBER(vec_rot_axis, op_set_control_point_rotation, cparticle_collection_vec_input);
			MEMBER(rot_rate, op_set_control_point_rotation, cparticle_collection_float_input);
			MEMBER(cp, op_set_control_point_rotation, int);
			MEMBER(local_cp, op_set_control_point_rotation, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_set_control_point_rotation : public cparticle_function_pre_emission

		class op_remap_cpto_cp : public cparticle_function_pre_emission
		{
		public:
			MEMBER(input_control_point, op_remap_cpto_cp, int);
			MEMBER(output_control_point, op_remap_cpto_cp, int);
			MEMBER(input_field, op_remap_cpto_cp, int);
			MEMBER(output_field, op_remap_cpto_cp, int);
			MEMBER(input_min, op_remap_cpto_cp, float);
			MEMBER(input_max, op_remap_cpto_cp, float);
			MEMBER(output_min, op_remap_cpto_cp, float);
			MEMBER(output_max, op_remap_cpto_cp, float);
			MEMBER(derivative, op_remap_cpto_cp, bool);
			MEMBER(interp_rate, op_remap_cpto_cp, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_remap_cpto_cp : public cparticle_function_pre_emission

		class op_remap_dot_product_to_scalar : public cparticle_function_operator
		{
		public:
			MEMBER(input_cp1, op_remap_dot_product_to_scalar, int);
			MEMBER(input_cp2, op_remap_dot_product_to_scalar, int);
			MEMBER(field_output, op_remap_dot_product_to_scalar, particle_attribute_index_t);
			MEMBER(input_min, op_remap_dot_product_to_scalar, float);
			MEMBER(input_max, op_remap_dot_product_to_scalar, float);
			MEMBER(output_min, op_remap_dot_product_to_scalar, float);
			MEMBER(output_max, op_remap_dot_product_to_scalar, float);
			MEMBER(use_particle_velocity, op_remap_dot_product_to_scalar, bool);
			MEMBER(set_method, op_remap_dot_product_to_scalar, particle_set_method_t);
			MEMBER(active_range, op_remap_dot_product_to_scalar, bool);
			MEMBER(use_particle_normal, op_remap_dot_product_to_scalar, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_remap_dot_product_to_scalar : public cparticle_function_operator

		class op_remap_average_scalar_valueto_cp : public cparticle_function_pre_emission
		{
		public:
			MEMBER(out_control_point_number, op_remap_average_scalar_valueto_cp, int);
			MEMBER(out_vector_field, op_remap_average_scalar_valueto_cp, int);
			MEMBER(field, op_remap_average_scalar_valueto_cp, particle_attribute_index_t);
			MEMBER(input_min, op_remap_average_scalar_valueto_cp, float);
			MEMBER(input_max, op_remap_average_scalar_valueto_cp, float);
			MEMBER(output_min, op_remap_average_scalar_valueto_cp, float);
			MEMBER(output_max, op_remap_average_scalar_valueto_cp, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_remap_average_scalar_valueto_cp : public cparticle_function_pre_emission

		class op_set_control_point_to_center : public cparticle_function_pre_emission
		{
		public:
			MEMBER(cp1, op_set_control_point_to_center, int);
			MEMBER(vec_cp1_pos, op_set_control_point_to_center, vector);
			MEMBER(set_parent, op_set_control_point_to_center, particle_parent_set_mode_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_set_control_point_to_center : public cparticle_function_pre_emission

		class op_remap_control_point_orientation_to_rotation : public cparticle_function_operator
		{
		public:
			MEMBER(cp, op_remap_control_point_orientation_to_rotation, int);
			MEMBER(field_output, op_remap_control_point_orientation_to_rotation, particle_attribute_index_t);
			MEMBER(offset_rot, op_remap_control_point_orientation_to_rotation, float);
			MEMBER(component, op_remap_control_point_orientation_to_rotation, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_remap_control_point_orientation_to_rotation : public cparticle_function_operator

		class op_distance_to_transform : public cparticle_function_operator
		{
		public:
			MEMBER(field_output, op_distance_to_transform, particle_attribute_index_t);
			MEMBER(input_min, op_distance_to_transform, cper_particle_float_input);
			MEMBER(input_max, op_distance_to_transform, cper_particle_float_input);
			MEMBER(output_min, op_distance_to_transform, cper_particle_float_input);
			MEMBER(output_max, op_distance_to_transform, cper_particle_float_input);
			MEMBER(transform_start, op_distance_to_transform, cparticle_transform_input);
			MEMBER(los, op_distance_to_transform, bool);
			MEMBER_ARR(collision_group_name_arr, op_distance_to_transform, 128, char);
			MEMBER(trace_set, op_distance_to_transform, particle_trace_set_t);
			MEMBER(max_trace_length, op_distance_to_transform, float);
			MEMBER(losscale, op_distance_to_transform, float);
			MEMBER(set_method, op_distance_to_transform, particle_set_method_t);
			MEMBER(active_range, op_distance_to_transform, bool);
			MEMBER(additive, op_distance_to_transform, bool);
			MEMBER(vec_component_scale, op_distance_to_transform, cper_particle_vec_input);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_distance_to_transform : public cparticle_function_operator

		class op_render_standard_light : public cparticle_function_renderer
		{
		public:
			MEMBER(light_type, op_render_standard_light, particle_light_type_choice_list_t);
			MEMBER(vec_color_scale, op_render_standard_light, cparticle_collection_vec_input);
			MEMBER(color_blend_type, op_render_standard_light, particle_color_blend_type_t);
			MEMBER(intensity, op_render_standard_light, cparticle_collection_float_input);
			MEMBER(cast_shadows, op_render_standard_light, bool);
			MEMBER(theta, op_render_standard_light, cparticle_collection_float_input);
			MEMBER(phi, op_render_standard_light, cparticle_collection_float_input);
			MEMBER(radius_multiplier, op_render_standard_light, cparticle_collection_float_input);
			MEMBER(attenuation_style, op_render_standard_light, standard_lighting_attenuation_style_t);
			MEMBER(falloff_linearity, op_render_standard_light, cparticle_collection_float_input);
			MEMBER(fifty_percent_falloff, op_render_standard_light, cparticle_collection_float_input);
			MEMBER(zero_percent_falloff, op_render_standard_light, cparticle_collection_float_input);
			MEMBER(render_diffuse, op_render_standard_light, bool);
			MEMBER(render_specular, op_render_standard_light, bool);
			MEMBER(light_cookie, op_render_standard_light, cutl_string);
			MEMBER(priority, op_render_standard_light, int);
			MEMBER(fog_lighting_mode, op_render_standard_light, particle_light_fog_lighting_mode_t);
			MEMBER(fog_contribution, op_render_standard_light, cparticle_collection_renderer_float_input);
			MEMBER(capsule_light_behavior, op_render_standard_light, particle_light_behavior_choice_list_t);
			MEMBER(capsule_length, op_render_standard_light, float);
			MEMBER(reverse_order, op_render_standard_light, bool);
			MEMBER(closed_loop, op_render_standard_light, bool);
			MEMBER(prev_pnt_source, op_render_standard_light, particle_attribute_index_t);
			MEMBER(max_length, op_render_standard_light, float);
			MEMBER(min_length, op_render_standard_light, float);
			MEMBER(ignore_dt, op_render_standard_light, bool);
			MEMBER(constrain_radius_to_length_ratio, op_render_standard_light, float);
			MEMBER(length_scale, op_render_standard_light, float);
			MEMBER(length_fade_in_time, op_render_standard_light, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_render_standard_light : public cparticle_function_renderer

		class cparticle_variable_ref
		{
		public:
			MEMBER(variable_name, cparticle_variable_ref, ckv3_member_name_with_storage);
			MEMBER(variable_type, cparticle_variable_ref, pulse_value_type_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cparticle_variable_ref

		class op_wind_force : public cparticle_function_force
		{
		public:
			MEMBER(v_force, op_wind_force, vector);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_wind_force : public cparticle_function_force

		struct float_input_material_variable_t
		{
			MEMBER(str_variable, float_input_material_variable_t, cutl_string);
			MEMBER(input, float_input_material_variable_t, cparticle_collection_float_input);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct float_input_material_variable_t

		class iparticle_system_definition
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class iparticle_system_definition

		class init_remap_cpto_scalar : public cparticle_function_initializer
		{
		public:
			MEMBER(cpinput, init_remap_cpto_scalar, int);
			MEMBER(field_output, init_remap_cpto_scalar, particle_attribute_index_t);
			MEMBER(field, init_remap_cpto_scalar, int);
			MEMBER(input_min, init_remap_cpto_scalar, float);
			MEMBER(input_max, init_remap_cpto_scalar, float);
			MEMBER(output_min, init_remap_cpto_scalar, float);
			MEMBER(output_max, init_remap_cpto_scalar, float);
			MEMBER(start_time, init_remap_cpto_scalar, float);
			MEMBER(end_time, init_remap_cpto_scalar, float);
			MEMBER(set_method, init_remap_cpto_scalar, particle_set_method_t);
			MEMBER(remap_bias, init_remap_cpto_scalar, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_remap_cpto_scalar : public cparticle_function_initializer

		class op_render_status_effect_citadel : public cparticle_function_renderer
		{
		public:
			MEMBER(texture_color_warp, op_render_status_effect_citadel, cstrong_handle<info_for_resource_type_ctexture_base>);
			MEMBER(texture_normal, op_render_status_effect_citadel, cstrong_handle<info_for_resource_type_ctexture_base>);
			MEMBER(texture_metalness, op_render_status_effect_citadel, cstrong_handle<info_for_resource_type_ctexture_base>);
			MEMBER(texture_roughness, op_render_status_effect_citadel, cstrong_handle<info_for_resource_type_ctexture_base>);
			MEMBER(texture_self_illum, op_render_status_effect_citadel, cstrong_handle<info_for_resource_type_ctexture_base>);
			MEMBER(texture_detail, op_render_status_effect_citadel, cstrong_handle<info_for_resource_type_ctexture_base>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_render_status_effect_citadel : public cparticle_function_renderer

		class op_clamp_vector : public cparticle_function_operator
		{
		public:
			MEMBER(field_output, op_clamp_vector, particle_attribute_index_t);
			MEMBER(vec_output_min, op_clamp_vector, cper_particle_vec_input);
			MEMBER(vec_output_max, op_clamp_vector, cper_particle_vec_input);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_clamp_vector : public cparticle_function_operator

		class init_remap_named_model_mesh_group_to_scalar : public init_remap_named_model_element_to_scalar
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_remap_named_model_mesh_group_to_scalar : public init_remap_named_model_element_to_scalar

		class cpath_parameters
		{
		public:
			MEMBER(start_control_point_number, cpath_parameters, int);
			MEMBER(end_control_point_number, cpath_parameters, int);
			MEMBER(bulge_control, cpath_parameters, int);
			MEMBER(bulge, cpath_parameters, float);
			MEMBER(mid_point, cpath_parameters, float);
			MEMBER(v_start_point_offset, cpath_parameters, vector);
			MEMBER(v_mid_point_offset, cpath_parameters, vector);
			MEMBER(v_end_offset, cpath_parameters, vector);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpath_parameters

		class op_spin_yaw : public cgeneral_spin
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_spin_yaw : public cgeneral_spin

		class op_stop_after_cpduration : public cparticle_function_pre_emission
		{
		public:
			MEMBER(duration, op_stop_after_cpduration, cparticle_collection_float_input);
			MEMBER(destroy_immediately, op_stop_after_cpduration, bool);
			MEMBER(play_end_cap, op_stop_after_cpduration, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_stop_after_cpduration : public cparticle_function_pre_emission

		class op_remap_named_model_body_part_end_cap : public op_remap_named_model_element_end_cap
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_remap_named_model_body_part_end_cap : public op_remap_named_model_element_end_cap

		class op_maintain_sequential_path : public cparticle_function_operator
		{
		public:
			MEMBER(max_distance, op_maintain_sequential_path, float);
			MEMBER(num_to_assign, op_maintain_sequential_path, float);
			MEMBER(cohesion_strength, op_maintain_sequential_path, float);
			MEMBER(tolerance, op_maintain_sequential_path, float);
			MEMBER(loop, op_maintain_sequential_path, bool);
			MEMBER(use_particle_count, op_maintain_sequential_path, bool);
			MEMBER(path_params, op_maintain_sequential_path, cpath_parameters);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_maintain_sequential_path : public cparticle_function_operator

		class op_set_control_point_from_object_scale : public cparticle_function_pre_emission
		{
		public:
			MEMBER(cpinput, op_set_control_point_from_object_scale, int);
			MEMBER(cpoutput, op_set_control_point_from_object_scale, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_set_control_point_from_object_scale : public cparticle_function_pre_emission

		class op_remap_named_model_element_once_timed : public cparticle_function_operator
		{
		public:
			MEMBER(h_model, op_remap_named_model_element_once_timed, cstrong_handle<info_for_resource_type_cmodel>);
			MEMBER(in_names, op_remap_named_model_element_once_timed, cutl_vector<cutl_string>);
			MEMBER(out_names, op_remap_named_model_element_once_timed, cutl_vector<cutl_string>);
			MEMBER(fallback_names, op_remap_named_model_element_once_timed, cutl_vector<cutl_string>);
			MEMBER(model_from_renderer, op_remap_named_model_element_once_timed, bool);
			MEMBER(proportional, op_remap_named_model_element_once_timed, bool);
			MEMBER(field_input, op_remap_named_model_element_once_timed, particle_attribute_index_t);
			MEMBER(field_output, op_remap_named_model_element_once_timed, particle_attribute_index_t);
			MEMBER(remap_time, op_remap_named_model_element_once_timed, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_remap_named_model_element_once_timed : public cparticle_function_operator

		class op_ramp_scalar_spline : public cparticle_function_operator
		{
		public:
			MEMBER(rate_min, op_ramp_scalar_spline, float);
			MEMBER(rate_max, op_ramp_scalar_spline, float);
			MEMBER(start_time_min, op_ramp_scalar_spline, float);
			MEMBER(start_time_max, op_ramp_scalar_spline, float);
			MEMBER(end_time_min, op_ramp_scalar_spline, float);
			MEMBER(end_time_max, op_ramp_scalar_spline, float);
			MEMBER(bias, op_ramp_scalar_spline, float);
			MEMBER(field, op_ramp_scalar_spline, particle_attribute_index_t);
			MEMBER(proportional_op, op_ramp_scalar_spline, bool);
			MEMBER(ease_out, op_ramp_scalar_spline, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_ramp_scalar_spline : public cparticle_function_operator

		class op_color_interpolate : public cparticle_function_operator
		{
		public:
			MEMBER(color_fade, op_color_interpolate, color);
			MEMBER(fade_start_time, op_color_interpolate, float);
			MEMBER(fade_end_time, op_color_interpolate, float);
			MEMBER(field_output, op_color_interpolate, particle_attribute_index_t);
			MEMBER(ease_in_out, op_color_interpolate, bool);
			MEMBER(use_new_code, op_color_interpolate, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_color_interpolate : public cparticle_function_operator

		class particle_world_handle__
		{
		public:
			MEMBER(unused, particle_world_handle__, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class particle_world_handle__

		class op_fade_and_kill : public cparticle_function_operator
		{
		public:
			MEMBER(start_fade_in_time, op_fade_and_kill, float);
			MEMBER(end_fade_in_time, op_fade_and_kill, float);
			MEMBER(start_fade_out_time, op_fade_and_kill, float);
			MEMBER(end_fade_out_time, op_fade_and_kill, float);
			MEMBER(start_alpha, op_fade_and_kill, float);
			MEMBER(end_alpha, op_fade_and_kill, float);
			MEMBER(force_preserve_particle_order, op_fade_and_kill, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_fade_and_kill : public cparticle_function_operator

		class init_remap_initial_transform_direction_to_rotation : public cparticle_function_initializer
		{
		public:
			MEMBER(transform_input, init_remap_initial_transform_direction_to_rotation, cparticle_transform_input);
			MEMBER(field_output, init_remap_initial_transform_direction_to_rotation, particle_attribute_index_t);
			MEMBER(offset_rot, init_remap_initial_transform_direction_to_rotation, float);
			MEMBER(component, init_remap_initial_transform_direction_to_rotation, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_remap_initial_transform_direction_to_rotation : public cparticle_function_initializer

		class init_position_offset_to_cp : public cparticle_function_initializer
		{
		public:
			MEMBER(control_point_number_start, init_position_offset_to_cp, int);
			MEMBER(control_point_number_end, init_position_offset_to_cp, int);
			MEMBER(local_coords, init_position_offset_to_cp, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_position_offset_to_cp : public cparticle_function_initializer

		class op_maintain_emitter : public cparticle_function_emitter
		{
		public:
			MEMBER(particles_to_maintain, op_maintain_emitter, cparticle_collection_float_input);
			MEMBER(start_time, op_maintain_emitter, float);
			MEMBER(emission_duration, op_maintain_emitter, cparticle_collection_float_input);
			MEMBER(emission_rate, op_maintain_emitter, float);
			MEMBER(snapshot_control_point, op_maintain_emitter, int);
			MEMBER(emit_instantaneously, op_maintain_emitter, bool);
			MEMBER(final_emit_on_stop, op_maintain_emitter, bool);
			MEMBER(scale, op_maintain_emitter, cparticle_collection_float_input);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_maintain_emitter : public cparticle_function_emitter

		class init_velocity_from_normal : public cparticle_function_initializer
		{
		public:
			MEMBER(speed_min, init_velocity_from_normal, float);
			MEMBER(speed_max, init_velocity_from_normal, float);
			MEMBER(ignore_dt, init_velocity_from_normal, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_velocity_from_normal : public cparticle_function_initializer

		class op_max_velocity : public cparticle_function_operator
		{
		public:
			MEMBER(max_velocity, op_max_velocity, float);
			MEMBER(min_velocity, op_max_velocity, float);
			MEMBER(override_cp, op_max_velocity, int);
			MEMBER(override_cpfield, op_max_velocity, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_max_velocity : public cparticle_function_operator

		class op_render_projected : public cparticle_function_renderer
		{
		public:
			MEMBER(project_character, op_render_projected, bool);
			MEMBER(project_world, op_render_projected, bool);
			MEMBER(project_water, op_render_projected, bool);
			MEMBER(flip_horizontal, op_render_projected, bool);
			MEMBER(enable_projected_depth_controls, op_render_projected, bool);
			MEMBER(min_projection_depth, op_render_projected, float);
			MEMBER(max_projection_depth, op_render_projected, float);
			MEMBER(h_projected_material, op_render_projected, cstrong_handle<info_for_resource_type_imaterial2>);
			MEMBER(animation_time_scale, op_render_projected, float);
			MEMBER(orient_to_normal, op_render_projected, bool);
			MEMBER(material_vars, op_render_projected, cutl_vector<material_variable_t>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_render_projected : public cparticle_function_renderer

		class init_random_named_model_element : public cparticle_function_initializer
		{
		public:
			MEMBER(h_model, init_random_named_model_element, cstrong_handle<info_for_resource_type_cmodel>);
			MEMBER(names, init_random_named_model_element, cutl_vector<cutl_string>);
			MEMBER(shuffle, init_random_named_model_element, bool);
			MEMBER(linear, init_random_named_model_element, bool);
			MEMBER(model_from_renderer, init_random_named_model_element, bool);
			MEMBER(field_output, init_random_named_model_element, particle_attribute_index_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_random_named_model_element : public cparticle_function_initializer

		class op_per_particle_force : public cparticle_function_force
		{
		public:
			MEMBER(force_scale, op_per_particle_force, cper_particle_float_input);
			MEMBER(v_force, op_per_particle_force, cper_particle_vec_input);
			MEMBER(cp, op_per_particle_force, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_per_particle_force : public cparticle_function_force

		class op_inherit_from_peer_system : public cparticle_function_operator
		{
		public:
			MEMBER(field_output, op_inherit_from_peer_system, particle_attribute_index_t);
			MEMBER(field_input, op_inherit_from_peer_system, particle_attribute_index_t);
			MEMBER(increment, op_inherit_from_peer_system, int);
			MEMBER(group_id, op_inherit_from_peer_system, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_inherit_from_peer_system : public cparticle_function_operator

		class init_create_on_model : public cparticle_function_initializer
		{
		public:
			MEMBER(model_input, init_create_on_model, cparticle_model_input);
			MEMBER(transform_input, init_create_on_model, cparticle_transform_input);
			MEMBER(force_in_model, init_create_on_model, int);
			MEMBER(desired_hitbox, init_create_on_model, int);
			MEMBER(hitbox_value_from_control_point_index, init_create_on_model, int);
			MEMBER(vec_hit_box_scale, init_create_on_model, cparticle_collection_vec_input);
			MEMBER(bone_velocity, init_create_on_model, float);
			MEMBER(max_bone_velocity, init_create_on_model, float);
			MEMBER(vec_direction_bias, init_create_on_model, cparticle_collection_vec_input);
			MEMBER_ARR(hitbox_set_name_arr, init_create_on_model, 128, char);
			MEMBER(local_coords, init_create_on_model, bool);
			MEMBER(use_bones, init_create_on_model, bool);
			MEMBER(shell_size, init_create_on_model, cparticle_collection_float_input);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_create_on_model : public cparticle_function_initializer

		class init_init_float : public cparticle_function_initializer
		{
		public:
			MEMBER(input_value, init_init_float, cper_particle_float_input);
			MEMBER(output_field, init_init_float, particle_attribute_index_t);
			MEMBER(set_method, init_init_float, particle_set_method_t);
			MEMBER(input_strength, init_init_float, cper_particle_float_input);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_init_float : public cparticle_function_initializer

		class op_movement_rotate_particle_around_axis : public cparticle_function_operator
		{
		public:
			MEMBER(vec_rot_axis, op_movement_rotate_particle_around_axis, cparticle_collection_vec_input);
			MEMBER(rot_rate, op_movement_rotate_particle_around_axis, cparticle_collection_float_input);
			MEMBER(transform_input, op_movement_rotate_particle_around_axis, cparticle_transform_input);
			MEMBER(local_space, op_movement_rotate_particle_around_axis, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_movement_rotate_particle_around_axis : public cparticle_function_operator

		class cparticle_remap_float_input : public cparticle_float_input
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cparticle_remap_float_input : public cparticle_float_input

		class op_set_control_point_positions : public cparticle_function_pre_emission
		{
		public:
			MEMBER(use_world_location, op_set_control_point_positions, bool);
			MEMBER(orient, op_set_control_point_positions, bool);
			MEMBER(set_once, op_set_control_point_positions, bool);
			MEMBER(cp1, op_set_control_point_positions, int);
			MEMBER(cp2, op_set_control_point_positions, int);
			MEMBER(cp3, op_set_control_point_positions, int);
			MEMBER(cp4, op_set_control_point_positions, int);
			MEMBER(vec_cp1_pos, op_set_control_point_positions, vector);
			MEMBER(vec_cp2_pos, op_set_control_point_positions, vector);
			MEMBER(vec_cp3_pos, op_set_control_point_positions, vector);
			MEMBER(vec_cp4_pos, op_set_control_point_positions, vector);
			MEMBER(head_location, op_set_control_point_positions, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_set_control_point_positions : public cparticle_function_pre_emission

		class op_constrain_distance_to_user_specified_path : public cparticle_function_constraint
		{
		public:
			MEMBER(min_distance, op_constrain_distance_to_user_specified_path, float);
			MEMBER(max_distance, op_constrain_distance_to_user_specified_path, float);
			MEMBER(time_scale, op_constrain_distance_to_user_specified_path, float);
			MEMBER(looped_path, op_constrain_distance_to_user_specified_path, bool);
			MEMBER(point_list, op_constrain_distance_to_user_specified_path, cutl_vector<point_definition_with_time_values_t>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_constrain_distance_to_user_specified_path : public cparticle_function_constraint

		class init_create_in_epitrochoid : public cparticle_function_initializer
		{
		public:
			MEMBER(component1, init_create_in_epitrochoid, int);
			MEMBER(component2, init_create_in_epitrochoid, int);
			MEMBER(transform_input, init_create_in_epitrochoid, cparticle_transform_input);
			MEMBER(particle_density, init_create_in_epitrochoid, cper_particle_float_input);
			MEMBER(offset, init_create_in_epitrochoid, cper_particle_float_input);
			MEMBER(radius1, init_create_in_epitrochoid, cper_particle_float_input);
			MEMBER(radius2, init_create_in_epitrochoid, cper_particle_float_input);
			MEMBER(use_count, init_create_in_epitrochoid, bool);
			MEMBER(use_local_coords, init_create_in_epitrochoid, bool);
			MEMBER(offset_existing_pos, init_create_in_epitrochoid, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_create_in_epitrochoid : public cparticle_function_initializer

		class op_density_force : public cparticle_function_force
		{
		public:
			MEMBER(radius_scale, op_density_force, float);
			MEMBER(force_scale, op_density_force, float);
			MEMBER(target_density, op_density_force, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_density_force : public cparticle_function_force

		class init_create_particle_impulse : public cparticle_function_initializer
		{
		public:
			MEMBER(input_radius, init_create_particle_impulse, cper_particle_float_input);
			MEMBER(input_magnitude, init_create_particle_impulse, cper_particle_float_input);
			MEMBER(falloff_function, init_create_particle_impulse, particle_falloff_function_t);
			MEMBER(input_falloff_exp, init_create_particle_impulse, cper_particle_float_input);
			MEMBER(impulse_type, init_create_particle_impulse, particle_impulse_type_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_create_particle_impulse : public cparticle_function_initializer

		class op_remap_cpto_vector : public cparticle_function_operator
		{
		public:
			MEMBER(cpinput, op_remap_cpto_vector, int);
			MEMBER(field_output, op_remap_cpto_vector, particle_attribute_index_t);
			MEMBER(local_space_cp, op_remap_cpto_vector, int);
			MEMBER(v_input_min, op_remap_cpto_vector, vector);
			MEMBER(v_input_max, op_remap_cpto_vector, vector);
			MEMBER(v_output_min, op_remap_cpto_vector, vector);
			MEMBER(v_output_max, op_remap_cpto_vector, vector);
			MEMBER(start_time, op_remap_cpto_vector, float);
			MEMBER(end_time, op_remap_cpto_vector, float);
			MEMBER(interp_rate, op_remap_cpto_vector, float);
			MEMBER(set_method, op_remap_cpto_vector, particle_set_method_t);
			MEMBER(offset, op_remap_cpto_vector, bool);
			MEMBER(accelerate, op_remap_cpto_vector, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_remap_cpto_vector : public cparticle_function_operator

		class op_pin_particle_to_cp : public cparticle_function_operator
		{
		public:
			MEMBER(control_point_number, op_pin_particle_to_cp, int);
			MEMBER(vec_offset, op_pin_particle_to_cp, cparticle_collection_vec_input);
			MEMBER(offset_local, op_pin_particle_to_cp, bool);
			MEMBER(particle_selection, op_pin_particle_to_cp, particle_selection_t);
			MEMBER(particle_number, op_pin_particle_to_cp, cparticle_collection_float_input);
			MEMBER(pin_break_type, op_pin_particle_to_cp, particle_pin_distance_t);
			MEMBER(break_distance, op_pin_particle_to_cp, cparticle_collection_float_input);
			MEMBER(break_speed, op_pin_particle_to_cp, cparticle_collection_float_input);
			MEMBER(age, op_pin_particle_to_cp, cparticle_collection_float_input);
			MEMBER(break_control_point_number, op_pin_particle_to_cp, int);
			MEMBER(break_control_point_number2, op_pin_particle_to_cp, int);
			MEMBER(break_value, op_pin_particle_to_cp, cparticle_collection_float_input);
			MEMBER(interpolation, op_pin_particle_to_cp, cper_particle_float_input);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_pin_particle_to_cp : public cparticle_function_operator

		class op_rt_env_cull : public cparticle_function_operator
		{
		public:
			MEMBER(vec_test_dir, op_rt_env_cull, vector);
			MEMBER(vec_test_normal, op_rt_env_cull, vector);
			MEMBER(cull_on_miss, op_rt_env_cull, bool);
			MEMBER(stick_instead_of_cull, op_rt_env_cull, bool);
			MEMBER_ARR(rt_env_name_arr, op_rt_env_cull, 128, char);
			MEMBER(rtenv_cp, op_rt_env_cull, int);
			MEMBER(component, op_rt_env_cull, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_rt_env_cull : public cparticle_function_operator

		class op_drive_cpfrom_global_sound_float : public cparticle_function_pre_emission
		{
		public:
			MEMBER(output_control_point, op_drive_cpfrom_global_sound_float, int);
			MEMBER(output_field, op_drive_cpfrom_global_sound_float, int);
			MEMBER(input_min, op_drive_cpfrom_global_sound_float, float);
			MEMBER(input_max, op_drive_cpfrom_global_sound_float, float);
			MEMBER(output_min, op_drive_cpfrom_global_sound_float, float);
			MEMBER(output_max, op_drive_cpfrom_global_sound_float, float);
			MEMBER(stack_name, op_drive_cpfrom_global_sound_float, cutl_string);
			MEMBER(operator_name, op_drive_cpfrom_global_sound_float, cutl_string);
			MEMBER(field_name, op_drive_cpfrom_global_sound_float, cutl_string);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_drive_cpfrom_global_sound_float : public cparticle_function_pre_emission

		class op_remap_direction_to_cpto_vector : public cparticle_function_operator
		{
		public:
			MEMBER(cp, op_remap_direction_to_cpto_vector, int);
			MEMBER(field_output, op_remap_direction_to_cpto_vector, particle_attribute_index_t);
			MEMBER(scale, op_remap_direction_to_cpto_vector, float);
			MEMBER(offset_rot, op_remap_direction_to_cpto_vector, float);
			MEMBER(vec_offset_axis, op_remap_direction_to_cpto_vector, vector);
			MEMBER(normalize, op_remap_direction_to_cpto_vector, bool);
			MEMBER(field_strength, op_remap_direction_to_cpto_vector, particle_attribute_index_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_remap_direction_to_cpto_vector : public cparticle_function_operator

		class op_chladni_wave : public cparticle_function_operator
		{
		public:
			MEMBER(field_output, op_chladni_wave, particle_attribute_index_t);
			MEMBER(input_min, op_chladni_wave, cper_particle_float_input);
			MEMBER(input_max, op_chladni_wave, cper_particle_float_input);
			MEMBER(output_min, op_chladni_wave, cper_particle_float_input);
			MEMBER(output_max, op_chladni_wave, cper_particle_float_input);
			MEMBER(vec_wave_length, op_chladni_wave, cper_particle_vec_input);
			MEMBER(vec_harmonics, op_chladni_wave, cper_particle_vec_input);
			MEMBER(set_method, op_chladni_wave, particle_set_method_t);
			MEMBER(local_space_control_point, op_chladni_wave, int);
			MEMBER(b3_d, op_chladni_wave, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_chladni_wave : public cparticle_function_operator

		class op_set_child_control_points : public cparticle_function_operator
		{
		public:
			MEMBER(child_group_id, op_set_child_control_points, int);
			MEMBER(first_control_point, op_set_child_control_points, int);
			MEMBER(num_control_points, op_set_child_control_points, int);
			MEMBER(first_source_point, op_set_child_control_points, cparticle_collection_float_input);
			MEMBER(reverse, op_set_child_control_points, bool);
			MEMBER(set_orientation, op_set_child_control_points, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_set_child_control_points : public cparticle_function_operator

		class op_shape_matching_constraint : public cparticle_function_constraint
		{
		public:
			MEMBER(shape_restoration_time, op_shape_matching_constraint, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_shape_matching_constraint : public cparticle_function_constraint

		class init_normal_align_to_cp : public cparticle_function_initializer
		{
		public:
			MEMBER(transform_input, init_normal_align_to_cp, cparticle_transform_input);
			MEMBER(control_point_axis, init_normal_align_to_cp, particle_control_point_axis_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_normal_align_to_cp : public cparticle_function_initializer

		class crandom_number_generator_parameters
		{
		public:
			MEMBER(distribute_evenly, crandom_number_generator_parameters, bool);
			MEMBER(seed, crandom_number_generator_parameters, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class crandom_number_generator_parameters

		class op_set_control_point_to_water_surface : public cparticle_function_pre_emission
		{
		public:
			MEMBER(source_cp, op_set_control_point_to_water_surface, int);
			MEMBER(dest_cp, op_set_control_point_to_water_surface, int);
			MEMBER(flow_cp, op_set_control_point_to_water_surface, int);
			MEMBER(active_cp, op_set_control_point_to_water_surface, int);
			MEMBER(active_cpfield, op_set_control_point_to_water_surface, int);
			MEMBER(retest_rate, op_set_control_point_to_water_surface, cparticle_collection_float_input);
			MEMBER(adaptive_threshold, op_set_control_point_to_water_surface, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_set_control_point_to_water_surface : public cparticle_function_pre_emission

		class init_inherit_velocity : public cparticle_function_initializer
		{
		public:
			MEMBER(control_point_number, init_inherit_velocity, int);
			MEMBER(velocity_scale, init_inherit_velocity, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_inherit_velocity : public cparticle_function_initializer

		class op_render_cables : public cparticle_function_renderer
		{
		public:
			MEMBER(radius_scale, op_render_cables, cparticle_collection_float_input);
			MEMBER(alpha_scale, op_render_cables, cparticle_collection_float_input);
			MEMBER(vec_color_scale, op_render_cables, cparticle_collection_vec_input);
			MEMBER(color_blend_type, op_render_cables, particle_color_blend_type_t);
			MEMBER(h_material, op_render_cables, cstrong_handle<info_for_resource_type_imaterial2>);
			MEMBER(texture_repetition_mode, op_render_cables, texture_repetition_mode_t);
			MEMBER(texture_repeats_per_segment, op_render_cables, cparticle_collection_float_input);
			MEMBER(texture_repeats_circumference, op_render_cables, cparticle_collection_float_input);
			MEMBER(color_map_offset_v, op_render_cables, cparticle_collection_float_input);
			MEMBER(color_map_offset_u, op_render_cables, cparticle_collection_float_input);
			MEMBER(normal_map_offset_v, op_render_cables, cparticle_collection_float_input);
			MEMBER(normal_map_offset_u, op_render_cables, cparticle_collection_float_input);
			MEMBER(draw_cable_caps, op_render_cables, bool);
			MEMBER(cap_roundness, op_render_cables, float);
			MEMBER(cap_offset_amount, op_render_cables, float);
			MEMBER(tess_scale, op_render_cables, float);
			MEMBER(min_tesselation, op_render_cables, int);
			MEMBER(max_tesselation, op_render_cables, int);
			MEMBER(roundness, op_render_cables, int);
			MEMBER(lighting_transform, op_render_cables, cparticle_transform_input);
			MEMBER(material_float_vars, op_render_cables, cutl_vector<float_input_material_variable_t>);
			MEMBER(material_vec_vars, op_render_cables, cutl_vector<vec_input_material_variable_t>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_render_cables : public cparticle_function_renderer

		class init_init_from_cpsnapshot : public cparticle_function_initializer
		{
		public:
			MEMBER(control_point_number, init_init_from_cpsnapshot, int);
			MEMBER(attribute_to_read, init_init_from_cpsnapshot, particle_attribute_index_t);
			MEMBER(attribute_to_write, init_init_from_cpsnapshot, particle_attribute_index_t);
			MEMBER(local_space_cp, init_init_from_cpsnapshot, int);
			MEMBER(random, init_init_from_cpsnapshot, bool);
			MEMBER(reverse, init_init_from_cpsnapshot, bool);
			MEMBER(snap_shot_increment, init_init_from_cpsnapshot, cparticle_collection_float_input);
			MEMBER(manual_snapshot_index, init_init_from_cpsnapshot, cper_particle_float_input);
			MEMBER(random_seed, init_init_from_cpsnapshot, int);
			MEMBER(local_space_angles, init_init_from_cpsnapshot, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_init_from_cpsnapshot : public cparticle_function_initializer

		class cparticle_collection_renderer_vec_input : public cparticle_collection_vec_input
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cparticle_collection_renderer_vec_input : public cparticle_collection_vec_input

		class op_remap_named_model_sequence_end_cap : public op_remap_named_model_element_end_cap
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_remap_named_model_sequence_end_cap : public op_remap_named_model_element_end_cap

		class init_plane_cull : public cparticle_function_initializer
		{
		public:
			MEMBER(control_point, init_plane_cull, int);
			MEMBER(distance, init_plane_cull, cparticle_collection_float_input);
			MEMBER(cull_inside, init_plane_cull, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_plane_cull : public cparticle_function_initializer

		class op_percentage_between_transforms : public cparticle_function_operator
		{
		public:
			MEMBER(field_output, op_percentage_between_transforms, particle_attribute_index_t);
			MEMBER(input_min, op_percentage_between_transforms, float);
			MEMBER(input_max, op_percentage_between_transforms, float);
			MEMBER(output_min, op_percentage_between_transforms, float);
			MEMBER(output_max, op_percentage_between_transforms, float);
			MEMBER(transform_start, op_percentage_between_transforms, cparticle_transform_input);
			MEMBER(transform_end, op_percentage_between_transforms, cparticle_transform_input);
			MEMBER(set_method, op_percentage_between_transforms, particle_set_method_t);
			MEMBER(active_range, op_percentage_between_transforms, bool);
			MEMBER(radial_check, op_percentage_between_transforms, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_percentage_between_transforms : public cparticle_function_operator

		class op_set_control_point_field_from_vector_expression : public cparticle_function_pre_emission
		{
		public:
			MEMBER(expression, op_set_control_point_field_from_vector_expression, vector_float_expression_type_t);
			MEMBER(vec_input1, op_set_control_point_field_from_vector_expression, cparticle_collection_vec_input);
			MEMBER(vec_input2, op_set_control_point_field_from_vector_expression, cparticle_collection_vec_input);
			MEMBER(output_remap, op_set_control_point_field_from_vector_expression, cparticle_remap_float_input);
			MEMBER(output_cp, op_set_control_point_field_from_vector_expression, int);
			MEMBER(out_vector_field, op_set_control_point_field_from_vector_expression, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_set_control_point_field_from_vector_expression : public cparticle_function_pre_emission

		class op_difference_previous_particle : public cparticle_function_operator
		{
		public:
			MEMBER(field_input, op_difference_previous_particle, particle_attribute_index_t);
			MEMBER(field_output, op_difference_previous_particle, particle_attribute_index_t);
			MEMBER(input_min, op_difference_previous_particle, float);
			MEMBER(input_max, op_difference_previous_particle, float);
			MEMBER(output_min, op_difference_previous_particle, float);
			MEMBER(output_max, op_difference_previous_particle, float);
			MEMBER(set_method, op_difference_previous_particle, particle_set_method_t);
			MEMBER(active_range, op_difference_previous_particle, bool);
			MEMBER(set_previous_particle, op_difference_previous_particle, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_difference_previous_particle : public cparticle_function_operator

		class op_set_control_point_to_hmd : public cparticle_function_pre_emission
		{
		public:
			MEMBER(cp1, op_set_control_point_to_hmd, int);
			MEMBER(vec_cp1_pos, op_set_control_point_to_hmd, vector);
			MEMBER(orient_to_hmd, op_set_control_point_to_hmd, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_set_control_point_to_hmd : public cparticle_function_pre_emission

		class op_clamp_scalar : public cparticle_function_operator
		{
		public:
			MEMBER(field_output, op_clamp_scalar, particle_attribute_index_t);
			MEMBER(output_min, op_clamp_scalar, cper_particle_float_input);
			MEMBER(output_max, op_clamp_scalar, cper_particle_float_input);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_clamp_scalar : public cparticle_function_operator

		class init_initial_repulsion_velocity : public cparticle_function_initializer
		{
		public:
			MEMBER_ARR(collision_group_name_arr, init_initial_repulsion_velocity, 128, char);
			MEMBER(trace_set, init_initial_repulsion_velocity, particle_trace_set_t);
			MEMBER(vec_output_min, init_initial_repulsion_velocity, vector);
			MEMBER(vec_output_max, init_initial_repulsion_velocity, vector);
			MEMBER(control_point_number, init_initial_repulsion_velocity, int);
			MEMBER(per_particle, init_initial_repulsion_velocity, bool);
			MEMBER(translate, init_initial_repulsion_velocity, bool);
			MEMBER(proportional, init_initial_repulsion_velocity, bool);
			MEMBER(trace_length, init_initial_repulsion_velocity, float);
			MEMBER(per_particle_tr, init_initial_repulsion_velocity, bool);
			MEMBER(inherit, init_initial_repulsion_velocity, bool);
			MEMBER(child_cp, init_initial_repulsion_velocity, int);
			MEMBER(child_group_id, init_initial_repulsion_velocity, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_initial_repulsion_velocity : public cparticle_function_initializer

		class op_lerp_scalar : public cparticle_function_operator
		{
		public:
			MEMBER(field_output, op_lerp_scalar, particle_attribute_index_t);
			MEMBER(output, op_lerp_scalar, cper_particle_float_input);
			MEMBER(start_time, op_lerp_scalar, float);
			MEMBER(end_time, op_lerp_scalar, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_lerp_scalar : public cparticle_function_operator

		class op_movement_move_along_skinned_cpsnapshot : public cparticle_function_operator
		{
		public:
			MEMBER(control_point_number, op_movement_move_along_skinned_cpsnapshot, int);
			MEMBER(snapshot_control_point_number, op_movement_move_along_skinned_cpsnapshot, int);
			MEMBER(set_normal, op_movement_move_along_skinned_cpsnapshot, bool);
			MEMBER(set_radius, op_movement_move_along_skinned_cpsnapshot, bool);
			MEMBER(interpolation, op_movement_move_along_skinned_cpsnapshot, cper_particle_float_input);
			MEMBER(tvalue, op_movement_move_along_skinned_cpsnapshot, cper_particle_float_input);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_movement_move_along_skinned_cpsnapshot : public cparticle_function_operator

		class init_set_hitbox_to_model : public cparticle_function_initializer
		{
		public:
			MEMBER(control_point_number, init_set_hitbox_to_model, int);
			MEMBER(force_in_model, init_set_hitbox_to_model, int);
			MEMBER(desired_hitbox, init_set_hitbox_to_model, int);
			MEMBER(vec_hit_box_scale, init_set_hitbox_to_model, cparticle_collection_vec_input);
			MEMBER(vec_direction_bias, init_set_hitbox_to_model, vector);
			MEMBER(maintain_hitbox, init_set_hitbox_to_model, bool);
			MEMBER(use_bones, init_set_hitbox_to_model, bool);
			MEMBER_ARR(hitbox_set_name_arr, init_set_hitbox_to_model, 128, char);
			MEMBER(shell_size, init_set_hitbox_to_model, cparticle_collection_float_input);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_set_hitbox_to_model : public cparticle_function_initializer

		class init_init_vec : public cparticle_function_initializer
		{
		public:
			MEMBER(input_value, init_init_vec, cper_particle_vec_input);
			MEMBER(output_field, init_init_vec, particle_attribute_index_t);
			MEMBER(set_method, init_init_vec, particle_set_method_t);
			MEMBER(normalized_output, init_init_vec, bool);
			MEMBER(write_previous_position, init_init_vec, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_init_vec : public cparticle_function_initializer

		class op_remap_density_gradient_to_vector_attribute : public cparticle_function_operator
		{
		public:
			MEMBER(radius_scale, op_remap_density_gradient_to_vector_attribute, float);
			MEMBER(field_output, op_remap_density_gradient_to_vector_attribute, particle_attribute_index_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_remap_density_gradient_to_vector_attribute : public cparticle_function_operator

		class op_alpha_decay : public cparticle_function_operator
		{
		public:
			MEMBER(min_alpha, op_alpha_decay, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_alpha_decay : public cparticle_function_operator

		class op_sequence_from_model : public cparticle_function_operator
		{
		public:
			MEMBER(control_point_number, op_sequence_from_model, int);
			MEMBER(field_output, op_sequence_from_model, particle_attribute_index_t);
			MEMBER(field_output_anim, op_sequence_from_model, particle_attribute_index_t);
			MEMBER(input_min, op_sequence_from_model, float);
			MEMBER(input_max, op_sequence_from_model, float);
			MEMBER(output_min, op_sequence_from_model, float);
			MEMBER(output_max, op_sequence_from_model, float);
			MEMBER(set_method, op_sequence_from_model, particle_set_method_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_sequence_from_model : public cparticle_function_operator

		class op_color_adjust_hsl : public cparticle_function_operator
		{
		public:
			MEMBER(hue_adjust, op_color_adjust_hsl, cper_particle_float_input);
			MEMBER(saturation_adjust, op_color_adjust_hsl, cper_particle_float_input);
			MEMBER(lightness_adjust, op_color_adjust_hsl, cper_particle_float_input);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_color_adjust_hsl : public cparticle_function_operator

		class op_fade_and_kill_for_tracers : public cparticle_function_operator
		{
		public:
			MEMBER(start_fade_in_time, op_fade_and_kill_for_tracers, float);
			MEMBER(end_fade_in_time, op_fade_and_kill_for_tracers, float);
			MEMBER(start_fade_out_time, op_fade_and_kill_for_tracers, float);
			MEMBER(end_fade_out_time, op_fade_and_kill_for_tracers, float);
			MEMBER(start_alpha, op_fade_and_kill_for_tracers, float);
			MEMBER(end_alpha, op_fade_and_kill_for_tracers, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_fade_and_kill_for_tracers : public cparticle_function_operator

		class op_noise : public cparticle_function_operator
		{
		public:
			MEMBER(field_output, op_noise, particle_attribute_index_t);
			MEMBER(output_min, op_noise, float);
			MEMBER(output_max, op_noise, float);
			MEMBER(fl4_noise_scale, op_noise, float);
			MEMBER(additive, op_noise, bool);
			MEMBER(noise_animation_time_scale, op_noise, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_noise : public cparticle_function_operator

		class op_collide_with_self : public cparticle_function_constraint
		{
		public:
			MEMBER(radius_scale, op_collide_with_self, cper_particle_float_input);
			MEMBER(minimum_speed, op_collide_with_self, cper_particle_float_input);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_collide_with_self : public cparticle_function_constraint

		class op_lag_compensation : public cparticle_function_operator
		{
		public:
			MEMBER(desired_velocity_cp, op_lag_compensation, int);
			MEMBER(latency_cp, op_lag_compensation, int);
			MEMBER(latency_cpfield, op_lag_compensation, int);
			MEMBER(desired_velocity_cpfield, op_lag_compensation, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_lag_compensation : public cparticle_function_operator

		class init_init_skinned_position_from_cpsnapshot : public cparticle_function_initializer
		{
		public:
			MEMBER(snapshot_control_point_number, init_init_skinned_position_from_cpsnapshot, int);
			MEMBER(control_point_number, init_init_skinned_position_from_cpsnapshot, int);
			MEMBER(random, init_init_skinned_position_from_cpsnapshot, bool);
			MEMBER(random_seed, init_init_skinned_position_from_cpsnapshot, int);
			MEMBER(rigid, init_init_skinned_position_from_cpsnapshot, bool);
			MEMBER(set_normal, init_init_skinned_position_from_cpsnapshot, bool);
			MEMBER(ignore_dt, init_init_skinned_position_from_cpsnapshot, bool);
			MEMBER(min_normal_velocity, init_init_skinned_position_from_cpsnapshot, float);
			MEMBER(max_normal_velocity, init_init_skinned_position_from_cpsnapshot, float);
			MEMBER(increment, init_init_skinned_position_from_cpsnapshot, float);
			MEMBER(full_loop_increment, init_init_skinned_position_from_cpsnapshot, int);
			MEMBER(snap_shot_start_point, init_init_skinned_position_from_cpsnapshot, int);
			MEMBER(bone_velocity, init_init_skinned_position_from_cpsnapshot, float);
			MEMBER(bone_velocity_max, init_init_skinned_position_from_cpsnapshot, float);
			MEMBER(copy_color, init_init_skinned_position_from_cpsnapshot, bool);
			MEMBER(copy_alpha, init_init_skinned_position_from_cpsnapshot, bool);
			MEMBER(set_radius, init_init_skinned_position_from_cpsnapshot, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_init_skinned_position_from_cpsnapshot : public cparticle_function_initializer

		class init_remap_particle_count_to_named_model_body_part_scalar : public init_remap_particle_count_to_named_model_element_scalar
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_remap_particle_count_to_named_model_body_part_scalar : public init_remap_particle_count_to_named_model_element_scalar

		class op_rotate_vector : public cparticle_function_operator
		{
		public:
			MEMBER(field_output, op_rotate_vector, particle_attribute_index_t);
			MEMBER(vec_rot_axis_min, op_rotate_vector, vector);
			MEMBER(vec_rot_axis_max, op_rotate_vector, vector);
			MEMBER(rot_rate_min, op_rotate_vector, float);
			MEMBER(rot_rate_max, op_rotate_vector, float);
			MEMBER(normalize, op_rotate_vector, bool);
			MEMBER(scale, op_rotate_vector, cper_particle_float_input);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_rotate_vector : public cparticle_function_operator

		class op_connect_parent_particle_to_nearest : public cparticle_function_operator
		{
		public:
			MEMBER(first_control_point, op_connect_parent_particle_to_nearest, int);
			MEMBER(second_control_point, op_connect_parent_particle_to_nearest, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_connect_parent_particle_to_nearest : public cparticle_function_operator

		class op_render_omni2_light : public cparticle_function_renderer
		{
		public:
			MEMBER(light_type, op_render_omni2_light, particle_omni2_light_type_choice_list_t);
			MEMBER(v_color_blend, op_render_omni2_light, cparticle_collection_vec_input);
			MEMBER(color_blend_type, op_render_omni2_light, particle_color_blend_type_t);
			MEMBER(brightness_unit, op_render_omni2_light, particle_light_unit_choice_list_t);
			MEMBER(brightness_lumens, op_render_omni2_light, cper_particle_float_input);
			MEMBER(brightness_candelas, op_render_omni2_light, cper_particle_float_input);
			MEMBER(cast_shadows, op_render_omni2_light, bool);
			MEMBER(luminaire_radius, op_render_omni2_light, cper_particle_float_input);
			MEMBER(skirt, op_render_omni2_light, cper_particle_float_input);
			MEMBER(range, op_render_omni2_light, cper_particle_float_input);
			MEMBER(inner_cone_angle, op_render_omni2_light, cper_particle_float_input);
			MEMBER(outer_cone_angle, op_render_omni2_light, cper_particle_float_input);
			MEMBER(h_light_cookie, op_render_omni2_light, cstrong_handle<info_for_resource_type_ctexture_base>);
			MEMBER(spherical_cookie, op_render_omni2_light, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_render_omni2_light : public cparticle_function_renderer

		class particle_ehandle__
		{
		public:
			MEMBER(unused, particle_ehandle__, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class particle_ehandle__

		class init_random_named_model_body_part : public init_random_named_model_element
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_random_named_model_body_part : public init_random_named_model_element

		class iparticle_effect
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class iparticle_effect

		class init_create_from_parent_particles : public cparticle_function_initializer
		{
		public:
			MEMBER(velocity_scale, init_create_from_parent_particles, float);
			MEMBER(increment, init_create_from_parent_particles, float);
			MEMBER(random_distribution, init_create_from_parent_particles, bool);
			MEMBER(random_seed, init_create_from_parent_particles, int);
			MEMBER(sub_frame, init_create_from_parent_particles, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_create_from_parent_particles : public cparticle_function_initializer

		class op_set_vec : public cparticle_function_operator
		{
		public:
			MEMBER(input_value, op_set_vec, cper_particle_vec_input);
			MEMBER(output_field, op_set_vec, particle_attribute_index_t);
			MEMBER(set_method, op_set_vec, particle_set_method_t);
			MEMBER(lerp, op_set_vec, cper_particle_float_input);
			MEMBER(normalized_output, op_set_vec, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_set_vec : public cparticle_function_operator

		class op_movement_maintain_offset : public cparticle_function_operator
		{
		public:
			MEMBER(vec_offset, op_movement_maintain_offset, vector);
			MEMBER(cp, op_movement_maintain_offset, int);
			MEMBER(radius_scale, op_movement_maintain_offset, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_movement_maintain_offset : public cparticle_function_operator

		class op_remap_named_model_body_part_once_timed : public op_remap_named_model_element_once_timed
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_remap_named_model_body_part_once_timed : public op_remap_named_model_element_once_timed

		class op_lock_to_bone : public cparticle_function_operator
		{
		public:
			MEMBER(model_input, op_lock_to_bone, cparticle_model_input);
			MEMBER(transform_input, op_lock_to_bone, cparticle_transform_input);
			MEMBER(life_time_fade_start, op_lock_to_bone, float);
			MEMBER(life_time_fade_end, op_lock_to_bone, float);
			MEMBER(jump_threshold, op_lock_to_bone, float);
			MEMBER(prev_pos_scale, op_lock_to_bone, float);
			MEMBER_ARR(hitbox_set_name_arr, op_lock_to_bone, 128, char);
			MEMBER(rigid, op_lock_to_bone, bool);
			MEMBER(use_bones, op_lock_to_bone, bool);
			MEMBER(field_output, op_lock_to_bone, particle_attribute_index_t);
			MEMBER(field_output_prev, op_lock_to_bone, particle_attribute_index_t);
			MEMBER(rotation_set_type, op_lock_to_bone, particle_rotation_lock_type_t);
			MEMBER(rigid_rotation_lock, op_lock_to_bone, bool);
			MEMBER(vec_rotation, op_lock_to_bone, cper_particle_vec_input);
			MEMBER(rot_lerp, op_lock_to_bone, cper_particle_float_input);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_lock_to_bone : public cparticle_function_operator

		class op_percentage_between_transform_lerp_cps : public cparticle_function_operator
		{
		public:
			MEMBER(field_output, op_percentage_between_transform_lerp_cps, particle_attribute_index_t);
			MEMBER(input_min, op_percentage_between_transform_lerp_cps, float);
			MEMBER(input_max, op_percentage_between_transform_lerp_cps, float);
			MEMBER(transform_start, op_percentage_between_transform_lerp_cps, cparticle_transform_input);
			MEMBER(transform_end, op_percentage_between_transform_lerp_cps, cparticle_transform_input);
			MEMBER(output_start_cp, op_percentage_between_transform_lerp_cps, int);
			MEMBER(output_start_field, op_percentage_between_transform_lerp_cps, int);
			MEMBER(output_end_cp, op_percentage_between_transform_lerp_cps, int);
			MEMBER(output_end_field, op_percentage_between_transform_lerp_cps, int);
			MEMBER(set_method, op_percentage_between_transform_lerp_cps, particle_set_method_t);
			MEMBER(active_range, op_percentage_between_transform_lerp_cps, bool);
			MEMBER(radial_check, op_percentage_between_transform_lerp_cps, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_percentage_between_transform_lerp_cps : public cparticle_function_operator

		struct control_point_reference_t
		{
			MEMBER(control_point_name_string, control_point_reference_t, int);
			MEMBER(v_offset_from_control_point, control_point_reference_t, vector);
			MEMBER(offset_in_local_space, control_point_reference_t, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct control_point_reference_t

		class op_dampen_to_cp : public cparticle_function_operator
		{
		public:
			MEMBER(control_point_number, op_dampen_to_cp, int);
			MEMBER(range, op_dampen_to_cp, float);
			MEMBER(scale, op_dampen_to_cp, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_dampen_to_cp : public cparticle_function_operator

		class op_distance_between_vecs : public cparticle_function_operator
		{
		public:
			MEMBER(field_output, op_distance_between_vecs, particle_attribute_index_t);
			MEMBER(vec_point1, op_distance_between_vecs, cper_particle_vec_input);
			MEMBER(vec_point2, op_distance_between_vecs, cper_particle_vec_input);
			MEMBER(input_min, op_distance_between_vecs, cper_particle_float_input);
			MEMBER(input_max, op_distance_between_vecs, cper_particle_float_input);
			MEMBER(output_min, op_distance_between_vecs, cper_particle_float_input);
			MEMBER(output_max, op_distance_between_vecs, cper_particle_float_input);
			MEMBER(set_method, op_distance_between_vecs, particle_set_method_t);
			MEMBER(delta_time, op_distance_between_vecs, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_distance_between_vecs : public cparticle_function_operator

		class cgeneral_random_rotation : public cparticle_function_initializer
		{
		public:
			MEMBER(field_output, cgeneral_random_rotation, particle_attribute_index_t);
			MEMBER(degrees, cgeneral_random_rotation, float);
			MEMBER(degrees_min, cgeneral_random_rotation, float);
			MEMBER(degrees_max, cgeneral_random_rotation, float);
			MEMBER(rotation_rand_exponent, cgeneral_random_rotation, float);
			MEMBER(randomly_flip_direction, cgeneral_random_rotation, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cgeneral_random_rotation : public cparticle_function_initializer

		class op_remap_vector_component_to_scalar : public cparticle_function_operator
		{
		public:
			MEMBER(field_input, op_remap_vector_component_to_scalar, particle_attribute_index_t);
			MEMBER(field_output, op_remap_vector_component_to_scalar, particle_attribute_index_t);
			MEMBER(component, op_remap_vector_component_to_scalar, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_remap_vector_component_to_scalar : public cparticle_function_operator

		class init_age_noise : public cparticle_function_initializer
		{
		public:
			MEMBER(abs_val, init_age_noise, bool);
			MEMBER(abs_val_inv, init_age_noise, bool);
			MEMBER(offset, init_age_noise, float);
			MEMBER(age_min, init_age_noise, float);
			MEMBER(age_max, init_age_noise, float);
			MEMBER(noise_scale, init_age_noise, float);
			MEMBER(noise_scale_loc, init_age_noise, float);
			MEMBER(vec_offset_loc, init_age_noise, vector);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_age_noise : public cparticle_function_initializer

		class op_diffusion : public cparticle_function_operator
		{
		public:
			MEMBER(radius_scale, op_diffusion, float);
			MEMBER(field_output, op_diffusion, particle_attribute_index_t);
			MEMBER(voxel_grid_resolution, op_diffusion, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_diffusion : public cparticle_function_operator

		class op_set_control_point_position_to_random_active_cp : public cparticle_function_pre_emission
		{
		public:
			MEMBER(cp1, op_set_control_point_position_to_random_active_cp, int);
			MEMBER(head_location_min, op_set_control_point_position_to_random_active_cp, int);
			MEMBER(head_location_max, op_set_control_point_position_to_random_active_cp, int);
			MEMBER(reset_rate, op_set_control_point_position_to_random_active_cp, cparticle_collection_float_input);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_set_control_point_position_to_random_active_cp : public cparticle_function_pre_emission

		struct point_definition_with_time_values_t : public point_definition_t
		{
			MEMBER(time_duration, point_definition_with_time_values_t, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct point_definition_with_time_values_t : public point_definition_t

		class op_set_float_collection : public cparticle_function_operator
		{
		public:
			MEMBER(input_value, op_set_float_collection, cparticle_collection_float_input);
			MEMBER(output_field, op_set_float_collection, particle_attribute_index_t);
			MEMBER(set_method, op_set_float_collection, particle_set_method_t);
			MEMBER(lerp, op_set_float_collection, cparticle_collection_float_input);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_set_float_collection : public cparticle_function_operator

		class init_random_second_sequence : public cparticle_function_initializer
		{
		public:
			MEMBER(sequence_min, init_random_second_sequence, int);
			MEMBER(sequence_max, init_random_second_sequence, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_random_second_sequence : public cparticle_function_initializer

		class op_inherit_from_parent_particles_v2 : public cparticle_function_operator
		{
		public:
			MEMBER(scale, op_inherit_from_parent_particles_v2, float);
			MEMBER(field_output, op_inherit_from_parent_particles_v2, particle_attribute_index_t);
			MEMBER(increment, op_inherit_from_parent_particles_v2, int);
			MEMBER(random_distribution, op_inherit_from_parent_particles_v2, bool);
			MEMBER(missing_parent_behavior, op_inherit_from_parent_particles_v2, missing_parent_inherit_behavior_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_inherit_from_parent_particles_v2 : public cparticle_function_operator

		class init_random_rotation_speed : public cgeneral_random_rotation
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_random_rotation_speed : public cgeneral_random_rotation

		class op_remap_transform_orientation_to_rotations : public cparticle_function_operator
		{
		public:
			MEMBER(transform_input, op_remap_transform_orientation_to_rotations, cparticle_transform_input);
			MEMBER(vec_rotation, op_remap_transform_orientation_to_rotations, vector);
			MEMBER(use_quat, op_remap_transform_orientation_to_rotations, bool);
			MEMBER(write_normal, op_remap_transform_orientation_to_rotations, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_remap_transform_orientation_to_rotations : public cparticle_function_operator

		class op_remap_cross_product_of_two_vectors_to_vector : public cparticle_function_operator
		{
		public:
			MEMBER(input_vec1, op_remap_cross_product_of_two_vectors_to_vector, cper_particle_vec_input);
			MEMBER(input_vec2, op_remap_cross_product_of_two_vectors_to_vector, cper_particle_vec_input);
			MEMBER(field_output, op_remap_cross_product_of_two_vectors_to_vector, particle_attribute_index_t);
			MEMBER(normalize, op_remap_cross_product_of_two_vectors_to_vector, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_remap_cross_product_of_two_vectors_to_vector : public cparticle_function_operator

		class op_set_cporientation_to_direction : public cparticle_function_operator
		{
		public:
			MEMBER(input_control_point, op_set_cporientation_to_direction, int);
			MEMBER(output_control_point, op_set_cporientation_to_direction, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_set_cporientation_to_direction : public cparticle_function_operator

		class op_movement_place_on_ground : public cparticle_function_operator
		{
		public:
			MEMBER(offset, op_movement_place_on_ground, cper_particle_float_input);
			MEMBER(max_trace_length, op_movement_place_on_ground, float);
			MEMBER(tolerance, op_movement_place_on_ground, float);
			MEMBER(trace_offset, op_movement_place_on_ground, float);
			MEMBER(lerp_rate, op_movement_place_on_ground, float);
			MEMBER_ARR(collision_group_name_arr, op_movement_place_on_ground, 128, char);
			MEMBER(trace_set, op_movement_place_on_ground, particle_trace_set_t);
			MEMBER(ref_cp1, op_movement_place_on_ground, int);
			MEMBER(ref_cp2, op_movement_place_on_ground, int);
			MEMBER(lerp_cp, op_movement_place_on_ground, int);
			MEMBER(trace_miss_behavior, op_movement_place_on_ground, particle_trace_miss_behavior_t);
			MEMBER(include_shot_hull, op_movement_place_on_ground, bool);
			MEMBER(include_water, op_movement_place_on_ground, bool);
			MEMBER(set_normal, op_movement_place_on_ground, bool);
			MEMBER(scale_offset, op_movement_place_on_ground, bool);
			MEMBER(preserve_offset_cp, op_movement_place_on_ground, int);
			MEMBER(ignore_cp, op_movement_place_on_ground, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_movement_place_on_ground : public cparticle_function_operator

		class op_lock_to_point_list : public cparticle_function_operator
		{
		public:
			MEMBER(field_output, op_lock_to_point_list, particle_attribute_index_t);
			MEMBER(point_list, op_lock_to_point_list, cutl_vector<point_definition_t>);
			MEMBER(place_along_path, op_lock_to_point_list, bool);
			MEMBER(closed_loop, op_lock_to_point_list, bool);
			MEMBER(num_points_along_path, op_lock_to_point_list, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_lock_to_point_list : public cparticle_function_operator

		class op_set_cporientation_to_point_at_cp : public cparticle_function_pre_emission
		{
		public:
			MEMBER(input_cp, op_set_cporientation_to_point_at_cp, int);
			MEMBER(output_cp, op_set_cporientation_to_point_at_cp, int);
			MEMBER(interpolation, op_set_cporientation_to_point_at_cp, cparticle_collection_float_input);
			MEMBER(b2_dorientation, op_set_cporientation_to_point_at_cp, bool);
			MEMBER(avoid_singularity, op_set_cporientation_to_point_at_cp, bool);
			MEMBER(point_away, op_set_cporientation_to_point_at_cp, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_set_cporientation_to_point_at_cp : public cparticle_function_pre_emission

		class op_velocity_decay : public cparticle_function_operator
		{
		public:
			MEMBER(min_velocity, op_velocity_decay, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_velocity_decay : public cparticle_function_operator

		class op_lerp_end_cap_vector : public cparticle_function_operator
		{
		public:
			MEMBER(field_output, op_lerp_end_cap_vector, particle_attribute_index_t);
			MEMBER(vec_output, op_lerp_end_cap_vector, vector);
			MEMBER(lerp_time, op_lerp_end_cap_vector, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_lerp_end_cap_vector : public cparticle_function_operator

		class init_random_rotation : public cgeneral_random_rotation
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_random_rotation : public cgeneral_random_rotation

		class op_lerp_to_initial_position : public cparticle_function_operator
		{
		public:
			MEMBER(control_point_number, op_lerp_to_initial_position, int);
			MEMBER(interpolation, op_lerp_to_initial_position, cper_particle_float_input);
			MEMBER(cache_field, op_lerp_to_initial_position, particle_attribute_index_t);
			MEMBER(scale, op_lerp_to_initial_position, cparticle_collection_float_input);
			MEMBER(vec_scale, op_lerp_to_initial_position, cparticle_collection_vec_input);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_lerp_to_initial_position : public cparticle_function_operator

		class op_render_text : public cparticle_function_renderer
		{
		public:
			MEMBER(outline_color, op_render_text, color);
			MEMBER(default_text, op_render_text, cutl_string);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_render_text : public cparticle_function_renderer

		class op_read_from_neighboring_particle : public cparticle_function_operator
		{
		public:
			MEMBER(field_input, op_read_from_neighboring_particle, particle_attribute_index_t);
			MEMBER(field_output, op_read_from_neighboring_particle, particle_attribute_index_t);
			MEMBER(increment, op_read_from_neighboring_particle, int);
			MEMBER(distance_check, op_read_from_neighboring_particle, cper_particle_float_input);
			MEMBER(interpolation, op_read_from_neighboring_particle, cper_particle_float_input);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_read_from_neighboring_particle : public cparticle_function_operator

		struct sequence_weighted_list_t
		{
			MEMBER(sequence, sequence_weighted_list_t, int);
			MEMBER(relative_weight, sequence_weighted_list_t, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct sequence_weighted_list_t

		class op_remap_sdfgradient_to_vector_attribute : public cparticle_function_operator
		{
		public:
			MEMBER(field_output, op_remap_sdfgradient_to_vector_attribute, particle_attribute_index_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_remap_sdfgradient_to_vector_attribute : public cparticle_function_operator

		class init_random_yaw_flip : public cparticle_function_initializer
		{
		public:
			MEMBER(percent, init_random_yaw_flip, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_random_yaw_flip : public cparticle_function_initializer

		class op_cull : public cparticle_function_operator
		{
		public:
			MEMBER(cull_perc, op_cull, float);
			MEMBER(cull_start, op_cull, float);
			MEMBER(cull_end, op_cull, float);
			MEMBER(cull_exp, op_cull, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_cull : public cparticle_function_operator

		class init_remap_transform_orientation_to_rotations : public cparticle_function_initializer
		{
		public:
			MEMBER(transform_input, init_remap_transform_orientation_to_rotations, cparticle_transform_input);
			MEMBER(vec_rotation, init_remap_transform_orientation_to_rotations, vector);
			MEMBER(use_quat, init_remap_transform_orientation_to_rotations, bool);
			MEMBER(write_normal, init_remap_transform_orientation_to_rotations, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_remap_transform_orientation_to_rotations : public cparticle_function_initializer

		class op_normal_lock : public cparticle_function_operator
		{
		public:
			MEMBER(control_point_number, op_normal_lock, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_normal_lock : public cparticle_function_operator

		class op_lock_to_saved_sequential_path_v2 : public cparticle_function_operator
		{
		public:
			MEMBER(fade_start, op_lock_to_saved_sequential_path_v2, float);
			MEMBER(fade_end, op_lock_to_saved_sequential_path_v2, float);
			MEMBER(cppairs, op_lock_to_saved_sequential_path_v2, bool);
			MEMBER(path_params, op_lock_to_saved_sequential_path_v2, cpath_parameters);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_lock_to_saved_sequential_path_v2 : public cparticle_function_operator

		class init_remap_initial_direction_to_transform_to_vector : public cparticle_function_initializer
		{
		public:
			MEMBER(transform_input, init_remap_initial_direction_to_transform_to_vector, cparticle_transform_input);
			MEMBER(field_output, init_remap_initial_direction_to_transform_to_vector, particle_attribute_index_t);
			MEMBER(scale, init_remap_initial_direction_to_transform_to_vector, float);
			MEMBER(offset_rot, init_remap_initial_direction_to_transform_to_vector, float);
			MEMBER(vec_offset_axis, init_remap_initial_direction_to_transform_to_vector, vector);
			MEMBER(normalize, init_remap_initial_direction_to_transform_to_vector, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_remap_initial_direction_to_transform_to_vector : public cparticle_function_initializer

		struct vec_input_material_variable_t
		{
			MEMBER(str_variable, vec_input_material_variable_t, cutl_string);
			MEMBER(vec_input, vec_input_material_variable_t, cparticle_collection_vec_input);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct vec_input_material_variable_t

		class init_create_sequential_path_v2 : public cparticle_function_initializer
		{
		public:
			MEMBER(max_distance, init_create_sequential_path_v2, cper_particle_float_input);
			MEMBER(num_to_assign, init_create_sequential_path_v2, cparticle_collection_float_input);
			MEMBER(loop, init_create_sequential_path_v2, bool);
			MEMBER(cppairs, init_create_sequential_path_v2, bool);
			MEMBER(save_offset, init_create_sequential_path_v2, bool);
			MEMBER(path_params, init_create_sequential_path_v2, cpath_parameters);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_create_sequential_path_v2 : public cparticle_function_initializer

		class op_remap_visibility_scalar : public cparticle_function_operator
		{
		public:
			MEMBER(field_input, op_remap_visibility_scalar, particle_attribute_index_t);
			MEMBER(field_output, op_remap_visibility_scalar, particle_attribute_index_t);
			MEMBER(input_min, op_remap_visibility_scalar, float);
			MEMBER(input_max, op_remap_visibility_scalar, float);
			MEMBER(output_min, op_remap_visibility_scalar, float);
			MEMBER(output_max, op_remap_visibility_scalar, float);
			MEMBER(radius_scale, op_remap_visibility_scalar, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_remap_visibility_scalar : public cparticle_function_operator

		class op_render_cloth_force : public cparticle_function_renderer
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_render_cloth_force : public cparticle_function_renderer

		class op_restart_after_duration : public cparticle_function_operator
		{
		public:
			MEMBER(duration_min, op_restart_after_duration, float);
			MEMBER(duration_max, op_restart_after_duration, float);
			MEMBER(cp, op_restart_after_duration, int);
			MEMBER(cpfield, op_restart_after_duration, int);
			MEMBER(child_group_id, op_restart_after_duration, int);
			MEMBER(only_children, op_restart_after_duration, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_restart_after_duration : public cparticle_function_operator

		class op_set_variable : public cparticle_function_pre_emission
		{
		public:
			MEMBER(variable_reference, op_set_variable, cparticle_variable_ref);
			MEMBER(transform_input, op_set_variable, cparticle_transform_input);
			MEMBER(position_offset, op_set_variable, vector);
			MEMBER(rotation_offset, op_set_variable, qangle);
			MEMBER(vec_input, op_set_variable, cparticle_collection_vec_input);
			MEMBER(float_input, op_set_variable, cparticle_collection_float_input);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_set_variable : public cparticle_function_pre_emission

		class init_create_on_model_at_height : public cparticle_function_initializer
		{
		public:
			MEMBER(use_bones, init_create_on_model_at_height, bool);
			MEMBER(force_z, init_create_on_model_at_height, bool);
			MEMBER(control_point_number, init_create_on_model_at_height, int);
			MEMBER(height_cp, init_create_on_model_at_height, int);
			MEMBER(use_water_height, init_create_on_model_at_height, bool);
			MEMBER(desired_height, init_create_on_model_at_height, cparticle_collection_float_input);
			MEMBER(vec_hit_box_scale, init_create_on_model_at_height, cparticle_collection_vec_input);
			MEMBER(vec_direction_bias, init_create_on_model_at_height, cparticle_collection_vec_input);
			MEMBER(bias_type, init_create_on_model_at_height, particle_hitbox_bias_type_t);
			MEMBER(local_coords, init_create_on_model_at_height, bool);
			MEMBER(prefer_moving_boxes, init_create_on_model_at_height, bool);
			MEMBER_ARR(hitbox_set_name_arr, init_create_on_model_at_height, 128, char);
			MEMBER(hitbox_velocity_scale, init_create_on_model_at_height, cparticle_collection_float_input);
			MEMBER(max_bone_velocity, init_create_on_model_at_height, cparticle_collection_float_input);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_create_on_model_at_height : public cparticle_function_initializer

		class init_random_alpha_window_threshold : public cparticle_function_initializer
		{
		public:
			MEMBER(min, init_random_alpha_window_threshold, float);
			MEMBER(max, init_random_alpha_window_threshold, float);
			MEMBER(exponent, init_random_alpha_window_threshold, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_random_alpha_window_threshold : public cparticle_function_initializer

		class op_velocity_matching_force : public cparticle_function_operator
		{
		public:
			MEMBER(dir_scale, op_velocity_matching_force, float);
			MEMBER(spd_scale, op_velocity_matching_force, float);
			MEMBER(cpbroadcast, op_velocity_matching_force, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_velocity_matching_force : public cparticle_function_operator

		class op_ramp_cplinear_random : public cparticle_function_pre_emission
		{
		public:
			MEMBER(out_control_point_number, op_ramp_cplinear_random, int);
			MEMBER(vec_rate_min, op_ramp_cplinear_random, vector);
			MEMBER(vec_rate_max, op_ramp_cplinear_random, vector);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_ramp_cplinear_random : public cparticle_function_pre_emission

		class init_create_on_grid : public cparticle_function_initializer
		{
		public:
			MEMBER(xcount, init_create_on_grid, cparticle_collection_float_input);
			MEMBER(ycount, init_create_on_grid, cparticle_collection_float_input);
			MEMBER(zcount, init_create_on_grid, cparticle_collection_float_input);
			MEMBER(xspacing, init_create_on_grid, cparticle_collection_float_input);
			MEMBER(yspacing, init_create_on_grid, cparticle_collection_float_input);
			MEMBER(zspacing, init_create_on_grid, cparticle_collection_float_input);
			MEMBER(control_point_number, init_create_on_grid, int);
			MEMBER(local_space, init_create_on_grid, bool);
			MEMBER(center, init_create_on_grid, bool);
			MEMBER(hollow, init_create_on_grid, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_create_on_grid : public cparticle_function_initializer

		class op_render_points : public cparticle_function_renderer
		{
		public:
			MEMBER(h_material, op_render_points, cstrong_handle<info_for_resource_type_imaterial2>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_render_points : public cparticle_function_renderer

		class init_color_lit_per_particle : public cparticle_function_initializer
		{
		public:
			MEMBER(color_min, init_color_lit_per_particle, color);
			MEMBER(color_max, init_color_lit_per_particle, color);
			MEMBER(tint_min, init_color_lit_per_particle, color);
			MEMBER(tint_max, init_color_lit_per_particle, color);
			MEMBER(tint_perc, init_color_lit_per_particle, float);
			MEMBER(tint_blend_mode, init_color_lit_per_particle, particle_color_blend_mode_t);
			MEMBER(light_amplification, init_color_lit_per_particle, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_color_lit_per_particle : public cparticle_function_initializer

		class init_position_offset : public cparticle_function_initializer
		{
		public:
			MEMBER(offset_min, init_position_offset, cper_particle_vec_input);
			MEMBER(offset_max, init_position_offset, cper_particle_vec_input);
			MEMBER(transform_input, init_position_offset, cparticle_transform_input);
			MEMBER(local_coords, init_position_offset, bool);
			MEMBER(proportional, init_position_offset, bool);
			MEMBER(randomness_parameters, init_position_offset, crandom_number_generator_parameters);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_position_offset : public cparticle_function_initializer

		class op_decay_clamp_count : public cparticle_function_operator
		{
		public:
			MEMBER(count, op_decay_clamp_count, cparticle_collection_float_input);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_decay_clamp_count : public cparticle_function_operator

		class op_render_lights : public op_render_points
		{
		public:
			MEMBER(animation_rate, op_render_lights, float);
			MEMBER(animation_type, op_render_lights, animation_type_t);
			MEMBER(animate_in_fps, op_render_lights, bool);
			MEMBER(min_size, op_render_lights, float);
			MEMBER(max_size, op_render_lights, float);
			MEMBER(start_fade_size, op_render_lights, float);
			MEMBER(end_fade_size, op_render_lights, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_render_lights : public op_render_points

		class init_remap_named_model_sequence_to_scalar : public init_remap_named_model_element_to_scalar
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_remap_named_model_sequence_to_scalar : public init_remap_named_model_element_to_scalar

		class op_color_interpolate_random : public cparticle_function_operator
		{
		public:
			MEMBER(color_fade_min, op_color_interpolate_random, color);
			MEMBER(color_fade_max, op_color_interpolate_random, color);
			MEMBER(fade_start_time, op_color_interpolate_random, float);
			MEMBER(fade_end_time, op_color_interpolate_random, float);
			MEMBER(field_output, op_color_interpolate_random, particle_attribute_index_t);
			MEMBER(ease_in_out, op_color_interpolate_random, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_color_interpolate_random : public cparticle_function_operator

		class op_set_control_points_to_model_particles : public cparticle_function_operator
		{
		public:
			MEMBER_ARR(hitbox_set_name_arr, op_set_control_points_to_model_particles, 128, char);
			MEMBER_ARR(attachment_name_arr, op_set_control_points_to_model_particles, 128, char);
			MEMBER(first_control_point, op_set_control_points_to_model_particles, int);
			MEMBER(num_control_points, op_set_control_points_to_model_particles, int);
			MEMBER(first_source_point, op_set_control_points_to_model_particles, int);
			MEMBER(skin, op_set_control_points_to_model_particles, bool);
			MEMBER(attachment, op_set_control_points_to_model_particles, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_set_control_points_to_model_particles : public cparticle_function_operator

		class init_create_along_path : public cparticle_function_initializer
		{
		public:
			MEMBER(max_distance, init_create_along_path, float);
			MEMBER(path_params, init_create_along_path, cpath_parameters);
			MEMBER(use_random_cps, init_create_along_path, bool);
			MEMBER(v_end_offset, init_create_along_path, vector);
			MEMBER(save_offset, init_create_along_path, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_create_along_path : public cparticle_function_initializer

		class op_remap_sdfdistance_to_scalar_attribute : public cparticle_function_operator
		{
		public:
			MEMBER(field_output, op_remap_sdfdistance_to_scalar_attribute, particle_attribute_index_t);
			MEMBER(vector_field_input, op_remap_sdfdistance_to_scalar_attribute, particle_attribute_index_t);
			MEMBER(min_distance, op_remap_sdfdistance_to_scalar_attribute, cparticle_collection_float_input);
			MEMBER(max_distance, op_remap_sdfdistance_to_scalar_attribute, cparticle_collection_float_input);
			MEMBER(value_below_min, op_remap_sdfdistance_to_scalar_attribute, cparticle_collection_float_input);
			MEMBER(value_at_min, op_remap_sdfdistance_to_scalar_attribute, cparticle_collection_float_input);
			MEMBER(value_at_max, op_remap_sdfdistance_to_scalar_attribute, cparticle_collection_float_input);
			MEMBER(value_above_max, op_remap_sdfdistance_to_scalar_attribute, cparticle_collection_float_input);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_remap_sdfdistance_to_scalar_attribute : public cparticle_function_operator

		class op_distance_cull : public cparticle_function_operator
		{
		public:
			MEMBER(control_point, op_distance_cull, int);
			MEMBER(vec_point_offset, op_distance_cull, vector);
			MEMBER(distance, op_distance_cull, float);
			MEMBER(cull_inside, op_distance_cull, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_distance_cull : public cparticle_function_operator

		class op_constrain_distance_to_path : public cparticle_function_constraint
		{
		public:
			MEMBER(min_distance, op_constrain_distance_to_path, float);
			MEMBER(max_distance0, op_constrain_distance_to_path, float);
			MEMBER(max_distance_mid, op_constrain_distance_to_path, float);
			MEMBER(max_distance1, op_constrain_distance_to_path, float);
			MEMBER(path_parameters, op_constrain_distance_to_path, cpath_parameters);
			MEMBER(travel_time, op_constrain_distance_to_path, float);
			MEMBER(field_scale, op_constrain_distance_to_path, particle_attribute_index_t);
			MEMBER(manual_tfield, op_constrain_distance_to_path, particle_attribute_index_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_constrain_distance_to_path : public cparticle_function_constraint

		class op_set_control_point_to_hand : public cparticle_function_pre_emission
		{
		public:
			MEMBER(cp1, op_set_control_point_to_hand, int);
			MEMBER(hand, op_set_control_point_to_hand, int);
			MEMBER(vec_cp1_pos, op_set_control_point_to_hand, vector);
			MEMBER(orient_to_hand, op_set_control_point_to_hand, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_set_control_point_to_hand : public cparticle_function_pre_emission

		class op_distance_between_cps_to_cp : public cparticle_function_pre_emission
		{
		public:
			MEMBER(start_cp, op_distance_between_cps_to_cp, int);
			MEMBER(end_cp, op_distance_between_cps_to_cp, int);
			MEMBER(output_cp, op_distance_between_cps_to_cp, int);
			MEMBER(output_cpfield, op_distance_between_cps_to_cp, int);
			MEMBER(set_once, op_distance_between_cps_to_cp, bool);
			MEMBER(input_min, op_distance_between_cps_to_cp, float);
			MEMBER(input_max, op_distance_between_cps_to_cp, float);
			MEMBER(output_min, op_distance_between_cps_to_cp, float);
			MEMBER(output_max, op_distance_between_cps_to_cp, float);
			MEMBER(max_trace_length, op_distance_between_cps_to_cp, float);
			MEMBER(losscale, op_distance_between_cps_to_cp, float);
			MEMBER(los, op_distance_between_cps_to_cp, bool);
			MEMBER_ARR(collision_group_name_arr, op_distance_between_cps_to_cp, 128, char);
			MEMBER(trace_set, op_distance_between_cps_to_cp, particle_trace_set_t);
			MEMBER(set_parent, op_distance_between_cps_to_cp, particle_parent_set_mode_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_distance_between_cps_to_cp : public cparticle_function_pre_emission

		class op_set_from_cpsnapshot : public cparticle_function_operator
		{
		public:
			MEMBER(control_point_number, op_set_from_cpsnapshot, int);
			MEMBER(attribute_to_read, op_set_from_cpsnapshot, particle_attribute_index_t);
			MEMBER(attribute_to_write, op_set_from_cpsnapshot, particle_attribute_index_t);
			MEMBER(local_space_cp, op_set_from_cpsnapshot, int);
			MEMBER(random, op_set_from_cpsnapshot, bool);
			MEMBER(reverse, op_set_from_cpsnapshot, bool);
			MEMBER(random_seed, op_set_from_cpsnapshot, int);
			MEMBER(snap_shot_start_point, op_set_from_cpsnapshot, cparticle_collection_float_input);
			MEMBER(snap_shot_increment, op_set_from_cpsnapshot, cparticle_collection_float_input);
			MEMBER(interpolation, op_set_from_cpsnapshot, cper_particle_float_input);
			MEMBER(sub_sample, op_set_from_cpsnapshot, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_set_from_cpsnapshot : public cparticle_function_operator

		class op_remap_vectorto_cp : public cparticle_function_operator
		{
		public:
			MEMBER(out_control_point_number, op_remap_vectorto_cp, int);
			MEMBER(field_input, op_remap_vectorto_cp, particle_attribute_index_t);
			MEMBER(particle_number, op_remap_vectorto_cp, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_remap_vectorto_cp : public cparticle_function_operator

		class op_set_float_attribute_to_vector_expression : public cparticle_function_operator
		{
		public:
			MEMBER(expression, op_set_float_attribute_to_vector_expression, vector_float_expression_type_t);
			MEMBER(v_input1, op_set_float_attribute_to_vector_expression, cper_particle_vec_input);
			MEMBER(v_input2, op_set_float_attribute_to_vector_expression, cper_particle_vec_input);
			MEMBER(output_remap, op_set_float_attribute_to_vector_expression, cparticle_remap_float_input);
			MEMBER(output_field, op_set_float_attribute_to_vector_expression, particle_attribute_index_t);
			MEMBER(set_method, op_set_float_attribute_to_vector_expression, particle_set_method_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_set_float_attribute_to_vector_expression : public cparticle_function_operator

		class op_remap_distance_to_line_segment_base : public cparticle_function_operator
		{
		public:
			MEMBER(cp0, op_remap_distance_to_line_segment_base, int);
			MEMBER(cp1, op_remap_distance_to_line_segment_base, int);
			MEMBER(min_input_value, op_remap_distance_to_line_segment_base, float);
			MEMBER(max_input_value, op_remap_distance_to_line_segment_base, float);
			MEMBER(infinite_line, op_remap_distance_to_line_segment_base, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_remap_distance_to_line_segment_base : public cparticle_function_operator

		class op_sdflighting : public cparticle_function_operator
		{
		public:
			MEMBER(v_lighting_dir, op_sdflighting, vector);
			MEMBER(v_tint_0, op_sdflighting, vector);
			MEMBER(v_tint_1, op_sdflighting, vector);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_sdflighting : public cparticle_function_operator

		class init_remap_transform_to_vector : public cparticle_function_initializer
		{
		public:
			MEMBER(field_output, init_remap_transform_to_vector, particle_attribute_index_t);
			MEMBER(v_input_min, init_remap_transform_to_vector, vector);
			MEMBER(v_input_max, init_remap_transform_to_vector, vector);
			MEMBER(v_output_min, init_remap_transform_to_vector, vector);
			MEMBER(v_output_max, init_remap_transform_to_vector, vector);
			MEMBER(transform_input, init_remap_transform_to_vector, cparticle_transform_input);
			MEMBER(local_space_transform, init_remap_transform_to_vector, cparticle_transform_input);
			MEMBER(start_time, init_remap_transform_to_vector, float);
			MEMBER(end_time, init_remap_transform_to_vector, float);
			MEMBER(set_method, init_remap_transform_to_vector, particle_set_method_t);
			MEMBER(offset, init_remap_transform_to_vector, bool);
			MEMBER(accelerate, init_remap_transform_to_vector, bool);
			MEMBER(remap_bias, init_remap_transform_to_vector, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_remap_transform_to_vector : public cparticle_function_initializer

		class op_set_float : public cparticle_function_operator
		{
		public:
			MEMBER(input_value, op_set_float, cper_particle_float_input);
			MEMBER(output_field, op_set_float, particle_attribute_index_t);
			MEMBER(set_method, op_set_float, particle_set_method_t);
			MEMBER(lerp, op_set_float, cper_particle_float_input);
			MEMBER(use_new_code, op_set_float, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_set_float : public cparticle_function_operator

		class op_model_cull : public cparticle_function_operator
		{
		public:
			MEMBER(control_point_number, op_model_cull, int);
			MEMBER(bound_box, op_model_cull, bool);
			MEMBER(cull_outside, op_model_cull, bool);
			MEMBER(use_bones, op_model_cull, bool);
			MEMBER_ARR(hitbox_set_name_arr, op_model_cull, 128, char);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_model_cull : public cparticle_function_operator

		class op_local_acceleration_force : public cparticle_function_force
		{
		public:
			MEMBER(cp, op_local_acceleration_force, int);
			MEMBER(scale_cp, op_local_acceleration_force, int);
			MEMBER(vec_accel, op_local_acceleration_force, cparticle_collection_vec_input);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_local_acceleration_force : public cparticle_function_force

		struct particle_control_point_configuration_t
		{
			MEMBER(name, particle_control_point_configuration_t, cutl_string);
			MEMBER(drivers, particle_control_point_configuration_t, cutl_vector<particle_control_point_driver_t>);
			MEMBER(preview_state, particle_control_point_configuration_t, particle_preview_state_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct particle_control_point_configuration_t

		class op_remap_particle_count_on_scalar_end_cap : public cparticle_function_operator
		{
		public:
			MEMBER(field_output, op_remap_particle_count_on_scalar_end_cap, particle_attribute_index_t);
			MEMBER(input_min, op_remap_particle_count_on_scalar_end_cap, int);
			MEMBER(input_max, op_remap_particle_count_on_scalar_end_cap, int);
			MEMBER(output_min, op_remap_particle_count_on_scalar_end_cap, float);
			MEMBER(output_max, op_remap_particle_count_on_scalar_end_cap, float);
			MEMBER(backwards, op_remap_particle_count_on_scalar_end_cap, bool);
			MEMBER(set_method, op_remap_particle_count_on_scalar_end_cap, particle_set_method_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_remap_particle_count_on_scalar_end_cap : public cparticle_function_operator

		class op_random_force : public cparticle_function_force
		{
		public:
			MEMBER(min_force, op_random_force, vector);
			MEMBER(max_force, op_random_force, vector);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_random_force : public cparticle_function_force

		class op_render_status_effect : public cparticle_function_renderer
		{
		public:
			MEMBER(texture_color_warp, op_render_status_effect, cstrong_handle<info_for_resource_type_ctexture_base>);
			MEMBER(texture_detail2, op_render_status_effect, cstrong_handle<info_for_resource_type_ctexture_base>);
			MEMBER(texture_diffuse_warp, op_render_status_effect, cstrong_handle<info_for_resource_type_ctexture_base>);
			MEMBER(texture_fresnel_color_warp, op_render_status_effect, cstrong_handle<info_for_resource_type_ctexture_base>);
			MEMBER(texture_fresnel_warp, op_render_status_effect, cstrong_handle<info_for_resource_type_ctexture_base>);
			MEMBER(texture_specular_warp, op_render_status_effect, cstrong_handle<info_for_resource_type_ctexture_base>);
			MEMBER(texture_env_map, op_render_status_effect, cstrong_handle<info_for_resource_type_ctexture_base>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_render_status_effect : public cparticle_function_renderer

		class op_remap_transform_orientation_to_yaw : public cparticle_function_operator
		{
		public:
			MEMBER(transform_input, op_remap_transform_orientation_to_yaw, cparticle_transform_input);
			MEMBER(field_output, op_remap_transform_orientation_to_yaw, particle_attribute_index_t);
			MEMBER(rot_offset, op_remap_transform_orientation_to_yaw, float);
			MEMBER(spin_strength, op_remap_transform_orientation_to_yaw, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_remap_transform_orientation_to_yaw : public cparticle_function_operator

		class init_remap_initial_visibility_scalar : public cparticle_function_initializer
		{
		public:
			MEMBER(field_output, init_remap_initial_visibility_scalar, particle_attribute_index_t);
			MEMBER(input_min, init_remap_initial_visibility_scalar, float);
			MEMBER(input_max, init_remap_initial_visibility_scalar, float);
			MEMBER(output_min, init_remap_initial_visibility_scalar, float);
			MEMBER(output_max, init_remap_initial_visibility_scalar, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_remap_initial_visibility_scalar : public cparticle_function_initializer

		class init_add_vector_to_vector : public cparticle_function_initializer
		{
		public:
			MEMBER(vec_scale, init_add_vector_to_vector, vector);
			MEMBER(field_output, init_add_vector_to_vector, particle_attribute_index_t);
			MEMBER(field_input, init_add_vector_to_vector, particle_attribute_index_t);
			MEMBER(v_offset_min, init_add_vector_to_vector, vector);
			MEMBER(v_offset_max, init_add_vector_to_vector, vector);
			MEMBER(randomness_parameters, init_add_vector_to_vector, crandom_number_generator_parameters);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_add_vector_to_vector : public cparticle_function_initializer

		class op_particle_physics : public cparticle_function_operator
		{
		public:
			MEMBER(gravity, op_particle_physics, cparticle_collection_vec_input);
			MEMBER(drag, op_particle_physics, cparticle_collection_float_input);
			MEMBER(max_constraint_passes, op_particle_physics, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_particle_physics : public cparticle_function_operator

		class op_set_vector_attribute_to_vector_expression : public cparticle_function_operator
		{
		public:
			MEMBER(expression, op_set_vector_attribute_to_vector_expression, vector_expression_type_t);
			MEMBER(v_input1, op_set_vector_attribute_to_vector_expression, cper_particle_vec_input);
			MEMBER(v_input2, op_set_vector_attribute_to_vector_expression, cper_particle_vec_input);
			MEMBER(output_field, op_set_vector_attribute_to_vector_expression, particle_attribute_index_t);
			MEMBER(set_method, op_set_vector_attribute_to_vector_expression, particle_set_method_t);
			MEMBER(normalized_output, op_set_vector_attribute_to_vector_expression, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_set_vector_attribute_to_vector_expression : public cparticle_function_operator

		class init_init_from_vector_field_snapshot : public cparticle_function_initializer
		{
		public:
			MEMBER(control_point_number, init_init_from_vector_field_snapshot, int);
			MEMBER(local_space_cp, init_init_from_vector_field_snapshot, int);
			MEMBER(weight_update_cp, init_init_from_vector_field_snapshot, int);
			MEMBER(use_vertical_velocity, init_init_from_vector_field_snapshot, bool);
			MEMBER(vec_scale, init_init_from_vector_field_snapshot, cper_particle_vec_input);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_init_from_vector_field_snapshot : public cparticle_function_initializer

		class op_collide_with_parent_particles : public cparticle_function_constraint
		{
		public:
			MEMBER(parent_radius_scale, op_collide_with_parent_particles, cper_particle_float_input);
			MEMBER(radius_scale, op_collide_with_parent_particles, cper_particle_float_input);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_collide_with_parent_particles : public cparticle_function_constraint

		class init_distance_cull : public cparticle_function_initializer
		{
		public:
			MEMBER(control_point, init_distance_cull, int);
			MEMBER(distance, init_distance_cull, cparticle_collection_float_input);
			MEMBER(cull_inside, init_distance_cull, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_distance_cull : public cparticle_function_initializer

		class op_ramp_scalar_spline_simple : public cparticle_function_operator
		{
		public:
			MEMBER(rate, op_ramp_scalar_spline_simple, float);
			MEMBER(start_time, op_ramp_scalar_spline_simple, float);
			MEMBER(end_time, op_ramp_scalar_spline_simple, float);
			MEMBER(field, op_ramp_scalar_spline_simple, particle_attribute_index_t);
			MEMBER(ease_out, op_ramp_scalar_spline_simple, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_ramp_scalar_spline_simple : public cparticle_function_operator

		class init_random_sequence : public cparticle_function_initializer
		{
		public:
			MEMBER(sequence_min, init_random_sequence, int);
			MEMBER(sequence_max, init_random_sequence, int);
			MEMBER(shuffle, init_random_sequence, bool);
			MEMBER(linear, init_random_sequence, bool);
			MEMBER(weighted_list, init_random_sequence, cutl_vector<sequence_weighted_list_t>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_random_sequence : public cparticle_function_initializer

		class op_fade_out : public cparticle_function_operator
		{
		public:
			MEMBER(fade_out_time_min, op_fade_out, float);
			MEMBER(fade_out_time_max, op_fade_out, float);
			MEMBER(fade_out_time_exp, op_fade_out, float);
			MEMBER(fade_bias, op_fade_out, float);
			MEMBER(proportional, op_fade_out, bool);
			MEMBER(ease_in_and_out, op_fade_out, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_fade_out : public cparticle_function_operator

		class op_oscillate_scalar : public cparticle_function_operator
		{
		public:
			MEMBER(rate_min, op_oscillate_scalar, float);
			MEMBER(rate_max, op_oscillate_scalar, float);
			MEMBER(frequency_min, op_oscillate_scalar, float);
			MEMBER(frequency_max, op_oscillate_scalar, float);
			MEMBER(field, op_oscillate_scalar, particle_attribute_index_t);
			MEMBER(proportional, op_oscillate_scalar, bool);
			MEMBER(proportional_op, op_oscillate_scalar, bool);
			MEMBER(start_time_min, op_oscillate_scalar, float);
			MEMBER(start_time_max, op_oscillate_scalar, float);
			MEMBER(end_time_min, op_oscillate_scalar, float);
			MEMBER(end_time_max, op_oscillate_scalar, float);
			MEMBER(osc_mult, op_oscillate_scalar, float);
			MEMBER(osc_add, op_oscillate_scalar, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_oscillate_scalar : public cparticle_function_operator

		class op_render_blobs : public cparticle_function_renderer
		{
		public:
			MEMBER(cube_width, op_render_blobs, cparticle_collection_renderer_float_input);
			MEMBER(cutoff_radius, op_render_blobs, cparticle_collection_renderer_float_input);
			MEMBER(render_radius, op_render_blobs, cparticle_collection_renderer_float_input);
			MEMBER(scale_cp, op_render_blobs, int);
			MEMBER(material_vars, op_render_blobs, cutl_vector<material_variable_t>);
			MEMBER(h_material, op_render_blobs, cstrong_handle<info_for_resource_type_imaterial2>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_render_blobs : public cparticle_function_renderer

		class init_init_vec_collection : public cparticle_function_initializer
		{
		public:
			MEMBER(input_value, init_init_vec_collection, cparticle_collection_vec_input);
			MEMBER(output_field, init_init_vec_collection, particle_attribute_index_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_init_vec_collection : public cparticle_function_initializer

		class op_world_trace_constraint : public cparticle_function_constraint
		{
		public:
			MEMBER(cp, op_world_trace_constraint, int);
			MEMBER(vec_cp_offset, op_world_trace_constraint, vector);
			MEMBER(collision_mode, op_world_trace_constraint, particle_collision_mode_t);
			MEMBER(collision_mode_min, op_world_trace_constraint, particle_collision_mode_t);
			MEMBER(trace_set, op_world_trace_constraint, particle_trace_set_t);
			MEMBER_ARR(collision_group_name_arr, op_world_trace_constraint, 128, char);
			MEMBER(world_only, op_world_trace_constraint, bool);
			MEMBER(brush_only, op_world_trace_constraint, bool);
			MEMBER(include_water, op_world_trace_constraint, bool);
			MEMBER(ignore_cp, op_world_trace_constraint, int);
			MEMBER(cp_movement_tolerance, op_world_trace_constraint, float);
			MEMBER(retest_rate, op_world_trace_constraint, float);
			MEMBER(trace_tolerance, op_world_trace_constraint, float);
			MEMBER(collision_confirmation_speed, op_world_trace_constraint, float);
			MEMBER(max_traces_per_frame, op_world_trace_constraint, float);
			MEMBER(radius_scale, op_world_trace_constraint, cper_particle_float_input);
			MEMBER(bounce_amount, op_world_trace_constraint, cper_particle_float_input);
			MEMBER(slide_amount, op_world_trace_constraint, cper_particle_float_input);
			MEMBER(random_dir_scale, op_world_trace_constraint, cper_particle_float_input);
			MEMBER(decay_bounce, op_world_trace_constraint, bool);
			MEMBER(killon_contact, op_world_trace_constraint, bool);
			MEMBER(min_speed, op_world_trace_constraint, float);
			MEMBER(set_normal, op_world_trace_constraint, bool);
			MEMBER(stick_on_collision_field, op_world_trace_constraint, particle_attribute_index_t);
			MEMBER(stop_speed, op_world_trace_constraint, cper_particle_float_input);
			MEMBER(entity_stick_data_field, op_world_trace_constraint, particle_attribute_index_t);
			MEMBER(entity_stick_normal_field, op_world_trace_constraint, particle_attribute_index_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_world_trace_constraint : public cparticle_function_constraint

		class op_render_post_processing : public cparticle_function_renderer
		{
		public:
			MEMBER(post_process_strength, op_render_post_processing, cper_particle_float_input);
			MEMBER(h_post_texture, op_render_post_processing, cstrong_handle<info_for_resource_type_cpost_processing_resource>);
			MEMBER(priority, op_render_post_processing, particle_post_process_priority_group_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_render_post_processing : public cparticle_function_renderer

		class init_random_scalar : public cparticle_function_initializer
		{
		public:
			MEMBER(min, init_random_scalar, float);
			MEMBER(max, init_random_scalar, float);
			MEMBER(exponent, init_random_scalar, float);
			MEMBER(field_output, init_random_scalar, particle_attribute_index_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_random_scalar : public cparticle_function_initializer

		class init_position_place_on_ground : public cparticle_function_initializer
		{
		public:
			MEMBER(offset, init_position_place_on_ground, cper_particle_float_input);
			MEMBER(max_trace_length, init_position_place_on_ground, cper_particle_float_input);
			MEMBER_ARR(collision_group_name_arr, init_position_place_on_ground, 128, char);
			MEMBER(trace_set, init_position_place_on_ground, particle_trace_set_t);
			MEMBER(trace_miss_behavior, init_position_place_on_ground, particle_trace_miss_behavior_t);
			MEMBER(include_water, init_position_place_on_ground, bool);
			MEMBER(set_normal, init_position_place_on_ground, bool);
			MEMBER(set_pxyzonly, init_position_place_on_ground, bool);
			MEMBER(trace_along_normal, init_position_place_on_ground, bool);
			MEMBER(offseton_col_only, init_position_place_on_ground, bool);
			MEMBER(offset_by_radius_factor, init_position_place_on_ground, float);
			MEMBER(preserve_offset_cp, init_position_place_on_ground, int);
			MEMBER(ignore_cp, init_position_place_on_ground, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_position_place_on_ground : public cparticle_function_initializer

		class op_cylindrical_distance_to_transform : public cparticle_function_operator
		{
		public:
			MEMBER(field_output, op_cylindrical_distance_to_transform, particle_attribute_index_t);
			MEMBER(input_min, op_cylindrical_distance_to_transform, cper_particle_float_input);
			MEMBER(input_max, op_cylindrical_distance_to_transform, cper_particle_float_input);
			MEMBER(output_min, op_cylindrical_distance_to_transform, cper_particle_float_input);
			MEMBER(output_max, op_cylindrical_distance_to_transform, cper_particle_float_input);
			MEMBER(transform_start, op_cylindrical_distance_to_transform, cparticle_transform_input);
			MEMBER(transform_end, op_cylindrical_distance_to_transform, cparticle_transform_input);
			MEMBER(set_method, op_cylindrical_distance_to_transform, particle_set_method_t);
			MEMBER(active_range, op_cylindrical_distance_to_transform, bool);
			MEMBER(additive, op_cylindrical_distance_to_transform, bool);
			MEMBER(capsule, op_cylindrical_distance_to_transform, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_cylindrical_distance_to_transform : public cparticle_function_operator

		class op_vector_field_snapshot : public cparticle_function_operator
		{
		public:
			MEMBER(control_point_number, op_vector_field_snapshot, int);
			MEMBER(attribute_to_write, op_vector_field_snapshot, particle_attribute_index_t);
			MEMBER(local_space_cp, op_vector_field_snapshot, int);
			MEMBER(interpolation, op_vector_field_snapshot, cper_particle_float_input);
			MEMBER(vec_scale, op_vector_field_snapshot, cper_particle_vec_input);
			MEMBER(boundary_dampening, op_vector_field_snapshot, float);
			MEMBER(set_velocity, op_vector_field_snapshot, bool);
			MEMBER(lock_to_surface, op_vector_field_snapshot, bool);
			MEMBER(grid_spacing, op_vector_field_snapshot, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_vector_field_snapshot : public cparticle_function_operator

		class op_controlpoint_light : public cparticle_function_operator
		{
		public:
			MEMBER(scale, op_controlpoint_light, float);
			MEMBER(control_point1, op_controlpoint_light, int);
			MEMBER(control_point2, op_controlpoint_light, int);
			MEMBER(control_point3, op_controlpoint_light, int);
			MEMBER(control_point4, op_controlpoint_light, int);
			MEMBER(vec_cpoffset1, op_controlpoint_light, vector);
			MEMBER(vec_cpoffset2, op_controlpoint_light, vector);
			MEMBER(vec_cpoffset3, op_controlpoint_light, vector);
			MEMBER(vec_cpoffset4, op_controlpoint_light, vector);
			MEMBER(light_fifty_dist1, op_controlpoint_light, float);
			MEMBER(light_zero_dist1, op_controlpoint_light, float);
			MEMBER(light_fifty_dist2, op_controlpoint_light, float);
			MEMBER(light_zero_dist2, op_controlpoint_light, float);
			MEMBER(light_fifty_dist3, op_controlpoint_light, float);
			MEMBER(light_zero_dist3, op_controlpoint_light, float);
			MEMBER(light_fifty_dist4, op_controlpoint_light, float);
			MEMBER(light_zero_dist4, op_controlpoint_light, float);
			MEMBER(light_color1, op_controlpoint_light, color);
			MEMBER(light_color2, op_controlpoint_light, color);
			MEMBER(light_color3, op_controlpoint_light, color);
			MEMBER(light_color4, op_controlpoint_light, color);
			MEMBER(light_type1, op_controlpoint_light, bool);
			MEMBER(light_type2, op_controlpoint_light, bool);
			MEMBER(light_type3, op_controlpoint_light, bool);
			MEMBER(light_type4, op_controlpoint_light, bool);
			MEMBER(light_dynamic1, op_controlpoint_light, bool);
			MEMBER(light_dynamic2, op_controlpoint_light, bool);
			MEMBER(light_dynamic3, op_controlpoint_light, bool);
			MEMBER(light_dynamic4, op_controlpoint_light, bool);
			MEMBER(use_normal, op_controlpoint_light, bool);
			MEMBER(use_hlambert, op_controlpoint_light, bool);
			MEMBER(clamp_lower_range, op_controlpoint_light, bool);
			MEMBER(clamp_upper_range, op_controlpoint_light, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_controlpoint_light : public cparticle_function_operator

		class op_choose_random_children_in_group : public cparticle_function_pre_emission
		{
		public:
			MEMBER(child_group_id, op_choose_random_children_in_group, int);
			MEMBER(number_of_children, op_choose_random_children_in_group, cparticle_collection_float_input);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_choose_random_children_in_group : public cparticle_function_pre_emission

		class init_create_within_box : public cparticle_function_initializer
		{
		public:
			MEMBER(vec_min, init_create_within_box, cper_particle_vec_input);
			MEMBER(vec_max, init_create_within_box, cper_particle_vec_input);
			MEMBER(control_point_number, init_create_within_box, int);
			MEMBER(local_space, init_create_within_box, bool);
			MEMBER(randomness_parameters, init_create_within_box, crandom_number_generator_parameters);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_create_within_box : public cparticle_function_initializer

		class op_update_light_source : public cparticle_function_operator
		{
		public:
			MEMBER(v_color_tint, op_update_light_source, color);
			MEMBER(brightness_scale, op_update_light_source, float);
			MEMBER(radius_scale, op_update_light_source, float);
			MEMBER(minimum_lighting_radius, op_update_light_source, float);
			MEMBER(maximum_lighting_radius, op_update_light_source, float);
			MEMBER(position_damping_constant, op_update_light_source, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_update_light_source : public cparticle_function_operator

		class op_render_screen_velocity_rotate : public cparticle_function_renderer
		{
		public:
			MEMBER(rotate_rate_degrees, op_render_screen_velocity_rotate, float);
			MEMBER(forward_degrees, op_render_screen_velocity_rotate, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_render_screen_velocity_rotate : public cparticle_function_renderer

		class op_percentage_between_transforms_vector : public cparticle_function_operator
		{
		public:
			MEMBER(field_output, op_percentage_between_transforms_vector, particle_attribute_index_t);
			MEMBER(input_min, op_percentage_between_transforms_vector, float);
			MEMBER(input_max, op_percentage_between_transforms_vector, float);
			MEMBER(vec_output_min, op_percentage_between_transforms_vector, vector);
			MEMBER(vec_output_max, op_percentage_between_transforms_vector, vector);
			MEMBER(transform_start, op_percentage_between_transforms_vector, cparticle_transform_input);
			MEMBER(transform_end, op_percentage_between_transforms_vector, cparticle_transform_input);
			MEMBER(set_method, op_percentage_between_transforms_vector, particle_set_method_t);
			MEMBER(active_range, op_percentage_between_transforms_vector, bool);
			MEMBER(radial_check, op_percentage_between_transforms_vector, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_percentage_between_transforms_vector : public cparticle_function_operator

		class op_remap_named_model_mesh_group_end_cap : public op_remap_named_model_element_end_cap
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_remap_named_model_mesh_group_end_cap : public op_remap_named_model_element_end_cap

		class cparticle_system_definition : public iparticle_system_definition
		{
		public:
			MEMBER(behavior_version, cparticle_system_definition, int);
			MEMBER(pre_emission_operators, cparticle_system_definition, cutl_vector<cparticle_function_pre_emission*>);
			MEMBER(emitters, cparticle_system_definition, cutl_vector<cparticle_function_emitter*>);
			MEMBER(initializers, cparticle_system_definition, cutl_vector<cparticle_function_initializer*>);
			MEMBER(operators, cparticle_system_definition, cutl_vector<cparticle_function_operator*>);
			MEMBER(force_generators, cparticle_system_definition, cutl_vector<cparticle_function_force*>);
			MEMBER(constraints, cparticle_system_definition, cutl_vector<cparticle_function_constraint*>);
			MEMBER(renderers, cparticle_system_definition, cutl_vector<cparticle_function_renderer*>);
			MEMBER(children, cparticle_system_definition, cutl_vector<particle_children_info_t>);
			MEMBER(first_multiple_override_backward_compat, cparticle_system_definition, int);
			MEMBER(initial_particles, cparticle_system_definition, int);
			MEMBER(max_particles, cparticle_system_definition, int);
			MEMBER(group_id, cparticle_system_definition, int);
			MEMBER(bounding_box_min, cparticle_system_definition, vector);
			MEMBER(bounding_box_max, cparticle_system_definition, vector);
			MEMBER(depth_sort_bias, cparticle_system_definition, float);
			MEMBER(sort_override_position_cp, cparticle_system_definition, int);
			MEMBER(infinite_bounds, cparticle_system_definition, bool);
			MEMBER(enable_named_values, cparticle_system_definition, bool);
			MEMBER(named_value_domain, cparticle_system_definition, cutl_string);
			MEMBER(named_value_locals, cparticle_system_definition, cutl_vector<particle_named_value_source_t*>);
			MEMBER(constant_color, cparticle_system_definition, color);
			MEMBER(constant_normal, cparticle_system_definition, vector);
			MEMBER(constant_radius, cparticle_system_definition, float);
			MEMBER(constant_rotation, cparticle_system_definition, float);
			MEMBER(constant_rotation_speed, cparticle_system_definition, float);
			MEMBER(constant_lifespan, cparticle_system_definition, float);
			MEMBER(constant_sequence_number, cparticle_system_definition, int);
			MEMBER(constant_sequence_number1, cparticle_system_definition, int);
			MEMBER(snapshot_control_point, cparticle_system_definition, int);
			MEMBER(h_snapshot, cparticle_system_definition, cstrong_handle<info_for_resource_type_iparticle_snapshot>);
			MEMBER(psz_cull_replacement_name, cparticle_system_definition, cstrong_handle<info_for_resource_type_iparticle_system_definition>);
			MEMBER(cull_radius, cparticle_system_definition, float);
			MEMBER(cull_fill_cost, cparticle_system_definition, float);
			MEMBER(cull_control_point, cparticle_system_definition, int);
			MEMBER(h_fallback, cparticle_system_definition, cstrong_handle<info_for_resource_type_iparticle_system_definition>);
			MEMBER(fallback_max_count, cparticle_system_definition, int);
			MEMBER(h_low_violence_def, cparticle_system_definition, cstrong_handle<info_for_resource_type_iparticle_system_definition>);
			MEMBER(h_reference_replacement, cparticle_system_definition, cstrong_handle<info_for_resource_type_iparticle_system_definition>);
			MEMBER(pre_simulation_time, cparticle_system_definition, float);
			MEMBER(stop_simulation_after_time, cparticle_system_definition, float);
			MEMBER(maximum_time_step, cparticle_system_definition, float);
			MEMBER(maximum_sim_time, cparticle_system_definition, float);
			MEMBER(minimum_sim_time, cparticle_system_definition, float);
			MEMBER(minimum_time_step, cparticle_system_definition, float);
			MEMBER(minimum_frames, cparticle_system_definition, int);
			MEMBER(min_cpulevel, cparticle_system_definition, int);
			MEMBER(min_gpulevel, cparticle_system_definition, int);
			MEMBER(no_draw_time_to_go_to_sleep, cparticle_system_definition, float);
			MEMBER(max_draw_distance, cparticle_system_definition, float);
			MEMBER(start_fade_distance, cparticle_system_definition, float);
			MEMBER(max_creation_distance, cparticle_system_definition, float);
			MEMBER(aggregation_min_available_particles, cparticle_system_definition, int);
			MEMBER(aggregate_radius, cparticle_system_definition, float);
			MEMBER(should_batch, cparticle_system_definition, bool);
			MEMBER(should_hitboxes_fallback_to_render_bounds, cparticle_system_definition, bool);
			MEMBER(should_hitboxes_fallback_to_snapshot, cparticle_system_definition, bool);
			MEMBER(view_model_effect, cparticle_system_definition, inheritable_bool_type_t);
			MEMBER(screen_space_effect, cparticle_system_definition, bool);
			MEMBER(psz_target_layer_id, cparticle_system_definition, cutl_symbol_large);
			MEMBER(skip_render_control_point, cparticle_system_definition, int);
			MEMBER(allow_render_control_point, cparticle_system_definition, int);
			MEMBER(should_sort, cparticle_system_definition, bool);
			MEMBER(control_point_configurations, cparticle_system_definition, cutl_vector<particle_control_point_configuration_t>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cparticle_system_definition : public iparticle_system_definition

		class op_render_material_proxy : public cparticle_function_renderer
		{
		public:
			MEMBER(material_control_point, op_render_material_proxy, int);
			MEMBER(proxy_type, op_render_material_proxy, material_proxy_type_t);
			MEMBER(material_vars, op_render_material_proxy, cutl_vector<material_variable_t>);
			MEMBER(h_override_material, op_render_material_proxy, cstrong_handle<info_for_resource_type_imaterial2>);
			MEMBER(material_override_enabled, op_render_material_proxy, cparticle_collection_float_input);
			MEMBER(vec_color_scale, op_render_material_proxy, cparticle_collection_vec_input);
			MEMBER(alpha, op_render_material_proxy, cper_particle_float_input);
			MEMBER(color_blend_type, op_render_material_proxy, particle_color_blend_type_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_render_material_proxy : public cparticle_function_renderer

		class op_remap_cpto_scalar : public cparticle_function_operator
		{
		public:
			MEMBER(cpinput, op_remap_cpto_scalar, int);
			MEMBER(field_output, op_remap_cpto_scalar, particle_attribute_index_t);
			MEMBER(field, op_remap_cpto_scalar, int);
			MEMBER(input_min, op_remap_cpto_scalar, float);
			MEMBER(input_max, op_remap_cpto_scalar, float);
			MEMBER(output_min, op_remap_cpto_scalar, float);
			MEMBER(output_max, op_remap_cpto_scalar, float);
			MEMBER(start_time, op_remap_cpto_scalar, float);
			MEMBER(end_time, op_remap_cpto_scalar, float);
			MEMBER(interp_rate, op_remap_cpto_scalar, float);
			MEMBER(set_method, op_remap_cpto_scalar, particle_set_method_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_remap_cpto_scalar : public cparticle_function_operator

		class init_distance_to_neighbor_cull : public cparticle_function_initializer
		{
		public:
			MEMBER(distance, init_distance_to_neighbor_cull, cper_particle_float_input);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_distance_to_neighbor_cull : public cparticle_function_initializer

		class op_set_single_control_point_position : public cparticle_function_pre_emission
		{
		public:
			MEMBER(set_once, op_set_single_control_point_position, bool);
			MEMBER(cp1, op_set_single_control_point_position, int);
			MEMBER(vec_cp1_pos, op_set_single_control_point_position, cparticle_collection_vec_input);
			MEMBER(transform_input, op_set_single_control_point_position, cparticle_transform_input);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_set_single_control_point_position : public cparticle_function_pre_emission

		class op_snapshot_rigid_skin_to_bones : public cparticle_function_operator
		{
		public:
			MEMBER(transform_normals, op_snapshot_rigid_skin_to_bones, bool);
			MEMBER(transform_radii, op_snapshot_rigid_skin_to_bones, bool);
			MEMBER(control_point_number, op_snapshot_rigid_skin_to_bones, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_snapshot_rigid_skin_to_bones : public cparticle_function_operator

		class init_random_yaw : public cgeneral_random_rotation
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_random_yaw : public cgeneral_random_rotation

		struct particle_named_value_configuration_t
		{
			MEMBER(config_name, particle_named_value_configuration_t, cutl_string);
			MEMBER(config_value, particle_named_value_configuration_t, key_values3);
			MEMBER(attach_type, particle_named_value_configuration_t, particle_attachment_t);
			MEMBER(bound_entity_path, particle_named_value_configuration_t, cutl_string);
			MEMBER(str_entity_scope, particle_named_value_configuration_t, cutl_string);
			MEMBER(str_attachment_name, particle_named_value_configuration_t, cutl_string);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct particle_named_value_configuration_t

		class op_set_cpto_vector : public cparticle_function_operator
		{
		public:
			MEMBER(cpinput, op_set_cpto_vector, int);
			MEMBER(field_output, op_set_cpto_vector, particle_attribute_index_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_set_cpto_vector : public cparticle_function_operator

		class op_drag_relative_to_plane : public cparticle_function_operator
		{
		public:
			MEMBER(drag_at_plane, op_drag_relative_to_plane, cparticle_collection_float_input);
			MEMBER(falloff, op_drag_relative_to_plane, cparticle_collection_float_input);
			MEMBER(directional, op_drag_relative_to_plane, bool);
			MEMBER(vec_plane_normal, op_drag_relative_to_plane, cparticle_collection_vec_input);
			MEMBER(control_point_number, op_drag_relative_to_plane, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_drag_relative_to_plane : public cparticle_function_operator

		class op_lerp_end_cap_scalar : public cparticle_function_operator
		{
		public:
			MEMBER(field_output, op_lerp_end_cap_scalar, particle_attribute_index_t);
			MEMBER(output, op_lerp_end_cap_scalar, float);
			MEMBER(lerp_time, op_lerp_end_cap_scalar, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_lerp_end_cap_scalar : public cparticle_function_operator

		class op_remap_control_point_direction_to_vector : public cparticle_function_operator
		{
		public:
			MEMBER(field_output, op_remap_control_point_direction_to_vector, particle_attribute_index_t);
			MEMBER(scale, op_remap_control_point_direction_to_vector, float);
			MEMBER(control_point_number, op_remap_control_point_direction_to_vector, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_remap_control_point_direction_to_vector : public cparticle_function_operator

		class op_remap_transform_visibility_to_scalar : public cparticle_function_operator
		{
		public:
			MEMBER(set_method, op_remap_transform_visibility_to_scalar, particle_set_method_t);
			MEMBER(transform_input, op_remap_transform_visibility_to_scalar, cparticle_transform_input);
			MEMBER(field_output, op_remap_transform_visibility_to_scalar, particle_attribute_index_t);
			MEMBER(input_min, op_remap_transform_visibility_to_scalar, float);
			MEMBER(input_max, op_remap_transform_visibility_to_scalar, float);
			MEMBER(output_min, op_remap_transform_visibility_to_scalar, float);
			MEMBER(output_max, op_remap_transform_visibility_to_scalar, float);
			MEMBER(radius, op_remap_transform_visibility_to_scalar, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_remap_transform_visibility_to_scalar : public cparticle_function_operator

		class op_set_random_control_point_position : public cparticle_function_pre_emission
		{
		public:
			MEMBER(use_world_location, op_set_random_control_point_position, bool);
			MEMBER(orient, op_set_random_control_point_position, bool);
			MEMBER(cp1, op_set_random_control_point_position, int);
			MEMBER(head_location, op_set_random_control_point_position, int);
			MEMBER(re_random_rate, op_set_random_control_point_position, cparticle_collection_float_input);
			MEMBER(vec_cpmin_pos, op_set_random_control_point_position, vector);
			MEMBER(vec_cpmax_pos, op_set_random_control_point_position, vector);
			MEMBER(interpolation, op_set_random_control_point_position, cparticle_collection_float_input);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_set_random_control_point_position : public cparticle_function_pre_emission

		class cnew_particle_effect : public iparticle_effect
		{
		public:
			MEMBER(next_ptr, cnew_particle_effect, cnew_particle_effect*);
			MEMBER(prev_ptr, cnew_particle_effect, cnew_particle_effect*);
			MEMBER(particles_ptr, cnew_particle_effect, iparticle_collection*);
			MEMBER(debug_name_ptr, cnew_particle_effect, char*);
			MEMBER(dont_remove, cnew_particle_effect, bool);
			MEMBER(remove, cnew_particle_effect, bool);
			MEMBER(needs_bbox_update, cnew_particle_effect, bool);
			MEMBER(is_first_frame, cnew_particle_effect, bool);
			MEMBER(auto_update_bbox, cnew_particle_effect, bool);
			MEMBER(allocated, cnew_particle_effect, bool);
			MEMBER(simulate, cnew_particle_effect, bool);
			MEMBER(should_perform_cull_check, cnew_particle_effect, bool);
			MEMBER(force_no_draw, cnew_particle_effect, bool);
			MEMBER(should_save, cnew_particle_effect, bool);
			MEMBER(disable_aggregation, cnew_particle_effect, bool);
			MEMBER(should_simulate_during_game_paused, cnew_particle_effect, bool);
			MEMBER(should_check_fo_w, cnew_particle_effect, bool);
			MEMBER(v_sort_origin, cnew_particle_effect, vector);
			MEMBER(scale, cnew_particle_effect, float);
			MEMBER(h_owner_ptr, cnew_particle_effect, particle_ehandle__*);
			MEMBER(owning_particle_property_ptr, cnew_particle_effect, cparticle_property*);
			MEMBER(freeze_transition_start, cnew_particle_effect, float);
			MEMBER(freeze_transition_duration, cnew_particle_effect, float);
			MEMBER(freeze_transition_override, cnew_particle_effect, float);
			MEMBER(freeze_transition_active, cnew_particle_effect, bool);
			MEMBER(freeze_target_state, cnew_particle_effect, bool);
			MEMBER(can_freeze, cnew_particle_effect, bool);
			MEMBER(last_min, cnew_particle_effect, vector);
			MEMBER(last_max, cnew_particle_effect, vector);
			MEMBER(split_screen_user, cnew_particle_effect, csplit_screen_slot);
			MEMBER(vec_aggregation_center, cnew_particle_effect, vector);
			MEMBER(ref_count, cnew_particle_effect, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cnew_particle_effect : public iparticle_effect

		class op_render_gpu_implicit : public cparticle_function_renderer
		{
		public:
			MEMBER(use_per_particle_radius, op_render_gpu_implicit, bool);
			MEMBER(grid_size, op_render_gpu_implicit, cparticle_collection_renderer_float_input);
			MEMBER(radius_scale, op_render_gpu_implicit, cparticle_collection_renderer_float_input);
			MEMBER(isosurface_threshold, op_render_gpu_implicit, cparticle_collection_renderer_float_input);
			MEMBER(scale_cp, op_render_gpu_implicit, int);
			MEMBER(h_material, op_render_gpu_implicit, cstrong_handle<info_for_resource_type_imaterial2>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_render_gpu_implicit : public cparticle_function_renderer

		class op_end_cap_timed_freeze : public cparticle_function_operator
		{
		public:
			MEMBER(freeze_time, op_end_cap_timed_freeze, cparticle_collection_float_input);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_end_cap_timed_freeze : public cparticle_function_operator

		class op_set_control_point_to_player : public cparticle_function_pre_emission
		{
		public:
			MEMBER(cp1, op_set_control_point_to_player, int);
			MEMBER(vec_cp1_pos, op_set_control_point_to_player, vector);
			MEMBER(orient_to_eyes, op_set_control_point_to_player, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_set_control_point_to_player : public cparticle_function_pre_emission

		class op_remap_named_model_sequence_once_timed : public op_remap_named_model_element_once_timed
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_remap_named_model_sequence_once_timed : public op_remap_named_model_element_once_timed

		class op_turbulence_force : public cparticle_function_force
		{
		public:
			MEMBER(noise_coord_scale0, op_turbulence_force, float);
			MEMBER(noise_coord_scale1, op_turbulence_force, float);
			MEMBER(noise_coord_scale2, op_turbulence_force, float);
			MEMBER(noise_coord_scale3, op_turbulence_force, float);
			MEMBER(vec_noise_amount0, op_turbulence_force, vector);
			MEMBER(vec_noise_amount1, op_turbulence_force, vector);
			MEMBER(vec_noise_amount2, op_turbulence_force, vector);
			MEMBER(vec_noise_amount3, op_turbulence_force, vector);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_turbulence_force : public cparticle_function_force

		class op_reinitialize_scalar_end_cap : public cparticle_function_operator
		{
		public:
			MEMBER(field_output, op_reinitialize_scalar_end_cap, particle_attribute_index_t);
			MEMBER(output_min, op_reinitialize_scalar_end_cap, float);
			MEMBER(output_max, op_reinitialize_scalar_end_cap, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_reinitialize_scalar_end_cap : public cparticle_function_operator

		class op_ramp_scalar_linear : public cparticle_function_operator
		{
		public:
			MEMBER(rate_min, op_ramp_scalar_linear, float);
			MEMBER(rate_max, op_ramp_scalar_linear, float);
			MEMBER(start_time_min, op_ramp_scalar_linear, float);
			MEMBER(start_time_max, op_ramp_scalar_linear, float);
			MEMBER(end_time_min, op_ramp_scalar_linear, float);
			MEMBER(end_time_max, op_ramp_scalar_linear, float);
			MEMBER(field, op_ramp_scalar_linear, particle_attribute_index_t);
			MEMBER(proportional_op, op_ramp_scalar_linear, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_ramp_scalar_linear : public cparticle_function_operator

		class op_interpolate_radius : public cparticle_function_operator
		{
		public:
			MEMBER(start_time, op_interpolate_radius, float);
			MEMBER(end_time, op_interpolate_radius, float);
			MEMBER(start_scale, op_interpolate_radius, float);
			MEMBER(end_scale, op_interpolate_radius, float);
			MEMBER(ease_in_and_out, op_interpolate_radius, bool);
			MEMBER(bias, op_interpolate_radius, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_interpolate_radius : public cparticle_function_operator

		class op_set_control_point_to_impact_point : public cparticle_function_pre_emission
		{
		public:
			MEMBER(cpout, op_set_control_point_to_impact_point, int);
			MEMBER(cpin, op_set_control_point_to_impact_point, int);
			MEMBER(update_rate, op_set_control_point_to_impact_point, float);
			MEMBER(trace_length, op_set_control_point_to_impact_point, cparticle_collection_float_input);
			MEMBER(start_offset, op_set_control_point_to_impact_point, float);
			MEMBER(offset, op_set_control_point_to_impact_point, float);
			MEMBER(vec_trace_dir, op_set_control_point_to_impact_point, vector);
			MEMBER_ARR(collision_group_name_arr, op_set_control_point_to_impact_point, 128, char);
			MEMBER(trace_set, op_set_control_point_to_impact_point, particle_trace_set_t);
			MEMBER(set_to_endpoint, op_set_control_point_to_impact_point, bool);
			MEMBER(trace_to_closest_surface, op_set_control_point_to_impact_point, bool);
			MEMBER(include_water, op_set_control_point_to_impact_point, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_set_control_point_to_impact_point : public cparticle_function_pre_emission

		class op_render_vrhaptic_event : public cparticle_function_renderer
		{
		public:
			MEMBER(hand, op_render_vrhaptic_event, particle_vrhand_choice_list_t);
			MEMBER(output_hand_cp, op_render_vrhaptic_event, int);
			MEMBER(output_field, op_render_vrhaptic_event, int);
			MEMBER(amplitude, op_render_vrhaptic_event, cper_particle_float_input);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_render_vrhaptic_event : public cparticle_function_renderer

		class op_position_lock : public cparticle_function_operator
		{
		public:
			MEMBER(transform_input, op_position_lock, cparticle_transform_input);
			MEMBER(start_time_min, op_position_lock, float);
			MEMBER(start_time_max, op_position_lock, float);
			MEMBER(start_time_exp, op_position_lock, float);
			MEMBER(end_time_min, op_position_lock, float);
			MEMBER(end_time_max, op_position_lock, float);
			MEMBER(end_time_exp, op_position_lock, float);
			MEMBER(range, op_position_lock, float);
			MEMBER(range_bias, op_position_lock, cparticle_collection_float_input);
			MEMBER(jump_threshold, op_position_lock, float);
			MEMBER(prev_pos_scale, op_position_lock, float);
			MEMBER(lock_rot, op_position_lock, bool);
			MEMBER(vec_scale, op_position_lock, cparticle_collection_vec_input);
			MEMBER(field_output, op_position_lock, particle_attribute_index_t);
			MEMBER(field_output_prev, op_position_lock, particle_attribute_index_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_position_lock : public cparticle_function_operator

		class op_oscillate_vector : public cparticle_function_operator
		{
		public:
			MEMBER(rate_min, op_oscillate_vector, vector);
			MEMBER(rate_max, op_oscillate_vector, vector);
			MEMBER(frequency_min, op_oscillate_vector, vector);
			MEMBER(frequency_max, op_oscillate_vector, vector);
			MEMBER(field, op_oscillate_vector, particle_attribute_index_t);
			MEMBER(proportional, op_oscillate_vector, bool);
			MEMBER(proportional_op, op_oscillate_vector, bool);
			MEMBER(offset, op_oscillate_vector, bool);
			MEMBER(start_time_min, op_oscillate_vector, float);
			MEMBER(start_time_max, op_oscillate_vector, float);
			MEMBER(end_time_min, op_oscillate_vector, float);
			MEMBER(end_time_max, op_oscillate_vector, float);
			MEMBER(osc_mult, op_oscillate_vector, cper_particle_float_input);
			MEMBER(osc_add, op_oscillate_vector, cper_particle_float_input);
			MEMBER(rate_scale, op_oscillate_vector, cper_particle_float_input);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_oscillate_vector : public cparticle_function_operator

		class op_movement_skinned_position_from_cpsnapshot : public cparticle_function_operator
		{
		public:
			MEMBER(snapshot_control_point_number, op_movement_skinned_position_from_cpsnapshot, int);
			MEMBER(control_point_number, op_movement_skinned_position_from_cpsnapshot, int);
			MEMBER(random, op_movement_skinned_position_from_cpsnapshot, bool);
			MEMBER(random_seed, op_movement_skinned_position_from_cpsnapshot, int);
			MEMBER(set_normal, op_movement_skinned_position_from_cpsnapshot, bool);
			MEMBER(set_radius, op_movement_skinned_position_from_cpsnapshot, bool);
			MEMBER(increment, op_movement_skinned_position_from_cpsnapshot, cparticle_collection_float_input);
			MEMBER(full_loop_increment, op_movement_skinned_position_from_cpsnapshot, cparticle_collection_float_input);
			MEMBER(snap_shot_start_point, op_movement_skinned_position_from_cpsnapshot, cparticle_collection_float_input);
			MEMBER(interpolation, op_movement_skinned_position_from_cpsnapshot, cper_particle_float_input);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_movement_skinned_position_from_cpsnapshot : public cparticle_function_operator

		class op_set_control_point_orientation : public cparticle_function_pre_emission
		{
		public:
			MEMBER(use_world_location, op_set_control_point_orientation, bool);
			MEMBER(randomize, op_set_control_point_orientation, bool);
			MEMBER(set_once, op_set_control_point_orientation, bool);
			MEMBER(cp, op_set_control_point_orientation, int);
			MEMBER(head_location, op_set_control_point_orientation, int);
			MEMBER(vec_rotation, op_set_control_point_orientation, qangle);
			MEMBER(vec_rotation_b, op_set_control_point_orientation, qangle);
			MEMBER(interpolation, op_set_control_point_orientation, cparticle_collection_float_input);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_set_control_point_orientation : public cparticle_function_pre_emission

		class init_velocity_from_cp : public cparticle_function_initializer
		{
		public:
			MEMBER(velocity_input, init_velocity_from_cp, cparticle_collection_vec_input);
			MEMBER(transform_input, init_velocity_from_cp, cparticle_transform_input);
			MEMBER(velocity_scale, init_velocity_from_cp, float);
			MEMBER(direction_only, init_velocity_from_cp, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_velocity_from_cp : public cparticle_function_initializer

		class cbase_renderer_source2 : public cparticle_function_renderer
		{
		public:
			MEMBER(radius_scale, cbase_renderer_source2, cparticle_collection_renderer_float_input);
			MEMBER(alpha_scale, cbase_renderer_source2, cparticle_collection_renderer_float_input);
			MEMBER(roll_scale, cbase_renderer_source2, cparticle_collection_renderer_float_input);
			MEMBER(alpha2_field, cbase_renderer_source2, particle_attribute_index_t);
			MEMBER(vec_color_scale, cbase_renderer_source2, cparticle_collection_renderer_vec_input);
			MEMBER(color_blend_type, cbase_renderer_source2, particle_color_blend_type_t);
			MEMBER(shader_type, cbase_renderer_source2, sprite_card_shader_type_t);
			MEMBER(str_shader_override, cbase_renderer_source2, cutl_string);
			MEMBER(center_xoffset, cbase_renderer_source2, cparticle_collection_renderer_float_input);
			MEMBER(center_yoffset, cbase_renderer_source2, cparticle_collection_renderer_float_input);
			MEMBER(bump_strength, cbase_renderer_source2, float);
			MEMBER(crop_texture_override, cbase_renderer_source2, particle_sequence_crop_override_t);
			MEMBER(vec_textures_input, cbase_renderer_source2, cutl_vector<texture_group_t>);
			MEMBER(animation_rate, cbase_renderer_source2, float);
			MEMBER(animation_type, cbase_renderer_source2, animation_type_t);
			MEMBER(animate_in_fps, cbase_renderer_source2, bool);
			MEMBER(self_illum_amount, cbase_renderer_source2, cparticle_collection_renderer_float_input);
			MEMBER(diffuse_amount, cbase_renderer_source2, cparticle_collection_renderer_float_input);
			MEMBER(lighting_control_point, cbase_renderer_source2, int);
			MEMBER(self_illum_per_particle, cbase_renderer_source2, particle_attribute_index_t);
			MEMBER(output_blend_mode, cbase_renderer_source2, particle_output_blend_mode_t);
			MEMBER(gamma_correct_vertex_colors, cbase_renderer_source2, bool);
			MEMBER(saturate_color_pre_alpha_blend, cbase_renderer_source2, bool);
			MEMBER(add_self_amount, cbase_renderer_source2, cparticle_collection_renderer_float_input);
			MEMBER(desaturation, cbase_renderer_source2, cparticle_collection_renderer_float_input);
			MEMBER(overbright_factor, cbase_renderer_source2, cparticle_collection_renderer_float_input);
			MEMBER(hsvshift_control_point, cbase_renderer_source2, int);
			MEMBER(fog_type, cbase_renderer_source2, particle_fog_type_t);
			MEMBER(fog_amount, cbase_renderer_source2, cparticle_collection_renderer_float_input);
			MEMBER(tint_by_fow, cbase_renderer_source2, bool);
			MEMBER(tint_by_global_light, cbase_renderer_source2, bool);
			MEMBER(per_particle_alpha_reference, cbase_renderer_source2, sprite_card_per_particle_scale_t);
			MEMBER(per_particle_alpha_ref_window, cbase_renderer_source2, sprite_card_per_particle_scale_t);
			MEMBER(alpha_reference_type, cbase_renderer_source2, particle_alpha_reference_type_t);
			MEMBER(alpha_reference_softness, cbase_renderer_source2, cparticle_collection_renderer_float_input);
			MEMBER(source_alpha_value_to_map_to_zero, cbase_renderer_source2, cparticle_collection_renderer_float_input);
			MEMBER(source_alpha_value_to_map_to_one, cbase_renderer_source2, cparticle_collection_renderer_float_input);
			MEMBER(refract, cbase_renderer_source2, bool);
			MEMBER(refract_solid, cbase_renderer_source2, bool);
			MEMBER(refract_amount, cbase_renderer_source2, cparticle_collection_renderer_float_input);
			MEMBER(refract_blur_radius, cbase_renderer_source2, int);
			MEMBER(refract_blur_type, cbase_renderer_source2, blur_filter_type_t);
			MEMBER(only_render_in_effects_bloom_pass, cbase_renderer_source2, bool);
			MEMBER(only_render_in_effects_water_pass, cbase_renderer_source2, bool);
			MEMBER(use_mixed_resolution_rendering, cbase_renderer_source2, bool);
			MEMBER(only_render_in_effecs_game_overlay, cbase_renderer_source2, bool);
			MEMBER_ARR(stencil_test_id_arr, cbase_renderer_source2, 128, char);
			MEMBER(stencil_test_exclude, cbase_renderer_source2, bool);
			MEMBER_ARR(stencil_write_id_arr, cbase_renderer_source2, 128, char);
			MEMBER(write_stencil_on_depth_pass, cbase_renderer_source2, bool);
			MEMBER(write_stencil_on_depth_fail, cbase_renderer_source2, bool);
			MEMBER(reverse_zbuffering, cbase_renderer_source2, bool);
			MEMBER(disable_zbuffering, cbase_renderer_source2, bool);
			MEMBER(feathering_mode, cbase_renderer_source2, particle_depth_feathering_mode_t);
			MEMBER(feathering_min_dist, cbase_renderer_source2, cparticle_collection_renderer_float_input);
			MEMBER(feathering_max_dist, cbase_renderer_source2, cparticle_collection_renderer_float_input);
			MEMBER(feathering_filter, cbase_renderer_source2, cparticle_collection_renderer_float_input);
			MEMBER(depth_bias, cbase_renderer_source2, float);
			MEMBER(sort_method, cbase_renderer_source2, particle_sorting_choice_list_t);
			MEMBER(blend_frames_seq0, cbase_renderer_source2, bool);
			MEMBER(max_luminance_blending_sequence0, cbase_renderer_source2, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cbase_renderer_source2 : public cparticle_function_renderer

		class init_lifespan_from_velocity : public cparticle_function_initializer
		{
		public:
			MEMBER(vec_component_scale, init_lifespan_from_velocity, vector);
			MEMBER(trace_offset, init_lifespan_from_velocity, float);
			MEMBER(max_trace_length, init_lifespan_from_velocity, float);
			MEMBER(trace_tolerance, init_lifespan_from_velocity, float);
			MEMBER(max_planes, init_lifespan_from_velocity, int);
			MEMBER_ARR(collision_group_name_arr, init_lifespan_from_velocity, 128, char);
			MEMBER(trace_set, init_lifespan_from_velocity, particle_trace_set_t);
			MEMBER(include_water, init_lifespan_from_velocity, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_lifespan_from_velocity : public cparticle_function_initializer

		class op_constrain_line_length : public cparticle_function_constraint
		{
		public:
			MEMBER(min_distance, op_constrain_line_length, float);
			MEMBER(max_distance, op_constrain_line_length, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_constrain_line_length : public cparticle_function_constraint

		class op_instantaneous_emitter : public cparticle_function_emitter
		{
		public:
			MEMBER(particles_to_emit, op_instantaneous_emitter, cparticle_collection_float_input);
			MEMBER(start_time, op_instantaneous_emitter, cparticle_collection_float_input);
			MEMBER(init_from_killed_parent_particles, op_instantaneous_emitter, float);
			MEMBER(parent_particle_scale, op_instantaneous_emitter, cparticle_collection_float_input);
			MEMBER(max_emitted_per_frame, op_instantaneous_emitter, int);
			MEMBER(snapshot_control_point, op_instantaneous_emitter, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_instantaneous_emitter : public cparticle_function_emitter

		class cbase_trail_renderer : public cbase_renderer_source2
		{
		public:
			MEMBER(orientation_type, cbase_trail_renderer, particle_orientation_choice_list_t);
			MEMBER(orientation_control_point, cbase_trail_renderer, int);
			MEMBER(min_size, cbase_trail_renderer, float);
			MEMBER(max_size, cbase_trail_renderer, float);
			MEMBER(start_fade_size, cbase_trail_renderer, cparticle_collection_renderer_float_input);
			MEMBER(end_fade_size, cbase_trail_renderer, cparticle_collection_renderer_float_input);
			MEMBER(clamp_v, cbase_trail_renderer, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cbase_trail_renderer : public cbase_renderer_source2

		struct particle_named_value_source_t
		{
			MEMBER(name, particle_named_value_source_t, cutl_string);
			MEMBER(is_public, particle_named_value_source_t, bool);
			MEMBER(value_type, particle_named_value_source_t, pulse_value_type_t);
			MEMBER(default_config, particle_named_value_source_t, particle_named_value_configuration_t);
			MEMBER(named_configs, particle_named_value_source_t, cutl_vector<particle_named_value_configuration_t>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct particle_named_value_source_t

		class op_spin : public cgeneral_spin
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_spin : public cgeneral_spin

		class init_creation_noise : public cparticle_function_initializer
		{
		public:
			MEMBER(field_output, init_creation_noise, particle_attribute_index_t);
			MEMBER(abs_val, init_creation_noise, bool);
			MEMBER(abs_val_inv, init_creation_noise, bool);
			MEMBER(offset, init_creation_noise, float);
			MEMBER(output_min, init_creation_noise, float);
			MEMBER(output_max, init_creation_noise, float);
			MEMBER(noise_scale, init_creation_noise, float);
			MEMBER(noise_scale_loc, init_creation_noise, float);
			MEMBER(vec_offset_loc, init_creation_noise, vector);
			MEMBER(world_time_scale, init_creation_noise, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_creation_noise : public cparticle_function_initializer

		class op_render_as_models : public cparticle_function_renderer
		{
		public:
			MEMBER(model_list, op_render_as_models, cutl_vector<model_reference_t>);
			MEMBER(model_scale, op_render_as_models, float);
			MEMBER(fit_to_model_size, op_render_as_models, bool);
			MEMBER(non_uniform_scaling, op_render_as_models, bool);
			MEMBER(xaxis_scaling_attribute, op_render_as_models, particle_attribute_index_t);
			MEMBER(yaxis_scaling_attribute, op_render_as_models, particle_attribute_index_t);
			MEMBER(zaxis_scaling_attribute, op_render_as_models, particle_attribute_index_t);
			MEMBER(size_cull_bloat, op_render_as_models, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_render_as_models : public cparticle_function_renderer

		class op_remap_distance_to_line_segment_to_vector : public op_remap_distance_to_line_segment_base
		{
		public:
			MEMBER(field_output, op_remap_distance_to_line_segment_to_vector, particle_attribute_index_t);
			MEMBER(v_min_output_value, op_remap_distance_to_line_segment_to_vector, vector);
			MEMBER(v_max_output_value, op_remap_distance_to_line_segment_to_vector, vector);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_remap_distance_to_line_segment_to_vector : public op_remap_distance_to_line_segment_base

		class init_normal_offset : public cparticle_function_initializer
		{
		public:
			MEMBER(offset_min, init_normal_offset, vector);
			MEMBER(offset_max, init_normal_offset, vector);
			MEMBER(control_point_number, init_normal_offset, int);
			MEMBER(local_coords, init_normal_offset, bool);
			MEMBER(normalize, init_normal_offset, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_normal_offset : public cparticle_function_initializer

		class cspin_update_base : public cparticle_function_operator
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cspin_update_base : public cparticle_function_operator

		class op_control_point_to_radial_screen_space : public cparticle_function_pre_emission
		{
		public:
			MEMBER(cpin, op_control_point_to_radial_screen_space, int);
			MEMBER(vec_cp1_pos, op_control_point_to_radial_screen_space, vector);
			MEMBER(cpout, op_control_point_to_radial_screen_space, int);
			MEMBER(cpout_field, op_control_point_to_radial_screen_space, int);
			MEMBER(cpsspos_out, op_control_point_to_radial_screen_space, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_control_point_to_radial_screen_space : public cparticle_function_pre_emission

		class init_create_from_plane_cache : public cparticle_function_initializer
		{
		public:
			MEMBER(vec_offset_min, init_create_from_plane_cache, vector);
			MEMBER(vec_offset_max, init_create_from_plane_cache, vector);
			MEMBER(use_normal, init_create_from_plane_cache, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_create_from_plane_cache : public cparticle_function_initializer

		class op_remap_scalar_end_cap : public cparticle_function_operator
		{
		public:
			MEMBER(field_input, op_remap_scalar_end_cap, particle_attribute_index_t);
			MEMBER(field_output, op_remap_scalar_end_cap, particle_attribute_index_t);
			MEMBER(input_min, op_remap_scalar_end_cap, float);
			MEMBER(input_max, op_remap_scalar_end_cap, float);
			MEMBER(output_min, op_remap_scalar_end_cap, float);
			MEMBER(output_max, op_remap_scalar_end_cap, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_remap_scalar_end_cap : public cparticle_function_operator

		class op_lock_to_saved_sequential_path : public cparticle_function_operator
		{
		public:
			MEMBER(fade_start, op_lock_to_saved_sequential_path, float);
			MEMBER(fade_end, op_lock_to_saved_sequential_path, float);
			MEMBER(cppairs, op_lock_to_saved_sequential_path, bool);
			MEMBER(path_params, op_lock_to_saved_sequential_path, cpath_parameters);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_lock_to_saved_sequential_path : public cparticle_function_operator

		class init_init_float_collection : public cparticle_function_initializer
		{
		public:
			MEMBER(input_value, init_init_float_collection, cparticle_collection_float_input);
			MEMBER(output_field, init_init_float_collection, particle_attribute_index_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_init_float_collection : public cparticle_function_initializer

		class op_play_end_cap_when_finished : public cparticle_function_pre_emission
		{
		public:
			MEMBER(fire_on_emission_end, op_play_end_cap_when_finished, bool);
			MEMBER(include_children, op_play_end_cap_when_finished, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_play_end_cap_when_finished : public cparticle_function_pre_emission

		class op_quantize_cpcomponent : public cparticle_function_pre_emission
		{
		public:
			MEMBER(input_value, op_quantize_cpcomponent, cparticle_collection_float_input);
			MEMBER(cpoutput, op_quantize_cpcomponent, int);
			MEMBER(out_vector_field, op_quantize_cpcomponent, int);
			MEMBER(quantize_value, op_quantize_cpcomponent, cparticle_collection_float_input);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_quantize_cpcomponent : public cparticle_function_pre_emission

		class op_movement_loop_inside_sphere : public cparticle_function_operator
		{
		public:
			MEMBER(cp, op_movement_loop_inside_sphere, int);
			MEMBER(distance, op_movement_loop_inside_sphere, cparticle_collection_float_input);
			MEMBER(vec_scale, op_movement_loop_inside_sphere, cparticle_collection_vec_input);
			MEMBER(dist_sqr_attr, op_movement_loop_inside_sphere, particle_attribute_index_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_movement_loop_inside_sphere : public cparticle_function_operator

		class op_direction_between_vecs_to_vec : public cparticle_function_operator
		{
		public:
			MEMBER(field_output, op_direction_between_vecs_to_vec, particle_attribute_index_t);
			MEMBER(vec_point1, op_direction_between_vecs_to_vec, cper_particle_vec_input);
			MEMBER(vec_point2, op_direction_between_vecs_to_vec, cper_particle_vec_input);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_direction_between_vecs_to_vec : public cparticle_function_operator

		class op_remap_transform_visibility_to_vector : public cparticle_function_operator
		{
		public:
			MEMBER(set_method, op_remap_transform_visibility_to_vector, particle_set_method_t);
			MEMBER(transform_input, op_remap_transform_visibility_to_vector, cparticle_transform_input);
			MEMBER(field_output, op_remap_transform_visibility_to_vector, particle_attribute_index_t);
			MEMBER(input_min, op_remap_transform_visibility_to_vector, float);
			MEMBER(input_max, op_remap_transform_visibility_to_vector, float);
			MEMBER(vec_output_min, op_remap_transform_visibility_to_vector, vector);
			MEMBER(vec_output_max, op_remap_transform_visibility_to_vector, vector);
			MEMBER(radius, op_remap_transform_visibility_to_vector, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_remap_transform_visibility_to_vector : public cparticle_function_operator

		class init_set_vector_attribute_to_vector_expression : public cparticle_function_initializer
		{
		public:
			MEMBER(expression, init_set_vector_attribute_to_vector_expression, vector_expression_type_t);
			MEMBER(v_input1, init_set_vector_attribute_to_vector_expression, cper_particle_vec_input);
			MEMBER(v_input2, init_set_vector_attribute_to_vector_expression, cper_particle_vec_input);
			MEMBER(output_field, init_set_vector_attribute_to_vector_expression, particle_attribute_index_t);
			MEMBER(set_method, init_set_vector_attribute_to_vector_expression, particle_set_method_t);
			MEMBER(normalized_output, init_set_vector_attribute_to_vector_expression, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_set_vector_attribute_to_vector_expression : public cparticle_function_initializer

		class op_inherit_from_parent_particles : public cparticle_function_operator
		{
		public:
			MEMBER(scale, op_inherit_from_parent_particles, float);
			MEMBER(field_output, op_inherit_from_parent_particles, particle_attribute_index_t);
			MEMBER(increment, op_inherit_from_parent_particles, int);
			MEMBER(random_distribution, op_inherit_from_parent_particles, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_inherit_from_parent_particles : public cparticle_function_operator

		class init_random_vector_component : public cparticle_function_initializer
		{
		public:
			MEMBER(min, init_random_vector_component, float);
			MEMBER(max, init_random_vector_component, float);
			MEMBER(field_output, init_random_vector_component, particle_attribute_index_t);
			MEMBER(component, init_random_vector_component, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_random_vector_component : public cparticle_function_initializer

		class op_external_wind_force : public cparticle_function_force
		{
		public:
			MEMBER(vec_sample_position, op_external_wind_force, cper_particle_vec_input);
			MEMBER(vec_scale, op_external_wind_force, cper_particle_vec_input);
			MEMBER(sample_wind, op_external_wind_force, bool);
			MEMBER(sample_water, op_external_wind_force, bool);
			MEMBER(dampen_near_water_plane, op_external_wind_force, bool);
			MEMBER(sample_gravity, op_external_wind_force, bool);
			MEMBER(vec_gravity_force, op_external_wind_force, cper_particle_vec_input);
			MEMBER(use_basic_movement_gravity, op_external_wind_force, bool);
			MEMBER(local_gravity_scale, op_external_wind_force, cper_particle_float_input);
			MEMBER(local_buoyancy_scale, op_external_wind_force, cper_particle_float_input);
			MEMBER(vec_buoyancy_force, op_external_wind_force, cper_particle_vec_input);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_external_wind_force : public cparticle_function_force

		class op_set_control_point_field_to_scalar_expression : public cparticle_function_pre_emission
		{
		public:
			MEMBER(expression, op_set_control_point_field_to_scalar_expression, scalar_expression_type_t);
			MEMBER(input1, op_set_control_point_field_to_scalar_expression, cparticle_collection_float_input);
			MEMBER(input2, op_set_control_point_field_to_scalar_expression, cparticle_collection_float_input);
			MEMBER(output_remap, op_set_control_point_field_to_scalar_expression, cparticle_remap_float_input);
			MEMBER(output_cp, op_set_control_point_field_to_scalar_expression, int);
			MEMBER(out_vector_field, op_set_control_point_field_to_scalar_expression, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_set_control_point_field_to_scalar_expression : public cparticle_function_pre_emission

		class op_sdfconstraint : public cparticle_function_constraint
		{
		public:
			MEMBER(min_dist, op_sdfconstraint, cparticle_collection_float_input);
			MEMBER(max_dist, op_sdfconstraint, cparticle_collection_float_input);
			MEMBER(max_iterations, op_sdfconstraint, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_sdfconstraint : public cparticle_function_constraint

		class init_position_warp : public cparticle_function_initializer
		{
		public:
			MEMBER(vec_warp_min, init_position_warp, cparticle_collection_vec_input);
			MEMBER(vec_warp_max, init_position_warp, cparticle_collection_vec_input);
			MEMBER(scale_control_point_number, init_position_warp, int);
			MEMBER(control_point_number, init_position_warp, int);
			MEMBER(radius_component, init_position_warp, int);
			MEMBER(warp_time, init_position_warp, float);
			MEMBER(warp_start_time, init_position_warp, float);
			MEMBER(prev_pos_scale, init_position_warp, float);
			MEMBER(invert_warp, init_position_warp, bool);
			MEMBER(use_count, init_position_warp, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_position_warp : public cparticle_function_initializer

		class init_remap_qangles_to_rotation : public cparticle_function_initializer
		{
		public:
			MEMBER(transform_input, init_remap_qangles_to_rotation, cparticle_transform_input);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_remap_qangles_to_rotation : public cparticle_function_initializer

		class init_remap_speed_to_scalar : public cparticle_function_initializer
		{
		public:
			MEMBER(field_output, init_remap_speed_to_scalar, particle_attribute_index_t);
			MEMBER(control_point_number, init_remap_speed_to_scalar, int);
			MEMBER(start_time, init_remap_speed_to_scalar, float);
			MEMBER(end_time, init_remap_speed_to_scalar, float);
			MEMBER(input_min, init_remap_speed_to_scalar, float);
			MEMBER(input_max, init_remap_speed_to_scalar, float);
			MEMBER(output_min, init_remap_speed_to_scalar, float);
			MEMBER(output_max, init_remap_speed_to_scalar, float);
			MEMBER(set_method, init_remap_speed_to_scalar, particle_set_method_t);
			MEMBER(per_particle, init_remap_speed_to_scalar, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_remap_speed_to_scalar : public cparticle_function_initializer

		class op_set_control_point_to_cpvelocity : public cparticle_function_pre_emission
		{
		public:
			MEMBER(cpinput, op_set_control_point_to_cpvelocity, int);
			MEMBER(cpoutput_vel, op_set_control_point_to_cpvelocity, int);
			MEMBER(normalize, op_set_control_point_to_cpvelocity, bool);
			MEMBER(cpoutput_mag, op_set_control_point_to_cpvelocity, int);
			MEMBER(cpfield, op_set_control_point_to_cpvelocity, int);
			MEMBER(vec_comparison_velocity, op_set_control_point_to_cpvelocity, cparticle_collection_vec_input);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_set_control_point_to_cpvelocity : public cparticle_function_pre_emission

		class op_remap_named_model_mesh_group_once_timed : public op_remap_named_model_element_once_timed
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_remap_named_model_mesh_group_once_timed : public op_remap_named_model_element_once_timed

		class op_lightning_snapshot_generator : public cparticle_function_pre_emission
		{
		public:
			MEMBER(cpsnapshot, op_lightning_snapshot_generator, int);
			MEMBER(cpstart_pnt, op_lightning_snapshot_generator, int);
			MEMBER(cpend_pnt, op_lightning_snapshot_generator, int);
			MEMBER(segments, op_lightning_snapshot_generator, cparticle_collection_float_input);
			MEMBER(offset, op_lightning_snapshot_generator, cparticle_collection_float_input);
			MEMBER(offset_decay, op_lightning_snapshot_generator, cparticle_collection_float_input);
			MEMBER(recalc_rate, op_lightning_snapshot_generator, cparticle_collection_float_input);
			MEMBER(uvscale, op_lightning_snapshot_generator, cparticle_collection_float_input);
			MEMBER(uvoffset, op_lightning_snapshot_generator, cparticle_collection_float_input);
			MEMBER(split_rate, op_lightning_snapshot_generator, cparticle_collection_float_input);
			MEMBER(branch_twist, op_lightning_snapshot_generator, cparticle_collection_float_input);
			MEMBER(branch_behavior, op_lightning_snapshot_generator, particle_lightnint_branch_behavior_t);
			MEMBER(radius_start, op_lightning_snapshot_generator, cparticle_collection_float_input);
			MEMBER(radius_end, op_lightning_snapshot_generator, cparticle_collection_float_input);
			MEMBER(dedicated_pool, op_lightning_snapshot_generator, cparticle_collection_float_input);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_lightning_snapshot_generator : public cparticle_function_pre_emission

		class op_set_control_point_to_vector_expression : public cparticle_function_pre_emission
		{
		public:
			MEMBER(expression, op_set_control_point_to_vector_expression, vector_expression_type_t);
			MEMBER(output_cp, op_set_control_point_to_vector_expression, int);
			MEMBER(v_input1, op_set_control_point_to_vector_expression, cparticle_collection_vec_input);
			MEMBER(v_input2, op_set_control_point_to_vector_expression, cparticle_collection_vec_input);
			MEMBER(normalized_output, op_set_control_point_to_vector_expression, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_set_control_point_to_vector_expression : public cparticle_function_pre_emission

		class op_calculate_vector_attribute : public cparticle_function_operator
		{
		public:
			MEMBER(v_start_value, op_calculate_vector_attribute, vector);
			MEMBER(field_input1, op_calculate_vector_attribute, particle_attribute_index_t);
			MEMBER(input_scale1, op_calculate_vector_attribute, float);
			MEMBER(field_input2, op_calculate_vector_attribute, particle_attribute_index_t);
			MEMBER(input_scale2, op_calculate_vector_attribute, float);
			MEMBER(control_point_input1, op_calculate_vector_attribute, control_point_reference_t);
			MEMBER(control_point_scale1, op_calculate_vector_attribute, float);
			MEMBER(control_point_input2, op_calculate_vector_attribute, control_point_reference_t);
			MEMBER(control_point_scale2, op_calculate_vector_attribute, float);
			MEMBER(field_output, op_calculate_vector_attribute, particle_attribute_index_t);
			MEMBER(v_final_output_scale, op_calculate_vector_attribute, vector);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_calculate_vector_attribute : public cparticle_function_operator

		struct texture_group_t
		{
			MEMBER(enabled, texture_group_t, bool);
			MEMBER(replace_texture_with_gradient, texture_group_t, bool);
			MEMBER(h_texture, texture_group_t, cstrong_handle<info_for_resource_type_ctexture_base>);
			MEMBER(gradient, texture_group_t, ccolor_gradient);
			MEMBER(texture_type, texture_group_t, sprite_card_texture_type_t);
			MEMBER(texture_channels, texture_group_t, sprite_card_texture_channel_t);
			MEMBER(texture_blend_mode, texture_group_t, particle_texture_layer_blend_type_t);
			MEMBER(texture_blend, texture_group_t, cparticle_collection_renderer_float_input);
			MEMBER(texture_controls, texture_group_t, texture_controls_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct texture_group_t

		class op_orient2_drel_to_cp : public cparticle_function_operator
		{
		public:
			MEMBER(rot_offset, op_orient2_drel_to_cp, float);
			MEMBER(spin_strength, op_orient2_drel_to_cp, float);
			MEMBER(cp, op_orient2_drel_to_cp, int);
			MEMBER(field_output, op_orient2_drel_to_cp, particle_attribute_index_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_orient2_drel_to_cp : public cparticle_function_operator

		class init_random_radius : public cparticle_function_initializer
		{
		public:
			MEMBER(radius_min, init_random_radius, float);
			MEMBER(radius_max, init_random_radius, float);
			MEMBER(radius_rand_exponent, init_random_radius, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_random_radius : public cparticle_function_initializer

		class init_velocity_radial_random : public cparticle_function_initializer
		{
		public:
			MEMBER(control_point_number, init_velocity_radial_random, int);
			MEMBER(speed_min, init_velocity_radial_random, float);
			MEMBER(speed_max, init_velocity_radial_random, float);
			MEMBER(vec_local_coordinate_system_speed_scale, init_velocity_radial_random, vector);
			MEMBER(ignore_delta, init_velocity_radial_random, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_velocity_radial_random : public cparticle_function_initializer

		class init_remap_particle_count_to_named_model_sequence_scalar : public init_remap_particle_count_to_named_model_element_scalar
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_remap_particle_count_to_named_model_sequence_scalar : public init_remap_particle_count_to_named_model_element_scalar

		class init_random_life_time : public cparticle_function_initializer
		{
		public:
			MEMBER(lifetime_min, init_random_life_time, float);
			MEMBER(lifetime_max, init_random_life_time, float);
			MEMBER(lifetime_rand_exponent, init_random_life_time, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_random_life_time : public cparticle_function_initializer

		class op_attract_to_control_point : public cparticle_function_force
		{
		public:
			MEMBER(vec_component_scale, op_attract_to_control_point, vector);
			MEMBER(force_amount, op_attract_to_control_point, cper_particle_float_input);
			MEMBER(falloff_power, op_attract_to_control_point, float);
			MEMBER(transform_input, op_attract_to_control_point, cparticle_transform_input);
			MEMBER(force_amount_min, op_attract_to_control_point, cper_particle_float_input);
			MEMBER(apply_min_force, op_attract_to_control_point, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_attract_to_control_point : public cparticle_function_force

		class init_create_phyllotaxis : public cparticle_function_initializer
		{
		public:
			MEMBER(control_point_number, init_create_phyllotaxis, int);
			MEMBER(scale_cp, init_create_phyllotaxis, int);
			MEMBER(component, init_create_phyllotaxis, int);
			MEMBER(rad_cent_core, init_create_phyllotaxis, float);
			MEMBER(rad_per_point, init_create_phyllotaxis, float);
			MEMBER(rad_per_point_to, init_create_phyllotaxis, float);
			MEMBER(fpoint_angle, init_create_phyllotaxis, float);
			MEMBER(fsize_overall, init_create_phyllotaxis, float);
			MEMBER(rad_bias, init_create_phyllotaxis, float);
			MEMBER(min_rad, init_create_phyllotaxis, float);
			MEMBER(dist_bias, init_create_phyllotaxis, float);
			MEMBER(use_local_coords, init_create_phyllotaxis, bool);
			MEMBER(use_with_cont_emit, init_create_phyllotaxis, bool);
			MEMBER(use_orig_radius, init_create_phyllotaxis, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_create_phyllotaxis : public cparticle_function_initializer

		class op_box_constraint : public cparticle_function_constraint
		{
		public:
			MEMBER(vec_min, op_box_constraint, cparticle_collection_vec_input);
			MEMBER(vec_max, op_box_constraint, cparticle_collection_vec_input);
			MEMBER(cp, op_box_constraint, int);
			MEMBER(local_space, op_box_constraint, bool);
			MEMBER(account_for_radius, op_box_constraint, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_box_constraint : public cparticle_function_constraint

		class op_sdfforce : public cparticle_function_force
		{
		public:
			MEMBER(force_scale, op_sdfforce, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_sdfforce : public cparticle_function_force

		class op_set_parent_control_points_to_child_cp : public cparticle_function_pre_emission
		{
		public:
			MEMBER(child_group_id, op_set_parent_control_points_to_child_cp, int);
			MEMBER(child_control_point, op_set_parent_control_points_to_child_cp, int);
			MEMBER(num_control_points, op_set_parent_control_points_to_child_cp, int);
			MEMBER(first_source_point, op_set_parent_control_points_to_child_cp, int);
			MEMBER(set_orientation, op_set_parent_control_points_to_child_cp, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_set_parent_control_points_to_child_cp : public cparticle_function_pre_emission

		class op_set_per_child_control_point_from_attribute : public cparticle_function_operator
		{
		public:
			MEMBER(child_group_id, op_set_per_child_control_point_from_attribute, int);
			MEMBER(first_control_point, op_set_per_child_control_point_from_attribute, int);
			MEMBER(num_control_points, op_set_per_child_control_point_from_attribute, int);
			MEMBER(particle_increment, op_set_per_child_control_point_from_attribute, int);
			MEMBER(first_source_point, op_set_per_child_control_point_from_attribute, int);
			MEMBER(num_based_on_particle_count, op_set_per_child_control_point_from_attribute, bool);
			MEMBER(attribute_to_read, op_set_per_child_control_point_from_attribute, particle_attribute_index_t);
			MEMBER(cpfield, op_set_per_child_control_point_from_attribute, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_set_per_child_control_point_from_attribute : public cparticle_function_operator

		class init_offset_vector_to_vector : public cparticle_function_initializer
		{
		public:
			MEMBER(field_input, init_offset_vector_to_vector, particle_attribute_index_t);
			MEMBER(field_output, init_offset_vector_to_vector, particle_attribute_index_t);
			MEMBER(vec_output_min, init_offset_vector_to_vector, vector);
			MEMBER(vec_output_max, init_offset_vector_to_vector, vector);
			MEMBER(randomness_parameters, init_offset_vector_to_vector, crandom_number_generator_parameters);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_offset_vector_to_vector : public cparticle_function_initializer

		class op_global_light : public cparticle_function_operator
		{
		public:
			MEMBER(scale, op_global_light, float);
			MEMBER(clamp_lower_range, op_global_light, bool);
			MEMBER(clamp_upper_range, op_global_light, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_global_light : public cparticle_function_operator

		class op_cpoffset_to_percentage_between_cps : public cparticle_function_operator
		{
		public:
			MEMBER(input_min, op_cpoffset_to_percentage_between_cps, float);
			MEMBER(input_max, op_cpoffset_to_percentage_between_cps, float);
			MEMBER(input_bias, op_cpoffset_to_percentage_between_cps, float);
			MEMBER(start_cp, op_cpoffset_to_percentage_between_cps, int);
			MEMBER(end_cp, op_cpoffset_to_percentage_between_cps, int);
			MEMBER(offset_cp, op_cpoffset_to_percentage_between_cps, int);
			MEMBER(ouput_cp, op_cpoffset_to_percentage_between_cps, int);
			MEMBER(input_cp, op_cpoffset_to_percentage_between_cps, int);
			MEMBER(radial_check, op_cpoffset_to_percentage_between_cps, bool);
			MEMBER(scale_offset, op_cpoffset_to_percentage_between_cps, bool);
			MEMBER(vec_offset, op_cpoffset_to_percentage_between_cps, vector);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_cpoffset_to_percentage_between_cps : public cparticle_function_operator

		class op_callback : public cparticle_function_renderer
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_callback : public cparticle_function_renderer

		class init_init_from_parent_killed : public cparticle_function_initializer
		{
		public:
			MEMBER(attribute_to_copy, init_init_from_parent_killed, particle_attribute_index_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_init_from_parent_killed : public cparticle_function_initializer

		class init_random_named_model_mesh_group : public init_random_named_model_element
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_random_named_model_mesh_group : public init_random_named_model_element

		class op_basic_movement : public cparticle_function_operator
		{
		public:
			MEMBER(gravity, op_basic_movement, cparticle_collection_vec_input);
			MEMBER(drag, op_basic_movement, cparticle_collection_float_input);
			MEMBER(max_constraint_passes, op_basic_movement, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_basic_movement : public cparticle_function_operator

		class cparticle_collection_binding_instance : public cbase_pulse_graph_instance
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cparticle_collection_binding_instance : public cbase_pulse_graph_instance

		class op_quantize_float : public cparticle_function_operator
		{
		public:
			MEMBER(input_value, op_quantize_float, cper_particle_float_input);
			MEMBER(output_field, op_quantize_float, particle_attribute_index_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_quantize_float : public cparticle_function_operator

		class init_remap_scalar : public cparticle_function_initializer
		{
		public:
			MEMBER(field_input, init_remap_scalar, particle_attribute_index_t);
			MEMBER(field_output, init_remap_scalar, particle_attribute_index_t);
			MEMBER(input_min, init_remap_scalar, float);
			MEMBER(input_max, init_remap_scalar, float);
			MEMBER(output_min, init_remap_scalar, float);
			MEMBER(output_max, init_remap_scalar, float);
			MEMBER(start_time, init_remap_scalar, float);
			MEMBER(end_time, init_remap_scalar, float);
			MEMBER(set_method, init_remap_scalar, particle_set_method_t);
			MEMBER(active_range, init_remap_scalar, bool);
			MEMBER(remap_bias, init_remap_scalar, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_remap_scalar : public cparticle_function_initializer

		class init_move_between_points : public cparticle_function_initializer
		{
		public:
			MEMBER(speed_min, init_move_between_points, cper_particle_float_input);
			MEMBER(speed_max, init_move_between_points, cper_particle_float_input);
			MEMBER(end_spread, init_move_between_points, cper_particle_float_input);
			MEMBER(start_offset, init_move_between_points, cper_particle_float_input);
			MEMBER(end_offset, init_move_between_points, cper_particle_float_input);
			MEMBER(end_control_point_number, init_move_between_points, int);
			MEMBER(trail_bias, init_move_between_points, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_move_between_points : public cparticle_function_initializer

		class init_sequence_life_time : public cparticle_function_initializer
		{
		public:
			MEMBER(framerate, init_sequence_life_time, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_sequence_life_time : public cparticle_function_initializer

		class op_oscillate_vector_simple : public cparticle_function_operator
		{
		public:
			MEMBER(rate, op_oscillate_vector_simple, vector);
			MEMBER(frequency, op_oscillate_vector_simple, vector);
			MEMBER(field, op_oscillate_vector_simple, particle_attribute_index_t);
			MEMBER(osc_mult, op_oscillate_vector_simple, float);
			MEMBER(osc_add, op_oscillate_vector_simple, float);
			MEMBER(offset, op_oscillate_vector_simple, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_oscillate_vector_simple : public cparticle_function_operator

		class op_continuous_emitter : public cparticle_function_emitter
		{
		public:
			MEMBER(emission_duration, op_continuous_emitter, cparticle_collection_float_input);
			MEMBER(start_time, op_continuous_emitter, cparticle_collection_float_input);
			MEMBER(emit_rate, op_continuous_emitter, cparticle_collection_float_input);
			MEMBER(emission_scale, op_continuous_emitter, float);
			MEMBER(scale_per_parent_particle, op_continuous_emitter, float);
			MEMBER(init_from_killed_parent_particles, op_continuous_emitter, bool);
			MEMBER(snapshot_control_point, op_continuous_emitter, int);
			MEMBER(limit_per_update, op_continuous_emitter, int);
			MEMBER(force_emit_on_first_update, op_continuous_emitter, bool);
			MEMBER(force_emit_on_last_update, op_continuous_emitter, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_continuous_emitter : public cparticle_function_emitter

		class op_remap_distance_to_line_segment_to_scalar : public op_remap_distance_to_line_segment_base
		{
		public:
			MEMBER(field_output, op_remap_distance_to_line_segment_to_scalar, particle_attribute_index_t);
			MEMBER(min_output_value, op_remap_distance_to_line_segment_to_scalar, float);
			MEMBER(max_output_value, op_remap_distance_to_line_segment_to_scalar, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_remap_distance_to_line_segment_to_scalar : public op_remap_distance_to_line_segment_base

		class op_end_cap_timed_decay : public cparticle_function_operator
		{
		public:
			MEMBER(decay_time, op_end_cap_timed_decay, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_end_cap_timed_decay : public cparticle_function_operator

		class init_create_sequential_path : public cparticle_function_initializer
		{
		public:
			MEMBER(max_distance, init_create_sequential_path, float);
			MEMBER(num_to_assign, init_create_sequential_path, float);
			MEMBER(loop, init_create_sequential_path, bool);
			MEMBER(cppairs, init_create_sequential_path, bool);
			MEMBER(save_offset, init_create_sequential_path, bool);
			MEMBER(path_params, init_create_sequential_path, cpath_parameters);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_create_sequential_path : public cparticle_function_initializer

		class op_decay_offscreen : public cparticle_function_operator
		{
		public:
			MEMBER(offscreen_time, op_decay_offscreen, cparticle_collection_float_input);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_decay_offscreen : public cparticle_function_operator

		class op_distance_between_transforms : public cparticle_function_operator
		{
		public:
			MEMBER(field_output, op_distance_between_transforms, particle_attribute_index_t);
			MEMBER(transform_start, op_distance_between_transforms, cparticle_transform_input);
			MEMBER(transform_end, op_distance_between_transforms, cparticle_transform_input);
			MEMBER(input_min, op_distance_between_transforms, cper_particle_float_input);
			MEMBER(input_max, op_distance_between_transforms, cper_particle_float_input);
			MEMBER(output_min, op_distance_between_transforms, cper_particle_float_input);
			MEMBER(output_max, op_distance_between_transforms, cper_particle_float_input);
			MEMBER(max_trace_length, op_distance_between_transforms, float);
			MEMBER(losscale, op_distance_between_transforms, float);
			MEMBER_ARR(collision_group_name_arr, op_distance_between_transforms, 128, char);
			MEMBER(trace_set, op_distance_between_transforms, particle_trace_set_t);
			MEMBER(los, op_distance_between_transforms, bool);
			MEMBER(set_method, op_distance_between_transforms, particle_set_method_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_distance_between_transforms : public cparticle_function_operator

		class op_remap_scalar : public cparticle_function_operator
		{
		public:
			MEMBER(field_input, op_remap_scalar, particle_attribute_index_t);
			MEMBER(field_output, op_remap_scalar, particle_attribute_index_t);
			MEMBER(input_min, op_remap_scalar, float);
			MEMBER(input_max, op_remap_scalar, float);
			MEMBER(output_min, op_remap_scalar, float);
			MEMBER(output_max, op_remap_scalar, float);
			MEMBER(old_code, op_remap_scalar, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_remap_scalar : public cparticle_function_operator

		class init_random_trail_length : public cparticle_function_initializer
		{
		public:
			MEMBER(min_length, init_random_trail_length, float);
			MEMBER(max_length, init_random_trail_length, float);
			MEMBER(length_rand_exponent, init_random_trail_length, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_random_trail_length : public cparticle_function_initializer

		class init_ring_wave : public cparticle_function_initializer
		{
		public:
			MEMBER(transform_input, init_ring_wave, cparticle_transform_input);
			MEMBER(particles_per_orbit, init_ring_wave, cparticle_collection_float_input);
			MEMBER(initial_radius, init_ring_wave, cper_particle_float_input);
			MEMBER(thickness, init_ring_wave, cper_particle_float_input);
			MEMBER(initial_speed_min, init_ring_wave, cper_particle_float_input);
			MEMBER(initial_speed_max, init_ring_wave, cper_particle_float_input);
			MEMBER(roll, init_ring_wave, cper_particle_float_input);
			MEMBER(pitch, init_ring_wave, cper_particle_float_input);
			MEMBER(yaw, init_ring_wave, cper_particle_float_input);
			MEMBER(even_distribution, init_ring_wave, bool);
			MEMBER(xyvelocity_only, init_ring_wave, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_ring_wave : public cparticle_function_initializer

		class init_set_hitbox_to_closest : public cparticle_function_initializer
		{
		public:
			MEMBER(control_point_number, init_set_hitbox_to_closest, int);
			MEMBER(desired_hitbox, init_set_hitbox_to_closest, int);
			MEMBER(vec_hit_box_scale, init_set_hitbox_to_closest, cparticle_collection_vec_input);
			MEMBER_ARR(hitbox_set_name_arr, init_set_hitbox_to_closest, 128, char);
			MEMBER(use_bones, init_set_hitbox_to_closest, bool);
			MEMBER(use_closest_point_on_hitbox, init_set_hitbox_to_closest, bool);
			MEMBER(test_type, init_set_hitbox_to_closest, closest_point_test_type_t);
			MEMBER(hybrid_ratio, init_set_hitbox_to_closest, cparticle_collection_float_input);
			MEMBER(update_position, init_set_hitbox_to_closest, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_set_hitbox_to_closest : public cparticle_function_initializer

		class op_remap_velocity_to_vector : public cparticle_function_operator
		{
		public:
			MEMBER(field_output, op_remap_velocity_to_vector, particle_attribute_index_t);
			MEMBER(scale, op_remap_velocity_to_vector, float);
			MEMBER(normalize, op_remap_velocity_to_vector, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_remap_velocity_to_vector : public cparticle_function_operator

		class op_render_tonemap_controller : public cparticle_function_renderer
		{
		public:
			MEMBER(tonemap_level, op_render_tonemap_controller, float);
			MEMBER(tonemap_weight, op_render_tonemap_controller, float);
			MEMBER(tonemap_level_field, op_render_tonemap_controller, particle_attribute_index_t);
			MEMBER(tonemap_weight_field, op_render_tonemap_controller, particle_attribute_index_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_render_tonemap_controller : public cparticle_function_renderer

		class op_repeated_trigger_child_group : public cparticle_function_pre_emission
		{
		public:
			MEMBER(child_group_id, op_repeated_trigger_child_group, int);
			MEMBER(cluster_refire_time, op_repeated_trigger_child_group, cparticle_collection_float_input);
			MEMBER(cluster_size, op_repeated_trigger_child_group, cparticle_collection_float_input);
			MEMBER(cluster_cooldown, op_repeated_trigger_child_group, cparticle_collection_float_input);
			MEMBER(limit_child_count, op_repeated_trigger_child_group, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_repeated_trigger_child_group : public cparticle_function_pre_emission

		class op_fade_in_simple : public cparticle_function_operator
		{
		public:
			MEMBER(fade_in_time, op_fade_in_simple, float);
			MEMBER(field_output, op_fade_in_simple, particle_attribute_index_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_fade_in_simple : public cparticle_function_operator

		class op_normalize_vector : public cparticle_function_operator
		{
		public:
			MEMBER(field_output, op_normalize_vector, particle_attribute_index_t);
			MEMBER(scale, op_normalize_vector, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_normalize_vector : public cparticle_function_operator

		class init_random_alpha : public cparticle_function_initializer
		{
		public:
			MEMBER(field_output, init_random_alpha, particle_attribute_index_t);
			MEMBER(alpha_min, init_random_alpha, int);
			MEMBER(alpha_max, init_random_alpha, int);
			MEMBER(alpha_rand_exponent, init_random_alpha, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_random_alpha : public cparticle_function_initializer

		class op_remap_average_hitbox_speedto_cp : public cparticle_function_pre_emission
		{
		public:
			MEMBER(in_control_point_number, op_remap_average_hitbox_speedto_cp, int);
			MEMBER(out_control_point_number, op_remap_average_hitbox_speedto_cp, int);
			MEMBER(field, op_remap_average_hitbox_speedto_cp, int);
			MEMBER(hitbox_data_type, op_remap_average_hitbox_speedto_cp, particle_hitbox_data_selection_t);
			MEMBER(input_min, op_remap_average_hitbox_speedto_cp, cparticle_collection_float_input);
			MEMBER(input_max, op_remap_average_hitbox_speedto_cp, cparticle_collection_float_input);
			MEMBER(output_min, op_remap_average_hitbox_speedto_cp, cparticle_collection_float_input);
			MEMBER(output_max, op_remap_average_hitbox_speedto_cp, cparticle_collection_float_input);
			MEMBER(height_control_point_number, op_remap_average_hitbox_speedto_cp, int);
			MEMBER(vec_comparison_velocity, op_remap_average_hitbox_speedto_cp, cparticle_collection_vec_input);
			MEMBER_ARR(hitbox_set_name_arr, op_remap_average_hitbox_speedto_cp, 128, char);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_remap_average_hitbox_speedto_cp : public cparticle_function_pre_emission

		class op_external_game_impulse_force : public cparticle_function_force
		{
		public:
			MEMBER(force_scale, op_external_game_impulse_force, cper_particle_float_input);
			MEMBER(ropes, op_external_game_impulse_force, bool);
			MEMBER(ropes_zonly, op_external_game_impulse_force, bool);
			MEMBER(explosions, op_external_game_impulse_force, bool);
			MEMBER(particles, op_external_game_impulse_force, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_external_game_impulse_force : public cparticle_function_force

		class op_render_models : public cparticle_function_renderer
		{
		public:
			MEMBER(only_render_in_effects_bloom_pass, op_render_models, bool);
			MEMBER(only_render_in_effects_water_pass, op_render_models, bool);
			MEMBER(use_mixed_resolution_rendering, op_render_models, bool);
			MEMBER(only_render_in_effecs_game_overlay, op_render_models, bool);
			MEMBER(model_list, op_render_models, cutl_vector<model_reference_t>);
			MEMBER(body_group_field, op_render_models, particle_attribute_index_t);
			MEMBER(sub_model_field, op_render_models, particle_attribute_index_t);
			MEMBER(ignore_normal, op_render_models, bool);
			MEMBER(orient_z, op_render_models, bool);
			MEMBER(center_offset, op_render_models, bool);
			MEMBER(vec_local_offset, op_render_models, cper_particle_vec_input);
			MEMBER(vec_local_rotation, op_render_models, cper_particle_vec_input);
			MEMBER(ignore_radius, op_render_models, bool);
			MEMBER(model_scale_cp, op_render_models, int);
			MEMBER(vec_component_scale, op_render_models, cper_particle_vec_input);
			MEMBER(local_scale, op_render_models, bool);
			MEMBER(size_cull_bloat, op_render_models, int);
			MEMBER(animated, op_render_models, bool);
			MEMBER(animation_rate, op_render_models, float);
			MEMBER(scale_animation_rate, op_render_models, bool);
			MEMBER(force_looping_animation, op_render_models, bool);
			MEMBER(reset_anim_on_stop, op_render_models, bool);
			MEMBER(manual_anim_frame, op_render_models, bool);
			MEMBER(animation_scale_field, op_render_models, particle_attribute_index_t);
			MEMBER(animation_field, op_render_models, particle_attribute_index_t);
			MEMBER(manual_frame_field, op_render_models, particle_attribute_index_t);
			MEMBER_ARR(activity_name_arr, op_render_models, 256, char);
			MEMBER_ARR(sequence_name_arr, op_render_models, 256, char);
			MEMBER(enable_cloth_simulation, op_render_models, bool);
			MEMBER(h_override_material, op_render_models, cstrong_handle<info_for_resource_type_imaterial2>);
			MEMBER(override_translucent_materials, op_render_models, bool);
			MEMBER(skin, op_render_models, cper_particle_float_input);
			MEMBER(material_vars, op_render_models, cutl_vector<material_variable_t>);
			MEMBER(model_input, op_render_models, cparticle_model_input);
			MEMBER(lod, op_render_models, int);
			MEMBER_ARR(econ_slot_name_arr, op_render_models, 256, char);
			MEMBER(original_model, op_render_models, bool);
			MEMBER(suppress_tint, op_render_models, bool);
			MEMBER(use_raw_mesh_group, op_render_models, bool);
			MEMBER(disable_shadows, op_render_models, bool);
			MEMBER(accepts_decals, op_render_models, bool);
			MEMBER(force_draw_interleved_with_siblings, op_render_models, bool);
			MEMBER(do_not_draw_in_particle_pass, op_render_models, bool);
			MEMBER_ARR(render_attribute_arr, op_render_models, 260, char);
			MEMBER(radius_scale, op_render_models, cparticle_collection_float_input);
			MEMBER(alpha_scale, op_render_models, cparticle_collection_float_input);
			MEMBER(roll_scale, op_render_models, cparticle_collection_float_input);
			MEMBER(alpha2_field, op_render_models, particle_attribute_index_t);
			MEMBER(vec_color_scale, op_render_models, cparticle_collection_vec_input);
			MEMBER(color_blend_type, op_render_models, particle_color_blend_type_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_render_models : public cparticle_function_renderer

		class init_random_model_sequence : public cparticle_function_initializer
		{
		public:
			MEMBER_ARR(activity_name_arr, init_random_model_sequence, 256, char);
			MEMBER_ARR(sequence_name_arr, init_random_model_sequence, 256, char);
			MEMBER(h_model, init_random_model_sequence, cstrong_handle<info_for_resource_type_cmodel>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_random_model_sequence : public cparticle_function_initializer

		class op_decay_maintain_count : public cparticle_function_operator
		{
		public:
			MEMBER(particles_to_maintain, op_decay_maintain_count, int);
			MEMBER(decay_delay, op_decay_maintain_count, float);
			MEMBER(snapshot_control_point, op_decay_maintain_count, int);
			MEMBER(lifespan_decay, op_decay_maintain_count, bool);
			MEMBER(scale, op_decay_maintain_count, cparticle_collection_float_input);
			MEMBER(kill_newest, op_decay_maintain_count, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_decay_maintain_count : public cparticle_function_operator

		class op_set_control_point_position_to_time_of_day_value : public cparticle_function_pre_emission
		{
		public:
			MEMBER(control_point_number, op_set_control_point_position_to_time_of_day_value, int);
			MEMBER_ARR(psz_time_of_day_parameter_arr, op_set_control_point_position_to_time_of_day_value, 128, char);
			MEMBER(vec_default_value, op_set_control_point_position_to_time_of_day_value, vector);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_set_control_point_position_to_time_of_day_value : public cparticle_function_pre_emission

		class op_render_trails : public cbase_trail_renderer
		{
		public:
			MEMBER(enable_fading_and_clamping, op_render_trails, bool);
			MEMBER(start_fade_dot, op_render_trails, float);
			MEMBER(end_fade_dot, op_render_trails, float);
			MEMBER(prev_pnt_source, op_render_trails, particle_attribute_index_t);
			MEMBER(max_length, op_render_trails, float);
			MEMBER(min_length, op_render_trails, float);
			MEMBER(ignore_dt, op_render_trails, bool);
			MEMBER(constrain_radius_to_length_ratio, op_render_trails, float);
			MEMBER(length_scale, op_render_trails, float);
			MEMBER(length_fade_in_time, op_render_trails, float);
			MEMBER(radius_head_taper, op_render_trails, cper_particle_float_input);
			MEMBER(vec_head_color_scale, op_render_trails, cparticle_collection_vec_input);
			MEMBER(head_alpha_scale, op_render_trails, cper_particle_float_input);
			MEMBER(radius_taper, op_render_trails, cper_particle_float_input);
			MEMBER(vec_tail_color_scale, op_render_trails, cparticle_collection_vec_input);
			MEMBER(tail_alpha_scale, op_render_trails, cper_particle_float_input);
			MEMBER(horiz_crop_field, op_render_trails, particle_attribute_index_t);
			MEMBER(vert_crop_field, op_render_trails, particle_attribute_index_t);
			MEMBER(forward_shift, op_render_trails, float);
			MEMBER(flip_uvbased_on_pitch_yaw, op_render_trails, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_render_trails : public cbase_trail_renderer

		class init_remap_particle_count_to_named_model_mesh_group_scalar : public init_remap_particle_count_to_named_model_element_scalar
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_remap_particle_count_to_named_model_mesh_group_scalar : public init_remap_particle_count_to_named_model_element_scalar

		class op_remap_dot_product_to_cp : public cparticle_function_pre_emission
		{
		public:
			MEMBER(input_cp1, op_remap_dot_product_to_cp, int);
			MEMBER(input_cp2, op_remap_dot_product_to_cp, int);
			MEMBER(output_cp, op_remap_dot_product_to_cp, int);
			MEMBER(out_vector_field, op_remap_dot_product_to_cp, int);
			MEMBER(input_min, op_remap_dot_product_to_cp, cparticle_collection_float_input);
			MEMBER(input_max, op_remap_dot_product_to_cp, cparticle_collection_float_input);
			MEMBER(output_min, op_remap_dot_product_to_cp, cparticle_collection_float_input);
			MEMBER(output_max, op_remap_dot_product_to_cp, cparticle_collection_float_input);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_remap_dot_product_to_cp : public cparticle_function_pre_emission

		class op_orient_to2d_direction : public cparticle_function_operator
		{
		public:
			MEMBER(rot_offset, op_orient_to2d_direction, float);
			MEMBER(spin_strength, op_orient_to2d_direction, float);
			MEMBER(field_output, op_orient_to2d_direction, particle_attribute_index_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_orient_to2d_direction : public cparticle_function_operator

		class op_spin_update : public cspin_update_base
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_spin_update : public cspin_update_base

		class op_render_sprites : public cbase_renderer_source2
		{
		public:
			MEMBER(sequence_override, op_render_sprites, cparticle_collection_renderer_float_input);
			MEMBER(orientation_type, op_render_sprites, particle_orientation_choice_list_t);
			MEMBER(orientation_control_point, op_render_sprites, int);
			MEMBER(use_yaw_with_normal_aligned, op_render_sprites, bool);
			MEMBER(min_size, op_render_sprites, float);
			MEMBER(max_size, op_render_sprites, float);
			MEMBER(alpha_adjust_with_size_adjust, op_render_sprites, float);
			MEMBER(start_fade_size, op_render_sprites, cparticle_collection_renderer_float_input);
			MEMBER(end_fade_size, op_render_sprites, cparticle_collection_renderer_float_input);
			MEMBER(start_fade_dot, op_render_sprites, float);
			MEMBER(end_fade_dot, op_render_sprites, float);
			MEMBER(distance_alpha, op_render_sprites, bool);
			MEMBER(soft_edges, op_render_sprites, bool);
			MEMBER(edge_softness_start, op_render_sprites, float);
			MEMBER(edge_softness_end, op_render_sprites, float);
			MEMBER(outline, op_render_sprites, bool);
			MEMBER(outline_color, op_render_sprites, color);
			MEMBER(outline_alpha, op_render_sprites, int);
			MEMBER(outline_start0, op_render_sprites, float);
			MEMBER(outline_start1, op_render_sprites, float);
			MEMBER(outline_end0, op_render_sprites, float);
			MEMBER(outline_end1, op_render_sprites, float);
			MEMBER(lighting_mode, op_render_sprites, particle_lighting_quality_t);
			MEMBER(lighting_tessellation, op_render_sprites, cparticle_collection_renderer_float_input);
			MEMBER(lighting_directionality, op_render_sprites, cparticle_collection_renderer_float_input);
			MEMBER(particle_shadows, op_render_sprites, bool);
			MEMBER(shadow_density, op_render_sprites, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_render_sprites : public cbase_renderer_source2

		class op_remap_external_wind_to_cp : public cparticle_function_pre_emission
		{
		public:
			MEMBER(cp, op_remap_external_wind_to_cp, int);
			MEMBER(cpoutput, op_remap_external_wind_to_cp, int);
			MEMBER(vec_scale, op_remap_external_wind_to_cp, cparticle_collection_vec_input);
			MEMBER(set_magnitude, op_remap_external_wind_to_cp, bool);
			MEMBER(out_vector_field, op_remap_external_wind_to_cp, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_remap_external_wind_to_cp : public cparticle_function_pre_emission

		class op_teleport_beam : public cparticle_function_operator
		{
		public:
			MEMBER(cpposition, op_teleport_beam, int);
			MEMBER(cpvelocity, op_teleport_beam, int);
			MEMBER(cpmisc, op_teleport_beam, int);
			MEMBER(cpcolor, op_teleport_beam, int);
			MEMBER(cpinvalid_color, op_teleport_beam, int);
			MEMBER(cpextra_arc_data, op_teleport_beam, int);
			MEMBER(v_gravity, op_teleport_beam, vector);
			MEMBER(arc_max_duration, op_teleport_beam, float);
			MEMBER(segment_break, op_teleport_beam, float);
			MEMBER(arc_speed, op_teleport_beam, float);
			MEMBER(alpha, op_teleport_beam, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_teleport_beam : public cparticle_function_operator

		class op_twist_around_axis : public cparticle_function_force
		{
		public:
			MEMBER(force_amount, op_twist_around_axis, float);
			MEMBER(twist_axis, op_twist_around_axis, vector);
			MEMBER(local_space, op_twist_around_axis, bool);
			MEMBER(control_point_number, op_twist_around_axis, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_twist_around_axis : public cparticle_function_force

		class op_model_dampen_movement : public cparticle_function_operator
		{
		public:
			MEMBER(control_point_number, op_model_dampen_movement, int);
			MEMBER(bound_box, op_model_dampen_movement, bool);
			MEMBER(outside, op_model_dampen_movement, bool);
			MEMBER(use_bones, op_model_dampen_movement, bool);
			MEMBER_ARR(hitbox_set_name_arr, op_model_dampen_movement, 128, char);
			MEMBER(vec_pos_offset, op_model_dampen_movement, cper_particle_vec_input);
			MEMBER(drag, op_model_dampen_movement, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_model_dampen_movement : public cparticle_function_operator

		class init_velocity_random : public cparticle_function_initializer
		{
		public:
			MEMBER(control_point_number, init_velocity_random, int);
			MEMBER(speed_min, init_velocity_random, cper_particle_float_input);
			MEMBER(speed_max, init_velocity_random, cper_particle_float_input);
			MEMBER(local_coordinate_system_speed_min, init_velocity_random, cper_particle_vec_input);
			MEMBER(local_coordinate_system_speed_max, init_velocity_random, cper_particle_vec_input);
			MEMBER(ignore_dt, init_velocity_random, bool);
			MEMBER(randomness_parameters, init_velocity_random, crandom_number_generator_parameters);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_velocity_random : public cparticle_function_initializer

		class op_plane_cull : public cparticle_function_operator
		{
		public:
			MEMBER(plane_control_point, op_plane_cull, int);
			MEMBER(vec_plane_direction, op_plane_cull, vector);
			MEMBER(local_space, op_plane_cull, bool);
			MEMBER(plane_offset, op_plane_cull, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_plane_cull : public cparticle_function_operator

		class init_random_named_model_sequence : public init_random_named_model_element
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_random_named_model_sequence : public init_random_named_model_element

		class op_remap_scalar_once_timed : public cparticle_function_operator
		{
		public:
			MEMBER(proportional, op_remap_scalar_once_timed, bool);
			MEMBER(field_input, op_remap_scalar_once_timed, particle_attribute_index_t);
			MEMBER(field_output, op_remap_scalar_once_timed, particle_attribute_index_t);
			MEMBER(input_min, op_remap_scalar_once_timed, float);
			MEMBER(input_max, op_remap_scalar_once_timed, float);
			MEMBER(output_min, op_remap_scalar_once_timed, float);
			MEMBER(output_max, op_remap_scalar_once_timed, float);
			MEMBER(remap_time, op_remap_scalar_once_timed, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_remap_scalar_once_timed : public cparticle_function_operator

		struct particle_children_info_t
		{
			MEMBER(child_ref, particle_children_info_t, cstrong_handle<info_for_resource_type_iparticle_system_definition>);
			MEMBER(delay, particle_children_info_t, float);
			MEMBER(end_cap, particle_children_info_t, bool);
			MEMBER(disable_child, particle_children_info_t, bool);
			MEMBER(detail_level, particle_children_info_t, particle_detail_level_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct particle_children_info_t

		class init_initial_velocity_noise : public cparticle_function_initializer
		{
		public:
			MEMBER(vec_abs_val, init_initial_velocity_noise, vector);
			MEMBER(vec_abs_val_inv, init_initial_velocity_noise, vector);
			MEMBER(vec_offset_loc, init_initial_velocity_noise, cper_particle_vec_input);
			MEMBER(offset, init_initial_velocity_noise, cper_particle_float_input);
			MEMBER(vec_output_min, init_initial_velocity_noise, cper_particle_vec_input);
			MEMBER(vec_output_max, init_initial_velocity_noise, cper_particle_vec_input);
			MEMBER(noise_scale, init_initial_velocity_noise, cper_particle_float_input);
			MEMBER(noise_scale_loc, init_initial_velocity_noise, cper_particle_float_input);
			MEMBER(transform_input, init_initial_velocity_noise, cparticle_transform_input);
			MEMBER(ignore_dt, init_initial_velocity_noise, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_initial_velocity_noise : public cparticle_function_initializer

		class init_random_vector : public cparticle_function_initializer
		{
		public:
			MEMBER(vec_min, init_random_vector, vector);
			MEMBER(vec_max, init_random_vector, vector);
			MEMBER(field_output, init_random_vector, particle_attribute_index_t);
			MEMBER(randomness_parameters, init_random_vector, crandom_number_generator_parameters);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_random_vector : public cparticle_function_initializer

		class op_constrain_distance : public cparticle_function_constraint
		{
		public:
			MEMBER(min_distance, op_constrain_distance, cparticle_collection_float_input);
			MEMBER(max_distance, op_constrain_distance, cparticle_collection_float_input);
			MEMBER(control_point_number, op_constrain_distance, int);
			MEMBER(center_offset, op_constrain_distance, vector);
			MEMBER(global_center, op_constrain_distance, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_constrain_distance : public cparticle_function_constraint

		class init_rt_env_cull : public cparticle_function_initializer
		{
		public:
			MEMBER(vec_test_dir, init_rt_env_cull, vector);
			MEMBER(vec_test_normal, init_rt_env_cull, vector);
			MEMBER(use_velocity, init_rt_env_cull, bool);
			MEMBER(cull_on_miss, init_rt_env_cull, bool);
			MEMBER(life_adjust, init_rt_env_cull, bool);
			MEMBER_ARR(rt_env_name_arr, init_rt_env_cull, 128, char);
			MEMBER(rtenv_cp, init_rt_env_cull, int);
			MEMBER(component, init_rt_env_cull, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_rt_env_cull : public cparticle_function_initializer

		class init_status_effect : public cparticle_function_initializer
		{
		public:
			MEMBER(detail2_combo, init_status_effect, detail2_combo_t);
			MEMBER(detail2_rotation, init_status_effect, float);
			MEMBER(detail2_scale, init_status_effect, float);
			MEMBER(detail2_blend_factor, init_status_effect, float);
			MEMBER(color_warp_intensity, init_status_effect, float);
			MEMBER(diffuse_warp_blend_to_full, init_status_effect, float);
			MEMBER(env_map_intensity, init_status_effect, float);
			MEMBER(ambient_scale, init_status_effect, float);
			MEMBER(specular_color, init_status_effect, color);
			MEMBER(specular_scale, init_status_effect, float);
			MEMBER(specular_exponent, init_status_effect, float);
			MEMBER(specular_exponent_blend_to_full, init_status_effect, float);
			MEMBER(specular_blend_to_full, init_status_effect, float);
			MEMBER(rim_light_color, init_status_effect, color);
			MEMBER(rim_light_scale, init_status_effect, float);
			MEMBER(reflections_tint_by_base_blend_to_none, init_status_effect, float);
			MEMBER(metalness_blend_to_full, init_status_effect, float);
			MEMBER(self_illum_blend_to_full, init_status_effect, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_status_effect : public cparticle_function_initializer

		class op_oscillate_scalar_simple : public cparticle_function_operator
		{
		public:
			MEMBER(rate, op_oscillate_scalar_simple, float);
			MEMBER(frequency, op_oscillate_scalar_simple, float);
			MEMBER(field, op_oscillate_scalar_simple, particle_attribute_index_t);
			MEMBER(osc_mult, op_oscillate_scalar_simple, float);
			MEMBER(osc_add, op_oscillate_scalar_simple, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_oscillate_scalar_simple : public cparticle_function_operator

		struct particle_preview_body_group_t
		{
			MEMBER(body_group_name, particle_preview_body_group_t, cutl_string);
			MEMBER(value, particle_preview_body_group_t, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct particle_preview_body_group_t

		class op_point_vector_at_next_particle : public cparticle_function_operator
		{
		public:
			MEMBER(field_output, op_point_vector_at_next_particle, particle_attribute_index_t);
			MEMBER(interpolation, op_point_vector_at_next_particle, cper_particle_float_input);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_point_vector_at_next_particle : public cparticle_function_operator

		class op_remap_cpvelocity_to_vector : public cparticle_function_operator
		{
		public:
			MEMBER(control_point, op_remap_cpvelocity_to_vector, int);
			MEMBER(field_output, op_remap_cpvelocity_to_vector, particle_attribute_index_t);
			MEMBER(scale, op_remap_cpvelocity_to_vector, float);
			MEMBER(normalize, op_remap_cpvelocity_to_vector, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_remap_cpvelocity_to_vector : public cparticle_function_operator

		class op_remap_sdfdistance_to_vector_attribute : public cparticle_function_operator
		{
		public:
			MEMBER(vector_field_output, op_remap_sdfdistance_to_vector_attribute, particle_attribute_index_t);
			MEMBER(vector_field_input, op_remap_sdfdistance_to_vector_attribute, particle_attribute_index_t);
			MEMBER(min_distance, op_remap_sdfdistance_to_vector_attribute, cparticle_collection_float_input);
			MEMBER(max_distance, op_remap_sdfdistance_to_vector_attribute, cparticle_collection_float_input);
			MEMBER(v_value_below_min, op_remap_sdfdistance_to_vector_attribute, vector);
			MEMBER(v_value_at_min, op_remap_sdfdistance_to_vector_attribute, vector);
			MEMBER(v_value_at_max, op_remap_sdfdistance_to_vector_attribute, vector);
			MEMBER(v_value_above_max, op_remap_sdfdistance_to_vector_attribute, vector);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_remap_sdfdistance_to_vector_attribute : public cparticle_function_operator

		class op_set_control_points_to_particle : public cparticle_function_operator
		{
		public:
			MEMBER(child_group_id, op_set_control_points_to_particle, int);
			MEMBER(first_control_point, op_set_control_points_to_particle, int);
			MEMBER(num_control_points, op_set_control_points_to_particle, int);
			MEMBER(first_source_point, op_set_control_points_to_particle, int);
			MEMBER(set_orientation, op_set_control_points_to_particle, bool);
			MEMBER(orientation_mode, op_set_control_points_to_particle, particle_orientation_set_mode_t);
			MEMBER(set_parent, op_set_control_points_to_particle, particle_parent_set_mode_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_set_control_points_to_particle : public cparticle_function_operator

		class op_render_tree_shake : public cparticle_function_renderer
		{
		public:
			MEMBER(peak_strength, op_render_tree_shake, float);
			MEMBER(peak_strength_field_override, op_render_tree_shake, particle_attribute_index_t);
			MEMBER(radius, op_render_tree_shake, float);
			MEMBER(radius_field_override, op_render_tree_shake, particle_attribute_index_t);
			MEMBER(shake_duration, op_render_tree_shake, float);
			MEMBER(transition_time, op_render_tree_shake, float);
			MEMBER(twist_amount, op_render_tree_shake, float);
			MEMBER(radial_amount, op_render_tree_shake, float);
			MEMBER(control_point_orientation_amount, op_render_tree_shake, float);
			MEMBER(control_point_for_linear_direction, op_render_tree_shake, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_render_tree_shake : public cparticle_function_renderer

		class op_render_sound : public cparticle_function_renderer
		{
		public:
			MEMBER(duration_scale, op_render_sound, float);
			MEMBER(snd_lvl_scale, op_render_sound, float);
			MEMBER(pitch_scale, op_render_sound, float);
			MEMBER(volume_scale, op_render_sound, float);
			MEMBER(snd_lvl_field, op_render_sound, particle_attribute_index_t);
			MEMBER(duration_field, op_render_sound, particle_attribute_index_t);
			MEMBER(pitch_field, op_render_sound, particle_attribute_index_t);
			MEMBER(volume_field, op_render_sound, particle_attribute_index_t);
			MEMBER(channel, op_render_sound, int);
			MEMBER(cpreference, op_render_sound, int);
			MEMBER_ARR(psz_sound_name_arr, op_render_sound, 256, char);
			MEMBER(suppress_stop_sound_event, op_render_sound, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_render_sound : public cparticle_function_renderer

		class init_status_effect_citadel : public cparticle_function_initializer
		{
		public:
			MEMBER(sfxcolor_warp_amount, init_status_effect_citadel, float);
			MEMBER(sfxnormal_amount, init_status_effect_citadel, float);
			MEMBER(sfxmetalness_amount, init_status_effect_citadel, float);
			MEMBER(sfxroughness_amount, init_status_effect_citadel, float);
			MEMBER(sfxself_illum_amount, init_status_effect_citadel, float);
			MEMBER(sfxsscale, init_status_effect_citadel, float);
			MEMBER(sfxsscroll_x, init_status_effect_citadel, float);
			MEMBER(sfxsscroll_y, init_status_effect_citadel, float);
			MEMBER(sfxsscroll_z, init_status_effect_citadel, float);
			MEMBER(sfxsoffset_x, init_status_effect_citadel, float);
			MEMBER(sfxsoffset_y, init_status_effect_citadel, float);
			MEMBER(sfxsoffset_z, init_status_effect_citadel, float);
			MEMBER(detail_combo, init_status_effect_citadel, detail_combo_t);
			MEMBER(sfxsdetail_amount, init_status_effect_citadel, float);
			MEMBER(sfxsdetail_scale, init_status_effect_citadel, float);
			MEMBER(sfxsdetail_scroll_x, init_status_effect_citadel, float);
			MEMBER(sfxsdetail_scroll_y, init_status_effect_citadel, float);
			MEMBER(sfxsdetail_scroll_z, init_status_effect_citadel, float);
			MEMBER(sfxsuse_model_uvs, init_status_effect_citadel, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class init_status_effect_citadel : public cparticle_function_initializer

		class op_render_ropes : public cbase_renderer_source2
		{
		public:
			MEMBER(enable_fading_and_clamping, op_render_ropes, bool);
			MEMBER(min_size, op_render_ropes, float);
			MEMBER(max_size, op_render_ropes, float);
			MEMBER(start_fade_size, op_render_ropes, float);
			MEMBER(end_fade_size, op_render_ropes, float);
			MEMBER(start_fade_dot, op_render_ropes, float);
			MEMBER(end_fade_dot, op_render_ropes, float);
			MEMBER(radius_taper, op_render_ropes, float);
			MEMBER(min_tesselation, op_render_ropes, int);
			MEMBER(max_tesselation, op_render_ropes, int);
			MEMBER(tess_scale, op_render_ropes, float);
			MEMBER(texture_vworld_size, op_render_ropes, cparticle_collection_renderer_float_input);
			MEMBER(texture_vscroll_rate, op_render_ropes, cparticle_collection_renderer_float_input);
			MEMBER(texture_voffset, op_render_ropes, cparticle_collection_renderer_float_input);
			MEMBER(texture_vparams_cp, op_render_ropes, int);
			MEMBER(clamp_v, op_render_ropes, bool);
			MEMBER(scale_cp1, op_render_ropes, int);
			MEMBER(scale_cp2, op_render_ropes, int);
			MEMBER(scale_vsize_by_control_point_distance, op_render_ropes, float);
			MEMBER(scale_vscroll_by_control_point_distance, op_render_ropes, float);
			MEMBER(scale_voffset_by_control_point_distance, op_render_ropes, float);
			MEMBER(use_scalar_for_texture_coordinate, op_render_ropes, bool);
			MEMBER(scalar_field_for_texture_coordinate, op_render_ropes, particle_attribute_index_t);
			MEMBER(scalar_attribute_texture_coord_scale, op_render_ropes, float);
			MEMBER(reverse_order, op_render_ropes, bool);
			MEMBER(closed_loop, op_render_ropes, bool);
			MEMBER(orientation_type, op_render_ropes, particle_orientation_choice_list_t);
			MEMBER(vector_field_for_orientation, op_render_ropes, particle_attribute_index_t);
			MEMBER(draw_as_opaque, op_render_ropes, bool);
			MEMBER(generate_normals, op_render_ropes, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_render_ropes : public cbase_renderer_source2

		class op_spring_to_vector_constraint : public cparticle_function_constraint
		{
		public:
			MEMBER(rest_length, op_spring_to_vector_constraint, cper_particle_float_input);
			MEMBER(min_distance, op_spring_to_vector_constraint, cper_particle_float_input);
			MEMBER(max_distance, op_spring_to_vector_constraint, cper_particle_float_input);
			MEMBER(resting_length, op_spring_to_vector_constraint, cper_particle_float_input);
			MEMBER(vec_anchor_vector, op_spring_to_vector_constraint, cper_particle_vec_input);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_spring_to_vector_constraint : public cparticle_function_constraint

		class op_fade_out_simple : public cparticle_function_operator
		{
		public:
			MEMBER(fade_out_time, op_fade_out_simple, float);
			MEMBER(field_output, op_fade_out_simple, particle_attribute_index_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_fade_out_simple : public cparticle_function_operator

		class op_remap_model_volumeto_cp : public cparticle_function_pre_emission
		{
		public:
			MEMBER(bbox_type, op_remap_model_volumeto_cp, bbox_volume_type_t);
			MEMBER(in_control_point_number, op_remap_model_volumeto_cp, int);
			MEMBER(out_control_point_number, op_remap_model_volumeto_cp, int);
			MEMBER(out_control_point_max_number, op_remap_model_volumeto_cp, int);
			MEMBER(field, op_remap_model_volumeto_cp, int);
			MEMBER(input_min, op_remap_model_volumeto_cp, float);
			MEMBER(input_max, op_remap_model_volumeto_cp, float);
			MEMBER(output_min, op_remap_model_volumeto_cp, float);
			MEMBER(output_max, op_remap_model_volumeto_cp, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_remap_model_volumeto_cp : public cparticle_function_pre_emission

		class op_move_to_hitbox : public cparticle_function_operator
		{
		public:
			MEMBER(model_input, op_move_to_hitbox, cparticle_model_input);
			MEMBER(transform_input, op_move_to_hitbox, cparticle_transform_input);
			MEMBER(life_time_lerp_start, op_move_to_hitbox, float);
			MEMBER(life_time_lerp_end, op_move_to_hitbox, float);
			MEMBER(prev_pos_scale, op_move_to_hitbox, float);
			MEMBER_ARR(hitbox_set_name_arr, op_move_to_hitbox, 128, char);
			MEMBER(use_bones, op_move_to_hitbox, bool);
			MEMBER(lerp_type, op_move_to_hitbox, hitbox_lerp_type_t);
			MEMBER(interpolation, op_move_to_hitbox, cper_particle_float_input);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_move_to_hitbox : public cparticle_function_operator

		struct collision_group_context_t
		{
			MEMBER(collision_group_number, collision_group_context_t, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct collision_group_context_t

		class op_remap_transform_to_velocity : public cparticle_function_operator
		{
		public:
			MEMBER(transform_input, op_remap_transform_to_velocity, cparticle_transform_input);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_remap_transform_to_velocity : public cparticle_function_operator

		class op_remap_speedto_cp : public cparticle_function_pre_emission
		{
		public:
			MEMBER(in_control_point_number, op_remap_speedto_cp, int);
			MEMBER(out_control_point_number, op_remap_speedto_cp, int);
			MEMBER(field, op_remap_speedto_cp, int);
			MEMBER(input_min, op_remap_speedto_cp, float);
			MEMBER(input_max, op_remap_speedto_cp, float);
			MEMBER(output_min, op_remap_speedto_cp, float);
			MEMBER(output_max, op_remap_speedto_cp, float);
			MEMBER(use_delta_v, op_remap_speedto_cp, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_remap_speedto_cp : public cparticle_function_pre_emission

		class op_render_deferred_light : public cparticle_function_renderer
		{
		public:
			MEMBER(use_alpha_test_window, op_render_deferred_light, bool);
			MEMBER(use_texture, op_render_deferred_light, bool);
			MEMBER(radius_scale, op_render_deferred_light, float);
			MEMBER(alpha_scale, op_render_deferred_light, float);
			MEMBER(alpha2_field, op_render_deferred_light, particle_attribute_index_t);
			MEMBER(vec_color_scale, op_render_deferred_light, cparticle_collection_vec_input);
			MEMBER(color_blend_type, op_render_deferred_light, particle_color_blend_type_t);
			MEMBER(light_distance, op_render_deferred_light, float);
			MEMBER(start_falloff, op_render_deferred_light, float);
			MEMBER(distance_falloff, op_render_deferred_light, float);
			MEMBER(spot_fo_v, op_render_deferred_light, float);
			MEMBER(alpha_test_point_field, op_render_deferred_light, particle_attribute_index_t);
			MEMBER(alpha_test_range_field, op_render_deferred_light, particle_attribute_index_t);
			MEMBER(alpha_test_sharpness_field, op_render_deferred_light, particle_attribute_index_t);
			MEMBER(h_texture, op_render_deferred_light, cstrong_handle<info_for_resource_type_ctexture_base>);
			MEMBER(hsvshift_control_point, op_render_deferred_light, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_render_deferred_light : public cparticle_function_renderer

		class op_decay : public cparticle_function_operator
		{
		public:
			MEMBER(rope_decay, op_decay, bool);
			MEMBER(force_preserve_particle_order, op_decay, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class op_decay : public cparticle_function_operator

		struct relationship_t
		{
			MEMBER(disposition, relationship_t, disposition_t);
			MEMBER(priority, relationship_t, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct relationship_t

		class cnav_volume
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cnav_volume

		class cnav_volume_vector : public cnav_volume
		{
		public:
			MEMBER(has_been_pre_filtered, cnav_volume_vector, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cnav_volume_vector : public cnav_volume

		class cnetwork_velocity_vector
		{
		public:
			MEMBER(vec_x, cnetwork_velocity_vector, cnetworked_quantized_float);
			MEMBER(vec_y, cnetwork_velocity_vector, cnetworked_quantized_float);
			MEMBER(vec_z, cnetwork_velocity_vector, cnetworked_quantized_float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cnetwork_velocity_vector

		class canim_graph_controller_base
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class canim_graph_controller_base

		struct hudtextparms_t
		{
			MEMBER(color1, hudtextparms_t, color);
			MEMBER(color2, hudtextparms_t, color);
			MEMBER(effect, hudtextparms_t, uint8_t);
			MEMBER(channel, hudtextparms_t, uint8_t);
			MEMBER(x, hudtextparms_t, float);
			MEMBER(y, hudtextparms_t, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct hudtextparms_t

		class iragdoll
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class iragdoll

		struct csadditional_per_round_stats_t
		{
			MEMBER(num_chickens_killed, csadditional_per_round_stats_t, int);
			MEMBER(kills_while_blind, csadditional_per_round_stats_t, int);
			MEMBER(bomb_carrierkills, csadditional_per_round_stats_t, int);
			MEMBER(burn_damage_inflicted, csadditional_per_round_stats_t, int);
			MEMBER(dinks, csadditional_per_round_stats_t, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct csadditional_per_round_stats_t

		struct dynpitchvol_base_t
		{
			MEMBER(preset, dynpitchvol_base_t, int);
			MEMBER(pitchrun, dynpitchvol_base_t, int);
			MEMBER(pitchstart, dynpitchvol_base_t, int);
			MEMBER(spinup, dynpitchvol_base_t, int);
			MEMBER(spindown, dynpitchvol_base_t, int);
			MEMBER(volrun, dynpitchvol_base_t, int);
			MEMBER(volstart, dynpitchvol_base_t, int);
			MEMBER(fadein, dynpitchvol_base_t, int);
			MEMBER(fadeout, dynpitchvol_base_t, int);
			MEMBER(lfotype, dynpitchvol_base_t, int);
			MEMBER(lforate, dynpitchvol_base_t, int);
			MEMBER(lfomodpitch, dynpitchvol_base_t, int);
			MEMBER(lfomodvol, dynpitchvol_base_t, int);
			MEMBER(cspinup, dynpitchvol_base_t, int);
			MEMBER(cspincount, dynpitchvol_base_t, int);
			MEMBER(pitch, dynpitchvol_base_t, int);
			MEMBER(spinupsav, dynpitchvol_base_t, int);
			MEMBER(spindownsav, dynpitchvol_base_t, int);
			MEMBER(pitchfrac, dynpitchvol_base_t, int);
			MEMBER(vol, dynpitchvol_base_t, int);
			MEMBER(fadeinsav, dynpitchvol_base_t, int);
			MEMBER(fadeoutsav, dynpitchvol_base_t, int);
			MEMBER(volfrac, dynpitchvol_base_t, int);
			MEMBER(lfofrac, dynpitchvol_base_t, int);
			MEMBER(lfomult, dynpitchvol_base_t, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct dynpitchvol_base_t

		class cnav_volume_calculated_vector : public cnav_volume
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cnav_volume_calculated_vector : public cnav_volume

		class cgame_rules
		{
		public:
			MEMBER_ARR(quest_name_arr, cgame_rules, 128, char);
			MEMBER(quest_phase, cgame_rules, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cgame_rules

		class cbreakable_stage_helper
		{
		public:
			MEMBER(current_stage, cbreakable_stage_helper, int);
			MEMBER(stage_count, cbreakable_stage_helper, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cbreakable_stage_helper

		class centity_subclass_vdata_base
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class centity_subclass_vdata_base

		struct model_config_handle_t
		{
			MEMBER(value, model_config_handle_t, uint32_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct model_config_handle_t

		struct csadditional_match_stats_t : public csadditional_per_round_stats_t
		{
			MEMBER(num_rounds_survived, csadditional_match_stats_t, int);
			MEMBER(max_num_rounds_survived, csadditional_match_stats_t, int);
			MEMBER(num_rounds_survived_total, csadditional_match_stats_t, int);
			MEMBER(rounds_won_without_purchase, csadditional_match_stats_t, int);
			MEMBER(rounds_won_without_purchase_total, csadditional_match_stats_t, int);
			MEMBER(num_first_kills, csadditional_match_stats_t, int);
			MEMBER(num_clutch_kills, csadditional_match_stats_t, int);
			MEMBER(num_pistol_kills, csadditional_match_stats_t, int);
			MEMBER(num_sniper_kills, csadditional_match_stats_t, int);
			MEMBER(num_suicides, csadditional_match_stats_t, int);
			MEMBER(num_team_kills, csadditional_match_stats_t, int);
			MEMBER(team_damage, csadditional_match_stats_t, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct csadditional_match_stats_t : public csadditional_per_round_stats_t

		class response_followup
		{
		public:
			MEMBER(followup_concept_ptr, response_followup, char*);
			MEMBER(followup_contexts_ptr, response_followup, char*);
			MEMBER(followup_delay, response_followup, float);
			MEMBER(followup_target_ptr, response_followup, char*);
			MEMBER(followup_entityiotarget_ptr, response_followup, char*);
			MEMBER(followup_entityioinput_ptr, response_followup, char*);
			MEMBER(followup_entityiodelay, response_followup, float);
			MEMBER(b_fired, response_followup, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class response_followup

		class cbt_node
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cbt_node

		class cfiring_mode_int
		{
		public:
			MEMBER_ARR(values_arr, cfiring_mode_int, 2, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cfiring_mode_int

		class canim_graph_tag_ref
		{
		public:
			MEMBER(tag_index, canim_graph_tag_ref, int);
			MEMBER(tag_name, canim_graph_tag_ref, cglobal_symbol);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class canim_graph_tag_ref

		class cnav_volume_breadth_first_search : public cnav_volume_calculated_vector
		{
		public:
			MEMBER(v_start_pos, cnav_volume_breadth_first_search, vector);
			MEMBER(search_dist, cnav_volume_breadth_first_search, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cnav_volume_breadth_first_search : public cnav_volume_calculated_vector

		class cmultiplay_rules : public cgame_rules
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cmultiplay_rules : public cgame_rules

		class canim_event_listener_base
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class canim_event_listener_base

		class cnav_hull_vdata
		{
		public:
			MEMBER(agent_enabled, cnav_hull_vdata, bool);
			MEMBER(agent_radius, cnav_hull_vdata, float);
			MEMBER(agent_height, cnav_hull_vdata, float);
			MEMBER(agent_short_height_enabled, cnav_hull_vdata, bool);
			MEMBER(agent_short_height, cnav_hull_vdata, float);
			MEMBER(agent_max_climb, cnav_hull_vdata, float);
			MEMBER(agent_max_slope, cnav_hull_vdata, int);
			MEMBER(agent_max_jump_down_dist, cnav_hull_vdata, float);
			MEMBER(agent_max_jump_horiz_dist_base, cnav_hull_vdata, float);
			MEMBER(agent_max_jump_up_dist, cnav_hull_vdata, float);
			MEMBER(agent_border_erosion, cnav_hull_vdata, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cnav_hull_vdata

		class cin_button_state
		{
		public:
			MEMBER_ARR(button_states_arr, cin_button_state, 3, uint64_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cin_button_state

		class ciron_sight_controller
		{
		public:
			MEMBER(iron_sight_available, ciron_sight_controller, bool);
			MEMBER(iron_sight_amount, ciron_sight_controller, float);
			MEMBER(iron_sight_amount_gained, ciron_sight_controller, float);
			MEMBER(iron_sight_amount_biased, ciron_sight_controller, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class ciron_sight_controller

		class ctake_damage_summary_scope_guard
		{
		public:
			MEMBER(vec_summaries, ctake_damage_summary_scope_guard, cutl_vector<summary_take_damage_info_t*>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class ctake_damage_summary_scope_guard

		struct game_time_t
		{
			MEMBER(value, game_time_t, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct game_time_t

		struct particle_index_t
		{
			MEMBER(value, particle_index_t, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct particle_index_t

		class quest_progress
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class quest_progress

		class cpulse_cell_value_find_ent_by_name : public cpulse_cell_base_value
		{
		public:
			MEMBER(entity_type, cpulse_cell_value_find_ent_by_name, cutl_string);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpulse_cell_value_find_ent_by_name : public cpulse_cell_base_value

		class cnav_volume_sphere : public cnav_volume
		{
		public:
			MEMBER(v_center, cnav_volume_sphere, vector);
			MEMBER(radius, cnav_volume_sphere, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cnav_volume_sphere : public cnav_volume

		class cai_expresser
		{
		public:
			MEMBER(stop_talk_time, cai_expresser, game_time_t);
			MEMBER(stop_talk_time_without_delay, cai_expresser, game_time_t);
			MEMBER(blocked_talk_time, cai_expresser, game_time_t);
			MEMBER(voice_pitch, cai_expresser, int);
			MEMBER(last_time_accepted_speak, cai_expresser, game_time_t);
			MEMBER(allow_speaking_interrupts, cai_expresser, bool);
			MEMBER(consider_scene_involvement_as_speech, cai_expresser, bool);
			MEMBER(last_spoken_priority, cai_expresser, int);
			MEMBER(outer_ptr, cai_expresser, cbase_flex*);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cai_expresser

		class iecon_item_interface
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class iecon_item_interface

		class extent
		{
		public:
			MEMBER(lo, extent, vector);
			MEMBER(hi, extent, vector);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class extent

		class cbt_node_composite : public cbt_node
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cbt_node_composite : public cbt_node

		class csimple_sim_timer
		{
		public:
			MEMBER(next, csimple_sim_timer, game_time_t);
			MEMBER(world_group_id, csimple_sim_timer, world_group_id_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class csimple_sim_timer

		struct ammo_index_t
		{
			MEMBER(value, ammo_index_t, char);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct ammo_index_t

		class cconstant_force_controller
		{
		public:
			MEMBER(linear, cconstant_force_controller, vector);
			MEMBER(angular, cconstant_force_controller, rotation_vector);
			MEMBER(linear_save, cconstant_force_controller, vector);
			MEMBER(angular_save, cconstant_force_controller, rotation_vector);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cconstant_force_controller

		struct animation_update_list_handle_t
		{
			MEMBER(value, animation_update_list_handle_t, uint32_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct animation_update_list_handle_t

		class response_params
		{
		public:
			MEMBER(odds, response_params, short);
			MEMBER(flags, response_params, short);
			MEMBER(followup_ptr, response_params, response_followup*);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class response_params

		class cpulse_cell_step_set_anim_graph_param : public cpulse_cell_base_flow
		{
		public:
			MEMBER(param_name, cpulse_cell_step_set_anim_graph_param, cutl_string);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpulse_cell_step_set_anim_graph_param : public cpulse_cell_base_flow

		class ctake_damage_result
		{
		public:
			MEMBER(health_lost, ctake_damage_result, int);
			MEMBER(damage_taken, ctake_damage_result, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class ctake_damage_result

		class cbase_issue
		{
		public:
			MEMBER_ARR(type_string_arr, cbase_issue, 64, char);
			MEMBER_ARR(details_string_arr, cbase_issue, 260, char);
			MEMBER(num_yes_votes, cbase_issue, int);
			MEMBER(num_no_votes, cbase_issue, int);
			MEMBER(num_potential_votes, cbase_issue, int);
			MEMBER(vote_controller_ptr, cbase_issue, cvote_controller*);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cbase_issue

		class csim_timer : public csimple_sim_timer
		{
		public:
			MEMBER(interval, csim_timer, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class csim_timer : public csimple_sim_timer

		class cmotor_controller
		{
		public:
			MEMBER(speed, cmotor_controller, float);
			MEMBER(max_torque, cmotor_controller, float);
			MEMBER(axis, cmotor_controller, vector);
			MEMBER(inertia_factor, cmotor_controller, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cmotor_controller

		class crange_int
		{
		public:
			MEMBER_ARR(value_arr, crange_int, 2, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class crange_int

		class iskeleton_animation_controller
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class iskeleton_animation_controller

		struct hull_flags_t
		{
			MEMBER(hull_human, hull_flags_t, bool);
			MEMBER(hull_small_centered, hull_flags_t, bool);
			MEMBER(hull_wide_human, hull_flags_t, bool);
			MEMBER(hull_tiny, hull_flags_t, bool);
			MEMBER(hull_medium, hull_flags_t, bool);
			MEMBER(hull_tiny_centered, hull_flags_t, bool);
			MEMBER(hull_large, hull_flags_t, bool);
			MEMBER(hull_large_centered, hull_flags_t, bool);
			MEMBER(hull_medium_tall, hull_flags_t, bool);
			MEMBER(hull_small, hull_flags_t, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct hull_flags_t

		class cpulse_cell_step_ent_fire : public cpulse_cell_base_flow
		{
		public:
			MEMBER(input, cpulse_cell_step_ent_fire, cutl_string);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpulse_cell_step_ent_fire : public cpulse_cell_base_flow

		struct ragdoll_t
		{
			MEMBER(list, ragdoll_t, cutl_vector<ragdollelement_t>);
			MEMBER(bone_index, ragdoll_t, cutl_vector<int>);
			MEMBER(allow_stretch, ragdoll_t, bool);
			MEMBER(unused, ragdoll_t, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct ragdoll_t

		class ihas_attributes
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class ihas_attributes

		class csmooth_func
		{
		public:
			MEMBER(smooth_amplitude, csmooth_func, float);
			MEMBER(smooth_bias, csmooth_func, float);
			MEMBER(smooth_duration, csmooth_func, float);
			MEMBER(smooth_remaining_time, csmooth_func, float);
			MEMBER(smooth_dir, csmooth_func, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class csmooth_func

		class ccopy_recipient_filter
		{
		public:
			MEMBER(flags, ccopy_recipient_filter, int);
			MEMBER(recipients, ccopy_recipient_filter, cutl_vector<cplayer_slot>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class ccopy_recipient_filter

		class cfiring_mode_float
		{
		public:
			MEMBER_ARR(values_arr, cfiring_mode_float, 2, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cfiring_mode_float

		class cbt_node_decorator : public cbt_node
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cbt_node_decorator : public cbt_node

		struct locksound_t
		{
			MEMBER(s_locked_sound, locksound_t, cutl_symbol_large);
			MEMBER(s_unlocked_sound, locksound_t, cutl_symbol_large);
			MEMBER(flwait_sound, locksound_t, game_time_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct locksound_t

		class cpulse_cell_outflow_play_vcd : public cpulse_cell_base_flow
		{
		public:
			MEMBER(vcd_filename, cpulse_cell_outflow_play_vcd, cutl_string);
			MEMBER(on_finished, cpulse_cell_outflow_play_vcd, cpulse_outflow_connection);
			MEMBER(triggers, cpulse_cell_outflow_play_vcd, cutl_vector<cpulse_outflow_connection>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpulse_cell_outflow_play_vcd : public cpulse_cell_base_flow

		class csound_envelope
		{
		public:
			MEMBER(current, csound_envelope, float);
			MEMBER(target, csound_envelope, float);
			MEMBER(rate, csound_envelope, float);
			MEMBER(forceupdate, csound_envelope, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class csound_envelope

		class cscene_event_info
		{
		public:
			MEMBER(layer, cscene_event_info, int);
			MEMBER(priority, cscene_event_info, int);
			MEMBER(h_sequence, cscene_event_info, hsequence);
			MEMBER(weight, cscene_event_info, float);
			MEMBER(is_moving, cscene_event_info, bool);
			MEMBER(has_arrived, cscene_event_info, bool);
			MEMBER(initial_yaw, cscene_event_info, float);
			MEMBER(target_yaw, cscene_event_info, float);
			MEMBER(facing_yaw, cscene_event_info, float);
			MEMBER(type, cscene_event_info, int);
			MEMBER(next, cscene_event_info, game_time_t);
			MEMBER(is_gesture, cscene_event_info, bool);
			MEMBER(should_remove, cscene_event_info, bool);
			MEMBER(h_target, cscene_event_info, chandle<cbase_entity>);
			MEMBER(scene_event_id, cscene_event_info, uint32_t);
			MEMBER(client_side, cscene_event_info, bool);
			MEMBER(started, cscene_event_info, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cscene_event_info

		class cskill_float
		{
		public:
			MEMBER_ARR(value_arr, cskill_float, 4, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cskill_float

		class cnav_hull_preset_vdata
		{
		public:
			MEMBER(vec_nav_hulls, cnav_hull_preset_vdata, cutl_vector<cutl_string>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cnav_hull_preset_vdata

		struct game_tick_t
		{
			MEMBER(value, game_tick_t, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct game_tick_t

		class cskill_int
		{
		public:
			MEMBER_ARR(value_arr, cskill_int, 4, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cskill_int

		class chint_message_queue
		{
		public:
			MEMBER(tm_message_end, chint_message_queue, float);
			MEMBER(messages, chint_message_queue, cutl_vector<chint_message*>);
			MEMBER(player_controller_ptr, chint_message_queue, cbase_player_controller*);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class chint_message_queue

		class csingleplay_rules : public cgame_rules
		{
		public:
			MEMBER(single_player_game_ending, csingleplay_rules, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class csingleplay_rules : public cgame_rules

		struct magnetted_objects_t
		{
			MEMBER(h_entity, magnetted_objects_t, chandle<cbase_entity>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct magnetted_objects_t

		class cnetwork_origin_quantized_vector
		{
		public:
			MEMBER(vec_x, cnetwork_origin_quantized_vector, cnetworked_quantized_float);
			MEMBER(vec_y, cnetwork_origin_quantized_vector, cnetworked_quantized_float);
			MEMBER(vec_z, cnetwork_origin_quantized_vector, cnetworked_quantized_float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cnetwork_origin_quantized_vector

		class cnetwork_origin_cell_coord_quantized_vector
		{
		public:
			MEMBER(cell_x, cnetwork_origin_cell_coord_quantized_vector, uint16_t);
			MEMBER(cell_y, cnetwork_origin_cell_coord_quantized_vector, uint16_t);
			MEMBER(cell_z, cnetwork_origin_cell_coord_quantized_vector, uint16_t);
			MEMBER(outside_world, cnetwork_origin_cell_coord_quantized_vector, uint16_t);
			MEMBER(vec_x, cnetwork_origin_cell_coord_quantized_vector, cnetworked_quantized_float);
			MEMBER(vec_y, cnetwork_origin_cell_coord_quantized_vector, cnetworked_quantized_float);
			MEMBER(vec_z, cnetwork_origin_cell_coord_quantized_vector, cnetworked_quantized_float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cnetwork_origin_cell_coord_quantized_vector

		struct ragdollelement_t
		{
			MEMBER(origin_parent_space, ragdollelement_t, vector);
			MEMBER(parent_index, ragdollelement_t, int);
			MEMBER(radius, ragdollelement_t, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct ragdollelement_t

		struct command_tool_command_t
		{
			MEMBER(enabled, command_tool_command_t, bool);
			MEMBER(opened, command_tool_command_t, bool);
			MEMBER(internal_id, command_tool_command_t, uint32_t);
			MEMBER(short_name, command_tool_command_t, cutl_string);
			MEMBER(exec_mode, command_tool_command_t, command_exec_mode_t);
			MEMBER(spawn_group, command_tool_command_t, cutl_string);
			MEMBER(periodic_exec_delay, command_tool_command_t, float);
			MEMBER(spec_type, command_tool_command_t, command_entity_spec_type_t);
			MEMBER(entity_spec, command_tool_command_t, cutl_string);
			MEMBER(commands, command_tool_command_t, cutl_string);
			MEMBER(set_debug_bits, command_tool_command_t, debug_overlay_bits_t);
			MEMBER(clear_debug_bits, command_tool_command_t, debug_overlay_bits_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct command_tool_command_t

		class ccspulse_server_funcs_globals
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class ccspulse_server_funcs_globals

		class cshatter_glass_shard
		{
		public:
			MEMBER(h_shard_handle, cshatter_glass_shard, uint32_t);
			MEMBER(vec_panel_vertices, cshatter_glass_shard, cutl_vector<vector2d>);
			MEMBER(v_local_panel_space_origin, cshatter_glass_shard, vector2d);
			MEMBER(h_model, cshatter_glass_shard, cstrong_handle<info_for_resource_type_cmodel>);
			MEMBER(h_physics_entity, cshatter_glass_shard, chandle<cshatter_glass_shard_physics>);
			MEMBER(h_parent_panel, cshatter_glass_shard, chandle<cfunc_shatterglass>);
			MEMBER(h_parent_shard, cshatter_glass_shard, uint32_t);
			MEMBER(shatter_stress_type, cshatter_glass_shard, shatter_glass_stress_type);
			MEMBER(vec_stress_velocity, cshatter_glass_shard, vector);
			MEMBER(created_model, cshatter_glass_shard, bool);
			MEMBER(longest_edge, cshatter_glass_shard, float);
			MEMBER(shortest_edge, cshatter_glass_shard, float);
			MEMBER(longest_across, cshatter_glass_shard, float);
			MEMBER(shortest_across, cshatter_glass_shard, float);
			MEMBER(sum_of_all_edges, cshatter_glass_shard, float);
			MEMBER(area, cshatter_glass_shard, float);
			MEMBER(on_frame_edge, cshatter_glass_shard, on_frame);
			MEMBER(parent_panels_nth_shard, cshatter_glass_shard, int);
			MEMBER(sub_shard_generation, cshatter_glass_shard, int);
			MEMBER(vec_average_vert_position, cshatter_glass_shard, vector2d);
			MEMBER(average_vert_position_is_valid, cshatter_glass_shard, bool);
			MEMBER(vec_panel_space_stress_position_a, cshatter_glass_shard, vector2d);
			MEMBER(vec_panel_space_stress_position_b, cshatter_glass_shard, vector2d);
			MEMBER(stress_position_ais_valid, cshatter_glass_shard, bool);
			MEMBER(stress_position_bis_valid, cshatter_glass_shard, bool);
			MEMBER(flagged_for_removal, cshatter_glass_shard, bool);
			MEMBER(physics_entity_spawned_at_time, cshatter_glass_shard, game_time_t);
			MEMBER(shatter_rate_limited, cshatter_glass_shard, bool);
			MEMBER(h_entity_hitting_me, cshatter_glass_shard, chandle<cbase_entity>);
			MEMBER(vec_neighbors, cshatter_glass_shard, cutl_vector<uint32_t>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cshatter_glass_shard

		class cstopwatch_base : public csimple_sim_timer
		{
		public:
			MEMBER(is_running, cstopwatch_base, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cstopwatch_base : public csimple_sim_timer

		class ichoreo_services
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class ichoreo_services

		class crr_response
		{
		public:
			MEMBER(type, crr_response, uint8_t);
			MEMBER_ARR(response_name_arr, crr_response, 192, char);
			MEMBER_ARR(matching_rule_arr, crr_response, 128, char);
			MEMBER(params, crr_response, response_params);
			MEMBER(match_score, crr_response, float);
			MEMBER(speaker_context_ptr, crr_response, char*);
			MEMBER(world_context_ptr, crr_response, char*);
			MEMBER(followup, crr_response, response_followup);
			MEMBER(pch_criteria_names, crr_response, cutl_vector<cutl_symbol>);
			MEMBER(pch_criteria_values, crr_response, cutl_vector<char*>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class crr_response

		class crand_stopwatch : public cstopwatch_base
		{
		public:
			MEMBER(min_interval, crand_stopwatch, float);
			MEMBER(max_interval, crand_stopwatch, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class crand_stopwatch : public cstopwatch_base

		class cpulse_server_funcs_sounds
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpulse_server_funcs_sounds

		struct ammo_type_info_t
		{
			MEMBER(max_carry, ammo_type_info_t, int);
			MEMBER(splash_size, ammo_type_info_t, crange_int);
			MEMBER(flags, ammo_type_info_t, ammo_flags_t);
			MEMBER(mass, ammo_type_info_t, float);
			MEMBER(speed, ammo_type_info_t, crange_float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct ammo_type_info_t

		struct ragdoll_creation_params_t
		{
			MEMBER(v_force, ragdoll_creation_params_t, vector);
			MEMBER(force_bone, ragdoll_creation_params_t, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct ragdoll_creation_params_t

		class cnav_link_movement_vdata
		{
		public:
			MEMBER(is_interpolated, cnav_link_movement_vdata, bool);
			MEMBER(un_recommended_distance, cnav_link_movement_vdata, uint32_t);
			MEMBER(vec_animgraph_vars, cnav_link_movement_vdata, cutl_vector<cnav_link_animgraph_var>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cnav_link_movement_vdata

		class cnetwork_transmit_component
		{
		public:
			MEMBER(transmit_state_owned_counter, cnetwork_transmit_component, uint8_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cnetwork_transmit_component

		class cnav_link_animgraph_var
		{
		public:
			MEMBER(str_animgraph_var, cnav_link_animgraph_var, cutl_string);
			MEMBER(un_alignment_degrees, cnav_link_animgraph_var, uint32_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cnav_link_animgraph_var

		struct game_ammo_type_info_t : public ammo_type_info_t
		{
			MEMBER(buy_size, game_ammo_type_info_t, int);
			MEMBER(cost, game_ammo_type_info_t, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct game_ammo_type_info_t : public ammo_type_info_t

		class cresponse_criteria_set
		{
		public:
			MEMBER(num_prefixed_contexts, cresponse_criteria_set, int);
			MEMBER(override_on_append, cresponse_criteria_set, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cresponse_criteria_set

		class ccommentary_system
		{
		public:
			MEMBER(commentary_convars_changing, ccommentary_system, bool);
			MEMBER(commentary_enabled_mid_game, ccommentary_system, bool);
			MEMBER(next_teleport_time, ccommentary_system, game_time_t);
			MEMBER(teleport_stage, ccommentary_system, int);
			MEMBER(cheat_state, ccommentary_system, bool);
			MEMBER(is_first_spawn_group_to_load, ccommentary_system, bool);
			MEMBER(h_current_node, ccommentary_system, chandle<cpoint_commentary_node>);
			MEMBER(h_active_commentary_node, ccommentary_system, chandle<cpoint_commentary_node>);
			MEMBER(h_last_commentary_node, ccommentary_system, chandle<cpoint_commentary_node>);
			MEMBER(vec_nodes, ccommentary_system, cutl_vector<chandle<cpoint_commentary_node>>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class ccommentary_system

		class ctake_damage_info
		{
		public:
			MEMBER(vec_damage_force, ctake_damage_info, vector);
			MEMBER(vec_damage_position, ctake_damage_info, vector);
			MEMBER(vec_reported_position, ctake_damage_info, vector);
			MEMBER(vec_damage_direction, ctake_damage_info, vector);
			MEMBER(h_inflictor, ctake_damage_info, chandle<cbase_entity>);
			MEMBER(h_attacker, ctake_damage_info, chandle<cbase_entity>);
			MEMBER(h_ability, ctake_damage_info, chandle<cbase_entity>);
			MEMBER(damage, ctake_damage_info, float);
			MEMBER(bits_damage_type, ctake_damage_info, int);
			MEMBER(damage_custom, ctake_damage_info, int);
			MEMBER(ammo_type, ctake_damage_info, ammo_index_t);
			MEMBER(original_damage, ctake_damage_info, float);
			MEMBER(should_bleed, ctake_damage_info, bool);
			MEMBER(should_spark, ctake_damage_info, bool);
			MEMBER(damage_flags, ctake_damage_info, take_damage_flags_t);
			MEMBER(num_objects_penetrated, ctake_damage_info, int);
			MEMBER(h_script_instance, ctake_damage_info, hscript);
			MEMBER(in_take_damage_flow, ctake_damage_info, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class ctake_damage_info

		class velocity_sampler
		{
		public:
			MEMBER(prev_sample, velocity_sampler, vector);
			MEMBER(prev_sample_time, velocity_sampler, game_time_t);
			MEMBER(ideal_sample_rate, velocity_sampler, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class velocity_sampler

		class cphysics_shake
		{
		public:
			MEMBER(force, cphysics_shake, vector);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cphysics_shake

		class cteamplay_rules : public cmultiplay_rules
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cteamplay_rules : public cmultiplay_rules

		class cnav_volume_all : public cnav_volume_vector
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cnav_volume_all : public cnav_volume_vector

		class cpulse_cell_inflow_game_event : public cpulse_cell_inflow_base_entrypoint
		{
		public:
			MEMBER(event_name, cpulse_cell_inflow_game_event, cbuffer_string);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpulse_cell_inflow_game_event : public cpulse_cell_inflow_base_entrypoint

		class csimple_stopwatch : public cstopwatch_base
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class csimple_stopwatch : public cstopwatch_base

		struct dynpitchvol_t : public dynpitchvol_base_t
		{
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct dynpitchvol_t : public dynpitchvol_base_t

		class csound_patch
		{
		public:
			MEMBER(pitch, csound_patch, csound_envelope);
			MEMBER(volume, csound_patch, csound_envelope);
			MEMBER(shutdown_time, csound_patch, float);
			MEMBER(last_time, csound_patch, float);
			MEMBER(isz_sound_script_name, csound_patch, cutl_symbol_large);
			MEMBER(h_ent, csound_patch, chandle<cbase_entity>);
			MEMBER(sound_entity_index, csound_patch, centity_index);
			MEMBER(sound_origin, csound_patch, vector);
			MEMBER(is_playing, csound_patch, int);
			MEMBER(filter, csound_patch, ccopy_recipient_filter);
			MEMBER(close_caption_duration, csound_patch, float);
			MEMBER(updated_sound_origin, csound_patch, bool);
			MEMBER(isz_class_name, csound_patch, cutl_symbol_large);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class csound_patch

		class simple_constraint_sound_profile
		{
		public:
			MEMBER(e_keypoints, simple_constraint_sound_profile, simple_constraint_sound_profile__simple_constraints_sound_profile_keypoints_t);
			MEMBER_ARR(key_points_arr, simple_constraint_sound_profile, 2, float);
			MEMBER_ARR(reversal_sound_thresholds_arr, simple_constraint_sound_profile, 3, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class simple_constraint_sound_profile

		struct thinkfunc_t
		{
			MEMBER(h_fn, thinkfunc_t, hscript);
			MEMBER(context, thinkfunc_t, cutl_string_token);
			MEMBER(next_think_tick, thinkfunc_t, game_tick_t);
			MEMBER(last_think_tick, thinkfunc_t, game_tick_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct thinkfunc_t

		struct concept_history_t
		{
			MEMBER(time_spoken, concept_history_t, float);
			MEMBER(response, concept_history_t, crr_response);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct concept_history_t

		class cstopwatch : public cstopwatch_base
		{
		public:
			MEMBER(interval, cstopwatch, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cstopwatch : public cstopwatch_base

		class cgame_choreo_services : public ichoreo_services
		{
		public:
			MEMBER(h_owner, cgame_choreo_services, chandle<cbase_anim_graph>);
			MEMBER(h_scripted_sequence, cgame_choreo_services, chandle<cscripted_sequence>);
			MEMBER(script_state, cgame_choreo_services, ichoreo_services__script_state_t);
			MEMBER(choreo_state, cgame_choreo_services, ichoreo_services__choreo_state_t);
			MEMBER(time_started_state, cgame_choreo_services, game_time_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cgame_choreo_services : public ichoreo_services

		class cai_expresser_with_followup : public cai_expresser
		{
		public:
			MEMBER(postponed_followup_ptr, cai_expresser_with_followup, response_followup*);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cai_expresser_with_followup : public cai_expresser

		class cresponse_queue__cdeferred_response
		{
		public:
			MEMBER(contexts, cresponse_queue__cdeferred_response, cresponse_criteria_set);
			MEMBER(dispatch_time, cresponse_queue__cdeferred_response, float);
			MEMBER(h_issuer, cresponse_queue__cdeferred_response, chandle<cbase_entity>);
			MEMBER(response, cresponse_queue__cdeferred_response, crr_response);
			MEMBER(response_valid, cresponse_queue__cdeferred_response, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cresponse_queue__cdeferred_response

		class cnav_volume_markup_volume : public cnav_volume
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cnav_volume_markup_volume : public cnav_volume

		class cskeleton_animation_controller : public iskeleton_animation_controller
		{
		public:
			MEMBER(skeleton_instance_ptr, cskeleton_animation_controller, cskeleton_instance*);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cskeleton_animation_controller : public iskeleton_animation_controller

		class cgame_scripted_move_data
		{
		public:
			MEMBER(v_dest, cgame_scripted_move_data, vector);
			MEMBER(v_src, cgame_scripted_move_data, vector);
			MEMBER(ang_src, cgame_scripted_move_data, qangle);
			MEMBER(ang_dst, cgame_scripted_move_data, qangle);
			MEMBER(ang_current, cgame_scripted_move_data, qangle);
			MEMBER(ang_rate, cgame_scripted_move_data, float);
			MEMBER(duration, cgame_scripted_move_data, float);
			MEMBER(start_time, cgame_scripted_move_data, game_time_t);
			MEMBER(prev_move_type, cgame_scripted_move_data, move_type_t);
			MEMBER(active, cgame_scripted_move_data, bool);
			MEMBER(teleport_on_end, cgame_scripted_move_data, bool);
			MEMBER(end_on_destination_reached, cgame_scripted_move_data, bool);
			MEMBER(ignore_rotation, cgame_scripted_move_data, bool);
			MEMBER(type, cgame_scripted_move_data, scripted_move_type_t);
			MEMBER(success, cgame_scripted_move_data, bool);
			MEMBER(forced_crouch_state, cgame_scripted_move_data, forced_crouch_state_t);
			MEMBER(ignore_collisions, cgame_scripted_move_data, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cgame_scripted_move_data

		class ccsgoplayer_anim_graph_state
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class ccsgoplayer_anim_graph_state

		class cplayer_pawn_component
		{
		public:
			MEMBER(_m_p_chain_entity, cplayer_pawn_component, cnetwork_var_chainer);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cplayer_pawn_component

		class cnav_volume_spherical_shell : public cnav_volume_sphere
		{
		public:
			MEMBER(radius_inner, cnav_volume_spherical_shell, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cnav_volume_spherical_shell : public cnav_volume_sphere

		struct response_context_t
		{
			MEMBER(isz_name, response_context_t, cutl_symbol_large);
			MEMBER(isz_value, response_context_t, cutl_symbol_large);
			MEMBER(expiration_time, response_context_t, game_time_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct response_context_t

		struct summary_take_damage_info_t
		{
			MEMBER(n_summarised_count, summary_take_damage_info_t, int);
			MEMBER(info, summary_take_damage_info_t, ctake_damage_info);
			MEMBER(result, summary_take_damage_info_t, ctake_damage_result);
			MEMBER(h_target, summary_take_damage_info_t, chandle<cbase_entity>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct summary_take_damage_info_t

		class cnetwork_view_offset_vector
		{
		public:
			MEMBER(vec_x, cnetwork_view_offset_vector, cnetworked_quantized_float);
			MEMBER(vec_y, cnetwork_view_offset_vector, cnetworked_quantized_float);
			MEMBER(vec_z, cnetwork_view_offset_vector, cnetworked_quantized_float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cnetwork_view_offset_vector

		class cmultiplayer_expresser : public cai_expresser_with_followup
		{
		public:
			MEMBER(allow_multiple_scenes, cmultiplayer_expresser, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cmultiplayer_expresser : public cai_expresser_with_followup

		class canim_event_listener : public canim_event_listener_base
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class canim_event_listener : public canim_event_listener_base

		class cskill_damage
		{
		public:
			MEMBER(damage, cskill_damage, cskill_float);
			MEMBER(physics_force_damage, cskill_damage, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cskill_damage

		class ivehicle
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class ivehicle

		class crand_sim_timer : public csimple_sim_timer
		{
		public:
			MEMBER(min_interval, crand_sim_timer, float);
			MEMBER(max_interval, crand_sim_timer, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class crand_sim_timer : public csimple_sim_timer

		class constraint_sound_info
		{
		public:
			MEMBER(v_sampler, constraint_sound_info, velocity_sampler);
			MEMBER(sound_profile, constraint_sound_info, simple_constraint_sound_profile);
			MEMBER(forward_axis, constraint_sound_info, vector);
			MEMBER(isz_travel_sound_fwd, constraint_sound_info, cutl_symbol_large);
			MEMBER(isz_travel_sound_back, constraint_sound_info, cutl_symbol_large);
			MEMBER_ARR(isz_reversal_sounds_arr, constraint_sound_info, 3, cutl_symbol_large);
			MEMBER(play_travel_sound, constraint_sound_info, bool);
			MEMBER(play_reversal_sound, constraint_sound_info, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class constraint_sound_info

		struct lerpdata_t
		{
			MEMBER(h_ent, lerpdata_t, chandle<cbase_entity>);
			MEMBER(move_type, lerpdata_t, move_type_t);
			MEMBER(start_time, lerpdata_t, game_time_t);
			MEMBER(vec_start_origin, lerpdata_t, vector);
			MEMBER(q_start_rot, lerpdata_t, quaternion);
			MEMBER(fxindex, lerpdata_t, particle_index_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct lerpdata_t

		class cscript_uniform_random_stream
		{
		public:
			MEMBER(h_script_scope, cscript_uniform_random_stream, hscript);
			MEMBER(initial_seed, cscript_uniform_random_stream, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cscript_uniform_random_stream

		class cpulse_cell_sound_event_start : public cpulse_cell_base_flow
		{
		public:
			MEMBER(type, cpulse_cell_sound_event_start, sound_event_start_type_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpulse_cell_sound_event_start : public cpulse_cell_base_flow

		class cresponse_queue
		{
		public:
			MEMBER(expresser_targets, cresponse_queue, cutl_vector<cai_expresser*>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cresponse_queue

		class csound
		{
		public:
			MEMBER(h_owner, csound, chandle<cbase_entity>);
			MEMBER(h_target, csound, chandle<cbase_entity>);
			MEMBER(volume, csound, int);
			MEMBER(occlusion_scale, csound, float);
			MEMBER(type, csound, int);
			MEMBER(next_audible, csound, int);
			MEMBER(expire_time, csound, game_time_t);
			MEMBER(next, csound, short);
			MEMBER(no_expiration_time, csound, bool);
			MEMBER(owner_channel_index, csound, int);
			MEMBER(vec_origin, csound, vector);
			MEMBER(has_owner, csound, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class csound

		class cplayer_controller_component
		{
		public:
			MEMBER(_m_p_chain_entity, cplayer_controller_component, cnetwork_var_chainer);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cplayer_controller_component

		class cfootstep_table_handle
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cfootstep_table_handle

		class chint_message
		{
		public:
			MEMBER(hint_string_ptr, chint_message, char*);
			MEMBER(args, chint_message, cutl_vector<char*>);
			MEMBER(duration, chint_message, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class chint_message

		class cpulse_server_funcs
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cpulse_server_funcs

		class cremap_float
		{
		public:
			MEMBER_ARR(value_arr, cremap_float, 4, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cremap_float

		struct relationship_override_t : public relationship_t
		{
			MEMBER(entity, relationship_override_t, chandle<cbase_entity>);
			MEMBER(class_type, relationship_override_t, class_t);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct relationship_override_t : public relationship_t

		class canim_event_queue_listener : public canim_event_listener_base
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class canim_event_queue_listener : public canim_event_listener_base

		struct mood_animation_layer_t
		{
			MEMBER(s_name, mood_animation_layer_t, cutl_string);
			MEMBER(active_listening, mood_animation_layer_t, bool);
			MEMBER(active_talking, mood_animation_layer_t, bool);
			MEMBER(layer_animations, mood_animation_layer_t, cutl_vector<mood_animation_t>);
			MEMBER(intensity, mood_animation_layer_t, crange_float);
			MEMBER(duration_scale, mood_animation_layer_t, crange_float);
			MEMBER(scale_with_ints, mood_animation_layer_t, bool);
			MEMBER(next_start, mood_animation_layer_t, crange_float);
			MEMBER(start_offset, mood_animation_layer_t, crange_float);
			MEMBER(end_offset, mood_animation_layer_t, crange_float);
			MEMBER(fade_in, mood_animation_layer_t, float);
			MEMBER(fade_out, mood_animation_layer_t, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct mood_animation_layer_t

		struct composite_material_t
		{
			MEMBER(target_kvs, composite_material_t, key_values3);
			MEMBER(pre_generation_kvs, composite_material_t, key_values3);
			MEMBER(final_kvs, composite_material_t, key_values3);
			MEMBER(vec_generated_textures, composite_material_t, cutl_vector<generated_texture_handle_t>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct composite_material_t

		class cglow_overlay
		{
		public:
			MEMBER(v_pos, cglow_overlay, vector);
			MEMBER(directional, cglow_overlay, bool);
			MEMBER(v_direction, cglow_overlay, vector);
			MEMBER(in_sky, cglow_overlay, bool);
			MEMBER(sky_obstruction_scale, cglow_overlay, float);
			MEMBER_ARR(sprites_arr, cglow_overlay, 4, cglow_sprite);
			MEMBER(sprites, cglow_overlay, int);
			MEMBER(proxy_radius, cglow_overlay, float);
			MEMBER(hdrcolor_scale, cglow_overlay, float);
			MEMBER(glow_obstruction_scale, cglow_overlay, float);
			MEMBER(cache_glow_obstruction, cglow_overlay, bool);
			MEMBER(cache_sky_obstruction, cglow_overlay, bool);
			MEMBER(activated, cglow_overlay, short);
			MEMBER(list_index, cglow_overlay, uint16_t);
			MEMBER(query_handle, cglow_overlay, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cglow_overlay

		struct composite_material_match_filter_t
		{
			MEMBER(composite_material_match_filter_type, composite_material_match_filter_t, composite_material_match_filter_type_t);
			MEMBER(str_match_filter, composite_material_match_filter_t, cutl_string);
			MEMBER(str_match_value, composite_material_match_filter_t, cutl_string);
			MEMBER(pass_when_true, composite_material_match_filter_t, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct composite_material_match_filter_t

		class iclient_alpha_property
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class iclient_alpha_property

		class cglobal_light_base
		{
		public:
			MEMBER(spot_light, cglobal_light_base, bool);
			MEMBER(spot_light_origin, cglobal_light_base, vector);
			MEMBER(spot_light_angles, cglobal_light_base, qangle);
			MEMBER(shadow_direction, cglobal_light_base, vector);
			MEMBER(ambient_direction, cglobal_light_base, vector);
			MEMBER(specular_direction, cglobal_light_base, vector);
			MEMBER(inspector_specular_direction, cglobal_light_base, vector);
			MEMBER(specular_power, cglobal_light_base, float);
			MEMBER(specular_independence, cglobal_light_base, float);
			MEMBER(specular_color, cglobal_light_base, color);
			MEMBER(start_disabled, cglobal_light_base, bool);
			MEMBER(enabled, cglobal_light_base, bool);
			MEMBER(light_color, cglobal_light_base, color);
			MEMBER(ambient_color1, cglobal_light_base, color);
			MEMBER(ambient_color2, cglobal_light_base, color);
			MEMBER(ambient_color3, cglobal_light_base, color);
			MEMBER(sun_distance, cglobal_light_base, float);
			MEMBER(fov, cglobal_light_base, float);
			MEMBER(near_z, cglobal_light_base, float);
			MEMBER(far_z, cglobal_light_base, float);
			MEMBER(enable_shadows, cglobal_light_base, bool);
			MEMBER(old_enable_shadows, cglobal_light_base, bool);
			MEMBER(background_clear_not_required, cglobal_light_base, bool);
			MEMBER(cloud_scale, cglobal_light_base, float);
			MEMBER(cloud1_speed, cglobal_light_base, float);
			MEMBER(cloud1_direction, cglobal_light_base, float);
			MEMBER(cloud2_speed, cglobal_light_base, float);
			MEMBER(cloud2_direction, cglobal_light_base, float);
			MEMBER(ambient_scale1, cglobal_light_base, float);
			MEMBER(ambient_scale2, cglobal_light_base, float);
			MEMBER(ground_scale, cglobal_light_base, float);
			MEMBER(light_scale, cglobal_light_base, float);
			MEMBER(fo_wdarkness, cglobal_light_base, float);
			MEMBER(enable_separate_skybox_fog, cglobal_light_base, bool);
			MEMBER(v_fow_color, cglobal_light_base, vector);
			MEMBER(view_origin, cglobal_light_base, vector);
			MEMBER(view_angles, cglobal_light_base, qangle);
			MEMBER(view_fo_v, cglobal_light_base, float);
			MEMBER_ARR(world_points_arr, cglobal_light_base, 8, vector);
			MEMBER(v_fog_offset_layer0, cglobal_light_base, vector2d);
			MEMBER(v_fog_offset_layer1, cglobal_light_base, vector2d);
			MEMBER(h_env_wind, cglobal_light_base, chandle<base_entity>);
			MEMBER(h_env_sky, cglobal_light_base, chandle<base_entity>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cglobal_light_base

		class cclient_alpha_property : public iclient_alpha_property
		{
		public:
			MEMBER(render_fx, cclient_alpha_property, uint8_t);
			MEMBER(render_mode, cclient_alpha_property, uint8_t);
			MEMBER(alpha_override, cclient_alpha_property, bool);
			MEMBER(shadow_alpha_override, cclient_alpha_property, bool);
			MEMBER(reserved, cclient_alpha_property, uint8_t);
			MEMBER(alpha, cclient_alpha_property, uint8_t);
			MEMBER(desync_offset, cclient_alpha_property, uint16_t);
			MEMBER(reserved2, cclient_alpha_property, uint16_t);
			MEMBER(dist_fade_start, cclient_alpha_property, uint16_t);
			MEMBER(dist_fade_end, cclient_alpha_property, uint16_t);
			MEMBER(fade_scale, cclient_alpha_property, float);
			MEMBER(render_fx_start_time, cclient_alpha_property, game_time_t);
			MEMBER(render_fx_duration, cclient_alpha_property, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cclient_alpha_property : public iclient_alpha_property

		class ccomposite_material_editor_doc
		{
		public:
			MEMBER(version, ccomposite_material_editor_doc, int);
			MEMBER(points, ccomposite_material_editor_doc, cutl_vector<composite_material_editor_point_t>);
			MEMBER(kvthumbnail, ccomposite_material_editor_doc, key_values3);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class ccomposite_material_editor_doc

		class ccomic_book
		{
		public:
			MEMBER(cover_image, ccomic_book, cpanorama_image_name);
			MEMBER(xml_file, ccomic_book, cutl_string);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class ccomic_book

		struct composite_material_input_loose_variable_t
		{
			MEMBER(str_name, composite_material_input_loose_variable_t, cutl_string);
			MEMBER(expose_externally, composite_material_input_loose_variable_t, bool);
			MEMBER(str_exposed_friendly_name, composite_material_input_loose_variable_t, cutl_string);
			MEMBER(str_exposed_friendly_group_name, composite_material_input_loose_variable_t, cutl_string);
			MEMBER(exposed_variable_is_fixed_range, composite_material_input_loose_variable_t, bool);
			MEMBER(str_exposed_visible_when_true, composite_material_input_loose_variable_t, cutl_string);
			MEMBER(str_exposed_hidden_when_true, composite_material_input_loose_variable_t, cutl_string);
			MEMBER(variable_type, composite_material_input_loose_variable_t, composite_material_input_loose_variable_type_t);
			MEMBER(value_boolean, composite_material_input_loose_variable_t, bool);
			MEMBER(value_int_x, composite_material_input_loose_variable_t, int);
			MEMBER(value_int_y, composite_material_input_loose_variable_t, int);
			MEMBER(value_int_z, composite_material_input_loose_variable_t, int);
			MEMBER(value_int_w, composite_material_input_loose_variable_t, int);
			MEMBER(has_float_bounds, composite_material_input_loose_variable_t, bool);
			MEMBER(value_float_x, composite_material_input_loose_variable_t, float);
			MEMBER(value_float_x_min, composite_material_input_loose_variable_t, float);
			MEMBER(value_float_x_max, composite_material_input_loose_variable_t, float);
			MEMBER(value_float_y, composite_material_input_loose_variable_t, float);
			MEMBER(value_float_y_min, composite_material_input_loose_variable_t, float);
			MEMBER(value_float_y_max, composite_material_input_loose_variable_t, float);
			MEMBER(value_float_z, composite_material_input_loose_variable_t, float);
			MEMBER(value_float_z_min, composite_material_input_loose_variable_t, float);
			MEMBER(value_float_z_max, composite_material_input_loose_variable_t, float);
			MEMBER(value_float_w, composite_material_input_loose_variable_t, float);
			MEMBER(value_float_w_min, composite_material_input_loose_variable_t, float);
			MEMBER(value_float_w_max, composite_material_input_loose_variable_t, float);
			MEMBER(c_value_color4, composite_material_input_loose_variable_t, color);
			MEMBER(value_system_var, composite_material_input_loose_variable_t, composite_material_var_system_var_t);
			MEMBER(str_resource_material, composite_material_input_loose_variable_t, cresource_name);
			MEMBER(str_texture_content_asset_path, composite_material_input_loose_variable_t, cutl_string);
			MEMBER(str_texture_runtime_resource_path, composite_material_input_loose_variable_t, cresource_name);
			MEMBER(str_texture_compilation_vtex_template, composite_material_input_loose_variable_t, cutl_string);
			MEMBER(texture_type, composite_material_input_loose_variable_t, composite_material_input_texture_type_t);
			MEMBER(str_string, composite_material_input_loose_variable_t, cutl_string);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct composite_material_input_loose_variable_t

		class game_rules
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class game_rules

		class multiplay_rules : public game_rules
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class multiplay_rules : public game_rules

		struct comp_mat_mutator_condition_t
		{
			MEMBER(mutator_condition, comp_mat_mutator_condition_t, comp_mat_property_mutator_condition_type_t);
			MEMBER(str_mutator_condition_container_name, comp_mat_mutator_condition_t, cutl_string);
			MEMBER(str_mutator_condition_container_var_name, comp_mat_mutator_condition_t, cutl_string);
			MEMBER(str_mutator_condition_container_var_value, comp_mat_mutator_condition_t, cutl_string);
			MEMBER(pass_when_true, comp_mat_mutator_condition_t, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct comp_mat_mutator_condition_t

		class cfire_overlay : public cglow_overlay
		{
		public:
			MEMBER(owner_ptr, cfire_overlay, fire_smoke*);
			MEMBER_ARR(v_base_colors_arr, cfire_overlay, 4, vector);
			MEMBER(scale, cfire_overlay, float);
			MEMBER(guid, cfire_overlay, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cfire_overlay : public cglow_overlay

		class iron_sight_controller
		{
		public:
			MEMBER(iron_sight_available, iron_sight_controller, bool);
			MEMBER(iron_sight_amount, iron_sight_controller, float);
			MEMBER(iron_sight_amount_gained, iron_sight_controller, float);
			MEMBER(iron_sight_amount_biased, iron_sight_controller, float);
			MEMBER(iron_sight_amount_interpolated, iron_sight_controller, float);
			MEMBER(iron_sight_amount_gained_interpolated, iron_sight_controller, float);
			MEMBER(iron_sight_amount_biased_interpolated, iron_sight_controller, float);
			MEMBER(interpolation_last_updated, iron_sight_controller, float);
			MEMBER_ARR(ang_delta_average_arr, iron_sight_controller, 8, qangle);
			MEMBER(ang_view_last, iron_sight_controller, qangle);
			MEMBER(vec_dot_coords, iron_sight_controller, vector2d);
			MEMBER(dot_blur, iron_sight_controller, float);
			MEMBER(speed_ratio, iron_sight_controller, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class iron_sight_controller

		class cplayer_spray_decal_render_helper
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cplayer_spray_decal_render_helper

		struct composite_material_editor_point_t
		{
			MEMBER(model_name, composite_material_editor_point_t, cresource_name);
			MEMBER(sequence_index, composite_material_editor_point_t, int);
			MEMBER(cycle, composite_material_editor_point_t, float);
			MEMBER(kvmodel_state_choices, composite_material_editor_point_t, key_values3);
			MEMBER(enable_child_model, composite_material_editor_point_t, bool);
			MEMBER(child_model_name, composite_material_editor_point_t, cresource_name);
			MEMBER(vec_composite_material_assembly_procedures, composite_material_editor_point_t, cutl_vector<composite_material_assembly_procedure_t>);
			MEMBER(vec_composite_materials, composite_material_editor_point_t, cutl_vector<composite_material_t>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct composite_material_editor_point_t

		class command_context
		{
		public:
			MEMBER(needsprocessing, command_context, bool);
			MEMBER(command_number, command_context, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class command_context

		class singleplay_rules : public game_rules
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class singleplay_rules : public game_rules

		class cglow_sprite
		{
		public:
			MEMBER(v_color, cglow_sprite, vector);
			MEMBER(horz_size, cglow_sprite, float);
			MEMBER(vert_size, cglow_sprite, float);
			MEMBER(h_material, cglow_sprite, cstrong_handle<info_for_resource_type_imaterial2>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cglow_sprite

		class cflashlight_effect
		{
		public:
			MEMBER(is_on, cflashlight_effect, bool);
			MEMBER(muzzle_flash_enabled, cflashlight_effect, bool);
			MEMBER(muzzle_flash_brightness, cflashlight_effect, float);
			MEMBER(quat_muzzle_flash_orientation, cflashlight_effect, quaternion);
			MEMBER(vec_muzzle_flash_origin, cflashlight_effect, vector);
			MEMBER(fov, cflashlight_effect, float);
			MEMBER(far_z, cflashlight_effect, float);
			MEMBER(linear_atten, cflashlight_effect, float);
			MEMBER(casts_shadows, cflashlight_effect, bool);
			MEMBER(current_pull_back_dist, cflashlight_effect, float);
			MEMBER(flashlight_texture, cflashlight_effect, cstrong_handle<info_for_resource_type_ctexture_base>);
			MEMBER(muzzle_flash_texture, cflashlight_effect, cstrong_handle<info_for_resource_type_ctexture_base>);
			MEMBER_ARR(texture_name_arr, cflashlight_effect, 64, char);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cflashlight_effect

		class timed_event
		{
		public:
			MEMBER(time_between_events, timed_event, float);
			MEMBER(next_event, timed_event, float);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class timed_event

		class cinterpolated_value
		{
		public:
			MEMBER(start_time, cinterpolated_value, float);
			MEMBER(end_time, cinterpolated_value, float);
			MEMBER(start_value, cinterpolated_value, float);
			MEMBER(end_value, cinterpolated_value, float);
			MEMBER(interp_type, cinterpolated_value, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cinterpolated_value

		class sun_glow_overlay : public cglow_overlay
		{
		public:
			MEMBER(modulate_by_dot, sun_glow_overlay, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class sun_glow_overlay : public cglow_overlay

		class light_glow_overlay : public cglow_overlay
		{
		public:
			MEMBER(vec_origin, light_glow_overlay, vector);
			MEMBER(vec_direction, light_glow_overlay, vector);
			MEMBER(min_dist, light_glow_overlay, int);
			MEMBER(max_dist, light_glow_overlay, int);
			MEMBER(outer_max_dist, light_glow_overlay, int);
			MEMBER(one_sided, light_glow_overlay, bool);
			MEMBER(modulate_by_dot, light_glow_overlay, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class light_glow_overlay : public cglow_overlay

		struct comp_mat_property_mutator_t
		{
			MEMBER(enabled, comp_mat_property_mutator_t, bool);
			MEMBER(mutator_command_type, comp_mat_property_mutator_t, comp_mat_property_mutator_type_t);
			MEMBER(str_init_with_container, comp_mat_property_mutator_t, cutl_string);
			MEMBER(str_copy_property_input_container_src, comp_mat_property_mutator_t, cutl_string);
			MEMBER(str_copy_property_input_container_property, comp_mat_property_mutator_t, cutl_string);
			MEMBER(str_copy_property_target_property, comp_mat_property_mutator_t, cutl_string);
			MEMBER(str_random_roll_input_vars_seed_input_var, comp_mat_property_mutator_t, cutl_string);
			MEMBER(vec_random_roll_input_vars_input_vars_to_roll, comp_mat_property_mutator_t, cutl_vector<cutl_string>);
			MEMBER(str_copy_matching_keys_input_container_src, comp_mat_property_mutator_t, cutl_string);
			MEMBER(str_copy_keys_with_suffix_input_container_src, comp_mat_property_mutator_t, cutl_string);
			MEMBER(str_copy_keys_with_suffix_find_suffix, comp_mat_property_mutator_t, cutl_string);
			MEMBER(str_copy_keys_with_suffix_replace_suffix, comp_mat_property_mutator_t, cutl_string);
			MEMBER(set_value_value, comp_mat_property_mutator_t, composite_material_input_loose_variable_t);
			MEMBER(str_generate_texture_target_param, comp_mat_property_mutator_t, cutl_string);
			MEMBER(str_generate_texture_initial_container, comp_mat_property_mutator_t, cutl_string);
			MEMBER(resolution, comp_mat_property_mutator_t, int);
			MEMBER(is_scratch_target, comp_mat_property_mutator_t, bool);
			MEMBER(splat_debug_info, comp_mat_property_mutator_t, bool);
			MEMBER(capture_in_render_doc, comp_mat_property_mutator_t, bool);
			MEMBER(vec_tex_gen_instructions, comp_mat_property_mutator_t, cutl_vector<comp_mat_property_mutator_t>);
			MEMBER(vec_conditional_mutators, comp_mat_property_mutator_t, cutl_vector<comp_mat_property_mutator_t>);
			MEMBER(str_pop_input_queue_container, comp_mat_property_mutator_t, cutl_string);
			MEMBER(str_draw_text_input_container_src, comp_mat_property_mutator_t, cutl_string);
			MEMBER(str_draw_text_input_container_property, comp_mat_property_mutator_t, cutl_string);
			MEMBER(vec_draw_text_position, comp_mat_property_mutator_t, vector2d);
			MEMBER(col_draw_text_color, comp_mat_property_mutator_t, color);
			MEMBER(str_draw_text_font, comp_mat_property_mutator_t, cutl_string);
			MEMBER(vec_conditions, comp_mat_property_mutator_t, cutl_vector<comp_mat_mutator_condition_t>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct comp_mat_property_mutator_t

		class cdecal_info
		{
		public:
			MEMBER(animation_scale, cdecal_info, float);
			MEMBER(animation_life_span, cdecal_info, float);
			MEMBER(place_time, cdecal_info, float);
			MEMBER(fade_start_time, cdecal_info, float);
			MEMBER(fade_duration, cdecal_info, float);
			MEMBER(vbslot, cdecal_info, int);
			MEMBER(bone_index, cdecal_info, int);
			MEMBER(v_position, cdecal_info, vector);
			MEMBER(bounding_radius_sqr, cdecal_info, float);
			MEMBER(next_ptr, cdecal_info, cdecal_info*);
			MEMBER(prev_ptr, cdecal_info, cdecal_info*);
			MEMBER(decal_material_index, cdecal_info, int);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class cdecal_info

		struct composite_material_assembly_procedure_t
		{
			MEMBER(vec_comp_mat_includes, composite_material_assembly_procedure_t, cutl_vector<cresource_name>);
			MEMBER(vec_match_filters, composite_material_assembly_procedure_t, cutl_vector<composite_material_match_filter_t>);
			MEMBER(vec_composite_input_containers, composite_material_assembly_procedure_t, cutl_vector<composite_material_input_container_t>);
			MEMBER(vec_property_mutators, composite_material_assembly_procedure_t, cutl_vector<comp_mat_property_mutator_t>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct composite_material_assembly_procedure_t

		struct composite_material_input_container_t
		{
			MEMBER(enabled, composite_material_input_container_t, bool);
			MEMBER(composite_material_input_container_source_type, composite_material_input_container_t, composite_material_input_container_source_type_t);
			MEMBER(str_specific_container_material, composite_material_input_container_t, cresource_name);
			MEMBER(str_attr_name, composite_material_input_container_t, cutl_string);
			MEMBER(str_alias, composite_material_input_container_t, cutl_string);
			MEMBER(vec_loose_variables, composite_material_input_container_t, cutl_vector<composite_material_input_loose_variable_t>);
			MEMBER(str_attr_name_for_var, composite_material_input_container_t, cutl_string);
			MEMBER(expose_externally, composite_material_input_container_t, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct composite_material_input_container_t

		class teamplay_rules : public multiplay_rules
		{
		public:
			// empty.
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class teamplay_rules : public multiplay_rules

		struct generated_texture_handle_t
		{
			MEMBER(str_bitmap_name, generated_texture_handle_t, cutl_string);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // struct generated_texture_handle_t

		class canim_script_base
		{
		public:
			MEMBER(is_valid, canim_script_base, bool);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class canim_script_base

		class empty_test_script : public canim_script_base
		{
		public:
			MEMBER(h_test, empty_test_script, canim_script_param<float>);
			template <typename T>
				T *as() { return reinterpret_cast<T *>(this); }
		}; // class empty_test_script : public canim_script_base

	} // namespace schema

} // namespace sdk

#endif // SDK_SCHEMA_GLOBAL_TYPES_H
