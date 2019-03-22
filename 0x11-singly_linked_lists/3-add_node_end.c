#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end - add a node to the end of the list
 * @head: the pointer to the list
 * @str: the data of the list
 * Return:  the number of nodes
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *last;

	last = *head;
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(temp);
		free(temp->str);
		return (NULL);
	}
	temp->len = _strlen(temp->str);
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
		return (*head);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = temp;
	return (*head);
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
