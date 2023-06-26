#include "main.h"
#include <stdio.h>

/**
  * print_rev - Prints a string in reverse
  * @s: The string to pirint
  *
  * Return: void
  */
void print_rev(char *s)
{
	int length = _strlen(s);

	while (length >= 0)
	{
		_putchar(s[length]);
		length--;
	}
	_putchar('\n');
}
