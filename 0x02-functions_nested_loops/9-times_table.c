#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 * Return: Unspecified
 */

void times_table(void)

{
	int mult, num, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');
		
		for (mult = 1; mult <= 1; mult++)
		{
			_putchar(',');
			_putchar(' ');

			prod = mult * num;

			if (prod <= 9)
				_putchar(' '):
			else
				_putchar((prod / 10) + '0');

			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
