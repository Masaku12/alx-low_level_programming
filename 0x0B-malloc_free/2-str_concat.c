#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * str_concat - Adds two strings
 * @s1: One of the strings being concatenated
 * @s2: The second string under review
 * Return: A pointer or NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int i;
	int length = 0;
	int concat_index = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		length++;

	concat_str = malloc(sizeof(char) * length);

	if (concat_str == NULL)
		return (NULL);

	for (i = 0; s1[i]; = i++)
		concat_str[concat_index++] = s1[i];

	for (i = 0; s2[i]; = 1++)
		concat_str[concat_index++] = s2[i];

	return (concat_str);
}
