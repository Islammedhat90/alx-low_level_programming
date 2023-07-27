#include "lists.h"


/**
 * print_list - function that prints all the elements of a list_t list
 * @h: Const pointer of structure list_t
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	int i = 0;
	const list_t *t = h;

	while (t != NULL)
	{
		if ((*t).str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", (*t).len, (*t).str);
		t = (*t).next;
		i++;
	}
	return (i);
}
