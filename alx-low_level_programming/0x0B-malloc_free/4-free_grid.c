#include "main.h"

/**
 * free_grid - frees a two dimensional grid
 *
 * @grid: grid to be freed
 * @height: height of the grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	/* first free all individual arrays */
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	/* then free the grid itself */
	free(grid);
}
