#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - print strings with a separator
 * @separator: the separator that separates the numbers
 * @n: the number of args.
 */
int main()
{
	char* s = "some";
	int i= 666;
	float fl = 8.9;
	char c = 'c';
	ptslt fun[] = {
		{'s', prints},
		{'i', printd},
		{'f', printfl},
		{'c', printc}
	};
	fun[0].f = prints;
	fun[0].f(s);
	fun[1].f = printd;
	fun[1].f(i);
	fun[2].f = printfl;
	fun[2].f(fl);
	fun[3].f = printc;
	fun[3].f(c);
	return (0);
}
/**
 * prints - check if print string or nill
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
void printfl(float f)
{
	printf("%f\n", f);
}
void printc(char c)
{
	printf("%c\n", c);
}
