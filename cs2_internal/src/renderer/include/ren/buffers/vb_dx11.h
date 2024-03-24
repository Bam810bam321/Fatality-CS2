#ifndef RENDERER_INCLUDE_REN_BUFFERS_VB_DX11_H
#define RENDERER_INCLUDE_REN_BUFFERS_VB_DX11_H

#include <ren/renderer.h>

namespace evo::ren
{
	class vb_dx11_buffer : public buffer_base
	{
	public:
		vb_dx11_buffer() { REN_DBG("dx11 vertex buffer allocated"); }
		virtual ~vb_dx11_buffer() { REN_DBG("dx11 vertex buffer freed"); }

		void create(size_t sz) override;
		void destroy() override;
		void lock() override;
		void unlock() override;

		std::shared_ptr<adapter> adapter;
	};
} // namespace evo::ren

#endif // RENDERER_INCLUDE_REN_BUFFERS_VB_DX11_H
