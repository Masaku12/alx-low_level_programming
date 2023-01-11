#include <stdio.h>
#include "main.h"

/**
 * sq_root - Finds the natural square root of an assigned number
 * @i: The number to which we are finding the square root
 * @root: The square root
 * Return: square root, otherwise -1
 */

int sq_root(int i, int root)
{
	if ((root * root) == i)
		return (root);

	if ((root == i / 2))
		return (-1);

	return (sq_root(i, root + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: The number being used to find the square root
 * Return: Square root, otherwise -1
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (sq_root(i, root));
}
