#include "main.h"

/**
* rev_string - reverses a string
* @s: The string being reverse printed
* Return: ()
*/

void rev_string(char *s)
{
	int l = 0, index;

	while (s[index++])
		l++;

	for (index = l - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}
