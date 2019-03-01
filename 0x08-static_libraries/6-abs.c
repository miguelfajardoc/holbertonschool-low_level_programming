#include "holberton.h"
/**
 * _abs - return the absolute value of an integer
 * @n: the number to transform
 * Return: the absolute value of a number
 */

int _abs(int n)
{

	if (n < 0)
		n *= -1;

	return (n);
}
