#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - calculate the size of the string
 * @nmemb: the string that passed
 * @size: size
 *
 * Return: size of the string, within null, if the string is null, return 0;
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *m;
	unsigned int i;
	unsigned int mult;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mult = nmemb * size;
	m = malloc(mult);
	if (m == NULL)
		return (NULL);
	for (i = 0; i < mult ; i++)
		m[i] = 0;

	return (m);
}
