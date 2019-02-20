#include "holberton.h"
/**
 * rev_string - reverse a string.
 *
 * @s: the string to reverse.
 *
 */
void rev_string(char *s)
{
	char r[10];
	char *n;
	int i = 0;

	n = s;

	while (*s != '\0')
	{
		r[i] = *s;
		s++;
		i++;

	}
	s = n;
	while (*s != '\0')
	{
		*s = r[i];
		i--;
		s++;
	}

}
