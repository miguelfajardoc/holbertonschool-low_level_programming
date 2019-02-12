#include "holberton.h"
/**
 * print_alphabet_10x - this function print the alphabet in lowercase 10 times
 * Description: using a ford nested
 */
void print_alphabet_x10(void)
{
	int letra;
	int i;

	for (i = 0; i< 10 ; i++)
	{
		for (letra = 'a'; letra <= 'z' ; letra++)
		{
			_putchar(letra);
		}
		_putchar('\n');
	}
}
