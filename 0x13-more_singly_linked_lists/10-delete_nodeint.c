#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * of a linked list.
 * @head: head of a list.
 * @index: index of the list where the node is
 * deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp;
	listint_t *current;

	temp = malloc(sizeof(listint_t));
	if (*head == NULL || temp == NULL)
		return (-1);
	current = *head;
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (i < index - 1 && current != NULL)
	{
		current = current->next;
		i++;
	}
	if (i == index - 1 && current != NULL)
	{
		temp = current->next;
		current->next = temp->next;
		free(temp);
		return (1);
	}
	return (-1);
}
