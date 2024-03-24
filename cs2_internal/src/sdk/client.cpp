#include <game/game.h>
#include <sdk/client.h>

namespace sdk::schema
{
	template <typename T>
	T *chandle<T>::get()
	{
		return !valid() ? nullptr : sdk::GameEntitySystem ->get_entity_by_index<T>(get_entry_index());
	}

	template <typename T>
	template <typename C>
	C *chandle<T>::get_as()
	{
		return !valid() ? nullptr : sdk::GameEntitySystem ->get_entity_by_index<C>(get_entry_index());
	}

	template class chandle<base_player_pawn>;
	template class chandle<csplayer_pawn>;
	template class chandle<base_player_weapon>;
	template class chandle<base_entity>;
	template csplayer_pawn *chandle<base_player_pawn>::get_as();
	template cs2_player_pawn *chandle<base_player_pawn>::get_as();
	template cs2_player_pawn *chandle<csplayer_pawn>::get_as();
}
