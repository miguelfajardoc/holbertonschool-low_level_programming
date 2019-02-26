#include "holberton.h"
#include <stdio.h>
/**
 * _strpbrk - count the leng from a prefix substring.
 * @s: the string to search.
 * @accept: the string to search.
 * Return: the number of bytes in initial segment that coincides with accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				s = s + i;
				return (s);
			}
		}
	}

	return (0);
}
