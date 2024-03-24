#ifndef REN_LINKER_MANAGED_H
#define REN_LINKER_MANAGED_H

namespace evo::ren
{
	class managed
	{
	public:
		virtual void create() = 0;
		virtual void destroy() = 0;

		virtual void on_begin_frame() = 0;
		virtual void on_end_frame() = 0;
	};
} // namespace evo::ren

#endif // REN_LINKER_MANAGED_H
