#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * size_string - calculate the size of the string
 * @str: the string that passed
 *
 *Return: the size of the string, within null, if the string is null, return 0;
 */
int size_string(char *str)
{
	int size;

	if (str == NULL)
		return (1);
	for (size = 0; str[size] != '\0'; size++)
		;
	size++;
	return (size);
}
/**
 * string_nconcat - alloc a memory with malloc property to conc two strings
 * @s1: the first string to concatenate
 * @s2: the second string to concatenate
 * @n: the ammount to the s2 to concatenate
 * Return: the pointer that points to the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int sz1;
	unsigned int sz2;
	unsigned int szt, i, j;
	char *s;

	sz1 = size_string(s1);
	sz2 = size_string(s2);

	if (n >= sz2)
		n = sz2;
	else
		n++;
	szt = sz1 + n - 1;

	s = malloc(sizeof(char) * (szt));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < (sz1 - 1); i++)
		s[i] = s1[i];
	for (i = (sz1 - 1), j = 0; i < (szt - 1); i++)
	{
		s[i] = s2[j];
		j++;
	}
	s[i] = '\0';

	return (s);
}
