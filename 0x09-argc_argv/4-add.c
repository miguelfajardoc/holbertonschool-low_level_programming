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
	int j;
	int i;
	int sum = 0;

	printf("argc%d\n", argc);

	for (j = 1; j < argc; j++)
	{
		if (argc <= 2)
		{
			printf("Error\n");
			return (1);
		}
		else
			for (i = 0; argv[j][i] != '\0' ; i++)
			{
				if (argv[j][i] >= '0' && argv[j][i] <= '9')
					;
				else
				{
					printf("Error\n");
					return (1);
				}
			}

		sum += atoi(argv[j]);
	}
	printf("%d\n", sum);
	return (0);
}
