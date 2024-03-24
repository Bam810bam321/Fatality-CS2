#ifndef REN_LINKER_CMD_BUFFER_H
#define REN_LINKER_CMD_BUFFER_H

#include <ren/buffer.h>
#include <ren/macros.h>

namespace evo::ren
{
	class cmd_buffer : public buffer_base
	{
	public:
		cmd_buffer() { REN_DBG("cmd buffer allocated"); }

		~cmd_buffer() override
		{
			if (data)
				delete data;

			REN_DBG("cmd buffer freed");
		}

		void create(size_t sz) override;
		void destroy() override;
		void lock() override {}
		void unlock() override {}
	};
} // namespace evo::ren

#endif // REN_LINKER_CMD_BUFFER_H
