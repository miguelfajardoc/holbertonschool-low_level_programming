#include "holberton.h"
/**
 * print_triangle - print triangles comform by '#' align to right
 * @size: size of the triangles
 * Return: none.
 */

void print_triangle(int size)
{
	int x = size;
	int y = size;
	int cnt = 1;
	int e = size - cnt;

	if (size > 0)
	{
		while (y > 0)
		{
			while (x > 0)
			{
				while (e > 0)
				{
					_putchar(' ');
					e--;
					x--;
				}

				_putchar('#');
				x--;
			}
			_putchar('\n');
			x = size;
			cnt++;
			e = size - cnt;
			y--;
		}
	}
	else
		_putchar('\n');
}
