#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: head of the linked list.
 * Return: Always 0.
 */

void free_list(list_t *head)
{
	list_t *curr = head;

	while (head != NULL)
	{
		head = head->next;
		free(curr->str);
		free(curr);
		curr = head;
	}
}
