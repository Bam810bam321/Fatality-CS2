#include <menu/menu.h>

#include "game/cfg.h"
#include "gui/controls/combo_box_agent.h"
#include "menu/macros.h"

using namespace evo::gui;
using namespace evo::gui::helpers;
using namespace evo::ren;

namespace menu::group
{
	void skins_weapons(std::shared_ptr<layout> &e)
	{
		//VIRTUALIZER_TIGER_WHITE_START;
		const auto search = MAKE("skins>weapons>search", text_input);
		search->size.x += 50.f;
		search->placeholder = XOR("Start typing...");
		search->callback = [](std::string &v)
		{
			if (!men.skins_loaded)
				return;

			const auto wl = ctx->find<list>(GUI_HASH("skins>weapons>list"));
			if (!wl || !wl->is_taking_input)
				return;

			wl->filter_items(v);
		};

		const auto weps = MAKE("skins>weapons>list", list, cfg.menu.sel_weapon, vec2{}, vec2{ 218.f, 210.f });
		weps->legacy_mode = true;
		weps->margin = {2.f, 0.f, 2.f, 0.f};
		/*weps->callback = [](bits& v)
		{
			if (!men.skins_loaded)
				return;

			const auto pk_s = ctx->find<text_input>(GUI_HASH("skins>paintkit>search"));
			auto s = pk_s ? pk_s->value : std::string{};
			inventorychanger::fill_skin_list(s);
		};*/

		ADD_LINE(
			"skins>weapons>search_line", search,
			MAKE("skins>weapons>search>settings", settings, [](auto e) { ADD("Autoselect held weapon", "skins>weapons>search>settings>autoselect held weapon", checkbox,
				cfg.menu.autoselect_weapon); }));
		ADD_LINE("skins>weapons>list_line", weps);
		//VIRTUALIZER_TIGER_WHITE_END;
	}

	void skins_paintkit(std::shared_ptr<layout> &e)
	{
		//VIRTUALIZER_TIGER_WHITE_START;
		const auto search = MAKE("skins>paintkit>search", text_input);
		search->size.x += 50.f;
		search->placeholder = XOR("Start typing...");
		/*search->callback = [](std::string& v)
		{
			if (!men.skins_loaded)
				return;

			inventorychanger::fill_skin_list(v);
		};*/

		const auto skins = MAKE("skins>paintkit>list", list, cfg.menu.sel_skin, vec2{}, vec2{ 218.f, 414.f });
		skins->legacy_mode = true;
		skins->margin = {2.f, 0.f, 2.f, 0.f};

		ADD_LINE(
			"skins>paintkit>search_line", search,
			MAKE("skins>weapons>search>settings", settings, [](auto e) { const auto c = MAKE("skins>paintkit>search>settings>show all skins", checkbox, cfg.menu.
					show_all_skins);
				/*c->callback = [](bool v) {
					if (!men.skins_loaded)
						return;

					std::string s{};
					inventorychanger::fill_skin_list(s);
				};*/

				ADD_INLINE("Show all skins", c); }));
		ADD_LINE("skins>paintkit>list_line", skins);
		//VIRTUALIZER_TIGER_WHITE_END;
	}

	void skins_inventory(std::shared_ptr<layout> &e)
	{
		//VIRTUALIZER_TIGER_WHITE_START;
		const auto skins = MAKE("skins>inventory>list", list, cfg.menu.sel_inv, vec2{}, vec2{ 218.f, 270.f });
		skins->legacy_mode = true;
		skins->margin = {2.f, 0.f, 2.f, 0.f};
		/*skins->callback = [](bits& v)
		{
			if (!men.skins_loaded)
				return;

			inventorychanger::update_selected(true);
		};*/

		ADD_LINE("skins>inventory>list_line", skins);

		const auto btn_remove = MAKE("skins>inventory>remove", button, XOR("Remove"));
		/*btn_remove->callback = []()
		{
			inventorychanger::remove();
		};*/

		const auto btn_reload = MAKE("skins>inventory>reload", button, XOR("Reload"));
		/*btn_reload->callback = []()
		{
			inventorychanger::load();
		};*/

		e->add(
			make_inlined(
				GUI_HASH("skins_remove_reload"), [&](auto ee)
				{
					ee->add(btn_remove);
					ee->add(btn_reload);
				}));
		//VIRTUALIZER_TIGER_WHITE_END;
	}

