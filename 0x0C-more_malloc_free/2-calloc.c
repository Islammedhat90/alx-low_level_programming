#include "main.h"
#include <stdlib.h>

/**
  * _calloc - function that allocates memory for an array, using malloc.
  *@nmemb: number of elements.
  *@size: size of elements.
  *
  * Return: NULL if fails, otherwise pointer to memory.
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned char *loc;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	loc = malloc(nmemb * size);
	if (loc == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		loc[i] = (unsigned char)0;
	return (loc);
}
