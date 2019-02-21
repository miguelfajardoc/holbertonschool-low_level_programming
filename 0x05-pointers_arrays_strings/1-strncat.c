#include "holberton.h"
/**
 * _strncat - concatenate two strings depending n.
 *
 * @dest: the pointer that point the destinity of the strings concatenated.
 * @src: the pointer thar point the string origin to be copied.
 * @n: the number of bytes to be copied.
 *
 * Return: return the concatenated string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int l = 0;
	int i = 0;

	while (*(dest + l) != 0)
		l++;

	while (!(!(n != 0) || !(*(src + i) != 0)))
	{
		*(dest + l) = *(src + i);
		l++;
		i++;
		n--;
	}
	return (dest);
}
