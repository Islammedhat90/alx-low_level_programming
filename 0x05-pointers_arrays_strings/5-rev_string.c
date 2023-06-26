#include "main.h"
#include "2-strlen.c"

/**
  * rev_string - Reverses a string
  * @s: The string to be modified
  *
  * Return: void
  */
void rev_string(char *s)
{
	int l = _strlen(s);
	int i, j;
	char temp[l];

	for (i = 0; i < l; i++)
	{
		temp[i] = s[l - i - 1];
	}
	for (j = 0; j < l; j++)
		s[j] = temp[j];
}
