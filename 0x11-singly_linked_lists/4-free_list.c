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
	list_t *temp;


	if (head != NULL)
	{
		temp = head;
		head = temp->next;
		free(temp->str);
		free(temp);
		free_list(head);
	}
}
