#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - return the index of the number if coincides with a fun
 * -ction
 * @array: the array to look
 * @size: the size of the array
 * @cmp: the pointer to point the function to use to compare
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (cmp != NULL && array != NULL && size > 0)
	{
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	}
	return (-1);
}
