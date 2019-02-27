#include "holberton.h"

/**
 * _puts_recursion - prints a string with puts with recursion
 *
 * @s: the char to print.
 */
void _puts_recursion(char *s)
{
	if (s[0] == '\0')
        {
                _putchar('\n');
                return;
        }
        _putchar(s[0]);
        _puts_recursion(s + 1);

}
