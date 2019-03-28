#include <stdio.h>
#include "holberton.h"

/**
 * binary_to_uint - print a decimal number from a binary number
 * @b: the binary string to convert
 * Return: Always 0.
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int n_dec = 0;
	int j = 0;

	if (b == NULL)
		return (n_dec);
	for (i = 0; *(b + i); i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (n_dec);
	}

	for (--i; i >= 0; i--)
	{
		if (b[i] == '1')
			n_dec += _pow_recursion(2, j);
		j++;
	}
	return (n_dec);
}
/**
 * _pow_recursion - return the power of a number
 * @x: the number to raise
 * @y: the number that is the power to raise x
 * Return: the raise of x to power y. If y is lower, return -1.
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
