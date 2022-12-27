#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase, followed by a new line.
 * Return - unspecifed
 */

void print_alphabet_x10(void)

{
	int ch;
	char count;

	count = 0;
	while (count < 10)
	{
		ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		count++;
		_putchar('\n');
	}
}
