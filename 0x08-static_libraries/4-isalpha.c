#include "holberton.h"
/**
 * _isalpha - check if a character is a letter or not
 * @c: the character to check
 * Return: 1 if c is letter, 0 otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		c = 1;
	else
		c = 0;

	return (c);
}
