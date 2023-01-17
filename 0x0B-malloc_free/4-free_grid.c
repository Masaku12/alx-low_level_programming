#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid previously created by
 *             your alloc_grid function
 * @grid: The 2D array of integers created in the previous function
 * @height: The height of the 2D array
 * Return: ()
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
