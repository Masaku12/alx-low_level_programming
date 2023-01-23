#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry Point
 * @argc: Argument Count
 * @argv: Argument Vector
 * Return: Result of the operations
 */

int main(int argc, char *argv[])
{
	int answer;
	int i, j;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	i = atoi(argv[1]);
	j = atoi(argv[3]);
	op = argv[2];

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' || *op == '%') && (j == 0))
	{
		printf("Error\n");
		exit(100);
	}

	answer = get_op_func(op)(i, j);
	printf("%d\n", answer);
	return (0);
}
