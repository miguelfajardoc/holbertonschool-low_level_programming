#include "holberton.h"
#include <stdio.h>
/**
 * main - print greatest prime number of a number of 612852475143
 * @n: the given number
 * Return: Always 0.
 */
int prime(long n);
int main(void)
{
	long num = 612852475143;

	printf("%d", prime(num));
	printf("\n");

	return (0);
}
/**
 * prime - found the greatest prime divisor number of a given number
 * @n: the given number
 * Return: the greatest prime divisor number
 */
int prime(long n)
{
	long i = 2;

	while (i < n)
	{
		if ((n % i) == 0)
			n /= i;
		else
			i++;
	}
	return (n);
}
