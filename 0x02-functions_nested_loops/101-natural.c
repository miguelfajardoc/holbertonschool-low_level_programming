#include <stdio.h>
/**
 * main - prints sum of natural numbers less than 1024\
 *
 * Description: sum the numbers multiples of 3 and 5
 * Return: if no error, always 0
 */

int main(void)
{

	int n = 0;
	int sum = 0;

	while (n < 1024)
	{
		n += 1;

		if (n % 3 == 0 || n % 5 == 0)
			sum += n;

	}

	printf("%d\n", sum);

	return (0);
}
