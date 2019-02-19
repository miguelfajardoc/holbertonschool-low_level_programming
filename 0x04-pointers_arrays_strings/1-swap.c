#include "holberton.h"
/**
 * swap_int - swap the assignement of two vars.
 *
 * @a: The first variable to swap
 * @b: The secont variable to swap
 *
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
