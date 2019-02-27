#include "holberton.h"

/**
 * _pow_recursion - return the power of a number
 * @x: the number to raise
 * @y: the number that is the power to raise x
 * Return: the raise of x to power y. If y is lower, return -1.
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));

}
