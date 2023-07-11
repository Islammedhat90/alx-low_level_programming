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
	int *letters = malloc(words * sizeof(int) - 3);

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
	int *letters = lettercount(str);
	int words = wordcount(str);
	int i, j, index = 0;
	char **s;

	if (str == NULL || (strcmp(str, "") == 0) || words == 0)
		return (NULL);
	s = malloc((words) * sizeof(char *) - 2);

	for (i = 0; i < words; i++)
	{
		s[i] = malloc((letters[i] - 1) * sizeof(char));
		if (s[i] == NULL)
		{
			for (; i >= 0; i--)
				free(s[i]);
			free(s);
			return (NULL);
		}
		for (j = 0; j < letters[i]; j++)
		{
			if (str[index] != ' ')
			{
				s[i][j] = str[index];
				if (str[index + 1] == ' ' || str[index + 1] == '\0')
				{
					s[i][j + 1] = '\0';
					index++;
					break;
				}
				index++;
				continue;
			}
			j = -1;
			index++;
		}
	}
	s[words] = '\0';
	return (s);
}
