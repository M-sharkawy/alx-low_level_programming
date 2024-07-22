#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints the dog data structure.
 *
 * @d: pointer.
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("\n");

	if (d->name == NULL)
		printf("(nil)\n");
	else
		printf("Name: %s\n", d->name);

	if (d->age <= 0)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("(nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
