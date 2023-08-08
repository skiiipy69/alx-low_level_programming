#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of chars,
 * and initializes with specific char.
 * @size: size of array
 * @c: specific char
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int x;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(*array));
	if (array == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		array[x] = c;

	return (array);
}
