#include <stdio.h>

/**
* main - finds and prints the largest prime factor of
* the number 612852475143, followed by a new line
* Return: Always 0 (Success)
*/

int main(void)
{
	unsigned long i = 612852475143, div;

	while (div < i)
	{
		if (i % div == 0)
		{
			i /= div;
			div = 2;
		}
		else
			div++;
	}
	printf("%lu\n", i);
	return (0);
}
