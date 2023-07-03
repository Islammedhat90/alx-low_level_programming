#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of the two diagonals
 *@a: first value -char
 *@size: second value -int
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size * size; i + size + 1)
	{
		sum1 = sum1 + a[i];
	}
	for (j = size - 1; j < size * size; j + size - 1)
	{
		sum2 = sum2 + a[j];
	}
	printf("%i, %i\n", sum1, sum2);
}
