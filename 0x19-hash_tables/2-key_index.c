#include "hash_tables.h"
/**
 * key_index - generate the index to the hash table
 * @key: the data that is used to generate the hash
 * @size: the size of the hash table
 * Return: the index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	unsigned long int index;

	if (key == NULL || size <= 0)
		exit(-1);

	hash = hash_djb2(key);
	index = hash % size;

	return (index);
}
