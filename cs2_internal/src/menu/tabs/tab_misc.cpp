#include <menu/menu.h>

#include "game/cfg.h"
#include "menu/macros.h"

using namespace evo::gui;
using namespace evo::gui::helpers;
using namespace evo::ren;

namespace menu
{
	void on_dpi_change(bits &b)
	{
		if (b.test(cfg_t::dpi_50))
			draw.scale = .5f;
		else if (b.test(cfg_t::dpi_75))
			draw.scale = .75f;
		else if (b.test(cfg_t::dpi_100))
			draw.scale = 1.f;
		else if (b.test(cfg_t::dpi_125))
			draw.scale = 1.25f;
		else if (b.test(cfg_t::dpi_150))
			draw.scale = 1.5f;
		else if (b.test(cfg_t::dpi_200))
			draw.scale = 2.f;
		else
			draw.scale = std::clamp(draw.display.y, 1.f, FLT_MAX) / 1080.f;

		if (const auto wnd = men.main_wnd.lock(); wnd && wnd->is_out_of_clip(wnd->pos))
			wnd->pos = {50.f, 50.f};

		men.font_reset = true;
		//entity_rendering::reset();
	}
}

namespace menu::group
{
	void misc_various(std::shared_ptr<layout> &e)
	{
		//VIRTUALIZER_TIGER_WHITE_START;
		ADD("Bypass sv_pure", "misc>various>bypass sv_pure", checkbox, cfg.misc.sv_pure);
		ADD("Auto-accept", "misc>various>auto-accept", checkbox, cfg.misc.autoaccept);
		ADD("Radar", "misc>various>radar", checkbox, cfg.misc.radar);
		ADD("Reveal ranks", "misc>various>reveal ranks", checkbox, cfg.misc.reveal_ranks);

		ADD_INLINE(
			"Hurt log", MAKE("misc>various>hurt log", checkbox, cfg.misc.hurtlog),
			MAKE("misc>various>hurt log>settings", settings, [](auto e) { ADD("Additional info", "misc>various>additional info", checkbox, cfg.misc.hurtlog_info); }));

		ADD("Buy log", "misc>various>buy log", checkbox, cfg.misc.buylog);

		{
			const auto c = MAKE("misc>various>hitsound", combo_box, cfg.misc.hitsound_select);
			c->add(
			{MAKE("misc>various>hitsound>none", selectable, XOR("None")), MAKE("misc>various>hitsound>bell", selectable, XOR("Bell")),
			 MAKE("misc>various>hitsound>cod", selectable, XOR("CoD")), MAKE("misc>various>hitsound>fatality", selectable, XOR("Fatality")),
			 MAKE("misc>various>hitsound>arena switch", selectable, XOR("Arena switch")), MAKE("misc>various>hitsound>bepis", selectable, XOR("Bepis")),
			 MAKE("misc>various>hitsound>phonk", selectable, XOR("Phonk")), MAKE("misc>various>hitsound>sparkle", selectable, XOR("Sparkle")),
			 MAKE("misc>various>hitsound>cock", selectable, XOR("Cock")),});

			ADD_INLINE("Hitsound", c);
		}

		ADD("Preserve deathnotices", "misc>various>preserve deathnotices", checkbox, cfg.misc.preservedn);

		{
			const auto c = MAKE("misc>various>indicators", combo_box, cfg.aa.indicators);
			c->allow_multiple = true;
			c->add(
			{MAKE("misc>various>indicators>manual anti-aim", selectable, XOR("Manual anti-aim"), cfg_t::indicators_manual), MAKE(
				 "misc>various>indicators>freestanding", selectable, XOR("Freestanding"), cfg_t::indicators_fs),
			 MAKE("misc>various>indicators>lc", selectable, XOR("LC"), cfg_t::indicators_lc),
			 MAKE("misc>various>indicators>double tap", selectable, XOR("Double tap"), cfg_t::indicators_dt),
			 MAKE("misc>various>indicators>hide shot", selectable, XOR("Hide shot"), cfg_t::indicators_st),
			 MAKE("misc>various>indicators>damage override", selectable, XOR("Damage override"), cfg_t::indicators_do),
			 MAKE("misc>various>indicators>force safety", selectable, XOR("Force safety"), cfg_t::indicators_safe),
			 MAKE("misc>various>indicators>headshot only", selectable, XOR("Headshot only"), cfg_t::indicators_head),
			 MAKE("misc>various>indicators>bodyaim", selectable, XOR("Bodyaim"), cfg_t::indicators_baim), MAKE(
				 "misc>various>indicators>ping", selectable, XOR("Ping"), cfg_t::indicators_ping),});

			ADD_INLINE("Indicators", c);
		}

		ADD("Clan tag", "misc>various>clan tag", checkbox, cfg.misc.clantag);
		ADD("Ragdoll thrust", "misc>various>ragdoll thrust", slider<float>, 1.f, 1000.f, cfg.visuals.ragdoll_thrust, XOR("%.f%%"));
		ADD("Party mode", "misc>various>party mode", checkbox, cfg.misc.birthday_mode);
		ADD("Ping Spike", "misc>various>ping spike", slider<float>, 0.f, 200.f, cfg.aim.ping_spike_amt, XOR("%.0f ms"));

#if defined(_DEBUG) || defined(ALPHA)
		ADD("Debug info", "misc>various>debug info", checkbox, cfg.misc.debug_info);
#endif

		{
			const auto c = MAKE("misc>various>dpi scale", combo_box, cfg.misc.dpi_scale);
			c->add(
			{MAKE("misc>various>dpi scale>automatic", selectable, XOR("Automatic"), cfg_t::dpi_automatic), MAKE(
				 "misc>various>dpi scale>50%", selectable, XOR("50%"), cfg_t::dpi_50), MAKE("misc>various>dpi scale>75%", selectable, XOR("75%"), cfg_t::dpi_75),
			 MAKE("misc>various>dpi scale>100%", selectable, XOR("100%"), cfg_t::dpi_100), MAKE("misc>various>dpi scale>125%", selectable, XOR("125%"), cfg_t::dpi_125),
			 MAKE("misc>various>dpi scale>150%", selectable, XOR("150%"), cfg_t::dpi_150),
			 MAKE("misc>various>dpi scale>200%", selectable, XOR("200%"), cfg_t::dpi_200),});

			c->callback = on_dpi_change;

			ADD_INLINE("DPI scale", c);
		}
		//VIRTUALIZER_TIGER_WHITE_END;
	}

