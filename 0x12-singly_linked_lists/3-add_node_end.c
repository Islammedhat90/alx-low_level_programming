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
	list_t *end;

	tail = malloc(sizeof(list_t));
	if (!tail || !str)
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
	end = *head;
	while (!end->next)
		end = end->next;
	end->next = tail;
	if (!head)
		*head = tail;
	return (tail);
}
