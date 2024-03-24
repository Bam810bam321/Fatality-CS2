#include <ren/renderer.h>
#include <ren/types/shader.h>

namespace evo::ren
{
	void shader::create()
	{
		if (!adapter && !draw.adapter)
			throw;
		if (!adapter)
			adapter = draw.adapter;

		if (obj)
			return;

		obj = type == shader_frag ? adapter->create_fragment_shader(data.c_str()) : adapter->create_vertex_shader(data.c_str());
	}

	void shader::destroy()
	{
		if (!adapter || !obj)
			return;

		type == shader_frag ? adapter->destroy_fragment_shader(obj) : adapter->destroy_vertex_shader(obj);
		obj = nullptr;
	}
} // namespace evo::ren
