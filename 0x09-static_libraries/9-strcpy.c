#include "main.h"

/**
* _strcpy - copies the string pointed to by src,
* including the terminating null byte (\0)
* to the buffer pointed to by dest
* @dest: A buffer where the string will be copied
* @src: The string to be copied
* Return: the pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
