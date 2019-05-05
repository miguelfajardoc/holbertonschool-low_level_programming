#include "lists.h"
/**
 * add_dnodeint_end - add node at the end of the list
 * @head: the head of the list
 * @n: the data of the node
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *aux;

	aux = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (aux != NULL)
	{
		while (aux->next != NULL)
		{
			aux = aux->next;
		}
		aux->next = new;
	}
	else
		*head = new;
	new->prev = aux;
	new->next = NULL;
	return (new);
}
