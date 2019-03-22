#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - This function print all elements of a list
 * @h: the pointer to the list
 *
 * Return:  the number of nodes
 */
size_t list_len(const list_t *h)
{
	int n_node = 0;

	if (h != NULL)
	{
		n_node = list_len(h->next);
		n_node++;
	}
	return (n_node);
}
