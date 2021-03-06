#include "holberton.h"
#include <stdio.h>
/**
 * leet - transform a string into 1337 encode
 * @s: the string to transform
 * Return: the string transformed.
 */
char *leet(char *s)
{
	int i = 0;
	int j = 0;
	int lto[] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	int ltd[] = {4, 3, 0, 7, 1, 4, 3, 0, 7, 1};

	while (*(s + i) != '\0')
	{
		j = 0;
		while (s[i] != lto[j] && j < 10)
		{
			j++;
		}
		if (j < 10)
			s[i] = ltd[j] + '0';
		i++;
	}
	return (s);
}
