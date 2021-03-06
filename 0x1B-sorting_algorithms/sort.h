#ifndef BIG_0
#define BIG_0

#include <stdio.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void selection_sort(int *array, size_t size);
void swap(int *prev, int *next);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void insert_node(listint_t **head, listint_t *aux, listint_t *j);
void quick_sort_real(int *array, size_t size, int *array_print, size_t size_p);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
#endif
