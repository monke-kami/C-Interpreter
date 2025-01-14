#ifndef clox_memory_h
#define clox_memory_h

#include "headerstuff.h"

#define GROW_CAPACITY(capacity) \
	((capacity) < 8 ? 8 : (capacity) * 2)

#define GROW_ARRAY(type,pointer,oldcount,newCount) \
	(type*)reallocate(pointer , sizeof(type) * (oldcount), \
	sizeof(type) * (newCount))
#endif
