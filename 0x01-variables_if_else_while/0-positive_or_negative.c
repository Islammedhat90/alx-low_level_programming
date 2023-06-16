#include <stdlib.h>
#include <time.h>

/**
 * main - program to print whether the number
 * stored in the variable n is positive or negative.
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%i is positive", n);
	}
	else if (n < 0)
	{
		printf("%i is negative", n);
	}
	else
		printf("%i is zero", n);
	return (0);
i
