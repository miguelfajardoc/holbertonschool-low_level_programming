#include "holberton.h"
#include <stdio.h>
/**
 * rot13 - transform a string into rot13 encode
 * @s: the string to transform
 * Return: the string transformed.
 */
char *rot13(char *s)
{
	int i = 0;
	int j = 0;
	int lto[] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	int ltd[] = {4, 3, 0, 7, 1, 4, 3, 0, 7, 1};

	while (*(s + i) != '\0')
	{
		j = 0;
		while (s[i] != lto[j] && *(lto + j) != '\0')
		{
			j++;
		}
		printf("%d\n", j);
		if (j < 10)
			s[i] = ltd[j];
		i++;
	}
	return (s);
}
