#include "main.h"

/**
  * main - program that prints _putchar
  *
  * Return: 0 (Success)
  */

int main(void)
{
	char word[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(word[i]);
	_putchar('\n');
	return (0);
}

