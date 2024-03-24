#include <ren/adapters/adapter_dx9.h>
#include <ren/buffers/ib_dx9.h>

namespace evo::ren
{
void ib_dx9_buffer::create(size_t sz)
{
	if (object)
		destroy();

	object = adapter->create_index_buffer(sz);
	size = sz;
}

void ib_dx9_buffer::destroy()
{
	if (!object)
		return;

	adapter->destroy_index_buffer(object);
	object = nullptr;
}

void ib_dx9_buffer::lock()
{
	if (!object)
		return;

	((IDirect3DIndexBuffer9 *)object)->Lock(0, size, (void **)&data, should_discard ? D3DLOCK_DISCARD : 0);
}

void ib_dx9_buffer::unlock()
{
	if (!object)
		return;

	((IDirect3DIndexBuffer9 *)object)->Unlock();
	data = nullptr;
}
} // namespace evo::ren
