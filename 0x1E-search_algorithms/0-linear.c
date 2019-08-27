#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * linear_search - Function that search an int lineary
 * @array: the array to make the search
 * @size: the size of the array
 * @value: te value to search
 * Return: the index where the value is located or -1 if the array is null or
 * not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t iter = 0;

	if (array == NULL)
		return (-1);

	while (iter < size)
	{
		printf("Value checked array[%d] = [%d]\n", (int)iter,
		       array[iter]);
		if (array[iter] == value)
		{
			return ((int)iter);
		}
		iter++;
	}
	return (-1);
}
