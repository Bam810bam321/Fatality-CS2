#include <ren/adapters/adapter_dx11.h>
#include <ren/buffers/ib_dx11.h>
#include <ren/buffers/vb_dx11.h>

namespace evo::ren
{
	void adapter_dx11::on_create_objects()
	{
		if (frag)
			return;

		REN_DBG("dx11: creating objects");

		// create deferred context
		if (FAILED(device->CreateDeferredContext(0, &deferred)))
			throw;

		vert = (ID3D11VertexShader *)create_vertex_shader("cbuffer vertex_buffer:register(b0){float4x4 projection_matrix;};struct VS_INPUT{float2 pos:POSITION;float4 "
														  "col:COLOR0;float2 uv:TEXCOORD0;};struct PS_INPUT{float4 pos:SV_POSITION;float4 col:COLOR0;float2 "
														  "uv:TEXCOORD0;};PS_INPUT main(VS_INPUT input){PS_INPUT "
														  "output;output.pos=mul(projection_matrix,float4(input.pos.xy,0.f,1.f));output.col=input.col;output.uv=input.uv;"
														  "return output;}");
		frag = (ID3D11PixelShader *)create_fragment_shader("struct PS_INPUT{float4 pos:SV_POSITION;float4 col:COLOR0;float2 uv:TEXCOORD0;};sampler sampler0;Texture2D "
														   "texture0;float4 main(PS_INPUT input):SV_Target{return input.col*texture0.Sample(sampler0,input.uv);}");

		D3D11_BUFFER_DESC desc{};
		desc.ByteWidth = sizeof(float[4][4]);
		desc.Usage = D3D11_USAGE_DYNAMIC;
		desc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;
		desc.CPUAccessFlags = D3D11_CPU_ACCESS_WRITE;
		desc.MiscFlags = 0;

		if (FAILED(device->CreateBuffer(&desc, nullptr, &constant_buffer)))
			throw;

		D3D11_BLEND_DESC blend{};
		blend.AlphaToCoverageEnable = false;
		blend.RenderTarget[0].BlendEnable = true;
		blend.RenderTarget[0].SrcBlend = D3D11_BLEND_SRC_ALPHA;
		blend.RenderTarget[0].DestBlend = D3D11_BLEND_INV_SRC_ALPHA;
		blend.RenderTarget[0].BlendOp = D3D11_BLEND_OP_ADD;
		blend.RenderTarget[0].SrcBlendAlpha = D3D11_BLEND_INV_SRC_ALPHA;
		blend.RenderTarget[0].DestBlendAlpha = D3D11_BLEND_ZERO;
		blend.RenderTarget[0].BlendOpAlpha = D3D11_BLEND_OP_ADD;
		blend.RenderTarget[0].RenderTargetWriteMask = D3D11_COLOR_WRITE_ENABLE_ALL;

		if (FAILED(device->CreateBlendState(&blend, &blend_state)))
			throw;

		D3D11_RASTERIZER_DESC rast{};
		rast.FillMode = D3D11_FILL_SOLID;
		rast.CullMode = D3D11_CULL_NONE;
		rast.ScissorEnable = true;
		rast.DepthClipEnable = true;

		if (FAILED(device->CreateRasterizerState(&rast, &rasterizer_state)))
			throw;

		D3D11_DEPTH_STENCIL_DESC depth{};
		depth.DepthEnable = false;
		depth.DepthWriteMask = D3D11_DEPTH_WRITE_MASK_ALL;
		depth.DepthFunc = D3D11_COMPARISON_ALWAYS;
		depth.StencilEnable = false;
		depth.FrontFace.StencilFailOp = depth.FrontFace.StencilDepthFailOp = depth.FrontFace.StencilPassOp = D3D11_STENCIL_OP_KEEP;
		depth.FrontFace.StencilFunc = D3D11_COMPARISON_ALWAYS;
		depth.BackFace = depth.FrontFace;

		if (FAILED(device->CreateDepthStencilState(&depth, &depth_stencil)))
			throw;

		D3D11_SAMPLER_DESC samp{};
		samp.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;
		samp.AddressU = D3D11_TEXTURE_ADDRESS_WRAP;
		samp.AddressV = D3D11_TEXTURE_ADDRESS_WRAP;
		samp.AddressW = D3D11_TEXTURE_ADDRESS_WRAP;
		samp.MipLODBias = 0.f;
		samp.ComparisonFunc = D3D11_COMPARISON_ALWAYS;
		samp.MinLOD = 0.f;
		samp.MaxLOD = 0.f;

		if (FAILED(device->CreateSamplerState(&samp, &texture_sampler)))
			throw;

		constexpr auto data = 0xFFFFFFFF;
		texture_object = static_cast<ID3D11ShaderResourceView *>(create_texture((char *)&data, 1, 1, 4));
	}

