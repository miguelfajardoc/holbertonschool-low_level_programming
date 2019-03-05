#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - create a copy of string recived as a parameter
 * @str: the string to copy
 *
 * Return: the pointer that point to the array created.
 */
char *_strdup(char *str)
{
	char *p;
	int i;
	int size;

	if (str == NULL)
		return (NULL);
	for (size = 0; str[size]; size++)
		;

	p = malloc(sizeof(char) * size);
	if (p == NULL)
		return (NULL);

	for (i = 0; i <= size; i++)
		p[i] = str[i];

	return (p);
}
