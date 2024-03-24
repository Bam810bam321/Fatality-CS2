#ifndef REN_LINKER_VB_DX9_H
#define REN_LINKER_VB_DX9_H

#include <ren/renderer.h>

namespace evo::ren
{
	class vb_dx9_buffer : public buffer_base
	{
	public:
		void create(size_t sz) override;
		void destroy() override;
		void lock() override;
		void unlock() override;

		std::shared_ptr<adapter> adapter;
	};
} // namespace evo::ren

#endif // REN_LINKER_VB_DX9_H
