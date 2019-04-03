#include <stdio.h>
#include "holberton.h"

/**
 * flip_bits - count the number of bits that would need to flip to form
 * another number
 * @n: the base number
 * @m: the number objetive
 * Return: The number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int aux;
	unsigned int count = 0;

	aux = n ^ m;
	while (aux)
	{
		if (aux & 1)
			count++;
		aux = aux >> 1;
	}
	return (count);
}
