#include <stdio.h>

/**
  * main - print all possible different combinations of two digits.
  *
  * Return: 0 (Success)
  */

int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i == j || j < i)
				continue;
			putchar(i + '0');
			putchar(j + '0');
			if (i = 8 && j = 9)
				break;
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
