#ifndef VARIADICSF
#define VARIADICSF
#include <stdarg.h>
#include <stdio.h>
void printc(va_list vlist);
void printfl(va_list vlist);
void printd(va_list vlist);
void prints(va_list vlist);
/**
 * struct a - Struct format
 *
 * @a: The format
 * @f: The function to select
 */
typedef struct a
{
	char a;
	void (*f)(va_list);
} ptslt;
void printt(char *str);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
