#include "main.h"

/**
* print_square - prints a square, followed by a new line
* @size: the size of the square
* Return: ()
*/

void print_square(int size)
{
	int column, row;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (column = 0; column < size; column++)
				_putchar('#');
		}

		_putchar('\n');
	}

	_putchar('\n');
}
