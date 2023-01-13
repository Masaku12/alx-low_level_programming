#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: The size of the argv array
 * @argv: Array with the program command arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	if (argc > 0)
		printf("%d\n", argc - 1);

	return (0);
}
