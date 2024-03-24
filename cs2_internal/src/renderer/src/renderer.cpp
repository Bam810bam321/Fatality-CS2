#include <ren/renderer.h>

namespace evo::ren
{
	renderer draw;
	float vtx_texel;
	float vtx_scale = 1.f;

	renderer::~renderer()
	{
		REN_DBG("freed");
		destroy_objects();
		layers = {};
	}

	void renderer::create_objects() const
	{
		if (!adapter)
			return;

		REN_DBG("creating objects");
		adapter->on_create_objects();
		for (const auto &l : layers)
		{
			if (!l)
				continue;
			l->create();
		}

		for (const auto &[_, t] : textures)
		{
			if (t)
				t->create();
		}

		for (const auto &[_, t] : fonts)
		{
			if (t)
				t->create();
		}

		for (const auto &[_, t] : shaders)
		{
			if (t)
				t->create();
		}
	}

	void renderer::destroy_objects() const
	{
		if (!adapter)
			return;

		REN_DBG("destroying objects");
		adapter->on_destroy_objects();
		for (const auto &l : layers)
		{
			if (!l)
				continue;
			l->destroy();
		}

		for (const auto &[_, t] : textures)
		{
			if (t)
				t->destroy();
		}

		for (const auto &[_, t] : fonts)
		{
			if (t)
				t->destroy();
		}

		for (const auto &[_, t] : fonts)
		{
			if (t)
				t->destroy();
		}
	}

	void renderer::refresh()
	{
		if (!adapter)
			return;

		RECT rect;
		GetClientRect(adapter->window, &rect);
		display.x = float(rect.right - rect.left);
		display.y = float(rect.bottom - rect.top);
	}

	void renderer::begin_frame() const
	{
		if (!adapter)
			return;

		// adjust scale.
		vtx_scale = scale;

		// lock layers
		for (const auto &l : layers)
		{
			if (!l || l->is_deferred)
				continue;
			l->lock();
		}

		for (const auto &[_, t] : textures)
		{
			if (t)
				t->on_begin_frame();
		}

		for (const auto &[_, t] : fonts)
		{
			if (t)
				t->on_begin_frame();
		}

		for (const auto &[_, t] : shaders)
		{
			if (t)
				t->on_begin_frame();
		}
	}

	void renderer::end_frame() const
	{
		if (!adapter)
			return;

		// unlock layers
		for (const auto &l : layers)
		{
			if (!l || l->is_deferred)
				continue;
			l->unlock();
		}

		for (const auto &[_, t] : textures)
		{
			if (t)
				t->on_end_frame();
		}

		for (const auto &[_, t] : fonts)
		{
			if (t)
				t->on_end_frame();
		}

		for (const auto &[_, t] : shaders)
		{
			if (t)
				t->on_end_frame();
		}
	}

	void renderer::render() const
	{
		if (!adapter)
			return;

		adapter->render();
	}

	void renderer::flush()
	{
		for (const auto &l : layers)
		{
			if (!l || l->is_deferred)
				continue;
			l->reset(true);
		}
	}

	void renderer::create_layer(int slot)
	{
		if (!adapter || slot < 0 || slot >= (int)layers.size())
			return;

		REN_DBG_FMT("allocating layer at %d", slot);
		layers[slot] = std::make_shared<layer>(adapter->alloc_vb(), adapter->alloc_ib());
	}
} // namespace evo::ren
