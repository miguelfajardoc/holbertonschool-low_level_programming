#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"
/**
 * read_textfile - read a text, and print depend of a quantity of letters
 * @filename: the path name of the file to print
 * @letters: the amount of letters to print
 * Return: Always the amount of letters printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int tam;
	int f_des;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	f_des = open(filename, O_RDONLY);
	if (f_des < 0)
	{
		free(buffer);
		return (0);
	}
	tam = read(f_des, buffer, letters);
	if (tam < 0)
	{
		free(buffer);
		close(f_des);
		return (0);
	}
	if (write(STDOUT_FILENO, buffer, tam) < 0)
	{
		free(buffer);
		close(f_des);
		return (0);
	}
	close(f_des);
	free(buffer);
	return (tam);
}
