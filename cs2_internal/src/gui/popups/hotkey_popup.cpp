#include <gui/popups/hotkey_popup.h>
#include <gui/gui.h>
#include <gui/helpers.h>
#include <gui/controls/checkbox.h>
#include <gui/controls/layout.h>
#include <gui/controls/hotkey.h>
#include <gui/controls/button.h>
#include <gui/controls/combo_box.h>
#include <gui/controls/selectable.h>
#include <gui/controls/settings.h>
#include <gui/controls/slider.h>

GUI_NAMESPACE;

void hotkey_popup::render()
{
	begin_render();

	// make sure size is right
	const auto list = ctx->find<layout>(GUI_HASH("hotkeys>list"));
	const auto max_y = list->calc_max_y();
	list->size.y = std::min(max_y, max_height - 12.f);
	size.y = std::min(max_y + 12.f, max_height);

	const auto r = area_abs();

	auto &d = draw.layers[ctx->content_layer];
	d->g.anti_alias = true;
	d->add_shadow_rect(area_abs(), 8.f, true);
	d->add_rect_filled_rounded(r, colors.bg_block, 3.f);
	d->add_rect_rounded(r, colors.outline, 3.f);
	d->g.anti_alias = {};

	popup::render();
}

void hotkey_popup::on_first_render_call()
{
	popup::on_first_render_call();
	pos = calc_perfect_position(pos + vec2{0.f, remote->size.y + 4.f});

	const auto ls = std::make_shared<layout>(control_id{GUI_HASH("hotkeys>list")}, vec2{0.f, 8.f}, vec2{size.x, size.y - 16.f}, s_vertical);
	ls->custom_margin = rect{8.f, 0.f, 8.f, 4.f};

	// always add this one
	const auto add_btn = std::make_shared<button>(control_id{GUI_HASH("hotkeys>list>add")}, XOR("Add hotkey"));
	add_btn->size_to_parent_w = true;
	add_btn->callback = [this]()
	{
		insert_hotkey({});
	};

	ls->add(add_btn);
	ls->process_queues();
	ls->do_first_render_call();

	add(ls);
	process_queues();

	// insert existing ones
	for (const auto &[k, i] : remote->hotkeys)
	{
		insert_hotkey(hotkey_temp_t{k, value_param<bits>{1 << i.beh}, i.value});
	}

	ctx->active_popups.emplace_back(as<popup>());
	ctx->top_sort = sort;
}

void hotkey_popup::update_key_table()
{
	remote->hotkeys.clear();

	for (auto &[k, i] : temp)
	{
		// skip unset ones
		if (!i.key)
			continue;

		// decode type of the value
		uint64_t v{};
		switch (remote->hotkey_type)
		{
		case hkt_checkbox:
			v = (uint64_t)bv[k];
			break;
		case hkt_slider:
			*(float *)&v = fv[k];
			break;
		case hkt_combo:
			v = (uint64_t)sv[k].get();
			break;
		default:
			break;
		}

		remote->hotkeys[i.key] = hotkey_info{(hotkey_behavior)i.beh->first_set_bit().value_or((char)hkb_toggle), v};
	}

	remote->update_hotkey_table();
}

void hotkey_popup::insert_hotkey(const std::optional<hotkey_temp_t> &hki)
{
	temp[temp.size()] = hki.value_or(hotkey_temp_t{});
	const auto tmp_s = temp.size();
	const auto b = &temp[tmp_s - 1];

	const auto beh = std::make_shared<combo_box>(control_id{GUI_HASH("hotkeys>list>k>beh") + (int)tmp_s * 64}, b->beh, vec2{}, vec2{70.f, 20.f});
	beh->add(
	{std::make_shared<selectable>(control_id{GUI_HASH("hotkeys>list>k>beh>toggle") + tmp_s}, XOR("Toggle")),
	 std::make_shared<selectable>(control_id{GUI_HASH("hotkeys>list>k>beh>hold") + tmp_s}, XOR("Hold")),});

	beh->callback = [this, tmp_s](bits &vv)
	{
		const auto sbx = ctx->find(GUI_HASH("hotkeys>list>k>settings") + (int)tmp_s * 64);
		if (sbx)
			sbx->is_visible = remote->hotkey_type != hkt_checkbox || vv.first_set_bit().value_or((char)hkb_toggle) != hkb_toggle;

		update_key_table();
	};
	beh->hotkey_type = hkt_none;

	const auto hk = std::make_shared<hotkey>(control_id{GUI_HASH("hotkeys>list>k>key") + tmp_s}, &b->key);
	hk->callback = [this](uint8_t _) { update_key_table(); };

	std::shared_ptr<control> val;
	switch (remote->hotkey_type)
	{
	case hkt_checkbox:
		bv[tmp_s - 1] = true;
		val = std::make_shared<checkbox>(control_id{GUI_HASH("hotkeys>list>k>settings>val") + tmp_s}, bv[tmp_s - 1]);
		val->reset();
		val->as<checkbox>()->callback = [this](bool v) { update_key_table(); };
		break;
	case hkt_slider:
		fv[tmp_s - 1].set(*(float *)&b->val);

		{
			const auto real = remote->as<slider<float>>();
			val = std::make_shared<slider<float>>(
				control_id{GUI_HASH("hotkeys>list>k>settings>val") + tmp_s}, real->low, real->high, fv[tmp_s - 1], real->format, real->step);
			val->reset();
			val->as<slider<float>>()->callback = [this](float a, float b) { update_key_table(); };
		}
		break;

	case hkt_combo:
		sv[tmp_s - 1].set(b->val);

		{
			const auto real = remote->as<combo_box>();
			val = std::make_shared<combo_box>(control_id{GUI_HASH("hotkeys>list>k>settings>val") + (int)tmp_s * 64}, sv[tmp_s - 1]);
			const auto val_casted = val->as<combo_box>();
			val_casted->legacy_mode = real->legacy_mode;
			val_casted->allow_multiple = real->allow_multiple;

			int i{1};
			real->for_each_control(
				[&i, &val_casted, &tmp_s](const std::shared_ptr<control> &c)
				{
					const auto real_sel = c->as<selectable>();
					const auto sel = std::make_shared<selectable>(control_id{GUI_HASH("hotkeys>list>k>settings>val>v") + tmp_s + i}, real_sel->text);
					sel->value = real_sel->value;
					sel->custom_color = real_sel->custom_color;

					val_casted->add(real_sel);
				});

			val->reset();
			val_casted->callback = [this](bits &v) { update_key_table(); };
		}
		break;
	default:
		throw;
	}

	// nope
	val->hotkey_type = hkt_none;

	const auto set = std::make_shared<settings>(control_id{GUI_HASH("hotkeys>list>k>settings") + (int)tmp_s * 64}, nullptr);
	set->add(helpers::make_control(XOR("hotkeys>list>k>settings>") + std::to_string(tmp_s), XOR("Value"), val));
	set->is_visible = remote->hotkey_type != hkt_checkbox || b->beh->first_set_bit().value_or((char)hkb_toggle) != hkb_toggle;

	const auto setup = std::make_shared<layout>(control_id{GUI_HASH("hotkeys>list>k") + tmp_s}, vec2{}, vec2{}, s_inline);
	setup->size_to_parent_w = true;
	setup->should_fit_height = true;
	setup->should_centerize = true;
	setup->stack_invisible = true;
	setup->add(beh);
	setup->add(hk);
	setup->add(set);
	setup->process_queues();

	const auto list = ctx->find<layout>(GUI_HASH("hotkeys>list"));
	list->add(setup);
}
