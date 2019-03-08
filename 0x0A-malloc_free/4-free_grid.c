#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * free_grid - free the memory of two dimensional array
 * @grid: the grid
 * @height: the height of the grid
 * Return: the pointer to the grid. The grid should be start in 0. If width or
 * height is 0 or negative, return NULL.
 */
void free_grid(int **grid, int height)
{
	int j = 0;

	if (grid == NULL || height <= 0)
		;
	else
	{
		while (j < height)
		{
			free(grid[j]);
			j++;
		}
		free(grid);
	}
}
