#include "main.h"

/**
 * main - prints the largest of three integers
 * @a: The first number
 * @b: The second number
 * @c: The third number
 * Return: The largest integer
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else if (c >= a && c > b)
	{
		largest = c;
	}
	return (largest);
}
