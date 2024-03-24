#include <fstream>
#include <game/cfg.h>
#include <gui/misc.h>
#include <menu/menu.h>

#define ENTRY(name) data.data[GUI_HASH(#name)] = &name

using namespace evo::gui;

cfg_t cfg;

void cfg_t::init()
{
	// add sections
	add_section(&data);
	add_section(&autoload);

	// add parameters to data section
	ENTRY(aim.enabled);
	ENTRY(aim.autofire);
	ENTRY(aim.anti_exploit);
	ENTRY(aim.fallback_on_key);
	ENTRY(aim.hsmode);
	ENTRY(aim.knife_bot);
	ENTRY(aim.zeus_bot);
	ENTRY(aim.slide);
	ENTRY(aim.fake_duck);
	ENTRY(aim.punch);
	ENTRY(aim.doubletap);
	ENTRY(aim.hideshot);
	ENTRY(aim.silent);
	ENTRY(aim.dormant);
	ENTRY(aim.extend_peek);
	ENTRY(aim.visualize);
	ENTRY(aim.baim_on_key);
	ENTRY(aim.stop_in_air);
	ENTRY(aim.zeus_hc);
	ENTRY(aim.fov);
	ENTRY(aim.ping_spike_amt);
	ENTRY(aim.low_perf);
	ENTRY(aim.resolver_mode);
	ENTRY(aim.dt_exploit);
	ENTRY(aim.visualize_color_safe);
	ENTRY(aim.visualize_color);

	ENTRY(weapon_config.hitchance);
	ENTRY(weapon_config.pointscale);
	ENTRY(weapon_config.mindmg);
	ENTRY(weapon_config.mindmg_override);
	ENTRY(weapon_config.mindmg_override_enabled);
	ENTRY(weapon_config.autostop);
	ENTRY(weapon_config.autorevolver);
	ENTRY(weapon_config.scout_jumpshot);
	ENTRY(weapon_config.autoscope);
	ENTRY(weapon_config.ignore_limbs);
	ENTRY(weapon_config.autostop_mode);
	ENTRY(weapon_config.baim);
	ENTRY(weapon_config.extra_safety);
	ENTRY(weapon_config.force_safe);
	ENTRY(weapon_config.hitboxes);
	ENTRY(weapon_config.pointscales);
	ENTRY(weapon_config.fallback_mode);
	ENTRY(weapon_config.cfgs);

	ENTRY(legit.enabled);
	ENTRY(legit.quick_stop);
	ENTRY(legit.disablers);
	ENTRY(legit.backtrack);

	ENTRY(legit.weapon_config.magnet);
	ENTRY(legit.weapon_config.triggerbot);
	ENTRY(legit.weapon_config.rcs);
	ENTRY(legit.weapon_config.triggerbot_only_in_scope);
	ENTRY(legit.weapon_config.magnet_only_in_scope);
	ENTRY(legit.weapon_config.magnet_smooth);
	ENTRY(legit.weapon_config.magnet_fov);
	ENTRY(legit.weapon_config.magnet_speed);
	ENTRY(legit.weapon_config.override_factor);
	ENTRY(legit.weapon_config.limit_factor);
	ENTRY(legit.weapon_config.target_delay);
	ENTRY(legit.weapon_config.reaction_time);
	ENTRY(legit.weapon_config.rcs_speed);
	ENTRY(legit.weapon_config.magnet_hitboxes);
	ENTRY(legit.weapon_config.cfgs);

	ENTRY(aa.enabled);
	ENTRY(aa.spin);
	ENTRY(aa.jitter);
	ENTRY(aa.at_target);
	ENTRY(aa.aa_edge);
	ENTRY(aa.freestand);
	ENTRY(aa.add_enabled);
	ENTRY(aa.ensure_lean);
	ENTRY(aa.flip_fake);
	ENTRY(aa.flip_lean);
	ENTRY(aa.manual);
	ENTRY(aa.manual_left);
	ENTRY(aa.manual_right);
	ENTRY(aa.manual_back);
	ENTRY(aa.jitter_random);
	ENTRY(aa.indicators);
	ENTRY(aa.yaw);
	ENTRY(aa.yaw_base);
	ENTRY(aa.yaw_jitter);
	ENTRY(aa.fake);
	ENTRY(aa.pitch);
	ENTRY(aa.choke_mode);
	ENTRY(aa.strafing);
	ENTRY(aa.lean_type);
	ENTRY(aa.dt_exploit_angles);
	ENTRY(aa.spin_speed);
	ENTRY(aa.spin_range);
	ENTRY(aa.jitter_range);
	ENTRY(aa.add);
	ENTRY(aa.choke_limit);
	ENTRY(aa.fake_amount);
	ENTRY(aa.fake_limit);
	ENTRY(aa.compensate_angle);
	ENTRY(aa.lean_amount);
	ENTRY(aa.pitch_value);
	ENTRY(aa.enabled);
	ENTRY(aa.yaw_jitter_value);

	ENTRY(misc.compensate_grenade);
	ENTRY(misc.peek_assist);
	ENTRY(misc.peek_assist_retreat_on_release);
	ENTRY(misc.birthday_mode);
	ENTRY(misc.instant_unduck);
	ENTRY(misc.bhop);
	ENTRY(misc.fov_enabled);
	ENTRY(misc.vm_fov_enabled);
	ENTRY(misc.radar);
	ENTRY(misc.remove_flash);
	ENTRY(misc.remove_smoke);
	ENTRY(misc.remove_blur);
	ENTRY(misc.avoid_walls);
	ENTRY(misc.thirdperson);
	ENTRY(misc.thirdperson_dead);
	ENTRY(misc.thirdperson_grenade);
	ENTRY(misc.thirdperson_no_interp);
	ENTRY(misc.force_crosshair);
	ENTRY(misc.autoaccept);
	ENTRY(misc.reveal_ranks);
	ENTRY(misc.hurtlog);
	ENTRY(misc.hurtlog_info);
	ENTRY(misc.buylog);
	ENTRY(misc.clantag);
	ENTRY(misc.preservedn);
	ENTRY(misc.impacts);
	ENTRY(misc.grenade_tracer);
	ENTRY(misc.grenade_helper);
	ENTRY(misc.sv_pure);
	ENTRY(misc.shared_esp_with_enemy);
	ENTRY(misc.shared_esp);
	ENTRY(misc.buybot_defuser);
	ENTRY(misc.buybot_taser);
	ENTRY(misc.buybot_grenades);
	ENTRY(misc.debug_info);
	ENTRY(misc.edge_jump);
	ENTRY(misc.goblin_mode);
	ENTRY(misc.scope_invert);
	ENTRY(misc.peek_assist_col);
	ENTRY(misc.peek_assist_col2);
	ENTRY(misc.scope_line_color);
	ENTRY(misc.impacts_color);
	ENTRY(misc.impacts_color2);
	ENTRY(misc.box_color);
	ENTRY(misc.tracer_color);
	ENTRY(misc.fov_scope);
	ENTRY(misc.fov);
	ENTRY(misc.vm_fov);
	ENTRY(misc.hitsound_volume);
	ENTRY(misc.scope_line_size);
	ENTRY(misc.autostrafe_smoothing);
	ENTRY(misc.thirdperson_dist);
	ENTRY(misc.transparency_in_scope);
	ENTRY(misc.transparency_nade);
	ENTRY(misc.aspect);
	ENTRY(misc.hitsound_select);
	ENTRY(misc.autostrafe);
	ENTRY(misc.buybot_primary);
	ENTRY(misc.buybot_pistol);
	ENTRY(misc.noscope);
	ENTRY(misc.buybot_kevlar_helmet);
	ENTRY(misc.hitmarker);
	ENTRY(misc.dpi_scale);

	ENTRY(visuals.disable_postprocessing);
	ENTRY(visuals.dark);
	ENTRY(visuals.out_of_fov);
	ENTRY(visuals.autowall_crosshair);
	ENTRY(visuals.darkness);
	ENTRY(visuals.prop_transparency);
	ENTRY(visuals.out_of_fov_dst);
	ENTRY(visuals.out_of_fov_size);
	ENTRY(visuals.ragdoll_thrust);
	ENTRY(visuals.skybox_color);
	ENTRY(visuals.dark_color);
	ENTRY(visuals.prop_color);
	ENTRY(visuals.spread_circle_color1);
	ENTRY(visuals.spread_circle_color2);
	ENTRY(visuals.out_of_fov_col);
	ENTRY(visuals.skybox);
	ENTRY(visuals.spread_circle_type);
	ENTRY(visuals.model_t);
	ENTRY(visuals.model_ct);
	ENTRY(visuals.mask_t);
	ENTRY(visuals.mask_ct);
	ENTRY(visuals.disablers);
	ENTRY(visuals.preview);

	ENTRY(visuals.chams.enable);
	ENTRY(visuals.chams.check_occlusion);
	ENTRY(visuals.chams.enemy_his);
	ENTRY(visuals.chams.local_interp);
	ENTRY(visuals.chams.local_pulsate);
	ENTRY(visuals.chams.local_nosleeve);
	ENTRY(visuals.chams.enemy_his_col);

	ENTRY(visuals.chams.team_pl.mat);
	ENTRY(visuals.chams.team_pl.ignorez);
	ENTRY(visuals.chams.team_pl.col1);
	ENTRY(visuals.chams.team_pl.col2);
	ENTRY(visuals.chams.team_pl.col_z);

	ENTRY(visuals.chams.team_rag.mat);
	ENTRY(visuals.chams.team_rag.ignorez);
	ENTRY(visuals.chams.team_rag.col1);
	ENTRY(visuals.chams.team_rag.col2);
	ENTRY(visuals.chams.team_rag.col_z);

	ENTRY(visuals.chams.team_att.mat);
	ENTRY(visuals.chams.team_att.ignorez);
	ENTRY(visuals.chams.team_att.col1);
	ENTRY(visuals.chams.team_att.col2);
	ENTRY(visuals.chams.team_att.col_z);

	ENTRY(visuals.chams.enemy_pl.mat);
	ENTRY(visuals.chams.enemy_pl.ignorez);
	ENTRY(visuals.chams.enemy_pl.col1);
	ENTRY(visuals.chams.enemy_pl.col2);
	ENTRY(visuals.chams.enemy_pl.col_z);

	ENTRY(visuals.chams.enemy_shot.mat);
	ENTRY(visuals.chams.enemy_shot.ignorez);
	ENTRY(visuals.chams.enemy_shot.col1);
	ENTRY(visuals.chams.enemy_shot.col2);
	ENTRY(visuals.chams.enemy_shot.col_z);

	ENTRY(visuals.chams.enemy_rag.mat);
	ENTRY(visuals.chams.enemy_rag.ignorez);
	ENTRY(visuals.chams.enemy_rag.col1);
	ENTRY(visuals.chams.enemy_rag.col2);
	ENTRY(visuals.chams.enemy_rag.col_z);

	ENTRY(visuals.chams.enemy_att.mat);
	ENTRY(visuals.chams.enemy_att.ignorez);
	ENTRY(visuals.chams.enemy_att.col1);
	ENTRY(visuals.chams.enemy_att.col2);
	ENTRY(visuals.chams.enemy_att.col_z);

	ENTRY(visuals.chams.local_pl.mat);
	ENTRY(visuals.chams.local_pl.ignorez);
	ENTRY(visuals.chams.local_pl.col1);
	ENTRY(visuals.chams.local_pl.col2);
	ENTRY(visuals.chams.local_pl.col_z);

	ENTRY(visuals.chams.local_fake.mat);
	ENTRY(visuals.chams.local_fake.ignorez);
	ENTRY(visuals.chams.local_fake.col1);
	ENTRY(visuals.chams.local_fake.col2);
	ENTRY(visuals.chams.local_fake.col_z);

	ENTRY(visuals.chams.local_arms.mat);
	ENTRY(visuals.chams.local_arms.ignorez);
	ENTRY(visuals.chams.local_arms.col1);
	ENTRY(visuals.chams.local_arms.col2);
	ENTRY(visuals.chams.local_arms.col_z);

	ENTRY(visuals.chams.local_att.mat);
	ENTRY(visuals.chams.local_att.ignorez);
	ENTRY(visuals.chams.local_att.col1);
	ENTRY(visuals.chams.local_att.col2);
	ENTRY(visuals.chams.local_att.col_z);

	ENTRY(visuals.esp.enabled);
	ENTRY(visuals.esp.ammo);
	ENTRY(visuals.esp.armor);
	ENTRY(visuals.esp.ping);
	ENTRY(visuals.esp.health);
	ENTRY(visuals.esp.name);
	ENTRY(visuals.esp.weapon);
	ENTRY(visuals.esp.weapon_icon);
	ENTRY(visuals.esp.box);
	ENTRY(visuals.esp.skeleton);
	ENTRY(visuals.esp.history_skeleton);
	ENTRY(visuals.esp.sound_esp);
	ENTRY(visuals.esp.ammo_color);
	ENTRY(visuals.esp.armor_color);
	ENTRY(visuals.esp.ping_color);
	ENTRY(visuals.esp.health_color_1);
	ENTRY(visuals.esp.health_color_2);
	ENTRY(visuals.esp.name_color);
	ENTRY(visuals.esp.weapon_color);
	ENTRY(visuals.esp.weapon_icon_color);
	ENTRY(visuals.esp.box_color);
	ENTRY(visuals.esp.skeleton_color);
	ENTRY(visuals.esp.history_skeleton_color);
	ENTRY(visuals.esp.sound_esp_color);
	ENTRY(visuals.esp.health_style);
	ENTRY(visuals.esp.flags);

	ENTRY(visuals.esp.world.weapon_icons);
	ENTRY(visuals.esp.world.enabled);
	ENTRY(visuals.esp.world.color);

	ENTRY(visuals.esp.glow.enabled);
	ENTRY(visuals.esp.glow.team);
	ENTRY(visuals.esp.glow.enemy);
	ENTRY(visuals.esp.glow.local);
	ENTRY(visuals.esp.glow.team_color);
	ENTRY(visuals.esp.glow.enemy_color);
	ENTRY(visuals.esp.glow.local_color);

	ENTRY(visuals.beams.enabled);
	ENTRY(visuals.beams.enemy_enabled);
	ENTRY(visuals.beams.team_enabled);
	ENTRY(visuals.beams.local_enabled);
	ENTRY(visuals.beams.width);
	ENTRY(visuals.beams.enemy_color);
	ENTRY(visuals.beams.team_color);
	ENTRY(visuals.beams.local_color);

	ENTRY(visuals.world.glow);
	ENTRY(visuals.world.glow_color);

	ENTRY(lua.allow_insecure);
}

