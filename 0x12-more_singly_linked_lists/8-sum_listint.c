#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * sum_listint - summ all the data numbers of a structure of ints
 * @head: the pointer to the list
 * Return: the number of elements of the list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		sum = (head->n + sum_listint(head->next));
		return (sum);
	}
	return (0);
}
