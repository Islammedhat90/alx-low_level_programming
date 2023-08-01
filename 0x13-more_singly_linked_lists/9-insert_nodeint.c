#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * at a given position.
 * @head: head of a list.
 * @idx: index of the list where the new node is
 * added.
 * @n: integer element.
 *
 * Return: the address of the new node, or NULL if it
 * failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new;
	listint_t *current;

	new = malloc(sizeof(listint_t));
	if ((head == NULL && idx != 0) || new == NULL)
		return (NULL);
	new->n = n;
	current = *head;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (*head);
	}
	while (i < idx - 1 && current != NULL)
	{
		current = current->next;
		i++;
	}
	if (i == idx - 1)
	{
		new->next = current->next;
		current->next = new;
		return (new);
	}
	return (NULL);
}
