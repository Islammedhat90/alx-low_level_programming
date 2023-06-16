#include <stdio.h>

/**
  * main - print all numbers base 16
  *
  * Return: 0 (Success)
  */

int main(void)
{
	char c = '0';

	while (c <= 'f')
	{
		putchar(c);
		if (c == '9')
		{
			c = 'a';
			continue;
		}
		c++;
	}
	putchar('\n');
	return (0);
}
