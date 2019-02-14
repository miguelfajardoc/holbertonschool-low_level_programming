#include "holberton.h"
/**
 * print_diagonal - print backslash into lines to draw long diagonal lines
 * @n: long of the diagonal (amount of lines)
 * Return: none.
 */

void print_diagonal(int n)
{
	int x = 0, y = 0;

	if (n > 0)
	{
		while (n--)
		{
			while (x--)
				_putchar(' ');

			_putchar('\\');
			y++;
			x = y;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
