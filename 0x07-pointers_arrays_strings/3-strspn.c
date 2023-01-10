#include <stdio.h>
#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: A string
 * @accept: The prefix containing the bytes
 * Return: the number of bytes in the initial segment of s 
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int 
