#include "holberton.h"
/**
 * print_last_digit - print last digit of a number
 * @n: the number to extract
 * Return: the last digit
 */

int print_last_digit(int n)
{
	int l;

	if (n < 0)
		n *= -1;

	l = n % 10;
	_putchar(l + '0');

	return (l);
}
