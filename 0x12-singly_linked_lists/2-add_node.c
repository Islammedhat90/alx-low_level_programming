#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: pointer of structure list_t
 * @str: string to be added
 * Return: List with new node for list_t list, NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int i = 0;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!head || !new)
		return (NULL);
	if (str)
	{
		new->str = strdup(str);
		if (!new->str)
		{
			free(new);
			return (NULL);
		}
	}
	while(new->str[i])
		i++;
	new->len = i;
	new->next = *head;
	*head = new;
	return (new);
}
