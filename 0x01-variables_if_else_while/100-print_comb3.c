#include <stdio.h>

/**
  * main - print all possible different combinations of two digits.
  *
  * Return: 0 (Success)
  */

int main(void)
{
	int i = 0;
	int j = 0;

	for (i; i < 10; i++)
	{
		for (j; j < 10; j++)
		{
			if (i == j || j < i)
				continue;
			putchar(i + '0');
			putchar(j + '0');
			if (i != 8 && j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
