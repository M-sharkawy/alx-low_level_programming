#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - Creates a new dog file
 *
 * @name: The dog name
 * @age: The  dog age
 * @owner: The dog owner
 *
 * Return: A pointer to the new dog struct, or NULL on failure.
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

  	if (!name || !owner)
	{
	return NULL;
	}

  	new_dog = malloc(sizeof(dog_t));
  	if (!new_dog) 
	return NULL;

  	new_dog->name = strdup(name);
  	new_dog->owner = strdup(owner);
  	if (!new_dog->name || !new_dog->owner) 
  	{
	free(new_dog);
	return NULL;
  	}

  	new_dog->age = age;
  	return new_dog;
}
