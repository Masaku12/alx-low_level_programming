#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 *
 * @n: Number of variable arguments
 *
 * Return: if n == 0, return 0, otherwise sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(args, n);
	sum = 0;

	for (i = 0; i < n; i++)
		sum = (va_args(args, int) - sum);
	va_end(args);
	return (sum);
}