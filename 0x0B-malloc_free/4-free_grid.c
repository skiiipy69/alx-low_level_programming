#include "main.h"
#include <stdlib.h>


/**
 * free_grid - free up a 2 dimensional grid
 *
 * @grid: grid.
 *
 * @height: height of grid
 */



void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}
