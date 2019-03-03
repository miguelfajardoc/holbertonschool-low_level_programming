#include <stdio.h>
/**
 * main - print the arguments that receives
 * @argc: the amount of args.
 * @argv: the array that store the arguments.
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