	void misc_movement(std::shared_ptr<layout> &e)
	{
		//VIRTUALIZER_TIGER_WHITE_START;
		ADD("Bhop", "misc>movement>bhop", checkbox, cfg.misc.bhop);

		{
			const auto c = MAKE("misc>movement>autostrafer", combo_box, cfg.misc.autostrafe);
			c->allow_multiple = true;
			c->add(
			{MAKE("misc>movement>autostrafer>viewangles", selectable, XOR("Viewangles"), cfg_t::autostrafe_viewangles), MAKE(
				 "misc>movement>autostrafer>movement keys", selectable, XOR("Movement keys"), cfg_t::autostrafe_movement_keys),
			 MAKE("misc>movement>autostrafer>easy strafe", selectable, XOR("Easy strafe"), cfg_t::autostrafe_easy_strafe), MAKE(
				 "misc>movement>autostrafer>jump release", selectable, XOR("Jump release"), cfg_t::autostrafe_jump_release),});

			ADD_INLINE(
				"Autostrafer", c,
				MAKE("misc>movement>autostrafer>settings", settings, [](auto e) { ADD("Smoothing", "misc>movement>smoothing", slider<float>, 0.f, 100.f, cfg.misc.
					autostrafe_smoothing, XOR("%.f")); ADD("Avoid walls", "misc>movement>avoid walls", checkbox, cfg.misc.avoid_walls); }));
		}

		ADD_INLINE(
			"Peek assist", MAKE("misc>movement>peek assist", checkbox, cfg.misc.peek_assist),
			MAKE("misc>movement>peek assist>col 1", color_picker, cfg.misc.peek_assist_col),
			MAKE("misc>movement>peek assist>col 2", color_picker, cfg.misc.peek_assist_col2),
			MAKE("misc>movement>peek assist>settings", settings, [](auto e) { ADD("Retreat on release", "misc>movement>retreat on release", checkbox, cfg.misc.
				peek_assist_retreat_on_release); }));

		ADD("Instant unduck", "misc>movement>instant unduck", checkbox, cfg.misc.instant_unduck);
		ADD("Slide", "misc>movement>slide", checkbox, cfg.aim.slide);
		ADD("Stop in air", "misc>movement>stop in air", checkbox, cfg.aim.stop_in_air);
		ADD("Fake duck", "misc>movement>fake duck", checkbox, cfg.aim.fake_duck);
		// ADD("Compensate throwable", "misc>movement>compensate throwable", checkbox, cfg.misc.compensate_grenade);
		ADD("Edge jump", "misc>movement>edge jump", checkbox, cfg.misc.edge_jump);
		ADD("Standalone quick stop", "misc>movement>standalone quick stop", checkbox, cfg.legit.quick_stop);
		//VIRTUALIZER_TIGER_WHITE_END;
	}

