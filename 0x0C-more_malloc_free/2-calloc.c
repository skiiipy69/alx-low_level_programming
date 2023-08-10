#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 *
 * @nmemb: number of elements in the array
 *
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *x, unsigned int y;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	x = malloc(nmemb * size);
	if (x == NULL)
		return (NULL);
	for (y = 0; y < nmemb; y++)
		x[y] = 0;

	return (x);
}
