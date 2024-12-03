#include "main.h"

/**
 * alloc_grid - creates a two dimensional array of integers
 *
 * @width: the width of the grid
 * @height: the height of the grid
 *
 * Return: a pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	/* allocate memory for the arrays of integer on grid */
	grid = (int **)malloc(sizeof(int*) * height);
	if (!grid)
	{
		return (NULL);
	}

	/* allocate memory for the integers themselves in the arrays just created */
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);
		if (!grid[i])
		{
			return (NULL);
		}
	}

	/* initialize each element of the grid to zero */
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
