#include <ren/adapters/adapter_dx9.h>
#include <ren/buffers/ib_dx9.h>
#include <ren/buffers/vb_dx9.h>
#include <ren/renderer.h>
//
//#include <d3dx9.h>
//
//namespace evo::ren
//{
//struct device_backup_t
//{
//	void backup(IDirect3DDevice9 *device)
//	{
//		device->GetTransform(D3DTS_WORLD, &world);
//		device->GetTransform(D3DTS_VIEW, &view);
//		device->GetTransform(D3DTS_PROJECTION, &projection);
//
//		device->GetViewport(&viewport);
//		device->GetPixelShader(&pixel_shader);
//		device->GetVertexShader(&vertex_shader);
//
//		device->GetRenderState(D3DRS_CULLMODE, &rs_cull_mode);
//		device->GetRenderState(D3DRS_LIGHTING, &rs_lighting);
//		device->GetRenderState(D3DRS_ZENABLE, &rs_z_enable);
//		device->GetRenderState(D3DRS_ALPHABLENDENABLE, &rs_alpha_blend_enable);
//		device->GetRenderState(D3DRS_ALPHATESTENABLE, &rs_alpha_test_enable);
//		device->GetRenderState(D3DRS_BLENDOP, &rs_blend_op);
//		device->GetRenderState(D3DRS_SRCBLEND, &rs_src_blend);
//		device->GetRenderState(D3DRS_DESTBLEND, &rs_dest_blend);
//		device->GetRenderState(D3DRS_SCISSORTESTENABLE, &rs_scissor_test_enable);
//		device->GetRenderState(D3DRS_SHADEMODE, &rs_shade_mode);
//		device->GetRenderState(D3DRS_FOGENABLE, &rs_fog_enable);
//		device->GetRenderState(D3DRS_FILLMODE, &fm);
//		device->GetTextureStageState(0, D3DTSS_COLOROP, &tss_color_op);
//		device->GetTextureStageState(0, D3DTSS_COLORARG1, &tss_color_arg_1);
//		device->GetTextureStageState(0, D3DTSS_COLORARG2, &tss_color_arg_2);
//		device->GetTextureStageState(0, D3DTSS_ALPHAOP, &tss_alpha_op);
//		device->GetTextureStageState(0, D3DTSS_ALPHAARG1, &tss_alpha_arg_1);
//		device->GetTextureStageState(0, D3DTSS_ALPHAARG2, &tss_alpha_arg_2);
//		device->GetTextureStageState(0, D3DTSS_TEXTURETRANSFORMFLAGS, &tss_ttff);
//		device->GetSamplerState(0, D3DSAMP_MINFILTER, &samp_min_filter);
//		device->GetSamplerState(0, D3DSAMP_MAGFILTER, &samp_mag_filter);
//		device->GetSamplerState(0, D3DSAMP_ADDRESSU, &samp_au);
//		device->GetSamplerState(0, D3DSAMP_ADDRESSV, &samp_av);
//
//		device->GetFVF(&fvf);
//		device->GetStreamSource(0, &vertex_buffer, &offset_in_bytes, &stride);
//		device->GetIndices(&index_buffer);
//	}
//
//	void restore(IDirect3DDevice9 *device)
//	{
//		device->SetTransform(D3DTS_WORLD, &world);
//		device->SetTransform(D3DTS_VIEW, &view);
//		device->SetTransform(D3DTS_PROJECTION, &projection);
//
//		device->SetViewport(&viewport);
//		device->SetPixelShader(pixel_shader);
//		device->SetVertexShader(vertex_shader);
//
//		device->SetRenderState(D3DRS_CULLMODE, rs_cull_mode);
//		device->SetRenderState(D3DRS_LIGHTING, rs_lighting);
//		device->SetRenderState(D3DRS_ZENABLE, rs_z_enable);
//		device->SetRenderState(D3DRS_ALPHABLENDENABLE, rs_alpha_blend_enable);
//		device->SetRenderState(D3DRS_ALPHATESTENABLE, rs_alpha_test_enable);
//		device->SetRenderState(D3DRS_BLENDOP, rs_blend_op);
//		device->SetRenderState(D3DRS_SRCBLEND, rs_src_blend);
//		device->SetRenderState(D3DRS_DESTBLEND, rs_dest_blend);
//		device->SetRenderState(D3DRS_SCISSORTESTENABLE, rs_scissor_test_enable);
//		device->SetRenderState(D3DRS_SHADEMODE, rs_shade_mode);
//		device->SetRenderState(D3DRS_FOGENABLE, rs_fog_enable);
//		device->SetRenderState(D3DRS_FILLMODE, fm);
//		device->SetTextureStageState(0, D3DTSS_COLOROP, tss_color_op);
//		device->SetTextureStageState(0, D3DTSS_COLORARG1, tss_color_arg_1);
//		device->SetTextureStageState(0, D3DTSS_COLORARG2, tss_color_arg_2);
//		device->SetTextureStageState(0, D3DTSS_ALPHAOP, tss_alpha_op);
//		device->SetTextureStageState(0, D3DTSS_ALPHAARG1, tss_alpha_arg_1);
//		device->SetTextureStageState(0, D3DTSS_ALPHAARG2, tss_alpha_arg_2);
//		device->SetTextureStageState(0, D3DTSS_TEXTURETRANSFORMFLAGS, tss_ttff);
//		device->SetSamplerState(0, D3DSAMP_MINFILTER, samp_min_filter);
//		device->SetSamplerState(0, D3DSAMP_MAGFILTER, samp_mag_filter);
//		device->SetSamplerState(0, D3DSAMP_ADDRESSU, samp_au);
//		device->SetSamplerState(0, D3DSAMP_ADDRESSV, samp_av);
//
//		device->SetFVF(fvf);
//		device->SetStreamSource(0, vertex_buffer, offset_in_bytes, stride);
//		device->SetIndices(index_buffer);
//	}
//
//private:
//	D3DMATRIX world{}, view{}, projection{};
//	D3DVIEWPORT9 viewport{};
//	IDirect3DPixelShader9 *pixel_shader{};
//	IDirect3DVertexShader9 *vertex_shader{};
//	DWORD rs_cull_mode{}, rs_lighting{}, rs_z_enable{}, rs_alpha_blend_enable{}, rs_alpha_test_enable{};
//	DWORD rs_blend_op{}, rs_src_blend{}, rs_dest_blend{}, rs_scissor_test_enable{}, rs_shade_mode{}, rs_fog_enable{};
//	DWORD tss_color_op{}, tss_color_arg_1{}, tss_color_arg_2{}, tss_alpha_op{}, tss_alpha_arg_1{}, tss_alpha_arg_2{};
//	DWORD tss_ttff{}, fm{};
//	DWORD samp_min_filter{}, samp_mag_filter{}, samp_au{}, samp_av{};
//	DWORD fvf{};
//	IDirect3DVertexBuffer9 *vertex_buffer{};
//	UINT offset_in_bytes{};
//	UINT stride{};
//	IDirect3DIndexBuffer9 *index_buffer{};
//};
//
//void adapter_dx9::on_create_objects()
//{
//	if (pixel)
//		return;
//
//	const auto data = 0xFFFFFFFF;
//	pixel = (IDirect3DTexture9 *)create_texture((char *)&data, 1, 1, 4);
//	device->CreateTexture((int)draw.display.x, (int)draw.display.y, 1, D3DUSAGE_RENDERTARGET, D3DFMT_A8R8G8B8,
//						  D3DPOOL_DEFAULT, &back_buffer, nullptr);
//	device->CreateTexture((int)draw.display.x / 4, (int)draw.display.y / 4, 1, D3DUSAGE_RENDERTARGET, D3DFMT_A8R8G8B8,
//						  D3DPOOL_DEFAULT, &back_buffer_ds, nullptr);
//}
//
//void adapter_dx9::on_destroy_objects()
//{
//	if (!pixel)
//		return;
//
//	destroy_texture(pixel);
//	destroy_texture(back_buffer);
//	destroy_texture(back_buffer_ds);
//	pixel = back_buffer = back_buffer_ds = nullptr;
//}
//
//void adapter_dx9::render()
//{
//	// backup current state.
//	device_backup_t backup;
//	backup.backup(device);
//
//	IDirect3DStateBlock9 *state;
//	if (FAILED(device->CreateStateBlock(D3DSBT_PIXELSTATE, &state)))
//		return;
//
//	state->Capture();
//
//	// create new viewport
//	D3DVIEWPORT9 viewport{};
//	viewport.Width = (int)draw.display.x;
//	viewport.Height = (int)draw.display.y;
//	viewport.MaxZ = 0.0f;
//
//	// apply configuration
//	device->SetViewport(&viewport);
//	device->SetPixelShader(nullptr);
//	device->SetVertexShader(nullptr);
//	device->SetRenderState(D3DRS_CULLMODE, D3DCULL_NONE);
//	device->SetRenderState(D3DRS_LIGHTING, false);
//	device->SetRenderState(D3DRS_ZENABLE, false);
//	device->SetRenderState(D3DRS_ALPHABLENDENABLE, true);
//	device->SetRenderState(D3DRS_ALPHATESTENABLE, false);
//	device->SetRenderState(D3DRS_BLENDOP, D3DBLENDOP_ADD);
//	device->SetRenderState(D3DRS_SRCBLEND, D3DBLEND_SRCALPHA);
//	device->SetRenderState(D3DRS_DESTBLEND, D3DBLEND_INVSRCALPHA);
//	device->SetRenderState(D3DRS_SCISSORTESTENABLE, true);
//	device->SetRenderState(D3DRS_SHADEMODE, D3DSHADE_GOURAUD);
//	device->SetRenderState(D3DRS_FOGENABLE, false);
//	device->SetTextureStageState(0, D3DTSS_COLOROP, D3DTOP_MODULATE);
//	device->SetTextureStageState(0, D3DTSS_COLORARG1, D3DTA_TEXTURE);
//	device->SetTextureStageState(0, D3DTSS_COLORARG2, D3DTA_DIFFUSE);
//	device->SetTextureStageState(0, D3DTSS_ALPHAOP, D3DTOP_MODULATE);
//	device->SetTextureStageState(0, D3DTSS_ALPHAARG1, D3DTA_TEXTURE);
//	device->SetTextureStageState(0, D3DTSS_ALPHAARG2, D3DTA_DIFFUSE);
//	device->SetTextureStageState(0, D3DTSS_TEXTURETRANSFORMFLAGS, D3DTTFF_DISABLE);
//	device->SetSamplerState(0, D3DSAMP_MINFILTER, D3DTEXF_LINEAR);
//	device->SetSamplerState(0, D3DSAMP_MAGFILTER, D3DTEXF_LINEAR);
//	device->SetSamplerState(0, D3DSAMP_ADDRESSU, D3DTADDRESS_CLAMP);
//	device->SetSamplerState(0, D3DSAMP_ADDRESSV, D3DTADDRESS_CLAMP);
//
//	static D3DMATRIX mat_identity = {
//		{{1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f}}};
//	D3DMATRIX mat_projection = {{{2.f / draw.display.x, 0.0f, 0.0f, 0.0f, 0.0f, 2.f / -draw.display.y, 0.0f, 0.0f, 0.0f,
//								  0.0f, 0.5f, 0.0f, -1.f, 1.f, 0.5f, 1.f}}};
//
//	device->SetTransform(D3DTS_WORLD, &mat_identity);
//	device->SetTransform(D3DTS_VIEW, &mat_identity);
//	device->SetTransform(D3DTS_PROJECTION, &mat_projection);
//	device->SetFVF(D3DFVF_XYZ | D3DFVF_DIFFUSE | D3DFVF_TEX1);
//
//	for (const auto &l : draw.layers)
//	{
//		if (!l || !l->cb->real_size)
//			continue;
//		device->SetStreamSource(0, (IDirect3DVertexBuffer9 *)l->vb->object, 0, sizeof(vertex));
//		device->SetIndices((IDirect3DIndexBuffer9 *)l->ib->object);
//
//		int vo{}, io{};
//		l->cb->reset();
//		while (l->cb->has_more_data())
//		{
//			const auto &cmd = l->cb->read<command>();
//			if (cmd.frag_shader && !cmd.chained_call)
//				update_back_buffer(cmd.only_downsampled);
//
//			// set additional flags
//			switch (cmd.mode)
//			{
//			case normal:
//				device->SetRenderState(D3DRS_FILLMODE, D3DFILL_SOLID);
//				break;
//			case wireframe:
//				device->SetRenderState(D3DRS_FILLMODE, D3DFILL_WIREFRAME);
//				break;
//			}
//
//			const auto tex = cmd.texture ? (IDirect3DTexture9 *)cmd.texture : pixel;
//			device->SetRenderState(D3DRS_MULTISAMPLEANTIALIAS, cmd.anti_alias);
//
//			if (cmd.vert_shader)
//			{
//				device->SetVertexShaderConstantF(0, (float *)&mat_projection, 4);
//				device->SetVertexShader((IDirect3DVertexShader9 *)cmd.vert_shader);
//			}
//			else
//				device->SetVertexShader(nullptr);
//
//			if (cmd.frag_shader)
//			{
//				D3DSURFACE_DESC sd;
//				tex->GetLevelDesc(0, &sd);
//
//				float tex_sz[2] = {(float)sd.Width, (float)sd.Height};
//				float time[1] = {draw.time};
//				float alpha[1] = {cmd.alpha};
//
//				device->SetPixelShader((IDirect3DPixelShader9 *)cmd.frag_shader);
//				device->SetPixelShaderConstantF(0, tex_sz, 2);
//				device->SetPixelShaderConstantF(1, time, 1);
//				device->SetPixelShaderConstantF(2, alpha, 1);
//			}
//			else
//				device->SetPixelShader(nullptr);
//
//			device->SetTexture(0, tex && *reinterpret_cast<uintptr_t *>(tex) != 0xDDDDDDDD ? tex : nullptr);
//
//			// construct clip rect
//			RECT clip;
//			if (cmd.clip_rect)
//			{
//				const auto scale = cmd.ignore_scaling ? 1.f : draw.scale;
//				clip = {(LONG)(cmd.clip_rect->mins.x * scale), (LONG)(cmd.clip_rect->mins.y * scale),
//						(LONG)(cmd.clip_rect->maxs.x * scale), (LONG)(cmd.clip_rect->maxs.y * scale)};
//			}
//			else
//				clip = {0, 0, (LONG)draw.display.x, (LONG)draw.display.y};
//
//			device->SetScissorRect(&clip);
//			device->DrawIndexedPrimitive(D3DPT_TRIANGLELIST, vo, 0, cmd.vc, io, cmd.ic / 3);
//
//			io += (int)cmd.ic;
//			vo += (int)cmd.vc;
//		}
//	}
//
//	state->Apply();
//	state->Release();
//
//	backup.restore(device);
//}
//
//std::shared_ptr<buffer_base> adapter_dx9::alloc_vb()
//{
//	const auto vb = std::make_shared<vb_dx9_buffer>();
//	vb->adapter = shared_from_this();
//	return vb;
//}
//
//std::shared_ptr<buffer_base> adapter_dx9::alloc_ib()
//{
//	const auto ib = std::make_shared<ib_dx9_buffer>();
//	ib->adapter = shared_from_this();
//	return ib;
//}
//
//void *adapter_dx9::create_vertex_buffer(size_t sz)
//{
//	IDirect3DVertexBuffer9 *vb;
//	if (FAILED(device->CreateVertexBuffer(sz, D3DUSAGE_DYNAMIC | D3DUSAGE_WRITEONLY,
//										  D3DFVF_XYZ | D3DFVF_DIFFUSE | D3DFVF_TEX1, D3DPOOL_DEFAULT, &vb, nullptr)))
//		return nullptr;
//
//	return vb;
//}
//
//void adapter_dx9::destroy_vertex_buffer(void *vb) { ((IDirect3DVertexBuffer9 *)vb)->Release(); }
//
//void *adapter_dx9::create_index_buffer(size_t sz)
//{
//	IDirect3DIndexBuffer9 *ib;
//	if (FAILED(device->CreateIndexBuffer(sz, D3DUSAGE_DYNAMIC | D3DUSAGE_WRITEONLY, D3DFMT_INDEX16, D3DPOOL_DEFAULT,
//										 &ib, nullptr)))
//		return nullptr;
//
//	return ib;
//}
//
//void adapter_dx9::destroy_index_buffer(void *ib) { ((IDirect3DIndexBuffer9 *)ib)->Release(); }
//
//void *adapter_dx9::create_fragment_shader(const char *src)
//{
//	// compile shader
//	ID3DXBuffer *shader, *error;
//	D3DXCompileShader(src, (UINT)strlen(src), nullptr, nullptr, "main", "ps_2_0", 0, &shader, &error, nullptr);
//
//	if (!shader && error)
//	{
//		if (on_fragment_shader_compilation_error)
//			on_fragment_shader_compilation_error((const char *)error->GetBufferPointer());
//
//		error->Release();
//		return nullptr;
//	}
//
//	if (!shader)
//		return nullptr;
//
//	// create shader
//	IDirect3DPixelShader9 *ps{};
//	device->CreatePixelShader((DWORD *)shader->GetBufferPointer(), &ps);
//	shader->Release();
//
//	return ps;
//}
//
//void adapter_dx9::destroy_fragment_shader(void *ps) { ((IDirect3DPixelShader9 *)ps)->Release(); }
//
//void *adapter_dx9::create_vertex_shader(const char *src)
//{
//	// compile shader
//	ID3DXBuffer *shader, *error;
//	D3DXCompileShader(src, (UINT)strlen(src), nullptr, nullptr, "main", "vs_2_0", 0, &shader, &error, nullptr);
//
//	if (!shader && error)
//	{
//		if (on_vertex_shader_compilation_error)
//			on_vertex_shader_compilation_error((const char *)error->GetBufferPointer());
//
//		error->Release();
//		return nullptr;
//	}
//
//	if (!shader)
//		return nullptr;
//
//	// create shader
//	IDirect3DVertexShader9 *vs{};
//	device->CreateVertexShader((DWORD *)shader->GetBufferPointer(), &vs);
//	shader->Release();
//
//	return vs;
//}
//
//void adapter_dx9::destroy_vertex_shader(void *vs) { ((IDirect3DVertexShader9 *)vs)->Release(); }
//
//void *adapter_dx9::create_texture(char *data, uint32_t w, uint32_t h, uint32_t p)
//{
//	IDirect3DTexture9 *tex;
//	if (FAILED(device->CreateTexture(w, h, 1, D3DUSAGE_DYNAMIC, D3DFMT_A8R8G8B8, D3DPOOL_DEFAULT, &tex, nullptr)))
//		return nullptr;
//
//	D3DLOCKED_RECT rect;
//	if (FAILED(tex->LockRect(0, &rect, nullptr, D3DLOCK_DISCARD)))
//		return nullptr;
//
//	if (rect.Pitch == p)
//		memcpy(rect.pBits, data, p * h);
//	else
//	{
//		for (uint32_t i = 0; i < h; i++)
//			memcpy((char *)rect.pBits + rect.Pitch * i, data + p * i, p);
//	}
//
//	tex->UnlockRect(0);
//	return tex;
//}
//
//void adapter_dx9::update_texture(void *tex, char *data, uint32_t w, uint32_t h, uint32_t p)
//{
//	D3DLOCKED_RECT rect;
//	if (FAILED(((IDirect3DTexture9 *)tex)->LockRect(0, &rect, nullptr, D3DLOCK_DISCARD)))
//		return;
//
//	if (rect.Pitch == p)
//		memcpy(rect.pBits, data, p * h);
//	else
//	{
//		for (uint32_t i = 0; i < h; i++)
//			memcpy((char *)rect.pBits + rect.Pitch * i, data + p * i, p);
//	}
//
//	((IDirect3DTexture9 *)tex)->UnlockRect(0);
//}
//
//void adapter_dx9::destroy_texture(void *tex) { ((IDirect3DTexture9 *)tex)->Release(); }
//
//void *adapter_dx9::get_back_buffer() { return back_buffer; }
//
//void *adapter_dx9::get_back_buffer_downsampled() { return back_buffer_ds; }
//
//void adapter_dx9::update_back_buffer(bool only_downsampled)
//{
//	// get back buffer
//	IDirect3DSurface9 *bb;
//	device->GetBackBuffer(0, 0, D3DBACKBUFFER_TYPE_MONO, &bb);
//
//	if (!bb)
//		return;
//
//	// get texture surface
//	IDirect3DSurface9 *ts{}, *ts_ds{};
//	back_buffer_ds->GetSurfaceLevel(0, &ts_ds);
//	device->StretchRect(bb, nullptr, ts_ds, nullptr, D3DTEXF_LINEAR);
//
//	if (!only_downsampled)
//	{
//		back_buffer->GetSurfaceLevel(0, &ts);
//		device->StretchRect(bb, nullptr, ts, nullptr, D3DTEXF_LINEAR);
//	}
//
//	bb->Release();
//	ts_ds->Release();
//
//	if (!only_downsampled)
//		ts->Release();
//}
//} // namespace evo::ren