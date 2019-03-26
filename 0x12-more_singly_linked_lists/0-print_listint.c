#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * print_listint - print a list
 * @h: the pointer to the list
 *
 * Return: the number of elements of the list
 */
size_t print_listint(const listint_t *h)
{
	int n = 0;

	if (h != NULL)
	{
		printf("%d\n", h->n);
		if (h->next == NULL)
			return (++n);
		n = print_listint(h->next);
		return (++n);
	}
	return (n);
}
