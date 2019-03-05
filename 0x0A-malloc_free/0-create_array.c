#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - create an array with a given size
 * @size: the size of the array to create
 * @c: the char to create a array
 * Return: the pointer that point to the array created.
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);

	p = malloc(sizeof(char) * size);
	if (p == null)
		return (NULL);
	for (i = 0; i < size; i++)
		p[i] = c;

	return (p);
}
