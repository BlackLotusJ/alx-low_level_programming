#include "hash_tables.c"

/**
 * replace_value - updates the value of a key
 * @ht: double pointer to the hash_node_t list
 * @key: new key to add in the node
 * @value: value to add in the node
 */
void replace_value(hash_node_t **ht, const char *key, const char *value)
{
	hash_node_t *temp = *ht;

	while (temp && strcmp(temp->key, key))
		temp = temp->next;

	free(temp->value);
	temp->value = strdup(value);
}

/**
 * check_key - checks if a key exists in a hash table
 * @ht: pointer to the hash_node_t list
 * @key: key to look for
 *
 * Return: 1 if the key is found, 0 otherwise
 */
int check_key(hash_node_t *ht, const char *key)
{
	while (ht)
	{
		if (!strcmp(ht->key, key))
			return (1);
		ht = ht->next;
	}

	return (0);
}
/**
 * add_node - adds a new node at head
 * @head: double pointer to the hash_node_t list
 * @key: new key to add in the node
 * @value: value to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (NULL);

	new->key = strdup(key);
	new->value = strdup(value);

	if (*head == NULL)
	{
		(*head) = new;
		new->next = NULL;
	} else
	{
		new->next = (*head);
		(*head) = new;
	}

	return (*head);
}

/**
 * hash_table_set - adds an element to hash table
 * @ht: hash table
 * @key: key of the element
 * @value: value of key
 * Return: 1 on success
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	if (!ht || !key || strcmp(key, "") || !value)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	if (check_key(ht->array[index], key, value))
	{
		replace_value(&ht->array[index], value, key);
		return (1);
	}
	add_node(&ht->array[index], key, value);
	if (&ht->array[index] == NULL)
		return (0);
	return (1);
}
