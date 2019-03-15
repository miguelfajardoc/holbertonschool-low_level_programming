#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum all the numbers that put in the functions
 * @n: the number of numbers to sum
 *
 * Return: the sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list vlist;
	int sum = 0;
	unsigned int i;

	va_start(vlist, n);
	for (i = 0; i < n; i++)
		sum += va_arg(vlist, int);

	va_end(vlist);

	return (sum);
}
