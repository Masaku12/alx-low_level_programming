#include <stdio.h>
#include "main.h"

/**
* infinite_add - This function adds two numbers
* @n1: This string contains the first number
* @n2: This string contaisn the second number
* @r: the buffer storing the result
* @size_r: The buffer size
* Return: pointer to the result if r can store the sum
*         otherwise 0
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i;
	int n1_len = 0;
	int n2_len = 0;

	for (i = 0; *(n1 + i); i++)
		n1_len++;
	for (i = 0; *(n2 + i); i++)
		n2_len++;

	if (size_r <= n1_len + 1 || size_r <= n2_len + 1)
		return (0);
	else
		return (r);
}
