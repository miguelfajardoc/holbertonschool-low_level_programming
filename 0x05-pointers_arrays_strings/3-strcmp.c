#include "holberton.h"
/**
 * _strcmp - compare two strings.
 *
 * @s1: the pointer that point the first string.
 * @s2: the pointer that point the second string.
 *
 * Return: return 0 if the strings are equal, otherwise if are different.
 */
int _strcmp(char *s1, char *s2)
{
	int p = 1;
	int number;
	int i = 0;

	while (p)
	{
		number = s1[i] - s2[i];
		if ((s1[i] == '\0') && (s2[i] == '\0'))
			p = 0;
		if (number != 0)
			p = 0;
		else
			i++;
	}
	return (number);
}