	void misc_buybot(std::shared_ptr<layout> &e)
	{
		//VIRTUALIZER_TIGER_WHITE_START;
		{
			const auto c = MAKE("misc>buybot>primary", combo_box, cfg.misc.buybot_primary);
			c->legacy_mode = true;
			c->add(
			{MAKE("misc>buybot>primary>none", selectable, XOR("None"), cfg_t::buybot_primary_none), MAKE(
				 "misc>buybot>primary>ak47 / m4a1", selectable, XOR("AK47 / M4A1"), cfg_t::buybot_primary_ak47),
			 MAKE("misc>buybot>primary>sg-556", selectable, XOR("SG-556"), cfg_t::buybot_primary_sg556),
			 MAKE("misc>buybot>primary>awp", selectable, XOR("AWP"), cfg_t::buybot_primary_awp),
			 MAKE("misc>buybot>primary>ssg-08", selectable, XOR("SSG-08"), cfg_t::buybot_primary_ssg08),
			 MAKE("misc>buybot>primary>scar-20 / g3sg1", selectable, XOR("SCAR-20 / G3SG1"), cfg_t::buybot_primary_scar20), MAKE(
				 "misc>buybot>primary>negev", selectable, XOR("Negev"), cfg_t::buybot_primary_negev),});

			ADD_INLINE("Primary", c);
		}

		{
			const auto c = MAKE("misc>buybot>secondary", combo_box, cfg.misc.buybot_pistol);
			c->legacy_mode = true;
			c->add(
			{MAKE("misc>buybot>secondary>none", selectable, XOR("None"), cfg_t::buybot_pistol_none), MAKE(
				 "misc>buybot>secondary>deagle / revolver", selectable, XOR("Deagle / Revolver"), cfg_t::buybot_pistol_deagle),
			 MAKE("misc>buybot>secondary>dual berettas", selectable, XOR("Dual Berettas"), cfg_t::buybot_pistol_elites),
			 MAKE("misc>buybot>secondary>tec-9 / five-seven", selectable, XOR("Tec-9 / Five-SeveN"), cfg_t::buybot_pistol_tec9), MAKE(
				 "misc>buybot>secondary>p250", selectable, XOR("P250"), cfg_t::buybot_pistol_p250),});

			ADD_INLINE("Secondary", c);
		}

		{
			const auto c = MAKE("misc>buybot>armor", combo_box, cfg.misc.buybot_kevlar_helmet);
			c->legacy_mode = true;
			c->add(
			{MAKE("misc>buybot>armor>none", selectable, XOR("None"), cfg_t::buybot_kevlar_none), MAKE(
				 "misc>buybot>armor>kevlar", selectable, XOR("Kevlar"), cfg_t::buybot_kevlar_k), MAKE(
				 "misc>buybot>armor>kevlar + helmet", selectable, XOR("Kevlar + Helmet"), cfg_t::buybot_kevlar_kh),});

			ADD_INLINE("Armor", c);
		}

		ADD("Defuser", "misc>buybot>defuser", checkbox, cfg.misc.buybot_defuser);
		ADD("Taser", "misc>buybot>taser", checkbox, cfg.misc.buybot_taser);
		ADD("Grenades", "misc>buybot>grenades", checkbox, cfg.misc.buybot_grenades);
		//VIRTUALIZER_TIGER_WHITE_END;
	}
}
