#include <stdio.h>
#include "holberton.h"
/**
 * get_bit - get a value of a bit at a given index
 * @n: a number to check the bit
 * @index: the index
 * Return: the bit value found.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 1;

	if (index > (sizeof(n) * 8))
		return (-1);
	n = (n >> index);
	n = (n & i);
	return (n);
}
