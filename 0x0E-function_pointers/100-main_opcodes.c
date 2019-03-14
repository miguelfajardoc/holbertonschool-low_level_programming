#include <stdio.h>
#include <stdlib.h>
/**
 * main - recieve the args
 * @argc: the amount of args
 * @argv: the array of args
 * Return: 0 if false, something else otherwise.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
		return (0);
}
