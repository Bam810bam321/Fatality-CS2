#include <utils/murmur2.h>
#include <cinttypes>
#include <game/cfg.h>
#include <game/draw_manager.h>
#include <game/game.h>
#include <game/visuals.h>
#include <sdk/client.h>
#include <sdk/engine.h>
#include <sdk/globalvars.h>
#include <sdk/localize.h>
#include <utils/math.h>
#include "tinyformat.h"


visuals_t visuals;

using namespace evo::ren;

void visuals_t::run()
{
	if (!sdk::GameEntitySystem)
		return;

	if (!sdk::Engine->in_game())
		return;

	auto view_setup = viewset;

	draw_mgr.buf->add_rect({ {50,50},{100,100} }, { 255,255,255, 255 });

	const auto last_ent = sdk::GameEntitySystem->get_last_entity_index();

	/*if (cfg.visuals.esp.world.enabled.get())
		for (auto i =  (sdk::max_players + 1); i <= last_ent; i++)
		{
			const auto entity = sdk::GameEntitySystem ->get_entity_by_index(i);
			if (!entity || !entity->get_game_scene_node_ptr() || entity->get_h_owner_entity().get())
				continue;

			if (!entity->get_entity_ptr()->get_designer_name() || *entity->get_entity_ptr()->get_designer_name() == '0')
				continue;

			const auto hashed_name = utils::fnv1a(entity->get_entity_ptr()->get_designer_name());
			if (!sdk::name_to_id.contains(hashed_name))
				continue;

			auto origin = *entity->get_computed_abs_origin();

			const auto dist = view_setup->origin.dist(origin);
			const auto cl_dist = clamp(dist - 500.f, 0.f, 500.f);
			draw_mgr.buf->g.alpha = (255.f - cl_dist / 2) / 255.f;
			if (draw_mgr.buf->g.alpha == 0.f)
				continue;

			const auto weapon_id = sdk::name_to_id[hashed_name];
			const auto name = std::string(entity->get_entity_ptr()->get_designer_name());

			const auto weapon = entity->as<sdk::schema::base_player_weapon>();
			const auto wpn_item = weapon ? &weapon->get_attribute_manager().get_item() : nullptr;

			vec2 pos{};
			if (!math::world_to_screen(origin, pos))
				continue;

			if (wpn_item && wpn_item->as<sdk::cs2_econ_item_view>()->get_item_definition())
			{
				auto offset = vec2{0, 7};
				if (cfg.visuals.esp.world.weapon_icons.get())
				{
					draw_mgr.add_icon(
						pos - offset, cfg.visuals.esp.world.color.get(), draw_mgr.get_panorama_texture(XOR("icons/equipment/") + name.substr(7), 12),
						text_params::with_vh(align_center, align_center));
				}
				else
				{
					draw_mgr.buf->font = draw.fonts[FNV1A("esp")];
					draw_mgr.buf->add_text(
						pos + offset, game->loc->find_safe(wpn_item->as<sdk::cs2_econ_item_view>()->get_item_definition()->item_type_name),
						cfg.visuals.esp.world.color.get(), text_params::with_vh(align_center, align_center));
				}

				const auto clip = clamp(weapon->get_clip1(), 0, 1000);
				const auto maxclip = clamp(game->fn.get_weapon_data(&weapon->get_attribute_manager().get_item())->get_max_clip1(), 0, 1000);

				if (clip > 0 && maxclip > 0)
					draw_bar(
						vec2{pos.x - 28, pos.y + 3} + offset, 52, true, {cfg.visuals.esp.world.color.get()}, static_cast<float>(clip) / maxclip,
						static_cast<float>(clip) / maxclip <= 0.93f ? std::optional(clip) : std::nullopt);
			}
		}*/

	for (auto i = 1; i <= sdk::max_players; i++)
	{
		draw_mgr.buf->add_rect({ {70,70},{200,200} }, { 255,0,0, 255 });

		auto& player = players[i];
		auto remove = [&](const bool force = false)
			{
				player.alpha -= 255.f / 0.3f * sdk::GlobalVars->frame_time;
				player.alpha = clamp(player.alpha, 0.f, 255.f);
				player.model_alpha -= 255.f / 0.3f * sdk::GlobalVars->frame_time;
				player.model_alpha = clamp(player.model_alpha, 0.f, 255.f);
				player.health_interpolated = 0.f;
				if (cfg.visuals.disablers->test(cfg_t::vis_disable_model_fade) || cfg.visuals.disablers->test(cfg_t::vis_disable_esp_fade))
					player.alpha = player.model_alpha = 0.f;

				if (force)
				{
					player.model_alpha = 0.f;
					player.alpha = 0.f;
				}

				player.alpha_lerp = player.alpha;
			};

		const auto player_controller = sdk::GameEntitySystem->get_player_controller(i);
		if (!player_controller || player_controller->get_is_local_player_controller())
		{
			remove(true);
			continue;
		}

		const auto player_pawn = sdk::GameEntitySystem->get_player_pawn(i);
		if (!player_pawn || !player_pawn->is_alive())
		{
			remove(true);
			continue;
		}

		if (player_pawn->get_m_flLastSpawnTimeIndex().get_value() != player.spawntime)
		{
			player.spawntime = player_pawn->get_m_flLastSpawnTimeIndex().get_value();
			player.alpha = 0.f;
			player.alpha_lerp = 0.f;
			player.model_alpha = 0.f;
		}

		player.model_alpha += 255.f / 0.5f * sdk::GlobalVars->frame_time;
		player.model_alpha = clamp(player.model_alpha, 0.f, 255.f);
		player.alpha_lerp += 255.f / 0.6f * sdk::GlobalVars->frame_time;
		player.alpha_lerp = clamp(player.alpha_lerp, 0.f, 255.f);

		if (cfg.visuals.disablers->test(cfg_t::vis_disable_model_fade))
			player.model_alpha = 255.f;

		if (cfg.visuals.disablers->test(cfg_t::vis_disable_esp_fade))
			player.alpha_lerp = 255.f;

		if (cfg.visuals.disablers->test(cfg_t::vis_disable_health_bar_interp) || static_cast<float>(player_pawn->get_m_iHealth()) > player.health_interpolated)
			player.health_interpolated = static_cast<float>(player_pawn->get_m_iHealth());

		player.health_interpolated = math::approach(
			static_cast<float>(player_pawn->get_m_iHealth()), player.health_interpolated, sdk::GlobalVars->frame_time * 23.f * std::max(
				1.f, player.health_interpolated - static_cast<float>(player_pawn->get_m_iHealth())));

		player.alpha = player.alpha_lerp;

		if (!player_pawn->is_enemy())
		{
			player.alpha = 0.f;
			player.alpha_lerp = 0.f;
			continue;
		}

		player.offset = {};

		player.pos = player_pawn->as<sdk::cs2_base_entity>()->get_computed_abs_origin();
		auto pos_top = player.pos + sdk::vector{ 0, 0, player_pawn->get_m_vecViewOffset().get_vec_z() + 8 };
		auto pos_bot = player.pos;
		pos_bot.z -= 4;

		/*player.oof = false;
		if (!math::world_to_screen(pos_top, player.top))
			player.oof = true;
		if (!math::world_to_screen(pos_bot, player.bot))
			player.oof = true;*/

		const auto size = draw.display;

		player.bot = player.bot.round();
		player.top = player.top.round();

		player.height = round(clamp(player.bot.y - player.top.y, 10.f, clamp(size.y * 1.5f, 10.f, 999999.f)));
		player.width = round(clamp(player.height / 3.8f, 3.f, size.x / 4.f));
		player.top = player.bot;
		player.top.y -= player.height;

		if (player.bot.x + player.width + 20 < 0 || player.bot.x - player.width - 20 > size.x || player.bot.y + 20 < 0 || player.bot.y - player.height - 20 > size.y)
			player.oof = true;

		auto& layer = draw_mgr.buf;
		layer->g.anti_alias = false;

		auto player_box = [&]()
			{
				if (!cfg.visuals.esp.box.get())
					return;

				const auto color = cfg.visuals.esp.box_color.get();
				layer->add_rect(rect(vec2{ player.top.x - player.width + 1.f, player.top.y + 1 }).size(vec2{ player.width * 2 - 2, player.height - 2 }), color);
				layer->add_rect(
					rect(vec2{ player.top.x - player.width, player.top.y }).size(vec2{ player.width * 2, static_cast<float>(player.height) }), ::color(color::black(), 0.4f));
				layer->add_rect(
					rect(vec2{ player.top.x - player.width + 2, player.top.y + 2 }).size(vec2{ player.width * 2 - 4, player.height - 4 }), ::color(color::black(), 0.4f));
			};

		auto player_info = [&]()
			{
				if (cfg.visuals.esp.armor.get())
				{
					const auto armor = player_pawn->get_m_ArmorValue();
					if (armor > 0)
						add_bar(player, esp_item_pos::bottom, { cfg.visuals.esp.armor_color.get() }, armor / 100.f, armor <= 93 ? std::optional(armor) : std::nullopt);
				}

			/*	if (cfg.visuals.esp.ammo.get() && player_pawn->get_weapon_services_ptr() && player_pawn->get_weapon_services_ptr()->get_h_active_weapon().get())
				{
					const auto clip = clamp(player_pawn->get_weapon_services_ptr()->get_h_active_weapon().get()->get_clip1(), 0, 1000);
					const auto maxclip = clamp(
						game->fn.get_weapon_data(&player_pawn->get_weapon_services_ptr()->get_h_active_weapon().get()->get_attribute_manager().get_item())->get_max_clip1(),
						0, 1000);

					if (clip > 0 && maxclip > 0)
						add_bar(
							player, esp_item_pos::bottom, { cfg.visuals.esp.ammo_color.get() }, static_cast<float>(clip) / maxclip,
							static_cast<float>(clip) / maxclip <= 0.93f ? std::optional(clip) : std::nullopt);
				}*/

				if (cfg.visuals.esp.health.get())
				{
					const auto health = player_pawn->get_m_iHealth();
					const auto max_health = std::max(health, player_pawn->get_m_iMaxHealth());
					std::vector<color> colors;
					if (cfg.visuals.esp.health_style->test(cfg_t::healthbar_solid))
						colors = { color::interpolate(cfg.visuals.esp.health_color_1.get(), cfg.visuals.esp.health_color_2.get(), player.health_interpolated / max_health) };
					else
						colors = { cfg.visuals.esp.health_color_1.get(),
								  color::interpolate(cfg.visuals.esp.health_color_1.get(), cfg.visuals.esp.health_color_2.get(), player.health_interpolated / max_health) };

					if (health > 0 && max_health > 0)
						add_bar(
							player, esp_item_pos::left, colors, player.health_interpolated / max_health,
							static_cast<float>(health) / max_health <= 0.93 ? std::optional(health) : std::nullopt);
				}

				if (cfg.visuals.esp.ping.get())
				{
					const auto ping = player_controller->get_ping();
					if (ping >= 100)
						add_bar(player, esp_item_pos::top, { cfg.visuals.esp.ping_color.get() }, static_cast<float>(ping) / 200, ping);
				}

				layer->font = draw.fonts[FNV1A("esp_name")];
				if (cfg.visuals.esp.name.get())
				{
					add_text(player, esp_item_pos::top, cfg.visuals.esp.name_color.get(), player_controller->get_s_sanitized_player_name().get(), true);
				}

				if (cfg.visuals.esp.flags->test(cfg_t::esp_flag_immune) && player_pawn->get_m_fImmuneToGunGameDamageTime().get_value() - sdk::GlobalVars->cur_time > 0.f)
				{
					add_text(
						player, esp_item_pos::right, color(
							color(1.f, 0.552f, 0.21f), std::min(player_pawn->get_m_fImmuneToGunGameDamageTime().get_value() - sdk::GlobalVars->cur_time, 1.f)),
						XOR("IMMUNE"));
				}

				if (cfg.visuals.esp.flags->test(cfg_t::esp_flag_money) && player_controller->get_in_game_money_services_ptr())
				{
					add_text(player, esp_item_pos::right, color{ 130, 180, 0 }, XOR("$") + std::to_string(player_controller->get_in_game_money_services_ptr()->get_account()));
				}
				if (cfg.visuals.esp.flags->test(cfg_t::esp_flag_armor) && (player_controller->get_pawn_has_helmet() || player_pawn->get_prev_armor_val() > 0))
				{
					const auto string = player_pawn->get_prev_helmet() ? XOR("HK") : XOR("K");
					add_text(player, esp_item_pos::right, color::white(), string);
				}
				/*if (player.can_hit && cfg.visuals.esp.flags->test(cfg_t::esp_flag_hit))
				{
					_(H, "HIT");
					const auto color = player.dormant ? ::color::gray(.5f, player.alpha / 255.f) : ::color(255.f, 255.f, 255.f, player.alpha, true);
					layer->add_text(vec2(top.x + width + 3, top.y + 8 * elements++ - 1), H, color, text_params::with_h(align_left));
				}*/
				if (cfg.visuals.esp.flags->test(cfg_t::esp_flag_scoped) && player_pawn->get_m_bIsScoped())
				{
					add_text(player, esp_item_pos::right, color(0.18f, 0.451f, 0.788f), XOR("SCOPED"));
				}

				//const auto weapon = player_pawn->get_weapon_services_ptr() ? player_pawn->get_weapon_services_ptr()->get_h_active_weapon().get() : nullptr;
				//const auto wpn_item = weapon ? &weapon->get_attribute_manager().get_item() : nullptr;
				//const auto wpn_data = wpn_item ? game->fn.get_weapon_data(wpn_item) : nullptr;
				//if (cfg.visuals.esp.weapon.get() && wpn_item && wpn_item->as<sdk::cs2_econ_item_view>()->get_item_definition())
				//{
				//	/*add_text(
				//		player, esp_item_pos::bottom, cfg.visuals.esp.weapon_color.get(), game->loc->find_safe(
				//			wpn_item->as<sdk::cs2_econ_item_view>()->get_item_definition()->item_type_name));*/
				//}
				//if (cfg.visuals.esp.weapon_icon.get() && wpn_data)
				//{
				//	const auto name = std::string(wpn_data->get_name().get());
				//	if (name.length() > 8)
				//		add_icon(
				//			player, esp_item_pos::bottom, cfg.visuals.esp.weapon_color.get(), draw_mgr.get_panorama_texture(XOR("icons/equipment/") + name.substr(7), 12));
				//}

				///*if (player.lc && !player.dormant && cfg.visuals.esp.flags->test(cfg_t::esp_flag_lc))
				//{
				//	_(lc_s, "LC");
				//	const auto color = player.dormant ? ::color::gray(.5f, player.alpha / 255.f) : ::color(130.f, 180.f, 0.f, player.alpha, true);
				//	layer->add_text(vec2(top.x + width + 3, top.y + 8 * elements++ - 1), lc_s, color, text_params::with_h(align_left));
				//}*/

				//auto has_zeus = false;
				//auto has_bomb = false;
				//if ((cfg.visuals.esp.flags->test(cfg_t::esp_flag_taser) || cfg.visuals.esp.flags->test(cfg_t::esp_flag_bomb)) && player_pawn->get_weapon_services_ptr() &&
				//	player_pawn->get_weapon_services_ptr()->get_h_my_weapons().size > 0)
				//{
				//	for (auto idx = 0; player_pawn->get_weapon_services_ptr()->get_h_my_weapons().data[idx].valid() && idx < player_pawn->get_weapon_services_ptr()->
				//		get_h_my_weapons().size; idx++)
				//	{
				//		const auto wpn = player_pawn->get_weapon_services_ptr()->get_h_my_weapons().data[idx].get();
				//		if (!wpn)
				//			continue;

				//		if (wpn->get_attribute_manager().get_item().get_item_definition_index() == sdk::weapon_id::weapon_taser)
				//			has_zeus = true;

				//		else if (wpn->get_attribute_manager().get_item().get_item_definition_index() == sdk::weapon_id::weapon_c4)
				//			has_bomb = true;
				//	}
				//}

				//if (cfg.visuals.esp.flags->test(cfg_t::esp_flag_taser) && has_zeus && wpn_item)
				//{
				//	const auto amount = fmod(sdk::GlobalVars->real_time, 0.5f) * 2.f;
				//	const auto opacity = static_cast<int>(ceilf(sdk::GlobalVars->real_time)) % 1 ? 1.f - amount : amount;
				//	const auto zeus_active = wpn_item->get_item_definition_index() == sdk::weapon_id::weapon_taser;
				//	add_icon(
				//		player, esp_item_pos::left, color(1.f, 0.902f, 0.068f, zeus_active ? opacity : 1.f), draw_mgr.get_svg_texture(FNV1A("taser"), 16), vec2{ 2, 1 }, 11);
				//}

				//if (cfg.visuals.esp.flags->test(cfg_t::esp_flag_defuser) && player_pawn->get_prev_defuser())
				//{
				//	add_icon(player, esp_item_pos::left, color(0.18f, 0.451f, 0.788f), draw_mgr.get_panorama_texture(XOR("icons/equipment/defuser"), 10), vec2{ -1, 0 });
				//}

				//if (cfg.visuals.esp.flags->test(cfg_t::esp_flag_bomb) && has_bomb)
				//{
				//	add_icon(player, esp_item_pos::left, color(0.788f, 0.188f, 0.247f), draw_mgr.get_panorama_texture(XOR("icons/equipment/c4"), 10), vec2{ -2, 0 });
				//}

			};

		if (player.alpha > 0.f)
		{

			/*if (player.oof)
			{
				player_out_of_fov();
				continue;
			}*/

			if (!cfg.visuals.esp.enabled.get())
				continue;

			draw_mgr.buf->g.alpha = player.alpha / 255.f;

			//player_skeleton(player, layer);
			player_box();
			player_info();

			draw_mgr.buf->add_rect({ {80,80},{200,200} }, { 0,255,0, 255 });
		}
	}

	draw_mgr.buf->g.alpha = 1.f;
}

