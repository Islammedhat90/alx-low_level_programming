#include "main.h"
#include <stdio.h>

/**
  * main - prints program name.
  *@argc: argument counter.
  *@argv: argument strings.
  * Return: 0 if successful.
  */

int main(int argc, __attribute__((unused))char **argv)
{
	printf("%i\n", argc - 1);
	return (0);
}
