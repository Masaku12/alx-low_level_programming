#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: The number being used to find the factorial
 * @result: The factorial of n
 * Returns: the factorial of n OR -1
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);

	result *= factorial(n - 1);

	return (result);
}
