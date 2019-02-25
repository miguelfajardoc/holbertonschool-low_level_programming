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
	int i;

	for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
		;

	if (s[i] == '\0')
	{
		return (0);
	}

	s = s + i;
	return (s);
}
