#include <ctype.h>
#include "holberton.h"
/**
 * _islower - check if a letter is lowercase or not
 * @c: the letter to check
 * Return: 1 if c is lowercase, 0 otherwise.
 */

int _islower(int c)
{
	int e;

	if (islower(c))
		e = 1;
	else
		e = 0;

	return (e);
}
