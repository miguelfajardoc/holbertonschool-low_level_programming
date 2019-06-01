#include "hash_tables.h"
/**
 * hash_table_delete - delete a hash table
 * @ht: is te table to delete
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *aux;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			aux = node;
			free(node->key);
			free(node->value);
			node = node->next;
			free(aux);
		}
	}
	free(ht->array);
	free(ht);
}
