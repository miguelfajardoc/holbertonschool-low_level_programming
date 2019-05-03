#include "lists.h"
/**
 * print_dlistint - print a double linked list
 * @h: the head of the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *aux;
	size_t i = 0;
	aux = h;

	while (aux != NULL)
	{
		printf("%d\n", aux->n);
		aux = aux->next;
		i++;
	}
	return(i);
}
