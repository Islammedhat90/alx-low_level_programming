#include <stdio.h>
#include <stdint.h>

/**
  * main - firt 98 fibonacci numbers
  *
  * Return: 0 (Success)
  */

int main(void)
{
	int count = 2;
	unsigned long i = 1;
	unsigned long j = 2;

	printf("1, 2, ");
	while (count != 98)
	{
		unsigned long new = i + j;

		i = j;
		j = new;
		if (count == 97)
			printf("%lu\n", new);
		else
		{
			printf("%lu, ", new);
		}
		count++;
	}
	return (0);
}


