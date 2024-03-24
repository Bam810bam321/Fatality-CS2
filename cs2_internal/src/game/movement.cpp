#include <game/cfg.h>
#include <game/movement.h>
#include <game/visuals.h>
#include <sdk/cvar.h>
#include <sdk/input.h>
#include <sdk/sdk.h>
#include <utils/math.h>

std::array<bool, 150> onground_tick = {};
std::array<bool, 150> remove_tick = {};
bool pressed_jump = false;

void movement_t::bhop()
{
	auto &cmd = sdk::Input->commands[sdk::Input->get_current_command() % 150];

	pressed_jump = cmd.buttons.held & sdk::schema::in_jump;
	onground_tick[sdk::Input->get_current_command() % 150] = sdk::LocalPlayerController->get_pawn()->get_m_fFlags() & sdk::flags::fl_onground;
	remove_tick[sdk::Input->get_current_command() % 150] = false;

	var(sv_autobunnyhopping);
	if (!cfg.misc.bhop.get() || sv_autobunnyhopping->value.i1)
		return;

	if (!pressed_jump)
		return;

	constexpr sdk::schema::move_type_t bad_mts[] = {sdk::schema::move_type_t::movetype_observer, sdk::schema::move_type_t::movetype_noclip,
													sdk::schema::move_type_t::movetype_observer};
	const auto in_water = sdk::LocalPlayerController->get_pawn()->get_m_flWaterLevel() >= 2;
	const auto bad_mt = std::ranges::find(bad_mts, sdk::LocalPlayerController->get_pawn()->get_m_MoveType()) != std::end(bad_mts);
	if (bad_mt || in_water)
		return;

	if (!onground_tick[sdk::Input->get_current_command() % 150] || onground_tick[sdk::Input->get_current_command() % 150] && onground_tick[(sdk::Input->
		get_current_command() - 1) % 150] && !remove_tick[(sdk::Input->get_current_command() - 1) % 150])
	{
		cmd.buttons.held &= ~sdk::schema::in_jump;
		cmd.buttons.pressed &= ~sdk::schema::in_jump;
		cmd.buttons.scrolled &= ~sdk::schema::in_jump;
		remove_tick[sdk::Input->get_current_command() % 150] = true;
	}
}

