#include <stdio.h>
#include "holberton.h"
/**
 * clear_bit - set a value of a bit at a given index to 0
 * @n: a pointer to the number to set the bit
 * @index: the index
 * Return: 1 if works, -1 otherwise.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;

	if (index > (sizeof(*n) * 8))
		return (-1);
	i = ~(i << index);
	*n = (*n & i);
	return (1);
}
