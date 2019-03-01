#include "holberton.h"
/**
 * _memset - fill memory space with a constant byte.
 * @s: the memory area to fill.
 * @b: the byte to be the fill.
 * @n: the amount of bytes to fill.
 * Return: A pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
