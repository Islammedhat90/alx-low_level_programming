#include "main.h"

/**
 * clear_bit -  Sets the value of a bit to 0 at a given index
 *
 * @n: long int
 *
 * @index: unsigned int
 *
 * Return: 1 if works -1 on failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num = 1;

	if (index > sizeof(n) * 8)
		return (-1);
	num = num << index;
	*n = (*n & ~num);
	return (1);
}
