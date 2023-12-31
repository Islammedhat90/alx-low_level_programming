#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * string_nconcat - unction that concatenates two strings.
  *@s1: first string.
  *@s2: second string.
  *@n: number of bytes.
  * Return: pointer if success , otherwise NULL.
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, j;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n >= len2)
		n = len2;
	s = malloc(sizeof(char) * (len1 + n + 1));
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (i = 0; i < len1; i++)
		s[i] = s1[i];
	for (j = len1; j < len1 + n; j++)
		s[j] = s2[j - len1];
	s[len1 + n] = '\0';
	return (s);
}
