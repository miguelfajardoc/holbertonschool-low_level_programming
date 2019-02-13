#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - print the numbers until reatch 98
 * @n: the start number
 * Return: none
 */

void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98 ; i--)
		{
			if (i == 98 && i == n)
			{
				printf("%d\n", i);
			}
			if (i == 98)
			{
				printf(" %d\n", i);
			}
			else if (i == n)
				printf("%d,", i);
			else
				printf(" %d,", i);
		}
	}
	else
	{
		for (i = n; i <= 98 ; i++)
		{
			if (i == 98 && i == n)
			{
				printf("%d\n", i);
			}
			else if (i == 98)
			{
				printf(" %d\n", i);
			}
			else if (i == n)
				printf("%d,", i);
			else
				printf(" %d,", i);
		}
	}
}
