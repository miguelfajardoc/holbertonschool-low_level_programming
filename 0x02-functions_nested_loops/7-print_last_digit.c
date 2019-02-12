#include "holberton.h"
/**
 * print_last_digit - print last digit of a number
 * @n: the number to extract
 * Return: the last digit
 */

int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;

	n = n % 10;
	_putchar(n + '0');

	return (n);
}
