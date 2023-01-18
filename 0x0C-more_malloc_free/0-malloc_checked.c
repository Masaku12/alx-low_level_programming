#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocates a memory using malloc
 * @b: Number of bytes being allocated
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
