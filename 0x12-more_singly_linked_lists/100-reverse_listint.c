#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * reverse_listint - reverse a list
 * @head: the pointer to point the first member of a list
 *
 * Return: Always 0.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *aux = NULL;
	listint_t *aux2 = NULL;
	*head = rev_list(head, aux, aux2);
	return (*head);
}
/**
 * rev_list - reverse a list with recursion
 * @head: the pointer to point the first member of a list
 * @aux: the auxiliar 1
 * @aux2: the auxiliar 2
 * Return: Always 0.
 */
listint_t *rev_list(listint_t **head, listint_t *aux, listint_t *aux2)
{
	if (*head != NULL)
	{
		aux2 = (*head)->next;
		(*head)->next = aux;
		aux = *head;
		(*head) = aux2;
		aux = rev_list(head, aux, aux2);
	}
	return (aux);
}
