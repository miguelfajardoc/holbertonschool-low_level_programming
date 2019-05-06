#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a node in the fiven index
 * @h: the head of the list
 * @idx: the index of the list where the new node sould be added
 * @n: the data of the new node
 * Return: the address of the new node or NULL if not is posible add
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *aux;
	dlistint_t *new;

	aux = *h;
	if (idx == 0)
		return (add_dnodeint(h, n));
	aux = get_dnodeint_at_index(*h, idx);
	if (aux == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = aux;
	new->prev = aux->prev;
	aux->prev = new;
	aux = new->prev;
	aux->next = new;
	return (new);
}
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
