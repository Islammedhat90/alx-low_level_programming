#include <stdio.h>

/**
  * main - print all possible combinations for two digits
  * Return: 0 (Success)
  */

int main(void)
{
	int i;
	int j;
	int z;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (z = 0; z < 10; z++)
			{
				if (j <= i || z <= j)
					continue;
				putchar(i + '0');
				putchar(j + '0');
				putchar(z + '0');
				if (i == 7 && j == 8 && z == 9)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
