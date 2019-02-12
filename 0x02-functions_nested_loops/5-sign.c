#include "holberton.h"
/**
 * print_sign - check if a numbeer is positive or negative, print the sign.
 * @n: the number to check
 * Return: 1 if the number is positive an 0 if is negative.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		n = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		n = 0;
		_putchar('0');
	}
	else
	{
		_putchar('-');
		n = -1;
	}
	return (n);
}
