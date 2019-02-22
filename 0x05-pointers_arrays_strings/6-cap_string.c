#include "holberton.h"
/**
 * cap_string - capitalize every word of a string
 * @s: the string to capitalize.
 * Return: the string to capitalize.
 */
char *cap_string(char *s)
{
	int i = 0, t;

	while (*(s + i) != '\0')
	{
		if (s[0] <= 'z' && s[0] >= 'a')
			s[0] -= 32;
		t = *(s + i - 1);
		if (*(s + i) <= 'z' && *(s + i) >= 'a')
		{
			if (t == '\n' || t == '\t' || t == ',' || t == ';'
			    || t == '.' || t == '!' || t == '?' || t == '"'
			    || t == '(' || t == ')' || t == '{' || t == '}'
			    || t == ' ')
			{
				*(s + i) -= 32;
			}
		}
		i++;
	}
	return (s);
}
