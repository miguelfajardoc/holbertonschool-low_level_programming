#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
#include <math.h>
/**
 * linear_search2 - Function that search an int lineary
 * @array: the array to make the search
 * @size: the size of the array
 * @value: te value to search
 * @iter: the beggin of the iterator
 * Return: the index where the value is located or -1 if the array is null or
 * not found
 */
int linear_search2(int *array, size_t size, int value, size_t iter)
{

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
/**
 * jump_search - search algorithm thar uses the jum method
 * @array: the array to search
 * @size: the size of te array
 * @value: the value to be found
 * Return: te index where is located or -1 if not found.
 */
int jump_search(int *array, size_t size, int value)
{
	int sqrtv = 0;
	int min = 0;

	if (array == NULL)
		return (-1);

	while (sqrtv < (int)size)
	{
		sqrtv += sqrt(size);
		printf("Value checked array[%d] = [%d]\n", min, array[min]);
		if (sqrtv < (int)size && array[sqrtv] >= value)
		{
			printf("Value found between indexes [%d] and [%d]\n", min,
			       sqrtv);
			return (linear_search2(array, sqrtv + 1, value, min));
		}
		min = sqrtv;
	}
	min -= (int)sqrt(size);
	printf("Value found between indexes [%d] and [%d]\n", min, sqrtv);
	return (linear_search2(array, size, value, min));
}
