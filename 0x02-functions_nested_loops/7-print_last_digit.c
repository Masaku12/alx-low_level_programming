#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @i: the integer being checked
 * Return: Value of the last digit
 */

int print_last_digit(int i)
{
	int last_digit = i % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar('0' + last_digit);

	return (last_digit);
}
