#include <stdio.h>

/**
  * main - print first 50 fibonacci numbers.
  *
  * Return: 0 (Success).
  */

int main(void)
{
	int count = 2;
	long i = 1;
	long j = 2;

	printf("%lu, %lu, ", i, j);
	while (count != 50)
	{
		long new = i + j;
		i = j;
		j = new;
		if (count == 49)
			printf("%lu\n", new);
		else
		printf("%lu, ", new);
		count++;
	}
	return (0);
}


