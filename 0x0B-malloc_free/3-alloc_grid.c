#include "main.h"
#include <stdlib.h>


/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *
 * @width: int width of array
 *
 * @height: int height of array
 *
 * Return: Pointer to new grid.
 */

int **alloc_grid(int width, int height)
{
	int **new_grid;
	int y, x;

	if (width + height < 2 || width < 1 || height < 1)
		return (NULL);

	new_grid = malloc(height * sizeof(*new_grid));
	if (new_grid == NULL)
		return (NULL);

	for (y = 0; y < height; y++)
	{
		new_grid[y] = malloc(width * sizeof(**new_grid));
		if (new_grid[y] == NULL)
		{
			for (y--; y >= 0; y--)
				free(new_grid[y]);
			free(new_grid);
			return (NULL);
		}
		for (x = 0; x < width; x++)
			new_grid[y][x] = 0;
	}

	return (new_grid);
}
