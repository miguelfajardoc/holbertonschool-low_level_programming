#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_all - print strings with a separator
 * @format: the format to print
 */
void print_all(const char * const format, ...)
{
	va_list vlist;
	unsigned int j = 0;
	unsigned int i = 0;
	ptslt fun[] = {
		{'s', prints},
		{'i', printd},
		{'f', printfl},
		{'c', printc}
	};
	va_start(vlist, format);
	while (format != NULL && *(format + i) != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (*(format + i) == fun[j].a)
			{
				fun[j].f(vlist);
				if (*(format + i + 1) != '\0')
					printf(", ");
			}
			j++;
		}
		i++;

	}
	va_end(vlist);
	printf("\n");
}
/**
 * prints - print a string with printf
 * @vlist: the string to print
 *
 */
void prints(va_list vlist)
{
	char *p;

	p = va_arg(vlist, char*);
	switch (!p + 0)
	{
	case '0':
		printf("%p", p);
		break;
	default:
		printf("%s", p);
		break;
	}
}
/**
 * printd - print a integer with printf
 * @vlist: the integer to print
 *
 */
void printd(va_list vlist)
{
	printf("%d", va_arg(vlist, int));
}
/**
 * printfl - print a integer with printf
 * @vlist: the float to print
 *
 */
void printfl(va_list vlist)
{
	printf("%f", va_arg(vlist, double));
}
/**
 * printc - print a char with printf
 * @vlist: the char to print
 *
 */
void printc(va_list vlist)
{
	printf("%c", va_arg(vlist, int));
}
