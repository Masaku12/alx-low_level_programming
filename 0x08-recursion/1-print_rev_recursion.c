#include "main.h"

/**
 * _print_rev_recursion - This prints a string in reverse
 * @s: The string being printed in rervse
 * Return:()
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
