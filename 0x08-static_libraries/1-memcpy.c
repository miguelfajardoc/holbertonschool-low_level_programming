#include "holberton.h"
#include <stdio.h>
/**
 * _memcpy - copy memory space from src to dest.
 * @dest: the memory area to recived copied data.
 * @src: the memory area to be copied.
 * @n: the amount of bytes to copy.
 * Return: A pointer to the memory area dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
