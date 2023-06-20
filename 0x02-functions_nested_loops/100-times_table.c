#include "main.h"

/**
  * print_times_table - prints the times table n times.
  * @n: number of times
  *
  * Return: nothing.
  */

void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int i;
		int j;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				int x = i * j;

				if (j == 0)
				{
					_putchar(0 + '0');
					continue;
				}
				_putchar(',');
				_putchar(' ');
				if (x > 9 && x < 100)
				{
					_putchar(' ');
					_putchar((x / 10) + '0');
					_putchar((x % 10) + '0');
				}
				else if (x > 99)
				{
					_putchar((x / 100) + '0');
					_putchar(((x / 10) % 10) + '0');
					_putchar((x % 10) + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(x + '0');
				}
			}
			_putchar('\n');
		}
	}
}
