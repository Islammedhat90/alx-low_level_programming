#include <stdio.h>

/**
  * main - Fibonacci sequence whose values do not exceed 4,000,000, 
  * write a program that finds and prints the sum of the even-valued terms.
  *
  * Return: 0 (Success)
  */

int main(void)
{
	long sum = 2;
	long i = 1;
	long j = 2;

	while (i + j < 4000000)
	{
		long new = i + j;

		i = j;
		j = new;
		if (new % 2 == 0)
		{
			sum = sum + new;
		}
	}
	printf("%li\n", sum);
	return (0);
}


