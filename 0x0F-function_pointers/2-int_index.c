#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 *
 * @array: An array of integers being used
 * @size: number of elements in the array @array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: If no element matches or size <= 0, return -1
 *	   otherwise the index of the first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
