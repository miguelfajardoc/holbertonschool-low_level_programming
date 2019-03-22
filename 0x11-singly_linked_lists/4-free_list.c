#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_list - free all the memory of a list
 * @head: the pointer to the list
 *
 */
void free_list(list_t *head)
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
