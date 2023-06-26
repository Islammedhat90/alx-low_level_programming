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
	char *temp;

	for (i = 0; i < length; i++)
	{
		temp[i] = s[length - i - 1];
	}
	s = temp;
}
