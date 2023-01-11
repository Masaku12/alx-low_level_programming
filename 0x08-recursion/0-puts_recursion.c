#include <stdio.h>

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: The string being printed
 * Return: ()
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_puts_recursion(s);
		s++;
		_putchar(*s);
	}

	_putchar('\n');
}