	std::vector<std::string> player_model = {XOR("Default"), XOR("The Elite Mr. Muhlik | Elite Crew"), XOR("Prof. Shahmat | Elite Crew"), XOR("Osiris | Elite Crew"),
											 XOR("Ground Rebel | Elite Crew"), XOR("Mr. Muhlik | Elite Crew"), XOR("Special Agent Ava | FBI"),
											 XOR("Michael Syfers | FBI Sniper"), XOR("Markus Delrow | FBI HRT"), XOR("Operator | FBI SWAT"),
											 XOR("Seal Team 6 Soldier | NSWC SEAL"), XOR("'Two Times' McCoy | USAF TACP"), XOR("Buckshot | NSWC SEAL"),
											 XOR("3rd Commando Company | KSK"), XOR("Lt. Commander Ricksaw | NSWC SEAL"), XOR("'Blueberries' Buckshot | NSWC SEAL"),
											 XOR("'Two Times' McCoy | TACP Cavalry"), XOR("Primeiro Tenente | Brazilian 1st Battalion"),
											 XOR("Cmdr. Mae 'Dead Cold' Jamison | SWAT"), XOR("1st Lieutenant Farlow | SWAT"), XOR("John 'Van Healen' Kask | SWAT"),
											 XOR("Bio-Haz Specialist | SWAT"), XOR("Sergeant Bombson | SWAT"), XOR("Chem-Haz Specialist | SWAT"),
											 XOR("Lieutenant 'Tree Hugger' Farlow | SWAT"), XOR("Maximus | Sabre"), XOR("Dragomir | Sabre"),
											 XOR("'The Doctor' Romanov | Sabre"), XOR("Rezan The Ready | Sabre"), XOR("Blackwolf | Sabre"),
											 XOR("Rezan the Redshirt | Sabre"), XOR("Dragomir | Sabre Footsoldier"), XOR("D Squadron Officer | NZSAS"),
											 XOR("B Squadron Officer | SAS"), XOR("Soldier | Phoenix"), XOR("Enforcer | Phoenix"), XOR("Slingshot | Phoenix"),
											 XOR("Street Soldier | Phoenix"), XOR("Sir Bloody Miami Darryl | The Professionals"),
											 XOR("Sir Bloody Silent Darryl | The Professionals"), XOR("Sir Bloody Skullhead Darryl | The Professionals"),
											 XOR("Sir Bloody Darryl Royale | The Professionals"), XOR("Sir Bloody Loudmouth Darryl | The Professionals"),
											 XOR("Bloody Darryl The Strapped | The Professionals"), XOR("Safecracker Voltzmann | The Professionals"),
											 XOR("Little Kev | The Professionals"), XOR("Number K | The Professionals"), XOR("Getaway Sally | The Professionals"),
											 XOR("Trapper | Guerrilla Warfare"), XOR("Trapper Aggressor | Guerrilla Warfare"),
											 XOR("Vypa Sista of the Revolution | Guerrilla Warfare"), XOR("Col. Mangos Dabisi | Guerrilla Warfare"),
											 XOR("Arno The Overgrown | Guerrilla Warfare"), XOR("'Medium Rare' Crasswater | Guerrilla Warfare"),
											 XOR("Crasswater The Forgotten | Guerrilla Warfare"), XOR("Elite Trapper Solman | Guerrilla Warfare"),
											 XOR("Cmdr. Davida 'Goggles' Fernandez | SEAL Frogman"), XOR("Cmdr. Frank 'Wet Sox' Baroud | SEAL Frogman"),
											 XOR("Lieutenant Rex Krikey | SEAL Frogman"), XOR("Sous-Lieutenant Medic | Gendarmerie Nationale"),
											 XOR("Chem-Haz Capitaine | Gendarmerie Nationale"), XOR("Chef d'Escadron Rouchard | Gendarmerie Nationale"),
											 XOR("Aspirant | Gendarmerie Nationale"), XOR("Officer Jacques Beltram | Gendarmerie Nationale"), XOR("Danger Zone A"),
											 XOR("Danger Zone B"), XOR("Danger Zone C"), XOR("Pirate"), XOR("Pirate A"), XOR("Pirate B"), XOR("Pirate C"),
											 XOR("Pirate D"), XOR("Separatist"), XOR("Separatist A"), XOR("Separatist B"), XOR("Separatist C"), XOR("Separatist D"),
											 XOR("Heavy Phoenix"), XOR("Phoenix A"), XOR("Phoenix B"), XOR("Phoenix C"), XOR("Phoenix D"), XOR("Leet A"), XOR("Leet B"),
											 XOR("Leet C"), XOR("Leet D"), XOR("Leet E"), XOR("Professional"), XOR("Professional 1"), XOR("Professional 2"),
											 XOR("Professional 3"), XOR("Professional 4"),};

