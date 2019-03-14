#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
 * main - recieve the args
 * @argc: the amount of args
 * @argv: the array of args
 * Return: 0 if false, something else otherwise.
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	char *p;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	i = atoi(argv[1]);
	j = atoi(argv[3]);
	p = argv[2];

	if (get_op_func(p) != NULL)
	{
		printf("%d\n", get_op_func(p)(i, j));
	}
	else
	{
		exit(99);
	}
	return (0);
}
