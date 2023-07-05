#include "main.h"

/**
  * factorial - gets the factorial of number.
  *@n: number.
  *
  * Return: factorial.
  */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n + factorial(n - 1));
}
