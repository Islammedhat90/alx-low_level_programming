#include <stdio.h>

/**
  * main - firt 98 fibonacci numbers
  * 
  * Return: 0 (Success)
  */

int main(void)
{
	int count = 2;
	long i = 1;
	long j = 2;

	printf("1, 2, ");
	while (count != 98)
	{
		long new = i + j;

		i = j;
		j = new;
		printf("%li, ", new);
		if (count == 97)
			printf("%li\n", new);
		else
		{
			printf("%li, ", new);
			count++;
		}
	}
	return (0);
}


