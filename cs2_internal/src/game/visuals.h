#pragma once
#include <variant>
#include <sdk/client.h>

struct visuals_t
{
	enum class esp_item_pos
	{
		top,
		right,
		bottom,
		left
	};

	struct player_data_t
	{
		sdk::vector pos{};
		evo::ren::vec2 top{};
		evo::ren::vec2 bot{};

		struct
		{
			int top;
			int right;
			int bottom;
			int left;
			int text_left;
			int text_right;
		} offset{};

		int &get_offset(esp_item_pos item_pos)
		{
			return item_pos == esp_item_pos::top
				? offset.top
				: item_pos == esp_item_pos::right
				? offset.right
				: item_pos == esp_item_pos::bottom
				? offset.bottom
				: offset.left;
		}

		float height{};
		float width{};
		float fade_time{};
		float alpha{};
		float alpha_lerp{};
		float model_alpha{};
		float spawntime{};
		float health_interpolated{};
		bool oof{};
	};

	struct debug_info_t
	{
		void add(const char *text) { value = text ? text : "-empty-"; }

		std::string value;
	};

	std::unordered_map<std::string, debug_info_t> values;

	void run();
	void draw_debug_info() const;
	static void add_text(player_data_t &player, esp_item_pos pos, const evo::ren::color &color, const std::string &text, bool is_name = false);
	static void add_icon(
		player_data_t &player, esp_item_pos pos, const evo::ren::color &color, const std::shared_ptr<evo::ren::texture> &texture,
		std::optional<evo::ren::vec2> add = std::nullopt, std::optional<int> height_override = std::nullopt);
	static void add_bar(player_data_t &player, esp_item_pos pos, const std::vector<evo::ren::color> &colors, float fraction, std::optional<int> value = std::nullopt);
	static void draw_bar(
		const evo::ren::vec2 &start_pos, int length, bool horizontal, const std::vector<evo::ren::color> &colors, float fraction,
		std::optional<int> value = std::nullopt);

	player_data_t players[sdk::max_players];

	sdk::cview_setup viewset;
};

extern visuals_t visuals;
