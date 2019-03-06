#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - give a pointer that locate 2 dimensional array
 * @width: the width of the grid
 * @height: the height of the grid
 * Return: the pointer to the grid. The grid should be start in 0. If width or
 * height is 0 or negative, return NULL.
 */
int **alloc_grid(int width, int height)
{
	int i = 0;
	int j = 0;
	int **d;

	if (width <= 0 || height <= 0)
		return (NULL);

	d = malloc(sizeof(int *) * height);
	if (d == NULL)
	{
		free(d);
		return (NULL);
	}
	while (j < width)
	{
		*(d + j) = malloc(sizeof(int) * width);
		if (*(d + j) == NULL)
		{
			free(d);
			for ( ; j >= 0; j--)
				free(*(d + j));
			return (NULL);
		}
		j++;
	}
	j = 0;
	while (i < height)
	{
		while (j < width)
		{
			d[i][j] = 0;
			j++;
		}
		i++;
	}
	return (d);
}
