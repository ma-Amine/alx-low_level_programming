#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensinal array of integers
 *
 * @width: the width of the grid
 * @height: the height of the grid
 *
 * Return: pointer to a 2 dimensional array of int
 *	otherwise NULL if width or height are 0, or in case of failure
 */
int **alloc_grid(int width, int height)
{
	int **alloc, i, j;

	if ((height <= 0) | (width <= 0))
		return (NULL);

	alloc = malloc(sizeof(int *) * height);

	if (alloc == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		alloc[i] = malloc(sizeof(int) * width);

		if (alloc[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(alloc[j]);
			free(alloc);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			alloc[i][j] = 0;
	}
	return (alloc);
}
