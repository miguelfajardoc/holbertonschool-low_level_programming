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
 * bubble_sort - Function that sort elements one array.
 * @array: List of elements
 * @size: size of list
 **/

void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t j;

	for (j = 1; j < size; j++)
	{
		for (i = 0; i < size - j; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap(&array[i], &array[i + 1]);
				print_array(array, size);
			}
		}
	}
}
