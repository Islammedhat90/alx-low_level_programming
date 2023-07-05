#include "main.h"

/**
  * calc - function calculates root
  *@i: first iteration.
  *@n: number to get sqr root for.
  *
  * Return: -1 if no natural ssquare root, returns root if otherwise.
  */

int calc(int i, int n)
{
	if (i * i == n)
		return (i);
	else if (i * i > n || n <= 0)
		return (-1);
	else
		return (calc(i + 1, n));
}

/**
  * _sqrt_recursion -  function that returns the natural square root of a n
  *@n: number.
  *
  * Return: -1 if no natural ssquare root, returns root if otherwise.
  */

int _sqrt_recursion(int n)
{
	return (calc(1, n));
}

