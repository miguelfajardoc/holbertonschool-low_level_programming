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
* quick_sort - Main Function call the real function
* @array: List of elements
* @size: Lenght array
**/
void quick_sort(int *array, size_t size)
{
	quick_sort_real(array, size, array, size);
}

/**
* quick_sort_real - Function todo the algorithm
* @array: List of elements
* @size: Lenght array
* @array_print: Array print
* @size_p: Lenght fixed
**/
void quick_sort_real(int *array, size_t size, int *array_print, size_t size_p)
{
	size_t i = -1;
	size_t pivot = size - 1;
	size_t j = 0;

	if (array == NULL)
		return;
	while (j < pivot)
	{
		if (array[j] <= array[pivot])
		{
			i++;
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array_print, size_p);
			}
		}
		j++;
	}
	if ((i + 1) != pivot)
	{
		swap(&array[i + 1], &array[pivot]);
		print_array(array_print, size_p);

	}
	if ((size - (i + 2)) > 1)
		quick_sort_real(&array[i + 2], size - (i + 2), array_print,
				size_p);
	if ((int)i > 1)
		quick_sort_real(&array[0], i + 1, array_print, size_p);
}
