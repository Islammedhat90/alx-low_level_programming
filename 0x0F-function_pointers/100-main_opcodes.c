#include <stdio.h>
#include <stdlib.h>

/**
 * main -  program that prints the opcodes of its own main function.
 * @argc: argument count.
 * @argv: argument strings.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char *opc = (char *) main;
	int i, nb;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	nb = atoi(argv[1]);
	if (nb < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < nb; i++)
	{
		printf("%.2hhx", opc[i]);
		if (i < nb - 1)
			printf(" ");
	}
	printf("\n");
}
