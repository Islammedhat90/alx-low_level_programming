#include <stdio.h>

/**
  * main - print all combinations of single digits
  *
  * Return: 0 (success)
  */

int main(void)
{
	int i = 0;

	while (i < 9)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar(i + '0');
	return (0);
}
