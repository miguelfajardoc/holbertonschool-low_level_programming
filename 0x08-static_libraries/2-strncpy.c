#include "holberton.h"
/**
 * _strncpy - copy a string.
 *
 * @dest: the pointer that point the destinity of the string.
 * @src: the pointer thar point the string origin to be copied.
 * @n: the number of bytes to be copied.
 *
 * Return: return the copy string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && (*(src + i) != '\0'))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
