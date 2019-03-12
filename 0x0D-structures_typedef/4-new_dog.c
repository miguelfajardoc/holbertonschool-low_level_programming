#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * size_string - calculate the size of the string
 * @str: the string that passed
 *
 *Return: the size of the string, within null, if the string is null, return 0;
 */
char *_strdup(char *str);
int size_string(char *str)
{
	int size;

	if (str == NULL)
		return (1);
	for (size = 0; str[size] != '\0'; size++)
		;
	size++;
	return (size);
}
/**
 * _strdup - create a copy of string recived as a parameter
 * @str: the string to copy
 *
 * Return: the pointer that point to the array created.
 */
char *_strdup(char *str)
{
	char *p;
	int i;
	int size;

	if (str == NULL)
		return (NULL);
	size = size_string(str);
	p = malloc(sizeof(char) * size);
	if (p == NULL)
	{
		free(str);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		p[i] = str[i];

	return (p);
}
/**
 * new_dog - create a new dog structure.
 * @name: pointer to the name
 * @age: the age
 * @owner: the owner
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	char *nomb;
	char *own;

	nomb = _strdup(name);
	if (nomb == NULL)
		return (NULL);
	own = _strdup(owner);
	if (own == NULL)
	{
		free(nomb);
		return (NULL);
	}
	new = malloc(sizeof(dog_t));
	if (new == NULL)
	{
		free(own);
		free(nomb);
		free(new);
		return (NULL);
	}

	new->name = nomb;
	new->age = age;
	new->owner = own;
	return (new);
}
