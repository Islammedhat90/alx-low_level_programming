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

			_putchar(x + 48);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