void movement_t::strafe()
{
	static uint64_t last_pressed = 0;
	static uint64_t last_buttons = 0;

	auto &cmd = sdk::Input->commands[sdk::Input->get_current_command() % 150];

	const auto current_buttons = cmd.buttons.held | cmd.buttons.pressed;
	auto yaw = math::normalize_yaw(cmd.base->viewangles->y);

	const auto check_button = [&](const uint64_t button)
	{
		if (current_buttons & button && (!(last_buttons & button) || button & sdk::schema::in_moveleft && !(last_pressed & sdk::schema::in_moveright) || button &
			sdk::schema::in_moveright && !(last_pressed & sdk::schema::in_moveleft) || button & sdk::schema::in_forward && !(last_pressed & sdk::schema::in_back) ||
			button & sdk::schema::in_back && !(last_pressed & sdk::schema::in_forward)))
		{
			if (cfg.misc.autostrafe->test(cfg_t::autostrafe_easy_strafe))
			{
				if (button & sdk::schema::in_moveleft)
					last_pressed &= ~sdk::schema::in_moveright;
				else if (button & sdk::schema::in_moveright)
					last_pressed &= ~sdk::schema::in_moveleft;
				else if (button & sdk::schema::in_forward)
					last_pressed &= ~sdk::schema::in_back;
				else if (button & sdk::schema::in_back)
					last_pressed &= ~sdk::schema::in_forward;
			}

			last_pressed |= button;
		}
		else if (!(current_buttons & button))
			last_pressed &= ~button;
	};

	check_button(sdk::schema::in_moveleft);
	check_button(sdk::schema::in_moveright);
	check_button(sdk::schema::in_forward);
	check_button(sdk::schema::in_back);

	last_buttons = current_buttons;

	const auto velocity = sdk::LocalPlayerController->get_pawn()->get_m_vecAbsVelocity();

	if (!sdk::LocalPlayerController->get_pawn_is_alive() || sdk::LocalPlayerController->get_m_flWaterLevel() >= 2 || sdk::LocalPlayerController->get_m_MoveType() ==
		sdk::schema::move_type_t::movetype_noclip || sdk::LocalPlayerController->get_m_MoveType() == sdk::schema::move_type_t::movetype_ladder)
		return;

	if (!pressed_jump && !cfg.misc.autostrafe->test(cfg_t::autostrafe_jump_release) && !cfg.misc.edge_jump.get() || current_buttons &
		sdk::schema::in_speed)
		return;

	if (!cfg.misc.autostrafe->test(cfg_t::autostrafe_movement_keys) && !cfg.misc.autostrafe->test(cfg_t::autostrafe_viewangles))
		return;

	/*const auto weapon = sdk::LocalPlayerController->get_pawn()->get_weapon_services_ptr()->get_h_active_weapon().get();
	const auto js = weapon && (cfg.weapon_config.is_scout && cfg.weapon_config.cur.scout_jumpshot && sdk::LocalPlayerController->get_pawn()->get_vec_abs_velocity().length_2d() < 50.f);
	const auto throwing_nade = weapon && weapon->is_grenade() && ticks_to_time(local_player->get_tickbase()) >= weapon->get_throw_time() && weapon->get_throw_time() != 0.f;

	if (js)
		return;*/

	if (sdk::LocalPlayerController->get_pawn()->get_m_fFlags() & sdk::flags::fl_onground)
		return;

	if (cfg.misc.autostrafe->test(cfg_t::autostrafe_movement_keys))
	{
		auto offset = 0.f;
		if (last_pressed & sdk::schema::in_moveleft)
			offset += 90.f;
		if (last_pressed & sdk::schema::in_moveright)
			offset -= 90.f;
		if (last_pressed & sdk::schema::in_forward)
			offset *= 0.5f;
		else if (last_pressed & sdk::schema::in_back)
			offset = -offset * 0.5f + 180.f;

		yaw += offset;

		cmd.base->forwardmove = 0.f;
		cmd.base->leftmove = 0.f;

		if (!cfg.misc.autostrafe->test(cfg_t::autostrafe_viewangles) && offset == 0.f)
			return;
	}

	if (cmd.base->leftmove != 0.0f || cmd.base->forwardmove != 0.0f)
		return;

	auto velocity_angle = RAD2DEG(std::atan2f(velocity.y, velocity.x));
	if (velocity_angle < 0.0f)
		velocity_angle += 360.0f;

	if (velocity_angle < 0.0f)
		velocity_angle += 360.0f;

	velocity_angle -= floorf(velocity_angle / 360.0f + 0.5f) * 360.0f;

	const auto speed = velocity.length_2d();
	const auto ideal = clamp(RAD2DEG(std::atan2(15.f, speed)), 0.f, 45.f);

	const auto correct = (100.f - cfg.misc.autostrafe_smoothing.get()) * 0.02f * (ideal + ideal);

	cmd.base->forwardmove = 0.f;
	const auto velocity_delta = math::normalize_yaw(yaw - velocity_angle);

	/*if (throwing_nade && fabsf(velocity_delta) <=20.f)
	{
		auto &wish_angle = antiaim::wish_angles[globals::current_cmd->command_number % 150];
		wish_angle.y = math::normalize_yaw(yaw);
		globals::current_cmd->forwardmove = 450.f;

		antiaim::fix_movement(globals::current_cmd);
		return;
	}*/

	auto rotate_movement = [](sdk::cuser_cmd &cmd, float target_yaw)
	{
		const float rot = DEG2RAD(cmd.base->viewangles->y - target_yaw);

		const float new_forward = std::cos(rot) * cmd.base->forwardmove - std::sin(rot) * cmd.base->leftmove;
		const float new_side = std::sin(rot) * cmd.base->forwardmove + std::cos(rot) * cmd.base->leftmove;

		cmd.buttons.held &= ~(sdk::schema::in_back | sdk::schema::in_forward | sdk::schema::in_moveleft | sdk::schema::in_moveright);
		cmd.buttons.pressed &= ~(sdk::schema::in_back | sdk::schema::in_forward | sdk::schema::in_moveleft | sdk::schema::in_moveright);

		cmd.base->forwardmove = clamp(new_forward, -1.f, 1.f);
		cmd.base->leftmove = clamp(new_side * -1.f, -1.f, 1.f);

		if (cmd.base->forwardmove > 0.f)
			cmd.buttons.held |= sdk::schema::in_forward;
		else if (cmd.base->forwardmove < 0.f)
			cmd.buttons.held |= sdk::schema::in_back;

		if (cmd.base->leftmove > 0.f)
			cmd.buttons.held |= sdk::schema::in_moveleft;
		else if (cmd.base->leftmove < 0.f)
			cmd.buttons.held |= sdk::schema::in_moveright;
	};

	if (fabsf(velocity_delta) > 170.f && speed > 80.f || velocity_delta > correct && speed > 80.f)
	{
		yaw = correct + velocity_angle;
		cmd.base->leftmove = -1.f;
		rotate_movement(cmd, math::normalize_yaw(yaw));
		return;
	}

	const bool side_switch = sdk::Input->get_current_command() % 2 == 0;

	if (-correct <= velocity_delta || speed <= 80.f)
	{
		if (side_switch)
		{
			yaw = yaw - ideal;
			cmd.base->leftmove = -1.f;

		}
		else
		{
			yaw = ideal + yaw;
			cmd.base->leftmove = 1.f;

		}
		rotate_movement(cmd, math::normalize_yaw(yaw));
	}
	else
	{
		yaw = velocity_angle - correct;
		cmd.base->leftmove = 1.f;

		rotate_movement(cmd, math::normalize_yaw(yaw));
	}
}