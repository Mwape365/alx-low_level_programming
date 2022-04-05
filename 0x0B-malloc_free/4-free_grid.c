#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function thst frees a 2 dimensional grid
 * previously created by your alloc_grid function
 * @grid: pointer to grid of int type
 * @height: int type
 *
 * Return: 0 for success
 */

void free_grid(int **grid, int height)
{
	int y;

	if (grid == NULL || grid == 0)
	{
		return;
	}
	for (y = 0; y < height;  y++)
	{
		free(grid[y]);
	}
	free(grid);
}
