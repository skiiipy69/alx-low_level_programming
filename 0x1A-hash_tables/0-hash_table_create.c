#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 *
 * @size: size of the array to be created
 *
 * Return: pointer to the new hash table, or NULL if fail
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_t;
	hash_node_t **new_arr;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	new_arr = malloc(sizeof(hash_node_t *) * size);
	if (!new_arr)
		return (NULL);

	for (i = 0; i < size; i++)
		new_arr[i] = NULL;

	new_t = malloc(sizeof(hash_table_t));
	if (!new_t)
		return (NULL);

	new_t->size = size;
	new_t->array = new_arr;

	return (new_t);
}
