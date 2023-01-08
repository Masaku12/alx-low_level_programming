#include "main.h"

/**
 * string_toupper - changes all lowercase letters 
 * @str: The string to be evaluated & then altered
 * Return: The final string containing uppercase letters
 */

char *string_toupper(char *)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;

		index++;
	}
	return (str);
}