void cfg_t::save(const std::string &filename)
{
	std::ofstream file(filename, std::ios::binary);
	if (!file.is_open())
		return;

	save(file);

	last_changed_config = filename;
	is_dangerous = false;
}

void cfg_t::save(std::ostream &stream)
{
	// write magic
	const auto mgk = magic;
	stream.write((const char *)&mgk, sizeof(mgk));

	// write number of sections, should be either way less than 255.
	const auto sec_num = (char)section_decoders.size();
	stream.write(&sec_num, 1);

	// start writing sections
	for (const auto &[id, sec] : section_decoders)
	{
		const auto sec_sz = sec->get_size();

		stream.write((const char *)&id, sizeof(id));
		stream.write((const char *)&sec_sz, sizeof(sec_sz));
		sec->serialize(stream);
	}
}

bool cfg_t::load(const std::string &filename)
{
	std::ifstream file(filename, std::ios::binary);
	if (!file.is_open())
		return false;

	last_changed_config = filename;
	is_dangerous = false;
	return load(file);
}

bool cfg_t::load(std::istream &stream, bool reset)
{
	// reset before load!
	drop(reset);

	uint32_t mgk;
	stream.read((char *)&mgk, sizeof(mgk));

	// oops, failsafe
	if (mgk != magic)
		return false;

	// read sections
	char sec_num;
	stream.read(&sec_num, 1);

	while (sec_num--)
	{
		// read section id
		uint64_t id;
		stream.read((char *)&id, sizeof(id));

		if (!section_decoders.contains(id))
		{
			// try skip the section. next should be it's size anyway, so...
			size_t sec_sz;
			stream.read((char *)&sec_sz, sizeof(sec_sz));
			stream.seekg(sec_sz, std::ios::cur);
			continue;
		}

		// let them do the work!
		section_decoders[id]->deserialize(stream);
	}

	// reset ui state
	if (reset)
	{
		menu::group::rebuild_rage_layout();
		menu::group::rebuild_legit_layout();
		ctx->reset();
	}

	return true;
}

