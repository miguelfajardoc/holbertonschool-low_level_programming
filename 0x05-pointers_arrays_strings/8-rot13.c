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
	char roto[] = "abcdefghijklmABCDEFGHIJKLMnopqrstuvwxyzNOPQRSTUVWXYZ";
	char rotd[] = "nopqrstuvwxyzNOPQRSTUVWXYZabcdefghijklmABCDEFGHIJKLM";

	while (*(s + i) != '\0')
	{
		if ((s[i] <= 'z' && s[i] >= 'a') || (s[i] <= 'Z' &&
						      s[i] >= 'A'))
		{
			j = 0;
			while (s[i] != roto[j])
			{
				j++;
			}
			s[i] = rotd[j];
		}
		i++;
	}
	return (s);
}
