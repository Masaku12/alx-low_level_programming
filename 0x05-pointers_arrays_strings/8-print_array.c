#include "main.h"

/**
* print_array - prints n elements of an array of integers
* @a: This is an array of integers
* @n: An integer to be printed
* Return: ()
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i == n - 1)
			printf(", ");
	}

	printf("\n");
}
