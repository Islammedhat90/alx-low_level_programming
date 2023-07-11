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
		if (str[i] != ' '
			words++;
	}
	return (words);
}

/**
  * lettercount - array of number of letters of each word
  *@str: sentence to analyse.
  *
  * Return: array of integers.
  */

int *lettercount(char *str)
{
	int size = strlen(str);
	int words = wordcount(str);
	int i;
	int let = 0;
	int j = 0;
	int *letters = malloc(words * sizeof(int));

	if (letters == NULL)
	{
		free(letters);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		if (str[i] != ' ')
		{
			let++;
			if (str[i + 1] == ' ' || str[i + 1] == '\0')
			{
				letters[j] = let;
				j++;
				let = 0;
			}
		}
	}
	return (letters);
}

/**
  * strtow - splits a string into words.
  *@str: string to split.
  *
  * Return: pointer to split words.
  */

char **strtow(char *str)
{
	if (str == NULL || (strcmp(str, "") == 0))
		return (NULL);
	int *letters = lettercount(str);
	int words = wordcount(str);
	int i;
	int j;
	int index = 0
	int **s = (char **)malloc((words + 1) * sizeof(char *));

	for (i = 0; i < words; i++)
	{
		s[i] = malloc((letters[i] + 1) * sizeof(char));
		if (s[i] == NULL)
		{
			for (; i >= 0; i--)
				free(s[i]);
			free(s);
			return (NULL);
		}
		for (j = index; j < size; j++)
		{
			if (str[j] ! = ' ')
			{
				s[i][j - index] = str[j];
				
				if (str[j + 1] == ' ' || str[j + 1] == '\0')
				{
					s[i][j - index] = '\0';
					break;
				}
				continue;
			}
			continue;
		}
	}
	s[words] == NULL;
	return (s);
}














































