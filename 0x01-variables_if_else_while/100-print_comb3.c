#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 Success
 *
 * Description: this program print the alphabet
 */
int main(void)
{

	int i;
	int j;
	int a = 48;
	int b = 49;

	for (i = a ; i <= 57 ; ++i)
	{
		for (j = b ; j <= 57 ; j++)
		{
		putchar(i);
		putchar(j);

		if (j == 57)
		{
			a++;
			b++;
		}
		if (i == 56 && j == 57)
		{
		}
		else
		{
			putchar(44);
			putchar(32);
		}
		}
	}
	putchar('\n');
	return (0);
}
