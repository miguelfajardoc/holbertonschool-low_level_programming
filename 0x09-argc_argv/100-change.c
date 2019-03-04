#include <stdio.h>
#include <stdlib.h>
/**
 * main - found the minimun number of coins for a cuantiti.
 * @argc: the amount of args.
 * @argv: the array that store the arguments.
 * Return: if the number of arguments pass its not 1, print error and return
 * 1.If the number is negative, print 0.
 */
int main(int argc, char *argv[])
{
	int typecoins[] = {25, 10, 5, 2, 1};
	int coins = 0;
	int x = 0;
	int money;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);
	while (x < 5)
	{
		if (money <= 0)
		{
			printf("%d\n", coins);
			return (0);
		}
		else if (money >= typecoins[x])
		{
			coins++;
			money -= typecoins[x];
		}
		else
			x++;
	}

	return (0);
}
