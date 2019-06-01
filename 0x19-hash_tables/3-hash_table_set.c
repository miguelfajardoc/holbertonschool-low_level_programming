#include "hash_tables.h"
/**
 * hash_table_set - add a data to the hash table
 * @ht: is te table to uptate
 * @key: the data that is used to generate the hash
 * @value: the data asociated to a key. its duplicated, can be an empty string
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int index;

	if (key == NULL || key == '\0' || value == NULL || ht == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = malloc(sizeof(hash_node_t));
		if (ht->array[index] == NULL)
			return (0);
		(ht->array[index])->key = strdup(key);
		(ht->array[index])->value = strdup(value);
	}
	else
	{
		node = ht->array[index];
		while (node != NULL)
		{
			if (strcmp(node->key, key) == 0)
			{
				free(node->value);
				node->value = strdup(value);
				return (1);
			}
			node = node->next;
		}
		node = malloc(sizeof(hash_node_t));
		if (node == NULL)
			return (0);
		node->key = strdup(key);
		node->value = strdup(value);

		node->next = ht->array[index];
		ht->array[index] = node;
	}
	return (1);
}
