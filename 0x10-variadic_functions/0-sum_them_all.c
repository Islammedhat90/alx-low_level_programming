#include "variadic_functions.h"

/**
  * sum_them_all - function that returns the sum of all its parameters.
  *@n: number of arguments.
  *
  * Return: sum of parameters.
  */

int sum_them_all(const unsigned int n, ...)
{
	va_list all;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(all, n);
	for (i = 0; i < n; i++)
		sum = sum + va_arg(all, int);
	va_end(all);
	return (sum);
}
