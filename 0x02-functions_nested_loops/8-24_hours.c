#include "main.h"

/**
  * jack_bauer - prints every minute of the day.
  *
  * Return: nothing (Success)
  */
void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
				_putchar(((int)i / 10) + '0');
				_putchar(((int)i % 10) + '0');
				_putchar(':');
				_putchar(((int)j / 10) + '0');
				_putchar(((int)j % 10) + '0');
				_putchar('\n');
		}
	}
	putchar('\n');
}

