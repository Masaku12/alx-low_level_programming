#include <stdio.h>

/**
 * main - program that prints its name, followed by a new line
 * @argc: Number of command line arguments
 * @argv: An array of size @argc
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%d\n", argv[0]);

	return (0);
}
