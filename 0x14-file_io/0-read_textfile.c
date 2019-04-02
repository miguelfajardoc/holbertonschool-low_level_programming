#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
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
		free (buffer);
		return (0);
	}
	f_des = open(filename, O_RDONLY);
	if (f_des < 0)
	 	return (0);
	tam = read(f_des, buffer, letters);
	if (tam < 0)
	{
		close(f_des);
		return (0);
	}
	if (write(1, buffer, tam) < 0)
	{
		close(f_des);
		return (0);
	}
	close(f_des);
	return (tam);
}
