#include "main.h"
#include  <stdlib.h>

/**
  * _realloc - function that reallocates a memory block
  *@ptr: current memory pointer
  *@old_size: old memory size.
  *@new_size: new memory size.
  * Return: pointer to memory with new size.
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned char *new;
	unsigned char *old = (unsigned char *)ptr;
	int size, i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		new = malloc(new_size);
		if (new == NULL)
			return (NULL);
		free(ptr);
		return (new);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
		new = malloc(new_size);
		if (new == NULL)
			return (NULL);
		if (new_size > old_size)
			size = old_size;
		else
			size = new_size;
		for (i = 0; i < size; i++)
		{
			new[i] = old[i];
		}
		free(ptr);
		return (new);
	}
}
