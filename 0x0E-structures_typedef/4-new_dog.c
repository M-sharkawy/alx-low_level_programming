#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicate the string in the new memory
 *
 * @str: the string given
 *
 * Return: NULL if str is NULL or a point to the duplicated string
*/

char *_strdup(char *str)
{
	int sorc_index;
	int destin_index;
	char *copy;

	sorc_index = 0;
	destin_index = 0;
	if (str == NULL)
	{
		return (NULL);
	}

	while (str[sorc_index] != '\0')
	{
		sorc_index = sorc_index + 1;
	}

	copy = (char *)malloc(sizeof(char) * (sorc_index + 1));

	if (copy == NULL)
	{
		return (NULL);
	}

	while (destin_index < sorc_index)
	{
		copy[destin_index] = str[destin_index];
		destin_index = destin_index + 1;
	}
	copy[destin_index] = '\0';

	return (copy);
}

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
	return (NULL);
	}

	  new_dog = malloc(sizeof(dog_t));
	if (!new_dog)
	return (NULL);

	new_dog->name = _strdup(name);
	new_dog->owner = _strdup(owner);
	if (!new_dog->name || !new_dog->owner)
	{
	free(new_dog);
	return (NULL);
	}

	new_dog->age = age;
	return (new_dog);
}
