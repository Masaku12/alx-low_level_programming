#include <stdio.h>
/**
  *main - Entry point
  *i - value representing digits in tens
  *j - value representing digits in ones
  *Return: Always 0 (Success)
  */

int main(void)

{
	int i;
	int j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = (j + 1); j <= '9'; j++)
		{
			putchar(i);
			putchar(j);

			if ((i != '8') || (j != '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
