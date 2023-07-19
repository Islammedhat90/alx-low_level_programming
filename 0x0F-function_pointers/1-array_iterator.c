#include "function_pointers.h"
#include <stdlib.h>

/**
  * array_iterator -  function that executes a function
  * given as a parameter on each element of an array.
  *@array: array with elements.
  *@size: size of array.
  *@action: function to execute on array.
  * Return: nothing.
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || size <= 0 || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
