#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * create_array - creates an array of chars,
  * and initializes it with a specific char.
  *@size: size of array.
  *@c: character to initialize with.
  *
  * Return: NULL if size 0 or fails, otherwise pointer to array.
  */

char *create_array(unsigned int size, char c)
{
	char *s = malloc(size * sizeof(c));

	if (size == 0)
		return (NULL);
	if (s == NULL)
		return (NULL);
	else
		return (s);
}
