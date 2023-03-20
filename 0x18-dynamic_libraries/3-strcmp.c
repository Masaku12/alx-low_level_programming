#include "main.h"

/**
* _strcmp - compares two strings
* @s1: The first string
* @s2: The second string
* Return: 0 if s1 & s2 are the same, -ve difference if s1 is less than s2
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