void cfg_t::drop(bool reset)
{
	is_loading = true;

	for (const auto &[id, sec] : section_decoders)
		sec->reset();

	// reset ui state
	if (reset)
	{
		menu::group::rebuild_rage_layout();
		menu::group::rebuild_legit_layout();
		ctx->reset();
	}

	is_loading = false;
	is_dangerous = true;
}

void cfg_t::data_section_t::reset()
{
	for (const auto &[id, entry] : data)
		entry->reset();
}

size_t cfg_t::data_section_t::get_size()
{
	size_t tot{};
	for (const auto &[id, entry] : data)
		tot += sizeof(id) + sizeof(size_t) + entry->get_size();

	return tot;
}

bool cfg_t::data_section_t::deserialize(std::istream &stream)
{
	size_t sz;
	stream.read((char *)&sz, sizeof(sz));

	const auto end = (size_t)stream.tellg() + sz;
	while (stream.tellg() < end)
	{
		// read id and size of the next value
		uint64_t id;
		stream.read((char *)&id, sizeof(id));
		stream.read((char *)&sz, sizeof(sz));

		// check if one exists in the list
		if (!data.contains(id))
		{
			// peek type
			value_type type;
			stream.read((char *)&type, sizeof(type));
			stream.seekg(stream.tellg() - (std::istream::pos_type)sizeof(type));

			value_entry *entry;

			// try creating an entry for lua meme
			switch (type)
			{
			case vt_bool:
				cfg.lua_data.b[id] = {};
				entry = &cfg.lua_data.b[id];
				break;

			default:
				// skip
				stream.seekg((size_t)stream.tellg() + sz);
				continue;
			}

			// try deserializing
			const auto cur = stream.tellg();
			if (!entry->deserialize(stream))
				stream.seekg((size_t)cur + sz);

			// keep here so we can save!
			data[id] = entry;
		}
		else
		{
			// try deserializing, if failing - skip it (at least try to!)
			const auto cur = stream.tellg();
			if (!data[id]->deserialize(stream))
				stream.seekg((size_t)cur + sz);
		}
	}

	return true;
}

