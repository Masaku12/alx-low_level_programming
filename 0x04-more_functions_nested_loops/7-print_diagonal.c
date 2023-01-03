#include "main.h"

/**
* print_diagonal - draws a diagonal line on the terminal
* @n: the the number of times
* the character \ should be printed
* Return: ()
*/

void print_diagonal(int n)
{
	int len, space;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
		{
			for (space = 0; space < len; space++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}

	else
		_putchar('\n');
}
