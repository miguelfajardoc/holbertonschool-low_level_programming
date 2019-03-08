#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - create an array of integers
 * @min: the min value to start
 * @max: the max value to start
 *
 * Return: the strings of integers;
 */
int *array_range(int min, int max)
{
	int *m;
	int dif;
	int i;

	if (min > max)
		return (NULL);
	dif = max - min + 1;
	m = malloc(sizeof(int) * dif);
	if (m == NULL)
		return (NULL);
	for (i = 0; min <= max ; i++)
	{
		m[i] = min;
		min++;
	}
	return (m);
}
