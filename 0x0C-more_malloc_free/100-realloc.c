#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 *
 * @ptr: pointer to previous memory block
 *
 * @old_size: size of allocated space for `ptr`
 *
 * @new_size: size for new allocated space
 *
 * Return: Pointer to new memory ,NULL if error.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *a, *clone;
	unsigned int x;

	if (new_size == old_size)

		return (ptr);
	if (ptr != NULL && new_size == 0)

	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)

	{
		a = malloc(new_size);
		if (a == NULL)
			return (NULL);

		return (a);
	}

	a = malloc(new_size);
	if (a == NULL)
		return (NULL);
	clone = ptr;

	for (x = 0; x < old_size; x++)
		a[x] = clone[x];
	free(ptr);


	return (a);
}