void visuals_t::draw_debug_info() const
{
	auto elems = 0;
	for (auto& elem : values)
	{
		draw_mgr.buf->font = draw.fonts[GUI_HASH("gui_main")];
		draw_mgr.buf->add_text(
			vec2{ 50, 500 + ++elems * 12.f }, tfm::format("[ %s ]\t %s", elem.first, elem.second.value), color::white(), text_params::with_vh(align_top, align_left));
	}
}

void visuals_t::add_text(player_data_t& player, const esp_item_pos pos, const color& color, const std::string& text, bool is_name)
{
	auto& offset = player.get_offset(pos);

	constexpr auto font_height = 9;
	draw_mgr.buf->font = is_name ? draw.fonts[FNV1A("esp_name")] : draw.fonts[FNV1A("esp")];

	switch (pos)
	{
	case esp_item_pos::top:
		draw_mgr.buf->add_text(
			vec2{ player.top.x + static_cast<float>(is_name ? 0 : 2), player.top.y - offset }, text, color, text_params::with_vh(align_bottom, align_center));
		offset += font_height;
		break;
	case esp_item_pos::bottom:
		draw_mgr.buf->add_text(
			vec2{ player.bot.x + static_cast<float>(is_name ? 0 : 2), player.bot.y + offset }, text, color, text_params::with_vh(align_top, align_center));
		offset += font_height;
		break;
	case esp_item_pos::right:
		draw_mgr.buf->add_text(
			vec2{ player.top.x + player.width + offset + 3, player.top.y + player.offset.text_right }, text, color, text_params::with_vh(align_top, align_left));
		player.offset.text_right += font_height;
		break;
	case esp_item_pos::left:
		draw_mgr.buf->add_text(
			vec2{ player.top.x - player.width - offset, player.top.y + player.offset.text_left }, text, color, text_params::with_vh(align_top, align_right));
		player.offset.text_left += font_height;
		break;
	}
}


