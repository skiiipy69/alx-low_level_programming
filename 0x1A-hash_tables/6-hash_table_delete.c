#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: hash table to have memory freed
 *
 * Return: .
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index, n;
	hash_node_t *head = NULL, *tmp = NULL;

	if (ht && ht->array)
	{
		for (index = 0; index < ht->size; index++)
		{
			if (ht->array[index])
			{
				head = ht->array[index];
				tmp = head;
			}
			for (n = 0; head; n++)
			{
				tmp = head->next;
				free(head->key);
				free(head->value);
				free(head);
				head = tmp;
			}
		}
		free(ht->array);
		free(ht);
	}
}

