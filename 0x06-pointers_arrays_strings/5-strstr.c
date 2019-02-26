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
	int f = 0;
	int st = 0;
	int i;
	int j;

	for (i = 0; needle[i] ; i++)
	{
		for (j = 0; haystack[j]; j++)
		{
			if (needle[i] == haystack[j] && f != 0)
			{
				st++;
				printf("st");
				break;
			}
			else if (needle[i] == haystack[j])
			{
				f = 1;
				first = haystack + j;
				printf("f");
				break;
			}
			else
			{
				st = 0;
				f = 0;
			}
			printf("in");
		}
		if (haystack[j] == '\0' && needle[i + 1] == '\0' && st > 0)
			return (first);
		printf("out");
	}
	printf("aa");
	return (0);
}
