#include <stdlib.h>
#include "dog.h"
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to a new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int i, j, lnn = 0, lno = 0;

	d = malloc(sizeof(dog_t));
	if (d == NULL || name == NULL || owner == NULL)
	{
		free(d);
		return (NULL);
	}
	lnn = strlen(name);
	lno = strlen(owner);
	d->name = malloc(lnn + 1);
	d->owner = malloc(lno + 1);
	if ((*d).name == NULL || (*d).owner == NULL)
	{
		free(d->name), free(d->owner), free(d);
		return (NULL);
	}
	for (i = 0; i <= lnn; i++)
		d->name[i] = name[i];
	for (j = 0; j <= lno; j++)
		d->owner[j] = owner[j];
	d->age = age;
	return (d);
}
