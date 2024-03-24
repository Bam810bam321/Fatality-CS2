#ifndef REN_LINKER_ADAPTER_DX9_H
#define REN_LINKER_ADAPTER_DX9_H

#define D3D_DEBUG_INFO
#include <d3d9.h>

#include <ren/adapter.h>
#include <ren/types/vertex.h>

namespace evo::ren
{
	class adapter_dx9 : public adapter
	{
	public:
		explicit adapter_dx9(HWND wnd, IDirect3DDevice9 *dev) :
			adapter(wnd), device(dev) { vtx_texel = .5f; }

		void on_create_objects() override;
		void on_destroy_objects() override;
		void render() override;

		std::shared_ptr<buffer_base> alloc_vb() override;
		std::shared_ptr<buffer_base> alloc_ib() override;

		void *create_vertex_buffer(size_t sz) override;
		void destroy_vertex_buffer(void *vb) override;
		void *create_index_buffer(size_t sz) override;
		void destroy_index_buffer(void *ib) override;

		void *create_fragment_shader(const char *src) override;
		void destroy_fragment_shader(void *fs) override;
		void *create_vertex_shader(const char *src) override;
		void destroy_vertex_shader(void *vs) override;

		void *create_texture(char *data, uint32_t w, uint32_t h, uint32_t p) override;
		void update_texture(void *tex, char *data, uint32_t w, uint32_t h, uint32_t p) override;
		void destroy_texture(void *tex) override;

		void *get_back_buffer() override;
		void *get_back_buffer_downsampled() override;

	protected:
		void update_back_buffer(bool only_downsampled = false);

		IDirect3DDevice9 *device{};
		IDirect3DTexture9 *pixel{}, *back_buffer{}, *back_buffer_ds{};
	};
} // namespace evo::ren

#endif // REN_LINKER_ADAPTER_DX9_H
