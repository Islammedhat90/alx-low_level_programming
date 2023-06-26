#include "main.h"
#include <stdio.h>

/**
  * print_rev - Prints a string in reverse
  * @s: The string to pirint
  * 
  * _strlen - Returns the length of a string
  * @s: string to get length
  * Return: void
  */
void print_rev(char *s)
{
	int length = _strlen(s);

	length = length - 1;
	while (length >= 0)
	{
		_putchar(s[length]);
		length--;
	}
	_putchar('\n');
}

int _strlen(char *s)
{
	int length = 0;

	while (*(s + length) != '\0')
		length++;
	return (length);
}
