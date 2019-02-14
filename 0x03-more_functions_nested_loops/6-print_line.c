#include "holberton.h"
/**
 * print_line - print lines n long
 * @n: long of the lines sized by '_'
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
