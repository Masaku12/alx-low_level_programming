#include "main.h"

/**
* print_number - prints an integer
* @i: integer to be printed
* Return: ()
*/

void print_number(int n)
{
	unsigned int num = n;
	num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((n / 10) > 0)
		print_number(n / 10);

	_putchar((n % 10) + '0');
}

