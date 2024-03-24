#ifndef SDK_UTL_UTL_STRING_H
#define SDK_UTL_UTL_STRING_H

#include "utl_memory.h"

class cutl_string
{
public:
	const char *get() const { return mem.memory; }

	cutl_memory<char> mem;
	int actual_length;
};

#endif // SDK_UTL_UTL_STRING_H
