#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initialize the structure
 *
 * @d: dog pointer
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
