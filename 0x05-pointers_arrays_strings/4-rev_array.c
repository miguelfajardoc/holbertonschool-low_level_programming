#include "holberton.h"
/**
 * reverse_array - reverse array of ints.
 *
 * @a: the array to reverse.
 * @n: the number of elements in the array
 *
 */
void reverse_array(int *a, int n)
{
	int t;
	int m;
	int c = 0;

	n--;
	m = n / 2;
	for (c = 0 ; c <= m; c++)
	{
		t = a[c];
		a[c] = a[n];
		a[n] = t;
		n--;
	}
}
