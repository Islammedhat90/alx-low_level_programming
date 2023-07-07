#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

/**
  * main - prints program name.
  *@argc: argument counter.
  *@argv: argument strings.
  * Return: 0 if successful, 1 if error.
  */

int main(int argc, char **argv)
{
	if (argc == 1)
		printf("0\n");
	else
	{
		int i;
		int sum = 0;

		for (i = 1; i < argc; i++)
		{
			int l = strlen(argv[i]);
			int j;

			for (j = 0; j < l; j++)
			{
				if (isdigit(argv[i][j]) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum = sum + atoi(argv[i]);
		}
		printf("%i\n", sum);
	}
	return (0);
}
