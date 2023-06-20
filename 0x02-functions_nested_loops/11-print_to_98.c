#include "main.h"
#include <stdio.h>

/**
  * print_to_98 - prints from a number till 98.
  * @n: number
  *
  * Return: print numbers.
  */

void print_to_98(int n)
{
	while (n != 98)
	{
		if (n > 98)
		{
			printf("%i, ", n);
			n--;
		}
		else
		{
			printf("%i, ", n);
			n++;
		}
	}
	printf("%i", n);
	putchar('\n');
}
