#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - create an array with a given size
 * @size: the size of the array to create
 * @char: the char to create a array
 * Return: the pointer that point to the array created.
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
		p[i] = c;

	return (p);
}
