#include "main.h"

/**
 * str_len - Finds the length of a string
 * @s: The string being evaluated
 * Return: The length of a string
 */

int str_len(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += str_len(s + len);
	}
	return (len);
}

/**
 * eval_palindrome - Evaluates whether string is a palindrome
 * @s: The string being checked
 * @i: The index of the string under review
 * @l: The length of the string under review
 * Return: 1 if string is a palindrome, otherwise 0
 */

int eval_palindrome(char *s, int l, int i)
{
	if (s[i] == s[l / 2])
		return (1);
	if (s[i] == s[l - i - 1])
		return (eval_palindrome(s, l, i + 1));
	return (0);
}

/**
  * is_palindrome - Finds if a string is a palindrome
  * @s: The string under review
  * Return: 1 if string is a palindrome, otherwise 0
  */

int is_palindrome(char *s)
{
	int i = 0;
	int l = str_len(s);

	if (!(*s))
		return (1);
	return (eval_palindrome(s, l, i));
}
