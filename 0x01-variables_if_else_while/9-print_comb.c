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

	int a = 48;

	do {
	putchar(a);
		if (a == 57)
		{
		}
		else
		{
			putchar(44);
			putchar(32);
		}
	a++;

	} while (a < 58);
	putchar('\n');
	return (0);
}
