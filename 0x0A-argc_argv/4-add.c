#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: Argument counter
 * @argv: Argument vector
 * Return: 1, if number contains non-digits, otherwise 0
 */

int main(int argc, char *argv[])
{
	int n, sum = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}

	for (n = 1; n < argc; n++)
	{
		if (atoi(argv[n]) == 0)
		{
			printf("Error\n");
			return (1);
		}
	}

	for (n = 1; n < argc; n++)
	{
		sum += (atoi(argv[n]));
	}
	printf("%d\n", sum);

	return (0);
}
