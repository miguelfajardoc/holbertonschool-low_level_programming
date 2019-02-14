#include "holberton.h"
/**
 * more_numbers - print the numbers from 0 to 14 ten times
 *
 * Return: none.
 */

void more_numbers(void)
{
	int i;
	int n;

	while (n < 15)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
				_putchar('1');

			_putchar((i % 10) + '0');
		}
		n++;
		_putchar('\n');
	}

}