	void adapter_dx11::on_destroy_objects()
	{
		if (!frag)
			return;

		REN_DBG("dx11: destroying objects");

		if (deferred)
			deferred->Release();
		if (deferred_list)
			deferred_list->Release();
		if (vert)
			vert->Release();
		if (frag)
			frag->Release();
		if (input_layout)
			input_layout->Release();
		if (depth_stencil)
			depth_stencil->Release();
		if (rasterizer_state)
			rasterizer_state->Release();
		if (blend_state)
			blend_state->Release();
		if (constant_buffer)
			constant_buffer->Release();
		if (texture_sampler)
			texture_sampler->Release();
		if (texture_object)
			texture_object->Release();

		deferred_list = {};
		input_layout = {};
		frag = {};
	}

	void adapter_dx11::render()
	{
		D3D11_VIEWPORT vp{};
		vp.Width = draw.display.x;
		vp.Height = draw.display.y;
		vp.MinDepth = 0.f;
		vp.MaxDepth = 1.f;
		vp.TopLeftX = vp.TopLeftY = 0.f;

		D3D11_MAPPED_SUBRESOURCE cb{};
		if (FAILED(ctx->Map(constant_buffer, 0, D3D11_MAP_WRITE_DISCARD, 0, &cb)))
			throw;

		const float mvp[4][4] = {
			{2.f / draw.display.x, 0.f, 0.f, 0.f},
			{0.f, 2.f / -draw.display.y, 0.f, 0.f},
			{0.f, 0.f, 0.5f, 0.f},
			{-1.f, 1.f, 0.5f, 1.f},
		};

		memcpy(&reinterpret_cast<vertex_constant_buffer *>(cb.pData)->mvp, &mvp, sizeof(float) * 16);
		ctx->Unmap(constant_buffer, 0);

		float bs_flt[4]{};
		ctx->IASetInputLayout(input_layout);
		ctx->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);
		ctx->VSSetConstantBuffers(0, 1, &constant_buffer);
		ctx->PSSetSamplers(0, 1, &texture_sampler);
		ctx->OMSetDepthStencilState(depth_stencil, 0);
		ctx->OMSetBlendState(blend_state, bs_flt, 0xFFFFFFFF);
		ctx->RSSetState(rasterizer_state);
		ctx->RSSetViewports(1, &vp);

