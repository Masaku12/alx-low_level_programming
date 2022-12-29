#include <stdio.h>

/**
 * main - Entry point
 *Return: Always 0 (Success)
 */

int main(void)

{
	int count;
	unsigned long a;
	unsigned long b;
	unsigned long sum;

	a = 0;
	b = 1;

	for (count = 0; count < 50; count++)
	{
		sum = a + b;
		printf("%lu", sum);

		a = b;
		b = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}

