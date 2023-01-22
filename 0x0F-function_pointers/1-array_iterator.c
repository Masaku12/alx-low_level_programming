#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 *                  on each element of an array
 * @array: An array being used
 * @size: the size of an array
 * @action: pointer to the function you need to use
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long n;

	if (array != NULL && size > 0 && (*action) != NULL)
	{
		for (n = 0; n < size; n++)
			action(array[n]);
	}
}
