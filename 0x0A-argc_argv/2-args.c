#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: num ber of arguments on the command line
 * @argv: an array of pointers to arrays of character objects
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
		printf("%s\n", argv[n]);

	return (0);
}
