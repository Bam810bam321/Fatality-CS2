#include <ren/adapters/adapter_dx9.h>
#include <ren/buffers/vb_dx9.h>

namespace evo::ren
{
void vb_dx9_buffer::create(size_t sz)
{
	if (object)
		destroy();

	object = adapter->create_vertex_buffer(sz);
	size = sz;
}

void vb_dx9_buffer::destroy()
{
	if (!object)
		return;

	adapter->destroy_vertex_buffer(object);
	object = nullptr;
}

void vb_dx9_buffer::lock()
{
	if (!object)
		return;

	((IDirect3DVertexBuffer9 *)object)->Lock(0, size, (void **)&data, should_discard ? D3DLOCK_DISCARD : 0);
}

void vb_dx9_buffer::unlock()
{
	if (!object)
		return;

	((IDirect3DVertexBuffer9 *)object)->Unlock();
	data = nullptr;
}
} // namespace evo::ren
