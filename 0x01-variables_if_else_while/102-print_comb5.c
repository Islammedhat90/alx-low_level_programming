#include <stdio.h>

/**
  * main - prints all possible combinations of two two-digit numbers.
  *
  * Return: 0 (Success)
  */

int main(void)
{
	int i;
	int j;

	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			if (i < j)
			{
				putchar((char)(i >> 8));
				putchar((char)(i & 0xFF));
				putchar(' ');
				putchar((char)(j >> 8));
				putchar((char)(j & 0xFF));
				if (i == 98 & j == 99)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

