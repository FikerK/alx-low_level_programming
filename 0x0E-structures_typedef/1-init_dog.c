#include "dog.h"

/**
 * init_dog - initialize a variable type struct dog
 * @d: pointer to structure
 * @name: pointer to dog's name
 * @age: dog's age
 * @owner: pointer to dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
