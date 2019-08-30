#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
int binary_search2(int *array, size_t size, int value, size_t min);
void print_array(int *array, int first, int last);
/**
 * exponential_search - algorithm that search exponentialy
 * @array: pointer to the array
 * @size: size of the array
 * @value: value of search
 * Return: index or -1 if doesnt found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t position = 1;
	size_t previus = 0;

	if (array == NULL)
		return (-1);

	while (position < size && array[position] < value)
	{
		previus = position;
		printf("Value checked array[%lu] = [%d]\n", position,
		       array[position]);
		position *= 2;
	}
	if (position >= size)
		position = size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", previus,
	       position);
	return (binary_search2(array, position + 1, value, previus));


}


/**
 * binary_search2 - Function that search an int with binary algorithm
 * @array: the array to make the search
 * @size: the size of the array
 * @value: the value to search
 * @min: start position array
 * Return: the index where the value is located or -1 if the array is null or
 * not found
 */

int binary_search2(int *array, size_t size, int value, size_t min)
{
	int last = (int)size - 1;
	int half = (last + min) / 2;
	int first = min;

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
 * print_array - print a portion of array since a given index to a maximum
 * @array: the array to print
 * @first: the first element of the array
 * @last: the last element of the array
 */
void print_array(int *array, int first, int last)
{
	int iter;

	printf("Searching in array:");
	for (iter = first; iter <= last; iter++)
	{
		printf(" %d", array[iter]);
		if (iter != last)
			printf(",");
		else
			printf("\n");
	}
}
