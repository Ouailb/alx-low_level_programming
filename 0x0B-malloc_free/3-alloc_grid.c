#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: pointer of an array of integers
 */
int **alloc_grid(int width, int height)
{
	int **oy;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	oy = malloc(height * sizeof(int *));
	if (oy == NULL)
	{
		free(oy);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		oy[i] = malloc(width * sizeof(int));
		if (oy[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(oy[i]);
			free(oy);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			oy[i][j] = 0;

	return (oy);
}
