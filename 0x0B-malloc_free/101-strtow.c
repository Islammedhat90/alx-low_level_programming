#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
  * strtow - function that splits a string into words.
  *@str: string to split.
  *
  * Return: NULL if fails, otherwise pointer.
  */

char **strtow(char *str)
{
	char **s;
	int i;
	int j = 0;
	int words = 0;
	int *letters;
	int len = 0;

	if (str == NULL || str == "")
		return (NULL);
	for (i = 0; i < strlen(str); i++)
	{
		if (str[i] != ' ')
		{
			len++;
			if (str[i + 1] == ' ')
			{
				len++;
				words++;
				letters[j] = len;
				len = 0;
			}
		}
		else
		{
			str[i] = "";
		}
	}
	s = (char **)malloc(words * sizeof(char *));
	int x = 0;

	for (i = 0; i < words; i++)
	{
		s[i] = malloc(letters[i] * sizeof(char));
		if(s[i] == NULL)
		{
			for (; i >= 0; i--)
				free(s[i]);
			return (NULL);
		}
		for (j = 0; j <= letters[i]; j++)
		{
			x = x + j;
			s[i][j] = str[x];
		}
	}
	return (s);
}
