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
		t = *(s + i - 1);
		if (*(s + i) <= 'z' && *(s + i) >= 'a')
		{
			switch (t)
			{
			case '\n':
				*(s + i) -= 32;
				break;
			case '\t':
				*(s + i) -= 32;
				break;
			case ',':
				*(s + i) -= 32;
				break;
			case ';':
				*(s + i) -= 32;
				break;
			case '.':
				*(s + i) -= 32;
				break;
			case '!':
				*(s + i) -= 32;
				break;
			case '?':
				*(s + i) -= 32;
				break;
			case '"':
				*(s + i) -= 32;
				break;
			case '(':
				*(s + i) -= 32;
				break;
			case ')':
				*(s + i) -= 32;
				break;
			case '{':
				*(s + i) -= 32;
				break;
			case '}':
				*(s + i) -= 32;
				break;
			case ' ':
				*(s + i) -= 32;
				break;
			}
		}
		i++;
	}
	return (s);
}
