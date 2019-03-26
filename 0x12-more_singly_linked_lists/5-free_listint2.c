#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - free all the memory of a list
 * @head: the pointer to point the pointer of the list
 *
 */
void free_listint2(listint_t **head)
{
	if (*head != NULL)
	{
		free_listint2(&((*head)->next));
		free(*head);
	}
}
