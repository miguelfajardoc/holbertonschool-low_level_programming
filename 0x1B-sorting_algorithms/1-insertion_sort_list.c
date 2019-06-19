#include "sort.h"

/**
 * insert_node - Function insert node i after a j node.
 * @head: Pointer to first node in the list
 * @aux: Pointer to the node to insert.
 * @j: Pointer node to insert.
 */
void insert_node(listint_t **head, listint_t *aux, listint_t *j)
{
	if (aux->next != NULL)
		(aux->next)->prev = j;

	j->next = aux->next;
	aux->prev = j->prev;
	(aux->next) = j;
	if (j->prev != NULL)
		(j->prev)->next = aux;
	if (j == *head)
		*head = aux;
	j->prev = aux;
}

/**
 * insertion_sort_list - Function insert a node i after a j node.
 * @list: pointer to list.
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *j;
	listint_t *i;
	listint_t *aux;

	if (list == NULL || *list == NULL)
		return;

	j = *list;
	i = (*list)->next;
	aux = i;

	while (i != NULL)
	{
		j = i->prev;
		while (j != NULL && aux->n < j->n)
		{
			insert_node(list, aux, j);
			print_list(*list);
			j = aux->prev;
		}
		i = i->next;
		aux = i;
	}
}
