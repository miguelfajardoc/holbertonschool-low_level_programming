#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint_end - add a node to the end of the list
 * @head: the pointer to the list
 * @n: the data of the list
 * Return: the number of nodes
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *last;

	last = *head;
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->n = n;
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
