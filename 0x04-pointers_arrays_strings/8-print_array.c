#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints the content of an array.
 *
 * @a: the string to print.
 * @n: the number of elements of the array to print.
 *
 */
void print_array(int *a, int n)
{
	int i = 0;
	while (i < n)
	{
		printf("%d", a[i]);
		if (i < (n-1))
			printf(", ");
		i++;
	}
	printf("\n");
}
