#include <main.h>

/**
  * _abs - computes the absolute value of an integer.
  *@n: integer to compute.
  * Return: int
  */

int _abs(int n)
{
	if (print_sign(n) == -1)
		return (-1 * n);
	return (n);
}
