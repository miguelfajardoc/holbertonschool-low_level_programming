#include "holberton.h"
/**
 * rev_string - reverse a string.
 *
 * @s: the string to reverse.
 *
 */
void rev_string(char *s)
{
	char t;
	int l = 0;
	int m;
	int c = 0;

	while (s[c] != '\0')
	{
		l++;
		c++;
	}
	l--;
	m = l / 2;
	for (c = 0 ; c <= m; c++)
	{
		t = s[c];
		s[c] = s[l];
		s[l] = t;
		l--;
	}
}
