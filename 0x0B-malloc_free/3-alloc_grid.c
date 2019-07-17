#include "holberton.h"

/**
 *alloc_grid - returns a pointer to 2D array
 *@width: int integer
 *@height:int integer
 *Return: array
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int row, col, i, j;


	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (row = 0; row < height; row++)
	{
		grid[row] = malloc(width * sizeof(int));

		if (grid[row] == NULL)
		{
			for (i = 0; i < row; i++)
				free(grid[i]);

			free(grid);

			return (NULL);
		}
	}

	for (j = 0; j < height; j++)
	{
		for (col = 0; col < width; col++)
			grid[j][col] = 0;
	}
	return (grid);
}
