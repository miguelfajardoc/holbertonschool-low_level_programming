#include "holberton.h"
#include <stdio.h>
/**
 * main - print numbers from 1 to 100 buzzing in multiples of three and five
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;

	for (n = 0; n <= 100 ; n++)
	{
		if ((n % 3) == 0 && (n % 5) == 0)
			printf("FizzBuzz ");
		else if ((n % 3) == 0)
			printf("Fizz ");
		else if ((n % 5) == 0)
			printf("Buzz ");
		else
			printf("%d ", n);
	}
	printf("\n");

	return (0);
}
