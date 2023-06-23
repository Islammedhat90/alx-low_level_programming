#include "holberton.h"

/**
 * print_triangle - Prints a triangle, using the character #.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
	int sq, i;

	if (size > 0)
	{
		for (sq = 1; sq <= size; sq++)
		{
			for (i = size - sq; i > 0; i--)
				_putchar(' ');

			for (i = 0; i < sq; i++)
				_putchar('#');

			if (sq == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
