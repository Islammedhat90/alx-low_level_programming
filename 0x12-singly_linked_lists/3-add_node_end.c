#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * of a linked list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i = 0;
	list_t *tail;
	list_t *end = *head;

	tail = malloc(sizeof(list_t));
	if (tail == NULL || str == NULL)
		return (NULL);
	tail->str = strdup(str);
	if (!tail->str)
	{
		free(tail);
		return (NULL);
	}
	while (tail->str[i])
		i++;
	tail->len = i;
	tail->next = NULL;
	if (end == NULL)
		*head = tail;
	else
	{
		while (end->next != NULL)
			end = end->next;
		end->next = tail;
	}
	return (tail);
}
