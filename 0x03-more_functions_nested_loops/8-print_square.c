#include "holberton.h"
/**
 * print_square - print squares comform by '#'
 * @size: size of the squares
 * Return: none.
 */

void print_square(int size)
{
	int x = size;
	int y = size;

	if (size > 0)
	{
		while (y--)
		{
			while (x--)
				_putchar('#');

			_putchar('\n');
			x = size;
		}
	}
	else
		_putchar('\n');
}
