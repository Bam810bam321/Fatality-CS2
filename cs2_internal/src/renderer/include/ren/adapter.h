#ifndef REN_LINKER_ADAPTER_H
#define REN_LINKER_ADAPTER_H

#define WIN32_LEAN_AND_MEAN
#include <Windows.h>

#include <functional>
#include <ren/buffer.h>

namespace evo::ren
{
	class adapter : public std::enable_shared_from_this<adapter>
	{
	public:
		explicit adapter(HWND wnd) : window(wnd) {}

		virtual void on_create_objects() {}
		virtual void on_destroy_objects() {}
		virtual void render() = 0;

		virtual std::shared_ptr<buffer_base> alloc_vb() = 0;
		virtual std::shared_ptr<buffer_base> alloc_ib() = 0;

		virtual void *create_vertex_buffer(size_t sz) = 0;
		virtual void destroy_vertex_buffer(void *vb) = 0;
		virtual void *create_index_buffer(size_t sz) = 0;
		virtual void destroy_index_buffer(void *ib) = 0;

		virtual void *create_fragment_shader(const char *src) = 0;
		virtual void destroy_fragment_shader(void *fs) = 0;
		virtual void *create_vertex_shader(const char *src) = 0;
		virtual void destroy_vertex_shader(void *vs) = 0;

		virtual void *create_texture(char *data, uint32_t w, uint32_t h, uint32_t p) = 0;
		virtual void update_texture(void *tex, char *data, uint32_t w, uint32_t h, uint32_t p) = 0;
		virtual void destroy_texture(void *tex) = 0;

		virtual void *get_back_buffer() = 0;
		virtual void *get_back_buffer_downsampled() = 0;

		virtual void *get_context() { return nullptr; }
		virtual void *get_deferred_context() { return nullptr; }
		virtual void **get_deferred_list() { return nullptr; }

		std::function<void(const char *)> on_fragment_shader_compilation_error{};
		std::function<void(const char *)> on_vertex_shader_compilation_error{};

		HWND window{};
	};
} // namespace evo::ren

#endif // REN_LINKER_ADAPTER_H
