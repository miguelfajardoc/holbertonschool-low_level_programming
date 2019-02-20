#include "holberton.h"
#include <stdio.h>
/**
 * _strcpy - copy the content of the string pointed to the buffer pointedby dest
 *
 * @dest: the pointer that point the destinity of the string copied.
 * @src: the pointer thar point the string origin to be copied.
 *
 */
char *_strcpy(char *dest, char *src)
{
	int p = 1;
	int i = 0;

	while (p)
	{
		if ( i != 0 && *(dest + (i - 1)) == '\0')
		{
			*(dest + i) = *(src + i);
			p--;
		}
		else
			*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}
