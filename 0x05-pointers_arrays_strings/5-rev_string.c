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
	int i;
	char *temp = NULL;

	for (i = 0; i < l; i++)
	{
		temp[i] = s[l - i - 1];
	}
	s = temp;
}
