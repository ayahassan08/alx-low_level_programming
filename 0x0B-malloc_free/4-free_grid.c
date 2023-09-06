#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * previously created by your alloc_grid function
 * @grid: pointer to be checked
 * @height: integer to be checked
 * Return: Always 0 (Success)
*/

void free_grid(int **grid, int height)
{
	int x;

	if (grid == NULL || height <= 0)
	{
		return;
	}

	for (x = 0; x < height; x += 1)
	{
		free(grid[x]);
	}

	free(grid);
}
