#include "lists.h"
/**
 * get_dnodeint_at_index - get a node depend of a given index
 * @head: the head of the list
 * @index: the index
 * Return: the addres of the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *aux;
	unsigned int i = 0;

	aux = head;
	while (aux != NULL && index != i)
	{
		aux = aux->next;
		i++;
	}
	if (aux == NULL)
		return (NULL);

	return (aux);
}
