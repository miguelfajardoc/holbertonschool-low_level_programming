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

	for ( ; (*s != c) && (*s != '\0'); s++)
		;
	if (s == '\0')
	{
		s = s - 1;
		s = NULL;
		return (s);
	}
	return (s);
}
