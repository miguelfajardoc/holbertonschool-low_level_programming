#include <stdlib.h>
#include <stdio.h>
/**
 * size_string - calculate the size of the string
 * @str: the string that passed
 *
 *Return: the size of the string, if the string is null, return 0;
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
 * str_concat - concatenate two functions
 * @s1: the first string to concatenate
 * @s2: the second string to concatenate
 * Return: the pointer to strings concatenated. If NULL is passed, treat it as
 * empty string. the function should return NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	int i;
	int j = 0;
	int sz1;
	int sz2;
	int szt;

	sz1 = size_string(s1);
	sz2 = size_string(s2);
	szt = sz1 - 1 + sz2;
	p = malloc(sizeof(char) * szt);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < (sz1 - 1); i++)
		p[i] = s1[i];
	for (i = (sz1 - 1); i < (szt - 1); i++)
	{
		p[i] = s2[j];
		j++;
	}
	p[i] = '\0';

	return (p);
}
