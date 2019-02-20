#include "holberton.h"
#include <stdio.h>
/**
 * rev_string - reverse a string.
 *
 * @s: the string to reverse.
 *
 */
void rev_string(char *s)
{
	char *r;
	/*char *n;*/

	/*n = s;*/

	while (*s != '\0')
	{
		r = *s;
		s++;
		*r++;

		}
	/*s = n;*/
	while (*s != '\0')
	{
		*s = r;
		*r--;
		s++;
		}*/
	printf("ok %i", *s);
}
