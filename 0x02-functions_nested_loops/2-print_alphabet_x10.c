#include "main.h"

/**
  * print_alphabet_x10 - prints the alphabet 10 times.
  *
  * Return: nothing (Success)
  */

void print_alphabet_x10(void)
{
	int i = 10;

	while (i < 10)
	{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}

}
