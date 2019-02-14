#include "holberton.h"
/**
 * _isupper - check if a letter is upercase or not
 * @c: the letter to check
 * Return: 1 if c is uppercase, 0 otherwise.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = 1;
	else
		c = 0;

	return (c);
}
