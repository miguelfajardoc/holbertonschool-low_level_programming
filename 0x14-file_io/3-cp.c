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
	int fd_from, fd_to;
	int check;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(av[1], O_RDONLY);
	if (fd_from < 0)
	{
		dprintf(2, "Can't read from file %s\n", av[1]);
		exit(98);
	}
	check = read(fd_from, buffer, 1024);
	if (check < 0)
	{
		dprintf(2, "Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd_to = open(av[2], O_RDONLY);
	check = create_file(av[2], buffer);
	if (check < 0)
	{
		dprintf(2, "Can't write to file %s\n", av[2]);
		exit(99);
	}
	if (close(fd_from) < 0)
	{
		dprintf(2, "Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) < 0)
	{
		dprintf(2, "Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
/**
 * create_file - create or rewrite a file with a content
 * @filename: the name of the file
 * @text_content: the text to create qhe file
 * Return: Always the amount of letters printed.
 */
int create_file(const char *filename, char *text_content)
{
	int state = 0;
	int f_des = 0;

	if (filename == NULL)
		return (-1);
	f_des = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (f_des < 0)
		return (-1);
	if (text_content == NULL)
	{
		close(f_des);
		return (1);
	}
	state = write(f_des, text_content, _strlen(text_content));
	if (state < 0)
		return (-1);
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
