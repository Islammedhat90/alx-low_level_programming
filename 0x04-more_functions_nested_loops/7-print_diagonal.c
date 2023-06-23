#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: The number of \ characters to be printed.
 */

void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			int j;

			_putchar('\\');
			_putchar('\n');

			if (i == n - 1)
				break;
			for (j = 0; j < i + 1; j++)
				_putchar(' ');
		}
	}
}
