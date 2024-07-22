#include <stdlib.h>
#include "dog.h"

/**
  * free_dog - frees memory allocated by dog
  *
  * @d: pointer
  *
  * Return: 0 sucess
*/

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
