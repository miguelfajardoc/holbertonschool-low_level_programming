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
	int B = 0;
	int s = 0;
	int i, j;

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
		else
		{
			s = 0;
			i++;
			j = 0;
			B = 0;
		}
	}
	if (s == 0 || needle[j] != '\0')
		return (0);
	else
		return (first);
}
