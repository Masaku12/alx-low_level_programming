#include "main.h"

/**
* print_square - prints a square, followed by a new line
* @size: the size of the square
* Return: ()
*/

void print_square(int size)
{
	int height, width;

	if (size > 0)
	{
		for (height = 0; height < size; height++)
		{
			for (width = 0; width < size; width++)
				_putchar('#');
				_putchar('\n');
		}
	}

	_putchar('\n');
}
