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
				putchar((char)((int)i / 10));
				putchar((char)((int)i % 10));
				putchar(' ');
				putchar((char)(j / 10));
				putchar((char)(j % 10));
				if (i == 98 && j == 99)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

