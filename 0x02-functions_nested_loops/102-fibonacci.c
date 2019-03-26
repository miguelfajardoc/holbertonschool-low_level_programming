#include "holberton.h"
#include <stdio.h>
/**
 * main - print the 50 fibonacci numbers
 *
 * Return: always 0
 */
int main(void)
{
	long int i = 0;
	long int x = 1;
	long int y = 0;
	long int n = 0;

	while (i < 50)
	{
		n = x + y;
		printf("%ld", n);
		y = x;
		x = n;
		i++;
		if (i < 50)
			printf(", ");
	}
	printf("\n");
	return (0);
}
