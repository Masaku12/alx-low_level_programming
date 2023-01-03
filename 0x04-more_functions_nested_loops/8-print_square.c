#include "main.h"

/**
* print_square - prints a square, followed by a new line
* @size: the size of the square
* Return: ()
*/

void print_square(int size)
{
	int h, w;

	if (size > 0)
	{
		for (h = 0; h < size; h++)
		{
			for (w = 0; w < size; w++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
