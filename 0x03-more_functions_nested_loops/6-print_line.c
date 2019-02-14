#include "holberton.h"
/**
 * print_line - print lines n long
 *
 * Return: none.
 */

void print_line(int n)
{

	if (n > 0)
	{
		while (n--)
			_putchar('_');
	}
	_putchar('\n');

}
