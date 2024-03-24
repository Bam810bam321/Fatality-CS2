#include <gui/popups/action_list_popup.h>
#include <gui/controls/layout.h>
#include <gui/controls/spacer.h>
#include <gui/controls/action_item.h>
#include <gui/controls/text_input.h>

namespace evo::gui
{
	using namespace ren;

	void action_list_popup::on_first_render_call()
	{
		popup::on_first_render_call();

		const auto lst = std::make_shared<layout>(control_id{GUI_HASH("alp>list")}, vec2{0.f, 40.f}, size - vec2{0.f, 48.f}, s_vertical);
		repopulate_list(lst, XOR(""));

		lst->do_first_render_call();
		lst->process_queues();

		const auto search = std::make_shared<text_input>(control_id{GUI_HASH("alp>search")}, vec2{8.f, 8.f}, vec2{size.x - 20.f, 24.f});
		search->placeholder = XOR("Search...");
		search->callback = [this](const std::string &v)
		{
			std::string term{v};
			std::transform(term.begin(), term.end(), term.begin(), ::tolower);

			repopulate_list(find<layout>(GUI_HASH("alp>list")), term);
		};

		add(lst);
		add(search);

		pos = calc_perfect_position(pos);

		ctx->active_popups.emplace_back(as<popup>());
		ctx->top_sort = sort;
	}

	void action_list_popup::render()
	{
		if (!is_visible)
			return;

		begin_render();

		const auto r = area_abs();

		auto &d = draw.layers[ctx->content_layer];
		d->g.anti_alias = true;
		d->add_shadow_rect(area_abs(), 8.f, true);
		d->add_rect_filled_rounded(r, colors.bg_block, 3.f);
		d->add_rect_rounded(r, colors.outline, 3.f);
		d->g.anti_alias = {};

		popup::render();
	}

	void action_list_popup::update_value(uint32_t v, bool s)
	{
		value[v] = s;
		if (callback)
			callback(v, s);
	}

	void action_list_popup::repopulate_list(const std::shared_ptr<layout> &lst, const std::string &filter)
	{
		lst->clear();
		lst->process_queues();

		int f{};
		for (const auto &shit : params)
		{
			if (f && filter.empty())
			{
				const auto spac = std::make_shared<spacer>(control_id{GUI_HASH("alp>list>separator") + f}, vec2{}, vec2{0.f, 8.f});
				spac->size_to_parent_w = true;
				spac->margin = {8.f, 0.f, 12.f, 0.f};

				lst->add(spac);
			}

			for (const auto &[v, s] : shit)
			{
				if (!filter.empty())
				{
					std::string s_lower{s};
					std::transform(s_lower.begin(), s_lower.end(), s_lower.begin(), ::tolower);

					// skip if not found
					if (s_lower.find(filter) == std::string::npos)
						continue;
				}

				// lolz))
				if (s.empty())
					continue;

				const auto itm = std::make_shared<action_item>(control_id{GUI_HASH("alp>list>item") + v}, v, s);
				itm->margin = {8.f, 0.f, 12.f, 0.f};

				if (value[v])
					itm->select();

				lst->add(itm);
			}

			++f;
		}
	}
}
