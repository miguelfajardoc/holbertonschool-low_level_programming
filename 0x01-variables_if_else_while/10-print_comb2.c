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

	char i;
	char j;

	for (i = 48 ; i <= 57 ; ++i)
	{
		for (j = 48 ; j <= 57 ; j++)
		{
		putchar(i);
		putchar(j);

		if (i == 57 && j == 57)
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
