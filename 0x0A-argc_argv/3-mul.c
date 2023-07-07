#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints program name.
  *@argc: argument counter.
  *@argv: argument strings.
  * Return: 0 if successful, 1 error.
  */

int main(int argc, char **argv)
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int x = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", x);
		return (0);
	}
}

