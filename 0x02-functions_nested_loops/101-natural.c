#include <stdio.h>

/**
  * main - print sum of all the multiples of 3 or 5 below 1024.
  *
  * Return: sum of numbers.
  */

int main(void)
{
	int i;
	int sum = 0;

	for (i = 3; i < 1024; i++)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
			sum = sum + i;
	}
	return (sum);
}
