#include "holberton.h"
/**
 * print_rev - prints a string in reverse.
 *
 * @s: the string to print.
 *
 */
void print_rev(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		s++;
		l++;
	}
	while (l >= 0)
	{
		s--;
		_putchar(*s);
		l--;
	}
	_putchar('\n');
}
