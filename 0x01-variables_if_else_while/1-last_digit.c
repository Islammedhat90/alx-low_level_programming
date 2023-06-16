#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print last digit of number n
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	int ldigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ldigit = n % 10;
	if (ldigit < 6 && ldigit > 0)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, ldigit);
	else if (ldigit == 0)
		printf("Last digit of %i is %i and is 0\n", n, ldigit);
	else
		printf("Last digit of %i is %i and is greater than 5\n", n, ldigit);
	return (0);
}
