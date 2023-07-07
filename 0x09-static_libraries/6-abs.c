#include "main.h"

/**
  * _abs - computes the absolute value of an integer.
  *@n: integer to compute.
  * Return: int
  */

int _abs(int n)
{
	if (n < 0)
		return (-1 * n);
	return (n);
}
