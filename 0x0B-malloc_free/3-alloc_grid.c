#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: Width
 * @height: Height
 * Return: Pointer to an array, otherwise NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **p;
	int m, n;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(height * sizeof(int *));

	if (p == NULL)
		return (NULL);

	for (m = 0; m < height; m++)
	{
		p[m] = malloc(width * sizeof(int *));

		if (p[m] == NULL)
		{
			for (m = 0; m < height; m++)
				free(p[m]);
			free(p);
			return (NULL);
		}
		for (n = 0; n < width; n++)
			p[m][n] = 0;
	}
	return (p);
}
