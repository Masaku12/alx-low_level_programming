#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: Argument counter
 * @argv: Argument vector
 * Return: 1 if number contains non-digits, otherwise 0
 */

int main(int argc, char *argv[])
{
	int a, b, sum = 0;

	for (a = 1; b < argc; b++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (argv[a][b] < '0' || argv[a][b] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[a]);
	}

	printf("%d\n", sum);

	return (0);
}
