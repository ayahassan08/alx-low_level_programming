#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: integer to be checked
 * @height: integer to be checked
 * Return: return NULL on failure
 * If width or height is 0 or negative, return NULL
*/

int **alloc_grid(int width, int height)
{
	int **grid;
	int x, o, i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < height; x += 1)
	{
		grid[x] = malloc(sizeof(int) * width);

		if (grid[x] == NULL)
		{
			while (x -= 1)
			{
				free(grid[x]);
			}
			free(grid);
			return (NULL);
		}
	}
	for (i = 0; i < height; i += 1)
	{
		for (o = 0; o < width; o += 1)
		{
			grid[i][o] = 0;
		}
	}
	return (grid);
}
