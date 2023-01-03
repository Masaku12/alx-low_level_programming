#include "main.h"

/**
* swap_int - swaps the values of two integers
* @a: One of the integers whose value will be swapped
* @b: The second integer whose value will be swapped
* Return: ()
*/

void swap_int(int *a, int *b)
{
	int i, j;

	i = *a;
	j = *b;

	*a = j;
	*b = i;
}
