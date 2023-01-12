#include "main.h"

/**
 * prime_num - This examines whether i is divisible
 * @i: The number being checked
 * @divisor: The divisor being used
 * Return: 1 if i is a prime number, otherwise 0
 */

int prime_num(int i, int divisor)
{
	if (i % divisor == 0)
		return (0);
	if (divisor == i / 2)
		return (1);
	return (prime_num(i, divisor + 1));
}

/**
 * is_prime_number - This examines whether i is a prime number
 * @n: The number being checked
 * Return: 1 if n is a prime number, otherwise 0
 */

int is_prime_number(int n)
{
	int divisor = 2;

	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);
	return (prime_num(n, divisor));
}
