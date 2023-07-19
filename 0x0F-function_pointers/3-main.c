#include "3-calc.h"

/**
  * main -  program that performs simple operations.
  *@argc: argument counter.
  *@argv: strings of arguments
  * Return: int after opration or NULL.
  */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%i\n", get_op_func(argv[2])(a, b));
	return (0);
}
