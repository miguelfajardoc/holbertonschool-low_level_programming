#include "sort.h"

/**
* swap - function that swap the values in an array
* @prev: the first argument
* @next: the second argument
**/

void swap(int *prev, int *next)
{
	int aux;

	aux = *prev;
	*prev = *next;
	*next = aux;
}

/**
 * selection_sort - Funcrion that sort selection algorithm
 * @array: List of elements
 * @size: size of list
 **/

void selection_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	size_t min;

	if (array == NULL)
		return;
	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		if (array[min] != array[i])
		{
			swap(&array[min], &array[i]);
			print_array(array, size);
		}
	}
}
