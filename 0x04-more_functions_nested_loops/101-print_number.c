#include "main.h"

/**
* print_number - prints an integer
* @i: integer to be printed
* Return: ()
*/

void print_number(int n)
{
	unsigned int num = i;
	num = i;

	if (i < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}

