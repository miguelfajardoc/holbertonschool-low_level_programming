#include "lists.h"
/**
 * int delete_dnodeint_at_index - delete a node in the given index
 * @head: the head of the list
 * @index: the index of the list where the new node sould be deleted
 * Return: the address of the new node or NULL if not is posible add
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		if ((*head)->next != NULL)
		{
			aux = *head;
			*head = (*head)->next;
			aux->next = NULL;
			(*head)->prev = NULL;
		}
		else
		{
			aux = *head;
			*head = NULL;
		}
	}
	else
	{
		aux = get_dnodeint_at_index(*head, index);
		if (aux == NULL)
			return (-1);
		(aux->prev)->next = aux->next;
		aux->next = aux->prev;
	}
	free(aux);
	return (1);
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
