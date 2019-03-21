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
size_t print_list(const list_t *h)
{
	int n_node = 0;

	if (h != NULL)
	{
		if (h->str == NULL)
			printf("[%u] %p\n", h->len, h->str);
		else
			printf("[%u] %s\n", h->len, h->str);
		if (h->next != NULL)
			n_node = print_list(h->next);
		n_node++;
	}
	return (n_node);
}
