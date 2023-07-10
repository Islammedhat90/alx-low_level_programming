#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * str_concat -  function that concatenates two strings.
  *@s1: first string.
  *@s2: second string.
  *
  * Return: null if failed, otherwise pointer to new string.
  */

char *str_concat(char *s1, char *s2)
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	char *new;
	int i;
	int j;

	new = malloc(len1 + len2 + 1);
	if (new == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		new[i] = s1[i];
	for (j = len1; j < len1 + len2; j++)
		new[j] = s2[j - len1];
	new[len1 + len2] = '\0';
	return (new);
}
