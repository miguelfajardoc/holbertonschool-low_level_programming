#include "holberton.h"

/**
 * _factorial - return the factorial of a given number
 *
 * @n: the number to get the factorial
 * Return: the factorial of n; -1 if n is lower than 0 to indicate error.
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));

}
