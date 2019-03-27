#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
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
