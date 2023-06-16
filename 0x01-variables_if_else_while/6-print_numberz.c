#include <stdio.h>

/**
  * main - print single digit numbers from 0 using putchar
  *
  * Return: 0 (Success)
  */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
