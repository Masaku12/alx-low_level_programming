#include "main.h"

/**
* _strcat - concatenates two strings
* @src: One of the strings to be linked
* @dest: The port of call string
* Return: a pointer to the resulting string dest
*/

char *_strcat(char *dest, char *src)
{
	int i = 0, max = 0;

	while (dest[i++])
		max++;

	for (i = 0; src[i]; i++)
		dest[max++] = src[i];

	return (dest);
}
