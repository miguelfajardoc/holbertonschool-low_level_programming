#include "holberton.h"
#include <stdio.h>
/**
 * set_string - sets the value of a pointer to a char.
 * @s: double pointer to point the pointer of first string.
 * @to: pointer to point the secont string.
 *
 */
void set_string(char **s, char *to)
{
	*s = to;

}
