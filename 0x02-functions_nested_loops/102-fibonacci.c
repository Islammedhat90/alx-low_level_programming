#include <stdio.h>

/**
  * main - print first 50 fibonacci numbers.
  *
  * Return: 0 (Success).
  */

int main(void)
{
	int count = 2;
	int i = 1;
	int j = 2;

	printf("%i, %i, ", i, j);
	while (count != 50)
	{
		int new = i + j;
		i = j;
		j = new;
		printf("%i, ", new);
		count++;
	}
	return (0);
}


