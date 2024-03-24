#include <gui/helpers.h>
#include <gui/controls/label.h>
#include <gui/controls/tabs_layout.h>

GUI_NAMESPACE;

std::shared_ptr<window> helpers::make_window(
	const std::string &id, const vec2 &p, const vec2 &s, const std::function<void(std::shared_ptr<gui::layout> &)> &t,
	const std::function<void(std::shared_ptr<gui::layout> &)> &e, const std::function<void(std::shared_ptr<gui::layout> &)> &b)
{
	auto w = std::make_shared<window>(control_id{hash(id), id}, p, s);

	{
		auto l = std::make_shared<layout>(control_id{hash(id + XOR("_content"))}, vec2(24.f, 66.f), s - vec2(48.f, 106.f));
		l->make_not_clip()->margin = {};

		e(l);

		w->add(l);
	}
	{
		auto l = std::make_shared<tabs_layout>(control_id{hash(id + XOR("_tabs"))}, vec2(126.f, 0.f), s - vec2(336.f, s.y - 50.f), td_horizontal)->as<layout>();

		t(l);

		w->add(l);
	}
	{
		auto l = std::make_shared<layout>(control_id{hash(id + XOR("_toolbar"))}, vec2(24.f, s.y - 24.f), vec2(s.x - 48.f, 20.f), s_inline_inv)->as<layout>();
		b(l);

		w->add(l);
	}

	return w;
}

std::shared_ptr<layout> helpers::make_tab_area(uint64_t id, bool is_active, char a, const std::function<void(std::shared_ptr<gui::layout> &)> &e)
{
	auto l = std::make_shared<layout>(control_id{id}, vec2(0.f, 0.f), vec2(0.f, 0.f), a);
	l->make_not_clip()->make_height_automatic()->make_width_automatic()->margin = rect();
	l->is_visible = is_active;

	e(l);

	return l;
}

std::shared_ptr<group> helpers::make_groupbox(
	const std::string &id, const std::string &t, const vec2 &p, const vec2 &s, const std::function<void(std::shared_ptr<gui::layout> &)> &e)
{
	auto l = std::make_shared<layout>(control_id{hash(id + XOR("_content"))}, vec2(0.f, 16.f), s - vec2(0.f, 24.f), s_vertical);
	l->margin = {};
	l->custom_margin = {16.f, 0.f, 16.f, 0.f};

	e(l);

	auto g = std::make_shared<group>(control_id{hash(id), id}, t, p, s);
	g->add(l);

	return g;
}

std::shared_ptr<layout> helpers::make_inlined(uint64_t id, const std::function<void(std::shared_ptr<gui::layout> &)> &e)
{
	auto l = std::make_shared<layout>(control_id{id}, vec2(), vec2(), s_inline);
	l->make_not_clip()->make_centerized()->make_width_automatic();
	l->should_fit_height = true;

	e(l);

	return l;
}

std::shared_ptr<layout> helpers::make_control(const std::string &text, const std::shared_ptr<control> &c, const std::vector<std::string> &aliases, bool is_new)
{
	return make_inlined(
		hash(text + XOR("_content_") + std::to_string(c->id)), [&](std::shared_ptr<layout> &e)
		{
			const auto l = std::make_shared<label>(control_id{c->id ^ hash(text)}, text);
			l->margin = {};
			l->is_new = is_new;
			l->aliases = aliases;
			e->add(l);
			e->add(c);
		});
}

std::shared_ptr<layout> helpers::make_control(const std::string &id, const std::string &text, const std::shared_ptr<control> &c, const std::vector<std::string> &aliases)
{
	return make_inlined(
		hash(id + text + XOR("_content_") + std::to_string(c->id)), [&](std::shared_ptr<layout> &e)
		{
			const auto l = std::make_shared<label>(control_id{c->id ^ hash(text)}, text);
			l->margin = {};
			l->aliases = aliases;
			e->add(l);
			e->add(c);
		});
}

std::shared_ptr<layout> helpers::make_flex(uint64_t id, const std::shared_ptr<layout> &p, float r, const std::function<void(std::shared_ptr<gui::layout> &)> &e)
{
	auto l = std::make_shared<layout>(control_id{id}, vec2(), vec2(), s_none);
	l->make_not_clip();
	l->size = p->size - vec2{0.f, r + 2.f};

	e(l);

	return l;
}

std::shared_ptr<layout> helpers::make_child_tab_area(
	uint64_t id, const std::shared_ptr<layout> &p, bool is_active, const std::function<void(std::shared_ptr<gui::layout> &)> &e)
{
	auto l = std::make_shared<layout>(control_id{id}, vec2{}, vec2{}, s_vertical);
	l->make_not_clip();
	l->size = p->size;
	l->is_visible = is_active;
	l->margin = {};
	l->custom_margin = {16.f, 4.f, 16.f, 0.f};

	e(l);

	return l;
}
