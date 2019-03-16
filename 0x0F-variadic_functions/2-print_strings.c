#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - print strings with a separator
 * @separator: the separator that separates the numbers
 * @n: the number of args.
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list vlist;
	unsigned int i;
	char *p;

	va_start(vlist, n);

	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
		{
			p = va_arg(vlist, char*);
			printt(p);
		}
	}
	else
	{
		for (i = 0; i < n - 1; i++)
		{
			p = va_arg(vlist, char*);
			printt(p);
			printf("%s", separator);
		}
		printt(va_arg(vlist, char*));
	}
	va_end(vlist);
	printf("\n");
}
/**
 * printt - check if print string or nill
 * @str: the string to check
 *
 */
void printt(char *str)
{
	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
}
