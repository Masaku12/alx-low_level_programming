#include <stdio.h>

/**
 * main - Entry point
 *Return: Always 0 (Success)
 */

int main(void)

{
	int count;
	unsigned long i, f, sum;

	i = 0;
	f = 1;

	for (count = 0; count < 50; count++)
	{
		sum = i + f;
		printf("%lu", sum);

		i = f;
		f = sum;

		if (count == 49)
			printf("\n");
		else
			printf(",");
	}

	return (0);
}

