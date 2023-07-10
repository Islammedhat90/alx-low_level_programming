#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
  * argstostr - function that concatenates all the arguments of your program.
  *@ac: number of arguments
  *@av: arguments to be printed
  *
  * Return: NULL if fals, otherwise pointer.
  */

char *argstostr(int ac, char **av)
{
	char *s;
	int i;
	int j;
	int len = 0;
	int x = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		len = len + strlen(av[i]);
	}
	s = malloc(len * sizeof(char));
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			s[x] = av[i][j];
			x++;
		}
		s[x] = '\n';
		x++;
	}
	return (s);
}

