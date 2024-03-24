#include <ren/adapters/adapter_dx11.h>
#include <ren/buffers/ib_dx11.h>

namespace evo::ren
{
	void ib_dx11_buffer::create(size_t sz)
	{
		if (object)
			destroy();

		object = adapter->create_index_buffer(sz);
		size = sz;
	}

	void ib_dx11_buffer::destroy()
	{
		if (!object)
			return;

		adapter->destroy_index_buffer(object);
		object = nullptr;
	}

	void ib_dx11_buffer::lock()
	{
		if (!object || data)
			return;

		const auto ctx = (ID3D11DeviceContext *)(is_deferred ? adapter->get_deferred_context() : adapter->get_context());

		D3D11_MAPPED_SUBRESOURCE map{};
		ctx->Map((ID3D11Resource *)object, 0, D3D11_MAP_WRITE_DISCARD, 0, &map);

		data = (char *)map.pData;
	}

	void ib_dx11_buffer::unlock()
	{
		if (!object || !data)
			return;

		const auto ctx = (ID3D11DeviceContext *)(is_deferred ? adapter->get_deferred_context() : adapter->get_context());
		ctx->Unmap((ID3D11Resource *)object, 0);
		data = nullptr;
	}
} // namespace evo::ren