	std::vector<std::string> player_mask = {XOR("Default"), XOR("Hoxton"), XOR("Porcelain Doll"), XOR("Skull"), XOR("Samurai"), XOR("Evil Clown"), XOR("Wolf"),
											XOR("Sheep"), XOR("Bunny Gold"), XOR("Anaglyph"), XOR("Porcelain Doll Kabuki"), XOR("Dallas"), XOR("Pumpkin"),
											XOR("Sheep Bloody"), XOR("Devil Plastic"), XOR("Boar"), XOR("Chains"), XOR("Tiki"), XOR("Bunny"), XOR("Sheep Gold"),
											XOR("Zombie Fortune Plastic"), XOR("Chicken"), XOR("Skull Gold"), XOR("TF2 Demoman"), XOR("TF2 Engineer"), XOR("TF2 Heavy"),
											XOR("TF2 Medic"), XOR("TF2 Pyro"), XOR("TF2 Scout"), XOR("TF2 Sniper"), XOR("TF2 Soldier"), XOR("TF2 Spy"),};

	void skins_agents(std::shared_ptr<layout> &e)
	{
		//VIRTUALIZER_TIGER_WHITE_START;
		const auto agent_t = MAKE("skins>agents>agent t", combo_box_agent, cfg.visuals.model_t, vec2{ 300.f, 460.f });
		agent_t->legacy_mode = true;
		const auto agent_ct = MAKE("skins>agents>agent ct", combo_box_agent, cfg.visuals.model_ct, vec2{ 300.f, 460.f });
		agent_ct->legacy_mode = true;

		for (int i{}; i < player_model.size(); ++i)
		{
			auto &m = player_model[i];
			agent_t->add(MAKE_RUNTIME(XOR( "skins>agents>agent t>" ) + m, selectable, m, i));
			agent_ct->add(MAKE_RUNTIME(XOR( "skins>agents>agent ct>" ) + m, selectable, m, i));
		}

		const auto facemask_t = MAKE("skins>agents>facemask t", combo_box_agent, cfg.visuals.mask_t, vec2{ 140.f, 300.f });
		facemask_t->legacy_mode = true;
		const auto facemask_ct = MAKE("skins>agents>facemask ct", combo_box_agent, cfg.visuals.mask_ct, vec2{ 140.f, 300.f });
		facemask_ct->legacy_mode = true;

		for (int i{}; i < player_mask.size(); ++i)
		{
			auto &m = player_mask[i];
			facemask_t->add(MAKE_RUNTIME(XOR( "skins>agents>facemask t>" ) + m, selectable, m, i));
			facemask_ct->add(MAKE_RUNTIME(XOR( "skins>agents>facemask ct>" ) + m, selectable, m, i));
		}

		ADD_INLINE("Agent CT", agent_ct);
		ADD_INLINE("Agent T", agent_t);
		ADD_INLINE("Facemask CT", facemask_ct);
		ADD_INLINE("Facemask T", facemask_t);
		//VIRTUALIZER_TIGER_WHITE_END;
	}

	void skins_options(std::shared_ptr<layout> &e)
	{
		//VIRTUALIZER_TIGER_WHITE_START;
		ADD("Seed", "skins>options>seed", slider<int>, 0, 1000, cfg.menu.seed);
		ADD("Wear", "skins>options>wear", slider<int>, 0, 100, cfg.menu.wear, XOR("%d%%"));
		ADD("StatTrak", "skins>options>stattrak", slider<int>, -1, 10000, cfg.menu.stat_trak, XOR("%d kills"));

		ADD("Equip CT", "skins>options>equip ct", checkbox, cfg.menu.equip_ct);
		ADD("Equip T", "skins>options>equip t", checkbox, cfg.menu.equip_t);

		const auto btn_add = MAKE("skins>options>add", button, XOR("Add"));
		/*btn_add->callback = []()
		{
			inventorychanger::add();
		};*/

		const auto btn_save = MAKE("skins>options>save", button, XOR("Save"));
		/*btn_save->callback = []()
		{
			inventorychanger::save();
		};*/

		e->add(
			make_inlined(
				GUI_HASH("skins_add_save"), [&](auto ee)
				{
					ee->add(btn_save);
					ee->add(btn_add);
				}));
		//VIRTUALIZER_TIGER_WHITE_END;
	}
}
