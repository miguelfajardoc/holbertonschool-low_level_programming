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
	int i = 0;

	for (a = 'a'; a <= 'z'; ++a)
	{
		putchar(a);
		i++;
	}
	putchar('\n');
	return (0);
}
