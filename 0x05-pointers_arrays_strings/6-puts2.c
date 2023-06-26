#include "main.h"
#include "2-strlen.c"

/**
 * puts2 - Write a function that prints every other character of a string,
 *         starting with the first character, followed by a new line.
 *
 * @s: This pointer point to a char or string
 *
 *
 */

void puts2(char *s)
{
	int i;
	int l = _strlen(s);

	for (i = 0; i < l; i + 2)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
