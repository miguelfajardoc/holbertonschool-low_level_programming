#include "holberton.h"
/**
 * puts2 - prints a string one caracter of two, starting with the first.
 *
 * @str: the string to print.
 *
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str ++;
		if(*str == '\0')
			;
		else
			str++;
	}
	_putchar('\n');
}
