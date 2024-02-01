#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 *
 * @ht: hash table to be printed
 *
 * Return: .
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *tmp;
	bool first = true;

	if (ht && ht->array)
	{
		putchar('{');
		for (index = 0; index < ht->size; index++)
		{
			if (ht->array[index])
			{
				tmp = ht->array[index];
				if (first)
				{
					printf("'%s': '%s'", tmp->key,
					       tmp->value);
					first = false;
				}
				else
					printf(", '%s': '%s'", tmp->key,
					       tmp->value);
				while (tmp->next)
				{
					tmp = tmp->next;
					printf(", '%s': '%s'", tmp->key,
					       tmp->value);
				}
			}
		}
		printf("}\n");
	}
}