void visuals_t::add_icon(
	player_data_t& player, const esp_item_pos pos, const color& color, const std::shared_ptr<texture>& texture, std::optional<vec2> add,
	std::optional<int> height_override)
{
	if (!texture)
		return;

	auto& offset = player.get_offset(pos);

	const auto int_height = height_override.value_or(static_cast<int>(ceilf(texture->get_size().y)));
	switch (pos)
	{
	case esp_item_pos::top:
		draw_mgr.add_icon(vec2{ player.top.x, player.top.y - offset } + add.value_or(vec2{}), color, texture, text_params::with_vh(align_bottom, align_center));
		offset += int_height + 1;
		break;
	case esp_item_pos::bottom:
		draw_mgr.add_icon(vec2{ player.bot.x, player.bot.y + offset } + add.value_or(vec2{}), color, texture, text_params::with_vh(align_top, align_center));
		offset += int_height + 1;
		break;
	case esp_item_pos::right:
		draw_mgr.add_icon(
			vec2{ player.top.x + player.width + offset + 3, player.top.y + player.offset.text_right } + add.value_or(vec2{}), color, texture,
			text_params::with_vh(align_top, align_left));
		player.offset.text_right += int_height + 1;
		break;
	case esp_item_pos::left:
		draw_mgr.add_icon(
			vec2{ player.top.x - player.width - offset, player.top.y + player.offset.text_left } + add.value_or(vec2{}), color, texture,
			text_params::with_vh(align_top, align_right));
		player.offset.text_left += int_height + 1;
		break;
	}
}

