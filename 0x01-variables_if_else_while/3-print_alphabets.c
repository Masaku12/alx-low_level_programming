#include <stdio.h>

/**
  *main - Entry point
  *Return: Always 0 (Success)
  */

int main(void)

{
	char ch, chu;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (chu = 'A'; chu <= 'Z'; chu++)
		putchar(chu);
	putchar('\n');

	return (0);
}
