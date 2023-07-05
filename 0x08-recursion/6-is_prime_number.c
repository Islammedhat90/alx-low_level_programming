#include "main.h"

/**
  * primechecker - that returns  if the input integer is a prime number.
  *@n: input integer.
  *@i: number to check with.
  * Return: 1 if prime, 0 if not.
  */

int primechecker(int n, int i)
{
	if (i == 1)
		return (1);
	else if (n % i == 0)
		return (0);
	else
		return (primechecker(n, i--));
}
/**
 * is_prime_number - that returns  if the input integer is a prime number.
 *@n: input integer.
 *
 * Return: 1 if prime, 0 if not.
 */

int is_prime_number(int n)
{
	return (primechecker(n, n - 1));
}
