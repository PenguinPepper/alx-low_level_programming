#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid
 * previously created by your alloc_grid function.
 * @grid: grid to be freed
 * @height: height of an array
 *
 * Return: if all goes well 0
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
