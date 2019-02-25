#include "holberton.h"
#include <stdio.h>
/**
 * _strspn - count the leng from a prefix substring.
 * @s: the string to search.
 * @accept: the string to search.
 * Return: the number of bytes in initial segment that coincides with accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int n = 0;
	int b = 1;

	for (i = 0; (s[i] != '\0') && (b != 0); i++)
	{
		b = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				b++;
			}
		}
	}

	return (n);
}
