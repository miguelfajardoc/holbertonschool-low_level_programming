#include "hash_tables.h"
/**
 * hash_table_print - print the dictionary
 * @ht: is te table to uptate
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	char * coma = "";

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			printf("%s'%s': ", coma, node->key);
			printf("'%s'", node->value);
			node = node->next;
			coma = ", ";
		}
	}
	printf("}\n");
	return;
}
