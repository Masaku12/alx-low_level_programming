#include <stdio.h>

/**
 * main - Entry point
 * @argc: The size of the argv array
 * @argv: Array with the program command arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
		printf("%s\n", argv[n]);

	return (0);
}
