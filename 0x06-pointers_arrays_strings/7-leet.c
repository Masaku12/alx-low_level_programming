#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: The string being encoded
 * Return: The encoded string
 */

char *leet(char *str)
{
	int indx 1, indx 2;
	int a[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int b[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (indx1 = 0; str[indx1] != '\0'; indx1++)
	{
		for (indx2 = 0; a[indx2] != '\0'; indx2++)
		{
			if (str[indx1] == a[indx2])
			{
				str[indx1] = b[indx2];
			}
		}
	}

	return (str);
}