		for (const auto &l : draw.layers)
		{
			if (!l)
				continue;

			const bool deferred_dirty = l->deferred_dirty;
			const auto deferred_ready = l->is_deferred && l->is_deferred_ready && !deferred_dirty;

			if (deferred_ready)
				l->cb->swap(l->cb_deferred);

			if (deferred_dirty)
				l->cb_deferred->reset(true);

			const auto &cmds = l->is_deferred ? l->cb_deferred : l->cb;
			if (!cmds->real_size)
			{
				if (l->is_deferred)
					l->is_deferred_ready = false;

				continue;
			}

			// handle deferred rendering
			if (deferred_ready)
			{
				if (deferred_list)
					ctx->ExecuteCommandList(deferred_list, true);

				l->is_deferred_ready = false;
			}

			constexpr auto stride = static_cast<uint32_t>(sizeof(vertex));
			constexpr auto offset = 0u;

			ctx->IASetVertexBuffers(0, 1, reinterpret_cast<ID3D11Buffer **>(&l->vb->object), &stride, &offset);
			ctx->IASetIndexBuffer(static_cast<ID3D11Buffer *>(l->ib->object), DXGI_FORMAT_R16_UINT, 0);

			int vo{}, io{};
			cmds->reset();

			while (cmds->has_more_data())
			{
				const auto &cmd = cmds->read<command>();
				if (cmd.frag_shader || cmd.vert_shader)
					continue; // TODO: cba to deal with updating back buffer atm. Do it later.

				if (cmd.frag_shader && !cmd.chained_call)
					update_back_buffer(cmd.only_downsampled);

				const auto tex = cmd.texture ? reinterpret_cast<ID3D11ShaderResourceView *>(cmd.texture) : texture_object;
				ctx->PSSetShaderResources(0, 1, &tex);
				ctx->VSSetShader(cmd.vert_shader ? static_cast<ID3D11VertexShader *>(cmd.vert_shader) : vert, nullptr, 0);
				ctx->PSSetShader(cmd.frag_shader ? static_cast<ID3D11PixelShader *>(cmd.frag_shader) : frag, nullptr, 0);

				if (cmd.frag_shader)
				{
					// todo: pre-push data.
				}

				// construct clip rect
				RECT clip;
				if (cmd.clip_rect)
				{
					const auto scale = cmd.ignore_scaling ? 1.f : draw.scale;
					clip = {
						static_cast<LONG>(cmd.clip_rect->mins.x * scale), static_cast<LONG>(cmd.clip_rect->mins.y * scale),
						static_cast<LONG>(cmd.clip_rect->maxs.x * scale), static_cast<LONG>(cmd.clip_rect->maxs.y * scale)};
				}
				else
					clip = {0, 0, static_cast<LONG>(draw.display.x), static_cast<LONG>(draw.display.y)};

				ctx->RSSetScissorRects(1, &clip);
				ctx->DrawIndexed(cmd.ic, io, vo);

				io += static_cast<int>(cmd.ic);
				vo += static_cast<int>(cmd.vc);
			}
		}
	}

	std::shared_ptr<buffer_base> adapter_dx11::alloc_ib()
	{
		REN_DBG("dx11: allocating index buffer");

		const auto ib = std::make_shared<ib_dx11_buffer>();
		ib->adapter = shared_from_this();
		return ib;
	}

	std::shared_ptr<buffer_base> adapter_dx11::alloc_vb()
	{
		REN_DBG("dx11: allocating vertex buffer");

		const auto vb = std::make_shared<vb_dx11_buffer>();
		vb->adapter = shared_from_this();
		return vb;
	}

	void *adapter_dx11::create_vertex_buffer(size_t sz)
	{
		REN_DBG_FMT("dx11: creating vertex buffer (size %zu)", sz);

		D3D11_BUFFER_DESC desc{};
		desc.Usage = D3D11_USAGE_DYNAMIC;
		desc.ByteWidth = sz;
		desc.BindFlags = D3D11_BIND_VERTEX_BUFFER;
		desc.CPUAccessFlags = D3D11_CPU_ACCESS_WRITE;

		ID3D11Buffer *buf;
		if (FAILED(device->CreateBuffer(&desc, nullptr, &buf)))
			throw;

		return buf;
	}

	void adapter_dx11::destroy_vertex_buffer(void *vb)
	{
		REN_DBG_FMT("dx11: destroying vertex buffer (mem %p)", vb);
		((ID3D11Buffer *)vb)->Release();
	}

	void *adapter_dx11::create_index_buffer(size_t sz)
	{
		REN_DBG_FMT("dx11: creating index buffer (size %zu)", sz);

		D3D11_BUFFER_DESC desc{};
		desc.Usage = D3D11_USAGE_DYNAMIC;
		desc.ByteWidth = sz;
		desc.BindFlags = D3D11_BIND_INDEX_BUFFER;
		desc.CPUAccessFlags = D3D11_CPU_ACCESS_WRITE;

		ID3D11Buffer *buf;
		if (FAILED(device->CreateBuffer(&desc, nullptr, &buf)))
			throw;

		return buf;
	}

	void adapter_dx11::destroy_index_buffer(void *ib)
	{
		REN_DBG_FMT("dx11: destroying index buffer (mem %p)", ib);
		((ID3D11Buffer *)ib)->Release();
	}

	void *adapter_dx11::create_fragment_shader(const char *src)
	{
		REN_DBG("dx11: creating fragment shader");

		ID3D10Blob *blob{}, *errors{};
		if (FAILED(D3DCompile(src, strlen(src), nullptr, nullptr, nullptr, "main", "ps_4_0", 0, 0, &blob, &errors)))
		{
			if (errors)
			{
				if (on_fragment_shader_compilation_error)
					on_fragment_shader_compilation_error((const char *)errors->GetBufferPointer());

				errors->Release();
				return nullptr;
			}
		}

		if (!blob)
			return nullptr;

		ID3D11PixelShader *shader{};
		if (FAILED(device->CreatePixelShader(blob->GetBufferPointer(), blob->GetBufferSize(), nullptr, &shader)))
		{
			blob->Release();
			return nullptr;
		}

		blob->Release();
		return shader;
	}

	void adapter_dx11::destroy_fragment_shader(void *fs)
	{
		REN_DBG_FMT("dx11: destroying fragment shader (mem %p)", fs);
		((ID3D11PixelShader *)fs)->Release();
	}

	void *adapter_dx11::create_vertex_shader(const char *src)
	{
		REN_DBG("dx11: creating vertex shader");

		ID3D10Blob *blob{}, *errors{};
		if (FAILED(D3DCompile(src, strlen(src), nullptr, nullptr, nullptr, "main", "vs_4_0", 0, 0, &blob, &errors)))
		{
			if (errors)
			{
				if (on_vertex_shader_compilation_error)
					on_vertex_shader_compilation_error((const char *)errors->GetBufferPointer());

				errors->Release();
				return nullptr;
			}
		}

		if (!blob)
			return nullptr;

		ID3D11VertexShader *shader{};
		if (FAILED(device->CreateVertexShader(blob->GetBufferPointer(), blob->GetBufferSize(), nullptr, &shader)))
		{
			blob->Release();
			return nullptr;
		}

		static const D3D11_INPUT_ELEMENT_DESC layout[] = {
			{"POSITION", 0, DXGI_FORMAT_R32G32_FLOAT, 0, 0, D3D11_INPUT_PER_VERTEX_DATA, 0},
			{"COLOR", 0, DXGI_FORMAT_B8G8R8A8_UNORM, 0, 12, D3D11_INPUT_PER_VERTEX_DATA, 0},
			{"TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT, 0, 16, D3D11_INPUT_PER_VERTEX_DATA, 0},
		};

		if (!input_layout)
		{
			if (FAILED(device->CreateInputLayout(layout, 3, blob->GetBufferPointer(), blob->GetBufferSize(), &input_layout)))
				throw;
		}

		blob->Release();
		return shader;
	}

	void adapter_dx11::destroy_vertex_shader(void *vs)
	{
		REN_DBG_FMT("dx11: destroying vertex shader (mem %p)", vs);
		((ID3D11VertexShader *)vs)->Release();
	}

	void *adapter_dx11::create_texture(char *data, uint32_t w, uint32_t h, uint32_t p)
	{
		REN_DBG_FMT("dx11: creating texture (mem %p, w %u, h %u, p %u)", data, w, h, p);

		D3D11_TEXTURE2D_DESC desc{};
		desc.Width = w;
		desc.Height = h;
		desc.MipLevels = 1;
		desc.ArraySize = 1;
		desc.Format = DXGI_FORMAT_B8G8R8A8_UNORM;
		desc.SampleDesc.Count = 1;
		desc.Usage = D3D11_USAGE_DYNAMIC;
		desc.BindFlags = D3D11_BIND_SHADER_RESOURCE;
		desc.CPUAccessFlags = D3D11_CPU_ACCESS_WRITE;

		D3D11_SUBRESOURCE_DATA sd{};
		sd.pSysMem = data;
		sd.SysMemPitch = p;
		sd.SysMemSlicePitch = 0;

		D3D11_SHADER_RESOURCE_VIEW_DESC r{};
		r.Format = DXGI_FORMAT_B8G8R8A8_UNORM;
		r.ViewDimension = D3D11_SRV_DIMENSION_TEXTURE2D;
		r.Texture2D.MipLevels = 1;
		r.Texture2D.MostDetailedMip = 0;

		ID3D11Texture2D *texture{};
		if (FAILED(device->CreateTexture2D(&desc, &sd, &texture)))
			throw;

		ID3D11ShaderResourceView *_tex{};
		if (FAILED(device->CreateShaderResourceView(texture, &r, &_tex)))
			throw;

		return _tex;
	}

	void adapter_dx11::update_texture(void *tex, char *data, uint32_t w, uint32_t h, uint32_t p)
	{
		REN_DBG_FMT("dx11: updating texture (tex %p, mem %p, w %u, h %u, p %u)", tex, data, w, h, p);

		const auto view = (ID3D11ShaderResourceView *)tex;

		ID3D11Texture2D *texture{};
		view->GetResource((ID3D11Resource **)&texture);

		D3D11_MAPPED_SUBRESOURCE rect{};
		ctx->Map(texture, 0, D3D11_MAP_WRITE_DISCARD, 0, &rect);

		if (rect.RowPitch == p)
			memcpy(rect.pData, data, p * h);
		else
		{
			for (uint32_t i = 0; i < h; i++)
				memcpy((char *)rect.pData + rect.RowPitch * i, data + p * i, p);
		}

		ctx->Unmap(texture, 0);
	}

	void adapter_dx11::destroy_texture(void *tex)
	{
		REN_DBG_FMT("dx11: destroying texture (mem %p)", tex);
		((ID3D11ShaderResourceView *)tex)->Release();
	}

	void *adapter_dx11::get_back_buffer() { return back_buffer; }

	void *adapter_dx11::get_back_buffer_downsampled() { return back_buffer_ds; }

	void adapter_dx11::update_back_buffer(bool only_downsampled)
	{
		// todo!
	}
} // namespace evo::ren
