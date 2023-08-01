#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the
 * beginning of a list_t list
 * @head: pointer of structure list_t
 * @n: int to be added
 * Return: List with new node for list_t list, NULL if failed
 */

listint_t *add_node(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
