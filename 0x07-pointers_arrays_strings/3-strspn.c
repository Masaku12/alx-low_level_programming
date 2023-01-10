#include <stdio.h>
#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: A string
 * @accept: The prefix containing the bytes
 * Return: the number of bytes in the initial segment of s 
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int num = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				num++;
				break;
			}

			else if (accept[i + i] == '\0')
				return (num);
		}
		s++;
	}

	return (num);
}
