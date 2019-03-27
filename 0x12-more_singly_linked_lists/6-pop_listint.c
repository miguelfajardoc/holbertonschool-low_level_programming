#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - pop the head of the list
 * @head: the pointer to point the pointer of the list
 * Return: Always 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *aux;
	int h_n = 0;

	if (*head != NULL)
	{
		h_n = (*head)->n;
		aux = *head;
		*head = (*head)->next;
		free(aux);
	}
	return (h_n);
}
