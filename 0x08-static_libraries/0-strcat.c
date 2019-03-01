#include "holberton.h"
/**
 * _strcat - concatenate two strings
 *
 * @dest: the pointer that point the destinity of the strings concatenated.
 * @src: the pointer thar point the string origin to be copied.
 *
 * Return: return the concatenated string.
 */
char *_strcat(char *dest, char *src)
{
	int p = 1;
	int i = 0;
	int l = 0;

	while (*(dest + l) != '\0')
	{
		l++;
	}

	while (p)
	{
		if (*(src + i) == '\0')
		{
			*(dest + l) = *(src + i);
			p--;
		}
		else
			*(dest + l) = *(src + i);
		i++;
		l++;
	}

	return (dest);
}
