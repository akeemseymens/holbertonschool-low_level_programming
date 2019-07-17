#include "holberton.h"

/**
 *free_grid - returns a pointer to 2D array
 *@grid: grid pointer
 *@width:int integer
 *@height: int integer
 *Return: array
 */

int free_grid(int **grid, int width, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
