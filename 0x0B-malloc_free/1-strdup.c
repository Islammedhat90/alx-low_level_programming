#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * _strdup - returns a pointer to a newly allocated space in memory,
  * which contains a copy of the string.
  *@str: string to copy.
  *
  * Return: NULL if fails, otherwise pointer to copy.
  */

char *_strdup(char *str)
{
	char *copy;
	int len;
	int i;

	copy = malloc(sizeof(str));

	if (copy == NULL || str == NULL)
		return (NULL);

	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		copy[i] = str[i];
	}
	return (copy);
}
