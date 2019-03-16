#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - print numbers with a separator
 * @separator: the separator that separates the numbers
 * @n: the number of args.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vlist;
	unsigned int i;

	va_start(vlist, n);
	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
		printf("%d", va_arg(vlist, int));
	}
	else
	{
		for (i = 0; i < n - 1; i++)
		printf("%d%s", va_arg(vlist, int), separator);
		printf("%d", va_arg(vlist,int));
	}
	va_end(vlist);
	printf("\n");
}
