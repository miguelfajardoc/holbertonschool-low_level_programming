#include "holberton.h"
#include <stdio.h>
/**
 * _strchr - find a char in string.
 * @s: the string to search.
 * @c: the char to find.
 * Return: return pointr to the first occur or NULL if the char never was found
 */
char *_strchr(char *s, char c)
{

	for (; (*s != c) && (*s != '\0'); s++)
		;
	if (c == '\0')
		return (s);

	if (*s == '\0')
	{
		return (0);
	}

	return (s);
}
