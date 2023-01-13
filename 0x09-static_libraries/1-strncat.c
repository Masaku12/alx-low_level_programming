#include "main.h"

/**
* _strncat - concatenates two strings
* @src: One of the strings being concatenated
* @dest: The port of call for the concatenation process
* @n: Maximum number of bytes
* Return: a pointer to the resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, max = 0;

	while (dest[i++])
		max++;

	for (i = 0; src[i] && i < n; i++)
		dest[max++] = src[i];

	return (dest);
}
