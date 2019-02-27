#include "holberton.h"

/**
 * _strlen_recursion - return the length of a string
 *
 * @s: the string check the length
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	int l = 0;

	if (s[0] == '\0')
	{
		return (l);
	}
	l = 1 + _strlen_recursion(s + 1);
	return (l);
}
