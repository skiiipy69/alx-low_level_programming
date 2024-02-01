#include "hash_tables.h"

/**
 * hash_table_set - adds element to hash table
 *
 * @ht: target hash add or update the keyvalue
 *
 * @key: key is string used for value lookup, cannot be empty string
 *
 * @value: value associated with key, can be empty string
 *
 * Return: 1 if success, 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new, *tmp;
	char *key_copy, *value_copy;

	if (!ht || !(ht->array) || key[0] == '\0' || key == NULL)
		return (0);

	value_copy = strdup(value);
	if (!value_copy)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = value_copy;
			return (1);
		}
		tmp = tmp->next;
	}

	key_copy = strdup(key);
	if (!key_copy)
		return (0);

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->key = key_copy;
	new->value = value_copy;
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}

