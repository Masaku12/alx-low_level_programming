#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index
 *
 * @n: the bit under review
 * @index: the index to get the value
 *
 * Return: the value of bit at @index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
