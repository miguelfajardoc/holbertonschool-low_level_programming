#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply two numbers that recieves.
 * @argc: the amount of args.
 * @argv: the array that store the arguments.
 * Return: if two numbers are not given return 1, otherweise 0.
 */
int main(int argc, char *argv[])
{

	if (argc == 3)
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	else
	{	printf("Error\n");
		return (1);
	}
	return (0);
}
