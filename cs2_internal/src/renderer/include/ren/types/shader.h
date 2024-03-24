#ifndef REN_LINKER_SHADER_H
#define REN_LINKER_SHADER_H

#include <ren/adapter.h>
#include <ren/managed.h>
#include <string>
#include <utility>

namespace evo::ren
{
	enum shader_type
	{
		shader_frag,
		shader_vert,
	};

	class shader : public managed, public std::enable_shared_from_this<shader>
	{
	public:
		shader(std::string src, shader_type type) : type(type), data(std::move(src)) { REN_DBG("shader allocated"); }
		~shader() { REN_DBG("shader freed"); }

		void create() override;
		void destroy() override;
		void on_begin_frame() override{};
		void on_end_frame() override{};

		std::shared_ptr<adapter> adapter;
		void *obj{};

	protected:
		shader_type type;
		std::string data;
	};
} // namespace evo::ren

#endif // REN_LINKER_SHADER_H
