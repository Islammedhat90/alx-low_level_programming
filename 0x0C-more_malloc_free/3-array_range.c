#include "main.h"
#include <stdlib.h>

/**
  * array_range - function that creates an array of integers.
  *@min: min number;
  *@max: max number.
  *
  * Return: pointer to array, otherwise null.
  */

int *array_range(int min, int max)
{
	int *nums;
	int i;
	int size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	nums = malloc(sizeof(int) * (size));
	if (nums == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		nums[i] = min++;
	return (nums);
}

