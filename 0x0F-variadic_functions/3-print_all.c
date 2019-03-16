#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - print strings with a separator
 * @separator: the separator that separates the numbers
 * @n: the number of args.
 */
void printd(int i);
void prints(char *str);
void print_all(const char * const format, ...)
{
	int i;
	ptslt func[]={
		{"c", printc},
		{"i", printi},
		{"f", printfl},
		{"s", prints}
	};

	for (i = 0; format; i++)
	{
		if


	f = prints;
	f(s);
	f = printd;
	f(i);

	return (0);
}
/**
 * printt - check if print string or nill
 * @str - the string to check
 *
 */
void prints(char *str)
{
	printf("%s\n", str);
}
void printd(int i)
{
	printf("%d\n", i);
}
/*
void printfl(float f)
{
	printf("%f\n", f);
}
void printc(char c)
{
	printf("%c\n", c);
	}*/
