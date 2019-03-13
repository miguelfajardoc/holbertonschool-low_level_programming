#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - print an array
 * @array: the array to print
 * @size: the size of the array
 * @action: the pointer to point the function to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (action != NULL && array != NULL)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
