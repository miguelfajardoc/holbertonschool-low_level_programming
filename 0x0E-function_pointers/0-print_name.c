#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - print a name depending is an uppercase o or normal
 * @name: name of the person
 * @f: the function pointer to call a function to print the name
 */
void print_name(char *name, void (*f)(char *))
{
	 f(name);
}
