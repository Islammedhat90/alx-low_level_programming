#include "main.h"

/**
  * times_table - prints the 9 times table.
  *
  * Return: nothing.
  */

void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int x = i * j;

			if (j == 0)
			{
				_putchar(0 + '0');
				continue;
			}
			_putchar(',');
			_putchar(' ');
			if (x > 9)
			{
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(x + '0');
			}
		}
		_putchar('\n');
	}
}
