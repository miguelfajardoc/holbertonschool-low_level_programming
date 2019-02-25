#include "holberton.h"
#include <stdio.h>
/**
 * _strch - find a char in string.
 * @s: the string to search.
 * @c: the char to find.
 * Return: return a pointer to the first occurrence of c, or NULL if the
 character never was found.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
		;

	if (s[i] == '\0')
	{
		s = s + i;
		s = 0;
		return (s);
	}
	s = s + i
	return (s);
}
