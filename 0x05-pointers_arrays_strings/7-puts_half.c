#include "main.h"
#include "2-strlen.c"

/**
 *puts_half - function that prints half of a string, followed by a new line.
 *
 *@str: This is the input string
 */

void puts_half(char *str)
{
	int l = _strlen(str);
	int n;

	if (l % 2 == 0)
		n = l / 2;
	else
		n = ((l - 1) / 2) + 1;
	for (; n < l ; n++)
		_putchar(str[n]);
	_putchar('\n');
}
