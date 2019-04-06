#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"
/**
 * main - the cp function
 * @ac: number of args
 * @av: files to copy
 * Return: 1 if works, erros with exits if fails.
 */
int main(int ac, char **av)
{
	int fd_from, fd_to, buff = 1;
	char buffer[1024] = {0};

	if (ac != 3)
	{	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(av[1], O_RDONLY);
	if (fd_from < 0)
	{	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd_to = open(av[2], O_WRONLY | O_TRUNC);
	if (fd_to < 0)
	{	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
		if (fd_to < 0)
		{	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	while (buff > 0)
	{	buff = read(fd_from, buffer, 1024);
		if (buff == -1)
		{	dprintf(STDERR_FILENO, "Error: Can't read from %s\n", av[1]);
			exit(98);
		}
		if (write(fd_to, buffer, buff) < 0)
		{	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	if (close(fd_from) > 0)
	{	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) > 0)
	{	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
/**
 * _strlen - find the size of a string.
 *
 * @s: the string to count
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int l;

	for (l = 0; *s != 0; s++)
		l++;
	return (l);
}
