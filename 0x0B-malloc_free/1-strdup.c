#include <stdlib.h>
#include "main.h"

/**
 * _strdup -  function returns a pointer to a new string
 * which is a duplicate of the string @str
 * @str: A string being duplicated
 * Return: A pointer
 */

char *_strdup(char *str)
{
	unsigned int i;
	char *s;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		continue;
	s = malloc((i * sizeof(char)) + 1);

	if (s == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		s[i] = str[i];

	return (s);
}
