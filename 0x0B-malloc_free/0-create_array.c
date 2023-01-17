#include "main.h"

/**
 * create_array - A function that creates an array of chars
 *		  and initializes it with a specific char
 * @size: The number of bytes allocated to memory
 * @c: A character being initialized
 * Return: A pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (Null);

	*p = malloc(sizeof(char) * size);

	if (p == Null)
		return (Null);

	for (i = 0; i < size; i++)
		p[i] = c;
	return (p);
}
