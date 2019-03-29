#include <stdio.h>
#include "holberton.h"
/**
 * print_binary - print a int in binary
 * @n: a number to rint in binary
 * @index: the index
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
