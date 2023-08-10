#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 *
 * @min: minimum range of values stored
 *
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int *x, y;

	if (min > max)
		return (NULL);

	x = malloc((max - min + 1) * sizeof(*x));

	if (x == NULL)

		return (NULL);

	for (y = 0; min <= max; y++, min++)

		x[y] = min;

	return (x);
}
