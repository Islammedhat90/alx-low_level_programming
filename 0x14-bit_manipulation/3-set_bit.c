#include "main.h"

/**
 * set_bit - Sets value of bit to 1
 *
 * @n: long int
 *
 * @index: unsigned int
 *
 * Return: 1 if works -1 on failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num = 1;

	if (index > sizeof(n) * 8)
		return (-1);
	num = num << index;
	*n = (*n | num);
	return (1);
}
