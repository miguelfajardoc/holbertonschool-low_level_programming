#include "lists.h"
/**
 * sum_dlistint - sum all elements of the list
 * @head: the head of the list
 * Return: the sum of the elements
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *aux;
	int sum = 0;

	aux = head;
	while (aux != NULL)
	{
		sum += aux->n;
		aux = aux->next;
	}

	return (sum);
}
