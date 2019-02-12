#include "holberton.h"
/**
 * print_alphabet - this function print the alphabet in lowercase
 * Description: using a ford
 */
void print_alphabet(void)
{
	char letra;


	for (letra = 'a'; letra <= 'z' ; letra++)
		_putchar(letra);

	_putchar('\n');

}
