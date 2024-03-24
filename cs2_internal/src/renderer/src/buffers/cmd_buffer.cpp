#include <ren/buffers/cmd_buffer.h>

namespace evo::ren
{
	void cmd_buffer::create(size_t sz)
	{
		data = (char *)malloc(sz);
		size = sz;
	}

	void cmd_buffer::destroy()
	{
		free(data);
		data = nullptr;
	}
} // namespace evo::ren
