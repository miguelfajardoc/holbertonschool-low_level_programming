#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - insert a node depending of a index
 * @head: the pointer to the list
 * @index: the index to the node to delete
 * Return: the number of elements of the list
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *aux;
	listint_t *del;

	if (index == 0)
	{
		if (*head == NULL)
			return (-1);
		del = *head;
		*head = (*head)->next;
	}
	else
	{
		aux = get_nodeint_at_index(*head, index - 1);
		if (aux == NULL)
			return (-1);
		del = aux->next;
		aux->next = (aux->next)->next;
	}
	free(del);
	return (1);
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
