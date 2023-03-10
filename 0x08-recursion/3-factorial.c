#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: The number being used to find the factorial
 * Return: the factorial of n OR -1
 */

int factorial(int n) /*Function definition*/
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
