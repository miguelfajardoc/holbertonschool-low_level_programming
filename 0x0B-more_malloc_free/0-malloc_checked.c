#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - alloc a memory with malloc property
 * @b: the var that bring the amount of memory to allocate
 *
 */
void *malloc_checked(unsigned int b)
{
	void *s = malloc(b);
	if (s == NULL)
		exit(98);
	return (s);
}
