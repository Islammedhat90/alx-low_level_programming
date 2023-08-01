#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end
 * of a linked list
 * @head: head of a list.
 * @n: int n.
 *
 * Return: address of the new element. NUll if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *current;


	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	current = *head;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new;
	}

	return (new);
}
