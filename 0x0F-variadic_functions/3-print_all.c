#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - print strings with a separator
 * @separator: the separator that separates the numbers
 * @n: the number of args.
 */
void print_all(const char * const format, ...)
{
	va_list vlist;
	unsigned int j = 0;
	unsigned int i= 0;
	ptslt fun[] = {
		{'s', prints},
		{'i', printd},
		{'f', printfl},
		{'c', printc}
	};
	va_start(vlist, format);
	while (*(format + i) != '\0')
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
	printf("\n");
	va_end(vlist);
}
/**
 * prints - check if print string or nill
 * @str - the string to check
 *
 */
void prints(va_list vlist)
{
	char *p;

	p = va_arg(vlist, char*);
	switch (!p + 0)
	{
	case 0:
		printf("%p", p);
		break;
	default :
		printf("%s", p);
		break;
	}
}
void printd(va_list vlist)
{
	printf("%d", va_arg(vlist, int));
}
void printfl(va_list vlist)
{
	printf("%f", va_arg(vlist, double));
}
void printc(va_list vlist)
{
	printf("%c", va_arg(vlist, int));
}
