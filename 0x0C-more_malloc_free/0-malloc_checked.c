#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - function that allocates memory using malloc.
  *@b: size of memory.
  *
  * Return: pointer to memory, 98 if fails.
  */
void *malloc_checked(unsigned int b);
{
	void *a = malloc(b);

	if (a == NULL)
		exit(98);
	return (a);
}
