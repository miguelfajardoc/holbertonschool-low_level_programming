#include <stdio.h>
#include "holberton.h"
/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if is big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int x = 0x123456;
	char *c = (char *) &x;

	if (*c == 0x56)
		return (1);
	else
		return (0);
}
