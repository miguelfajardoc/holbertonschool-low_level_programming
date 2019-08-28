#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_search - Function that search an int with binary algorithm
 * @array: the array to make the search
 * @size: the size of the array
 * @value: te value to search
 * Return: the index where the value is located or -1 if the array is null or
 * not found
 */

int binary_search(int *array, size_t size, int value)
{
	int last = (int)size - 1;
	int half = (last / 2);
	int first = 0;

	if (array == NULL)
		return (-1);

	while (first <= last)
	{
		print_array(array, first, last);
	        if (array[half] == value)
			return (half);
		if (array[half] < value)
		{
			first = half + 1;
		}
		else
		{
			last = half - 1;
		}
		half = (first + last) / 2;
	}
	return (-1);
}

/**
 * print_parray - print a portion of array since a given index to a maximum
 * @array: the array to print
 * @first: the first element of the array
 * @last: the last element of the array
 */
void print_array(int *array, int first, int last)
{
	int iter;
	printf("Searching in array:");
	for(iter = first; iter <= last; iter++)
	{
		printf(" %d", array[iter]);
		if (iter != last)
			printf(",");
		else
			printf("\n");
	}
}
