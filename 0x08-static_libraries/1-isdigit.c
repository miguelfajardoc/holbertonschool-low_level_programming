#include "holberton.h"
/**
 * _isdigit - check if a character is a digit or not
 *
 * @c: the number to check
 * Return: 1 if c is a digit, 0 otherwise.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		c = 1;
	else
		c = 0;

	return (c);
}
