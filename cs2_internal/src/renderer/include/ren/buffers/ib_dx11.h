#ifndef RENDERER_INCLUDE_REN_BUFFERS_IB_DX11_H
#define RENDERER_INCLUDE_REN_BUFFERS_IB_DX11_H

#include <ren/renderer.h>

namespace evo::ren
{
	class ib_dx11_buffer : public buffer_base
	{
	public:
		ib_dx11_buffer() { REN_DBG("dx11 index buffer allocated"); }
		virtual ~ib_dx11_buffer() { REN_DBG("dx11 index buffer freed"); }

		void create(size_t sz) override;
		void destroy() override;
		void lock() override;
		void unlock() override;

		std::shared_ptr<adapter> adapter;
	};
} // namespace evo::ren

#endif // RENDERER_INCLUDE_REN_BUFFERS_IB_DX11_H
