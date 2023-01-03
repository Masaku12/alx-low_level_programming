#include "main.h"

/**
* print_diagonal - draws a diagonal line on the terminal
* @n: the the number of times
* the character \ should be printed
* Return: ()
*/

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		i = 0;

		while (i < 0)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}

	_putchar('\n');
}
