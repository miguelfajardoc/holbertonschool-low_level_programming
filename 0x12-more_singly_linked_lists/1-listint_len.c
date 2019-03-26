#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * listint_len - count the amount of members in a list
 * @h: the pointer to the list
 *
 * Return: the number of elements of the list
 */
size_t listint_len(const listint_t *h)
{
	int n = 0;

	if (h != NULL)
	{
		if (h->next == NULL)
			return (++n);
		n = listint_len(h->next);
		return (++n);
	}
	return (n);
}
