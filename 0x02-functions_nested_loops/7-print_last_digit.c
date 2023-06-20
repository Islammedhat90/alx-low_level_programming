#include "main.h"

/**
  * print_last_digit - print last digit of number
  * @n: number 
  *
  * Return: number last digit.
  */

int print_last_digit(int n)
{
	int r = n % 10;

	_putchar(r + '0');
	return (r);
}
