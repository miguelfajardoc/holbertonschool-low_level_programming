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

	char a;

	for (a = 'z'; a >= 'a'; --a)
	{
		putchar(a);

	}
	putchar('\n');
	return (0);
}
