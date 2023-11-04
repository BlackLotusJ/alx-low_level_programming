#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_table_create - creates a hash table
 * @size: size of the table array
 * Return: the hash table on SUCCESS
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	
	if (size == 0)
		return (NULL);

	ht = malloc(sizeof(hash_table_t));
	if (!ht)
		return (NULL);

	ht->size = size;
	ht->array = calloc((size_t)ht->size, sizeof(hash_node_t *t));
	if (ht-> array == NULL)
		return (NULL);

	return (ht);
}
