#pragma once

#include <utils/value_obfuscation.h>

namespace utils
{
class hook_interface
{
public:
	hook_interface() = default;
	hook_interface(hook_interface const &other) = delete;
	hook_interface &operator=(hook_interface const &other) = delete;
	hook_interface(hook_interface &&other) = delete;
	hook_interface &operator=(hook_interface &&other) = delete;

	virtual ~hook_interface() = default;
	virtual void attach() = 0;
	virtual void detach() = 0;
	virtual uintptr_t get_endpoint() const = 0;
	virtual uintptr_t get_target() const = 0;
};

template <typename T> class hook final : public hook_interface
{
public:

private:
	bool is_attached;
};
}
