#include "holberton.h"
/**
 * string_toupper - reverse array of ints.
 *
 * @s: the string to uppercase.
 *
 * Return: the string upper.
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) <= 'z' && *(s + i) >= 'a')
			*(s + i) -= 32;
		i++;
	}
	return (s);
}
