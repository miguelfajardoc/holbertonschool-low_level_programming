#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * size_string - calculate the size of the string
 * @str: the string that passed
 *
 *Return: the size of the string, within null, if the string is null, return 0;
 */
int size_string(char *str)
{
	int size;

	if (str == NULL)
		return (1);
	for (size = 0; str[size] != '\0'; size++)
		;
	size++;
	return (size);
}
/**
 * argstostr - concatenates an argv array
 * @ac: the amount of argvs
 * @av: the strings
 * Return: the pointer concatenates the strings
 *
 */
char *argstostr(int ac, char **av)
{
	char *c;
	int i = 0;
	int j = 0, k = 0, lng = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		lng += size_string(av[i]);
		i++;
	}
	c = malloc(sizeof(char) * (lng + 1));
	if (c == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			c[k] = av[i][j];
			k++;
			j++;
		}
		if (i + 1 == ac)
		{
			c[k] = '\n';
			c[k + 1] = '\0';
		}
		else
			c[k] = '\n';
		k++;
		i++;
	}
	return (c);
}
