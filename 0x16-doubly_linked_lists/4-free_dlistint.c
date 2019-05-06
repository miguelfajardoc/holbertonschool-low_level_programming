#include "lists.h"
/**
 * free_dlistint - free a double linked list
 * @head: the head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	while (head != NULL)
	{
		aux = head;
		head = aux->next;
		if (head != NULL)
			head->prev = NULL;
		free(aux);
	}
}
