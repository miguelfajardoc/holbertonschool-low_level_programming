#include <stdio.h>
/**
 * main - print the name of the program with argv and argc
 * @argc: the amount of args.
 * @argv: the array that store the arguments.
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	argc -= argc;
	printf("%s\n", argv[argc]);

	return (0);
}
