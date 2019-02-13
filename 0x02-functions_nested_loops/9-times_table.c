#include "holberton.h"
/**
 * times_table - print mult table
 *
 */

void times_table(void)
{
	int i;
	int j;
	int n;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 10; i++)
		{
			n = i * j;
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			if (i != 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
			_putchar('\n');
	}
}
