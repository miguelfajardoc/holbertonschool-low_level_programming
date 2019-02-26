#include "holberton.h"
#include <stdio.h>
/**
 * _strstr - found a substring.
 * @haystack: the string to search.
 * @needle: the substring to found.
 * Return: the pointer that point the beggining of substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *first;
	int B = 0, s = 0, i = 0, j = 0;

	if ( needle[j] == '\0')
		return (first = (haystack + i));
	while (haystack[i] != '\0' && needle[j] != '\0')
	{
		if (needle[j] == haystack[i] && B == 0)
		{
			s++;
			i++;
			j++;
			B = 1;
			first = haystack + i - 1;
		}
		else if (needle[j] == haystack[i])
		{
			s++;
			j++;
			i++;
		}
		else if (s > 0)
		{
			s = 0;
			j = 0;
			B = 0;
		}
		else
		{
			s = 0;
			j = 0;
			B = 0;
			i++;
		}
	}
	if (s == 0 || needle[j] != '\0')
		return (0);
	else
		return (first);
}
