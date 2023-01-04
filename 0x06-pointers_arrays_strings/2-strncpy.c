#include "main.h"

/**
* _strncpy - copies a string
* @src: One of the strings
* @dest: The destination string
* @n: The number of bytes allocated to the string
* Return: Pointer to the destination string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int index;

	for (index = 0; index < n && src[index] != '\0'; index++)
		dest[index] = src[index];

	for ( ; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
