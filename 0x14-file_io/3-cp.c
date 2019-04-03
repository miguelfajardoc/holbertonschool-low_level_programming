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
	int fd_from, fd_to, check;
	char buffer[3500] = {0};

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(av[1], O_RDONLY);
	if (fd_from < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	check = read(fd_from, buffer, 1024);
	if (check < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd_to = open(av[2], O_RDONLY);
	if (fd_to < 0)
		check = create_file2(av[2], buffer, 1);
	else
		check = create_file2(av[2], buffer, 0);
	if (check < 0)
	{
		if (fd_to != -1)
			close(fd_to);
		dprintf(2, "Error: Can't write to file %s\n", av[2]);
		exit(99);
	}
	if (close(fd_from) < 0)
	{
		dprintf(2, "Can't close fd %d\n", fd_from);
		exit(100);
	}
	return (0);
}
/**
 * create_file2 - create or rewrite a file with a content
 * @filename: the name of the file
 * @buffer: the text to create qhe file
 * @flag: if is 1, create a file with permision, if is 0, open without perms
 * Return: Always the amount of letters printed.
 */
int create_file2(const char *filename, char *buffer, int flag)
{
	int state = 0;
	int f_des = 0;

	if (filename == NULL)
		return (-1);
	if (flag == 1)
		f_des = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	else
		f_des = open(filename, O_WRONLY | O_TRUNC);
	if (f_des < 0)
	{
		close(f_des);
		return (-1);
	}
	if (buffer == NULL)
	{
		close(f_des);
		return (1);
	}
	state = write(f_des, buffer, _strlen(buffer));
	if (state < 0)
	{
		close(f_des);
		return (-1);
	}
	return (1);

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
