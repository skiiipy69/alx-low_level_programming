#include "hash_tables.h"

/**
 * key_index - gives the index at which to store a key in a hash table
 *
 * @key: key string to be hashed
 *
 * @size: size array of nodes
 *
 * Return: index to store key and value, -1 if fail.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	if (size == 0)
		return (-1);
	if (!key)
		return (-1);

	index = hash_djb2(key) % size;
	return (index);
}

