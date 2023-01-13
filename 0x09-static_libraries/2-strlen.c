#include "main.h"

/**
* _strlen - Returns the length of a string
* @s: The string being evaluated
* Return: The length of a string
*/

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		s++;
		l++;
	}
	return (l);
}
