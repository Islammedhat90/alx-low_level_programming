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
	if (new == NULL || head == NULL)
		return (NULL);
	if (str == NULL)
	{
		new->str = NULL;
		new->len = 0;
		new->next = *head;
	}
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	while(new->str[i])
		i++;
	new->len = i;
	new->next = *head;
	*head = new;
	return (new);
}