void cfg_t::data_section_t::serialize(std::ostream &stream)
{
	for (const auto &[id, entry] : data)
	{
		// write whatever
		const auto sz = entry->get_size();
		stream.write((const char *)&id, sizeof(id));
		stream.write((const char *)&sz, sizeof(sz));
		entry->serialize(stream);
	}
}

void cfg_t::autoload_section_t::reset()
{
	data.clear();
}

size_t cfg_t::autoload_section_t::get_size()
{
	return sizeof(decltype(data)::value_type) * data.size();
}

bool cfg_t::autoload_section_t::deserialize(std::istream &stream)
{
	// fetch the size
	size_t sz;
	stream.read((char *)&sz, sizeof(sz));
	sz /= sizeof(decltype(data)::value_type);

	// read contents
	while (sz--)
	{
		decltype(data)::value_type val;
		stream.read((char *)&val, sizeof(val));
		data.emplace_back(val);
	}

	return true;
}

void cfg_t::autoload_section_t::serialize(std::ostream &stream)
{
	for (const auto &id : data)
		stream.write((const char *)&id, sizeof(id));
}

bool cfg_t::register_lua_bit_entry(uint64_t id)
{
	const auto entry_exists = data.data.find(id) != data.data.end();

	// check if it already exists
	if (lua_data.s.find(id) != lua_data.s.end())
	{
		if (entry_exists)
			return true;
	}
	else
	{
		// attempting to override internal value
		if (entry_exists)
			return false;

		lua_data.s[id] = setting<bitset>{};
	}

	// add to entry list
	data.data[id] = &lua_data.s[id];
	return true;
}

