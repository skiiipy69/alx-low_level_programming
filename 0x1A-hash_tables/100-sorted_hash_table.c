#include "hash_tables.h"

/**
 * shash_table_create - creates a hash table that can be sorted into
 * a doubly linked list
 * @size: size of the array to be created
 *
 * Return: pointer to the newly created hash table, or NULL on failure
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_t;
	shash_node_t **new_arr;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	new_arr = malloc(sizeof(shash_node_t *) * size);
	if (!new_arr)
		return (NULL);

	for (i = 0; i < size; i++)
		new_arr[i] = NULL;

	new_t = malloc(sizeof(shash_table_t));
	if (!new_t)
		return (NULL);

	new_t->size = size;
	new_t->array = new_arr;
	new_t->shead = NULL;
	new_t->stail = NULL;

	return (new_t);
}


/**
 * dbl_ll_set - sorts new node alphabetically into a doubly linked list
 * of hash table nodes
 *
 * @ht: sorted hash table to update with new node
 *
 * @new: newly allocated node
 */

void dbl_ll_set(shash_table_t *ht, shash_node_t *new)
{
	shash_node_t *tmp;


	if (!(ht->shead) && !(ht->stail))
	{
		ht->shead = new;
		ht->stail = new;
		new->sprev = NULL;
		new->snext = NULL;
	}
	else if (strcmp(ht->shead->key, new->key) > 0)
	{
		new->sprev = NULL;
		new->snext = ht->shead;
		ht->shead->sprev = new;
		ht->shead = new;
	}
	else
	{
		tmp = ht->shead;
		while (tmp->snext && strcmp(tmp->snext->key, new->key) < 0)
			tmp = tmp->snext;
		new->sprev = tmp;
		new->snext = tmp->snext;
		if (tmp->snext)
			tmp->snext->sprev = new;
		else
			ht->stail = new;
		tmp->snext = new;
	}
}


/**
 * shash_table_set - adds an element to a hash table sorted by alphabetic order
 * of keys
 * @ht: sorted hash table to add or update the key/value
 *
 * @key: key is string used for value lookup, cannot be empty string
 *
 * @value: value associated with key, can be empty string
 *
 * Return: 1 on success, 0 on failure
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new, *tmp;
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
			if (tmp->value)
			{
				free(tmp->value);
				tmp->value = NULL;
			}
			tmp->value = value_copy;
			return (1);
		}
		tmp = tmp->next;
	}
	key_copy = strdup(key);
	if (!key_copy)
		return (0);
	new = malloc(sizeof(shash_node_t));
	if (!new)
		return (0);
	new->key = key_copy;
	new->value = value_copy;
	new->next = ht->array[index];
	ht->array[index] = new;
	dbl_ll_set(ht, new);
	return (1);
}


/**
 * shash_table_get - retrieves a value associated with a key in a sorted
 * hash table
 *
 * @ht: table to search
 *
 * @key: key used to find value
 *
 * Return: associated value, or NULL if key is not found
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *current;

	if (!ht || !(ht->array))
		return (NULL);

	if (!key || key[0] == '\0')
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}


/**
 * shash_table_print - prints a sorted hash table from first to last in
 * sorted linked list
 *
 * @ht: sorted hash table to be printed
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp;
	bool first = true;

	if (ht && ht->array)
	{
		putchar('{');
		tmp = ht->shead;
		while (tmp)
		{
			if (first)
			{
				printf("'%s': '%s'", tmp->key,
				       tmp->value);
				first = false;
			}
			else
				printf(", '%s': '%s'", tmp->key,
				       tmp->value);
			tmp = tmp->snext;
		}
		printf("}\n");
	}
}


/**
 * shash_table_print_rev - prints a sorted hash table from last to first
 * in sorted linked list
 *
 * @ht: sorted hash table to be printed
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp;
	bool first = true;

	if (ht && ht->array)
	{
		putchar('{');
		tmp = ht->stail;
		while (tmp)
		{
			if (first)
			{
				printf("'%s': '%s'", tmp->key,
				       tmp->value);
				first = false;
			}
			else
				printf(", '%s': '%s'", tmp->key,
				       tmp->value);
			tmp = tmp->sprev;
		}
		printf("}\n");
	}
}


/**
 * shash_table_delete - deletes a sorted hash table
 *
 * @ht: sorted hash table to have memory freed
 */

void shash_table_delete(shash_table_t *ht)
{
	unsigned long int index, n;
	shash_node_t *head = NULL, *tmp = NULL;

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

