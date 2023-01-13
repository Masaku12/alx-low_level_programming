#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: Argument counter
 * @argv: Argument vector
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int num, sum = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}

	for (num = 1; num < argc; num++)
	{
		if (atoi(argv[num]) == 0)
		{
			printf("Error\n");
			return (1);
		}
	}

	for (num = 1; num < argc; num++)
	{
		sum += (atoi(argv[num]));
	}
	printf("%d\n", sum);

	return (0);
}
