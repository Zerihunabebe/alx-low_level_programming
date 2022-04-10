#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees the memory allocte for the grid
 * create by alloc_grid()
 * @grid: grid to free
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	inti;

	if (grid == NULL || height == 0)
		returt;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
