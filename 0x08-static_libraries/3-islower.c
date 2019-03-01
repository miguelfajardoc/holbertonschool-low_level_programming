#include "holberton.h"
/**
 * _islower - check if a letter is lowercase or not
 * @c: the letter to check
 * Return: 1 if c is lowercase, 0 otherwise.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		c = 1;
	else
		c = 0;

	return (c);
}
