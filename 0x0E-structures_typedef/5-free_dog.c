#include "dog.h"
#include <stdlib.h>

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
		free(d->owner);
		free(d->name);
		free(d);
	}
}
