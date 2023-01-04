#include "main.h"

/**
* string_toupper - changes all lowercase letters of a string to uppercase
* @str: String to be evaluated & altered
* Return: The string containing uppercase letters
*/

char *string_toupper(char *)
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