bool cfg_t::register_lua_bool_entry(uint64_t id)
{
	const auto entry_exists = data.data.find(id) != data.data.end();

	// check if it already exists
	if (lua_data.b.find(id) != lua_data.b.end())
	{
		if (entry_exists)
			return true;
	}
	else
	{
		// attempting to override internal value
		if (entry_exists)
			return false;

		lua_data.b[id] = setting<bool>{};
	}

	// add to entry list
	data.data[id] = &lua_data.b[id];
	return true;
}

bool cfg_t::register_lua_float_entry(uint64_t id)
{
	const auto entry_exists = data.data.find(id) != data.data.end();

	// check if it already exists
	if (lua_data.f.find(id) != lua_data.f.end())
	{
		if (entry_exists)
			return true;
	}
	else
	{
		// attempting to override internal value
		if (entry_exists)
			return false;

		lua_data.f[id] = setting<float>{};
	}

	// add to entry list
	data.data[id] = &lua_data.f[id];
	return true;
}

bool cfg_t::register_lua_color_entry(uint64_t id)
{
	const auto entry_exists = data.data.find(id) != data.data.end();

	// check if it already exists
	if (lua_data.c.find(id) != lua_data.c.end())
	{
		if (entry_exists)
			return true;
	}
	else
	{
		// attempting to override internal value
		if (entry_exists)
			return false;

		lua_data.c[id] = setting<color>{};
	}

	// add to entry list
	data.data[id] = &lua_data.c[id];
	return true;
}
