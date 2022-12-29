#include <stdio.h>

/**
 * main - Entry point
 *Return: Always 0 (Success)
 */

int main(void)

{
	int count;
	unsigned long n, fib, sum;

	n = 0;
	fib = 1;

	for (count = 0; count <= 50; count++)
	{
		sum = n + fib;
		printf("%lu", sum);

		n = fib;
		fib = sum;

		if (count == 49)
			printf("\n");
		else
			printf(",");
	}

	return (0);
}

