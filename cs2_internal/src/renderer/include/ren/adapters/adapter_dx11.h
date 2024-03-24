#ifndef ADAPTERS_ADAPTER_DX11_H
#define ADAPTERS_ADAPTER_DX11_H

#include <d3d11.h>
#include <d3dcompiler.h>

#include <ren/macros.h>
#include <ren/adapter.h>
#include <ren/types/vertex.h>

namespace evo::ren
{
	class adapter_dx11 : public adapter
	{
	public:
		explicit adapter_dx11(HWND wnd, ID3D11Device *dev, ID3D11DeviceContext *ctx) : adapter(wnd), device(dev), ctx(ctx)
		{
			vtx_texel = .0f;
			REN_DBG("dx11 adapter allocated");
		}

		~adapter_dx11() { REN_DBG("dx11 adapter freed"); }

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

		void *get_context() override { return ctx; }
		void *get_deferred_context() override { return deferred; }
		void **get_deferred_list() override { return (void **)&deferred_list; }

	protected:
		void update_back_buffer(bool only_downsampled = false);

		ID3D11Device *device;
		ID3D11DeviceContext *ctx, *deferred{};
		ID3D11ShaderResourceView *back_buffer{}, *back_buffer_ds{};
		ID3D11CommandList *deferred_list{};

		ID3D11PixelShader *frag{};
		ID3D11VertexShader *vert{};
		ID3D11InputLayout *input_layout{};
		ID3D11DepthStencilState *depth_stencil{};
		ID3D11RasterizerState *rasterizer_state{};
		ID3D11BlendState *blend_state{};
		ID3D11Buffer *constant_buffer{};
		ID3D11SamplerState *texture_sampler{};
		ID3D11ShaderResourceView *texture_object{};
	};
} // namespace evo::ren

#endif // ADAPTERS_ADAPTER_DX11_H
