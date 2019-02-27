#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - sum the two diagonals of a square matrix.
 * @a: pointer of the matrix
 * @size: the size of the matrix
 *
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum = 0;

	for (i = 0 ; i < (size * size) ; i += size + 1)
	{
		sum += a[i];
	}
	printf("%d, ", sum);
	i = size - 1;
	sum = 0;
	for (i = size - 1 ; i + 1 < (size * size) ; i += size - 1)
	{
		sum += a[i];
	}
	printf("%d\n", sum);

}
