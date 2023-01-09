#include "main.h"

/**
* rot13 - encodes a string using rot13
* @str: This is the string being encoded
* Return: The encoded string
*/

char *rot13(char *str)
{
	int i[52] = {'a', 'b', 'c', 'd', 'e', 'f',
		'g', 'h', 'i', 'j', 'k', 'l', 'm',
		'n', 'o', 'p', 'q', 'r', 's', 't',
		'u', 'v', 'w', 'x', 'y', 'z', 'A',
		'B', 'C', 'D', 'E', 'F', 'G', 'H',
		'I', 'J', 'K', 'L', 'M', 'N', 'O',
		'P', 'Q', 'R', 'S', 'T', 'U', 'V',
		'W', 'X', 'Y', 'Z'};
	int j[52] = {'n', 'o', 'p', 'q', 'r', 's',
		't', 'u', 'v', 'w', 'x', 'y', 'z',
		'a', 'b', 'c', 'd', 'e', 'f', 'g',
		'h', 'i', 'j', 'k', 'l', 'm', 'N',
		'O', 'P', 'Q', 'R', 'S', 'T', 'U',
		'V', 'W', 'X', 'Y', 'Z', 'A', 'B',
		'C', 'D', 'E', 'F', 'G', 'H', 'I',
		'J', 'K', 'L', 'M'};
	int index1, index2;

	for (index1 = 0; str[index1] != '\0'; index1++)
	{
		index2 = 0;
		while (i[index2] != '\0' && str[index1] != i[index2])
			index2++;
		if (str[index1] == i[index2])
			str[index1] = j[index2];
	}

	return (str);
}
