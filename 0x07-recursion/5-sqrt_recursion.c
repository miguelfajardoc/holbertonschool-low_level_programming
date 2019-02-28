#include "holberton.h"

/**
 * _sqrt_recursion - find the natural square root of a number.
 * @n: the number to find the square root.
 * @i: the iterator.
 * Return: the natural square root. if dont exist, return -1.
 */
int sqrt_two(int n, int i);
int _sqrt_recursion(int n)
{
	int i = 0;

	return (sqrt_two(n, i));

}

/**
 * sqrt_two - find the natural square root of a number.
 * @n: the number to find the square root.
 * @i: the iterator.
 * Return: the natural square root. if dont exist, return -1.
 */

int sqrt_two(int n, int i)
{
	if (n < 0 || i * i > n)
		return (-1);
	else if (i * i < n)
		return (sqrt_two(n, i + 1));
	else
		return (i);
}
