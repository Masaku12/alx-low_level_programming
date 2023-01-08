#include "main.h"

/**
 * string_toupper - changes all lowercase letters
 * @str: The string to be evaluated & then altered
 * Return: The final string containing uppercase letters
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;

		i++;
	}
	return (str);
}
