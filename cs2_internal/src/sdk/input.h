#pragma once
#include <game/game.h>

namespace sdk
{
	class cin_button_state
	{
		PAD_VTABLE
		uint64_t held;
		uint64_t pressed;
		uint64_t scrolled;
	};

	struct cuser_cmd : proto::csgouser_cmd_pb
	{
		cin_button_state buttons;
		PAD(0x30)
	};

	class ccs_input_message
	{
	public:
		int32_t m_frame_tick_count; // 0x0000
		float m_frame_tick_fraction; // 0x0004
		int32_t m_player_tick_count; // 0x0008
		float m_player_tick_fraction; // 0x000C
		qangle m_view_angles; // 0x0010
		vector m_shoot_position; // 0x001C
		int32_t m_target_index; // 0x0028
		vector m_target_head_position; // 0x002C What's this???
		vector m_target_abs_origin; // 0x0038
		vector m_target_angle; // 0x0044
		int32_t m_sv_show_hit_registration; // 0x0050
		int32_t m_entry_index_max; // 0x0054
		int32_t m_index_idk; // 0x0058
	}; // Size: 0x005C

#define MULTIPLAYER_BACKUP 150

	struct ccsgo_input
	{
		MEM_PAD(0x250);
		cuser_cmd commands[MULTIPLAYER_BACKUP];
		MEM_PAD(0x1);
		bool in_third_person;
		MEM_PAD(0x22)
			std::int32_t nSequenceNumber;
		std::int32_t nOldSequenceNumber;
		MEM_PAD(0x4);
		double dbUnknown; // look's like a timer
		std::uint64_t nButtonState1;
		std::uint64_t nButtonState2;
		std::uint64_t nButtonState3;
		std::uint64_t nButtonState4; // ?
		MEM_PAD(0xC);
		std::int32_t nMouseDeltaX;
		std::int32_t nMouseDeltaY;
		MEM_PAD(0xC);
		std::int64_t nOldPressedButton;
		bool bIsButtonPressed;
		MEM_PAD(0x10F);
		qangle angViewAngles;
		MEM_PAD(0x8C);
		bool bUnknownBool;
		MEM_PAD(0x7);

		cuser_cmd* GetUserCmd()
		{
			return &commands[nSequenceNumber % MULTIPLAYER_BACKUP];
		}

		void set_view_angles(qangle& angView)
		{
			// @ida: this got called before GetMatricesForView
			using fnSetViewAngle = std::int64_t(CS_FASTCALL*)(void*, std::int32_t, qangle&);
			static auto oSetViewAngle = reinterpret_cast<fnSetViewAngle>(MEM::FindPattern(CLIENT_DLL, CS_XOR("85 D2 75 3F 48")));

			oSetViewAngle(this, 0, std::ref(angView));
		}

		MEMBER_CUSTOM(frame_command, ccsgo_input, cuser_cmd);
		MEMBER_CUSTOM(current_command, ccsgo_input, uint32_t);
		MEMBER_CUSTOM(input_msg_frame_slots, ccsgo_input, ccs_input_message*);
		//MFUNC(set_view_angles(sdk::qangle &ang), bool (*)(void *, int, sdk::qangle &), client, input::set_view_angles)(0, ang);
		MFUNC(get_view_angles(), sdk::qangle &(*)(void *, int), client, input::get_view_angles)(0);
	};
}
