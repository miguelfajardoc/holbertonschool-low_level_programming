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
	unsigned int i;

	if (str == NULL)
		return (NULL);

	p = malloc(sizeof(char) * sizeof(str));
	printf("%ld\n", sizeof(str));
	if (p == NULL)
		return (NULL);

	for (i = 0; i <= (sizeof(str) + 1); i++)
		p[i] = str[i];

	return (p);
}
