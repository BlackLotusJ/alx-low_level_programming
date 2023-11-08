#include "hash_tables.h"

/**
 * hash_table_get - retrieves a vlue associated with a key
 * @ht: subject hash table
 * @key: the key that is being looked for
 * Return: value of the key or NULL if otherwise
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node = NULL;

	if (!ht || !key || !strcmp(key, ""))
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = (ht->array)[index];

	while (node)
	{
		if (!strcmp(node->key, (char *)key))
			return (node->value);
		node = node->next;
	}

	return (NULL);
}
