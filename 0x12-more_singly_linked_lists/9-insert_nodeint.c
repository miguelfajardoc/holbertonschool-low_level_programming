#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - insert a node depending of a index
 * @head: the pointer to the list
 * @idx: the node to get
 * @n: the contenct of the new node
 * Return: the number of elements of the list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *aux;
	listint_t *new;

	if (idx == 0)
	{
		*head = add_nodeint(head, n);
		return (*head);
	}
	else
		aux = get_nodeint_at_index(*head, idx - 1);
	if (aux == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = aux->next;
	aux->next = new;
	return (new);
}
/**
 * get_nodeint_at_index - count the amount of members in a list
 * @head: the pointer to the list
 * @index: the node to get
 * Return: the number of elements of the list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;

	if (head != NULL)
	{
		if (n != index)
		{
			head = get_nodeint_at_index(head->next, --index);
		}
		return (head);
	}
	return (NULL);
}
/**
 * add_nodeint - add a member ad beggining of a list
 * @head: the pointer to the list
 * @n: the content of the structure
 * Return: the pointer to the head of the list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
