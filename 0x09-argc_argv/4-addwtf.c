#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - multiply two numbers that recieves.
 * @argc: the amount of args.
 * @argv: the array that store the arguments.
 * Return: if two numbers are not given return 1, otherweise 0.
 */
int isnumber(char *s);
int main(int argc, char *argv[])
{
	int j;
	int sum = 0;

	for (j = 1; j < argc; j++)
	{
		if (isnumber(argv[j]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[j]);
	}
	printf("%d", sum);
	return (0);
}
/**
 * isnumber - multiply two numbers that recieves.
 * @s: the string to look.
 *
 * Return: 1 if just a number, 0 otherwise.
 */
int isnumber(char s[10])
{
	int i = 0;

	while (*s != 32)
	{

		if (s[i] >= 0 && s[i] <= 100)
		{
			printf("%c\n", s[i]);
			i++;
		}
		else
		{
			printf("char not number");
			return (0);
		}
	}
	return (1);
}
