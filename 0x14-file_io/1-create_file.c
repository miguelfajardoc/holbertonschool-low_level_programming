#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"
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
	f_des = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
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
