#include "lists.h"
/**
 * dlistint_len - print a double linked list
 * @h: the head of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *aux;
	size_t i = 0;

	aux = h;
	while (aux != NULL)
	{
		aux = aux->next;
		i++;
	}
	return (i);
}
