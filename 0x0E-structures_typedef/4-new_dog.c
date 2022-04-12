#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int i, n = 0, o = 0;

	if (name == NULL || owner == NULL)
		return (NULL);
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	while (name[n])
		n++;
	d->name = malloc(sizeof(char) * (n + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	for (i = 0; i < n; i++)
		d->name[i] = name[i];
	d->age = age;
	while (owner[o])
		o++;
	d->owner = malloc(sizeof(char) * (o + 1));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	for (i = 0; i < o; i++)
		d->owner[i] = owner[i];
	return (d);
}
