#include <stdio.h>
#include "holberton.h"
/**
 * print_binary - print a int in binary
 * @n: a number to rint in binary
 */
void print_binary(unsigned long int n)
{
	unsigned int i = n;
	int cnt = 0;

	if (n == 0)
		_putchar('0');
	while (i)
	{
		i = i >> 1;
		cnt++;
	}
	while (cnt)
	{
		i = n >> (cnt - 1);
		i = i & 1;
		_putchar(i + '0');
		cnt--;
	}

}
