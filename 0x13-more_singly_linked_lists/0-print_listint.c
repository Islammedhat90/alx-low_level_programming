#include "lists.h"

/**
 * print_listint - prints all the elements of a list.
 * @h: head of a list.
 *
 * Return: numbers of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	const listint_t *head = h;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		i++;
	}
	return (i);
}
