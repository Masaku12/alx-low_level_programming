#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: The string being encoded
 * Return: The encoded string
 */

char *leet(char *str)
{
	int index 1;
	int index 2;
	int i[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int j[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (index1 = 0; str[index1] != '\0'; index1++)
	{
		for (index2 = 0; i[index2] != '\0'; index2++)
		{
			if (str[index1] == i[index2])
			{
				str[index1] = j[index2];
			}
		}
	}

	return (str);
}
