#include "hash_tables.h"
/**
 * hash_table_get - get the value asociated to the key
 * @ht: is te table to uptate
 * @key: the data that is used to generate the hash
 * Return: the value asociated or null if the value couldn't found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || key == '\0')
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
		return (NULL);

	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);
		}
		node = node->next;
	}
	return (NULL);
}
