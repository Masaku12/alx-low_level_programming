#include <stdlib.>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @max: Maximum value
 * @min: Minimum value
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *arr, index, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		arr[index] = min++;

	return (arr);
}