void visuals_t::add_bar(player_data_t& player, const esp_item_pos pos, const std::vector<color>& colors, float fraction, std::optional<int> value)
{
	if (colors.empty())
		return;

	auto& offset = player.get_offset(pos);
	switch (pos)
	{
	case esp_item_pos::top:
	case esp_item_pos::bottom:
	{
		const auto is_top = pos == esp_item_pos::top;
		const auto start_pos = vec2{ player.top.x - player.width, player.bot.y + (is_top ? -5 - offset : 1 + offset) };
		draw_bar(start_pos, player.width * 2, true, colors, fraction, value);
		break;
	}
	case esp_item_pos::right:
	case esp_item_pos::left:
	{
		const auto is_left = pos == esp_item_pos::left;
		const auto start_pos = vec2{ player.bot.x - player.width + (is_left ? -5 - offset : 1 + offset), player.bot.y };
		draw_bar(start_pos, player.height, false, colors, fraction, value);
		break;
	}
	}

	offset += 5;
}

void visuals_t::draw_bar(const vec2& start_pos, int length, bool horizontal, const std::vector<color>& colors, float fraction, std::optional<int> value)
{
	const auto multiplier = clamp(fraction, 0.f, 1.f);
	const auto multicolor = colors.size() > 1;
	const auto bar_length = floor((length - 2) * multiplier);

	const auto size = vec2{ horizontal ? length : 4.f, horizontal ? 4.f : -length };
	const auto bar_size = vec2{ horizontal ? bar_length : 2.f, horizontal ? 2.f : -bar_length };
	const auto bar_pos = horizontal ? start_pos + 1 : start_pos + vec2{ 1, -1 };

	draw_mgr.buf->add_rect_filled(rect(start_pos).size(size), ::color(color::black(), 0.4f));
	if (multicolor)
		draw_mgr.buf->add_rect_filled_multicolor(rect(bar_pos).size(bar_size), { colors[horizontal ? 1 : 0], colors[0], colors[horizontal ? 0 : 1], colors[1] });
	else
		draw_mgr.buf->add_rect_filled(rect(bar_pos).size(bar_size), colors[0]);

	draw_mgr.buf->font = draw.fonts[FNV1A("esp")];
	if (value.has_value())
	{
		const auto text_pos = vec2{ horizontal ? start_pos.x + 2 + bar_length : start_pos.x + 4, horizontal ? start_pos.y + 4 : start_pos.y - bar_length - 2 };
		draw_mgr.buf->add_text(text_pos, std::to_string(value.value()), ::color::white(), text_params::with_vh(align_center, align_center));
	}
}


/*







ИП Горяйнова О.А.
с 1 июня 2023 по 1 декабря 2023
Помощник мастера по установке пластиковых окон










(по трудовому договору) сдельная оплата труда 30%


*/