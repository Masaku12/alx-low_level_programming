#include "main.h"

/**
 * factorial - This returns the factorial of a given number
 * @n: The number under review
 * Returns: the factorial of n if n > 0
 *	    -1 to demonstrate an error if n < 0
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
