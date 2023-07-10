#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * alloc_grid - returns a pointer to a 2 dimensional array of integers.
  *@width: width of grid.
  *@height: height of grid.
  *
  * Return: NULL on failure, otherwise return pointer.
  */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;
	int x;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		grid[x] = malloc(width * sizeof(int));
		if (grid[x] == NULL)
		{
			for (; x >= 0; x--)
				free(grid[x]);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
