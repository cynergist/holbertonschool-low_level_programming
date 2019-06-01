#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 *
 * @ht: hash table we add or update key/value
 * @key: key in the key/value pair
 * @value: value associated with the key
 * Return: 1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long index;
	hash_node_t *new, *current;
	char *value_copy;
	/* key can not be an empty string */
	/* value can be empty string */
	if (!ht || !key || !*key || !value)
		return (0);
	/* key_index called on key */
	index = key_index((const unsigned char *)key, ht->size);
	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);
	/* check each node to see if key already exists */
	if (ht->array[index])
	{
		current = ht->array[index];

		while (current)
		{
			if (strcmp(current->key, key) == 0)
			{
				free(current->value);
				current->value = value_copy;
				return (1);
			}
			current = current->next;
		}
	}
	/* create new hash_node_type */
	new = malloc(sizeof(hash_node_t));
	if (!new)
	{
		free(value_copy);
		return (0);
	}
	/* copy key/value pair into new node */
	new->key = strdup(key);
	if (!new->key)
	{
		free(new);
		free(value_copy);
		return (0);
	}
	new->value = value_copy;
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
