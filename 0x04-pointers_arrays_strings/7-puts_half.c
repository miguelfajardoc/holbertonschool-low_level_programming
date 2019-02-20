#include "holberton.h"
/**
 * puts_half - prints the second half of a string.
 *
 * @str: the string to print.
 *
 */
void puts_half(char *str)
{
	int l;
	int n;
	char *p;

	p = str;
	for (l = 0; *str != '\0'; str++)
		l++;
	n = ((l) / 2);
	str = p;
	str += n;

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
