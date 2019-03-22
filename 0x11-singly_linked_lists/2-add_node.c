#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node - add a node to the top of the list
 * @head: the pointer to the list
 * @str: the data of the list
 * Return:  the number of nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(temp->str);
		return (NULL);
	}
	temp->len = _strlen(temp->str);
	temp->next = *head;

	return ((*head) = temp);
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
