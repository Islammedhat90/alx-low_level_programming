#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
  * wordcount - counts number of words in a string
  *@str: string to work on.
  *
  * Return: int with number of words.
  */

int wordcount(char *str)
{
	int words = 0;
	int i = 0;
	int size = strlen(str);

	for (i = 0; i < size; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			words++;
	}
	return (words);
}

