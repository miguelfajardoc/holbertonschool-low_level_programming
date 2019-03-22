#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	list_t *head;

	head = NULL;
	head = add_node(head, "Alexandro");
	head = add_node(head, "Asaia");
	head = add_node(head, "Augustin");
	head = add_node(head, "Bennett");
	head = add_node(head, "Bilal");
	head = add_node(head, "Chandler");
	head = add_node(head, "Damian");
	head = add_node(head, "Daniel");
	head = add_node(head, "Dora");
	head = add_node(head, "Electra");
	head = add_node(head, "Gloria");
	head = add_node(head, "Joe");
	head = add_node(head, "John");
	head = 	add_node(head, "John");
	head = 	add_node(head, "Josquin");
	head = add_node(head, "Kris");
	head = 	add_node(head, "Marine");
	head = 	add_node(head, "Mason");
	head = 	add_node(head, "Praylin");
	head = 	add_node(head, "Rick");
	head = 	add_node(head, "Rick");
	head = 	add_node(head, "Rona");
	head = 	add_node(head, "Siphan");
	head = 	add_node(head, "Sravanthi");
	head = 	add_node(head, "Steven");
	head = 	add_node(head, "Tasneem");
	head = 	add_node(head, "William");
	head = 	add_node(head, "Zee");
	print_list(head);
	return (0);
}
